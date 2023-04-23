#ifndef _DECL_tcharmmain_H_
#define _DECL_tcharmmain_H_
#include "charm++.h"
#include "envelope.h"
#include <memory>
#include "sdag.h"
/* DECLS: mainchare TCharmMain: Chare{
TCharmMain(CkArgMsg* impl_msg);
  initcall void nodeInit(void);
};
 */
 class TCharmMain;
 class CkIndex_TCharmMain;
 class CProxy_TCharmMain;
/* --------------- index object ------------------ */
class CkIndex_TCharmMain:public CkIndex_Chare{
  public:
    typedef TCharmMain local_t;
    typedef CkIndex_TCharmMain index_t;
    typedef CProxy_TCharmMain proxy_t;
    typedef CProxy_TCharmMain element_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: TCharmMain(CkArgMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_TCharmMain_CkArgMsg();
    // Entry point index lookup
    
    inline static int idx_TCharmMain_CkArgMsg() {
      static int epidx = reg_TCharmMain_CkArgMsg();
      return epidx;
    }

    
    static int ckNew(CkArgMsg* impl_msg) { return idx_TCharmMain_CkArgMsg(); }
    
    static void _call_TCharmMain_CkArgMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_TCharmMain_CkArgMsg(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxy_TCharmMain:public CProxy_Chare{
  public:
    typedef TCharmMain local_t;
    typedef CkIndex_TCharmMain index_t;
    typedef CProxy_TCharmMain proxy_t;
    typedef CProxy_TCharmMain element_t;

    CProxy_TCharmMain(void) {};
    CProxy_TCharmMain(CkChareID __cid) : CProxy_Chare(__cid){  }
    CProxy_TCharmMain(const Chare *c) : CProxy_Chare(c){  }

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
    TCharmMain *ckLocal(void) const
    { return (TCharmMain *)CkLocalChare(&ckGetChareID()); }
/* DECLS: TCharmMain(CkArgMsg* impl_msg);
 */
    static CkChareID ckNew(CkArgMsg* impl_msg, int onPE=CK_PE_ANY);
    static void ckNew(CkArgMsg* impl_msg, CkChareID* pcid, int onPE=CK_PE_ANY);


};
#define TCharmMain_SDAG_CODE 
typedef CBaseT1<Chare, CProxy_TCharmMain>CBase_TCharmMain;

/* ---------------- method closures -------------- */
class Closure_TCharmMain {
  public:


};

extern void _registertcharmmain(void);
#endif
