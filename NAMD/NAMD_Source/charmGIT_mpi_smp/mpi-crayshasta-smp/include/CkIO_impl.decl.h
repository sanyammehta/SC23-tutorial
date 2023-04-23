#ifndef _DECL_CkIO_impl_H_
#define _DECL_CkIO_impl_H_
#include "charm++.h"
#include "envelope.h"
#include <memory>
#include "sdag.h"
#include "ckio.h"

namespace Ck {
namespace IO {
namespace impl {
/* DECLS: readonly CProxy_Director director;
 */

/* DECLS: mainchare Director: Chare{
Director(CkArgMsg* impl_msg);
void openFile(const std::string &name, const CkCallback &opened, const Options &opts);
void fileOpened(const FileToken &file);
void sessionComplete(const FileToken &file);
void prepareWriteSession(const FileToken &file, const size_t &bytes, const size_t &offset, const CkCallback &ready, const CkCallback &complete);
void prepareWriteSession(const FileToken &file, const size_t &bytes, const size_t &offset, const CkCallback &ready, const char *commitData, const size_t &commitBytes, const size_t &commitOffset, const CkCallback &complete);
void sessionReady(CkReductionMsg* impl_msg);
void sessionDone(CkReductionMsg* impl_msg);
void close(const FileToken &token, const CkCallback &closed);
Director(CkMigrateMessage* impl_msg);
};
 */
 class Director;
 class CkIndex_Director;
 class CProxy_Director;
/* --------------- index object ------------------ */
class CkIndex_Director:public CkIndex_Chare{
  public:
    typedef Director local_t;
    typedef CkIndex_Director index_t;
    typedef CProxy_Director proxy_t;
    typedef CProxy_Director element_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: Director(CkArgMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_Director_CkArgMsg();
    // Entry point index lookup
    
    inline static int idx_Director_CkArgMsg() {
      static int epidx = reg_Director_CkArgMsg();
      return epidx;
    }

    
    static int ckNew(CkArgMsg* impl_msg) { return idx_Director_CkArgMsg(); }
    
    static void _call_Director_CkArgMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_Director_CkArgMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void openFile(const std::string &name, const CkCallback &opened, const Options &opts);
     */
    // Entry point registration at startup
    
    static int reg_openFile_marshall2();
    // Entry point index lookup
    
    inline static int idx_openFile_marshall2() {
      static int epidx = reg_openFile_marshall2();
      return epidx;
    }

    
    inline static int idx_openFile(void (Director::*)(const std::string &name, const CkCallback &opened, const Options &opts) ) {
      return idx_openFile_marshall2();
    }


    
    static int openFile(const std::string &name, const CkCallback &opened, const Options &opts) { return idx_openFile_marshall2(); }
    
    static void _call_openFile_marshall2(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_openFile_marshall2(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_openFile_marshall2(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_openFile_marshall2(PUP::er &p,void *msg);
    /* DECLS: void fileOpened(const FileToken &file);
     */
    // Entry point registration at startup
    
    static int reg_fileOpened_marshall3();
    // Entry point index lookup
    
    inline static int idx_fileOpened_marshall3() {
      static int epidx = reg_fileOpened_marshall3();
      return epidx;
    }

    
    inline static int idx_fileOpened(void (Director::*)(const FileToken &file) ) {
      return idx_fileOpened_marshall3();
    }


    
    static int fileOpened(const FileToken &file) { return idx_fileOpened_marshall3(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_fileOpened_marshall3();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_fileOpened_marshall3() {
      static int epidx = reg_redn_wrapper_fileOpened_marshall3();
      return epidx;
    }
    
    static int redn_wrapper_fileOpened(CkReductionMsg* impl_msg) { return idx_redn_wrapper_fileOpened_marshall3(); }
    
    static void _call_redn_wrapper_fileOpened_marshall3(void* impl_msg, void* impl_obj_void);
    
    static void _call_fileOpened_marshall3(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_fileOpened_marshall3(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_fileOpened_marshall3(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_fileOpened_marshall3(PUP::er &p,void *msg);
    /* DECLS: void sessionComplete(const FileToken &file);
     */
    // Entry point registration at startup
    
    static int reg_sessionComplete_marshall4();
    // Entry point index lookup
    
    inline static int idx_sessionComplete_marshall4() {
      static int epidx = reg_sessionComplete_marshall4();
      return epidx;
    }

    
    inline static int idx_sessionComplete(void (Director::*)(const FileToken &file) ) {
      return idx_sessionComplete_marshall4();
    }


    
    static int sessionComplete(const FileToken &file) { return idx_sessionComplete_marshall4(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_sessionComplete_marshall4();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_sessionComplete_marshall4() {
      static int epidx = reg_redn_wrapper_sessionComplete_marshall4();
      return epidx;
    }
    
    static int redn_wrapper_sessionComplete(CkReductionMsg* impl_msg) { return idx_redn_wrapper_sessionComplete_marshall4(); }
    
    static void _call_redn_wrapper_sessionComplete_marshall4(void* impl_msg, void* impl_obj_void);
    
    static void _call_sessionComplete_marshall4(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_sessionComplete_marshall4(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_sessionComplete_marshall4(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_sessionComplete_marshall4(PUP::er &p,void *msg);
    /* DECLS: void prepareWriteSession(const FileToken &file, const size_t &bytes, const size_t &offset, const CkCallback &ready, const CkCallback &complete);
     */
    // Entry point registration at startup
    
    static int reg_prepareWriteSession_marshall5();
    // Entry point index lookup
    
    inline static int idx_prepareWriteSession_marshall5() {
      static int epidx = reg_prepareWriteSession_marshall5();
      return epidx;
    }

    
    inline static int idx_prepareWriteSession(void (Director::*)(const FileToken &file, const size_t &bytes, const size_t &offset, const CkCallback &ready, const CkCallback &complete) ) {
      return idx_prepareWriteSession_marshall5();
    }


    
    static int prepareWriteSession(const FileToken &file, const size_t &bytes, const size_t &offset, const CkCallback &ready, const CkCallback &complete) { return idx_prepareWriteSession_marshall5(); }
    
    static void _call_prepareWriteSession_marshall5(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_prepareWriteSession_marshall5(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_prepareWriteSession_marshall5(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_prepareWriteSession_marshall5(PUP::er &p,void *msg);
    /* DECLS: void prepareWriteSession(const FileToken &file, const size_t &bytes, const size_t &offset, const CkCallback &ready, const char *commitData, const size_t &commitBytes, const size_t &commitOffset, const CkCallback &complete);
     */
    // Entry point registration at startup
    
    static int reg_prepareWriteSession_marshall6();
    // Entry point index lookup
    
    inline static int idx_prepareWriteSession_marshall6() {
      static int epidx = reg_prepareWriteSession_marshall6();
      return epidx;
    }

    
    inline static int idx_prepareWriteSession(void (Director::*)(const FileToken &file, const size_t &bytes, const size_t &offset, const CkCallback &ready, const char *commitData, const size_t &commitBytes, const size_t &commitOffset, const CkCallback &complete) ) {
      return idx_prepareWriteSession_marshall6();
    }


    
    static int prepareWriteSession(const FileToken &file, const size_t &bytes, const size_t &offset, const CkCallback &ready, const char *commitData, const size_t &commitBytes, const size_t &commitOffset, const CkCallback &complete) { return idx_prepareWriteSession_marshall6(); }
    
    static void _call_prepareWriteSession_marshall6(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_prepareWriteSession_marshall6(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_prepareWriteSession_marshall6(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_prepareWriteSession_marshall6(PUP::er &p,void *msg);
    /* DECLS: void sessionReady(CkReductionMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_sessionReady_CkReductionMsg();
    // Entry point index lookup
    
    inline static int idx_sessionReady_CkReductionMsg() {
      static int epidx = reg_sessionReady_CkReductionMsg();
      return epidx;
    }

    
    inline static int idx_sessionReady(void (Director::*)(CkReductionMsg* impl_msg) ) {
      return idx_sessionReady_CkReductionMsg();
    }


    
    static int sessionReady(CkReductionMsg* impl_msg) { return idx_sessionReady_CkReductionMsg(); }
    
    static void _call_sessionReady_CkReductionMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_sessionReady_CkReductionMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void sessionDone(CkReductionMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_sessionDone_CkReductionMsg();
    // Entry point index lookup
    
    inline static int idx_sessionDone_CkReductionMsg() {
      static int epidx = reg_sessionDone_CkReductionMsg();
      return epidx;
    }

    
    inline static int idx_sessionDone(void (Director::*)(CkReductionMsg* impl_msg) ) {
      return idx_sessionDone_CkReductionMsg();
    }


    
    static int sessionDone(CkReductionMsg* impl_msg) { return idx_sessionDone_CkReductionMsg(); }
    
    static void _call_sessionDone_CkReductionMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_sessionDone_CkReductionMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void close(const FileToken &token, const CkCallback &closed);
     */
    // Entry point registration at startup
    
    static int reg_close_marshall9();
    // Entry point index lookup
    
    inline static int idx_close_marshall9() {
      static int epidx = reg_close_marshall9();
      return epidx;
    }

    
    inline static int idx_close(void (Director::*)(const FileToken &token, const CkCallback &closed) ) {
      return idx_close_marshall9();
    }


    
    static int close(const FileToken &token, const CkCallback &closed) { return idx_close_marshall9(); }
    
    static void _call_close_marshall9(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_close_marshall9(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_close_marshall9(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_close_marshall9(PUP::er &p,void *msg);
    /* DECLS: Director(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_Director_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_Director_CkMigrateMessage() {
      static int epidx = reg_Director_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_Director_CkMigrateMessage(); }
    
    static void _call_Director_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_Director_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxy_Director:public CProxy_Chare{
  public:
    typedef Director local_t;
    typedef CkIndex_Director index_t;
    typedef CProxy_Director proxy_t;
    typedef CProxy_Director element_t;

    CProxy_Director(void) {};
    CProxy_Director(CkChareID __cid) : CProxy_Chare(__cid){  }
    CProxy_Director(const Chare *c) : CProxy_Chare(c){  }

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
    Director *ckLocal(void) const
    { return (Director *)CkLocalChare(&ckGetChareID()); }
/* DECLS: Director(CkArgMsg* impl_msg);
 */
    static CkChareID ckNew(CkArgMsg* impl_msg, int onPE=CK_PE_ANY);
    static void ckNew(CkArgMsg* impl_msg, CkChareID* pcid, int onPE=CK_PE_ANY);

/* DECLS: void openFile(const std::string &name, const CkCallback &opened, const Options &opts);
 */
    
    void openFile(const std::string &name, const CkCallback &opened, const Options &opts, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void fileOpened(const FileToken &file);
 */
    
    void fileOpened(const FileToken &file, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void sessionComplete(const FileToken &file);
 */
    
    void sessionComplete(const FileToken &file, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void prepareWriteSession(const FileToken &file, const size_t &bytes, const size_t &offset, const CkCallback &ready, const CkCallback &complete);
 */
    
    void prepareWriteSession(const FileToken &file, const size_t &bytes, const size_t &offset, const CkCallback &ready, const CkCallback &complete, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void prepareWriteSession(const FileToken &file, const size_t &bytes, const size_t &offset, const CkCallback &ready, const char *commitData, const size_t &commitBytes, const size_t &commitOffset, const CkCallback &complete);
 */
    
    void prepareWriteSession(const FileToken &file, const size_t &bytes, const size_t &offset, const CkCallback &ready, const char *commitData, const size_t &commitBytes, const size_t &commitOffset, const CkCallback &complete, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void sessionReady(CkReductionMsg* impl_msg);
 */
    
    void sessionReady(CkReductionMsg* impl_msg);

/* DECLS: void sessionDone(CkReductionMsg* impl_msg);
 */
    
    void sessionDone(CkReductionMsg* impl_msg);

/* DECLS: void close(const FileToken &token, const CkCallback &closed);
 */
    
    void close(const FileToken &token, const CkCallback &closed, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: Director(CkMigrateMessage* impl_msg);
 */

};
#define Director_SDAG_CODE                                                     \
public:                                                                        \
  void prepareWriteSession(FileToken file, size_t bytes, size_t offset, CkCallback ready, CkCallback complete);\
  void _sdag_fnc_prepareWriteSession(FileToken file, size_t bytes, size_t offset, CkCallback ready, CkCallback complete);\
  void _sdag_fnc_prepareWriteSession(Closure_Director::prepareWriteSession_5_closure* gen0);\
private:                                                                       \
  void prepareWriteSession_end(Closure_Director::prepareWriteSession_5_closure* gen0);\
  void _slist_0(Closure_Director::prepareWriteSession_5_closure* gen0);        \
  void _slist_0_end(Closure_Director::prepareWriteSession_5_closure* gen0);    \
  void _serial_0(Closure_Director::prepareWriteSession_5_closure* gen0);       \
  SDAG::Continuation* _when_0(Closure_Director::prepareWriteSession_5_closure* gen0);\
  SDAG::Continuation* _when_0(Closure_Director::prepareWriteSession_5_closure* gen0, int refnum_0);\
  void _when_0_end(Closure_Director::prepareWriteSession_5_closure* gen0, CkReductionMsg* gen1);\
  void _serial_1(Closure_Director::prepareWriteSession_5_closure* gen0, CkReductionMsg* gen1);\
public:                                                                        \
  void prepareWriteSession(FileToken file, size_t bytes, size_t offset, CkCallback ready, char * commitData, size_t commitBytes, size_t commitOffset, CkCallback complete);\
  void _sdag_fnc_prepareWriteSession(FileToken file, size_t bytes, size_t offset, CkCallback ready, char * commitData, size_t commitBytes, size_t commitOffset, CkCallback complete);\
  void _sdag_fnc_prepareWriteSession(Closure_Director::prepareWriteSession_6_closure* gen0);\
private:                                                                       \
  void prepareWriteSession_end(Closure_Director::prepareWriteSession_6_closure* gen0);\
  void _slist_1(Closure_Director::prepareWriteSession_6_closure* gen0);        \
  void _slist_1_end(Closure_Director::prepareWriteSession_6_closure* gen0);    \
  void _serial_2(Closure_Director::prepareWriteSession_6_closure* gen0);       \
  SDAG::Continuation* _when_1(Closure_Director::prepareWriteSession_6_closure* gen0);\
  SDAG::Continuation* _when_1(Closure_Director::prepareWriteSession_6_closure* gen0, int refnum_0);\
  void _when_1_end(Closure_Director::prepareWriteSession_6_closure* gen0, CkReductionMsg* gen1);\
  void _serial_3(Closure_Director::prepareWriteSession_6_closure* gen0, CkReductionMsg* gen1);\
  SDAG::Continuation* _when_2(Closure_Director::prepareWriteSession_6_closure* gen0);\
  SDAG::Continuation* _when_2(Closure_Director::prepareWriteSession_6_closure* gen0, int refnum_0);\
  void _when_2_end(Closure_Director::prepareWriteSession_6_closure* gen0, CkReductionMsg* gen1);\
  void _serial_4(Closure_Director::prepareWriteSession_6_closure* gen0, CkReductionMsg* gen1);\
public:                                                                        \
  void sessionReady(CkReductionMsg* m_msg);                                    \
  void sessionDone(CkReductionMsg* m_msg);                                     \
public:                                                                        \
  SDAG::dep_ptr __dep;                                                         \
  void _sdag_init();                                                           \
  void __sdag_init();                                                          \
public:                                                                        \
  void _sdag_pup(PUP::er &p);                                                  \
  void __sdag_pup(PUP::er &p) { }                                              \
  static void __sdag_register();                                               \
  static int _sdag_idx_Director_serial_0();                                    \
  static int _sdag_reg_Director_serial_0();                                    \
  static int _sdag_idx_Director_serial_1();                                    \
  static int _sdag_reg_Director_serial_1();                                    \
  static int _sdag_idx_Director_serial_2();                                    \
  static int _sdag_reg_Director_serial_2();                                    \
  static int _sdag_idx_Director_serial_3();                                    \
  static int _sdag_reg_Director_serial_3();                                    \
  static int _sdag_idx_Director_serial_4();                                    \
  static int _sdag_reg_Director_serial_4();                                    \

typedef CBaseT1<Chare, CProxy_Director>CBase_Director;

/* DECLS: group Manager: IrrGroup{
Manager();
void run();
void openFile(unsigned int opnum, const FileToken &token, const std::string &name, const Options &opts);
void close(unsigned int opnum, const FileToken &token, const CkCallback &closed);
Manager(CkMigrateMessage* impl_msg);
};
 */
 class Manager;
 class CkIndex_Manager;
 class CProxy_Manager;
 class CProxyElement_Manager;
 class CProxySection_Manager;
/* --------------- index object ------------------ */
class CkIndex_Manager:public CkIndex_IrrGroup{
  public:
    typedef Manager local_t;
    typedef CkIndex_Manager index_t;
    typedef CProxy_Manager proxy_t;
    typedef CProxyElement_Manager element_t;
    typedef CProxySection_Manager section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: Manager();
     */
    // Entry point registration at startup
    
    static int reg_Manager_void();
    // Entry point index lookup
    
    inline static int idx_Manager_void() {
      static int epidx = reg_Manager_void();
      return epidx;
    }

    
    static int ckNew() { return idx_Manager_void(); }
    
    static void _call_Manager_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_Manager_void(void* impl_msg, void* impl_obj);
    /* DECLS: void run();
     */
    // Entry point registration at startup
    
    static int reg_run_void();
    // Entry point index lookup
    
    inline static int idx_run_void() {
      static int epidx = reg_run_void();
      return epidx;
    }

    
    inline static int idx_run(void (Manager::*)() ) {
      return idx_run_void();
    }


    
    static int run() { return idx_run_void(); }
    
    static void _call_run_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_run_void(void* impl_msg, void* impl_obj);
    /* DECLS: void openFile(unsigned int opnum, const FileToken &token, const std::string &name, const Options &opts);
     */
    // Entry point registration at startup
    
    static int reg_openFile_marshall3();
    // Entry point index lookup
    
    inline static int idx_openFile_marshall3() {
      static int epidx = reg_openFile_marshall3();
      return epidx;
    }

    
    inline static int idx_openFile(void (Manager::*)(unsigned int opnum, const FileToken &token, const std::string &name, const Options &opts) ) {
      return idx_openFile_marshall3();
    }


    
    static int openFile(unsigned int opnum, const FileToken &token, const std::string &name, const Options &opts) { return idx_openFile_marshall3(); }
    
    static void _call_openFile_marshall3(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_openFile_marshall3(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_openFile_marshall3(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_openFile_marshall3(PUP::er &p,void *msg);
    /* DECLS: void close(unsigned int opnum, const FileToken &token, const CkCallback &closed);
     */
    // Entry point registration at startup
    
    static int reg_close_marshall4();
    // Entry point index lookup
    
    inline static int idx_close_marshall4() {
      static int epidx = reg_close_marshall4();
      return epidx;
    }

    
    inline static int idx_close(void (Manager::*)(unsigned int opnum, const FileToken &token, const CkCallback &closed) ) {
      return idx_close_marshall4();
    }


    
    static int close(unsigned int opnum, const FileToken &token, const CkCallback &closed) { return idx_close_marshall4(); }
    
    static void _call_close_marshall4(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_close_marshall4(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_close_marshall4(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_close_marshall4(PUP::er &p,void *msg);
    /* DECLS: Manager(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_Manager_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_Manager_CkMigrateMessage() {
      static int epidx = reg_Manager_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_Manager_CkMigrateMessage(); }
    
    static void _call_Manager_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_Manager_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_Manager: public CProxyElement_IrrGroup{
  public:
    typedef Manager local_t;
    typedef CkIndex_Manager index_t;
    typedef CProxy_Manager proxy_t;
    typedef CProxyElement_Manager element_t;
    typedef CProxySection_Manager section_t;


    /* TRAM aggregators */

    CProxyElement_Manager(void) {
    }
    CProxyElement_Manager(const IrrGroup *g) : CProxyElement_IrrGroup(g){
    }
    CProxyElement_Manager(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_IrrGroup(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_Manager(CkGroupID _gid,int _onPE) : CProxyElement_IrrGroup(_gid,_onPE){
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
    Manager* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static Manager* ckLocalBranch(CkGroupID gID) {
      return (Manager*)CkLocalBranch(gID);
    }
/* DECLS: Manager();
 */
    

/* DECLS: void run();
 */
    
    void run(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void openFile(unsigned int opnum, const FileToken &token, const std::string &name, const Options &opts);
 */
    
    void openFile(unsigned int opnum, const FileToken &token, const std::string &name, const Options &opts, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void close(unsigned int opnum, const FileToken &token, const CkCallback &closed);
 */
    
    void close(unsigned int opnum, const FileToken &token, const CkCallback &closed, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: Manager(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- collective proxy -------------- */
class CProxy_Manager: public CProxy_IrrGroup{
  public:
    typedef Manager local_t;
    typedef CkIndex_Manager index_t;
    typedef CProxy_Manager proxy_t;
    typedef CProxyElement_Manager element_t;
    typedef CProxySection_Manager section_t;

    CProxy_Manager(void) {
    }
    CProxy_Manager(const IrrGroup *g) : CProxy_IrrGroup(g){
    }
    CProxy_Manager(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_IrrGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_Manager(CkGroupID _gid) : CProxy_IrrGroup(_gid){  }
    CProxyElement_Manager operator[](int onPE) const
      {return CProxyElement_Manager(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

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
    Manager* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static Manager* ckLocalBranch(CkGroupID gID) {
      return (Manager*)CkLocalBranch(gID);
    }
/* DECLS: Manager();
 */
    
    static CkGroupID ckNew(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void run();
 */
    
    void run(const CkEntryOptions *impl_e_opts=NULL);
    
    void run(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void run(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void openFile(unsigned int opnum, const FileToken &token, const std::string &name, const Options &opts);
 */
    
    void openFile(unsigned int opnum, const FileToken &token, const std::string &name, const Options &opts, const CkEntryOptions *impl_e_opts=NULL);
    
    void openFile(unsigned int opnum, const FileToken &token, const std::string &name, const Options &opts, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void openFile(unsigned int opnum, const FileToken &token, const std::string &name, const Options &opts, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void close(unsigned int opnum, const FileToken &token, const CkCallback &closed);
 */
    
    void close(unsigned int opnum, const FileToken &token, const CkCallback &closed, const CkEntryOptions *impl_e_opts=NULL);
    
    void close(unsigned int opnum, const FileToken &token, const CkCallback &closed, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void close(unsigned int opnum, const FileToken &token, const CkCallback &closed, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: Manager(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- section proxy -------------- */
class CProxySection_Manager: public CProxySection_IrrGroup{
  public:
    typedef Manager local_t;
    typedef CkIndex_Manager index_t;
    typedef CProxy_Manager proxy_t;
    typedef CProxyElement_Manager element_t;
    typedef CProxySection_Manager section_t;

    CProxySection_Manager(void) {
    }
    CProxySection_Manager(const IrrGroup *g) : CProxySection_IrrGroup(g){
    }
    CProxySection_Manager(const CkGroupID &_gid,const int *_pelist,int _npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_Manager(const CkGroupID &_gid,const int *_pelist,int _npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(_gid,_pelist,_npes,factor){  }
    CProxySection_Manager(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,factor){  }
    CProxySection_Manager(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

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
    Manager* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static Manager* ckLocalBranch(CkGroupID gID) {
      return (Manager*)CkLocalBranch(gID);
    }
/* DECLS: Manager();
 */
    

/* DECLS: void run();
 */
    
    void run(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void openFile(unsigned int opnum, const FileToken &token, const std::string &name, const Options &opts);
 */
    
    void openFile(unsigned int opnum, const FileToken &token, const std::string &name, const Options &opts, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void close(unsigned int opnum, const FileToken &token, const CkCallback &closed);
 */
    
    void close(unsigned int opnum, const FileToken &token, const CkCallback &closed, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: Manager(CkMigrateMessage* impl_msg);
 */

};
#define Manager_SDAG_CODE                                                      \
public:                                                                        \
  void run();                                                                  \
  void _sdag_fnc_run();                                                        \
private:                                                                       \
  void run_end();                                                              \
  void _slist_0();                                                             \
  void _slist_0_end();                                                         \
  void _while_0();                                                             \
  void _while_0_end();                                                         \
  void _slist_1();                                                             \
  void _slist_1_end();                                                         \
  void _case_0();                                                              \
  void _case_0_end();                                                          \
  void _caselist_0();                                                          \
  void _caselist_0_end(SDAG::CSpeculator* _cs0);                               \
  SDAG::Continuation* _when_0(SDAG::CSpeculator* _cs0);                        \
  SDAG::Continuation* _when_0(SDAG::CSpeculator* _cs0, int refnum_0);          \
  void _when_0_end(SDAG::CSpeculator* _cs0, Closure_Manager::openFile_3_closure* gen1);\
  void _serial_0(SDAG::CSpeculator* _cs0, Closure_Manager::openFile_3_closure* gen1);\
  SDAG::Continuation* _when_1(SDAG::CSpeculator* _cs0);                        \
  SDAG::Continuation* _when_1(SDAG::CSpeculator* _cs0, int refnum_0);          \
  void _when_1_end(SDAG::CSpeculator* _cs0, Closure_Manager::close_4_closure* gen1);\
  void _serial_1(SDAG::CSpeculator* _cs0, Closure_Manager::close_4_closure* gen1);\
  void _serial_2();                                                            \
public:                                                                        \
  void openFile(Closure_Manager::openFile_3_closure* genClosure);              \
  void openFile(unsigned int opnum_, FileToken token, std::string name, Options opts);\
  void close(Closure_Manager::close_4_closure* genClosure);                    \
  void close(unsigned int opnum_, FileToken token, CkCallback closed);         \
public:                                                                        \
  SDAG::dep_ptr __dep;                                                         \
  void _sdag_init();                                                           \
  void __sdag_init();                                                          \
public:                                                                        \
  void _sdag_pup(PUP::er &p);                                                  \
  void __sdag_pup(PUP::er &p) { }                                              \
  static void __sdag_register();                                               \
  static int _sdag_idx_Manager_serial_0();                                     \
  static int _sdag_reg_Manager_serial_0();                                     \
  static int _sdag_idx_Manager_serial_1();                                     \
  static int _sdag_reg_Manager_serial_1();                                     \
  static int _sdag_idx_Manager_serial_2();                                     \
  static int _sdag_reg_Manager_serial_2();                                     \

typedef CBaseT1<Group, CProxy_Manager>CBase_Manager;

/* DECLS: array WriteSession: ArrayElement{
WriteSession(const FileToken &file, const size_t &offset, const size_t &bytes);
void forwardData(const char *data, const size_t &bytes, const size_t &offset);
void syncData();
WriteSession(CkMigrateMessage* impl_msg);
};
 */
 class WriteSession;
 class CkIndex_WriteSession;
 class CProxy_WriteSession;
 class CProxyElement_WriteSession;
 class CProxySection_WriteSession;
/* --------------- index object ------------------ */
class CkIndex_WriteSession:public CkIndex_ArrayElement{
  public:
    typedef WriteSession local_t;
    typedef CkIndex_WriteSession index_t;
    typedef CProxy_WriteSession proxy_t;
    typedef CProxyElement_WriteSession element_t;
    typedef CProxySection_WriteSession section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: WriteSession(const FileToken &file, const size_t &offset, const size_t &bytes);
     */
    // Entry point registration at startup
    
    static int reg_WriteSession_marshall1();
    // Entry point index lookup
    
    inline static int idx_WriteSession_marshall1() {
      static int epidx = reg_WriteSession_marshall1();
      return epidx;
    }

    
    static int ckNew(const FileToken &file, const size_t &offset, const size_t &bytes) { return idx_WriteSession_marshall1(); }
    
    static void _call_WriteSession_marshall1(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_WriteSession_marshall1(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_WriteSession_marshall1(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_WriteSession_marshall1(PUP::er &p,void *msg);
    /* DECLS: void forwardData(const char *data, const size_t &bytes, const size_t &offset);
     */
    // Entry point registration at startup
    
    static int reg_forwardData_marshall2();
    // Entry point index lookup
    
    inline static int idx_forwardData_marshall2() {
      static int epidx = reg_forwardData_marshall2();
      return epidx;
    }

    
    inline static int idx_forwardData(void (WriteSession::*)(const char *data, const size_t &bytes, const size_t &offset) ) {
      return idx_forwardData_marshall2();
    }


    
    static int forwardData(const char *data, const size_t &bytes, const size_t &offset) { return idx_forwardData_marshall2(); }
    
    static void _call_forwardData_marshall2(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_forwardData_marshall2(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_forwardData_marshall2(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_forwardData_marshall2(PUP::er &p,void *msg);
    /* DECLS: void syncData();
     */
    // Entry point registration at startup
    
    static int reg_syncData_void();
    // Entry point index lookup
    
    inline static int idx_syncData_void() {
      static int epidx = reg_syncData_void();
      return epidx;
    }

    
    inline static int idx_syncData(void (WriteSession::*)() ) {
      return idx_syncData_void();
    }


    
    static int syncData() { return idx_syncData_void(); }
    
    static void _call_syncData_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_syncData_void(void* impl_msg, void* impl_obj);
    /* DECLS: WriteSession(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_WriteSession_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_WriteSession_CkMigrateMessage() {
      static int epidx = reg_WriteSession_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_WriteSession_CkMigrateMessage(); }
    
    static void _call_WriteSession_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_WriteSession_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
 class CProxyElement_WriteSession : public CProxyElement_ArrayElement{
  public:
    typedef WriteSession local_t;
    typedef CkIndex_WriteSession index_t;
    typedef CProxy_WriteSession proxy_t;
    typedef CProxyElement_WriteSession element_t;
    typedef CProxySection_WriteSession section_t;

    using array_index_t = CkArrayIndex1D;

    /* TRAM aggregators */

    CProxyElement_WriteSession(void) {
    }
    CProxyElement_WriteSession(const ArrayElement *e) : CProxyElement_ArrayElement(e){
    }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxyElement_ArrayElement::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxyElement_ArrayElement::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxyElement_ArrayElement::pup(p);
    }

    int ckIsDelegated(void) const
    { return CProxyElement_ArrayElement::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxyElement_ArrayElement::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxyElement_ArrayElement::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxyElement_ArrayElement::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxyElement_ArrayElement::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxyElement_ArrayElement::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxyElement_ArrayElement::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxyElement_ArrayElement::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(CkArrayOptions opts = CkArrayOptions())
    { return CProxyElement_ArrayElement::ckCreateEmptyArray(opts); }
    inline static void ckCreateEmptyArrayAsync(CkCallback cb, CkArrayOptions opts = CkArrayOptions())
    { CProxyElement_ArrayElement::ckCreateEmptyArrayAsync(cb, opts); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxyElement_ArrayElement::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxyElement_ArrayElement::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxyElement_ArrayElement::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxyElement_ArrayElement::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_ArrayElement::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_ArrayElement::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxyElement_ArrayElement::ckSetReductionClient(cb); }

    inline void ckInsert(CkArrayMessage *m,int ctor,int onPe)
    { CProxyElement_ArrayElement::ckInsert(m,ctor,onPe); }
    inline void ckSend(CkArrayMessage *m, int ep, int opts = 0) const
    { CProxyElement_ArrayElement::ckSend(m,ep,opts); }
    inline void *ckSendSync(CkArrayMessage *m, int ep) const
    { return CProxyElement_ArrayElement::ckSendSync(m,ep); }
    inline const CkArrayIndex &ckGetIndex() const
    { return CProxyElement_ArrayElement::ckGetIndex(); }

    WriteSession *ckLocal(void) const
    { return (WriteSession *)CProxyElement_ArrayElement::ckLocal(); }

    CProxyElement_WriteSession(const CkArrayID &aid,const CkArrayIndex1D &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_WriteSession(const CkArrayID &aid,const CkArrayIndex1D &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}

    CProxyElement_WriteSession(const CkArrayID &aid,const CkArrayIndex &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_WriteSession(const CkArrayID &aid,const CkArrayIndex &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}
/* DECLS: WriteSession(const FileToken &file, const size_t &offset, const size_t &bytes);
 */
    
    void insert(const FileToken &file, const size_t &offset, const size_t &bytes, int onPE=-1, const CkEntryOptions *impl_e_opts=NULL);
/* DECLS: void forwardData(const char *data, const size_t &bytes, const size_t &offset);
 */
    
    void forwardData(const char *data, const size_t &bytes, const size_t &offset, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void syncData();
 */
    
    void syncData(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: WriteSession(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- collective proxy -------------- */
 class CProxy_WriteSession : public CProxy_ArrayElement{
  public:
    typedef WriteSession local_t;
    typedef CkIndex_WriteSession index_t;
    typedef CProxy_WriteSession proxy_t;
    typedef CProxyElement_WriteSession element_t;
    typedef CProxySection_WriteSession section_t;

    using array_index_t = CkArrayIndex1D;
    CProxy_WriteSession(void) {
    }
    CProxy_WriteSession(const ArrayElement *e) : CProxy_ArrayElement(e){
    }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_ArrayElement::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_ArrayElement::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_ArrayElement::pup(p);
    }

    int ckIsDelegated(void) const
    { return CProxy_ArrayElement::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_ArrayElement::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_ArrayElement::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_ArrayElement::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxy_ArrayElement::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxy_ArrayElement::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxy_ArrayElement::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxy_ArrayElement::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(CkArrayOptions opts = CkArrayOptions())
    { return CProxy_ArrayElement::ckCreateEmptyArray(opts); }
    inline static void ckCreateEmptyArrayAsync(CkCallback cb, CkArrayOptions opts = CkArrayOptions())
    { CProxy_ArrayElement::ckCreateEmptyArrayAsync(cb, opts); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxy_ArrayElement::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxy_ArrayElement::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxy_ArrayElement::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxy_ArrayElement::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_ArrayElement::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_ArrayElement::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxy_ArrayElement::ckSetReductionClient(cb); }

    // Empty array construction
    static CkArrayID ckNew(CkArrayOptions opts = CkArrayOptions()) { return ckCreateEmptyArray(opts); }
    static void      ckNew(CkCallback cb, CkArrayOptions opts = CkArrayOptions()) { ckCreateEmptyArrayAsync(cb, opts); }

    // Generalized array indexing:
    CProxyElement_WriteSession operator [] (const CkArrayIndex1D &idx) const
    { return CProxyElement_WriteSession(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_WriteSession operator() (const CkArrayIndex1D &idx) const
    { return CProxyElement_WriteSession(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_WriteSession operator [] (int idx) const 
        {return CProxyElement_WriteSession(ckGetArrayID(), CkArrayIndex1D(idx), CK_DELCTOR_CALL);}
    CProxyElement_WriteSession operator () (int idx) const 
        {return CProxyElement_WriteSession(ckGetArrayID(), CkArrayIndex1D(idx), CK_DELCTOR_CALL);}
    CProxy_WriteSession(const CkArrayID &aid,CK_DELCTOR_PARAM) 
        :CProxy_ArrayElement(aid,CK_DELCTOR_ARGS) {}
    CProxy_WriteSession(const CkArrayID &aid) 
        :CProxy_ArrayElement(aid) {}
/* DECLS: WriteSession(const FileToken &file, const size_t &offset, const size_t &bytes);
 */
    
    static CkArrayID ckNew(const FileToken &file, const size_t &offset, const size_t &bytes, const CkArrayOptions &opts = CkArrayOptions(), const CkEntryOptions *impl_e_opts=NULL);
    static void      ckNew(const FileToken &file, const size_t &offset, const size_t &bytes, const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);
    static CkArrayID ckNew(const FileToken &file, const size_t &offset, const size_t &bytes, const int s1, const CkEntryOptions *impl_e_opts=NULL);
    static void ckNew(const FileToken &file, const size_t &offset, const size_t &bytes, const int s1, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void forwardData(const char *data, const size_t &bytes, const size_t &offset);
 */
    
    void forwardData(const char *data, const size_t &bytes, const size_t &offset, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void syncData();
 */
    
    void syncData(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: WriteSession(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- section proxy -------------- */
 class CProxySection_WriteSession : public CProxySection_ArrayElement{
  public:
    typedef WriteSession local_t;
    typedef CkIndex_WriteSession index_t;
    typedef CProxy_WriteSession proxy_t;
    typedef CProxyElement_WriteSession element_t;
    typedef CProxySection_WriteSession section_t;

    using array_index_t = CkArrayIndex1D;
    CProxySection_WriteSession(void) {
    }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxySection_ArrayElement::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxySection_ArrayElement::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxySection_ArrayElement::pup(p);
    }

    int ckIsDelegated(void) const
    { return CProxySection_ArrayElement::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxySection_ArrayElement::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxySection_ArrayElement::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxySection_ArrayElement::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxySection_ArrayElement::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxySection_ArrayElement::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxySection_ArrayElement::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxySection_ArrayElement::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(CkArrayOptions opts = CkArrayOptions())
    { return CProxySection_ArrayElement::ckCreateEmptyArray(opts); }
    inline static void ckCreateEmptyArrayAsync(CkCallback cb, CkArrayOptions opts = CkArrayOptions())
    { CProxySection_ArrayElement::ckCreateEmptyArrayAsync(cb, opts); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxySection_ArrayElement::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxySection_ArrayElement::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxySection_ArrayElement::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxySection_ArrayElement::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_ArrayElement::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_ArrayElement::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxySection_ArrayElement::ckSetReductionClient(cb); }

    inline void ckSend(CkArrayMessage *m, int ep, int opts = 0)
    { CProxySection_ArrayElement::ckSend(m,ep,opts); }
    inline CkSectionInfo &ckGetSectionInfo()
    { return CProxySection_ArrayElement::ckGetSectionInfo(); }
    inline CkSectionID *ckGetSectionIDs()
    { return CProxySection_ArrayElement::ckGetSectionIDs(); }
    inline CkSectionID &ckGetSectionID()
    { return CProxySection_ArrayElement::ckGetSectionID(); }
    inline CkSectionID &ckGetSectionID(int i)
    { return CProxySection_ArrayElement::ckGetSectionID(i); }
    inline CkArrayID ckGetArrayIDn(int i) const
    { return CProxySection_ArrayElement::ckGetArrayIDn(i); } 
    inline CkArrayIndex *ckGetArrayElements() const
    { return CProxySection_ArrayElement::ckGetArrayElements(); }
    inline CkArrayIndex *ckGetArrayElements(int i) const
    { return CProxySection_ArrayElement::ckGetArrayElements(i); }
    inline int ckGetNumElements() const
    { return CProxySection_ArrayElement::ckGetNumElements(); } 
    inline int ckGetNumElements(int i) const
    { return CProxySection_ArrayElement::ckGetNumElements(i); }    // Generalized array indexing:
    CProxyElement_WriteSession operator [] (const CkArrayIndex1D &idx) const
        {return CProxyElement_WriteSession(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_WriteSession operator() (const CkArrayIndex1D &idx) const
        {return CProxyElement_WriteSession(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_WriteSession operator [] (int idx) const 
        {return CProxyElement_WriteSession(ckGetArrayID(), *(CkArrayIndex1D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
    CProxyElement_WriteSession operator () (int idx) const 
        {return CProxyElement_WriteSession(ckGetArrayID(), *(CkArrayIndex1D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex1D *elems, int nElems, int factor=USE_DEFAULT_BRANCH_FACTOR) {
      return CkSectionID(aid, elems, nElems, factor);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, const std::vector<CkArrayIndex1D> &elems, int factor=USE_DEFAULT_BRANCH_FACTOR) {
      return CkSectionID(aid, elems, factor);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, int l, int u, int s, int factor=USE_DEFAULT_BRANCH_FACTOR) {
      std::vector<CkArrayIndex1D> al;
      for (int i=l; i<=u; i+=s) al.emplace_back(i);
      return CkSectionID(aid, al, factor);
    } 
    CProxySection_WriteSession(const CkArrayID &aid, CkArrayIndex *elems, int nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_WriteSession(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_WriteSession(const CkArrayID &aid, CkArrayIndex *elems, int nElems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_ArrayElement(aid,elems,nElems, factor) {}
    CProxySection_WriteSession(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_ArrayElement(aid,elems, factor) { ckAutoDelegate(); }
    CProxySection_WriteSession(const CkSectionID &sid)  
        :CProxySection_ArrayElement(sid) { ckAutoDelegate(); }
    CProxySection_WriteSession(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(n,aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_WriteSession(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_WriteSession(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems) 
        :CProxySection_ArrayElement(n,aid,elems,nElems) { ckAutoDelegate(); }
    CProxySection_WriteSession(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems) 
        :CProxySection_ArrayElement(aid,elems) { ckAutoDelegate(); }
    CProxySection_WriteSession(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, int factor) 
        :CProxySection_ArrayElement(n,aid,elems,nElems, factor) { ckAutoDelegate(); }
    CProxySection_WriteSession(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, int factor) 
        :CProxySection_ArrayElement(aid,elems, factor) { ckAutoDelegate(); }
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex *elems, int nElems) {
      return CkSectionID(aid, elems, nElems);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems) {
       return CkSectionID(aid, elems);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex *elems, int nElems, int factor) {
      return CkSectionID(aid, elems, nElems, factor);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, int factor) {
      return CkSectionID(aid, elems, factor);
    } 
    void ckAutoDelegate(int opts=1) {
      if(ckIsDelegated()) return;
      CProxySection_ArrayElement::ckAutoDelegate(opts);
    } 
    void setReductionClient(CkCallback *cb) {
      CProxySection_ArrayElement::setReductionClient(cb);
    } 
    void resetSection() {
      CProxySection_ArrayElement::resetSection();
    } 
    static void contribute(CkSectionInfo &sid, int userData=-1, int fragSize=-1);
    static void contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, int userData=-1, int fragSize=-1);
    template <typename T>
    static void contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, int userData=-1, int fragSize=-1);
    static void contribute(CkSectionInfo &sid, const CkCallback &cb, int userData=-1, int fragSize=-1);
    static void contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData=-1, int fragSize=-1);
    template <typename T>
    static void contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData=-1, int fragSize=-1);
/* DECLS: WriteSession(const FileToken &file, const size_t &offset, const size_t &bytes);
 */
    

/* DECLS: void forwardData(const char *data, const size_t &bytes, const size_t &offset);
 */
    
    void forwardData(const char *data, const size_t &bytes, const size_t &offset, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void syncData();
 */
    
    void syncData(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: WriteSession(CkMigrateMessage* impl_msg);
 */

};
#define WriteSession_SDAG_CODE 
typedef CBaseT1<ArrayElementT<CkIndex1D>, CProxy_WriteSession>CBase_WriteSession;

/* DECLS: group Map: CkArrayMap{
Map();
};
 */
 class Map;
 class CkIndex_Map;
 class CProxy_Map;
 class CProxyElement_Map;
 class CProxySection_Map;
/* --------------- index object ------------------ */
class CkIndex_Map:public CkIndex_CkArrayMap{
  public:
    typedef Map local_t;
    typedef CkIndex_Map index_t;
    typedef CProxy_Map proxy_t;
    typedef CProxyElement_Map element_t;
    typedef CProxySection_Map section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: Map();
     */
    // Entry point registration at startup
    
    static int reg_Map_void();
    // Entry point index lookup
    
    inline static int idx_Map_void() {
      static int epidx = reg_Map_void();
      return epidx;
    }

    
    static int ckNew() { return idx_Map_void(); }
    
    static void _call_Map_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_Map_void(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_Map: public CProxyElement_CkArrayMap{
  public:
    typedef Map local_t;
    typedef CkIndex_Map index_t;
    typedef CProxy_Map proxy_t;
    typedef CProxyElement_Map element_t;
    typedef CProxySection_Map section_t;


    /* TRAM aggregators */

    CProxyElement_Map(void) {
    }
    CProxyElement_Map(const IrrGroup *g) : CProxyElement_CkArrayMap(g){
    }
    CProxyElement_Map(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_CkArrayMap(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_Map(CkGroupID _gid,int _onPE) : CProxyElement_CkArrayMap(_gid,_onPE){
    }

    int ckIsDelegated(void) const
    { return CProxyElement_CkArrayMap::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxyElement_CkArrayMap::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxyElement_CkArrayMap::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxyElement_CkArrayMap::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxyElement_CkArrayMap::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxyElement_CkArrayMap::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxyElement_CkArrayMap::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_CkArrayMap::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_CkArrayMap::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxyElement_CkArrayMap::ckSetReductionClient(cb); }
int ckGetGroupPe(void) const
{return CProxyElement_CkArrayMap::ckGetGroupPe();}

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxyElement_CkArrayMap::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxyElement_CkArrayMap::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxyElement_CkArrayMap::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxyElement_CkArrayMap::ckSetGroupID(g);
    }
    Map* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static Map* ckLocalBranch(CkGroupID gID) {
      return (Map*)CkLocalBranch(gID);
    }
/* DECLS: Map();
 */
    

};
/* ---------------- collective proxy -------------- */
class CProxy_Map: public CProxy_CkArrayMap{
  public:
    typedef Map local_t;
    typedef CkIndex_Map index_t;
    typedef CProxy_Map proxy_t;
    typedef CProxyElement_Map element_t;
    typedef CProxySection_Map section_t;

    CProxy_Map(void) {
    }
    CProxy_Map(const IrrGroup *g) : CProxy_CkArrayMap(g){
    }
    CProxy_Map(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_CkArrayMap(_gid,CK_DELCTOR_ARGS){  }
    CProxy_Map(CkGroupID _gid) : CProxy_CkArrayMap(_gid){  }
    CProxyElement_Map operator[](int onPE) const
      {return CProxyElement_Map(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

    int ckIsDelegated(void) const
    { return CProxy_CkArrayMap::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_CkArrayMap::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_CkArrayMap::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_CkArrayMap::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxy_CkArrayMap::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxy_CkArrayMap::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxy_CkArrayMap::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_CkArrayMap::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_CkArrayMap::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxy_CkArrayMap::ckSetReductionClient(cb); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_CkArrayMap::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_CkArrayMap::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_CkArrayMap::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxy_CkArrayMap::ckSetGroupID(g);
    }
    Map* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static Map* ckLocalBranch(CkGroupID gID) {
      return (Map*)CkLocalBranch(gID);
    }
/* DECLS: Map();
 */
    
    static CkGroupID ckNew(const CkEntryOptions *impl_e_opts=NULL);

};
/* ---------------- section proxy -------------- */
class CProxySection_Map: public CProxySection_CkArrayMap{
  public:
    typedef Map local_t;
    typedef CkIndex_Map index_t;
    typedef CProxy_Map proxy_t;
    typedef CProxyElement_Map element_t;
    typedef CProxySection_Map section_t;

    CProxySection_Map(void) {
    }
    CProxySection_Map(const IrrGroup *g) : CProxySection_CkArrayMap(g){
    }
    CProxySection_Map(const CkGroupID &_gid,const int *_pelist,int _npes, CK_DELCTOR_PARAM) : CProxySection_CkArrayMap(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_Map(const CkGroupID &_gid,const int *_pelist,int _npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_CkArrayMap(_gid,_pelist,_npes,factor){  }
    CProxySection_Map(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_CkArrayMap(n,_gid,_pelist,_npes,factor){  }
    CProxySection_Map(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, CK_DELCTOR_PARAM) : CProxySection_CkArrayMap(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

    int ckIsDelegated(void) const
    { return CProxySection_CkArrayMap::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxySection_CkArrayMap::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxySection_CkArrayMap::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxySection_CkArrayMap::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxySection_CkArrayMap::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxySection_CkArrayMap::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxySection_CkArrayMap::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_CkArrayMap::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_CkArrayMap::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxySection_CkArrayMap::ckSetReductionClient(cb); }
inline int ckGetNumSections() const
{ return CProxySection_CkArrayMap::ckGetNumSections(); }
inline CkSectionInfo &ckGetSectionInfo()
{ return CProxySection_CkArrayMap::ckGetSectionInfo(); }
inline CkSectionID *ckGetSectionIDs()
{ return CProxySection_CkArrayMap::ckGetSectionIDs(); }
inline CkSectionID &ckGetSectionID()
{ return CProxySection_CkArrayMap::ckGetSectionID(); }
inline CkSectionID &ckGetSectionID(int i)
{ return CProxySection_CkArrayMap::ckGetSectionID(i); }
inline CkGroupID ckGetGroupIDn(int i) const
{ return CProxySection_CkArrayMap::ckGetGroupIDn(i); }
inline const int *ckGetElements() const
{ return CProxySection_CkArrayMap::ckGetElements(); }
inline const int *ckGetElements(int i) const
{ return CProxySection_CkArrayMap::ckGetElements(i); }
inline int ckGetNumElements() const
{ return CProxySection_CkArrayMap::ckGetNumElements(); } 
inline int ckGetNumElements(int i) const
{ return CProxySection_CkArrayMap::ckGetNumElements(i); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxySection_CkArrayMap::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxySection_CkArrayMap::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxySection_CkArrayMap::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxySection_CkArrayMap::ckSetGroupID(g);
    }
    Map* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static Map* ckLocalBranch(CkGroupID gID) {
      return (Map*)CkLocalBranch(gID);
    }
/* DECLS: Map();
 */
    

};
#define Map_SDAG_CODE 
typedef CBaseT1<CkArrayMap, CProxy_Map>CBase_Map;

} // namespace impl

} // namespace IO

} // namespace Ck


namespace Ck {
namespace IO {
namespace impl {

/* ---------------- method closures -------------- */
class Closure_Director {
  public:


    struct openFile_2_closure;


    struct fileOpened_3_closure;


    struct sessionComplete_4_closure;


    struct prepareWriteSession_5_closure;


    struct prepareWriteSession_6_closure;




    struct close_9_closure;


};

/* ---------------- method closures -------------- */
class Closure_Manager {
  public:


    struct run_2_closure;


    struct openFile_3_closure;


    struct close_4_closure;


};

/* ---------------- method closures -------------- */
class Closure_WriteSession {
  public:


    struct forwardData_2_closure;


    struct syncData_3_closure;


};

/* ---------------- method closures -------------- */
class Closure_Map {
  public:

};

} // namespace impl

} // namespace IO

} // namespace Ck

extern void _registerCkIO_impl(void);
#endif
