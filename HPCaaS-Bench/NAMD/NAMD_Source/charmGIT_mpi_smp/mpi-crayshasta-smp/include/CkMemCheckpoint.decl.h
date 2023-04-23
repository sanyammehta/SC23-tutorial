#ifndef _DECL_CkMemCheckpoint_H_
#define _DECL_CkMemCheckpoint_H_
#include "charm++.h"
#include "envelope.h"
#include <memory>
#include "sdag.h"
/* DECLS: readonly CkGroupID ckCheckPTGroupID;
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
/* DECLS: message CkArrayCheckPTMessage{
double packData[];
}
;
 */
class CkArrayCheckPTMessage;
class CMessage_CkArrayCheckPTMessage:public CkMessage{
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
    CMessage_CkArrayCheckPTMessage();
    static void *pack(CkArrayCheckPTMessage *p);
    static CkArrayCheckPTMessage* unpack(void* p);
    void *operator new(size_t, int);
    void *operator new(size_t, int, const int);
    void *operator new(size_t, int, const int, const GroupDepNum);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, int){dealloc(p);}
    void operator delete(void *p, int, const int){dealloc(p);}
    void operator delete(void *p, int, const int, const GroupDepNum){dealloc(p);}
#endif
    static void __register(const char *s, size_t size, CkPackFnPtr pack, CkUnpackFnPtr unpack) {
      __idx = CkRegisterMsg(s, pack, unpack, dealloc, size);
    }
};

#ifndef GROUPDEPNUM_DECLARED
# define GROUPDEPNUM_DECLARED
struct GroupDepNum
{
  int groupDepNum;
  explicit GroupDepNum(int g = 0) : groupDepNum{g} { }
  operator int() const { return groupDepNum; }
};
#endif
/* DECLS: message CkProcCheckPTMessage{
char packData[];
}
;
 */
class CkProcCheckPTMessage;
class CMessage_CkProcCheckPTMessage:public CkMessage{
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
    CMessage_CkProcCheckPTMessage();
    static void *pack(CkProcCheckPTMessage *p);
    static CkProcCheckPTMessage* unpack(void* p);
    void *operator new(size_t, int);
    void *operator new(size_t, int, const int);
    void *operator new(size_t, int, const int, const GroupDepNum);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, int){dealloc(p);}
    void operator delete(void *p, int, const int){dealloc(p);}
    void operator delete(void *p, int, const int, const GroupDepNum){dealloc(p);}
#endif
    static void __register(const char *s, size_t size, CkPackFnPtr pack, CkUnpackFnPtr unpack) {
      __idx = CkRegisterMsg(s, pack, unpack, dealloc, size);
    }
};

#ifndef GROUPDEPNUM_DECLARED
# define GROUPDEPNUM_DECLARED
struct GroupDepNum
{
  int groupDepNum;
  explicit GroupDepNum(int g = 0) : groupDepNum{g} { }
  operator int() const { return groupDepNum; }
};
#endif
/* DECLS: message CkArrayCheckPTReqMessage;
 */
class CkArrayCheckPTReqMessage;
class CMessage_CkArrayCheckPTReqMessage:public CkMessage{
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
    CMessage_CkArrayCheckPTReqMessage();
    static void *pack(CkArrayCheckPTReqMessage *p);
    static CkArrayCheckPTReqMessage* unpack(void* p);
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

/* DECLS: group CkMemCheckPT: IrrGroup{
CkMemCheckPT(int w);
void createEntry(const CkArrayID &impl_noname_0, const CkGroupID &impl_noname_1, const CkArrayIndex &impl_noname_2, int impl_noname_3);
void doItNow(int spe, const CkCallback &impl_noname_4);
void recvData(CkArrayCheckPTMessage* impl_msg);
void recvArrayCheckpoint(CkArrayCheckPTMessage* impl_msg);
void gotData();
void recvProcData(CkProcCheckPTMessage* impl_msg);
void syncFiles();
void cpFinish();
void report();
void restart(int impl_noname_5);
void resetReductionMgr();
void removeArrayElements();
void recoverBuddies();
void recoverEntry(CkArrayCheckPTMessage* impl_msg);
void recoverArrayElements();
void finishUp();
void gotReply();
void quiescence(const CkCallback &impl_noname_6);
void inmem_restore(CkArrayCheckPTMessage* impl_msg);
void updateLocations(int n, const CkGroupID *g, const CkArrayIndex *idx, const CmiUInt8 *id, int nowOnPe);
CkMemCheckPT(CkMigrateMessage* impl_msg);
};
 */
 class CkMemCheckPT;
 class CkIndex_CkMemCheckPT;
 class CProxy_CkMemCheckPT;
 class CProxyElement_CkMemCheckPT;
 class CProxySection_CkMemCheckPT;
/* --------------- index object ------------------ */
class CkIndex_CkMemCheckPT:public CkIndex_IrrGroup{
  public:
    typedef CkMemCheckPT local_t;
    typedef CkIndex_CkMemCheckPT index_t;
    typedef CProxy_CkMemCheckPT proxy_t;
    typedef CProxyElement_CkMemCheckPT element_t;
    typedef CProxySection_CkMemCheckPT section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: CkMemCheckPT(int w);
     */
    // Entry point registration at startup
    
    static int reg_CkMemCheckPT_marshall1();
    // Entry point index lookup
    
    inline static int idx_CkMemCheckPT_marshall1() {
      static int epidx = reg_CkMemCheckPT_marshall1();
      return epidx;
    }

    
    static int ckNew(int w) { return idx_CkMemCheckPT_marshall1(); }
    
    static void _call_CkMemCheckPT_marshall1(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_CkMemCheckPT_marshall1(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_CkMemCheckPT_marshall1(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_CkMemCheckPT_marshall1(PUP::er &p,void *msg);
    /* DECLS: void createEntry(const CkArrayID &impl_noname_0, const CkGroupID &impl_noname_1, const CkArrayIndex &impl_noname_2, int impl_noname_3);
     */
    // Entry point registration at startup
    
    static int reg_createEntry_marshall2();
    // Entry point index lookup
    
    inline static int idx_createEntry_marshall2() {
      static int epidx = reg_createEntry_marshall2();
      return epidx;
    }

    
    inline static int idx_createEntry(void (CkMemCheckPT::*)(const CkArrayID &impl_noname_0, const CkGroupID &impl_noname_1, const CkArrayIndex &impl_noname_2, int impl_noname_3) ) {
      return idx_createEntry_marshall2();
    }


    
    static int createEntry(const CkArrayID &impl_noname_0, const CkGroupID &impl_noname_1, const CkArrayIndex &impl_noname_2, int impl_noname_3) { return idx_createEntry_marshall2(); }
    
    static void _call_createEntry_marshall2(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_createEntry_marshall2(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_createEntry_marshall2(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_createEntry_marshall2(PUP::er &p,void *msg);
    /* DECLS: void doItNow(int spe, const CkCallback &impl_noname_4);
     */
    // Entry point registration at startup
    
    static int reg_doItNow_marshall3();
    // Entry point index lookup
    
    inline static int idx_doItNow_marshall3() {
      static int epidx = reg_doItNow_marshall3();
      return epidx;
    }

    
    inline static int idx_doItNow(void (CkMemCheckPT::*)(int spe, const CkCallback &impl_noname_4) ) {
      return idx_doItNow_marshall3();
    }


    
    static int doItNow(int spe, const CkCallback &impl_noname_4) { return idx_doItNow_marshall3(); }
    
    static void _call_doItNow_marshall3(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_doItNow_marshall3(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_doItNow_marshall3(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_doItNow_marshall3(PUP::er &p,void *msg);
    /* DECLS: void recvData(CkArrayCheckPTMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvData_CkArrayCheckPTMessage();
    // Entry point index lookup
    
    inline static int idx_recvData_CkArrayCheckPTMessage() {
      static int epidx = reg_recvData_CkArrayCheckPTMessage();
      return epidx;
    }

    
    inline static int idx_recvData(void (CkMemCheckPT::*)(CkArrayCheckPTMessage* impl_msg) ) {
      return idx_recvData_CkArrayCheckPTMessage();
    }


    
    static int recvData(CkArrayCheckPTMessage* impl_msg) { return idx_recvData_CkArrayCheckPTMessage(); }
    
    static void _call_recvData_CkArrayCheckPTMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvData_CkArrayCheckPTMessage(void* impl_msg, void* impl_obj);
    /* DECLS: void recvArrayCheckpoint(CkArrayCheckPTMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvArrayCheckpoint_CkArrayCheckPTMessage();
    // Entry point index lookup
    
    inline static int idx_recvArrayCheckpoint_CkArrayCheckPTMessage() {
      static int epidx = reg_recvArrayCheckpoint_CkArrayCheckPTMessage();
      return epidx;
    }

    
    inline static int idx_recvArrayCheckpoint(void (CkMemCheckPT::*)(CkArrayCheckPTMessage* impl_msg) ) {
      return idx_recvArrayCheckpoint_CkArrayCheckPTMessage();
    }


    
    static int recvArrayCheckpoint(CkArrayCheckPTMessage* impl_msg) { return idx_recvArrayCheckpoint_CkArrayCheckPTMessage(); }
    
    static void _call_recvArrayCheckpoint_CkArrayCheckPTMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvArrayCheckpoint_CkArrayCheckPTMessage(void* impl_msg, void* impl_obj);
    /* DECLS: void gotData();
     */
    // Entry point registration at startup
    
    static int reg_gotData_void();
    // Entry point index lookup
    
    inline static int idx_gotData_void() {
      static int epidx = reg_gotData_void();
      return epidx;
    }

    
    inline static int idx_gotData(void (CkMemCheckPT::*)() ) {
      return idx_gotData_void();
    }


    
    static int gotData() { return idx_gotData_void(); }
    
    static void _call_gotData_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_gotData_void(void* impl_msg, void* impl_obj);
    /* DECLS: void recvProcData(CkProcCheckPTMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvProcData_CkProcCheckPTMessage();
    // Entry point index lookup
    
    inline static int idx_recvProcData_CkProcCheckPTMessage() {
      static int epidx = reg_recvProcData_CkProcCheckPTMessage();
      return epidx;
    }

    
    inline static int idx_recvProcData(void (CkMemCheckPT::*)(CkProcCheckPTMessage* impl_msg) ) {
      return idx_recvProcData_CkProcCheckPTMessage();
    }


    
    static int recvProcData(CkProcCheckPTMessage* impl_msg) { return idx_recvProcData_CkProcCheckPTMessage(); }
    
    static void _call_recvProcData_CkProcCheckPTMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvProcData_CkProcCheckPTMessage(void* impl_msg, void* impl_obj);
    /* DECLS: void syncFiles();
     */
    // Entry point registration at startup
    
    static int reg_syncFiles_void();
    // Entry point index lookup
    
    inline static int idx_syncFiles_void() {
      static int epidx = reg_syncFiles_void();
      return epidx;
    }

    
    inline static int idx_syncFiles(void (CkMemCheckPT::*)() ) {
      return idx_syncFiles_void();
    }


    
    static int syncFiles() { return idx_syncFiles_void(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_syncFiles_void();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_syncFiles_void() {
      static int epidx = reg_redn_wrapper_syncFiles_void();
      return epidx;
    }
    
    static int redn_wrapper_syncFiles(CkReductionMsg* impl_msg) { return idx_redn_wrapper_syncFiles_void(); }
    
    static void _call_redn_wrapper_syncFiles_void(void* impl_msg, void* impl_obj_void);
    
    static void _call_syncFiles_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_syncFiles_void(void* impl_msg, void* impl_obj);
    /* DECLS: void cpFinish();
     */
    // Entry point registration at startup
    
    static int reg_cpFinish_void();
    // Entry point index lookup
    
    inline static int idx_cpFinish_void() {
      static int epidx = reg_cpFinish_void();
      return epidx;
    }

    
    inline static int idx_cpFinish(void (CkMemCheckPT::*)() ) {
      return idx_cpFinish_void();
    }


    
    static int cpFinish() { return idx_cpFinish_void(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_cpFinish_void();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_cpFinish_void() {
      static int epidx = reg_redn_wrapper_cpFinish_void();
      return epidx;
    }
    
    static int redn_wrapper_cpFinish(CkReductionMsg* impl_msg) { return idx_redn_wrapper_cpFinish_void(); }
    
    static void _call_redn_wrapper_cpFinish_void(void* impl_msg, void* impl_obj_void);
    
    static void _call_cpFinish_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_cpFinish_void(void* impl_msg, void* impl_obj);
    /* DECLS: void report();
     */
    // Entry point registration at startup
    
    static int reg_report_void();
    // Entry point index lookup
    
    inline static int idx_report_void() {
      static int epidx = reg_report_void();
      return epidx;
    }

    
    inline static int idx_report(void (CkMemCheckPT::*)() ) {
      return idx_report_void();
    }


    
    static int report() { return idx_report_void(); }
    
    static void _call_report_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_report_void(void* impl_msg, void* impl_obj);
    /* DECLS: void restart(int impl_noname_5);
     */
    // Entry point registration at startup
    
    static int reg_restart_marshall11();
    // Entry point index lookup
    
    inline static int idx_restart_marshall11() {
      static int epidx = reg_restart_marshall11();
      return epidx;
    }

    
    inline static int idx_restart(void (CkMemCheckPT::*)(int impl_noname_5) ) {
      return idx_restart_marshall11();
    }


    
    static int restart(int impl_noname_5) { return idx_restart_marshall11(); }
    
    static void _call_restart_marshall11(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_restart_marshall11(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_restart_marshall11(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_restart_marshall11(PUP::er &p,void *msg);
    /* DECLS: void resetReductionMgr();
     */
    // Entry point registration at startup
    
    static int reg_resetReductionMgr_void();
    // Entry point index lookup
    
    inline static int idx_resetReductionMgr_void() {
      static int epidx = reg_resetReductionMgr_void();
      return epidx;
    }

    
    inline static int idx_resetReductionMgr(void (CkMemCheckPT::*)() ) {
      return idx_resetReductionMgr_void();
    }


    
    static int resetReductionMgr() { return idx_resetReductionMgr_void(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_resetReductionMgr_void();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_resetReductionMgr_void() {
      static int epidx = reg_redn_wrapper_resetReductionMgr_void();
      return epidx;
    }
    
    static int redn_wrapper_resetReductionMgr(CkReductionMsg* impl_msg) { return idx_redn_wrapper_resetReductionMgr_void(); }
    
    static void _call_redn_wrapper_resetReductionMgr_void(void* impl_msg, void* impl_obj_void);
    
    static void _call_resetReductionMgr_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_resetReductionMgr_void(void* impl_msg, void* impl_obj);
    /* DECLS: void removeArrayElements();
     */
    // Entry point registration at startup
    
    static int reg_removeArrayElements_void();
    // Entry point index lookup
    
    inline static int idx_removeArrayElements_void() {
      static int epidx = reg_removeArrayElements_void();
      return epidx;
    }

    
    inline static int idx_removeArrayElements(void (CkMemCheckPT::*)() ) {
      return idx_removeArrayElements_void();
    }


    
    static int removeArrayElements() { return idx_removeArrayElements_void(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_removeArrayElements_void();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_removeArrayElements_void() {
      static int epidx = reg_redn_wrapper_removeArrayElements_void();
      return epidx;
    }
    
    static int redn_wrapper_removeArrayElements(CkReductionMsg* impl_msg) { return idx_redn_wrapper_removeArrayElements_void(); }
    
    static void _call_redn_wrapper_removeArrayElements_void(void* impl_msg, void* impl_obj_void);
    
    static void _call_removeArrayElements_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_removeArrayElements_void(void* impl_msg, void* impl_obj);
    /* DECLS: void recoverBuddies();
     */
    // Entry point registration at startup
    
    static int reg_recoverBuddies_void();
    // Entry point index lookup
    
    inline static int idx_recoverBuddies_void() {
      static int epidx = reg_recoverBuddies_void();
      return epidx;
    }

    
    inline static int idx_recoverBuddies(void (CkMemCheckPT::*)() ) {
      return idx_recoverBuddies_void();
    }


    
    static int recoverBuddies() { return idx_recoverBuddies_void(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_recoverBuddies_void();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_recoverBuddies_void() {
      static int epidx = reg_redn_wrapper_recoverBuddies_void();
      return epidx;
    }
    
    static int redn_wrapper_recoverBuddies(CkReductionMsg* impl_msg) { return idx_redn_wrapper_recoverBuddies_void(); }
    
    static void _call_redn_wrapper_recoverBuddies_void(void* impl_msg, void* impl_obj_void);
    
    static void _call_recoverBuddies_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recoverBuddies_void(void* impl_msg, void* impl_obj);
    /* DECLS: void recoverEntry(CkArrayCheckPTMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recoverEntry_CkArrayCheckPTMessage();
    // Entry point index lookup
    
    inline static int idx_recoverEntry_CkArrayCheckPTMessage() {
      static int epidx = reg_recoverEntry_CkArrayCheckPTMessage();
      return epidx;
    }

    
    inline static int idx_recoverEntry(void (CkMemCheckPT::*)(CkArrayCheckPTMessage* impl_msg) ) {
      return idx_recoverEntry_CkArrayCheckPTMessage();
    }


    
    static int recoverEntry(CkArrayCheckPTMessage* impl_msg) { return idx_recoverEntry_CkArrayCheckPTMessage(); }
    
    static void _call_recoverEntry_CkArrayCheckPTMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recoverEntry_CkArrayCheckPTMessage(void* impl_msg, void* impl_obj);
    /* DECLS: void recoverArrayElements();
     */
    // Entry point registration at startup
    
    static int reg_recoverArrayElements_void();
    // Entry point index lookup
    
    inline static int idx_recoverArrayElements_void() {
      static int epidx = reg_recoverArrayElements_void();
      return epidx;
    }

    
    inline static int idx_recoverArrayElements(void (CkMemCheckPT::*)() ) {
      return idx_recoverArrayElements_void();
    }


    
    static int recoverArrayElements() { return idx_recoverArrayElements_void(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_recoverArrayElements_void();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_recoverArrayElements_void() {
      static int epidx = reg_redn_wrapper_recoverArrayElements_void();
      return epidx;
    }
    
    static int redn_wrapper_recoverArrayElements(CkReductionMsg* impl_msg) { return idx_redn_wrapper_recoverArrayElements_void(); }
    
    static void _call_redn_wrapper_recoverArrayElements_void(void* impl_msg, void* impl_obj_void);
    
    static void _call_recoverArrayElements_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recoverArrayElements_void(void* impl_msg, void* impl_obj);
    /* DECLS: void finishUp();
     */
    // Entry point registration at startup
    
    static int reg_finishUp_void();
    // Entry point index lookup
    
    inline static int idx_finishUp_void() {
      static int epidx = reg_finishUp_void();
      return epidx;
    }

    
    inline static int idx_finishUp(void (CkMemCheckPT::*)() ) {
      return idx_finishUp_void();
    }


    
    static int finishUp() { return idx_finishUp_void(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_finishUp_void();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_finishUp_void() {
      static int epidx = reg_redn_wrapper_finishUp_void();
      return epidx;
    }
    
    static int redn_wrapper_finishUp(CkReductionMsg* impl_msg) { return idx_redn_wrapper_finishUp_void(); }
    
    static void _call_redn_wrapper_finishUp_void(void* impl_msg, void* impl_obj_void);
    
    static void _call_finishUp_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_finishUp_void(void* impl_msg, void* impl_obj);
    /* DECLS: void gotReply();
     */
    // Entry point registration at startup
    
    static int reg_gotReply_void();
    // Entry point index lookup
    
    inline static int idx_gotReply_void() {
      static int epidx = reg_gotReply_void();
      return epidx;
    }

    
    inline static int idx_gotReply(void (CkMemCheckPT::*)() ) {
      return idx_gotReply_void();
    }


    
    static int gotReply() { return idx_gotReply_void(); }
    
    static void _call_gotReply_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_gotReply_void(void* impl_msg, void* impl_obj);
    /* DECLS: void quiescence(const CkCallback &impl_noname_6);
     */
    // Entry point registration at startup
    
    static int reg_quiescence_marshall19();
    // Entry point index lookup
    
    inline static int idx_quiescence_marshall19() {
      static int epidx = reg_quiescence_marshall19();
      return epidx;
    }

    
    inline static int idx_quiescence(void (CkMemCheckPT::*)(const CkCallback &impl_noname_6) ) {
      return idx_quiescence_marshall19();
    }


    
    static int quiescence(const CkCallback &impl_noname_6) { return idx_quiescence_marshall19(); }
    
    static void _call_quiescence_marshall19(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_quiescence_marshall19(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_quiescence_marshall19(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_quiescence_marshall19(PUP::er &p,void *msg);
    /* DECLS: void inmem_restore(CkArrayCheckPTMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_inmem_restore_CkArrayCheckPTMessage();
    // Entry point index lookup
    
    inline static int idx_inmem_restore_CkArrayCheckPTMessage() {
      static int epidx = reg_inmem_restore_CkArrayCheckPTMessage();
      return epidx;
    }

    
    inline static int idx_inmem_restore(void (CkMemCheckPT::*)(CkArrayCheckPTMessage* impl_msg) ) {
      return idx_inmem_restore_CkArrayCheckPTMessage();
    }


    
    static int inmem_restore(CkArrayCheckPTMessage* impl_msg) { return idx_inmem_restore_CkArrayCheckPTMessage(); }
    
    static void _call_inmem_restore_CkArrayCheckPTMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_inmem_restore_CkArrayCheckPTMessage(void* impl_msg, void* impl_obj);
    /* DECLS: void updateLocations(int n, const CkGroupID *g, const CkArrayIndex *idx, const CmiUInt8 *id, int nowOnPe);
     */
    // Entry point registration at startup
    
    static int reg_updateLocations_marshall21();
    // Entry point index lookup
    
    inline static int idx_updateLocations_marshall21() {
      static int epidx = reg_updateLocations_marshall21();
      return epidx;
    }

    
    inline static int idx_updateLocations(void (CkMemCheckPT::*)(int n, const CkGroupID *g, const CkArrayIndex *idx, const CmiUInt8 *id, int nowOnPe) ) {
      return idx_updateLocations_marshall21();
    }


    
    static int updateLocations(int n, const CkGroupID *g, const CkArrayIndex *idx, const CmiUInt8 *id, int nowOnPe) { return idx_updateLocations_marshall21(); }
    
    static void _call_updateLocations_marshall21(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_updateLocations_marshall21(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_updateLocations_marshall21(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_updateLocations_marshall21(PUP::er &p,void *msg);
    /* DECLS: CkMemCheckPT(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_CkMemCheckPT_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_CkMemCheckPT_CkMigrateMessage() {
      static int epidx = reg_CkMemCheckPT_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_CkMemCheckPT_CkMigrateMessage(); }
    
    static void _call_CkMemCheckPT_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_CkMemCheckPT_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_CkMemCheckPT: public CProxyElement_IrrGroup{
  public:
    typedef CkMemCheckPT local_t;
    typedef CkIndex_CkMemCheckPT index_t;
    typedef CProxy_CkMemCheckPT proxy_t;
    typedef CProxyElement_CkMemCheckPT element_t;
    typedef CProxySection_CkMemCheckPT section_t;


    /* TRAM aggregators */

    CProxyElement_CkMemCheckPT(void) {
    }
    CProxyElement_CkMemCheckPT(const IrrGroup *g) : CProxyElement_IrrGroup(g){
    }
    CProxyElement_CkMemCheckPT(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_IrrGroup(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_CkMemCheckPT(CkGroupID _gid,int _onPE) : CProxyElement_IrrGroup(_gid,_onPE){
    }

    int ckIsDelegated(void) const
    { return CProxyElement_IrrGroup::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxyElement_IrrGroup::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxyElement_IrrGroup::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxyElement_IrrGroup::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxyElement_IrrGroup::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxyElement_IrrGroup::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxyElement_IrrGroup::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_IrrGroup::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_IrrGroup::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxyElement_IrrGroup::ckSetReductionClient(cb); }
int ckGetGroupPe(void) const
{return CProxyElement_IrrGroup::ckGetGroupPe();}

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxyElement_IrrGroup::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxyElement_IrrGroup::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxyElement_IrrGroup::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxyElement_IrrGroup::ckSetGroupID(g);
    }
    CkMemCheckPT* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static CkMemCheckPT* ckLocalBranch(CkGroupID gID) {
      return (CkMemCheckPT*)CkLocalBranch(gID);
    }
/* DECLS: CkMemCheckPT(int w);
 */
    

/* DECLS: void createEntry(const CkArrayID &impl_noname_0, const CkGroupID &impl_noname_1, const CkArrayIndex &impl_noname_2, int impl_noname_3);
 */
    
    void createEntry(const CkArrayID &impl_noname_0, const CkGroupID &impl_noname_1, const CkArrayIndex &impl_noname_2, int impl_noname_3, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void doItNow(int spe, const CkCallback &impl_noname_4);
 */
    
    void doItNow(int spe, const CkCallback &impl_noname_4, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvData(CkArrayCheckPTMessage* impl_msg);
 */
    
    void recvData(CkArrayCheckPTMessage* impl_msg);

/* DECLS: void recvArrayCheckpoint(CkArrayCheckPTMessage* impl_msg);
 */
    
    void recvArrayCheckpoint(CkArrayCheckPTMessage* impl_msg);

/* DECLS: void gotData();
 */
    
    void gotData(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvProcData(CkProcCheckPTMessage* impl_msg);
 */
    
    void recvProcData(CkProcCheckPTMessage* impl_msg);

/* DECLS: void syncFiles();
 */
    
    void syncFiles(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void cpFinish();
 */
    
    void cpFinish(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void report();
 */
    
    void report(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void restart(int impl_noname_5);
 */
    
    void restart(int impl_noname_5, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void resetReductionMgr();
 */
    
    void resetReductionMgr(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void removeArrayElements();
 */
    
    void removeArrayElements(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recoverBuddies();
 */
    
    void recoverBuddies(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recoverEntry(CkArrayCheckPTMessage* impl_msg);
 */
    
    void recoverEntry(CkArrayCheckPTMessage* impl_msg);

/* DECLS: void recoverArrayElements();
 */
    
    void recoverArrayElements(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void finishUp();
 */
    
    void finishUp(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void gotReply();
 */
    
    void gotReply(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void quiescence(const CkCallback &impl_noname_6);
 */
    
    void quiescence(const CkCallback &impl_noname_6, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void inmem_restore(CkArrayCheckPTMessage* impl_msg);
 */
    
    void inmem_restore(CkArrayCheckPTMessage* impl_msg);

/* DECLS: void updateLocations(int n, const CkGroupID *g, const CkArrayIndex *idx, const CmiUInt8 *id, int nowOnPe);
 */
    
    void updateLocations(int n, const CkGroupID *g, const CkArrayIndex *idx, const CmiUInt8 *id, int nowOnPe, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: CkMemCheckPT(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- collective proxy -------------- */
class CProxy_CkMemCheckPT: public CProxy_IrrGroup{
  public:
    typedef CkMemCheckPT local_t;
    typedef CkIndex_CkMemCheckPT index_t;
    typedef CProxy_CkMemCheckPT proxy_t;
    typedef CProxyElement_CkMemCheckPT element_t;
    typedef CProxySection_CkMemCheckPT section_t;

    CProxy_CkMemCheckPT(void) {
    }
    CProxy_CkMemCheckPT(const IrrGroup *g) : CProxy_IrrGroup(g){
    }
    CProxy_CkMemCheckPT(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_IrrGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_CkMemCheckPT(CkGroupID _gid) : CProxy_IrrGroup(_gid){  }
    CProxyElement_CkMemCheckPT operator[](int onPE) const
      {return CProxyElement_CkMemCheckPT(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

    int ckIsDelegated(void) const
    { return CProxy_IrrGroup::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_IrrGroup::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_IrrGroup::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_IrrGroup::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxy_IrrGroup::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxy_IrrGroup::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxy_IrrGroup::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_IrrGroup::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_IrrGroup::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxy_IrrGroup::ckSetReductionClient(cb); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_IrrGroup::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_IrrGroup::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_IrrGroup::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxy_IrrGroup::ckSetGroupID(g);
    }
    CkMemCheckPT* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static CkMemCheckPT* ckLocalBranch(CkGroupID gID) {
      return (CkMemCheckPT*)CkLocalBranch(gID);
    }
/* DECLS: CkMemCheckPT(int w);
 */
    
    static CkGroupID ckNew(int w, const CkEntryOptions *impl_e_opts=NULL);
    CProxy_CkMemCheckPT(int w, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void createEntry(const CkArrayID &impl_noname_0, const CkGroupID &impl_noname_1, const CkArrayIndex &impl_noname_2, int impl_noname_3);
 */
    
    void createEntry(const CkArrayID &impl_noname_0, const CkGroupID &impl_noname_1, const CkArrayIndex &impl_noname_2, int impl_noname_3, const CkEntryOptions *impl_e_opts=NULL);
    
    void createEntry(const CkArrayID &impl_noname_0, const CkGroupID &impl_noname_1, const CkArrayIndex &impl_noname_2, int impl_noname_3, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void createEntry(const CkArrayID &impl_noname_0, const CkGroupID &impl_noname_1, const CkArrayIndex &impl_noname_2, int impl_noname_3, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void doItNow(int spe, const CkCallback &impl_noname_4);
 */
    
    void doItNow(int spe, const CkCallback &impl_noname_4, const CkEntryOptions *impl_e_opts=NULL);
    
    void doItNow(int spe, const CkCallback &impl_noname_4, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void doItNow(int spe, const CkCallback &impl_noname_4, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvData(CkArrayCheckPTMessage* impl_msg);
 */
    
    void recvData(CkArrayCheckPTMessage* impl_msg);
    
    void recvData(CkArrayCheckPTMessage* impl_msg, int npes, int *pes);
    
    void recvData(CkArrayCheckPTMessage* impl_msg, CmiGroup &grp);

/* DECLS: void recvArrayCheckpoint(CkArrayCheckPTMessage* impl_msg);
 */
    
    void recvArrayCheckpoint(CkArrayCheckPTMessage* impl_msg);
    
    void recvArrayCheckpoint(CkArrayCheckPTMessage* impl_msg, int npes, int *pes);
    
    void recvArrayCheckpoint(CkArrayCheckPTMessage* impl_msg, CmiGroup &grp);

/* DECLS: void gotData();
 */
    
    void gotData(const CkEntryOptions *impl_e_opts=NULL);
    
    void gotData(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void gotData(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvProcData(CkProcCheckPTMessage* impl_msg);
 */
    
    void recvProcData(CkProcCheckPTMessage* impl_msg);
    
    void recvProcData(CkProcCheckPTMessage* impl_msg, int npes, int *pes);
    
    void recvProcData(CkProcCheckPTMessage* impl_msg, CmiGroup &grp);

/* DECLS: void syncFiles();
 */
    
    void syncFiles(const CkEntryOptions *impl_e_opts=NULL);
    
    void syncFiles(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void syncFiles(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void cpFinish();
 */
    
    void cpFinish(const CkEntryOptions *impl_e_opts=NULL);
    
    void cpFinish(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void cpFinish(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void report();
 */
    
    void report(const CkEntryOptions *impl_e_opts=NULL);
    
    void report(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void report(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void restart(int impl_noname_5);
 */
    
    void restart(int impl_noname_5, const CkEntryOptions *impl_e_opts=NULL);
    
    void restart(int impl_noname_5, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void restart(int impl_noname_5, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void resetReductionMgr();
 */
    
    void resetReductionMgr(const CkEntryOptions *impl_e_opts=NULL);
    
    void resetReductionMgr(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void resetReductionMgr(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void removeArrayElements();
 */
    
    void removeArrayElements(const CkEntryOptions *impl_e_opts=NULL);
    
    void removeArrayElements(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void removeArrayElements(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recoverBuddies();
 */
    
    void recoverBuddies(const CkEntryOptions *impl_e_opts=NULL);
    
    void recoverBuddies(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void recoverBuddies(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recoverEntry(CkArrayCheckPTMessage* impl_msg);
 */
    
    void recoverEntry(CkArrayCheckPTMessage* impl_msg);
    
    void recoverEntry(CkArrayCheckPTMessage* impl_msg, int npes, int *pes);
    
    void recoverEntry(CkArrayCheckPTMessage* impl_msg, CmiGroup &grp);

/* DECLS: void recoverArrayElements();
 */
    
    void recoverArrayElements(const CkEntryOptions *impl_e_opts=NULL);
    
    void recoverArrayElements(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void recoverArrayElements(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void finishUp();
 */
    
    void finishUp(const CkEntryOptions *impl_e_opts=NULL);
    
    void finishUp(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void finishUp(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void gotReply();
 */
    
    void gotReply(const CkEntryOptions *impl_e_opts=NULL);
    
    void gotReply(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void gotReply(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void quiescence(const CkCallback &impl_noname_6);
 */
    
    void quiescence(const CkCallback &impl_noname_6, const CkEntryOptions *impl_e_opts=NULL);
    
    void quiescence(const CkCallback &impl_noname_6, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void quiescence(const CkCallback &impl_noname_6, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void inmem_restore(CkArrayCheckPTMessage* impl_msg);
 */
    
    void inmem_restore(CkArrayCheckPTMessage* impl_msg);
    
    void inmem_restore(CkArrayCheckPTMessage* impl_msg, int npes, int *pes);
    
    void inmem_restore(CkArrayCheckPTMessage* impl_msg, CmiGroup &grp);

/* DECLS: void updateLocations(int n, const CkGroupID *g, const CkArrayIndex *idx, const CmiUInt8 *id, int nowOnPe);
 */
    
    void updateLocations(int n, const CkGroupID *g, const CkArrayIndex *idx, const CmiUInt8 *id, int nowOnPe, const CkEntryOptions *impl_e_opts=NULL);
    
    void updateLocations(int n, const CkGroupID *g, const CkArrayIndex *idx, const CmiUInt8 *id, int nowOnPe, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void updateLocations(int n, const CkGroupID *g, const CkArrayIndex *idx, const CmiUInt8 *id, int nowOnPe, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: CkMemCheckPT(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- section proxy -------------- */
class CProxySection_CkMemCheckPT: public CProxySection_IrrGroup{
  public:
    typedef CkMemCheckPT local_t;
    typedef CkIndex_CkMemCheckPT index_t;
    typedef CProxy_CkMemCheckPT proxy_t;
    typedef CProxyElement_CkMemCheckPT element_t;
    typedef CProxySection_CkMemCheckPT section_t;

    CProxySection_CkMemCheckPT(void) {
    }
    CProxySection_CkMemCheckPT(const IrrGroup *g) : CProxySection_IrrGroup(g){
    }
    CProxySection_CkMemCheckPT(const CkGroupID &_gid,const int *_pelist,int _npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_CkMemCheckPT(const CkGroupID &_gid,const int *_pelist,int _npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(_gid,_pelist,_npes,factor){  }
    CProxySection_CkMemCheckPT(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,factor){  }
    CProxySection_CkMemCheckPT(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

    int ckIsDelegated(void) const
    { return CProxySection_IrrGroup::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxySection_IrrGroup::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxySection_IrrGroup::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxySection_IrrGroup::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxySection_IrrGroup::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxySection_IrrGroup::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxySection_IrrGroup::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_IrrGroup::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_IrrGroup::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxySection_IrrGroup::ckSetReductionClient(cb); }
inline int ckGetNumSections() const
{ return CProxySection_IrrGroup::ckGetNumSections(); }
inline CkSectionInfo &ckGetSectionInfo()
{ return CProxySection_IrrGroup::ckGetSectionInfo(); }
inline CkSectionID *ckGetSectionIDs()
{ return CProxySection_IrrGroup::ckGetSectionIDs(); }
inline CkSectionID &ckGetSectionID()
{ return CProxySection_IrrGroup::ckGetSectionID(); }
inline CkSectionID &ckGetSectionID(int i)
{ return CProxySection_IrrGroup::ckGetSectionID(i); }
inline CkGroupID ckGetGroupIDn(int i) const
{ return CProxySection_IrrGroup::ckGetGroupIDn(i); }
inline const int *ckGetElements() const
{ return CProxySection_IrrGroup::ckGetElements(); }
inline const int *ckGetElements(int i) const
{ return CProxySection_IrrGroup::ckGetElements(i); }
inline int ckGetNumElements() const
{ return CProxySection_IrrGroup::ckGetNumElements(); } 
inline int ckGetNumElements(int i) const
{ return CProxySection_IrrGroup::ckGetNumElements(i); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxySection_IrrGroup::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxySection_IrrGroup::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxySection_IrrGroup::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxySection_IrrGroup::ckSetGroupID(g);
    }
    CkMemCheckPT* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static CkMemCheckPT* ckLocalBranch(CkGroupID gID) {
      return (CkMemCheckPT*)CkLocalBranch(gID);
    }
/* DECLS: CkMemCheckPT(int w);
 */
    

/* DECLS: void createEntry(const CkArrayID &impl_noname_0, const CkGroupID &impl_noname_1, const CkArrayIndex &impl_noname_2, int impl_noname_3);
 */
    
    void createEntry(const CkArrayID &impl_noname_0, const CkGroupID &impl_noname_1, const CkArrayIndex &impl_noname_2, int impl_noname_3, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void doItNow(int spe, const CkCallback &impl_noname_4);
 */
    
    void doItNow(int spe, const CkCallback &impl_noname_4, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvData(CkArrayCheckPTMessage* impl_msg);
 */
    
    void recvData(CkArrayCheckPTMessage* impl_msg);

/* DECLS: void recvArrayCheckpoint(CkArrayCheckPTMessage* impl_msg);
 */
    
    void recvArrayCheckpoint(CkArrayCheckPTMessage* impl_msg);

/* DECLS: void gotData();
 */
    
    void gotData(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvProcData(CkProcCheckPTMessage* impl_msg);
 */
    
    void recvProcData(CkProcCheckPTMessage* impl_msg);

/* DECLS: void syncFiles();
 */
    
    void syncFiles(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void cpFinish();
 */
    
    void cpFinish(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void report();
 */
    
    void report(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void restart(int impl_noname_5);
 */
    
    void restart(int impl_noname_5, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void resetReductionMgr();
 */
    
    void resetReductionMgr(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void removeArrayElements();
 */
    
    void removeArrayElements(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recoverBuddies();
 */
    
    void recoverBuddies(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recoverEntry(CkArrayCheckPTMessage* impl_msg);
 */
    
    void recoverEntry(CkArrayCheckPTMessage* impl_msg);

/* DECLS: void recoverArrayElements();
 */
    
    void recoverArrayElements(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void finishUp();
 */
    
    void finishUp(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void gotReply();
 */
    
    void gotReply(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void quiescence(const CkCallback &impl_noname_6);
 */
    
    void quiescence(const CkCallback &impl_noname_6, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void inmem_restore(CkArrayCheckPTMessage* impl_msg);
 */
    
    void inmem_restore(CkArrayCheckPTMessage* impl_msg);

/* DECLS: void updateLocations(int n, const CkGroupID *g, const CkArrayIndex *idx, const CmiUInt8 *id, int nowOnPe);
 */
    
    void updateLocations(int n, const CkGroupID *g, const CkArrayIndex *idx, const CmiUInt8 *id, int nowOnPe, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: CkMemCheckPT(CkMigrateMessage* impl_msg);
 */

};
#define CkMemCheckPT_SDAG_CODE 
typedef CBaseT1<Group, CProxy_CkMemCheckPT>CBase_CkMemCheckPT;


/* DECLS: mainchare CkMemCheckPTInit: Chare{
CkMemCheckPTInit(CkArgMsg* impl_msg);
};
 */
 class CkMemCheckPTInit;
 class CkIndex_CkMemCheckPTInit;
 class CProxy_CkMemCheckPTInit;
/* --------------- index object ------------------ */
class CkIndex_CkMemCheckPTInit:public CkIndex_Chare{
  public:
    typedef CkMemCheckPTInit local_t;
    typedef CkIndex_CkMemCheckPTInit index_t;
    typedef CProxy_CkMemCheckPTInit proxy_t;
    typedef CProxy_CkMemCheckPTInit element_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: CkMemCheckPTInit(CkArgMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_CkMemCheckPTInit_CkArgMsg();
    // Entry point index lookup
    
    inline static int idx_CkMemCheckPTInit_CkArgMsg() {
      static int epidx = reg_CkMemCheckPTInit_CkArgMsg();
      return epidx;
    }

    
    static int ckNew(CkArgMsg* impl_msg) { return idx_CkMemCheckPTInit_CkArgMsg(); }
    
    static void _call_CkMemCheckPTInit_CkArgMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_CkMemCheckPTInit_CkArgMsg(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxy_CkMemCheckPTInit:public CProxy_Chare{
  public:
    typedef CkMemCheckPTInit local_t;
    typedef CkIndex_CkMemCheckPTInit index_t;
    typedef CProxy_CkMemCheckPTInit proxy_t;
    typedef CProxy_CkMemCheckPTInit element_t;

    CProxy_CkMemCheckPTInit(void) {};
    CProxy_CkMemCheckPTInit(CkChareID __cid) : CProxy_Chare(__cid){  }
    CProxy_CkMemCheckPTInit(const Chare *c) : CProxy_Chare(c){  }

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
    CkMemCheckPTInit *ckLocal(void) const
    { return (CkMemCheckPTInit *)CkLocalChare(&ckGetChareID()); }
/* DECLS: CkMemCheckPTInit(CkArgMsg* impl_msg);
 */
    static CkChareID ckNew(CkArgMsg* impl_msg, int onPE=CK_PE_ANY);
    static void ckNew(CkArgMsg* impl_msg, CkChareID* pcid, int onPE=CK_PE_ANY);

};
#define CkMemCheckPTInit_SDAG_CODE 
typedef CBaseT1<Chare, CProxy_CkMemCheckPTInit>CBase_CkMemCheckPTInit;





/* ---------------- method closures -------------- */
class Closure_CkMemCheckPT {
  public:


    struct createEntry_2_closure;


    struct doItNow_3_closure;




    struct gotData_6_closure;



    struct syncFiles_8_closure;


    struct cpFinish_9_closure;


    struct report_10_closure;


    struct restart_11_closure;


    struct resetReductionMgr_12_closure;


    struct removeArrayElements_13_closure;


    struct recoverBuddies_14_closure;



    struct recoverArrayElements_16_closure;


    struct finishUp_17_closure;


    struct gotReply_18_closure;


    struct quiescence_19_closure;



    struct updateLocations_21_closure;


};


/* ---------------- method closures -------------- */
class Closure_CkMemCheckPTInit {
  public:

};

extern void _registerCkMemCheckpoint(void);
#endif
