namespace Ck {
namespace IO {



} // namespace IO

} // namespace Ck


namespace Ck {
namespace IO {
/* DEFS: message FileReadyMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_FileReadyMsg::operator new(size_t s){
  return FileReadyMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_FileReadyMsg::operator new(size_t s, int* sz){
  return FileReadyMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_FileReadyMsg::operator new(size_t s, int* sz,const int pb){
  return FileReadyMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_FileReadyMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return FileReadyMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_FileReadyMsg::operator new(size_t s, const int p) {
  return FileReadyMsg::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_FileReadyMsg::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return FileReadyMsg::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_FileReadyMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_FileReadyMsg::CMessage_FileReadyMsg() {
FileReadyMsg *newmsg = (FileReadyMsg *)this;
}
void CMessage_FileReadyMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_FileReadyMsg::pack(FileReadyMsg *msg) {
  return (void *) msg;
}
FileReadyMsg* CMessage_FileReadyMsg::unpack(void* buf) {
  FileReadyMsg *msg = (FileReadyMsg *) buf;
  return msg;
}
int CMessage_FileReadyMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message SessionReadyMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_SessionReadyMsg::operator new(size_t s){
  return SessionReadyMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_SessionReadyMsg::operator new(size_t s, int* sz){
  return SessionReadyMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_SessionReadyMsg::operator new(size_t s, int* sz,const int pb){
  return SessionReadyMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_SessionReadyMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return SessionReadyMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_SessionReadyMsg::operator new(size_t s, const int p) {
  return SessionReadyMsg::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_SessionReadyMsg::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return SessionReadyMsg::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_SessionReadyMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_SessionReadyMsg::CMessage_SessionReadyMsg() {
SessionReadyMsg *newmsg = (SessionReadyMsg *)this;
}
void CMessage_SessionReadyMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_SessionReadyMsg::pack(SessionReadyMsg *msg) {
  return (void *) msg;
}
SessionReadyMsg* CMessage_SessionReadyMsg::unpack(void* buf) {
  SessionReadyMsg *msg = (SessionReadyMsg *) buf;
  return msg;
}
int CMessage_SessionReadyMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message SessionCommitMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_SessionCommitMsg::operator new(size_t s){
  return SessionCommitMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_SessionCommitMsg::operator new(size_t s, int* sz){
  return SessionCommitMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_SessionCommitMsg::operator new(size_t s, int* sz,const int pb){
  return SessionCommitMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_SessionCommitMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return SessionCommitMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_SessionCommitMsg::operator new(size_t s, const int p) {
  return SessionCommitMsg::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_SessionCommitMsg::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return SessionCommitMsg::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_SessionCommitMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_SessionCommitMsg::CMessage_SessionCommitMsg() {
SessionCommitMsg *newmsg = (SessionCommitMsg *)this;
}
void CMessage_SessionCommitMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_SessionCommitMsg::pack(SessionCommitMsg *msg) {
  return (void *) msg;
}
SessionCommitMsg* CMessage_SessionCommitMsg::unpack(void* buf) {
  SessionCommitMsg *msg = (SessionCommitMsg *) buf;
  return msg;
}
int CMessage_SessionCommitMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

} // namespace IO

} // namespace Ck


#ifndef CK_TEMPLATES_ONLY
void _registerCkIO(void)
{
  static int _done = 0; if(_done) return; _done = 1;
using namespace Ck;
using namespace IO;
/* REG: message FileReadyMsg;
*/
CMessage_FileReadyMsg::__register("FileReadyMsg", sizeof(FileReadyMsg),(CkPackFnPtr) FileReadyMsg::pack,(CkUnpackFnPtr) FileReadyMsg::unpack);

/* REG: message SessionReadyMsg;
*/
CMessage_SessionReadyMsg::__register("SessionReadyMsg", sizeof(SessionReadyMsg),(CkPackFnPtr) SessionReadyMsg::pack,(CkUnpackFnPtr) SessionReadyMsg::unpack);

/* REG: message SessionCommitMsg;
*/
CMessage_SessionCommitMsg::__register("SessionCommitMsg", sizeof(SessionCommitMsg),(CkPackFnPtr) SessionCommitMsg::pack,(CkUnpackFnPtr) SessionCommitMsg::unpack);



  _registerInitCall(_registerCkIO_impl,1);

}
#endif /* CK_TEMPLATES_ONLY */
