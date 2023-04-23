/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */




/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: mainchare TraceControlPointsInit: Chare{
TraceControlPointsInit(CkArgMsg* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_TraceControlPointsInit::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: TraceControlPointsInit(CkArgMsg* impl_msg);
 */
CkChareID CProxy_TraceControlPointsInit::ckNew(CkArgMsg* impl_msg, int impl_onPE)
{
  CkChareID impl_ret;
  CkCreateChare(CkIndex_TraceControlPointsInit::__idx, CkIndex_TraceControlPointsInit::idx_TraceControlPointsInit_CkArgMsg(), impl_msg, &impl_ret, impl_onPE);
  return impl_ret;
}
void CProxy_TraceControlPointsInit::ckNew(CkArgMsg* impl_msg, CkChareID* pcid, int impl_onPE)
{
  CkCreateChare(CkIndex_TraceControlPointsInit::__idx, CkIndex_TraceControlPointsInit::idx_TraceControlPointsInit_CkArgMsg(), impl_msg, pcid, impl_onPE);
}

// Entry point registration function
int CkIndex_TraceControlPointsInit::reg_TraceControlPointsInit_CkArgMsg() {
  int epidx = CkRegisterEp("TraceControlPointsInit(CkArgMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_TraceControlPointsInit_CkArgMsg), CMessage_CkArgMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkArgMsg::ckDebugPup);
  return epidx;
}

void CkIndex_TraceControlPointsInit::_call_TraceControlPointsInit_CkArgMsg(void* impl_msg, void* impl_obj_void)
{
  TraceControlPointsInit* impl_obj = static_cast<TraceControlPointsInit*>(impl_obj_void);
  new (impl_obj_void) TraceControlPointsInit((CkArgMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_TraceControlPointsInit::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeMainChare);
  CkRegisterBase(__idx, CkIndex_Chare::__idx);
  // REG: TraceControlPointsInit(CkArgMsg* impl_msg);
  idx_TraceControlPointsInit_CkArgMsg();
  CkRegisterMainChare(__idx, idx_TraceControlPointsInit_CkArgMsg());

}
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: readonly CkGroupID traceControlPointsGID;
 */
extern CkGroupID traceControlPointsGID;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_traceControlPointsGID(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|traceControlPointsGID;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group TraceControlPointsBOC: IrrGroup{
TraceControlPointsBOC();
TraceControlPointsBOC(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_TraceControlPointsBOC::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: TraceControlPointsBOC();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: TraceControlPointsBOC(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: TraceControlPointsBOC();
 */
CkGroupID CProxy_TraceControlPointsBOC::ckNew(const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_TraceControlPointsBOC::__idx, CkIndex_TraceControlPointsBOC::idx_TraceControlPointsBOC_void(), impl_msg);
  return gId;
}

// Entry point registration function
int CkIndex_TraceControlPointsBOC::reg_TraceControlPointsBOC_void() {
  int epidx = CkRegisterEp("TraceControlPointsBOC()",
      reinterpret_cast<CkCallFnPtr>(_call_TraceControlPointsBOC_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_TraceControlPointsBOC::_call_TraceControlPointsBOC_void(void* impl_msg, void* impl_obj_void)
{
  TraceControlPointsBOC* impl_obj = static_cast<TraceControlPointsBOC*>(impl_obj_void);
  new (impl_obj_void) TraceControlPointsBOC();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: TraceControlPointsBOC(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_TraceControlPointsBOC::reg_TraceControlPointsBOC_CkMigrateMessage() {
  int epidx = CkRegisterEp("TraceControlPointsBOC(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_TraceControlPointsBOC_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_TraceControlPointsBOC::_call_TraceControlPointsBOC_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  new (impl_obj_void) TraceControlPointsBOC((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: TraceControlPointsBOC();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: TraceControlPointsBOC(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_TraceControlPointsBOC::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,TraceControlPointsBOC::isIrreducible());
  // REG: TraceControlPointsBOC();
  idx_TraceControlPointsBOC_void();
  CkRegisterDefaultCtor(__idx, idx_TraceControlPointsBOC_void());

  // REG: TraceControlPointsBOC(CkMigrateMessage* impl_msg);
  idx_TraceControlPointsBOC_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_TraceControlPointsBOC_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerTraceControlPoints(void)
{
  static int _done = 0; if(_done) return; _done = 1;
/* REG: mainchare TraceControlPointsInit: Chare{
TraceControlPointsInit(CkArgMsg* impl_msg);
};
*/
  CkIndex_TraceControlPointsInit::__register("TraceControlPointsInit", sizeof(TraceControlPointsInit));

  _registerInitCall(initTraceControlPointsBOC,1);

  CkRegisterReadonly("traceControlPointsGID","CkGroupID",sizeof(traceControlPointsGID),(void *) &traceControlPointsGID,__xlater_roPup_traceControlPointsGID);

/* REG: group TraceControlPointsBOC: IrrGroup{
TraceControlPointsBOC();
TraceControlPointsBOC(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_TraceControlPointsBOC::__register("TraceControlPointsBOC", sizeof(TraceControlPointsBOC));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_TraceControlPointsInit::virtual_pup(PUP::er &p) {
    recursive_pup<TraceControlPointsInit>(dynamic_cast<TraceControlPointsInit*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_TraceControlPointsBOC::virtual_pup(PUP::er &p) {
    recursive_pup<TraceControlPointsBOC>(dynamic_cast<TraceControlPointsBOC*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
