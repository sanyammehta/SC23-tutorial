
/* DEFS: message CkCheckpointStatusMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_CkCheckpointStatusMsg::operator new(size_t s){
  return CkCheckpointStatusMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_CkCheckpointStatusMsg::operator new(size_t s, int* sz){
  return CkCheckpointStatusMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_CkCheckpointStatusMsg::operator new(size_t s, int* sz,const int pb){
  return CkCheckpointStatusMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_CkCheckpointStatusMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return CkCheckpointStatusMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_CkCheckpointStatusMsg::operator new(size_t s, const int p) {
  return CkCheckpointStatusMsg::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_CkCheckpointStatusMsg::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return CkCheckpointStatusMsg::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_CkCheckpointStatusMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_CkCheckpointStatusMsg::CMessage_CkCheckpointStatusMsg() {
CkCheckpointStatusMsg *newmsg = (CkCheckpointStatusMsg *)this;
}
void CMessage_CkCheckpointStatusMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_CkCheckpointStatusMsg::pack(CkCheckpointStatusMsg *msg) {
  return (void *) msg;
}
CkCheckpointStatusMsg* CMessage_CkCheckpointStatusMsg::unpack(void* buf) {
  CkCheckpointStatusMsg *msg = (CkCheckpointStatusMsg *) buf;
  return msg;
}
int CMessage_CkCheckpointStatusMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerCkCheckpointStatus(void)
{
  static int _done = 0; if(_done) return; _done = 1;
/* REG: message CkCheckpointStatusMsg;
*/
CMessage_CkCheckpointStatusMsg::__register("CkCheckpointStatusMsg", sizeof(CkCheckpointStatusMsg),(CkPackFnPtr) CkCheckpointStatusMsg::pack,(CkUnpackFnPtr) CkCheckpointStatusMsg::unpack);

}
#endif /* CK_TEMPLATES_ONLY */
