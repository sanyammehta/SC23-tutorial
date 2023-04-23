


/* DEFS: message eventMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_eventMsg::operator new(size_t s){
  return eventMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_eventMsg::operator new(size_t s, int* sz){
  return eventMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_eventMsg::operator new(size_t s, int* sz,const int pb){
  return eventMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_eventMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return eventMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_eventMsg::operator new(size_t s, const int p) {
  return eventMsg::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_eventMsg::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return eventMsg::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_eventMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_eventMsg::CMessage_eventMsg() {
eventMsg *newmsg = (eventMsg *)this;
}
void CMessage_eventMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_eventMsg::pack(eventMsg *msg) {
  return (void *) msg;
}
eventMsg* CMessage_eventMsg::unpack(void* buf) {
  eventMsg *msg = (eventMsg *) buf;
  return msg;
}
int CMessage_eventMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message cancelMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_cancelMsg::operator new(size_t s){
  return cancelMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_cancelMsg::operator new(size_t s, int* sz){
  return cancelMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_cancelMsg::operator new(size_t s, int* sz,const int pb){
  return cancelMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_cancelMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return cancelMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_cancelMsg::operator new(size_t s, const int p) {
  return cancelMsg::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_cancelMsg::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return cancelMsg::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_cancelMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_cancelMsg::CMessage_cancelMsg() {
cancelMsg *newmsg = (cancelMsg *)this;
}
void CMessage_cancelMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_cancelMsg::pack(cancelMsg *msg) {
  return (void *) msg;
}
cancelMsg* CMessage_cancelMsg::unpack(void* buf) {
  cancelMsg *msg = (cancelMsg *) buf;
  return msg;
}
int CMessage_cancelMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message prioMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_prioMsg::operator new(size_t s){
  return prioMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_prioMsg::operator new(size_t s, int* sz){
  return prioMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_prioMsg::operator new(size_t s, int* sz,const int pb){
  return prioMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_prioMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return prioMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_prioMsg::operator new(size_t s, const int p) {
  return prioMsg::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_prioMsg::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return prioMsg::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_prioMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_prioMsg::CMessage_prioMsg() {
prioMsg *newmsg = (prioMsg *)this;
}
void CMessage_prioMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_prioMsg::pack(prioMsg *msg) {
  return (void *) msg;
}
prioMsg* CMessage_prioMsg::unpack(void* buf) {
  prioMsg *msg = (prioMsg *) buf;
  return msg;
}
int CMessage_prioMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerposeMsgs(void)
{
  static int _done = 0; if(_done) return; _done = 1;
/* REG: message eventMsg;
*/
CMessage_eventMsg::__register("eventMsg", sizeof(eventMsg),(CkPackFnPtr) eventMsg::pack,(CkUnpackFnPtr) eventMsg::unpack);

/* REG: message cancelMsg;
*/
CMessage_cancelMsg::__register("cancelMsg", sizeof(cancelMsg),(CkPackFnPtr) cancelMsg::pack,(CkUnpackFnPtr) cancelMsg::unpack);

/* REG: message prioMsg;
*/
CMessage_prioMsg::__register("prioMsg", sizeof(prioMsg),(CkPackFnPtr) prioMsg::pack,(CkUnpackFnPtr) prioMsg::unpack);

}
#endif /* CK_TEMPLATES_ONLY */
