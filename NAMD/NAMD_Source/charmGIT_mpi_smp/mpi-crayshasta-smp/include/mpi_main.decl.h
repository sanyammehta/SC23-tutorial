#ifndef _DECL_mpi_main_H_
#define _DECL_mpi_main_H_
#include "charm++.h"
#include "envelope.h"
#include <memory>
#include "sdag.h"
/* DECLS: mainchare mpi_main: Chare{
mpi_main(CkArgMsg* impl_msg);
void exit();
};
 */
 class mpi_main;
 class CkIndex_mpi_main;
 class CProxy_mpi_main;
/* --------------- index object ------------------ */
class CkIndex_mpi_main:public CkIndex_Chare{
  public:
    typedef mpi_main local_t;
    typedef CkIndex_mpi_main index_t;
    typedef CProxy_mpi_main proxy_t;
    typedef CProxy_mpi_main element_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: mpi_main(CkArgMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_mpi_main_CkArgMsg();
    // Entry point index lookup
    
    inline static int idx_mpi_main_CkArgMsg() {
      static int epidx = reg_mpi_main_CkArgMsg();
      return epidx;
    }

    
    static int ckNew(CkArgMsg* impl_msg) { return idx_mpi_main_CkArgMsg(); }
    
    static void _call_mpi_main_CkArgMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_mpi_main_CkArgMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void exit();
     */
    // Entry point registration at startup
    
    static int reg_exit_void();
    // Entry point index lookup
    
    inline static int idx_exit_void() {
      static int epidx = reg_exit_void();
      return epidx;
    }

    
    inline static int idx_exit(void (mpi_main::*)() ) {
      return idx_exit_void();
    }


    
    static int exit() { return idx_exit_void(); }
    
    static void _call_exit_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_exit_void(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxy_mpi_main:public CProxy_Chare{
  public:
    typedef mpi_main local_t;
    typedef CkIndex_mpi_main index_t;
    typedef CProxy_mpi_main proxy_t;
    typedef CProxy_mpi_main element_t;

    CProxy_mpi_main(void) {};
    CProxy_mpi_main(CkChareID __cid) : CProxy_Chare(__cid){  }
    CProxy_mpi_main(const Chare *c) : CProxy_Chare(c){  }

    int ckIsDelegated(void) const
    { return CProxy_Chare::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_Chare::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_Chare::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_Chare::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxy_Chare::ckCheck(); }
    const CkChareID &ckGetChareID(void) const
    { return CProxy_Chare::ckGetChareID(); }
    operator const CkChareID &(void) const
    { return ckGetChareID(); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_Chare::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_Chare::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_Chare::pup(p);
    }

    void ckSetChareID(const CkChareID &c)
    {      CProxy_Chare::ckSetChareID(c); }
    mpi_main *ckLocal(void) const
    { return (mpi_main *)CkLocalChare(&ckGetChareID()); }
/* DECLS: mpi_main(CkArgMsg* impl_msg);
 */
    static CkChareID ckNew(CkArgMsg* impl_msg, int onPE=CK_PE_ANY);
    static void ckNew(CkArgMsg* impl_msg, CkChareID* pcid, int onPE=CK_PE_ANY);

/* DECLS: void exit();
 */
    
    void exit(const CkEntryOptions *impl_e_opts=NULL);

};
#define mpi_main_SDAG_CODE 
typedef CBaseT1<Chare, CProxy_mpi_main>CBase_mpi_main;

/* ---------------- method closures -------------- */
class Closure_mpi_main {
  public:


    struct exit_2_closure;

};

extern void _registermpi_main(void);
extern "C" void CkRegisterMainModule(void);
#endif
