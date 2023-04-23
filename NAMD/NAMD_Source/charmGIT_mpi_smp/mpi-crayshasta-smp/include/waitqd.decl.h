#ifndef _DECL_waitqd_H_
#define _DECL_waitqd_H_
#include "charm++.h"
#include "envelope.h"
#include <memory>
#include "sdag.h"
#include "CkFutures.decl.h"

/* DECLS: readonly CkChareID _waitqd_qdhandle;
 */

/* DECLS: mainchare waitqd_QDChare: Chare{
waitqd_QDChare(CkArgMsg* impl_msg);
threaded sync void waitQD();
void onQD(CkQdMsg* impl_msg);
waitqd_QDChare(CkMigrateMessage* impl_msg);
};
 */
 class waitqd_QDChare;
 class CkIndex_waitqd_QDChare;
 class CProxy_waitqd_QDChare;
/* --------------- index object ------------------ */
class CkIndex_waitqd_QDChare:public CkIndex_Chare{
  public:
    typedef waitqd_QDChare local_t;
    typedef CkIndex_waitqd_QDChare index_t;
    typedef CProxy_waitqd_QDChare proxy_t;
    typedef CProxy_waitqd_QDChare element_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: waitqd_QDChare(CkArgMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_waitqd_QDChare_CkArgMsg();
    // Entry point index lookup
    
    inline static int idx_waitqd_QDChare_CkArgMsg() {
      static int epidx = reg_waitqd_QDChare_CkArgMsg();
      return epidx;
    }

    
    static int ckNew(CkArgMsg* impl_msg) { return idx_waitqd_QDChare_CkArgMsg(); }
    
    static void _call_waitqd_QDChare_CkArgMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_waitqd_QDChare_CkArgMsg(void* impl_msg, void* impl_obj);
    /* DECLS: threaded sync void waitQD();
     */
    // Entry point registration at startup
    
    static int reg_waitQD_void();
    // Entry point index lookup
    
    inline static int idx_waitQD_void() {
      static int epidx = reg_waitQD_void();
      return epidx;
    }

    
    inline static int idx_waitQD(void (waitqd_QDChare::*)() ) {
      return idx_waitQD_void();
    }


    
    static int waitQD() { return idx_waitQD_void(); }
    
    static void _call_waitQD_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_waitQD_void(void* impl_msg, void* impl_obj);
    
    static void _callthr_waitQD_void(CkThrCallArg *);
    /* DECLS: void onQD(CkQdMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_onQD_CkQdMsg();
    // Entry point index lookup
    
    inline static int idx_onQD_CkQdMsg() {
      static int epidx = reg_onQD_CkQdMsg();
      return epidx;
    }

    
    inline static int idx_onQD(void (waitqd_QDChare::*)(CkQdMsg* impl_msg) ) {
      return idx_onQD_CkQdMsg();
    }


    
    static int onQD(CkQdMsg* impl_msg) { return idx_onQD_CkQdMsg(); }
    
    static void _call_onQD_CkQdMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_onQD_CkQdMsg(void* impl_msg, void* impl_obj);
    /* DECLS: waitqd_QDChare(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_waitqd_QDChare_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_waitqd_QDChare_CkMigrateMessage() {
      static int epidx = reg_waitqd_QDChare_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_waitqd_QDChare_CkMigrateMessage(); }
    
    static void _call_waitqd_QDChare_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_waitqd_QDChare_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxy_waitqd_QDChare:public CProxy_Chare{
  public:
    typedef waitqd_QDChare local_t;
    typedef CkIndex_waitqd_QDChare index_t;
    typedef CProxy_waitqd_QDChare proxy_t;
    typedef CProxy_waitqd_QDChare element_t;

    CProxy_waitqd_QDChare(void) {};
    CProxy_waitqd_QDChare(CkChareID __cid) : CProxy_Chare(__cid){  }
    CProxy_waitqd_QDChare(const Chare *c) : CProxy_Chare(c){  }

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
    waitqd_QDChare *ckLocal(void) const
    { return (waitqd_QDChare *)CkLocalChare(&ckGetChareID()); }
/* DECLS: waitqd_QDChare(CkArgMsg* impl_msg);
 */
    static CkChareID ckNew(CkArgMsg* impl_msg, int onPE=CK_PE_ANY);
    static void ckNew(CkArgMsg* impl_msg, CkChareID* pcid, int onPE=CK_PE_ANY);

/* DECLS: threaded sync void waitQD();
 */
    
    void waitQD(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void onQD(CkQdMsg* impl_msg);
 */
    
    void onQD(CkQdMsg* impl_msg);

/* DECLS: waitqd_QDChare(CkMigrateMessage* impl_msg);
 */

};
#define waitqd_QDChare_SDAG_CODE 
typedef CBaseT1<Chare, CProxy_waitqd_QDChare>CBase_waitqd_QDChare;



/* ---------------- method closures -------------- */
class Closure_waitqd_QDChare {
  public:


    struct waitQD_2_closure;



};

extern void _registerwaitqd(void);
#endif
