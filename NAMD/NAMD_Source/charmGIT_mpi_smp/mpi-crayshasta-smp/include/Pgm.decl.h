#ifndef _DECL_Pgm_H_
#define _DECL_Pgm_H_
#include "charm++.h"
#include "envelope.h"
#include <memory>
#include "sdag.h"
#include "PMAF.decl.h"

/* DECLS: readonly CkChareID mainhandle;
 */

/* DECLS: mainchare main: Chare{
main(CkArgMsg* impl_msg);
threaded void readMesh();
};
 */
 class main;
 class CkIndex_main;
 class CProxy_main;
/* --------------- index object ------------------ */
class CkIndex_main:public CkIndex_Chare{
  public:
    typedef main local_t;
    typedef CkIndex_main index_t;
    typedef CProxy_main proxy_t;
    typedef CProxy_main element_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: main(CkArgMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_main_CkArgMsg();
    // Entry point index lookup
    
    inline static int idx_main_CkArgMsg() {
      static int epidx = reg_main_CkArgMsg();
      return epidx;
    }

    
    static int ckNew(CkArgMsg* impl_msg) { return idx_main_CkArgMsg(); }
    
    static void _call_main_CkArgMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_main_CkArgMsg(void* impl_msg, void* impl_obj);
    /* DECLS: threaded void readMesh();
     */
    // Entry point registration at startup
    
    static int reg_readMesh_void();
    // Entry point index lookup
    
    inline static int idx_readMesh_void() {
      static int epidx = reg_readMesh_void();
      return epidx;
    }

    
    inline static int idx_readMesh(void (main::*)() ) {
      return idx_readMesh_void();
    }


    
    static int readMesh() { return idx_readMesh_void(); }
    
    static void _call_readMesh_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_readMesh_void(void* impl_msg, void* impl_obj);
    
    static void _callthr_readMesh_void(CkThrCallArg *);
};
/* --------------- element proxy ------------------ */
class CProxy_main:public CProxy_Chare{
  public:
    typedef main local_t;
    typedef CkIndex_main index_t;
    typedef CProxy_main proxy_t;
    typedef CProxy_main element_t;

    CProxy_main(void) {};
    CProxy_main(CkChareID __cid) : CProxy_Chare(__cid){  }
    CProxy_main(const Chare *c) : CProxy_Chare(c){  }

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
    main *ckLocal(void) const
    { return (main *)CkLocalChare(&ckGetChareID()); }
/* DECLS: main(CkArgMsg* impl_msg);
 */
    static CkChareID ckNew(CkArgMsg* impl_msg, int onPE=CK_PE_ANY);
    static void ckNew(CkArgMsg* impl_msg, CkChareID* pcid, int onPE=CK_PE_ANY);

/* DECLS: threaded void readMesh();
 */
    
    void readMesh(const CkEntryOptions *impl_e_opts=NULL);

};
#define main_SDAG_CODE 
typedef CBaseT1<Chare, CProxy_main>CBase_main;



/* ---------------- method closures -------------- */
class Closure_main {
  public:


    struct readMesh_2_closure;

};

extern void _registerPgm(void);
extern "C" void CkRegisterMainModule(void);
#endif
