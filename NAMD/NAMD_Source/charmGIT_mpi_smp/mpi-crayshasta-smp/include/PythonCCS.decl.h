#ifndef _DECL_PythonCCS_H_
#define _DECL_PythonCCS_H_
#include "charm++.h"
#include "envelope.h"
#include <memory>
#include "sdag.h"

/* DECLS: readonly CProxy_PythonCCS pythonCcsProxy;
 */

/* DECLS: mainchare PythonCCS: Chare{
PythonCCS(CkArgMsg* impl_msg);
void forwardString(CkReductionMsg* impl_msg);
void forwardInt(CkReductionMsg* impl_msg);
};
 */
 class PythonCCS;
 class CkIndex_PythonCCS;
 class CProxy_PythonCCS;
/* --------------- index object ------------------ */
class CkIndex_PythonCCS:public CkIndex_Chare{
  public:
    typedef PythonCCS local_t;
    typedef CkIndex_PythonCCS index_t;
    typedef CProxy_PythonCCS proxy_t;
    typedef CProxy_PythonCCS element_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: PythonCCS(CkArgMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_PythonCCS_CkArgMsg();
    // Entry point index lookup
    
    inline static int idx_PythonCCS_CkArgMsg() {
      static int epidx = reg_PythonCCS_CkArgMsg();
      return epidx;
    }

    
    static int ckNew(CkArgMsg* impl_msg) { return idx_PythonCCS_CkArgMsg(); }
    
    static void _call_PythonCCS_CkArgMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_PythonCCS_CkArgMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void forwardString(CkReductionMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_forwardString_CkReductionMsg();
    // Entry point index lookup
    
    inline static int idx_forwardString_CkReductionMsg() {
      static int epidx = reg_forwardString_CkReductionMsg();
      return epidx;
    }

    
    inline static int idx_forwardString(void (PythonCCS::*)(CkReductionMsg* impl_msg) ) {
      return idx_forwardString_CkReductionMsg();
    }


    
    static int forwardString(CkReductionMsg* impl_msg) { return idx_forwardString_CkReductionMsg(); }
    
    static void _call_forwardString_CkReductionMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_forwardString_CkReductionMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void forwardInt(CkReductionMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_forwardInt_CkReductionMsg();
    // Entry point index lookup
    
    inline static int idx_forwardInt_CkReductionMsg() {
      static int epidx = reg_forwardInt_CkReductionMsg();
      return epidx;
    }

    
    inline static int idx_forwardInt(void (PythonCCS::*)(CkReductionMsg* impl_msg) ) {
      return idx_forwardInt_CkReductionMsg();
    }


    
    static int forwardInt(CkReductionMsg* impl_msg) { return idx_forwardInt_CkReductionMsg(); }
    
    static void _call_forwardInt_CkReductionMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_forwardInt_CkReductionMsg(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxy_PythonCCS:public CProxy_Chare{
  public:
    typedef PythonCCS local_t;
    typedef CkIndex_PythonCCS index_t;
    typedef CProxy_PythonCCS proxy_t;
    typedef CProxy_PythonCCS element_t;

    CProxy_PythonCCS(void) {};
    CProxy_PythonCCS(CkChareID __cid) : CProxy_Chare(__cid){  }
    CProxy_PythonCCS(const Chare *c) : CProxy_Chare(c){  }

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
    PythonCCS *ckLocal(void) const
    { return (PythonCCS *)CkLocalChare(&ckGetChareID()); }
/* DECLS: PythonCCS(CkArgMsg* impl_msg);
 */
    static CkChareID ckNew(CkArgMsg* impl_msg, int onPE=CK_PE_ANY);
    static void ckNew(CkArgMsg* impl_msg, CkChareID* pcid, int onPE=CK_PE_ANY);

/* DECLS: void forwardString(CkReductionMsg* impl_msg);
 */
    
    void forwardString(CkReductionMsg* impl_msg);

/* DECLS: void forwardInt(CkReductionMsg* impl_msg);
 */
    
    void forwardInt(CkReductionMsg* impl_msg);

};
#define PythonCCS_SDAG_CODE 
typedef CBaseT1<Chare, CProxy_PythonCCS>CBase_PythonCCS;



/* ---------------- method closures -------------- */
class Closure_PythonCCS {
  public:



};

extern void _registerPythonCCS(void);
#endif
