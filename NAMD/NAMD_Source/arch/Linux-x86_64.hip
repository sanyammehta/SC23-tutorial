ifneq ($(ROCM_DIR),)
   ROCMDIR = $(ROCM_DIR)
endif
HIPDIR  = $(ROCMDIR)

ifeq (,$(wildcard $(HIPDIR)/bin/hipconfig))
   HIPDIR = $(ROCMDIR)/hip
endif

ifeq ($(PLATFORM),)
    PLATFORM = $(shell $(HIPDIR)/bin/hipconfig -P)
endif
export HIP_PLATFORM=$(PLATFORM)
HIPCCOPTS = -O3 -fexpensive-optimizations -ffast-math -DNAMD_HIP $(shell export HIP_PLATFORM=$(PLATFORM); $(HIPDIR)/bin/hipconfig --cpp_config) 
ifneq ($(HIPCUB_DIR),)
    HIPCCOPTS += -I$(HIPCUB_DIR)
endif
ifneq ($(PLATFORM),nvcc)
    ifneq ($(ROCPRIM_DIR),)
        HIPCCOPTS += -I$(ROCPRIM_DIR)
    endif
    #-fnogpu-rdc means we do not need to specify a specific linker, 
    #as the kernels will be generated at compile time rather than link time.
    HIPCCOPTS += -fno-gpu-rdc -fcuda-flush-denormals-to-zero -Wno-invalid-command-line-argument -Wno-unused-command-line-argument -Wno-invalid-constexpr -Wno-ignored-optimization-argument -Wno-unused-private-field
    #The (optional) --amdgpu-target directives are useful for cross-compiling to different AMD architectures.
    #By default, ROCm picks out appropriate targets for the hardware it sees during compilation.
    ifneq ($(AMDGPUTARGETS),)
        HIPCCOPTS += --amdgpu-target=$(AMDGPUTARGETS)
    else
        HIPCCOPTS += --amdgpu-target=gfx906,gfx908,gfx90a
    endif
else
    # include CUB
    CUBDIR=.rootdir/cub
    HIPCCOPTS += --use_fast_math  -I$(CUBDIR) -DNAMD_CUDA
endif

HIPCC = $(HIPDIR)/bin/hipcc -m64 -std=c++11

ROCMV = $(shell export HIP_PLATFORM=$(PLATFORM); $(HIPDIR)/bin/hipconfig -v | cut -d "." -f 1,2 )

CUDAFLAGS = -DNAMD_HIP
ifneq ($(PLATFORM),nvcc)
    #ROCM version 3.3 was the last one to use the old hcc compiler.
    ifeq ($(ROCMV),3.3)
    	CUDALIB = -L$(HIPDIR)/lib -lhip_hcc -lrocfft
    else
    	CUDALIB = -L$(HIPDIR)/lib -lamdhip64 -lrocfft
    endif
    # CHARMLD = -ld++ $(HIPCC)
    ifneq ($(ROCFFT_DIR),)
        CUDAFLAGS += -I$(ROCFFT_DIR) 
    endif
else
    CUDALIB = -L$(CUDADIR)/lib64 -lcudart -lrt -lcufft
    CUDAFLAGS += -DNAMD_CUDA
endif
CUDAOBJS = $(CUDAOBJSRAW)
CUDA = $(CUDAFLAGS) -I. $(shell export HIP_PLATFORM=$(PLATFORM); $(HIPDIR)/bin/hipconfig --cpp_config) 
CUDACC = $(HIPCC)
CUDACCOPTS = $(HIPCCOPTS)
