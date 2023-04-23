




/* DEFS: message LBStatsMsg_1{
int pe_ids[];
float bgloads[];
float speeds[];
unsigned int obj_start[];
float oloads[];
unsigned int order[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_LBStatsMsg_1::operator new(size_t s){
  return LBStatsMsg_1::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_LBStatsMsg_1::operator new(size_t s, int* sz){
  return LBStatsMsg_1::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_LBStatsMsg_1::operator new(size_t s, int* sz,const int pb){
  return LBStatsMsg_1::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_LBStatsMsg_1::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return LBStatsMsg_1::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_LBStatsMsg_1::operator new(size_t s, int sz0, int sz1, int sz2, int sz3, int sz4, int sz5) {
  int sizes[6];
  sizes[0] = sz0;
  sizes[1] = sz1;
  sizes[2] = sz2;
  sizes[3] = sz3;
  sizes[4] = sz4;
  sizes[5] = sz5;
  return LBStatsMsg_1::alloc(__idx, s, sizes, 0, GroupDepNum{});
}
void *CMessage_LBStatsMsg_1::operator new(size_t s, int sz0, int sz1, int sz2, int sz3, int sz4, int sz5, const int p) {
  int sizes[6];
  sizes[0] = sz0;
  sizes[1] = sz1;
  sizes[2] = sz2;
  sizes[3] = sz3;
  sizes[4] = sz4;
  sizes[5] = sz5;
  return LBStatsMsg_1::alloc(__idx, s, sizes, p, GroupDepNum{});
}
void *CMessage_LBStatsMsg_1::operator new(size_t s, int sz0, int sz1, int sz2, int sz3, int sz4, int sz5, const int p, const GroupDepNum groupDepNum) {
  int sizes[6];
  sizes[0] = sz0;
  sizes[1] = sz1;
  sizes[2] = sz2;
  sizes[3] = sz3;
  sizes[4] = sz4;
  sizes[5] = sz5;
  return LBStatsMsg_1::alloc(__idx, s, sizes, p, groupDepNum);
}
void* CMessage_LBStatsMsg_1::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN_DEFAULT(sizeof(int)*sizes[0]);
  if(sizes==0)
    CkpvAccess(_offsets)[2] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[2] = CkpvAccess(_offsets)[1] + ALIGN_DEFAULT(sizeof(float)*sizes[1]);
  if(sizes==0)
    CkpvAccess(_offsets)[3] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[3] = CkpvAccess(_offsets)[2] + ALIGN_DEFAULT(sizeof(float)*sizes[2]);
  if(sizes==0)
    CkpvAccess(_offsets)[4] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[4] = CkpvAccess(_offsets)[3] + ALIGN_DEFAULT(sizeof(unsigned int)*sizes[3]);
  if(sizes==0)
    CkpvAccess(_offsets)[5] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[5] = CkpvAccess(_offsets)[4] + ALIGN_DEFAULT(sizeof(float)*sizes[4]);
  if(sizes==0)
    CkpvAccess(_offsets)[6] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[6] = CkpvAccess(_offsets)[5] + ALIGN_DEFAULT(sizeof(unsigned int)*sizes[5]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[6], pb, groupDepNum);
}
CMessage_LBStatsMsg_1::CMessage_LBStatsMsg_1() {
LBStatsMsg_1 *newmsg = (LBStatsMsg_1 *)this;
  newmsg->pe_ids = (int *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
  newmsg->bgloads = (float *) ((char *)newmsg + CkpvAccess(_offsets)[1]);
  newmsg->speeds = (float *) ((char *)newmsg + CkpvAccess(_offsets)[2]);
  newmsg->obj_start = (unsigned int *) ((char *)newmsg + CkpvAccess(_offsets)[3]);
  newmsg->oloads = (float *) ((char *)newmsg + CkpvAccess(_offsets)[4]);
  newmsg->order = (unsigned int *) ((char *)newmsg + CkpvAccess(_offsets)[5]);
}
void CMessage_LBStatsMsg_1::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_LBStatsMsg_1::pack(LBStatsMsg_1 *msg) {
  msg->pe_ids = (int *) ((char *)msg->pe_ids - (char *)msg);
  msg->bgloads = (float *) ((char *)msg->bgloads - (char *)msg);
  msg->speeds = (float *) ((char *)msg->speeds - (char *)msg);
  msg->obj_start = (unsigned int *) ((char *)msg->obj_start - (char *)msg);
  msg->oloads = (float *) ((char *)msg->oloads - (char *)msg);
  msg->order = (unsigned int *) ((char *)msg->order - (char *)msg);
  return (void *) msg;
}
LBStatsMsg_1* CMessage_LBStatsMsg_1::unpack(void* buf) {
  LBStatsMsg_1 *msg = (LBStatsMsg_1 *) buf;
  msg->pe_ids = (int *) ((size_t)msg->pe_ids + (char *)msg);
  msg->bgloads = (float *) ((size_t)msg->bgloads + (char *)msg);
  msg->speeds = (float *) ((size_t)msg->speeds + (char *)msg);
  msg->obj_start = (unsigned int *) ((size_t)msg->obj_start + (char *)msg);
  msg->oloads = (float *) ((size_t)msg->oloads + (char *)msg);
  msg->order = (unsigned int *) ((size_t)msg->order + (char *)msg);
  return msg;
}
int CMessage_LBStatsMsg_1::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message LLBMigrateMsg{
int num_incoming[];
int obj_start[];
int to_pes[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_LLBMigrateMsg::operator new(size_t s){
  return LLBMigrateMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_LLBMigrateMsg::operator new(size_t s, int* sz){
  return LLBMigrateMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_LLBMigrateMsg::operator new(size_t s, int* sz,const int pb){
  return LLBMigrateMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_LLBMigrateMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return LLBMigrateMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_LLBMigrateMsg::operator new(size_t s, int sz0, int sz1, int sz2) {
  int sizes[3];
  sizes[0] = sz0;
  sizes[1] = sz1;
  sizes[2] = sz2;
  return LLBMigrateMsg::alloc(__idx, s, sizes, 0, GroupDepNum{});
}
void *CMessage_LLBMigrateMsg::operator new(size_t s, int sz0, int sz1, int sz2, const int p) {
  int sizes[3];
  sizes[0] = sz0;
  sizes[1] = sz1;
  sizes[2] = sz2;
  return LLBMigrateMsg::alloc(__idx, s, sizes, p, GroupDepNum{});
}
void *CMessage_LLBMigrateMsg::operator new(size_t s, int sz0, int sz1, int sz2, const int p, const GroupDepNum groupDepNum) {
  int sizes[3];
  sizes[0] = sz0;
  sizes[1] = sz1;
  sizes[2] = sz2;
  return LLBMigrateMsg::alloc(__idx, s, sizes, p, groupDepNum);
}
void* CMessage_LLBMigrateMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN_DEFAULT(sizeof(int)*sizes[0]);
  if(sizes==0)
    CkpvAccess(_offsets)[2] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[2] = CkpvAccess(_offsets)[1] + ALIGN_DEFAULT(sizeof(int)*sizes[1]);
  if(sizes==0)
    CkpvAccess(_offsets)[3] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[3] = CkpvAccess(_offsets)[2] + ALIGN_DEFAULT(sizeof(int)*sizes[2]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[3], pb, groupDepNum);
}
CMessage_LLBMigrateMsg::CMessage_LLBMigrateMsg() {
LLBMigrateMsg *newmsg = (LLBMigrateMsg *)this;
  newmsg->num_incoming = (int *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
  newmsg->obj_start = (int *) ((char *)newmsg + CkpvAccess(_offsets)[1]);
  newmsg->to_pes = (int *) ((char *)newmsg + CkpvAccess(_offsets)[2]);
}
void CMessage_LLBMigrateMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_LLBMigrateMsg::pack(LLBMigrateMsg *msg) {
  msg->num_incoming = (int *) ((char *)msg->num_incoming - (char *)msg);
  msg->obj_start = (int *) ((char *)msg->obj_start - (char *)msg);
  msg->to_pes = (int *) ((char *)msg->to_pes - (char *)msg);
  return (void *) msg;
}
LLBMigrateMsg* CMessage_LLBMigrateMsg::unpack(void* buf) {
  LLBMigrateMsg *msg = (LLBMigrateMsg *) buf;
  msg->num_incoming = (int *) ((size_t)msg->num_incoming + (char *)msg);
  msg->obj_start = (int *) ((size_t)msg->obj_start + (char *)msg);
  msg->to_pes = (int *) ((size_t)msg->to_pes + (char *)msg);
  return msg;
}
int CMessage_LLBMigrateMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message SubtreeLoadMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_SubtreeLoadMsg::operator new(size_t s){
  return SubtreeLoadMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_SubtreeLoadMsg::operator new(size_t s, int* sz){
  return SubtreeLoadMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_SubtreeLoadMsg::operator new(size_t s, int* sz,const int pb){
  return SubtreeLoadMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_SubtreeLoadMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return SubtreeLoadMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_SubtreeLoadMsg::operator new(size_t s, const int p) {
  return SubtreeLoadMsg::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_SubtreeLoadMsg::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return SubtreeLoadMsg::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_SubtreeLoadMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_SubtreeLoadMsg::CMessage_SubtreeLoadMsg() {
SubtreeLoadMsg *newmsg = (SubtreeLoadMsg *)this;
}
void CMessage_SubtreeLoadMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_SubtreeLoadMsg::pack(SubtreeLoadMsg *msg) {
  return (void *) msg;
}
SubtreeLoadMsg* CMessage_SubtreeLoadMsg::unpack(void* buf) {
  SubtreeLoadMsg *msg = (SubtreeLoadMsg *) buf;
  return msg;
}
int CMessage_SubtreeLoadMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message SubtreeMigrateDecisionMsg{
int src_groups[];
int dest_groups[];
int loads[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_SubtreeMigrateDecisionMsg::operator new(size_t s){
  return SubtreeMigrateDecisionMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_SubtreeMigrateDecisionMsg::operator new(size_t s, int* sz){
  return SubtreeMigrateDecisionMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_SubtreeMigrateDecisionMsg::operator new(size_t s, int* sz,const int pb){
  return SubtreeMigrateDecisionMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_SubtreeMigrateDecisionMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return SubtreeMigrateDecisionMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_SubtreeMigrateDecisionMsg::operator new(size_t s, int sz0, int sz1, int sz2) {
  int sizes[3];
  sizes[0] = sz0;
  sizes[1] = sz1;
  sizes[2] = sz2;
  return SubtreeMigrateDecisionMsg::alloc(__idx, s, sizes, 0, GroupDepNum{});
}
void *CMessage_SubtreeMigrateDecisionMsg::operator new(size_t s, int sz0, int sz1, int sz2, const int p) {
  int sizes[3];
  sizes[0] = sz0;
  sizes[1] = sz1;
  sizes[2] = sz2;
  return SubtreeMigrateDecisionMsg::alloc(__idx, s, sizes, p, GroupDepNum{});
}
void *CMessage_SubtreeMigrateDecisionMsg::operator new(size_t s, int sz0, int sz1, int sz2, const int p, const GroupDepNum groupDepNum) {
  int sizes[3];
  sizes[0] = sz0;
  sizes[1] = sz1;
  sizes[2] = sz2;
  return SubtreeMigrateDecisionMsg::alloc(__idx, s, sizes, p, groupDepNum);
}
void* CMessage_SubtreeMigrateDecisionMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN_DEFAULT(sizeof(int)*sizes[0]);
  if(sizes==0)
    CkpvAccess(_offsets)[2] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[2] = CkpvAccess(_offsets)[1] + ALIGN_DEFAULT(sizeof(int)*sizes[1]);
  if(sizes==0)
    CkpvAccess(_offsets)[3] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[3] = CkpvAccess(_offsets)[2] + ALIGN_DEFAULT(sizeof(int)*sizes[2]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[3], pb, groupDepNum);
}
CMessage_SubtreeMigrateDecisionMsg::CMessage_SubtreeMigrateDecisionMsg() {
SubtreeMigrateDecisionMsg *newmsg = (SubtreeMigrateDecisionMsg *)this;
  newmsg->src_groups = (int *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
  newmsg->dest_groups = (int *) ((char *)newmsg + CkpvAccess(_offsets)[1]);
  newmsg->loads = (int *) ((char *)newmsg + CkpvAccess(_offsets)[2]);
}
void CMessage_SubtreeMigrateDecisionMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_SubtreeMigrateDecisionMsg::pack(SubtreeMigrateDecisionMsg *msg) {
  msg->src_groups = (int *) ((char *)msg->src_groups - (char *)msg);
  msg->dest_groups = (int *) ((char *)msg->dest_groups - (char *)msg);
  msg->loads = (int *) ((char *)msg->loads - (char *)msg);
  return (void *) msg;
}
SubtreeMigrateDecisionMsg* CMessage_SubtreeMigrateDecisionMsg::unpack(void* buf) {
  SubtreeMigrateDecisionMsg *msg = (SubtreeMigrateDecisionMsg *) buf;
  msg->src_groups = (int *) ((size_t)msg->src_groups + (char *)msg);
  msg->dest_groups = (int *) ((size_t)msg->dest_groups + (char *)msg);
  msg->loads = (int *) ((size_t)msg->loads + (char *)msg);
  return msg;
}
int CMessage_SubtreeMigrateDecisionMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message TokenListMsg{
int local_ids[];
int oldPes[];
float loads[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_TokenListMsg::operator new(size_t s){
  return TokenListMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_TokenListMsg::operator new(size_t s, int* sz){
  return TokenListMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_TokenListMsg::operator new(size_t s, int* sz,const int pb){
  return TokenListMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_TokenListMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return TokenListMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_TokenListMsg::operator new(size_t s, int sz0, int sz1, int sz2) {
  int sizes[3];
  sizes[0] = sz0;
  sizes[1] = sz1;
  sizes[2] = sz2;
  return TokenListMsg::alloc(__idx, s, sizes, 0, GroupDepNum{});
}
void *CMessage_TokenListMsg::operator new(size_t s, int sz0, int sz1, int sz2, const int p) {
  int sizes[3];
  sizes[0] = sz0;
  sizes[1] = sz1;
  sizes[2] = sz2;
  return TokenListMsg::alloc(__idx, s, sizes, p, GroupDepNum{});
}
void *CMessage_TokenListMsg::operator new(size_t s, int sz0, int sz1, int sz2, const int p, const GroupDepNum groupDepNum) {
  int sizes[3];
  sizes[0] = sz0;
  sizes[1] = sz1;
  sizes[2] = sz2;
  return TokenListMsg::alloc(__idx, s, sizes, p, groupDepNum);
}
void* CMessage_TokenListMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN_DEFAULT(sizeof(int)*sizes[0]);
  if(sizes==0)
    CkpvAccess(_offsets)[2] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[2] = CkpvAccess(_offsets)[1] + ALIGN_DEFAULT(sizeof(int)*sizes[1]);
  if(sizes==0)
    CkpvAccess(_offsets)[3] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[3] = CkpvAccess(_offsets)[2] + ALIGN_DEFAULT(sizeof(float)*sizes[2]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[3], pb, groupDepNum);
}
CMessage_TokenListMsg::CMessage_TokenListMsg() {
TokenListMsg *newmsg = (TokenListMsg *)this;
  newmsg->local_ids = (int *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
  newmsg->oldPes = (int *) ((char *)newmsg + CkpvAccess(_offsets)[1]);
  newmsg->loads = (float *) ((char *)newmsg + CkpvAccess(_offsets)[2]);
}
void CMessage_TokenListMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_TokenListMsg::pack(TokenListMsg *msg) {
  msg->local_ids = (int *) ((char *)msg->local_ids - (char *)msg);
  msg->oldPes = (int *) ((char *)msg->oldPes - (char *)msg);
  msg->loads = (float *) ((char *)msg->loads - (char *)msg);
  return (void *) msg;
}
TokenListMsg* CMessage_TokenListMsg::unpack(void* buf) {
  TokenListMsg *msg = (TokenListMsg *) buf;
  msg->local_ids = (int *) ((size_t)msg->local_ids + (char *)msg);
  msg->oldPes = (int *) ((size_t)msg->oldPes + (char *)msg);
  msg->loads = (float *) ((size_t)msg->loads + (char *)msg);
  return msg;
}
int CMessage_TokenListMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerTreeLevel(void)
{
  static int _done = 0; if(_done) return; _done = 1;
/* REG: message LBStatsMsg_1{
int pe_ids[];
float bgloads[];
float speeds[];
unsigned int obj_start[];
float oloads[];
unsigned int order[];
}
;
*/
CMessage_LBStatsMsg_1::__register("LBStatsMsg_1", sizeof(LBStatsMsg_1),(CkPackFnPtr) LBStatsMsg_1::pack,(CkUnpackFnPtr) LBStatsMsg_1::unpack);

/* REG: message LLBMigrateMsg{
int num_incoming[];
int obj_start[];
int to_pes[];
}
;
*/
CMessage_LLBMigrateMsg::__register("LLBMigrateMsg", sizeof(LLBMigrateMsg),(CkPackFnPtr) LLBMigrateMsg::pack,(CkUnpackFnPtr) LLBMigrateMsg::unpack);

/* REG: message SubtreeLoadMsg;
*/
CMessage_SubtreeLoadMsg::__register("SubtreeLoadMsg", sizeof(SubtreeLoadMsg),(CkPackFnPtr) SubtreeLoadMsg::pack,(CkUnpackFnPtr) SubtreeLoadMsg::unpack);

/* REG: message SubtreeMigrateDecisionMsg{
int src_groups[];
int dest_groups[];
int loads[];
}
;
*/
CMessage_SubtreeMigrateDecisionMsg::__register("SubtreeMigrateDecisionMsg", sizeof(SubtreeMigrateDecisionMsg),(CkPackFnPtr) SubtreeMigrateDecisionMsg::pack,(CkUnpackFnPtr) SubtreeMigrateDecisionMsg::unpack);

/* REG: message TokenListMsg{
int local_ids[];
int oldPes[];
float loads[];
}
;
*/
CMessage_TokenListMsg::__register("TokenListMsg", sizeof(TokenListMsg),(CkPackFnPtr) TokenListMsg::pack,(CkUnpackFnPtr) TokenListMsg::unpack);

}
#endif /* CK_TEMPLATES_ONLY */
