

/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */




/* DEFS: group ScotchRefineLB: CentralLB{
void ScotchRefineLB(const CkLBOptions &impl_noname_0);
ScotchRefineLB(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_ScotchRefineLB::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ScotchRefineLB(const CkLBOptions &impl_noname_0);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ScotchRefineLB(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ScotchRefineLB(const CkLBOptions &impl_noname_0);
 */
CkGroupID CProxy_ScotchRefineLB::ckNew(const CkLBOptions &impl_noname_0, const CkEntryOptions *impl_e_opts)
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
  CkGroupID gId = CkCreateGroup(CkIndex_ScotchRefineLB::__idx, CkIndex_ScotchRefineLB::idx_ScotchRefineLB_marshall1(), impl_msg);
  return gId;
}
  CProxy_ScotchRefineLB::CProxy_ScotchRefineLB(const CkLBOptions &impl_noname_0, const CkEntryOptions *impl_e_opts)
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
  ckSetGroupID(CkCreateGroup(CkIndex_ScotchRefineLB::__idx, CkIndex_ScotchRefineLB::idx_ScotchRefineLB_marshall1(), impl_msg));
}

// Entry point registration function
int CkIndex_ScotchRefineLB::reg_ScotchRefineLB_marshall1() {
  int epidx = CkRegisterEp("ScotchRefineLB(const CkLBOptions &impl_noname_0)",
      reinterpret_cast<CkCallFnPtr>(_call_ScotchRefineLB_marshall1), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_ScotchRefineLB_marshall1);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_ScotchRefineLB_marshall1);

  return epidx;
}

void CkIndex_ScotchRefineLB::_call_ScotchRefineLB_marshall1(void* impl_msg, void* impl_obj_void)
{
  ScotchRefineLB* impl_obj = static_cast<ScotchRefineLB*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CkLBOptions &impl_noname_0*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkLBOptions> impl_noname_0;
  implP|impl_noname_0;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) ScotchRefineLB(std::move(impl_noname_0.t));
}
int CkIndex_ScotchRefineLB::_callmarshall_ScotchRefineLB_marshall1(char* impl_buf, void* impl_obj_void) {
  ScotchRefineLB* impl_obj = static_cast<ScotchRefineLB*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const CkLBOptions &impl_noname_0*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkLBOptions> impl_noname_0;
  implP|impl_noname_0;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) ScotchRefineLB(std::move(impl_noname_0.t));
  return implP.size();
}
void CkIndex_ScotchRefineLB::_marshallmessagepup_ScotchRefineLB_marshall1(PUP::er &implDestP,void *impl_msg) {
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
/* DEFS: ScotchRefineLB(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_ScotchRefineLB::reg_ScotchRefineLB_CkMigrateMessage() {
  int epidx = CkRegisterEp("ScotchRefineLB(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_ScotchRefineLB_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_ScotchRefineLB::_call_ScotchRefineLB_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  new (impl_obj_void) ScotchRefineLB((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ScotchRefineLB(const CkLBOptions &impl_noname_0);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ScotchRefineLB(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_ScotchRefineLB::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_CentralLB::__idx);
   CkRegisterGroupIrr(__idx,ScotchRefineLB::isIrreducible());
  // REG: void ScotchRefineLB(const CkLBOptions &impl_noname_0);
  idx_ScotchRefineLB_marshall1();

  // REG: ScotchRefineLB(CkMigrateMessage* impl_msg);
  idx_ScotchRefineLB_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_ScotchRefineLB_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerScotchRefineLB(void)
{
  static int _done = 0; if(_done) return; _done = 1;
  _registerCentralLB();

  _registerInitCall(lbinit,1);

/* REG: group ScotchRefineLB: CentralLB{
void ScotchRefineLB(const CkLBOptions &impl_noname_0);
ScotchRefineLB(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_ScotchRefineLB::__register("ScotchRefineLB", sizeof(ScotchRefineLB));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_ScotchRefineLB::virtual_pup(PUP::er &p) {
    recursive_pup<ScotchRefineLB>(dynamic_cast<ScotchRefineLB*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
