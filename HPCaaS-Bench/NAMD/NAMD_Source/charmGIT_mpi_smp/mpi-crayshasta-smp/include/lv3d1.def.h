


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY

    struct Closure_LV3D_Array::LV3D_NewClient_1_closure : public SDAG::Closure {
            int clientID;


      LV3D_NewClient_1_closure() {
        init();
      }
      LV3D_NewClient_1_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return clientID;}
      void pup(PUP::er& __p) {
        __p | clientID;
        packClosure(__p);
      }
      virtual ~LV3D_NewClient_1_closure() {
      }
      PUPable_decl(SINGLE_ARG(LV3D_NewClient_1_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_LV3D_Array::LV3D_DoBalance_5_closure : public SDAG::Closure {
      

      LV3D_DoBalance_5_closure() {
        init();
      }
      LV3D_DoBalance_5_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~LV3D_DoBalance_5_closure() {
      }
      PUPable_decl(SINGLE_ARG(LV3D_DoBalance_5_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: message LV3D_RenderMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_LV3D_RenderMsg::operator new(size_t s){
  return LV3D_RenderMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_LV3D_RenderMsg::operator new(size_t s, int* sz){
  return LV3D_RenderMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_LV3D_RenderMsg::operator new(size_t s, int* sz,const int pb){
  return LV3D_RenderMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_LV3D_RenderMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return LV3D_RenderMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_LV3D_RenderMsg::operator new(size_t s, const int p) {
  return LV3D_RenderMsg::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_LV3D_RenderMsg::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return LV3D_RenderMsg::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_LV3D_RenderMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_LV3D_RenderMsg::CMessage_LV3D_RenderMsg() {
LV3D_RenderMsg *newmsg = (LV3D_RenderMsg *)this;
}
void CMessage_LV3D_RenderMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_LV3D_RenderMsg::pack(LV3D_RenderMsg *msg) {
  return (void *) msg;
}
LV3D_RenderMsg* CMessage_LV3D_RenderMsg::unpack(void* buf) {
  LV3D_RenderMsg *msg = (LV3D_RenderMsg *) buf;
  return msg;
}
int CMessage_LV3D_RenderMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int LV3D_Disable_Render_Prio;
 */
extern int LV3D_Disable_Render_Prio;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_LV3D_Disable_Render_Prio(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|LV3D_Disable_Render_Prio;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int LV3D_Verbosity;
 */
extern int LV3D_Verbosity;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_LV3D_Verbosity(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|LV3D_Verbosity;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: array LV3D_Array: ArrayElement{
void LV3D_NewClient(int clientID);
void LV3D_Viewpoint(LV3D_ViewpointMsg* impl_msg);
void LV3D_Render(LV3D_RenderMsg* impl_msg);
void LV3D_FlatRender(liveVizRequestMsg* impl_msg);
void LV3D_DoBalance();
LV3D_Array(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_LV3D_Array::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CProxySection_LV3D_Array::contribute(CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(sid, userData, fragSize);
}

void CProxySection_LV3D_Array::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, userData, fragSize);
}

template <typename T>
void CProxySection_LV3D_Array::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, userData, fragSize);
}

void CProxySection_LV3D_Array::contribute(CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(sid, cb, userData, fragSize);
}

void CProxySection_LV3D_Array::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, cb, userData, fragSize);
}

template <typename T>
void CProxySection_LV3D_Array::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, cb, userData, fragSize);
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: void LV3D_NewClient(int clientID);
 */
void CProxyElement_LV3D_Array::LV3D_NewClient(int clientID, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int clientID
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|clientID;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|clientID;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_LV3D_Array::idx_LV3D_NewClient_marshall1(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void LV3D_Viewpoint(LV3D_ViewpointMsg* impl_msg);
 */
void CProxyElement_LV3D_Array::LV3D_Viewpoint(LV3D_ViewpointMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_LV3D_Array::idx_LV3D_Viewpoint_LV3D_ViewpointMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void LV3D_Render(LV3D_RenderMsg* impl_msg);
 */
void CProxyElement_LV3D_Array::LV3D_Render(LV3D_RenderMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_LV3D_Array::idx_LV3D_Render_LV3D_RenderMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void LV3D_FlatRender(liveVizRequestMsg* impl_msg);
 */
void CProxyElement_LV3D_Array::LV3D_FlatRender(liveVizRequestMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_LV3D_Array::idx_LV3D_FlatRender_liveVizRequestMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void LV3D_DoBalance();
 */
void CProxyElement_LV3D_Array::LV3D_DoBalance(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_LV3D_Array::idx_LV3D_DoBalance_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: LV3D_Array(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void LV3D_NewClient(int clientID);
 */
void CProxy_LV3D_Array::LV3D_NewClient(int clientID, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int clientID
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|clientID;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|clientID;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_LV3D_Array::idx_LV3D_NewClient_marshall1(),0);
}

// Entry point registration function
int CkIndex_LV3D_Array::reg_LV3D_NewClient_marshall1() {
  int epidx = CkRegisterEp("LV3D_NewClient(int clientID)",
      reinterpret_cast<CkCallFnPtr>(_call_LV3D_NewClient_marshall1), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_LV3D_NewClient_marshall1);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_LV3D_NewClient_marshall1);

  return epidx;
}

void CkIndex_LV3D_Array::_call_LV3D_NewClient_marshall1(void* impl_msg, void* impl_obj_void)
{
  LV3D_Array* impl_obj = static_cast<LV3D_Array*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int clientID*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> clientID;
  implP|clientID;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->LV3D_NewClient(std::move(clientID.t));
}
int CkIndex_LV3D_Array::_callmarshall_LV3D_NewClient_marshall1(char* impl_buf, void* impl_obj_void) {
  LV3D_Array* impl_obj = static_cast<LV3D_Array*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int clientID*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> clientID;
  implP|clientID;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->LV3D_NewClient(std::move(clientID.t));
  return implP.size();
}
void CkIndex_LV3D_Array::_marshallmessagepup_LV3D_NewClient_marshall1(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int clientID*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> clientID;
  implP|clientID;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("clientID");
  implDestP|clientID;
}
PUPable_def(SINGLE_ARG(Closure_LV3D_Array::LV3D_NewClient_1_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void LV3D_Viewpoint(LV3D_ViewpointMsg* impl_msg);
 */
void CProxy_LV3D_Array::LV3D_Viewpoint(LV3D_ViewpointMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_LV3D_Array::idx_LV3D_Viewpoint_LV3D_ViewpointMsg(),0);
}

// Entry point registration function
int CkIndex_LV3D_Array::reg_LV3D_Viewpoint_LV3D_ViewpointMsg() {
  int epidx = CkRegisterEp("LV3D_Viewpoint(LV3D_ViewpointMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_LV3D_Viewpoint_LV3D_ViewpointMsg), CMessage_LV3D_ViewpointMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)LV3D_ViewpointMsg::ckDebugPup);
  return epidx;
}

void CkIndex_LV3D_Array::_call_LV3D_Viewpoint_LV3D_ViewpointMsg(void* impl_msg, void* impl_obj_void)
{
  LV3D_Array* impl_obj = static_cast<LV3D_Array*>(impl_obj_void);
  impl_obj->LV3D_Viewpoint((LV3D_ViewpointMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void LV3D_Render(LV3D_RenderMsg* impl_msg);
 */
void CProxy_LV3D_Array::LV3D_Render(LV3D_RenderMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_LV3D_Array::idx_LV3D_Render_LV3D_RenderMsg(),0);
}

// Entry point registration function
int CkIndex_LV3D_Array::reg_LV3D_Render_LV3D_RenderMsg() {
  int epidx = CkRegisterEp("LV3D_Render(LV3D_RenderMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_LV3D_Render_LV3D_RenderMsg), CMessage_LV3D_RenderMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)LV3D_RenderMsg::ckDebugPup);
  return epidx;
}

void CkIndex_LV3D_Array::_call_LV3D_Render_LV3D_RenderMsg(void* impl_msg, void* impl_obj_void)
{
  LV3D_Array* impl_obj = static_cast<LV3D_Array*>(impl_obj_void);
  impl_obj->LV3D_Render((LV3D_RenderMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void LV3D_FlatRender(liveVizRequestMsg* impl_msg);
 */
void CProxy_LV3D_Array::LV3D_FlatRender(liveVizRequestMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_LV3D_Array::idx_LV3D_FlatRender_liveVizRequestMsg(),0);
}

// Entry point registration function
int CkIndex_LV3D_Array::reg_LV3D_FlatRender_liveVizRequestMsg() {
  int epidx = CkRegisterEp("LV3D_FlatRender(liveVizRequestMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_LV3D_FlatRender_liveVizRequestMsg), CMessage_liveVizRequestMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)liveVizRequestMsg::ckDebugPup);
  return epidx;
}

void CkIndex_LV3D_Array::_call_LV3D_FlatRender_liveVizRequestMsg(void* impl_msg, void* impl_obj_void)
{
  LV3D_Array* impl_obj = static_cast<LV3D_Array*>(impl_obj_void);
  impl_obj->LV3D_FlatRender((liveVizRequestMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void LV3D_DoBalance();
 */
void CProxy_LV3D_Array::LV3D_DoBalance(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_LV3D_Array::idx_LV3D_DoBalance_void(),0);
}

// Entry point registration function
int CkIndex_LV3D_Array::reg_LV3D_DoBalance_void() {
  int epidx = CkRegisterEp("LV3D_DoBalance()",
      reinterpret_cast<CkCallFnPtr>(_call_LV3D_DoBalance_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_LV3D_Array::_call_LV3D_DoBalance_void(void* impl_msg, void* impl_obj_void)
{
  LV3D_Array* impl_obj = static_cast<LV3D_Array*>(impl_obj_void);
  impl_obj->LV3D_DoBalance();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_LV3D_Array::LV3D_DoBalance_5_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: LV3D_Array(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_LV3D_Array::reg_LV3D_Array_CkMigrateMessage() {
  int epidx = CkRegisterEp("LV3D_Array(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_LV3D_Array_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_LV3D_Array::_call_LV3D_Array_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  call_migration_constructor<LV3D_Array> c = impl_obj_void;
  c((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void LV3D_NewClient(int clientID);
 */
void CProxySection_LV3D_Array::LV3D_NewClient(int clientID, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int clientID
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|clientID;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|clientID;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_LV3D_Array::idx_LV3D_NewClient_marshall1(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void LV3D_Viewpoint(LV3D_ViewpointMsg* impl_msg);
 */
void CProxySection_LV3D_Array::LV3D_Viewpoint(LV3D_ViewpointMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_LV3D_Array::idx_LV3D_Viewpoint_LV3D_ViewpointMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void LV3D_Render(LV3D_RenderMsg* impl_msg);
 */
void CProxySection_LV3D_Array::LV3D_Render(LV3D_RenderMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_LV3D_Array::idx_LV3D_Render_LV3D_RenderMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void LV3D_FlatRender(liveVizRequestMsg* impl_msg);
 */
void CProxySection_LV3D_Array::LV3D_FlatRender(liveVizRequestMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_LV3D_Array::idx_LV3D_FlatRender_liveVizRequestMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void LV3D_DoBalance();
 */
void CProxySection_LV3D_Array::LV3D_DoBalance(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_LV3D_Array::idx_LV3D_DoBalance_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: LV3D_Array(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_LV3D_Array::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeArray);
  CkRegisterArrayDimensions(__idx, -1);
  CkRegisterBase(__idx, CkIndex_ArrayElement::__idx);
  // REG: void LV3D_NewClient(int clientID);
  idx_LV3D_NewClient_marshall1();

  // REG: void LV3D_Viewpoint(LV3D_ViewpointMsg* impl_msg);
  idx_LV3D_Viewpoint_LV3D_ViewpointMsg();

  // REG: void LV3D_Render(LV3D_RenderMsg* impl_msg);
  idx_LV3D_Render_LV3D_RenderMsg();

  // REG: void LV3D_FlatRender(liveVizRequestMsg* impl_msg);
  idx_LV3D_FlatRender_liveVizRequestMsg();

  // REG: void LV3D_DoBalance();
  idx_LV3D_DoBalance_void();

  // REG: LV3D_Array(CkMigrateMessage* impl_msg);
  idx_LV3D_Array_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_LV3D_Array_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group LV3D1_Map: IrrGroup{
LV3D1_Map();
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_LV3D1_Map::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: LV3D1_Map();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: LV3D1_Map();
 */
CkGroupID CProxy_LV3D1_Map::ckNew(const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_LV3D1_Map::__idx, CkIndex_LV3D1_Map::idx_LV3D1_Map_void(), impl_msg);
  return gId;
}

// Entry point registration function
int CkIndex_LV3D1_Map::reg_LV3D1_Map_void() {
  int epidx = CkRegisterEp("LV3D1_Map()",
      reinterpret_cast<CkCallFnPtr>(_call_LV3D1_Map_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_LV3D1_Map::_call_LV3D1_Map_void(void* impl_msg, void* impl_obj_void)
{
  LV3D1_Map* impl_obj = static_cast<LV3D1_Map*>(impl_obj_void);
  new (impl_obj_void) LV3D1_Map();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: LV3D1_Map();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_LV3D1_Map::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,LV3D1_Map::isIrreducible());
  // REG: LV3D1_Map();
  idx_LV3D1_Map_void();
  CkRegisterDefaultCtor(__idx, idx_LV3D1_Map_void());

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerlv3d1(void)
{
  static int _done = 0; if(_done) return; _done = 1;
/* REG: message LV3D_RenderMsg;
*/
CMessage_LV3D_RenderMsg::__register("LV3D_RenderMsg", sizeof(LV3D_RenderMsg),(CkPackFnPtr) LV3D_RenderMsg::pack,(CkUnpackFnPtr) LV3D_RenderMsg::unpack);

  CkRegisterReadonly("LV3D_Disable_Render_Prio","int",sizeof(LV3D_Disable_Render_Prio),(void *) &LV3D_Disable_Render_Prio,__xlater_roPup_LV3D_Disable_Render_Prio);

  CkRegisterReadonly("LV3D_Verbosity","int",sizeof(LV3D_Verbosity),(void *) &LV3D_Verbosity,__xlater_roPup_LV3D_Verbosity);

/* REG: array LV3D_Array: ArrayElement{
void LV3D_NewClient(int clientID);
void LV3D_Viewpoint(LV3D_ViewpointMsg* impl_msg);
void LV3D_Render(LV3D_RenderMsg* impl_msg);
void LV3D_FlatRender(liveVizRequestMsg* impl_msg);
void LV3D_DoBalance();
LV3D_Array(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_LV3D_Array::__register("LV3D_Array", sizeof(LV3D_Array));

/* REG: group LV3D1_Map: IrrGroup{
LV3D1_Map();
};
*/
  CkIndex_LV3D1_Map::__register("LV3D1_Map", sizeof(LV3D1_Map));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_LV3D_Array::virtual_pup(PUP::er &p) {
    recursive_pup<LV3D_Array>(dynamic_cast<LV3D_Array*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_LV3D1_Map::virtual_pup(PUP::er &p) {
    recursive_pup<LV3D1_Map>(dynamic_cast<LV3D1_Map*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
