






/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_pose::stop_3_closure : public SDAG::Closure {
      

      stop_3_closure() {
        init();
      }
      stop_3_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~stop_3_closure() {
      }
      PUPable_decl(SINGLE_ARG(stop_3_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_pose::prepExit_4_closure : public SDAG::Closure {
      

      prepExit_4_closure() {
        init();
      }
      prepExit_4_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~prepExit_4_closure() {
      }
      PUPable_decl(SINGLE_ARG(prepExit_4_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_pose::exit_5_closure : public SDAG::Closure {
      

      exit_5_closure() {
        init();
      }
      exit_5_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~exit_5_closure() {
      }
      PUPable_decl(SINGLE_ARG(exit_5_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: readonly double busyWait;
 */
extern double busyWait;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_busyWait(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|busyWait;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly double sim_timer;
 */
extern double sim_timer;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_sim_timer(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|sim_timer;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int POSE_inactDetect;
 */
extern int POSE_inactDetect;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_POSE_inactDetect(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|POSE_inactDetect;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly POSE_TimeType POSE_endtime;
 */
extern POSE_TimeType POSE_endtime;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_POSE_endtime(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|POSE_endtime;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly POSE_Config pose_config;
 */
extern POSE_Config pose_config;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_pose_config(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|pose_config;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int totalNumPosers;
 */
extern int totalNumPosers;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_totalNumPosers(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|totalNumPosers;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message callBack;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_callBack::operator new(size_t s){
  return callBack::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_callBack::operator new(size_t s, int* sz){
  return callBack::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_callBack::operator new(size_t s, int* sz,const int pb){
  return callBack::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_callBack::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return callBack::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_callBack::operator new(size_t s, const int p) {
  return callBack::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_callBack::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return callBack::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_callBack::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_callBack::CMessage_callBack() {
callBack *newmsg = (callBack *)this;
}
void CMessage_callBack::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_callBack::pack(callBack *msg) {
  return (void *) msg;
}
callBack* CMessage_callBack::unpack(void* buf) {
  callBack *msg = (callBack *) buf;
  return msg;
}
int CMessage_callBack::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: chare pose: Chare{
pose();
void registerCallBack(callBack* impl_msg);
void stop();
void prepExit();
void exit();
pose(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_pose::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: pose();
 */
CkChareID CProxy_pose::ckNew(int impl_onPE, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkChareID impl_ret;
  CkCreateChare(CkIndex_pose::__idx, CkIndex_pose::idx_pose_void(), impl_msg, &impl_ret, impl_onPE);
  return impl_ret;
}
void CProxy_pose::ckNew(CkChareID* pcid, int impl_onPE, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkCreateChare(CkIndex_pose::__idx, CkIndex_pose::idx_pose_void(), impl_msg, pcid, impl_onPE);
}

// Entry point registration function
int CkIndex_pose::reg_pose_void() {
  int epidx = CkRegisterEp("pose()",
      reinterpret_cast<CkCallFnPtr>(_call_pose_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_pose::_call_pose_void(void* impl_msg, void* impl_obj_void)
{
  pose* impl_obj = static_cast<pose*>(impl_obj_void);
  new (impl_obj_void) pose();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void registerCallBack(callBack* impl_msg);
 */
void CProxy_pose::registerCallBack(callBack* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_pose::idx_registerCallBack_callBack(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_pose::idx_registerCallBack_callBack(), impl_msg, &ckGetChareID(),destPE);
  } else {
    CkSendMsg(CkIndex_pose::idx_registerCallBack_callBack(), impl_msg, &ckGetChareID(),0);
  }
}

// Entry point registration function
int CkIndex_pose::reg_registerCallBack_callBack() {
  int epidx = CkRegisterEp("registerCallBack(callBack* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_registerCallBack_callBack), CMessage_callBack::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)callBack::ckDebugPup);
  return epidx;
}

void CkIndex_pose::_call_registerCallBack_callBack(void* impl_msg, void* impl_obj_void)
{
  pose* impl_obj = static_cast<pose*>(impl_obj_void);
  impl_obj->registerCallBack((callBack*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void stop();
 */
void CProxy_pose::stop(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_pose::idx_stop_void(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_pose::idx_stop_void(), impl_msg, &ckGetChareID(),destPE);
  } else {
    CkSendMsg(CkIndex_pose::idx_stop_void(), impl_msg, &ckGetChareID(),0);
  }
}

// Entry point registration function
int CkIndex_pose::reg_stop_void() {
  int epidx = CkRegisterEp("stop()",
      reinterpret_cast<CkCallFnPtr>(_call_stop_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_pose::_call_stop_void(void* impl_msg, void* impl_obj_void)
{
  pose* impl_obj = static_cast<pose*>(impl_obj_void);
  impl_obj->stop();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_pose::stop_3_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void prepExit();
 */
void CProxy_pose::prepExit(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_pose::idx_prepExit_void(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_pose::idx_prepExit_void(), impl_msg, &ckGetChareID(),destPE);
  } else {
    CkSendMsg(CkIndex_pose::idx_prepExit_void(), impl_msg, &ckGetChareID(),0);
  }
}

// Entry point registration function
int CkIndex_pose::reg_prepExit_void() {
  int epidx = CkRegisterEp("prepExit()",
      reinterpret_cast<CkCallFnPtr>(_call_prepExit_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_pose::_call_prepExit_void(void* impl_msg, void* impl_obj_void)
{
  pose* impl_obj = static_cast<pose*>(impl_obj_void);
  impl_obj->prepExit();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_pose::prepExit_4_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void exit();
 */
void CProxy_pose::exit(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_pose::idx_exit_void(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_pose::idx_exit_void(), impl_msg, &ckGetChareID(),destPE);
  } else {
    CkSendMsg(CkIndex_pose::idx_exit_void(), impl_msg, &ckGetChareID(),0);
  }
}

// Entry point registration function
int CkIndex_pose::reg_exit_void() {
  int epidx = CkRegisterEp("exit()",
      reinterpret_cast<CkCallFnPtr>(_call_exit_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_pose::_call_exit_void(void* impl_msg, void* impl_obj_void)
{
  pose* impl_obj = static_cast<pose*>(impl_obj_void);
  impl_obj->exit();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_pose::exit_5_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: pose(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_pose::reg_pose_CkMigrateMessage() {
  int epidx = CkRegisterEp("pose(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_pose_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_pose::_call_pose_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  new (impl_obj_void) pose((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_pose::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeChare);
  CkRegisterBase(__idx, CkIndex_Chare::__idx);
  // REG: pose();
  idx_pose_void();
  CkRegisterDefaultCtor(__idx, idx_pose_void());

  // REG: void registerCallBack(callBack* impl_msg);
  idx_registerCallBack_callBack();

  // REG: void stop();
  idx_stop_void();

  // REG: void prepExit();
  idx_prepExit_void();

  // REG: void exit();
  idx_exit_void();

  // REG: pose(CkMigrateMessage* impl_msg);
  idx_pose_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_pose_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerpose(void)
{
  static int _done = 0; if(_done) return; _done = 1;
  CkRegisterReadonly("busyWait","double",sizeof(busyWait),(void *) &busyWait,__xlater_roPup_busyWait);

  CkRegisterReadonly("sim_timer","double",sizeof(sim_timer),(void *) &sim_timer,__xlater_roPup_sim_timer);

  CkRegisterReadonly("POSE_inactDetect","int",sizeof(POSE_inactDetect),(void *) &POSE_inactDetect,__xlater_roPup_POSE_inactDetect);

  CkRegisterReadonly("POSE_endtime","POSE_TimeType",sizeof(POSE_endtime),(void *) &POSE_endtime,__xlater_roPup_POSE_endtime);

  CkRegisterReadonly("pose_config","POSE_Config",sizeof(pose_config),(void *) &pose_config,__xlater_roPup_pose_config);

  CkRegisterReadonly("totalNumPosers","int",sizeof(totalNumPosers),(void *) &totalNumPosers,__xlater_roPup_totalNumPosers);

/* REG: message callBack;
*/
CMessage_callBack::__register("callBack", sizeof(callBack),(CkPackFnPtr) callBack::pack,(CkUnpackFnPtr) callBack::unpack);

/* REG: chare pose: Chare{
pose();
void registerCallBack(callBack* impl_msg);
void stop();
void prepExit();
void exit();
pose(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_pose::__register("pose", sizeof(pose));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_pose::virtual_pup(PUP::er &p) {
    recursive_pup<pose>(dynamic_cast<pose*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
