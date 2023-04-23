



/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */



/* DEFS: message LBMigrateMsg{
MigrateInfo moves[];
char avail_vector[];
double expectedLoad[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_LBMigrateMsg::operator new(size_t s){
  return LBMigrateMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_LBMigrateMsg::operator new(size_t s, int* sz){
  return LBMigrateMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_LBMigrateMsg::operator new(size_t s, int* sz,const int pb){
  return LBMigrateMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_LBMigrateMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return LBMigrateMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_LBMigrateMsg::operator new(size_t s, int sz0, int sz1, int sz2) {
  int sizes[3];
  sizes[0] = sz0;
  sizes[1] = sz1;
  sizes[2] = sz2;
  return LBMigrateMsg::alloc(__idx, s, sizes, 0, GroupDepNum{});
}
void *CMessage_LBMigrateMsg::operator new(size_t s, int sz0, int sz1, int sz2, const int p) {
  int sizes[3];
  sizes[0] = sz0;
  sizes[1] = sz1;
  sizes[2] = sz2;
  return LBMigrateMsg::alloc(__idx, s, sizes, p, GroupDepNum{});
}
void *CMessage_LBMigrateMsg::operator new(size_t s, int sz0, int sz1, int sz2, const int p, const GroupDepNum groupDepNum) {
  int sizes[3];
  sizes[0] = sz0;
  sizes[1] = sz1;
  sizes[2] = sz2;
  return LBMigrateMsg::alloc(__idx, s, sizes, p, groupDepNum);
}
void* CMessage_LBMigrateMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN_DEFAULT(sizeof(MigrateInfo)*sizes[0]);
  if(sizes==0)
    CkpvAccess(_offsets)[2] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[2] = CkpvAccess(_offsets)[1] + ALIGN_DEFAULT(sizeof(char)*sizes[1]);
  if(sizes==0)
    CkpvAccess(_offsets)[3] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[3] = CkpvAccess(_offsets)[2] + ALIGN_DEFAULT(sizeof(double)*sizes[2]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[3], pb, groupDepNum);
}
CMessage_LBMigrateMsg::CMessage_LBMigrateMsg() {
LBMigrateMsg *newmsg = (LBMigrateMsg *)this;
  newmsg->moves = (MigrateInfo *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
  newmsg->avail_vector = (char *) ((char *)newmsg + CkpvAccess(_offsets)[1]);
  newmsg->expectedLoad = (double *) ((char *)newmsg + CkpvAccess(_offsets)[2]);
}
void CMessage_LBMigrateMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_LBMigrateMsg::pack(LBMigrateMsg *msg) {
  msg->moves = (MigrateInfo *) ((char *)msg->moves - (char *)msg);
  msg->avail_vector = (char *) ((char *)msg->avail_vector - (char *)msg);
  msg->expectedLoad = (double *) ((char *)msg->expectedLoad - (char *)msg);
  return (void *) msg;
}
LBMigrateMsg* CMessage_LBMigrateMsg::unpack(void* buf) {
  LBMigrateMsg *msg = (LBMigrateMsg *) buf;
  msg->moves = (MigrateInfo *) ((size_t)msg->moves + (char *)msg);
  msg->avail_vector = (char *) ((size_t)msg->avail_vector + (char *)msg);
  msg->expectedLoad = (double *) ((size_t)msg->expectedLoad + (char *)msg);
  return msg;
}
int CMessage_LBMigrateMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message LBScatterMsg{
int numMigratesPerPe[];
MigrateDecision moves[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_LBScatterMsg::operator new(size_t s){
  return LBScatterMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_LBScatterMsg::operator new(size_t s, int* sz){
  return LBScatterMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_LBScatterMsg::operator new(size_t s, int* sz,const int pb){
  return LBScatterMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_LBScatterMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return LBScatterMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_LBScatterMsg::operator new(size_t s, int sz0, int sz1) {
  int sizes[2];
  sizes[0] = sz0;
  sizes[1] = sz1;
  return LBScatterMsg::alloc(__idx, s, sizes, 0, GroupDepNum{});
}
void *CMessage_LBScatterMsg::operator new(size_t s, int sz0, int sz1, const int p) {
  int sizes[2];
  sizes[0] = sz0;
  sizes[1] = sz1;
  return LBScatterMsg::alloc(__idx, s, sizes, p, GroupDepNum{});
}
void *CMessage_LBScatterMsg::operator new(size_t s, int sz0, int sz1, const int p, const GroupDepNum groupDepNum) {
  int sizes[2];
  sizes[0] = sz0;
  sizes[1] = sz1;
  return LBScatterMsg::alloc(__idx, s, sizes, p, groupDepNum);
}
void* CMessage_LBScatterMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN_DEFAULT(sizeof(int)*sizes[0]);
  if(sizes==0)
    CkpvAccess(_offsets)[2] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[2] = CkpvAccess(_offsets)[1] + ALIGN_DEFAULT(sizeof(MigrateDecision)*sizes[1]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[2], pb, groupDepNum);
}
CMessage_LBScatterMsg::CMessage_LBScatterMsg() {
LBScatterMsg *newmsg = (LBScatterMsg *)this;
  newmsg->numMigratesPerPe = (int *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
  newmsg->moves = (MigrateDecision *) ((char *)newmsg + CkpvAccess(_offsets)[1]);
}
void CMessage_LBScatterMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_LBScatterMsg::pack(LBScatterMsg *msg) {
  msg->numMigratesPerPe = (int *) ((char *)msg->numMigratesPerPe - (char *)msg);
  msg->moves = (MigrateDecision *) ((char *)msg->moves - (char *)msg);
  return (void *) msg;
}
LBScatterMsg* CMessage_LBScatterMsg::unpack(void* buf) {
  LBScatterMsg *msg = (LBScatterMsg *) buf;
  msg->numMigratesPerPe = (int *) ((size_t)msg->numMigratesPerPe + (char *)msg);
  msg->moves = (MigrateDecision *) ((size_t)msg->moves + (char *)msg);
  return msg;
}
int CMessage_LBScatterMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message LBVectorMigrateMsg{
VectorMigrateInfo moves[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_LBVectorMigrateMsg::operator new(size_t s){
  return LBVectorMigrateMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_LBVectorMigrateMsg::operator new(size_t s, int* sz){
  return LBVectorMigrateMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_LBVectorMigrateMsg::operator new(size_t s, int* sz,const int pb){
  return LBVectorMigrateMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_LBVectorMigrateMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return LBVectorMigrateMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_LBVectorMigrateMsg::operator new(size_t s, int sz0) {
  int sizes[1];
  sizes[0] = sz0;
  return LBVectorMigrateMsg::alloc(__idx, s, sizes, 0, GroupDepNum{});
}
void *CMessage_LBVectorMigrateMsg::operator new(size_t s, int sz0, const int p) {
  int sizes[1];
  sizes[0] = sz0;
  return LBVectorMigrateMsg::alloc(__idx, s, sizes, p, GroupDepNum{});
}
void *CMessage_LBVectorMigrateMsg::operator new(size_t s, int sz0, const int p, const GroupDepNum groupDepNum) {
  int sizes[1];
  sizes[0] = sz0;
  return LBVectorMigrateMsg::alloc(__idx, s, sizes, p, groupDepNum);
}
void* CMessage_LBVectorMigrateMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN_DEFAULT(sizeof(VectorMigrateInfo)*sizes[0]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[1], pb, groupDepNum);
}
CMessage_LBVectorMigrateMsg::CMessage_LBVectorMigrateMsg() {
LBVectorMigrateMsg *newmsg = (LBVectorMigrateMsg *)this;
  newmsg->moves = (VectorMigrateInfo *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
}
void CMessage_LBVectorMigrateMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_LBVectorMigrateMsg::pack(LBVectorMigrateMsg *msg) {
  msg->moves = (VectorMigrateInfo *) ((char *)msg->moves - (char *)msg);
  return (void *) msg;
}
LBVectorMigrateMsg* CMessage_LBVectorMigrateMsg::unpack(void* buf) {
  LBVectorMigrateMsg *msg = (LBVectorMigrateMsg *) buf;
  msg->moves = (VectorMigrateInfo *) ((size_t)msg->moves + (char *)msg);
  return msg;
}
int CMessage_LBVectorMigrateMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group BaseLB: IrrGroup{
void BaseLB(const CkLBOptions &impl_noname_0);
BaseLB(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_BaseLB::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: void BaseLB(const CkLBOptions &impl_noname_0);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: BaseLB(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void BaseLB(const CkLBOptions &impl_noname_0);
 */
CkGroupID CProxy_BaseLB::ckNew(const CkLBOptions &impl_noname_0, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const CkLBOptions &impl_noname_0
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkLBOptions>::type>::type &)impl_noname_0;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkLBOptions>::type>::type &)impl_noname_0;
  }
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_BaseLB::__idx, CkIndex_BaseLB::idx_BaseLB_marshall1(), impl_msg);
  return gId;
}
  CProxy_BaseLB::CProxy_BaseLB(const CkLBOptions &impl_noname_0, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const CkLBOptions &impl_noname_0
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkLBOptions>::type>::type &)impl_noname_0;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkLBOptions>::type>::type &)impl_noname_0;
  }
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  ckSetGroupID(CkCreateGroup(CkIndex_BaseLB::__idx, CkIndex_BaseLB::idx_BaseLB_marshall1(), impl_msg));
}

// Entry point registration function
int CkIndex_BaseLB::reg_BaseLB_marshall1() {
  int epidx = CkRegisterEp("BaseLB(const CkLBOptions &impl_noname_0)",
      reinterpret_cast<CkCallFnPtr>(_call_BaseLB_marshall1), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_BaseLB_marshall1);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_BaseLB_marshall1);

  return epidx;
}

void CkIndex_BaseLB::_call_BaseLB_marshall1(void* impl_msg, void* impl_obj_void)
{
  BaseLB* impl_obj = static_cast<BaseLB*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CkLBOptions &impl_noname_0*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkLBOptions> impl_noname_0;
  implP|impl_noname_0;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) BaseLB(std::move(impl_noname_0.t));
}
int CkIndex_BaseLB::_callmarshall_BaseLB_marshall1(char* impl_buf, void* impl_obj_void) {
  BaseLB* impl_obj = static_cast<BaseLB*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const CkLBOptions &impl_noname_0*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkLBOptions> impl_noname_0;
  implP|impl_noname_0;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) BaseLB(std::move(impl_noname_0.t));
  return implP.size();
}
void CkIndex_BaseLB::_marshallmessagepup_BaseLB_marshall1(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CkLBOptions &impl_noname_0*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkLBOptions> impl_noname_0;
  implP|impl_noname_0;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("impl_noname_0");
  implDestP|impl_noname_0;
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: BaseLB(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_BaseLB::reg_BaseLB_CkMigrateMessage() {
  int epidx = CkRegisterEp("BaseLB(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_BaseLB_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_BaseLB::_call_BaseLB_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  new (impl_obj_void) BaseLB((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void BaseLB(const CkLBOptions &impl_noname_0);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: BaseLB(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_BaseLB::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,BaseLB::isIrreducible());
  // REG: void BaseLB(const CkLBOptions &impl_noname_0);
  idx_BaseLB_marshall1();

  // REG: BaseLB(CkMigrateMessage* impl_msg);
  idx_BaseLB_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_BaseLB_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerBaseLB(void)
{
  static int _done = 0; if(_done) return; _done = 1;
  _registerLBManager();

/* REG: message LBMigrateMsg{
MigrateInfo moves[];
char avail_vector[];
double expectedLoad[];
}
;
*/
CMessage_LBMigrateMsg::__register("LBMigrateMsg", sizeof(LBMigrateMsg),(CkPackFnPtr) LBMigrateMsg::pack,(CkUnpackFnPtr) LBMigrateMsg::unpack);

/* REG: message LBScatterMsg{
int numMigratesPerPe[];
MigrateDecision moves[];
}
;
*/
CMessage_LBScatterMsg::__register("LBScatterMsg", sizeof(LBScatterMsg),(CkPackFnPtr) LBScatterMsg::pack,(CkUnpackFnPtr) LBScatterMsg::unpack);

/* REG: message LBVectorMigrateMsg{
VectorMigrateInfo moves[];
}
;
*/
CMessage_LBVectorMigrateMsg::__register("LBVectorMigrateMsg", sizeof(LBVectorMigrateMsg),(CkPackFnPtr) LBVectorMigrateMsg::pack,(CkUnpackFnPtr) LBVectorMigrateMsg::unpack);

/* REG: group BaseLB: IrrGroup{
void BaseLB(const CkLBOptions &impl_noname_0);
BaseLB(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_BaseLB::__register("BaseLB", sizeof(BaseLB));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_BaseLB::virtual_pup(PUP::er &p) {
    recursive_pup<BaseLB>(dynamic_cast<BaseLB*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
