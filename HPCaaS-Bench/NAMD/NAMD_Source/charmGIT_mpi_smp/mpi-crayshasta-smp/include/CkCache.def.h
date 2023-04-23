

/* ---------------- method closures -------------- */
#ifdef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
template <class CkCacheKey> 

    struct Closure_CkCacheManager <CkCacheKey> ::writebackChunk_6_closure : public SDAG::Closure {
            int num;


      writebackChunk_6_closure() {
        init();
      }
      writebackChunk_6_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return num;}
      void pup(PUP::er& __p) {
        __p | num;
        packClosure(__p);
      }
      virtual ~writebackChunk_6_closure() {
      }
      PUPable_decl_template(SINGLE_ARG(writebackChunk_6_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
template <class CkCacheKey> 

    struct Closure_CkCacheManager <CkCacheKey> ::finishedChunk_7_closure : public SDAG::Closure {
            int num;
            CmiUInt8 weight;


      finishedChunk_7_closure() {
        init();
      }
      finishedChunk_7_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return num;}
            CmiUInt8 & getP1() { return weight;}
      void pup(PUP::er& __p) {
        __p | num;
        __p | weight;
        packClosure(__p);
      }
      virtual ~finishedChunk_7_closure() {
      }
      PUPable_decl_template(SINGLE_ARG(finishedChunk_7_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
template <class CkCacheKey> 

    struct Closure_CkCacheManager <CkCacheKey> ::collectStatistics_8_closure : public SDAG::Closure {
            CkCallback cb;


      collectStatistics_8_closure() {
        init();
      }
      collectStatistics_8_closure(CkMigrateMessage*) {
        init();
      }
            CkCallback & getP0() { return cb;}
      void pup(PUP::er& __p) {
        __p | cb;
        packClosure(__p);
      }
      virtual ~collectStatistics_8_closure() {
      }
      PUPable_decl_template(SINGLE_ARG(collectStatistics_8_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */








/* DEFS: template <class CkCacheKey> message CkCacheRequestMsg;
 */
#ifdef CK_TEMPLATES_ONLY
template <class CkCacheKey>  void *CMessage_CkCacheRequestMsg <CkCacheKey> ::operator new(size_t s){
  return CkCacheRequestMsg <CkCacheKey> ::alloc(__idx, s, 0, 0, GroupDepNum{});
}
template <class CkCacheKey>  void *CMessage_CkCacheRequestMsg <CkCacheKey> ::operator new(size_t s, int* sz){
  return CkCacheRequestMsg <CkCacheKey> ::alloc(__idx, s, sz, 0, GroupDepNum{});
}
template <class CkCacheKey>  void *CMessage_CkCacheRequestMsg <CkCacheKey> ::operator new(size_t s, int* sz,const int pb){
  return CkCacheRequestMsg <CkCacheKey> ::alloc(__idx, s, sz, pb, GroupDepNum{});
}
template <class CkCacheKey>  void *CMessage_CkCacheRequestMsg <CkCacheKey> ::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return CkCacheRequestMsg <CkCacheKey> ::alloc(__idx, s, sz, pb, groupDepNum);
}
template <class CkCacheKey>  void *CMessage_CkCacheRequestMsg <CkCacheKey> ::operator new(size_t s, const int p) {
  return CkCacheRequestMsg <CkCacheKey> ::alloc(__idx, s, 0, p, GroupDepNum{});
}
template <class CkCacheKey>  void *CMessage_CkCacheRequestMsg <CkCacheKey> ::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return CkCacheRequestMsg <CkCacheKey> ::alloc(__idx, s, 0, p, groupDepNum);
}
template <class CkCacheKey>  void* CMessage_CkCacheRequestMsg <CkCacheKey> ::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
template <class CkCacheKey>  CMessage_CkCacheRequestMsg <CkCacheKey> ::CMessage_CkCacheRequestMsg() {
CkCacheRequestMsg <CkCacheKey>  *newmsg = (CkCacheRequestMsg <CkCacheKey>  *)this;
}
template <class CkCacheKey>  void CMessage_CkCacheRequestMsg <CkCacheKey> ::dealloc(void *p) {
  CkFreeMsg(p);
}
template <class CkCacheKey>  void* CMessage_CkCacheRequestMsg <CkCacheKey> ::pack(CkCacheRequestMsg <CkCacheKey>  *msg) {
  return (void *) msg;
}
template <class CkCacheKey>  CkCacheRequestMsg <CkCacheKey> * CMessage_CkCacheRequestMsg <CkCacheKey> ::unpack(void* buf) {
  CkCacheRequestMsg <CkCacheKey>  *msg = (CkCacheRequestMsg <CkCacheKey>  *) buf;
  return msg;
}
template <class CkCacheKey>  int CMessage_CkCacheRequestMsg <CkCacheKey> ::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: template <class CkCacheKey> message CkCacheFillMsg{
char data[];
}
;
 */
#ifdef CK_TEMPLATES_ONLY
template <class CkCacheKey>  void *CMessage_CkCacheFillMsg <CkCacheKey> ::operator new(size_t s){
  return CkCacheFillMsg <CkCacheKey> ::alloc(__idx, s, 0, 0, GroupDepNum{});
}
template <class CkCacheKey>  void *CMessage_CkCacheFillMsg <CkCacheKey> ::operator new(size_t s, int* sz){
  return CkCacheFillMsg <CkCacheKey> ::alloc(__idx, s, sz, 0, GroupDepNum{});
}
template <class CkCacheKey>  void *CMessage_CkCacheFillMsg <CkCacheKey> ::operator new(size_t s, int* sz,const int pb){
  return CkCacheFillMsg <CkCacheKey> ::alloc(__idx, s, sz, pb, GroupDepNum{});
}
template <class CkCacheKey>  void *CMessage_CkCacheFillMsg <CkCacheKey> ::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return CkCacheFillMsg <CkCacheKey> ::alloc(__idx, s, sz, pb, groupDepNum);
}
template <class CkCacheKey>  void *CMessage_CkCacheFillMsg <CkCacheKey> ::operator new(size_t s, int sz0) {
  int sizes[1];
  sizes[0] = sz0;
  return CkCacheFillMsg <CkCacheKey> ::alloc(__idx, s, sizes, 0, GroupDepNum{});
}
template <class CkCacheKey>  void *CMessage_CkCacheFillMsg <CkCacheKey> ::operator new(size_t s, int sz0, const int p) {
  int sizes[1];
  sizes[0] = sz0;
  return CkCacheFillMsg <CkCacheKey> ::alloc(__idx, s, sizes, p, GroupDepNum{});
}
template <class CkCacheKey>  void *CMessage_CkCacheFillMsg <CkCacheKey> ::operator new(size_t s, int sz0, const int p, const GroupDepNum groupDepNum) {
  int sizes[1];
  sizes[0] = sz0;
  return CkCacheFillMsg <CkCacheKey> ::alloc(__idx, s, sizes, p, groupDepNum);
}
template <class CkCacheKey>  void* CMessage_CkCacheFillMsg <CkCacheKey> ::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN_DEFAULT(sizeof(char)*sizes[0]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[1], pb, groupDepNum);
}
template <class CkCacheKey>  CMessage_CkCacheFillMsg <CkCacheKey> ::CMessage_CkCacheFillMsg() {
CkCacheFillMsg <CkCacheKey>  *newmsg = (CkCacheFillMsg <CkCacheKey>  *)this;
  newmsg->data = (char *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
}
template <class CkCacheKey>  void CMessage_CkCacheFillMsg <CkCacheKey> ::dealloc(void *p) {
  CkFreeMsg(p);
}
template <class CkCacheKey>  void* CMessage_CkCacheFillMsg <CkCacheKey> ::pack(CkCacheFillMsg <CkCacheKey>  *msg) {
  msg->data = (char *) ((char *)msg->data - (char *)msg);
  return (void *) msg;
}
template <class CkCacheKey>  CkCacheFillMsg <CkCacheKey> * CMessage_CkCacheFillMsg <CkCacheKey> ::unpack(void* buf) {
  CkCacheFillMsg <CkCacheKey>  *msg = (CkCacheFillMsg <CkCacheKey>  *) buf;
  msg->data = (char *) ((size_t)msg->data + (char *)msg);
  return msg;
}
template <class CkCacheKey>  int CMessage_CkCacheFillMsg <CkCacheKey> ::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: template <class CkCacheKey> group CkCacheManager: IrrGroup{
CkCacheManager(int size, const CkGroupID &gid);
CkCacheManager(int size, int n, const CkGroupID *gid);
CkCacheManager(int size, int n, const CkGroupID *gid, int nWB, const CkGroupID *gidWB);
void cacheSync(const int &numChunks, const CkArrayIndex &chareIdx, const int &localIdx);
void recvData(CkCacheFillMsg<CkCacheKey>* impl_msg);
void writebackChunk(int num);
void finishedChunk(int num, const CmiUInt8 &weight);
void collectStatistics(const CkCallback &cb);
CkCacheManager(CkMigrateMessage* impl_msg);
};
 */
#ifdef CK_TEMPLATES_ONLY
template <class CkCacheKey>  int CkIndex_CkCacheManager <CkCacheKey> ::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifdef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifdef CK_TEMPLATES_ONLY
/* DEFS: CkCacheManager(int size, const CkGroupID &gid);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: CkCacheManager(int size, int n, const CkGroupID *gid);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: CkCacheManager(int size, int n, const CkGroupID *gid, int nWB, const CkGroupID *gidWB);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void cacheSync(const int &numChunks, const CkArrayIndex &chareIdx, const int &localIdx);
 */
template <class CkCacheKey> 
void CProxyElement_CkCacheManager <CkCacheKey> ::cacheSync(int &numChunks, CkArrayIndex &chareIdx, int &localIdx, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  CkCacheManager <CkCacheKey>  *obj = ckLocalBranch();
  CkAssert(obj);
  envelope env;
  env.setMsgtype(ForBocMsg);
  env.setTotalsize(0);
  _TRACE_CREATION_DETAILED(&env, CkIndex_CkCacheManager <CkCacheKey> ::idx_cacheSync_marshall4());
  _TRACE_CREATION_DONE(1);
  _TRACE_BEGIN_EXECUTE_DETAILED(CpvAccess(curPeEvent),ForBocMsg,(CkIndex_CkCacheManager <CkCacheKey> ::idx_cacheSync_marshall4()),CkMyPe(),0,NULL, NULL);
#if CMK_CHARMDEBUG
  CpdBeforeEp(CkIndex_CkCacheManager <CkCacheKey> ::idx_cacheSync_marshall4(), obj, NULL);
#endif
  CkCallstackPush((Chare*)obj);
  obj->cacheSync(numChunks, chareIdx, localIdx);
  CkCallstackPop((Chare*)obj);
#if CMK_CHARMDEBUG
  CpdAfterEp(CkIndex_CkCacheManager <CkCacheKey> ::idx_cacheSync_marshall4());
#endif
  _TRACE_END_EXECUTE();
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void recvData(CkCacheFillMsg<CkCacheKey>* impl_msg);
 */
template <class CkCacheKey> 
void CProxyElement_CkCacheManager <CkCacheKey> ::recvData(CkCacheFillMsg<CkCacheKey>* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkCacheManager <CkCacheKey> ::idx_recvData_CkCacheFillMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CkCacheManager <CkCacheKey> ::idx_recvData_CkCacheFillMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_CkCacheManager <CkCacheKey> ::idx_recvData_CkCacheFillMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void writebackChunk(int num);
 */
template <class CkCacheKey> 
void CProxyElement_CkCacheManager <CkCacheKey> ::writebackChunk(int num, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int num
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|num;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|num;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkCacheManager <CkCacheKey> ::idx_writebackChunk_marshall6(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CkCacheManager <CkCacheKey> ::idx_writebackChunk_marshall6(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_CkCacheManager <CkCacheKey> ::idx_writebackChunk_marshall6(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void finishedChunk(int num, const CmiUInt8 &weight);
 */
template <class CkCacheKey> 
void CProxyElement_CkCacheManager <CkCacheKey> ::finishedChunk(int num, const CmiUInt8 &weight, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int num, const CmiUInt8 &weight
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|num;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CmiUInt8>::type>::type &)weight;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|num;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CmiUInt8>::type>::type &)weight;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkCacheManager <CkCacheKey> ::idx_finishedChunk_marshall7(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CkCacheManager <CkCacheKey> ::idx_finishedChunk_marshall7(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_CkCacheManager <CkCacheKey> ::idx_finishedChunk_marshall7(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void collectStatistics(const CkCallback &cb);
 */
template <class CkCacheKey> 
void CProxyElement_CkCacheManager <CkCacheKey> ::collectStatistics(const CkCallback &cb, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkCacheManager <CkCacheKey> ::idx_collectStatistics_marshall8(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CkCacheManager <CkCacheKey> ::idx_collectStatistics_marshall8(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_CkCacheManager <CkCacheKey> ::idx_collectStatistics_marshall8(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: CkCacheManager(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: CkCacheManager(int size, const CkGroupID &gid);
 */
template <class CkCacheKey> 
CkGroupID CProxy_CkCacheManager <CkCacheKey> ::ckNew(int size, const CkGroupID &gid, const CkEntryOptions *impl_e_opts)
{
  //Marshall: int size, const CkGroupID &gid
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|size;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkGroupID>::type>::type &)gid;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|size;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkGroupID>::type>::type &)gid;
  }
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_CkCacheManager <CkCacheKey> ::__idx, CkIndex_CkCacheManager <CkCacheKey> ::idx_CkCacheManager_marshall1(), impl_msg);
  return gId;
}
template <class CkCacheKey> 
  CProxy_CkCacheManager <CkCacheKey> ::CProxy_CkCacheManager(int size, const CkGroupID &gid, const CkEntryOptions *impl_e_opts)
{
  //Marshall: int size, const CkGroupID &gid
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|size;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkGroupID>::type>::type &)gid;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|size;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkGroupID>::type>::type &)gid;
  }
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  ckSetGroupID(CkCreateGroup(CkIndex_CkCacheManager <CkCacheKey> ::__idx, CkIndex_CkCacheManager <CkCacheKey> ::idx_CkCacheManager_marshall1(), impl_msg));
}

// Entry point registration function
template <class CkCacheKey> 
int CkIndex_CkCacheManager <CkCacheKey> ::reg_CkCacheManager_marshall1() {
  int epidx = CkRegisterEp("CkCacheManager(int size, const CkGroupID &gid)",
      reinterpret_cast<CkCallFnPtr>(_call_CkCacheManager_marshall1), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_CkCacheManager_marshall1);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_CkCacheManager_marshall1);

  return epidx;
}

template <class CkCacheKey> 
void CkIndex_CkCacheManager <CkCacheKey> ::_call_CkCacheManager_marshall1(void* impl_msg, void* impl_obj_void)
{
  CkCacheManager <CkCacheKey> * impl_obj = static_cast<CkCacheManager <CkCacheKey> *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int size, const CkGroupID &gid*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> size;
  implP|size;
  PUP::detail::TemporaryObjectHolder<CkGroupID> gid;
  implP|gid;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) CkCacheManager <CkCacheKey> (std::move(size.t), std::move(gid.t));
}
template <class CkCacheKey> 
int CkIndex_CkCacheManager <CkCacheKey> ::_callmarshall_CkCacheManager_marshall1(char* impl_buf, void* impl_obj_void) {
  CkCacheManager <CkCacheKey> * impl_obj = static_cast<CkCacheManager <CkCacheKey> *>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int size, const CkGroupID &gid*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> size;
  implP|size;
  PUP::detail::TemporaryObjectHolder<CkGroupID> gid;
  implP|gid;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) CkCacheManager <CkCacheKey> (std::move(size.t), std::move(gid.t));
  return implP.size();
}
template <class CkCacheKey> 
void CkIndex_CkCacheManager <CkCacheKey> ::_marshallmessagepup_CkCacheManager_marshall1(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int size, const CkGroupID &gid*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> size;
  implP|size;
  PUP::detail::TemporaryObjectHolder<CkGroupID> gid;
  implP|gid;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("size");
  implDestP|size;
  if (implDestP.hasComments()) implDestP.comment("gid");
  implDestP|gid;
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: CkCacheManager(int size, int n, const CkGroupID *gid);
 */
template <class CkCacheKey> 
CkGroupID CProxy_CkCacheManager <CkCacheKey> ::ckNew(int size, int n, const CkGroupID *gid, const CkEntryOptions *impl_e_opts)
{
  //Marshall: int size, int n, const CkGroupID *gid
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_gid, impl_cnt_gid;
  impl_off_gid=impl_off=CK_ALIGN(impl_off,sizeof(CkGroupID));
  impl_off+=(impl_cnt_gid=sizeof(CkGroupID)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|size;
    implP|n;
    implP|impl_off_gid;
    implP|impl_cnt_gid;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|size;
    implP|n;
    implP|impl_off_gid;
    implP|impl_cnt_gid;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_gid,gid,impl_cnt_gid);
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_CkCacheManager <CkCacheKey> ::__idx, CkIndex_CkCacheManager <CkCacheKey> ::idx_CkCacheManager_marshall2(), impl_msg);
  return gId;
}
template <class CkCacheKey> 
  CProxy_CkCacheManager <CkCacheKey> ::CProxy_CkCacheManager(int size, int n, const CkGroupID *gid, const CkEntryOptions *impl_e_opts)
{
  //Marshall: int size, int n, const CkGroupID *gid
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_gid, impl_cnt_gid;
  impl_off_gid=impl_off=CK_ALIGN(impl_off,sizeof(CkGroupID));
  impl_off+=(impl_cnt_gid=sizeof(CkGroupID)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|size;
    implP|n;
    implP|impl_off_gid;
    implP|impl_cnt_gid;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|size;
    implP|n;
    implP|impl_off_gid;
    implP|impl_cnt_gid;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_gid,gid,impl_cnt_gid);
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  ckSetGroupID(CkCreateGroup(CkIndex_CkCacheManager <CkCacheKey> ::__idx, CkIndex_CkCacheManager <CkCacheKey> ::idx_CkCacheManager_marshall2(), impl_msg));
}

// Entry point registration function
template <class CkCacheKey> 
int CkIndex_CkCacheManager <CkCacheKey> ::reg_CkCacheManager_marshall2() {
  int epidx = CkRegisterEp("CkCacheManager(int size, int n, const CkGroupID *gid)",
      reinterpret_cast<CkCallFnPtr>(_call_CkCacheManager_marshall2), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_CkCacheManager_marshall2);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_CkCacheManager_marshall2);

  return epidx;
}

template <class CkCacheKey> 
void CkIndex_CkCacheManager <CkCacheKey> ::_call_CkCacheManager_marshall2(void* impl_msg, void* impl_obj_void)
{
  CkCacheManager <CkCacheKey> * impl_obj = static_cast<CkCacheManager <CkCacheKey> *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int size, int n, const CkGroupID *gid*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> size;
  implP|size;
  PUP::detail::TemporaryObjectHolder<int> n;
  implP|n;
  int impl_off_gid, impl_cnt_gid;
  implP|impl_off_gid;
  implP|impl_cnt_gid;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  CkGroupID *gid=(CkGroupID *)(impl_buf+impl_off_gid);
  new (impl_obj_void) CkCacheManager <CkCacheKey> (std::move(size.t), std::move(n.t), gid);
}
template <class CkCacheKey> 
int CkIndex_CkCacheManager <CkCacheKey> ::_callmarshall_CkCacheManager_marshall2(char* impl_buf, void* impl_obj_void) {
  CkCacheManager <CkCacheKey> * impl_obj = static_cast<CkCacheManager <CkCacheKey> *>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int size, int n, const CkGroupID *gid*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> size;
  implP|size;
  PUP::detail::TemporaryObjectHolder<int> n;
  implP|n;
  int impl_off_gid, impl_cnt_gid;
  implP|impl_off_gid;
  implP|impl_cnt_gid;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  CkGroupID *gid=(CkGroupID *)(impl_buf+impl_off_gid);
  new (impl_obj_void) CkCacheManager <CkCacheKey> (std::move(size.t), std::move(n.t), gid);
  return implP.size();
}
template <class CkCacheKey> 
void CkIndex_CkCacheManager <CkCacheKey> ::_marshallmessagepup_CkCacheManager_marshall2(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int size, int n, const CkGroupID *gid*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> size;
  implP|size;
  PUP::detail::TemporaryObjectHolder<int> n;
  implP|n;
  int impl_off_gid, impl_cnt_gid;
  implP|impl_off_gid;
  implP|impl_cnt_gid;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  CkGroupID *gid=(CkGroupID *)(impl_buf+impl_off_gid);
  if (implDestP.hasComments()) implDestP.comment("size");
  implDestP|size;
  if (implDestP.hasComments()) implDestP.comment("n");
  implDestP|n;
  if (implDestP.hasComments()) implDestP.comment("gid");
  implDestP.synchronize(PUP::sync_begin_array);
  for (int impl_i=0;impl_i*(sizeof(*gid))<impl_cnt_gid;impl_i++) {
    implDestP.synchronize(PUP::sync_item);
    implDestP|gid[impl_i];
  }
  implDestP.synchronize(PUP::sync_end_array);
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: CkCacheManager(int size, int n, const CkGroupID *gid, int nWB, const CkGroupID *gidWB);
 */
template <class CkCacheKey> 
CkGroupID CProxy_CkCacheManager <CkCacheKey> ::ckNew(int size, int n, const CkGroupID *gid, int nWB, const CkGroupID *gidWB, const CkEntryOptions *impl_e_opts)
{
  //Marshall: int size, int n, const CkGroupID *gid, int nWB, const CkGroupID *gidWB
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_gid, impl_cnt_gid;
  impl_off_gid=impl_off=CK_ALIGN(impl_off,sizeof(CkGroupID));
  impl_off+=(impl_cnt_gid=sizeof(CkGroupID)*(n));
  int impl_off_gidWB, impl_cnt_gidWB;
  impl_off_gidWB=impl_off=CK_ALIGN(impl_off,sizeof(CkGroupID));
  impl_off+=(impl_cnt_gidWB=sizeof(CkGroupID)*(nWB));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|size;
    implP|n;
    implP|impl_off_gid;
    implP|impl_cnt_gid;
    implP|nWB;
    implP|impl_off_gidWB;
    implP|impl_cnt_gidWB;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|size;
    implP|n;
    implP|impl_off_gid;
    implP|impl_cnt_gid;
    implP|nWB;
    implP|impl_off_gidWB;
    implP|impl_cnt_gidWB;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_gid,gid,impl_cnt_gid);
  memcpy(impl_buf+impl_off_gidWB,gidWB,impl_cnt_gidWB);
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_CkCacheManager <CkCacheKey> ::__idx, CkIndex_CkCacheManager <CkCacheKey> ::idx_CkCacheManager_marshall3(), impl_msg);
  return gId;
}
template <class CkCacheKey> 
  CProxy_CkCacheManager <CkCacheKey> ::CProxy_CkCacheManager(int size, int n, const CkGroupID *gid, int nWB, const CkGroupID *gidWB, const CkEntryOptions *impl_e_opts)
{
  //Marshall: int size, int n, const CkGroupID *gid, int nWB, const CkGroupID *gidWB
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_gid, impl_cnt_gid;
  impl_off_gid=impl_off=CK_ALIGN(impl_off,sizeof(CkGroupID));
  impl_off+=(impl_cnt_gid=sizeof(CkGroupID)*(n));
  int impl_off_gidWB, impl_cnt_gidWB;
  impl_off_gidWB=impl_off=CK_ALIGN(impl_off,sizeof(CkGroupID));
  impl_off+=(impl_cnt_gidWB=sizeof(CkGroupID)*(nWB));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|size;
    implP|n;
    implP|impl_off_gid;
    implP|impl_cnt_gid;
    implP|nWB;
    implP|impl_off_gidWB;
    implP|impl_cnt_gidWB;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|size;
    implP|n;
    implP|impl_off_gid;
    implP|impl_cnt_gid;
    implP|nWB;
    implP|impl_off_gidWB;
    implP|impl_cnt_gidWB;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_gid,gid,impl_cnt_gid);
  memcpy(impl_buf+impl_off_gidWB,gidWB,impl_cnt_gidWB);
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  ckSetGroupID(CkCreateGroup(CkIndex_CkCacheManager <CkCacheKey> ::__idx, CkIndex_CkCacheManager <CkCacheKey> ::idx_CkCacheManager_marshall3(), impl_msg));
}

// Entry point registration function
template <class CkCacheKey> 
int CkIndex_CkCacheManager <CkCacheKey> ::reg_CkCacheManager_marshall3() {
  int epidx = CkRegisterEp("CkCacheManager(int size, int n, const CkGroupID *gid, int nWB, const CkGroupID *gidWB)",
      reinterpret_cast<CkCallFnPtr>(_call_CkCacheManager_marshall3), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_CkCacheManager_marshall3);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_CkCacheManager_marshall3);

  return epidx;
}

template <class CkCacheKey> 
void CkIndex_CkCacheManager <CkCacheKey> ::_call_CkCacheManager_marshall3(void* impl_msg, void* impl_obj_void)
{
  CkCacheManager <CkCacheKey> * impl_obj = static_cast<CkCacheManager <CkCacheKey> *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int size, int n, const CkGroupID *gid, int nWB, const CkGroupID *gidWB*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> size;
  implP|size;
  PUP::detail::TemporaryObjectHolder<int> n;
  implP|n;
  int impl_off_gid, impl_cnt_gid;
  implP|impl_off_gid;
  implP|impl_cnt_gid;
  PUP::detail::TemporaryObjectHolder<int> nWB;
  implP|nWB;
  int impl_off_gidWB, impl_cnt_gidWB;
  implP|impl_off_gidWB;
  implP|impl_cnt_gidWB;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  CkGroupID *gid=(CkGroupID *)(impl_buf+impl_off_gid);
  CkGroupID *gidWB=(CkGroupID *)(impl_buf+impl_off_gidWB);
  new (impl_obj_void) CkCacheManager <CkCacheKey> (std::move(size.t), std::move(n.t), gid, std::move(nWB.t), gidWB);
}
template <class CkCacheKey> 
int CkIndex_CkCacheManager <CkCacheKey> ::_callmarshall_CkCacheManager_marshall3(char* impl_buf, void* impl_obj_void) {
  CkCacheManager <CkCacheKey> * impl_obj = static_cast<CkCacheManager <CkCacheKey> *>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int size, int n, const CkGroupID *gid, int nWB, const CkGroupID *gidWB*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> size;
  implP|size;
  PUP::detail::TemporaryObjectHolder<int> n;
  implP|n;
  int impl_off_gid, impl_cnt_gid;
  implP|impl_off_gid;
  implP|impl_cnt_gid;
  PUP::detail::TemporaryObjectHolder<int> nWB;
  implP|nWB;
  int impl_off_gidWB, impl_cnt_gidWB;
  implP|impl_off_gidWB;
  implP|impl_cnt_gidWB;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  CkGroupID *gid=(CkGroupID *)(impl_buf+impl_off_gid);
  CkGroupID *gidWB=(CkGroupID *)(impl_buf+impl_off_gidWB);
  new (impl_obj_void) CkCacheManager <CkCacheKey> (std::move(size.t), std::move(n.t), gid, std::move(nWB.t), gidWB);
  return implP.size();
}
template <class CkCacheKey> 
void CkIndex_CkCacheManager <CkCacheKey> ::_marshallmessagepup_CkCacheManager_marshall3(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int size, int n, const CkGroupID *gid, int nWB, const CkGroupID *gidWB*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> size;
  implP|size;
  PUP::detail::TemporaryObjectHolder<int> n;
  implP|n;
  int impl_off_gid, impl_cnt_gid;
  implP|impl_off_gid;
  implP|impl_cnt_gid;
  PUP::detail::TemporaryObjectHolder<int> nWB;
  implP|nWB;
  int impl_off_gidWB, impl_cnt_gidWB;
  implP|impl_off_gidWB;
  implP|impl_cnt_gidWB;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  CkGroupID *gid=(CkGroupID *)(impl_buf+impl_off_gid);
  CkGroupID *gidWB=(CkGroupID *)(impl_buf+impl_off_gidWB);
  if (implDestP.hasComments()) implDestP.comment("size");
  implDestP|size;
  if (implDestP.hasComments()) implDestP.comment("n");
  implDestP|n;
  if (implDestP.hasComments()) implDestP.comment("gid");
  implDestP.synchronize(PUP::sync_begin_array);
  for (int impl_i=0;impl_i*(sizeof(*gid))<impl_cnt_gid;impl_i++) {
    implDestP.synchronize(PUP::sync_item);
    implDestP|gid[impl_i];
  }
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("nWB");
  implDestP|nWB;
  if (implDestP.hasComments()) implDestP.comment("gidWB");
  implDestP.synchronize(PUP::sync_begin_array);
  for (int impl_i=0;impl_i*(sizeof(*gidWB))<impl_cnt_gidWB;impl_i++) {
    implDestP.synchronize(PUP::sync_item);
    implDestP|gidWB[impl_i];
  }
  implDestP.synchronize(PUP::sync_end_array);
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void cacheSync(const int &numChunks, const CkArrayIndex &chareIdx, const int &localIdx);
 */

// Entry point registration function
template <class CkCacheKey> 
int CkIndex_CkCacheManager <CkCacheKey> ::reg_cacheSync_marshall4() {
  int epidx = CkRegisterEp("cacheSync(const int &numChunks, const CkArrayIndex &chareIdx, const int &localIdx)",
      reinterpret_cast<CkCallFnPtr>(_call_cacheSync_marshall4), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_cacheSync_marshall4);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_cacheSync_marshall4);

  return epidx;
}

template <class CkCacheKey> 
void CkIndex_CkCacheManager <CkCacheKey> ::_call_cacheSync_marshall4(void* impl_msg, void* impl_obj_void)
{
  CkCacheManager <CkCacheKey> * impl_obj = static_cast<CkCacheManager <CkCacheKey> *>(impl_obj_void);
  CkAbort("This method should never be called as it refers to a LOCAL entry method!");
}
template <class CkCacheKey> 
int CkIndex_CkCacheManager <CkCacheKey> ::_callmarshall_cacheSync_marshall4(char* impl_buf, void* impl_obj_void) {
  CkCacheManager <CkCacheKey> * impl_obj = static_cast<CkCacheManager <CkCacheKey> *>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  CkAbort("This method should never be called as it refers to a LOCAL entry method!");
  return 0;
}
template <class CkCacheKey> 
void CkIndex_CkCacheManager <CkCacheKey> ::_marshallmessagepup_cacheSync_marshall4(PUP::er &implDestP,void *impl_msg) {
  /*Fake pupping since we don't really have a message */
  int n=0;
  if (implDestP.hasComments()) implDestP.comment("LOCAL message");
  implDestP|n;
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void recvData(CkCacheFillMsg<CkCacheKey>* impl_msg);
 */
template <class CkCacheKey> 
void CProxy_CkCacheManager <CkCacheKey> ::recvData(CkCacheFillMsg<CkCacheKey>* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkCacheManager <CkCacheKey> ::idx_recvData_CkCacheFillMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CkCacheManager <CkCacheKey> ::idx_recvData_CkCacheFillMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CkCacheManager <CkCacheKey> ::idx_recvData_CkCacheFillMsg(), impl_msg, ckGetGroupID(),0);
}
template <class CkCacheKey> 
void CProxy_CkCacheManager <CkCacheKey> ::recvData(CkCacheFillMsg<CkCacheKey>* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_CkCacheManager <CkCacheKey> ::idx_recvData_CkCacheFillMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
template <class CkCacheKey> 
void CProxy_CkCacheManager <CkCacheKey> ::recvData(CkCacheFillMsg<CkCacheKey>* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_CkCacheManager <CkCacheKey> ::idx_recvData_CkCacheFillMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
template <class CkCacheKey> 
int CkIndex_CkCacheManager <CkCacheKey> ::reg_recvData_CkCacheFillMsg() {
  int epidx = CkRegisterEp("recvData(CkCacheFillMsg<CkCacheKey>* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_recvData_CkCacheFillMsg), CMessage_CkCacheFillMsg<CkCacheKey>::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkCacheFillMsg<CkCacheKey>::ckDebugPup);
  return epidx;
}

template <class CkCacheKey> 
void CkIndex_CkCacheManager <CkCacheKey> ::_call_recvData_CkCacheFillMsg(void* impl_msg, void* impl_obj_void)
{
  CkCacheManager <CkCacheKey> * impl_obj = static_cast<CkCacheManager <CkCacheKey> *>(impl_obj_void);
  impl_obj->recvData((CkCacheFillMsg<CkCacheKey>*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void writebackChunk(int num);
 */
template <class CkCacheKey> 
void CProxy_CkCacheManager <CkCacheKey> ::writebackChunk(int num, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int num
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|num;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|num;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkCacheManager <CkCacheKey> ::idx_writebackChunk_marshall6(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CkCacheManager <CkCacheKey> ::idx_writebackChunk_marshall6(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CkCacheManager <CkCacheKey> ::idx_writebackChunk_marshall6(), impl_msg, ckGetGroupID(),0);
}
template <class CkCacheKey> 
void CProxy_CkCacheManager <CkCacheKey> ::writebackChunk(int num, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: int num
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|num;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|num;
  }
  CkSendMsgBranchMulti(CkIndex_CkCacheManager <CkCacheKey> ::idx_writebackChunk_marshall6(), impl_msg, ckGetGroupID(), npes, pes,0);
}
template <class CkCacheKey> 
void CProxy_CkCacheManager <CkCacheKey> ::writebackChunk(int num, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: int num
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|num;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|num;
  }
  CkSendMsgBranchGroup(CkIndex_CkCacheManager <CkCacheKey> ::idx_writebackChunk_marshall6(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
template <class CkCacheKey> 
int CkIndex_CkCacheManager <CkCacheKey> ::reg_writebackChunk_marshall6() {
  int epidx = CkRegisterEp("writebackChunk(int num)",
      reinterpret_cast<CkCallFnPtr>(_call_writebackChunk_marshall6), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_writebackChunk_marshall6);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_writebackChunk_marshall6);

  return epidx;
}

template <class CkCacheKey> 
void CkIndex_CkCacheManager <CkCacheKey> ::_call_writebackChunk_marshall6(void* impl_msg, void* impl_obj_void)
{
  CkCacheManager <CkCacheKey> * impl_obj = static_cast<CkCacheManager <CkCacheKey> *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int num*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> num;
  implP|num;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->writebackChunk(std::move(num.t));
}
template <class CkCacheKey> 
int CkIndex_CkCacheManager <CkCacheKey> ::_callmarshall_writebackChunk_marshall6(char* impl_buf, void* impl_obj_void) {
  CkCacheManager <CkCacheKey> * impl_obj = static_cast<CkCacheManager <CkCacheKey> *>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int num*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> num;
  implP|num;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->writebackChunk(std::move(num.t));
  return implP.size();
}
template <class CkCacheKey> 
void CkIndex_CkCacheManager <CkCacheKey> ::_marshallmessagepup_writebackChunk_marshall6(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int num*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> num;
  implP|num;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("num");
  implDestP|num;
}
template <class CkCacheKey> PUPable_def_template_nonInst(SINGLE_ARG(Closure_CkCacheManager <CkCacheKey> ::writebackChunk_6_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void finishedChunk(int num, const CmiUInt8 &weight);
 */
template <class CkCacheKey> 
void CProxy_CkCacheManager <CkCacheKey> ::finishedChunk(int num, const CmiUInt8 &weight, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int num, const CmiUInt8 &weight
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|num;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CmiUInt8>::type>::type &)weight;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|num;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CmiUInt8>::type>::type &)weight;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkCacheManager <CkCacheKey> ::idx_finishedChunk_marshall7(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CkCacheManager <CkCacheKey> ::idx_finishedChunk_marshall7(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CkCacheManager <CkCacheKey> ::idx_finishedChunk_marshall7(), impl_msg, ckGetGroupID(),0);
}
template <class CkCacheKey> 
void CProxy_CkCacheManager <CkCacheKey> ::finishedChunk(int num, const CmiUInt8 &weight, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: int num, const CmiUInt8 &weight
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|num;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CmiUInt8>::type>::type &)weight;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|num;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CmiUInt8>::type>::type &)weight;
  }
  CkSendMsgBranchMulti(CkIndex_CkCacheManager <CkCacheKey> ::idx_finishedChunk_marshall7(), impl_msg, ckGetGroupID(), npes, pes,0);
}
template <class CkCacheKey> 
void CProxy_CkCacheManager <CkCacheKey> ::finishedChunk(int num, const CmiUInt8 &weight, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: int num, const CmiUInt8 &weight
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|num;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CmiUInt8>::type>::type &)weight;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|num;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CmiUInt8>::type>::type &)weight;
  }
  CkSendMsgBranchGroup(CkIndex_CkCacheManager <CkCacheKey> ::idx_finishedChunk_marshall7(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
template <class CkCacheKey> 
int CkIndex_CkCacheManager <CkCacheKey> ::reg_finishedChunk_marshall7() {
  int epidx = CkRegisterEp("finishedChunk(int num, const CmiUInt8 &weight)",
      reinterpret_cast<CkCallFnPtr>(_call_finishedChunk_marshall7), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_finishedChunk_marshall7);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_finishedChunk_marshall7);

  return epidx;
}

template <class CkCacheKey> 
void CkIndex_CkCacheManager <CkCacheKey> ::_call_finishedChunk_marshall7(void* impl_msg, void* impl_obj_void)
{
  CkCacheManager <CkCacheKey> * impl_obj = static_cast<CkCacheManager <CkCacheKey> *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int num, const CmiUInt8 &weight*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> num;
  implP|num;
  PUP::detail::TemporaryObjectHolder<CmiUInt8> weight;
  implP|weight;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->finishedChunk(std::move(num.t), std::move(weight.t));
}
template <class CkCacheKey> 
int CkIndex_CkCacheManager <CkCacheKey> ::_callmarshall_finishedChunk_marshall7(char* impl_buf, void* impl_obj_void) {
  CkCacheManager <CkCacheKey> * impl_obj = static_cast<CkCacheManager <CkCacheKey> *>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int num, const CmiUInt8 &weight*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> num;
  implP|num;
  PUP::detail::TemporaryObjectHolder<CmiUInt8> weight;
  implP|weight;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->finishedChunk(std::move(num.t), std::move(weight.t));
  return implP.size();
}
template <class CkCacheKey> 
void CkIndex_CkCacheManager <CkCacheKey> ::_marshallmessagepup_finishedChunk_marshall7(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int num, const CmiUInt8 &weight*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> num;
  implP|num;
  PUP::detail::TemporaryObjectHolder<CmiUInt8> weight;
  implP|weight;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("num");
  implDestP|num;
  if (implDestP.hasComments()) implDestP.comment("weight");
  implDestP|weight;
}
template <class CkCacheKey> PUPable_def_template_nonInst(SINGLE_ARG(Closure_CkCacheManager <CkCacheKey> ::finishedChunk_7_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void collectStatistics(const CkCallback &cb);
 */
template <class CkCacheKey> 
void CProxy_CkCacheManager <CkCacheKey> ::collectStatistics(const CkCallback &cb, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CkCacheManager <CkCacheKey> ::idx_collectStatistics_marshall8(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CkCacheManager <CkCacheKey> ::idx_collectStatistics_marshall8(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CkCacheManager <CkCacheKey> ::idx_collectStatistics_marshall8(), impl_msg, ckGetGroupID(),0);
}
template <class CkCacheKey> 
void CProxy_CkCacheManager <CkCacheKey> ::collectStatistics(const CkCallback &cb, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
  }
  CkSendMsgBranchMulti(CkIndex_CkCacheManager <CkCacheKey> ::idx_collectStatistics_marshall8(), impl_msg, ckGetGroupID(), npes, pes,0);
}
template <class CkCacheKey> 
void CProxy_CkCacheManager <CkCacheKey> ::collectStatistics(const CkCallback &cb, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
  }
  CkSendMsgBranchGroup(CkIndex_CkCacheManager <CkCacheKey> ::idx_collectStatistics_marshall8(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
template <class CkCacheKey> 
int CkIndex_CkCacheManager <CkCacheKey> ::reg_collectStatistics_marshall8() {
  int epidx = CkRegisterEp("collectStatistics(const CkCallback &cb)",
      reinterpret_cast<CkCallFnPtr>(_call_collectStatistics_marshall8), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_collectStatistics_marshall8);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_collectStatistics_marshall8);

  return epidx;
}

template <class CkCacheKey> 
void CkIndex_CkCacheManager <CkCacheKey> ::_call_collectStatistics_marshall8(void* impl_msg, void* impl_obj_void)
{
  CkCacheManager <CkCacheKey> * impl_obj = static_cast<CkCacheManager <CkCacheKey> *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkCallback> cb;
  implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->collectStatistics(std::move(cb.t));
}
template <class CkCacheKey> 
int CkIndex_CkCacheManager <CkCacheKey> ::_callmarshall_collectStatistics_marshall8(char* impl_buf, void* impl_obj_void) {
  CkCacheManager <CkCacheKey> * impl_obj = static_cast<CkCacheManager <CkCacheKey> *>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkCallback> cb;
  implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->collectStatistics(std::move(cb.t));
  return implP.size();
}
template <class CkCacheKey> 
void CkIndex_CkCacheManager <CkCacheKey> ::_marshallmessagepup_collectStatistics_marshall8(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkCallback> cb;
  implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
template <class CkCacheKey> PUPable_def_template_nonInst(SINGLE_ARG(Closure_CkCacheManager <CkCacheKey> ::collectStatistics_8_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: CkCacheManager(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
template <class CkCacheKey> 
int CkIndex_CkCacheManager <CkCacheKey> ::reg_CkCacheManager_CkMigrateMessage() {
  int epidx = CkRegisterEp("CkCacheManager(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_CkCacheManager_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

template <class CkCacheKey> 
void CkIndex_CkCacheManager <CkCacheKey> ::_call_CkCacheManager_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  new (impl_obj_void) CkCacheManager <CkCacheKey> ((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: CkCacheManager(int size, const CkGroupID &gid);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: CkCacheManager(int size, int n, const CkGroupID *gid);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: CkCacheManager(int size, int n, const CkGroupID *gid, int nWB, const CkGroupID *gidWB);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void cacheSync(const int &numChunks, const CkArrayIndex &chareIdx, const int &localIdx);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void recvData(CkCacheFillMsg<CkCacheKey>* impl_msg);
 */
template <class CkCacheKey> 
void CProxySection_CkCacheManager <CkCacheKey> ::recvData(CkCacheFillMsg<CkCacheKey>* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CkCacheManager <CkCacheKey> ::idx_recvData_CkCacheFillMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CkCacheManager <CkCacheKey> ::idx_recvData_CkCacheFillMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void writebackChunk(int num);
 */
template <class CkCacheKey> 
void CProxySection_CkCacheManager <CkCacheKey> ::writebackChunk(int num, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int num
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|num;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|num;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CkCacheManager <CkCacheKey> ::idx_writebackChunk_marshall6(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CkCacheManager <CkCacheKey> ::idx_writebackChunk_marshall6(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void finishedChunk(int num, const CmiUInt8 &weight);
 */
template <class CkCacheKey> 
void CProxySection_CkCacheManager <CkCacheKey> ::finishedChunk(int num, const CmiUInt8 &weight, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int num, const CmiUInt8 &weight
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|num;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CmiUInt8>::type>::type &)weight;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|num;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CmiUInt8>::type>::type &)weight;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CkCacheManager <CkCacheKey> ::idx_finishedChunk_marshall7(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CkCacheManager <CkCacheKey> ::idx_finishedChunk_marshall7(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void collectStatistics(const CkCallback &cb);
 */
template <class CkCacheKey> 
void CProxySection_CkCacheManager <CkCacheKey> ::collectStatistics(const CkCallback &cb, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CkCacheManager <CkCacheKey> ::idx_collectStatistics_marshall8(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CkCacheManager <CkCacheKey> ::idx_collectStatistics_marshall8(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: CkCacheManager(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifdef CK_TEMPLATES_ONLY
template <class CkCacheKey> void CkIndex_CkCacheManager <CkCacheKey> ::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,CkCacheManager <CkCacheKey> ::isIrreducible());
  // REG: CkCacheManager(int size, const CkGroupID &gid);
  idx_CkCacheManager_marshall1();

  // REG: CkCacheManager(int size, int n, const CkGroupID *gid);
  idx_CkCacheManager_marshall2();

  // REG: CkCacheManager(int size, int n, const CkGroupID *gid, int nWB, const CkGroupID *gidWB);
  idx_CkCacheManager_marshall3();

  // REG: void cacheSync(const int &numChunks, const CkArrayIndex &chareIdx, const int &localIdx);
  idx_cacheSync_marshall4();

  // REG: void recvData(CkCacheFillMsg<CkCacheKey>* impl_msg);
  idx_recvData_CkCacheFillMsg();

  // REG: void writebackChunk(int num);
  idx_writebackChunk_marshall6();

  // REG: void finishedChunk(int num, const CmiUInt8 &weight);
  idx_finishedChunk_marshall7();

  // REG: void collectStatistics(const CkCallback &cb);
  idx_collectStatistics_marshall8();

  // REG: CkCacheManager(CkMigrateMessage* impl_msg);
  idx_CkCacheManager_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_CkCacheManager_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */
#ifdef CK_TEMPLATES_ONLY
template <class CkCacheKey> 
struct CBase_CkCacheManager : public Group, virtual CBase
 {
  CProxy_CkCacheManager <CkCacheKey>  thisProxy;
  CBase_CkCacheManager() : thisProxy(this)
    , Group()
  { }
  CBase_CkCacheManager(CkMigrateMessage* m) : thisProxy(this)
    , Group(m)  { }
  template <typename... Args>
  CBase_CkCacheManager(Args... args) : thisProxy(this)
    , Group(args...)  { }
  void pup(PUP::er &p) { }
  void _sdag_pup(PUP::er &p) { }
  void virtual_pup(PUP::er &p) {
    recursive_pup<CkCacheManager <CkCacheKey> >(dynamic_cast<CkCacheManager <CkCacheKey> *>(this), p);
}
  void parent_pup(PUP::er &p) {
    recursive_pup<Group>(this, p);
    p|thisProxy;
  }
};
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message CkCacheFillMsg<CmiUInt8>;
 */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message CkCacheRequestMsg<CmiUInt8>;
 */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group CkCacheManager<CmiUInt8>: IrrGroup;
 */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message CkCacheRequestMsg<CmiUInt16>;
 */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message CkCacheFillMsg<CmiUInt16>;
 */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group CkCacheManager<CmiUInt16>: IrrGroup;
 */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerCkCache(void)
{
  static int _done = 0; if(_done) return; _done = 1;



/* REG: message CkCacheFillMsg<CmiUInt8>;
*/
CMessage_CkCacheFillMsg<CmiUInt8>::__register("CkCacheFillMsg<CmiUInt8>", sizeof(CkCacheFillMsg<CmiUInt8>),(CkPackFnPtr) CkCacheFillMsg<CmiUInt8>::pack,(CkUnpackFnPtr) CkCacheFillMsg<CmiUInt8>::unpack);

/* REG: message CkCacheRequestMsg<CmiUInt8>;
*/
CMessage_CkCacheRequestMsg<CmiUInt8>::__register("CkCacheRequestMsg<CmiUInt8>", sizeof(CkCacheRequestMsg<CmiUInt8>),(CkPackFnPtr) CkCacheRequestMsg<CmiUInt8>::pack,(CkUnpackFnPtr) CkCacheRequestMsg<CmiUInt8>::unpack);

/* REG: group CkCacheManager<CmiUInt8>: IrrGroup;
*/
  CkIndex_CkCacheManager<CmiUInt8>::__register("CkCacheManager<CmiUInt8>", sizeof(CkCacheManager<CmiUInt8>));

/* REG: message CkCacheRequestMsg<CmiUInt16>;
*/
CMessage_CkCacheRequestMsg<CmiUInt16>::__register("CkCacheRequestMsg<CmiUInt16>", sizeof(CkCacheRequestMsg<CmiUInt16>),(CkPackFnPtr) CkCacheRequestMsg<CmiUInt16>::pack,(CkUnpackFnPtr) CkCacheRequestMsg<CmiUInt16>::unpack);

/* REG: message CkCacheFillMsg<CmiUInt16>;
*/
CMessage_CkCacheFillMsg<CmiUInt16>::__register("CkCacheFillMsg<CmiUInt16>", sizeof(CkCacheFillMsg<CmiUInt16>),(CkPackFnPtr) CkCacheFillMsg<CmiUInt16>::pack,(CkUnpackFnPtr) CkCacheFillMsg<CmiUInt16>::unpack);

/* REG: group CkCacheManager<CmiUInt16>: IrrGroup;
*/
  CkIndex_CkCacheManager<CmiUInt16>::__register("CkCacheManager<CmiUInt16>", sizeof(CkCacheManager<CmiUInt16>));

}
#endif /* CK_TEMPLATES_ONLY */
