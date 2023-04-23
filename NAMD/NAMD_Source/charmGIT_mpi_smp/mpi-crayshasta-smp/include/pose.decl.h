#ifndef _DECL_pose_H_
#define _DECL_pose_H_
#include "charm++.h"
#include "envelope.h"
#include <memory>
#include "sdag.h"
/* DECLS: readonly double busyWait;
 */

/* DECLS: readonly double sim_timer;
 */

/* DECLS: readonly int POSE_inactDetect;
 */

/* DECLS: readonly POSE_TimeType POSE_endtime;
 */

/* DECLS: readonly POSE_Config pose_config;
 */

/* DECLS: readonly int totalNumPosers;
 */

#ifndef GROUPDEPNUM_DECLARED
# define GROUPDEPNUM_DECLARED
struct GroupDepNum
{
  int groupDepNum;
  explicit GroupDepNum(int g = 0) : groupDepNum{g} { }
  operator int() const { return groupDepNum; }
};
#endif
/* DECLS: message callBack;
 */
class callBack;
class CMessage_callBack:public CkMessage{
  public:
    static int __idx;
    void* operator new(size_t, void*p) { return p; }
    void* operator new(size_t);
    void* operator new(size_t, int*, const int);
    void* operator new(size_t, int*, const int, const GroupDepNum);
    void* operator new(size_t, int*);
#if CMK_MULTIPLE_DELETE
    void operator delete(void*p, void*){dealloc(p);}
    void operator delete(void*p){dealloc(p);}
    void operator delete(void*p, int*, const int){dealloc(p);}
    void operator delete(void*p, int*, const int, const GroupDepNum){dealloc(p);}
    void operator delete(void*p, int*){dealloc(p);}
#endif
    void operator delete(void*p, size_t){dealloc(p);}
    static void* alloc(int,size_t, int*, int, GroupDepNum);
    static void dealloc(void *p);
    CMessage_callBack();
    static void *pack(callBack *p);
    static callBack* unpack(void* p);
    void *operator new(size_t, const int);
    void *operator new(size_t, const int, const GroupDepNum);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, const int){dealloc(p);}
    void operator delete(void *p, const int, const GroupDepNum){dealloc(p);}
#endif
    static void __register(const char *s, size_t size, CkPackFnPtr pack, CkUnpackFnPtr unpack) {
      __idx = CkRegisterMsg(s, pack, unpack, dealloc, size);
    }
};

/* DECLS: chare pose: Chare{
pose();
void registerCallBack(callBack* impl_msg);
void stop();
void prepExit();
void exit();
pose(CkMigrateMessage* impl_msg);
};
 */
 class pose;
 class CkIndex_pose;
 class CProxy_pose;
/* --------------- index object ------------------ */
class CkIndex_pose:public CkIndex_Chare{
  public:
    typedef pose local_t;
    typedef CkIndex_pose index_t;
    typedef CProxy_pose proxy_t;
    typedef CProxy_pose element_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: pose();
     */
    // Entry point registration at startup
    
    static int reg_pose_void();
    // Entry point index lookup
    
    inline static int idx_pose_void() {
      static int epidx = reg_pose_void();
      return epidx;
    }

    
    static int ckNew() { return idx_pose_void(); }
    
    static void _call_pose_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_pose_void(void* impl_msg, void* impl_obj);
    /* DECLS: void registerCallBack(callBack* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_registerCallBack_callBack();
    // Entry point index lookup
    
    inline static int idx_registerCallBack_callBack() {
      static int epidx = reg_registerCallBack_callBack();
      return epidx;
    }

    
    inline static int idx_registerCallBack(void (pose::*)(callBack* impl_msg) ) {
      return idx_registerCallBack_callBack();
    }


    
    static int registerCallBack(callBack* impl_msg) { return idx_registerCallBack_callBack(); }
    
    static void _call_registerCallBack_callBack(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_registerCallBack_callBack(void* impl_msg, void* impl_obj);
    /* DECLS: void stop();
     */
    // Entry point registration at startup
    
    static int reg_stop_void();
    // Entry point index lookup
    
    inline static int idx_stop_void() {
      static int epidx = reg_stop_void();
      return epidx;
    }

    
    inline static int idx_stop(void (pose::*)() ) {
      return idx_stop_void();
    }


    
    static int stop() { return idx_stop_void(); }
    
    static void _call_stop_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_stop_void(void* impl_msg, void* impl_obj);
    /* DECLS: void prepExit();
     */
    // Entry point registration at startup
    
    static int reg_prepExit_void();
    // Entry point index lookup
    
    inline static int idx_prepExit_void() {
      static int epidx = reg_prepExit_void();
      return epidx;
    }

    
    inline static int idx_prepExit(void (pose::*)() ) {
      return idx_prepExit_void();
    }


    
    static int prepExit() { return idx_prepExit_void(); }
    
    static void _call_prepExit_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_prepExit_void(void* impl_msg, void* impl_obj);
    /* DECLS: void exit();
     */
    // Entry point registration at startup
    
    static int reg_exit_void();
    // Entry point index lookup
    
    inline static int idx_exit_void() {
      static int epidx = reg_exit_void();
      return epidx;
    }

    
    inline static int idx_exit(void (pose::*)() ) {
      return idx_exit_void();
    }


    
    static int exit() { return idx_exit_void(); }
    
    static void _call_exit_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_exit_void(void* impl_msg, void* impl_obj);
    /* DECLS: pose(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_pose_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_pose_CkMigrateMessage() {
      static int epidx = reg_pose_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_pose_CkMigrateMessage(); }
    
    static void _call_pose_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_pose_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxy_pose:public CProxy_Chare{
  public:
    typedef pose local_t;
    typedef CkIndex_pose index_t;
    typedef CProxy_pose proxy_t;
    typedef CProxy_pose element_t;

    CProxy_pose(void) {};
    CProxy_pose(CkChareID __cid) : CProxy_Chare(__cid){  }
    CProxy_pose(const Chare *c) : CProxy_Chare(c){  }

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
    pose *ckLocal(void) const
    { return (pose *)CkLocalChare(&ckGetChareID()); }
/* DECLS: pose();
 */
    static CkChareID ckNew(int onPE=CK_PE_ANY, const CkEntryOptions *impl_e_opts=NULL);
    static void ckNew(CkChareID* pcid, int onPE=CK_PE_ANY, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void registerCallBack(callBack* impl_msg);
 */
    
    void registerCallBack(callBack* impl_msg);

/* DECLS: void stop();
 */
    
    void stop(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void prepExit();
 */
    
    void prepExit(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void exit();
 */
    
    void exit(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: pose(CkMigrateMessage* impl_msg);
 */

};
#define pose_SDAG_CODE 
typedef CBaseT1<Chare, CProxy_pose>CBase_pose;








/* ---------------- method closures -------------- */
class Closure_pose {
  public:



    struct stop_3_closure;


    struct prepExit_4_closure;


    struct exit_5_closure;


};

extern void _registerpose(void);
#endif
