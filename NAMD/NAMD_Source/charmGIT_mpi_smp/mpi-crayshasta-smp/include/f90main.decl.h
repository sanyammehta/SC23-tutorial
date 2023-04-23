#ifndef _DECL_f90main_H_
#define _DECL_f90main_H_
#include "charm++.h"
#include "envelope.h"
#include <memory>
#include "sdag.h"
/* DECLS: readonly CkChareID mainhandle;
 */

/* DECLS: mainchare f90main: Chare{
f90main(CkArgMsg* impl_msg);
void done();
};
 */
 class f90main;
 class CkIndex_f90main;
 class CProxy_f90main;
/* --------------- index object ------------------ */
class CkIndex_f90main:public CkIndex_Chare{
  public:
    typedef f90main local_t;
    typedef CkIndex_f90main index_t;
    typedef CProxy_f90main proxy_t;
    typedef CProxy_f90main element_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: f90main(CkArgMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_f90main_CkArgMsg();
    // Entry point index lookup
    
    inline static int idx_f90main_CkArgMsg() {
      static int epidx = reg_f90main_CkArgMsg();
      return epidx;
    }

    
    static int ckNew(CkArgMsg* impl_msg) { return idx_f90main_CkArgMsg(); }
    
    static void _call_f90main_CkArgMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_f90main_CkArgMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void done();
     */
    // Entry point registration at startup
    
    static int reg_done_void();
    // Entry point index lookup
    
    inline static int idx_done_void() {
      static int epidx = reg_done_void();
      return epidx;
    }

    
    inline static int idx_done(void (f90main::*)() ) {
      return idx_done_void();
    }


    
    static int done() { return idx_done_void(); }
    
    static void _call_done_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_done_void(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxy_f90main:public CProxy_Chare{
  public:
    typedef f90main local_t;
    typedef CkIndex_f90main index_t;
    typedef CProxy_f90main proxy_t;
    typedef CProxy_f90main element_t;

    CProxy_f90main(void) {};
    CProxy_f90main(CkChareID __cid) : CProxy_Chare(__cid){  }
    CProxy_f90main(const Chare *c) : CProxy_Chare(c){  }

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
    f90main *ckLocal(void) const
    { return (f90main *)CkLocalChare(&ckGetChareID()); }
/* DECLS: f90main(CkArgMsg* impl_msg);
 */
    static CkChareID ckNew(CkArgMsg* impl_msg, int onPE=CK_PE_ANY);
    static void ckNew(CkArgMsg* impl_msg, CkChareID* pcid, int onPE=CK_PE_ANY);

/* DECLS: void done();
 */
    
    void done(const CkEntryOptions *impl_e_opts=NULL);

};
#define f90main_SDAG_CODE 
typedef CBaseT1<Chare, CProxy_f90main>CBase_f90main;


/* ---------------- method closures -------------- */
class Closure_f90main {
  public:


    struct done_2_closure;

};

extern void _registerf90main(void);
#endif
