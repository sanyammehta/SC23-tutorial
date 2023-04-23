


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ckcallback_group::registerCcsCallback_2_closure : public SDAG::Closure {
            char *name;
            CkCallback cb;

      CkMarshallMsg* _impl_marshall;
      char* _impl_buf_in;
      int _impl_buf_size;

      registerCcsCallback_2_closure() {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      registerCcsCallback_2_closure(CkMigrateMessage*) {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
            char *& getP0() { return name;}
            CkCallback & getP1() { return cb;}
      void pup(PUP::er& __p) {
        __p | cb;
        packClosure(__p);
        __p | _impl_buf_size;
        bool hasMsg = (_impl_marshall != 0); __p | hasMsg;
        if (hasMsg) CkPupMessage(__p, (void**)&_impl_marshall);
        else PUParray(__p, _impl_buf_in, _impl_buf_size);
        if (__p.isUnpacking()) {
          char *impl_buf = _impl_marshall ? _impl_marshall->msgBuf : _impl_buf_in;
          PUP::fromMem implP(impl_buf);
  int impl_off_name, impl_cnt_name;
  implP|impl_off_name;
  implP|impl_cnt_name;
  PUP::detail::TemporaryObjectHolder<CkCallback> cb;
  implP|cb;
          impl_buf+=CK_ALIGN(implP.size(),16);
          name = (char *)(impl_buf+impl_off_name);
        }
      }
      virtual ~registerCcsCallback_2_closure() {
        if (_impl_marshall) CmiFree(UsrToEnv(_impl_marshall));
      }
      PUPable_decl(SINGLE_ARG(registerCcsCallback_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ckcallback_group::call_3_closure : public SDAG::Closure {
            CkCallback c;
            CkMarshalledMessage msg;


      call_3_closure() {
        init();
      }
      call_3_closure(CkMigrateMessage*) {
        init();
      }
            CkCallback & getP0() { return c;}
            CkMarshalledMessage & getP1() { return msg;}
      void pup(PUP::er& __p) {
        __p | c;
        __p | msg;
        packClosure(__p);
      }
      virtual ~call_3_closure() {
      }
      PUPable_decl(SINGLE_ARG(call_3_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ckcallback_group::call_4_closure : public SDAG::Closure {
            CkCallback c;
            int length;
            char *data;

      CkMarshallMsg* _impl_marshall;
      char* _impl_buf_in;
      int _impl_buf_size;

      call_4_closure() {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      call_4_closure(CkMigrateMessage*) {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
            CkCallback & getP0() { return c;}
            int & getP1() { return length;}
            char *& getP2() { return data;}
      void pup(PUP::er& __p) {
        __p | c;
        __p | length;
        packClosure(__p);
        __p | _impl_buf_size;
        bool hasMsg = (_impl_marshall != 0); __p | hasMsg;
        if (hasMsg) CkPupMessage(__p, (void**)&_impl_marshall);
        else PUParray(__p, _impl_buf_in, _impl_buf_size);
        if (__p.isUnpacking()) {
          char *impl_buf = _impl_marshall ? _impl_marshall->msgBuf : _impl_buf_in;
          PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkCallback> c;
  implP|c;
  PUP::detail::TemporaryObjectHolder<int> length;
  implP|length;
  int impl_off_data, impl_cnt_data;
  implP|impl_off_data;
  implP|impl_cnt_data;
          impl_buf+=CK_ALIGN(implP.size(),16);
          data = (char *)(impl_buf+impl_off_data);
        }
      }
      virtual ~call_4_closure() {
        if (_impl_marshall) CmiFree(UsrToEnv(_impl_marshall));
      }
      PUPable_decl(SINGLE_ARG(call_4_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: readonly CProxy_ckcallback_group _ckcallbackgroup;
 */
extern CProxy_ckcallback_group _ckcallbackgroup;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup__ckcallbackgroup(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|_ckcallbackgroup;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message CkCcsRequestMsg{
char data[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_CkCcsRequestMsg::operator new(size_t s){
  return CkCcsRequestMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_CkCcsRequestMsg::operator new(size_t s, int* sz){
  return CkCcsRequestMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_CkCcsRequestMsg::operator new(size_t s, int* sz,const int pb){
  return CkCcsRequestMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_CkCcsRequestMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return CkCcsRequestMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_CkCcsRequestMsg::operator new(size_t s, int sz0) {
  int sizes[1];
  sizes[0] = sz0;
  return CkCcsRequestMsg::alloc(__idx, s, sizes, 0, GroupDepNum{});
}
void *CMessage_CkCcsRequestMsg::operator new(size_t s, int sz0, const int p) {
  int sizes[1];
  sizes[0] = sz0;
  return CkCcsRequestMsg::alloc(__idx, s, sizes, p, GroupDepNum{});
}
void *CMessage_CkCcsRequestMsg::operator new(size_t s, int sz0, const int p, const GroupDepNum groupDepNum) {
  int sizes[1];
  sizes[0] = sz0;
  return CkCcsRequestMsg::alloc(__idx, s, sizes, p, groupDepNum);
}
void* CMessage_CkCcsRequestMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN_DEFAULT(sizeof(char)*sizes[0]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[1], pb, groupDepNum);
}
CMessage_CkCcsRequestMsg::CMessage_CkCcsRequestMsg() {
CkCcsRequestMsg *newmsg = (CkCcsRequestMsg *)this;
  newmsg->data = (char *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
}
void CMessage_CkCcsRequestMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_CkCcsRequestMsg::pack(CkCcsRequestMsg *msg) {
  msg->data = (char *) ((char *)msg->data - (char *)msg);
  return (void *) msg;
}
CkCcsRequestMsg* CMessage_CkCcsRequestMsg::unpack(void* buf) {
  CkCcsRequestMsg *msg = (CkCcsRequestMsg *) buf;
  msg->data = (char *) ((size_t)msg->data + (char *)msg);
  return msg;
}
int CMessage_CkCcsRequestMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message CkDataMsg{
char data[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_CkDataMsg::operator new(size_t s){
  return CkDataMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_CkDataMsg::operator new(size_t s, int* sz){
  return CkDataMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_CkDataMsg::operator new(size_t s, int* sz,const int pb){
  return CkDataMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_CkDataMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return CkDataMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_CkDataMsg::operator new(size_t s, int sz0) {
  int sizes[1];
  sizes[0] = sz0;
  return CkDataMsg::alloc(__idx, s, sizes, 0, GroupDepNum{});
}
void *CMessage_CkDataMsg::operator new(size_t s, int sz0, const int p) {
  int sizes[1];
  sizes[0] = sz0;
  return CkDataMsg::alloc(__idx, s, sizes, p, GroupDepNum{});
}
void *CMessage_CkDataMsg::operator new(size_t s, int sz0, const int p, const GroupDepNum groupDepNum) {
  int sizes[1];
  sizes[0] = sz0;
  return CkDataMsg::alloc(__idx, s, sizes, p, groupDepNum);
}
void* CMessage_CkDataMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN_DEFAULT(sizeof(char)*sizes[0]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[1], pb, groupDepNum);
}
CMessage_CkDataMsg::CMessage_CkDataMsg() {
CkDataMsg *newmsg = (CkDataMsg *)this;
  newmsg->data = (char *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
}
void CMessage_CkDataMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_CkDataMsg::pack(CkDataMsg *msg) {
  msg->data = (char *) ((char *)msg->data - (char *)msg);
  return (void *) msg;
}
CkDataMsg* CMessage_CkDataMsg::unpack(void* buf) {
  CkDataMsg *msg = (CkDataMsg *) buf;
  msg->data = (char *) ((size_t)msg->data + (char *)msg);
  return msg;
}
int CMessage_CkDataMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: mainchare ckcallback_main: Chare{
ckcallback_main(CkArgMsg* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_ckcallback_main::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: ckcallback_main(CkArgMsg* impl_msg);
 */
CkChareID CProxy_ckcallback_main::ckNew(CkArgMsg* impl_msg, int impl_onPE)
{
  CkChareID impl_ret;
  CkCreateChare(CkIndex_ckcallback_main::__idx, CkIndex_ckcallback_main::idx_ckcallback_main_CkArgMsg(), impl_msg, &impl_ret, impl_onPE);
  return impl_ret;
}
void CProxy_ckcallback_main::ckNew(CkArgMsg* impl_msg, CkChareID* pcid, int impl_onPE)
{
  CkCreateChare(CkIndex_ckcallback_main::__idx, CkIndex_ckcallback_main::idx_ckcallback_main_CkArgMsg(), impl_msg, pcid, impl_onPE);
}

// Entry point registration function
int CkIndex_ckcallback_main::reg_ckcallback_main_CkArgMsg() {
  int epidx = CkRegisterEp("ckcallback_main(CkArgMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_ckcallback_main_CkArgMsg), CMessage_CkArgMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkArgMsg::ckDebugPup);
  return epidx;
}

void CkIndex_ckcallback_main::_call_ckcallback_main_CkArgMsg(void* impl_msg, void* impl_obj_void)
{
  ckcallback_main* impl_obj = static_cast<ckcallback_main*>(impl_obj_void);
  new (impl_obj_void) ckcallback_main((CkArgMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_ckcallback_main::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeMainChare);
  CkRegisterBase(__idx, CkIndex_Chare::__idx);
  // REG: ckcallback_main(CkArgMsg* impl_msg);
  idx_ckcallback_main_CkArgMsg();
  CkRegisterMainChare(__idx, idx_ckcallback_main_CkArgMsg());

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group ckcallback_group: IrrGroup{
ckcallback_group();
void registerCcsCallback(const char *name, const CkCallback &cb);
void call(const CkCallback &c, const CkMarshalledMessage &msg);
void call(const CkCallback &c, int length, const char *data);
ckcallback_group(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_ckcallback_group::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: ckcallback_group();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void registerCcsCallback(const char *name, const CkCallback &cb);
 */
void CProxyElement_ckcallback_group::registerCcsCallback(const char *name, const CkCallback &cb, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const char *name, const CkCallback &cb
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_name, impl_cnt_name;
  impl_off_name=impl_off=CK_ALIGN(impl_off,sizeof(char));
  impl_off+=(impl_cnt_name=sizeof(char)*(strlen(name)+1));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_name;
    implP|impl_cnt_name;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_name;
    implP|impl_cnt_name;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_name,name,impl_cnt_name);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ckcallback_group::idx_registerCcsCallback_marshall2(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ckcallback_group::idx_registerCcsCallback_marshall2(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ckcallback_group::idx_registerCcsCallback_marshall2(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void call(const CkCallback &c, const CkMarshalledMessage &msg);
 */
void CProxyElement_ckcallback_group::call(const CkCallback &c, const CkMarshalledMessage &msg, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkCallback &c, const CkMarshalledMessage &msg
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)c;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkMarshalledMessage>::type>::type &)msg;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)c;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkMarshalledMessage>::type>::type &)msg;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ckcallback_group::idx_call_marshall3(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ckcallback_group::idx_call_marshall3(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ckcallback_group::idx_call_marshall3(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void call(const CkCallback &c, int length, const char *data);
 */
void CProxyElement_ckcallback_group::call(const CkCallback &c, int length, const char *data, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkCallback &c, int length, const char *data
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_data, impl_cnt_data;
  impl_off_data=impl_off=CK_ALIGN(impl_off,sizeof(char));
  impl_off+=(impl_cnt_data=sizeof(char)*(length));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)c;
    implP|length;
    implP|impl_off_data;
    implP|impl_cnt_data;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)c;
    implP|length;
    implP|impl_off_data;
    implP|impl_cnt_data;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_data,data,impl_cnt_data);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ckcallback_group::idx_call_marshall4(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ckcallback_group::idx_call_marshall4(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ckcallback_group::idx_call_marshall4(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ckcallback_group(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ckcallback_group();
 */
CkGroupID CProxy_ckcallback_group::ckNew(const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_ckcallback_group::__idx, CkIndex_ckcallback_group::idx_ckcallback_group_void(), impl_msg);
  return gId;
}

// Entry point registration function
int CkIndex_ckcallback_group::reg_ckcallback_group_void() {
  int epidx = CkRegisterEp("ckcallback_group()",
      reinterpret_cast<CkCallFnPtr>(_call_ckcallback_group_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_ckcallback_group::_call_ckcallback_group_void(void* impl_msg, void* impl_obj_void)
{
  ckcallback_group* impl_obj = static_cast<ckcallback_group*>(impl_obj_void);
  new (impl_obj_void) ckcallback_group();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void registerCcsCallback(const char *name, const CkCallback &cb);
 */
void CProxy_ckcallback_group::registerCcsCallback(const char *name, const CkCallback &cb, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const char *name, const CkCallback &cb
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_name, impl_cnt_name;
  impl_off_name=impl_off=CK_ALIGN(impl_off,sizeof(char));
  impl_off+=(impl_cnt_name=sizeof(char)*(strlen(name)+1));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_name;
    implP|impl_cnt_name;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_name;
    implP|impl_cnt_name;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_name,name,impl_cnt_name);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ckcallback_group::idx_registerCcsCallback_marshall2(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ckcallback_group::idx_registerCcsCallback_marshall2(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ckcallback_group::idx_registerCcsCallback_marshall2(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ckcallback_group::registerCcsCallback(const char *name, const CkCallback &cb, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: const char *name, const CkCallback &cb
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_name, impl_cnt_name;
  impl_off_name=impl_off=CK_ALIGN(impl_off,sizeof(char));
  impl_off+=(impl_cnt_name=sizeof(char)*(strlen(name)+1));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_name;
    implP|impl_cnt_name;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_name;
    implP|impl_cnt_name;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_name,name,impl_cnt_name);
  CkSendMsgBranchMulti(CkIndex_ckcallback_group::idx_registerCcsCallback_marshall2(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ckcallback_group::registerCcsCallback(const char *name, const CkCallback &cb, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: const char *name, const CkCallback &cb
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_name, impl_cnt_name;
  impl_off_name=impl_off=CK_ALIGN(impl_off,sizeof(char));
  impl_off+=(impl_cnt_name=sizeof(char)*(strlen(name)+1));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_name;
    implP|impl_cnt_name;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_name;
    implP|impl_cnt_name;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_name,name,impl_cnt_name);
  CkSendMsgBranchGroup(CkIndex_ckcallback_group::idx_registerCcsCallback_marshall2(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ckcallback_group::reg_registerCcsCallback_marshall2() {
  int epidx = CkRegisterEp("registerCcsCallback(const char *name, const CkCallback &cb)",
      reinterpret_cast<CkCallFnPtr>(_call_registerCcsCallback_marshall2), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_registerCcsCallback_marshall2);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_registerCcsCallback_marshall2);

  return epidx;
}

void CkIndex_ckcallback_group::_call_registerCcsCallback_marshall2(void* impl_msg, void* impl_obj_void)
{
  ckcallback_group* impl_obj = static_cast<ckcallback_group*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const char *name, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  int impl_off_name, impl_cnt_name;
  implP|impl_off_name;
  implP|impl_cnt_name;
  PUP::detail::TemporaryObjectHolder<CkCallback> cb;
  implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  char *name=(char *)(impl_buf+impl_off_name);
  impl_obj->registerCcsCallback(name, std::move(cb.t));
}
int CkIndex_ckcallback_group::_callmarshall_registerCcsCallback_marshall2(char* impl_buf, void* impl_obj_void) {
  ckcallback_group* impl_obj = static_cast<ckcallback_group*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const char *name, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  int impl_off_name, impl_cnt_name;
  implP|impl_off_name;
  implP|impl_cnt_name;
  PUP::detail::TemporaryObjectHolder<CkCallback> cb;
  implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  char *name=(char *)(impl_buf+impl_off_name);
  impl_obj->registerCcsCallback(name, std::move(cb.t));
  return implP.size();
}
void CkIndex_ckcallback_group::_marshallmessagepup_registerCcsCallback_marshall2(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const char *name, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  int impl_off_name, impl_cnt_name;
  implP|impl_off_name;
  implP|impl_cnt_name;
  PUP::detail::TemporaryObjectHolder<CkCallback> cb;
  implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  char *name=(char *)(impl_buf+impl_off_name);
  if (implDestP.hasComments()) implDestP.comment("name");
  implDestP.synchronize(PUP::sync_begin_array);
  for (int impl_i=0;impl_i*(sizeof(*name))<impl_cnt_name;impl_i++) {
    implDestP.synchronize(PUP::sync_item);
    implDestP|name[impl_i];
  }
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_ckcallback_group::registerCcsCallback_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void call(const CkCallback &c, const CkMarshalledMessage &msg);
 */
void CProxy_ckcallback_group::call(const CkCallback &c, const CkMarshalledMessage &msg, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkCallback &c, const CkMarshalledMessage &msg
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)c;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkMarshalledMessage>::type>::type &)msg;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)c;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkMarshalledMessage>::type>::type &)msg;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ckcallback_group::idx_call_marshall3(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ckcallback_group::idx_call_marshall3(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ckcallback_group::idx_call_marshall3(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ckcallback_group::call(const CkCallback &c, const CkMarshalledMessage &msg, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: const CkCallback &c, const CkMarshalledMessage &msg
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)c;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkMarshalledMessage>::type>::type &)msg;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)c;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkMarshalledMessage>::type>::type &)msg;
  }
  CkSendMsgBranchMulti(CkIndex_ckcallback_group::idx_call_marshall3(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ckcallback_group::call(const CkCallback &c, const CkMarshalledMessage &msg, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: const CkCallback &c, const CkMarshalledMessage &msg
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)c;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkMarshalledMessage>::type>::type &)msg;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)c;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkMarshalledMessage>::type>::type &)msg;
  }
  CkSendMsgBranchGroup(CkIndex_ckcallback_group::idx_call_marshall3(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ckcallback_group::reg_call_marshall3() {
  int epidx = CkRegisterEp("call(const CkCallback &c, const CkMarshalledMessage &msg)",
      reinterpret_cast<CkCallFnPtr>(_call_call_marshall3), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_call_marshall3);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_call_marshall3);

  return epidx;
}

void CkIndex_ckcallback_group::_call_call_marshall3(void* impl_msg, void* impl_obj_void)
{
  ckcallback_group* impl_obj = static_cast<ckcallback_group*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CkCallback &c, const CkMarshalledMessage &msg*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkCallback> c;
  implP|c;
  PUP::detail::TemporaryObjectHolder<CkMarshalledMessage> msg;
  implP|msg;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->call(std::move(c.t), std::move(msg.t));
}
int CkIndex_ckcallback_group::_callmarshall_call_marshall3(char* impl_buf, void* impl_obj_void) {
  ckcallback_group* impl_obj = static_cast<ckcallback_group*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const CkCallback &c, const CkMarshalledMessage &msg*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkCallback> c;
  implP|c;
  PUP::detail::TemporaryObjectHolder<CkMarshalledMessage> msg;
  implP|msg;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->call(std::move(c.t), std::move(msg.t));
  return implP.size();
}
void CkIndex_ckcallback_group::_marshallmessagepup_call_marshall3(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CkCallback &c, const CkMarshalledMessage &msg*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkCallback> c;
  implP|c;
  PUP::detail::TemporaryObjectHolder<CkMarshalledMessage> msg;
  implP|msg;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("c");
  implDestP|c;
  if (implDestP.hasComments()) implDestP.comment("msg");
  implDestP|msg;
}
PUPable_def(SINGLE_ARG(Closure_ckcallback_group::call_3_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void call(const CkCallback &c, int length, const char *data);
 */
void CProxy_ckcallback_group::call(const CkCallback &c, int length, const char *data, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkCallback &c, int length, const char *data
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_data, impl_cnt_data;
  impl_off_data=impl_off=CK_ALIGN(impl_off,sizeof(char));
  impl_off+=(impl_cnt_data=sizeof(char)*(length));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)c;
    implP|length;
    implP|impl_off_data;
    implP|impl_cnt_data;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)c;
    implP|length;
    implP|impl_off_data;
    implP|impl_cnt_data;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_data,data,impl_cnt_data);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ckcallback_group::idx_call_marshall4(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ckcallback_group::idx_call_marshall4(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ckcallback_group::idx_call_marshall4(), impl_msg, ckGetGroupID(),0);
}
void CProxy_ckcallback_group::call(const CkCallback &c, int length, const char *data, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: const CkCallback &c, int length, const char *data
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_data, impl_cnt_data;
  impl_off_data=impl_off=CK_ALIGN(impl_off,sizeof(char));
  impl_off+=(impl_cnt_data=sizeof(char)*(length));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)c;
    implP|length;
    implP|impl_off_data;
    implP|impl_cnt_data;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)c;
    implP|length;
    implP|impl_off_data;
    implP|impl_cnt_data;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_data,data,impl_cnt_data);
  CkSendMsgBranchMulti(CkIndex_ckcallback_group::idx_call_marshall4(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_ckcallback_group::call(const CkCallback &c, int length, const char *data, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: const CkCallback &c, int length, const char *data
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_data, impl_cnt_data;
  impl_off_data=impl_off=CK_ALIGN(impl_off,sizeof(char));
  impl_off+=(impl_cnt_data=sizeof(char)*(length));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)c;
    implP|length;
    implP|impl_off_data;
    implP|impl_cnt_data;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)c;
    implP|length;
    implP|impl_off_data;
    implP|impl_cnt_data;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_data,data,impl_cnt_data);
  CkSendMsgBranchGroup(CkIndex_ckcallback_group::idx_call_marshall4(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_ckcallback_group::reg_call_marshall4() {
  int epidx = CkRegisterEp("call(const CkCallback &c, int length, const char *data)",
      reinterpret_cast<CkCallFnPtr>(_call_call_marshall4), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_call_marshall4);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_call_marshall4);

  return epidx;
}

void CkIndex_ckcallback_group::_call_call_marshall4(void* impl_msg, void* impl_obj_void)
{
  ckcallback_group* impl_obj = static_cast<ckcallback_group*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CkCallback &c, int length, const char *data*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkCallback> c;
  implP|c;
  PUP::detail::TemporaryObjectHolder<int> length;
  implP|length;
  int impl_off_data, impl_cnt_data;
  implP|impl_off_data;
  implP|impl_cnt_data;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  char *data=(char *)(impl_buf+impl_off_data);
  impl_obj->call(std::move(c.t), std::move(length.t), data);
}
int CkIndex_ckcallback_group::_callmarshall_call_marshall4(char* impl_buf, void* impl_obj_void) {
  ckcallback_group* impl_obj = static_cast<ckcallback_group*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const CkCallback &c, int length, const char *data*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkCallback> c;
  implP|c;
  PUP::detail::TemporaryObjectHolder<int> length;
  implP|length;
  int impl_off_data, impl_cnt_data;
  implP|impl_off_data;
  implP|impl_cnt_data;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  char *data=(char *)(impl_buf+impl_off_data);
  impl_obj->call(std::move(c.t), std::move(length.t), data);
  return implP.size();
}
void CkIndex_ckcallback_group::_marshallmessagepup_call_marshall4(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CkCallback &c, int length, const char *data*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkCallback> c;
  implP|c;
  PUP::detail::TemporaryObjectHolder<int> length;
  implP|length;
  int impl_off_data, impl_cnt_data;
  implP|impl_off_data;
  implP|impl_cnt_data;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  char *data=(char *)(impl_buf+impl_off_data);
  if (implDestP.hasComments()) implDestP.comment("c");
  implDestP|c;
  if (implDestP.hasComments()) implDestP.comment("length");
  implDestP|length;
  if (implDestP.hasComments()) implDestP.comment("data");
  implDestP.synchronize(PUP::sync_begin_array);
  for (int impl_i=0;impl_i*(sizeof(*data))<impl_cnt_data;impl_i++) {
    implDestP.synchronize(PUP::sync_item);
    implDestP|data[impl_i];
  }
  implDestP.synchronize(PUP::sync_end_array);
}
PUPable_def(SINGLE_ARG(Closure_ckcallback_group::call_4_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ckcallback_group(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_ckcallback_group::reg_ckcallback_group_CkMigrateMessage() {
  int epidx = CkRegisterEp("ckcallback_group(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_ckcallback_group_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_ckcallback_group::_call_ckcallback_group_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  new (impl_obj_void) ckcallback_group((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ckcallback_group();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void registerCcsCallback(const char *name, const CkCallback &cb);
 */
void CProxySection_ckcallback_group::registerCcsCallback(const char *name, const CkCallback &cb, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const char *name, const CkCallback &cb
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_name, impl_cnt_name;
  impl_off_name=impl_off=CK_ALIGN(impl_off,sizeof(char));
  impl_off+=(impl_cnt_name=sizeof(char)*(strlen(name)+1));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_name;
    implP|impl_cnt_name;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_name;
    implP|impl_cnt_name;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_name,name,impl_cnt_name);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ckcallback_group::idx_registerCcsCallback_marshall2(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ckcallback_group::idx_registerCcsCallback_marshall2(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void call(const CkCallback &c, const CkMarshalledMessage &msg);
 */
void CProxySection_ckcallback_group::call(const CkCallback &c, const CkMarshalledMessage &msg, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkCallback &c, const CkMarshalledMessage &msg
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)c;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkMarshalledMessage>::type>::type &)msg;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)c;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkMarshalledMessage>::type>::type &)msg;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ckcallback_group::idx_call_marshall3(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ckcallback_group::idx_call_marshall3(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void call(const CkCallback &c, int length, const char *data);
 */
void CProxySection_ckcallback_group::call(const CkCallback &c, int length, const char *data, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkCallback &c, int length, const char *data
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_data, impl_cnt_data;
  impl_off_data=impl_off=CK_ALIGN(impl_off,sizeof(char));
  impl_off+=(impl_cnt_data=sizeof(char)*(length));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)c;
    implP|length;
    implP|impl_off_data;
    implP|impl_cnt_data;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)c;
    implP|length;
    implP|impl_off_data;
    implP|impl_cnt_data;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_data,data,impl_cnt_data);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ckcallback_group::idx_call_marshall4(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ckcallback_group::idx_call_marshall4(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ckcallback_group(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_ckcallback_group::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,ckcallback_group::isIrreducible());
  // REG: ckcallback_group();
  idx_ckcallback_group_void();
  CkRegisterDefaultCtor(__idx, idx_ckcallback_group_void());

  // REG: void registerCcsCallback(const char *name, const CkCallback &cb);
  idx_registerCcsCallback_marshall2();

  // REG: void call(const CkCallback &c, const CkMarshalledMessage &msg);
  idx_call_marshall3();

  // REG: void call(const CkCallback &c, int length, const char *data);
  idx_call_marshall4();

  // REG: ckcallback_group(CkMigrateMessage* impl_msg);
  idx_ckcallback_group_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_ckcallback_group_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerCkCallback(void)
{
  static int _done = 0; if(_done) return; _done = 1;
  CkRegisterReadonly("_ckcallbackgroup","CProxy_ckcallback_group",sizeof(_ckcallbackgroup),(void *) &_ckcallbackgroup,__xlater_roPup__ckcallbackgroup);

/* REG: message CkCcsRequestMsg{
char data[];
}
;
*/
CMessage_CkCcsRequestMsg::__register("CkCcsRequestMsg", sizeof(CkCcsRequestMsg),(CkPackFnPtr) CkCcsRequestMsg::pack,(CkUnpackFnPtr) CkCcsRequestMsg::unpack);

/* REG: message CkDataMsg{
char data[];
}
;
*/
CMessage_CkDataMsg::__register("CkDataMsg", sizeof(CkDataMsg),(CkPackFnPtr) CkDataMsg::pack,(CkUnpackFnPtr) CkDataMsg::unpack);

/* REG: mainchare ckcallback_main: Chare{
ckcallback_main(CkArgMsg* impl_msg);
};
*/
  CkIndex_ckcallback_main::__register("ckcallback_main", sizeof(ckcallback_main));

/* REG: group ckcallback_group: IrrGroup{
ckcallback_group();
void registerCcsCallback(const char *name, const CkCallback &cb);
void call(const CkCallback &c, const CkMarshalledMessage &msg);
void call(const CkCallback &c, int length, const char *data);
ckcallback_group(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_ckcallback_group::__register("ckcallback_group", sizeof(ckcallback_group));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_ckcallback_main::virtual_pup(PUP::er &p) {
    recursive_pup<ckcallback_main>(dynamic_cast<ckcallback_main*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_ckcallback_group::virtual_pup(PUP::er &p) {
    recursive_pup<ckcallback_group>(dynamic_cast<ckcallback_group*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
