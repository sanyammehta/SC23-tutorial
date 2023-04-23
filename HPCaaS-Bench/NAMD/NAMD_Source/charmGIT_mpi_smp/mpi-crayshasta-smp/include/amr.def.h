










/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: message NeighborMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_NeighborMsg::operator new(size_t s){
  return NeighborMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_NeighborMsg::operator new(size_t s, int* sz){
  return NeighborMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_NeighborMsg::operator new(size_t s, int* sz,const int pb){
  return NeighborMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_NeighborMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return NeighborMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_NeighborMsg::operator new(size_t s, const int p) {
  return NeighborMsg::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_NeighborMsg::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return NeighborMsg::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_NeighborMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_NeighborMsg::CMessage_NeighborMsg() {
NeighborMsg *newmsg = (NeighborMsg *)this;
}
void CMessage_NeighborMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_NeighborMsg::pack(NeighborMsg *msg) {
  return (void *) msg;
}
NeighborMsg* CMessage_NeighborMsg::unpack(void* buf) {
  NeighborMsg *msg = (NeighborMsg *) buf;
  return msg;
}
int CMessage_NeighborMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message _DMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage__DMsg::operator new(size_t s){
  return _DMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage__DMsg::operator new(size_t s, int* sz){
  return _DMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage__DMsg::operator new(size_t s, int* sz,const int pb){
  return _DMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage__DMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return _DMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage__DMsg::operator new(size_t s, const int p) {
  return _DMsg::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage__DMsg::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return _DMsg::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage__DMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage__DMsg::CMessage__DMsg() {
_DMsg *newmsg = (_DMsg *)this;
}
void CMessage__DMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage__DMsg::pack(_DMsg *msg) {
  return (void *) msg;
}
_DMsg* CMessage__DMsg::unpack(void* buf) {
  _DMsg *msg = (_DMsg *) buf;
  return msg;
}
int CMessage__DMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message _ArrInitMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage__ArrInitMsg::operator new(size_t s){
  return _ArrInitMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage__ArrInitMsg::operator new(size_t s, int* sz){
  return _ArrInitMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage__ArrInitMsg::operator new(size_t s, int* sz,const int pb){
  return _ArrInitMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage__ArrInitMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return _ArrInitMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage__ArrInitMsg::operator new(size_t s, const int p) {
  return _ArrInitMsg::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage__ArrInitMsg::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return _ArrInitMsg::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage__ArrInitMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage__ArrInitMsg::CMessage__ArrInitMsg() {
_ArrInitMsg *newmsg = (_ArrInitMsg *)this;
}
void CMessage__ArrInitMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage__ArrInitMsg::pack(_ArrInitMsg *msg) {
  return (void *) msg;
}
_ArrInitMsg* CMessage__ArrInitMsg::unpack(void* buf) {
  _ArrInitMsg *msg = (_ArrInitMsg *) buf;
  return msg;
}
int CMessage__ArrInitMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message ChildInitMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_ChildInitMsg::operator new(size_t s){
  return ChildInitMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_ChildInitMsg::operator new(size_t s, int* sz){
  return ChildInitMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_ChildInitMsg::operator new(size_t s, int* sz,const int pb){
  return ChildInitMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_ChildInitMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return ChildInitMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_ChildInitMsg::operator new(size_t s, const int p) {
  return ChildInitMsg::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_ChildInitMsg::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return ChildInitMsg::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_ChildInitMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_ChildInitMsg::CMessage_ChildInitMsg() {
ChildInitMsg *newmsg = (ChildInitMsg *)this;
}
void CMessage_ChildInitMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_ChildInitMsg::pack(ChildInitMsg *msg) {
  return (void *) msg;
}
ChildInitMsg* CMessage_ChildInitMsg::unpack(void* buf) {
  ChildInitMsg *msg = (ChildInitMsg *) buf;
  return msg;
}
int CMessage_ChildInitMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message _RefineChkMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage__RefineChkMsg::operator new(size_t s){
  return _RefineChkMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage__RefineChkMsg::operator new(size_t s, int* sz){
  return _RefineChkMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage__RefineChkMsg::operator new(size_t s, int* sz,const int pb){
  return _RefineChkMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage__RefineChkMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return _RefineChkMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage__RefineChkMsg::operator new(size_t s, const int p) {
  return _RefineChkMsg::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage__RefineChkMsg::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return _RefineChkMsg::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage__RefineChkMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage__RefineChkMsg::CMessage__RefineChkMsg() {
_RefineChkMsg *newmsg = (_RefineChkMsg *)this;
}
void CMessage__RefineChkMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage__RefineChkMsg::pack(_RefineChkMsg *msg) {
  return (void *) msg;
}
_RefineChkMsg* CMessage__RefineChkMsg::unpack(void* buf) {
  _RefineChkMsg *msg = (_RefineChkMsg *) buf;
  return msg;
}
int CMessage__RefineChkMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message _RefineMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage__RefineMsg::operator new(size_t s){
  return _RefineMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage__RefineMsg::operator new(size_t s, int* sz){
  return _RefineMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage__RefineMsg::operator new(size_t s, int* sz,const int pb){
  return _RefineMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage__RefineMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return _RefineMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage__RefineMsg::operator new(size_t s, const int p) {
  return _RefineMsg::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage__RefineMsg::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return _RefineMsg::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage__RefineMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage__RefineMsg::CMessage__RefineMsg() {
_RefineMsg *newmsg = (_RefineMsg *)this;
}
void CMessage__RefineMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage__RefineMsg::pack(_RefineMsg *msg) {
  return (void *) msg;
}
_RefineMsg* CMessage__RefineMsg::unpack(void* buf) {
  _RefineMsg *msg = (_RefineMsg *) buf;
  return msg;
}
int CMessage__RefineMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message _RedMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage__RedMsg::operator new(size_t s){
  return _RedMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage__RedMsg::operator new(size_t s, int* sz){
  return _RedMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage__RedMsg::operator new(size_t s, int* sz,const int pb){
  return _RedMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage__RedMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return _RedMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage__RedMsg::operator new(size_t s, const int p) {
  return _RedMsg::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage__RedMsg::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return _RedMsg::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage__RedMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage__RedMsg::CMessage__RedMsg() {
_RedMsg *newmsg = (_RedMsg *)this;
}
void CMessage__RedMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage__RedMsg::pack(_RedMsg *msg) {
  return (void *) msg;
}
_RedMsg* CMessage__RedMsg::unpack(void* buf) {
  _RedMsg *msg = (_RedMsg *) buf;
  return msg;
}
int CMessage__RedMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message StartUpMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_StartUpMsg::operator new(size_t s){
  return StartUpMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_StartUpMsg::operator new(size_t s, int* sz){
  return StartUpMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_StartUpMsg::operator new(size_t s, int* sz,const int pb){
  return StartUpMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_StartUpMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return StartUpMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_StartUpMsg::operator new(size_t s, const int p) {
  return StartUpMsg::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_StartUpMsg::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return StartUpMsg::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_StartUpMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_StartUpMsg::CMessage_StartUpMsg() {
StartUpMsg *newmsg = (StartUpMsg *)this;
}
void CMessage_StartUpMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_StartUpMsg::pack(StartUpMsg *msg) {
  return (void *) msg;
}
StartUpMsg* CMessage_StartUpMsg::unpack(void* buf) {
  StartUpMsg *msg = (StartUpMsg *) buf;
  return msg;
}
int CMessage_StartUpMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message _DummyMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage__DummyMsg::operator new(size_t s){
  return _DummyMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage__DummyMsg::operator new(size_t s, int* sz){
  return _DummyMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage__DummyMsg::operator new(size_t s, int* sz,const int pb){
  return _DummyMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage__DummyMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return _DummyMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage__DummyMsg::operator new(size_t s, const int p) {
  return _DummyMsg::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage__DummyMsg::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return _DummyMsg::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage__DummyMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage__DummyMsg::CMessage__DummyMsg() {
_DummyMsg *newmsg = (_DummyMsg *)this;
}
void CMessage__DummyMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage__DummyMsg::pack(_DummyMsg *msg) {
  return (void *) msg;
}
_DummyMsg* CMessage__DummyMsg::unpack(void* buf) {
  _DummyMsg *msg = (_DummyMsg *) buf;
  return msg;
}
int CMessage__DummyMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message _StatCollMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage__StatCollMsg::operator new(size_t s){
  return _StatCollMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage__StatCollMsg::operator new(size_t s, int* sz){
  return _StatCollMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage__StatCollMsg::operator new(size_t s, int* sz,const int pb){
  return _StatCollMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage__StatCollMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return _StatCollMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage__StatCollMsg::operator new(size_t s, const int p) {
  return _StatCollMsg::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage__StatCollMsg::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return _StatCollMsg::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage__StatCollMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage__StatCollMsg::CMessage__StatCollMsg() {
_StatCollMsg *newmsg = (_StatCollMsg *)this;
}
void CMessage__StatCollMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage__StatCollMsg::pack(_StatCollMsg *msg) {
  return (void *) msg;
}
_StatCollMsg* CMessage__StatCollMsg::unpack(void* buf) {
  _StatCollMsg *msg = (_StatCollMsg *) buf;
  return msg;
}
int CMessage__StatCollMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message _CreateStatCollMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage__CreateStatCollMsg::operator new(size_t s){
  return _CreateStatCollMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage__CreateStatCollMsg::operator new(size_t s, int* sz){
  return _CreateStatCollMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage__CreateStatCollMsg::operator new(size_t s, int* sz,const int pb){
  return _CreateStatCollMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage__CreateStatCollMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return _CreateStatCollMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage__CreateStatCollMsg::operator new(size_t s, const int p) {
  return _CreateStatCollMsg::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage__CreateStatCollMsg::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return _CreateStatCollMsg::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage__CreateStatCollMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage__CreateStatCollMsg::CMessage__CreateStatCollMsg() {
_CreateStatCollMsg *newmsg = (_CreateStatCollMsg *)this;
}
void CMessage__CreateStatCollMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage__CreateStatCollMsg::pack(_CreateStatCollMsg *msg) {
  return (void *) msg;
}
_CreateStatCollMsg* CMessage__CreateStatCollMsg::unpack(void* buf) {
  _CreateStatCollMsg *msg = (_CreateStatCollMsg *) buf;
  return msg;
}
int CMessage__CreateStatCollMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: chare AmrCoordinator: Chare{
AmrCoordinator(_DMsg* impl_msg);
AmrCoordinator(StartUpMsg* impl_msg);
void synchronise(_RedMsg* impl_msg);
void reportStats(_StatCollMsg* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_AmrCoordinator::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: AmrCoordinator(_DMsg* impl_msg);
 */
CkChareID CProxy_AmrCoordinator::ckNew(_DMsg* impl_msg, int impl_onPE)
{
  CkChareID impl_ret;
  CkCreateChare(CkIndex_AmrCoordinator::__idx, CkIndex_AmrCoordinator::idx_AmrCoordinator__DMsg(), impl_msg, &impl_ret, impl_onPE);
  return impl_ret;
}
void CProxy_AmrCoordinator::ckNew(_DMsg* impl_msg, CkChareID* pcid, int impl_onPE)
{
  CkCreateChare(CkIndex_AmrCoordinator::__idx, CkIndex_AmrCoordinator::idx_AmrCoordinator__DMsg(), impl_msg, pcid, impl_onPE);
}

// Entry point registration function
int CkIndex_AmrCoordinator::reg_AmrCoordinator__DMsg() {
  int epidx = CkRegisterEp("AmrCoordinator(_DMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_AmrCoordinator__DMsg), CMessage__DMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)_DMsg::ckDebugPup);
  return epidx;
}

void CkIndex_AmrCoordinator::_call_AmrCoordinator__DMsg(void* impl_msg, void* impl_obj_void)
{
  AmrCoordinator* impl_obj = static_cast<AmrCoordinator*>(impl_obj_void);
  new (impl_obj_void) AmrCoordinator((_DMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: AmrCoordinator(StartUpMsg* impl_msg);
 */
CkChareID CProxy_AmrCoordinator::ckNew(StartUpMsg* impl_msg, int impl_onPE)
{
  CkChareID impl_ret;
  CkCreateChare(CkIndex_AmrCoordinator::__idx, CkIndex_AmrCoordinator::idx_AmrCoordinator_StartUpMsg(), impl_msg, &impl_ret, impl_onPE);
  return impl_ret;
}
void CProxy_AmrCoordinator::ckNew(StartUpMsg* impl_msg, CkChareID* pcid, int impl_onPE)
{
  CkCreateChare(CkIndex_AmrCoordinator::__idx, CkIndex_AmrCoordinator::idx_AmrCoordinator_StartUpMsg(), impl_msg, pcid, impl_onPE);
}

// Entry point registration function
int CkIndex_AmrCoordinator::reg_AmrCoordinator_StartUpMsg() {
  int epidx = CkRegisterEp("AmrCoordinator(StartUpMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_AmrCoordinator_StartUpMsg), CMessage_StartUpMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)StartUpMsg::ckDebugPup);
  return epidx;
}

void CkIndex_AmrCoordinator::_call_AmrCoordinator_StartUpMsg(void* impl_msg, void* impl_obj_void)
{
  AmrCoordinator* impl_obj = static_cast<AmrCoordinator*>(impl_obj_void);
  new (impl_obj_void) AmrCoordinator((StartUpMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void synchronise(_RedMsg* impl_msg);
 */
void CProxy_AmrCoordinator::synchronise(_RedMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_AmrCoordinator::idx_synchronise__RedMsg(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_AmrCoordinator::idx_synchronise__RedMsg(), impl_msg, &ckGetChareID(),destPE);
  } else {
    CkSendMsg(CkIndex_AmrCoordinator::idx_synchronise__RedMsg(), impl_msg, &ckGetChareID(),0);
  }
}

// Entry point registration function
int CkIndex_AmrCoordinator::reg_synchronise__RedMsg() {
  int epidx = CkRegisterEp("synchronise(_RedMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_synchronise__RedMsg), CMessage__RedMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)_RedMsg::ckDebugPup);
  return epidx;
}

void CkIndex_AmrCoordinator::_call_synchronise__RedMsg(void* impl_msg, void* impl_obj_void)
{
  AmrCoordinator* impl_obj = static_cast<AmrCoordinator*>(impl_obj_void);
  impl_obj->synchronise((_RedMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void reportStats(_StatCollMsg* impl_msg);
 */
void CProxy_AmrCoordinator::reportStats(_StatCollMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_AmrCoordinator::idx_reportStats__StatCollMsg(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_AmrCoordinator::idx_reportStats__StatCollMsg(), impl_msg, &ckGetChareID(),destPE);
  } else {
    CkSendMsg(CkIndex_AmrCoordinator::idx_reportStats__StatCollMsg(), impl_msg, &ckGetChareID(),0);
  }
}

// Entry point registration function
int CkIndex_AmrCoordinator::reg_reportStats__StatCollMsg() {
  int epidx = CkRegisterEp("reportStats(_StatCollMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_reportStats__StatCollMsg), CMessage__StatCollMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)_StatCollMsg::ckDebugPup);
  return epidx;
}

void CkIndex_AmrCoordinator::_call_reportStats__StatCollMsg(void* impl_msg, void* impl_obj_void)
{
  AmrCoordinator* impl_obj = static_cast<AmrCoordinator*>(impl_obj_void);
  impl_obj->reportStats((_StatCollMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_AmrCoordinator::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeChare);
  CkRegisterBase(__idx, CkIndex_Chare::__idx);
  // REG: AmrCoordinator(_DMsg* impl_msg);
  idx_AmrCoordinator__DMsg();

  // REG: AmrCoordinator(StartUpMsg* impl_msg);
  idx_AmrCoordinator_StartUpMsg();

  // REG: void synchronise(_RedMsg* impl_msg);
  idx_synchronise__RedMsg();

  // REG: void reportStats(_StatCollMsg* impl_msg);
  idx_reportStats__StatCollMsg();

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: array Cell: ArrayElement{
void neighbor_data(NeighborMsg* impl_msg);
void refine(_RefineMsg* impl_msg);
void change_to_leaf(ChildInitMsg* impl_msg);
void refine_confirmed(_DMsg* impl_msg);
void resume(_DMsg* impl_msg);
void synchronise(_RedMsg* impl_msg);
void refineExec(_DMsg* impl_msg);
void checkRefine(_RefineChkMsg* impl_msg);
void goToAtSync(_DMsg* impl_msg);
Cell(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_Cell::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CProxySection_Cell::contribute(CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(sid, userData, fragSize);
}

void CProxySection_Cell::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, userData, fragSize);
}

template <typename T>
void CProxySection_Cell::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, userData, fragSize);
}

void CProxySection_Cell::contribute(CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(sid, cb, userData, fragSize);
}

void CProxySection_Cell::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, cb, userData, fragSize);
}

template <typename T>
void CProxySection_Cell::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, cb, userData, fragSize);
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: void neighbor_data(NeighborMsg* impl_msg);
 */
void CProxyElement_Cell::neighbor_data(NeighborMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Cell::idx_neighbor_data_NeighborMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void refine(_RefineMsg* impl_msg);
 */
void CProxyElement_Cell::refine(_RefineMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Cell::idx_refine__RefineMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void change_to_leaf(ChildInitMsg* impl_msg);
 */
void CProxyElement_Cell::change_to_leaf(ChildInitMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Cell::idx_change_to_leaf_ChildInitMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void refine_confirmed(_DMsg* impl_msg);
 */
void CProxyElement_Cell::refine_confirmed(_DMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Cell::idx_refine_confirmed__DMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void resume(_DMsg* impl_msg);
 */
void CProxyElement_Cell::resume(_DMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Cell::idx_resume__DMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void synchronise(_RedMsg* impl_msg);
 */
void CProxyElement_Cell::synchronise(_RedMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Cell::idx_synchronise__RedMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void refineExec(_DMsg* impl_msg);
 */
void CProxyElement_Cell::refineExec(_DMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Cell::idx_refineExec__DMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void checkRefine(_RefineChkMsg* impl_msg);
 */
void CProxyElement_Cell::checkRefine(_RefineChkMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Cell::idx_checkRefine__RefineChkMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void goToAtSync(_DMsg* impl_msg);
 */
void CProxyElement_Cell::goToAtSync(_DMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Cell::idx_goToAtSync__DMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Cell(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void neighbor_data(NeighborMsg* impl_msg);
 */
void CProxy_Cell::neighbor_data(NeighborMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Cell::idx_neighbor_data_NeighborMsg(),0);
}

// Entry point registration function
int CkIndex_Cell::reg_neighbor_data_NeighborMsg() {
  int epidx = CkRegisterEp("neighbor_data(NeighborMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_neighbor_data_NeighborMsg), CMessage_NeighborMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)NeighborMsg::ckDebugPup);
  return epidx;
}

void CkIndex_Cell::_call_neighbor_data_NeighborMsg(void* impl_msg, void* impl_obj_void)
{
  Cell* impl_obj = static_cast<Cell*>(impl_obj_void);
  impl_obj->neighbor_data((NeighborMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void refine(_RefineMsg* impl_msg);
 */
void CProxy_Cell::refine(_RefineMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Cell::idx_refine__RefineMsg(),0);
}

// Entry point registration function
int CkIndex_Cell::reg_refine__RefineMsg() {
  int epidx = CkRegisterEp("refine(_RefineMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_refine__RefineMsg), CMessage__RefineMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)_RefineMsg::ckDebugPup);
  return epidx;
}

void CkIndex_Cell::_call_refine__RefineMsg(void* impl_msg, void* impl_obj_void)
{
  Cell* impl_obj = static_cast<Cell*>(impl_obj_void);
  impl_obj->refine((_RefineMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void change_to_leaf(ChildInitMsg* impl_msg);
 */
void CProxy_Cell::change_to_leaf(ChildInitMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Cell::idx_change_to_leaf_ChildInitMsg(),0);
}

// Entry point registration function
int CkIndex_Cell::reg_change_to_leaf_ChildInitMsg() {
  int epidx = CkRegisterEp("change_to_leaf(ChildInitMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_change_to_leaf_ChildInitMsg), CMessage_ChildInitMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)ChildInitMsg::ckDebugPup);
  return epidx;
}

void CkIndex_Cell::_call_change_to_leaf_ChildInitMsg(void* impl_msg, void* impl_obj_void)
{
  Cell* impl_obj = static_cast<Cell*>(impl_obj_void);
  impl_obj->change_to_leaf((ChildInitMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void refine_confirmed(_DMsg* impl_msg);
 */
void CProxy_Cell::refine_confirmed(_DMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Cell::idx_refine_confirmed__DMsg(),0);
}

// Entry point registration function
int CkIndex_Cell::reg_refine_confirmed__DMsg() {
  int epidx = CkRegisterEp("refine_confirmed(_DMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_refine_confirmed__DMsg), CMessage__DMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)_DMsg::ckDebugPup);
  return epidx;
}

void CkIndex_Cell::_call_refine_confirmed__DMsg(void* impl_msg, void* impl_obj_void)
{
  Cell* impl_obj = static_cast<Cell*>(impl_obj_void);
  impl_obj->refine_confirmed((_DMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void resume(_DMsg* impl_msg);
 */
void CProxy_Cell::resume(_DMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Cell::idx_resume__DMsg(),0);
}

// Entry point registration function
int CkIndex_Cell::reg_resume__DMsg() {
  int epidx = CkRegisterEp("resume(_DMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_resume__DMsg), CMessage__DMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)_DMsg::ckDebugPup);
  return epidx;
}

void CkIndex_Cell::_call_resume__DMsg(void* impl_msg, void* impl_obj_void)
{
  Cell* impl_obj = static_cast<Cell*>(impl_obj_void);
  impl_obj->resume((_DMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void synchronise(_RedMsg* impl_msg);
 */
void CProxy_Cell::synchronise(_RedMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Cell::idx_synchronise__RedMsg(),0);
}

// Entry point registration function
int CkIndex_Cell::reg_synchronise__RedMsg() {
  int epidx = CkRegisterEp("synchronise(_RedMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_synchronise__RedMsg), CMessage__RedMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)_RedMsg::ckDebugPup);
  return epidx;
}

void CkIndex_Cell::_call_synchronise__RedMsg(void* impl_msg, void* impl_obj_void)
{
  Cell* impl_obj = static_cast<Cell*>(impl_obj_void);
  impl_obj->synchronise((_RedMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void refineExec(_DMsg* impl_msg);
 */
void CProxy_Cell::refineExec(_DMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Cell::idx_refineExec__DMsg(),0);
}

// Entry point registration function
int CkIndex_Cell::reg_refineExec__DMsg() {
  int epidx = CkRegisterEp("refineExec(_DMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_refineExec__DMsg), CMessage__DMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)_DMsg::ckDebugPup);
  return epidx;
}

void CkIndex_Cell::_call_refineExec__DMsg(void* impl_msg, void* impl_obj_void)
{
  Cell* impl_obj = static_cast<Cell*>(impl_obj_void);
  impl_obj->refineExec((_DMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void checkRefine(_RefineChkMsg* impl_msg);
 */
void CProxy_Cell::checkRefine(_RefineChkMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Cell::idx_checkRefine__RefineChkMsg(),0);
}

// Entry point registration function
int CkIndex_Cell::reg_checkRefine__RefineChkMsg() {
  int epidx = CkRegisterEp("checkRefine(_RefineChkMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_checkRefine__RefineChkMsg), CMessage__RefineChkMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)_RefineChkMsg::ckDebugPup);
  return epidx;
}

void CkIndex_Cell::_call_checkRefine__RefineChkMsg(void* impl_msg, void* impl_obj_void)
{
  Cell* impl_obj = static_cast<Cell*>(impl_obj_void);
  impl_obj->checkRefine((_RefineChkMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void goToAtSync(_DMsg* impl_msg);
 */
void CProxy_Cell::goToAtSync(_DMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Cell::idx_goToAtSync__DMsg(),0);
}

// Entry point registration function
int CkIndex_Cell::reg_goToAtSync__DMsg() {
  int epidx = CkRegisterEp("goToAtSync(_DMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_goToAtSync__DMsg), CMessage__DMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)_DMsg::ckDebugPup);
  return epidx;
}

void CkIndex_Cell::_call_goToAtSync__DMsg(void* impl_msg, void* impl_obj_void)
{
  Cell* impl_obj = static_cast<Cell*>(impl_obj_void);
  impl_obj->goToAtSync((_DMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Cell(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_Cell::reg_Cell_CkMigrateMessage() {
  int epidx = CkRegisterEp("Cell(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_Cell_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_Cell::_call_Cell_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  call_migration_constructor<Cell> c = impl_obj_void;
  c((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void neighbor_data(NeighborMsg* impl_msg);
 */
void CProxySection_Cell::neighbor_data(NeighborMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Cell::idx_neighbor_data_NeighborMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void refine(_RefineMsg* impl_msg);
 */
void CProxySection_Cell::refine(_RefineMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Cell::idx_refine__RefineMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void change_to_leaf(ChildInitMsg* impl_msg);
 */
void CProxySection_Cell::change_to_leaf(ChildInitMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Cell::idx_change_to_leaf_ChildInitMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void refine_confirmed(_DMsg* impl_msg);
 */
void CProxySection_Cell::refine_confirmed(_DMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Cell::idx_refine_confirmed__DMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void resume(_DMsg* impl_msg);
 */
void CProxySection_Cell::resume(_DMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Cell::idx_resume__DMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void synchronise(_RedMsg* impl_msg);
 */
void CProxySection_Cell::synchronise(_RedMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Cell::idx_synchronise__RedMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void refineExec(_DMsg* impl_msg);
 */
void CProxySection_Cell::refineExec(_DMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Cell::idx_refineExec__DMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void checkRefine(_RefineChkMsg* impl_msg);
 */
void CProxySection_Cell::checkRefine(_RefineChkMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Cell::idx_checkRefine__RefineChkMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void goToAtSync(_DMsg* impl_msg);
 */
void CProxySection_Cell::goToAtSync(_DMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Cell::idx_goToAtSync__DMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Cell(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_Cell::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeArray);
  CkRegisterArrayDimensions(__idx, -1);
  CkRegisterBase(__idx, CkIndex_ArrayElement::__idx);
  // REG: void neighbor_data(NeighborMsg* impl_msg);
  idx_neighbor_data_NeighborMsg();

  // REG: void refine(_RefineMsg* impl_msg);
  idx_refine__RefineMsg();

  // REG: void change_to_leaf(ChildInitMsg* impl_msg);
  idx_change_to_leaf_ChildInitMsg();

  // REG: void refine_confirmed(_DMsg* impl_msg);
  idx_refine_confirmed__DMsg();

  // REG: void resume(_DMsg* impl_msg);
  idx_resume__DMsg();

  // REG: void synchronise(_RedMsg* impl_msg);
  idx_synchronise__RedMsg();

  // REG: void refineExec(_DMsg* impl_msg);
  idx_refineExec__DMsg();

  // REG: void checkRefine(_RefineChkMsg* impl_msg);
  idx_checkRefine__RefineChkMsg();

  // REG: void goToAtSync(_DMsg* impl_msg);
  idx_goToAtSync__DMsg();

  // REG: Cell(CkMigrateMessage* impl_msg);
  idx_Cell_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_Cell_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: array Cell1D: Cell{
Cell1D(_ArrInitMsg* impl_msg);
Cell1D(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_Cell1D::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CProxySection_Cell1D::contribute(CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(sid, userData, fragSize);
}

void CProxySection_Cell1D::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, userData, fragSize);
}

template <typename T>
void CProxySection_Cell1D::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, userData, fragSize);
}

void CProxySection_Cell1D::contribute(CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(sid, cb, userData, fragSize);
}

void CProxySection_Cell1D::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, cb, userData, fragSize);
}

template <typename T>
void CProxySection_Cell1D::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, cb, userData, fragSize);
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: Cell1D(_ArrInitMsg* impl_msg);
 */
void CProxyElement_Cell1D::insert(_ArrInitMsg* impl_msg, int onPE)
{ 
    UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
   ckInsert((CkArrayMessage *)impl_msg,CkIndex_Cell1D::idx_Cell1D__ArrInitMsg(),onPE);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Cell1D(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Cell1D(_ArrInitMsg* impl_msg);
 */
CkArrayID CProxy_Cell1D::ckNew(_ArrInitMsg* impl_msg, const CkArrayOptions &opts)
{
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_Cell1D::idx_Cell1D__ArrInitMsg(), opts);
  return gId;
}
void CProxy_Cell1D::ckNew(_ArrInitMsg* impl_msg, const CkArrayOptions &opts, CkCallback _ck_array_creation_cb)
{
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_Cell1D::idx_Cell1D__ArrInitMsg(), _ck_array_creation_cb, opts, impl_msg);
}

// Entry point registration function
int CkIndex_Cell1D::reg_Cell1D__ArrInitMsg() {
  int epidx = CkRegisterEp("Cell1D(_ArrInitMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_Cell1D__ArrInitMsg), CMessage__ArrInitMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)_ArrInitMsg::ckDebugPup);
  return epidx;
}

void CkIndex_Cell1D::_call_Cell1D__ArrInitMsg(void* impl_msg, void* impl_obj_void)
{
  Cell1D* impl_obj = static_cast<Cell1D*>(impl_obj_void);
  new (impl_obj_void) Cell1D((_ArrInitMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Cell1D(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_Cell1D::reg_Cell1D_CkMigrateMessage() {
  int epidx = CkRegisterEp("Cell1D(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_Cell1D_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_Cell1D::_call_Cell1D_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  call_migration_constructor<Cell1D> c = impl_obj_void;
  c((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Cell1D(_ArrInitMsg* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Cell1D(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_Cell1D::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeArray);
  CkRegisterArrayDimensions(__idx, -1);
  CkRegisterBase(__idx, CkIndex_Cell::__idx);
  // REG: Cell1D(_ArrInitMsg* impl_msg);
  idx_Cell1D__ArrInitMsg();
  CkRegisterIfNotThere(idx_Cell1D__ArrInitMsg(), CkArray_IfNotThere_createhere);

  // REG: Cell1D(CkMigrateMessage* impl_msg);
  idx_Cell1D_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_Cell1D_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: array Cell2D: Cell{
Cell2D(_ArrInitMsg* impl_msg);
Cell2D(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_Cell2D::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CProxySection_Cell2D::contribute(CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(sid, userData, fragSize);
}

void CProxySection_Cell2D::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, userData, fragSize);
}

template <typename T>
void CProxySection_Cell2D::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, userData, fragSize);
}

void CProxySection_Cell2D::contribute(CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(sid, cb, userData, fragSize);
}

void CProxySection_Cell2D::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, cb, userData, fragSize);
}

template <typename T>
void CProxySection_Cell2D::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, cb, userData, fragSize);
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: Cell2D(_ArrInitMsg* impl_msg);
 */
void CProxyElement_Cell2D::insert(_ArrInitMsg* impl_msg, int onPE)
{ 
    UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
   ckInsert((CkArrayMessage *)impl_msg,CkIndex_Cell2D::idx_Cell2D__ArrInitMsg(),onPE);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Cell2D(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Cell2D(_ArrInitMsg* impl_msg);
 */
CkArrayID CProxy_Cell2D::ckNew(_ArrInitMsg* impl_msg, const CkArrayOptions &opts)
{
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_Cell2D::idx_Cell2D__ArrInitMsg(), opts);
  return gId;
}
void CProxy_Cell2D::ckNew(_ArrInitMsg* impl_msg, const CkArrayOptions &opts, CkCallback _ck_array_creation_cb)
{
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_Cell2D::idx_Cell2D__ArrInitMsg(), _ck_array_creation_cb, opts, impl_msg);
}

// Entry point registration function
int CkIndex_Cell2D::reg_Cell2D__ArrInitMsg() {
  int epidx = CkRegisterEp("Cell2D(_ArrInitMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_Cell2D__ArrInitMsg), CMessage__ArrInitMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)_ArrInitMsg::ckDebugPup);
  return epidx;
}

void CkIndex_Cell2D::_call_Cell2D__ArrInitMsg(void* impl_msg, void* impl_obj_void)
{
  Cell2D* impl_obj = static_cast<Cell2D*>(impl_obj_void);
  new (impl_obj_void) Cell2D((_ArrInitMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Cell2D(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_Cell2D::reg_Cell2D_CkMigrateMessage() {
  int epidx = CkRegisterEp("Cell2D(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_Cell2D_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_Cell2D::_call_Cell2D_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  call_migration_constructor<Cell2D> c = impl_obj_void;
  c((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Cell2D(_ArrInitMsg* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Cell2D(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_Cell2D::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeArray);
  CkRegisterArrayDimensions(__idx, -1);
  CkRegisterBase(__idx, CkIndex_Cell::__idx);
  // REG: Cell2D(_ArrInitMsg* impl_msg);
  idx_Cell2D__ArrInitMsg();
  CkRegisterIfNotThere(idx_Cell2D__ArrInitMsg(), CkArray_IfNotThere_createhere);

  // REG: Cell2D(CkMigrateMessage* impl_msg);
  idx_Cell2D_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_Cell2D_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: array Cell3D: Cell{
Cell3D(_ArrInitMsg* impl_msg);
Cell3D(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_Cell3D::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CProxySection_Cell3D::contribute(CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(sid, userData, fragSize);
}

void CProxySection_Cell3D::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, userData, fragSize);
}

template <typename T>
void CProxySection_Cell3D::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, userData, fragSize);
}

void CProxySection_Cell3D::contribute(CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(sid, cb, userData, fragSize);
}

void CProxySection_Cell3D::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, cb, userData, fragSize);
}

template <typename T>
void CProxySection_Cell3D::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, cb, userData, fragSize);
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: Cell3D(_ArrInitMsg* impl_msg);
 */
void CProxyElement_Cell3D::insert(_ArrInitMsg* impl_msg, int onPE)
{ 
    UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
   ckInsert((CkArrayMessage *)impl_msg,CkIndex_Cell3D::idx_Cell3D__ArrInitMsg(),onPE);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Cell3D(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Cell3D(_ArrInitMsg* impl_msg);
 */
CkArrayID CProxy_Cell3D::ckNew(_ArrInitMsg* impl_msg, const CkArrayOptions &opts)
{
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_Cell3D::idx_Cell3D__ArrInitMsg(), opts);
  return gId;
}
void CProxy_Cell3D::ckNew(_ArrInitMsg* impl_msg, const CkArrayOptions &opts, CkCallback _ck_array_creation_cb)
{
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_Cell3D::idx_Cell3D__ArrInitMsg(), _ck_array_creation_cb, opts, impl_msg);
}

// Entry point registration function
int CkIndex_Cell3D::reg_Cell3D__ArrInitMsg() {
  int epidx = CkRegisterEp("Cell3D(_ArrInitMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_Cell3D__ArrInitMsg), CMessage__ArrInitMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)_ArrInitMsg::ckDebugPup);
  return epidx;
}

void CkIndex_Cell3D::_call_Cell3D__ArrInitMsg(void* impl_msg, void* impl_obj_void)
{
  Cell3D* impl_obj = static_cast<Cell3D*>(impl_obj_void);
  new (impl_obj_void) Cell3D((_ArrInitMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Cell3D(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_Cell3D::reg_Cell3D_CkMigrateMessage() {
  int epidx = CkRegisterEp("Cell3D(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_Cell3D_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_Cell3D::_call_Cell3D_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  call_migration_constructor<Cell3D> c = impl_obj_void;
  c((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Cell3D(_ArrInitMsg* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Cell3D(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_Cell3D::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeArray);
  CkRegisterArrayDimensions(__idx, -1);
  CkRegisterBase(__idx, CkIndex_Cell::__idx);
  // REG: Cell3D(_ArrInitMsg* impl_msg);
  idx_Cell3D__ArrInitMsg();
  CkRegisterIfNotThere(idx_Cell3D__ArrInitMsg(), CkArray_IfNotThere_createhere);

  // REG: Cell3D(CkMigrateMessage* impl_msg);
  idx_Cell3D_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_Cell3D_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group StatCollector: IrrGroup{
StatCollector(_CreateStatCollMsg* impl_msg);
void sendStat(_DummyMsg* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_StatCollector::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: StatCollector(_CreateStatCollMsg* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void sendStat(_DummyMsg* impl_msg);
 */
void CProxyElement_StatCollector::sendStat(_DummyMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_StatCollector::idx_sendStat__DummyMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_StatCollector::idx_sendStat__DummyMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_StatCollector::idx_sendStat__DummyMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: StatCollector(_CreateStatCollMsg* impl_msg);
 */
CkGroupID CProxy_StatCollector::ckNew(_CreateStatCollMsg* impl_msg)
{
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_StatCollector::__idx, CkIndex_StatCollector::idx_StatCollector__CreateStatCollMsg(), impl_msg);
  return gId;
}
  CProxy_StatCollector::CProxy_StatCollector(_CreateStatCollMsg* impl_msg)
{
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  ckSetGroupID(CkCreateGroup(CkIndex_StatCollector::__idx, CkIndex_StatCollector::idx_StatCollector__CreateStatCollMsg(), impl_msg));
}

// Entry point registration function
int CkIndex_StatCollector::reg_StatCollector__CreateStatCollMsg() {
  int epidx = CkRegisterEp("StatCollector(_CreateStatCollMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_StatCollector__CreateStatCollMsg), CMessage__CreateStatCollMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)_CreateStatCollMsg::ckDebugPup);
  return epidx;
}

void CkIndex_StatCollector::_call_StatCollector__CreateStatCollMsg(void* impl_msg, void* impl_obj_void)
{
  StatCollector* impl_obj = static_cast<StatCollector*>(impl_obj_void);
  new (impl_obj_void) StatCollector((_CreateStatCollMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void sendStat(_DummyMsg* impl_msg);
 */
void CProxy_StatCollector::sendStat(_DummyMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_StatCollector::idx_sendStat__DummyMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_StatCollector::idx_sendStat__DummyMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_StatCollector::idx_sendStat__DummyMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_StatCollector::sendStat(_DummyMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_StatCollector::idx_sendStat__DummyMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_StatCollector::sendStat(_DummyMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_StatCollector::idx_sendStat__DummyMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_StatCollector::reg_sendStat__DummyMsg() {
  int epidx = CkRegisterEp("sendStat(_DummyMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_sendStat__DummyMsg), CMessage__DummyMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)_DummyMsg::ckDebugPup);
  return epidx;
}

void CkIndex_StatCollector::_call_sendStat__DummyMsg(void* impl_msg, void* impl_obj_void)
{
  StatCollector* impl_obj = static_cast<StatCollector*>(impl_obj_void);
  impl_obj->sendStat((_DummyMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: StatCollector(_CreateStatCollMsg* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void sendStat(_DummyMsg* impl_msg);
 */
void CProxySection_StatCollector::sendStat(_DummyMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_StatCollector::idx_sendStat__DummyMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_StatCollector::idx_sendStat__DummyMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_StatCollector::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,StatCollector::isIrreducible());
  // REG: StatCollector(_CreateStatCollMsg* impl_msg);
  idx_StatCollector__CreateStatCollMsg();

  // REG: void sendStat(_DummyMsg* impl_msg);
  idx_sendStat__DummyMsg();

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registeramr(void)
{
  static int _done = 0; if(_done) return; _done = 1;
/* REG: message NeighborMsg;
*/
CMessage_NeighborMsg::__register("NeighborMsg", sizeof(NeighborMsg),(CkPackFnPtr) NeighborMsg::pack,(CkUnpackFnPtr) NeighborMsg::unpack);

/* REG: message _DMsg;
*/
CMessage__DMsg::__register("_DMsg", sizeof(_DMsg),(CkPackFnPtr) _DMsg::pack,(CkUnpackFnPtr) _DMsg::unpack);

/* REG: message _ArrInitMsg;
*/
CMessage__ArrInitMsg::__register("_ArrInitMsg", sizeof(_ArrInitMsg),(CkPackFnPtr) _ArrInitMsg::pack,(CkUnpackFnPtr) _ArrInitMsg::unpack);

/* REG: message ChildInitMsg;
*/
CMessage_ChildInitMsg::__register("ChildInitMsg", sizeof(ChildInitMsg),(CkPackFnPtr) ChildInitMsg::pack,(CkUnpackFnPtr) ChildInitMsg::unpack);

/* REG: message _RefineChkMsg;
*/
CMessage__RefineChkMsg::__register("_RefineChkMsg", sizeof(_RefineChkMsg),(CkPackFnPtr) _RefineChkMsg::pack,(CkUnpackFnPtr) _RefineChkMsg::unpack);

/* REG: message _RefineMsg;
*/
CMessage__RefineMsg::__register("_RefineMsg", sizeof(_RefineMsg),(CkPackFnPtr) _RefineMsg::pack,(CkUnpackFnPtr) _RefineMsg::unpack);

/* REG: message _RedMsg;
*/
CMessage__RedMsg::__register("_RedMsg", sizeof(_RedMsg),(CkPackFnPtr) _RedMsg::pack,(CkUnpackFnPtr) _RedMsg::unpack);

/* REG: message StartUpMsg;
*/
CMessage_StartUpMsg::__register("StartUpMsg", sizeof(StartUpMsg),(CkPackFnPtr) StartUpMsg::pack,(CkUnpackFnPtr) StartUpMsg::unpack);

/* REG: message _DummyMsg;
*/
CMessage__DummyMsg::__register("_DummyMsg", sizeof(_DummyMsg),(CkPackFnPtr) _DummyMsg::pack,(CkUnpackFnPtr) _DummyMsg::unpack);

/* REG: message _StatCollMsg;
*/
CMessage__StatCollMsg::__register("_StatCollMsg", sizeof(_StatCollMsg),(CkPackFnPtr) _StatCollMsg::pack,(CkUnpackFnPtr) _StatCollMsg::unpack);

/* REG: message _CreateStatCollMsg;
*/
CMessage__CreateStatCollMsg::__register("_CreateStatCollMsg", sizeof(_CreateStatCollMsg),(CkPackFnPtr) _CreateStatCollMsg::pack,(CkUnpackFnPtr) _CreateStatCollMsg::unpack);

/* REG: chare AmrCoordinator: Chare{
AmrCoordinator(_DMsg* impl_msg);
AmrCoordinator(StartUpMsg* impl_msg);
void synchronise(_RedMsg* impl_msg);
void reportStats(_StatCollMsg* impl_msg);
};
*/
  CkIndex_AmrCoordinator::__register("AmrCoordinator", sizeof(AmrCoordinator));

/* REG: array Cell: ArrayElement{
void neighbor_data(NeighborMsg* impl_msg);
void refine(_RefineMsg* impl_msg);
void change_to_leaf(ChildInitMsg* impl_msg);
void refine_confirmed(_DMsg* impl_msg);
void resume(_DMsg* impl_msg);
void synchronise(_RedMsg* impl_msg);
void refineExec(_DMsg* impl_msg);
void checkRefine(_RefineChkMsg* impl_msg);
void goToAtSync(_DMsg* impl_msg);
Cell(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_Cell::__register("Cell", sizeof(Cell));

/* REG: array Cell1D: Cell{
Cell1D(_ArrInitMsg* impl_msg);
Cell1D(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_Cell1D::__register("Cell1D", sizeof(Cell1D));

/* REG: array Cell2D: Cell{
Cell2D(_ArrInitMsg* impl_msg);
Cell2D(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_Cell2D::__register("Cell2D", sizeof(Cell2D));

/* REG: array Cell3D: Cell{
Cell3D(_ArrInitMsg* impl_msg);
Cell3D(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_Cell3D::__register("Cell3D", sizeof(Cell3D));

/* REG: group StatCollector: IrrGroup{
StatCollector(_CreateStatCollMsg* impl_msg);
void sendStat(_DummyMsg* impl_msg);
};
*/
  CkIndex_StatCollector::__register("StatCollector", sizeof(StatCollector));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_AmrCoordinator::virtual_pup(PUP::er &p) {
    recursive_pup<AmrCoordinator>(dynamic_cast<AmrCoordinator*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_Cell::virtual_pup(PUP::er &p) {
    recursive_pup<Cell>(dynamic_cast<Cell*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_Cell1D::virtual_pup(PUP::er &p) {
    recursive_pup<Cell1D>(dynamic_cast<Cell1D*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_Cell2D::virtual_pup(PUP::er &p) {
    recursive_pup<Cell2D>(dynamic_cast<Cell2D*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_Cell3D::virtual_pup(PUP::er &p) {
    recursive_pup<Cell3D>(dynamic_cast<Cell3D*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_StatCollector::virtual_pup(PUP::er &p) {
    recursive_pup<StatCollector>(dynamic_cast<StatCollector*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
