

/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */



/* DEFS: readonly CProxy_PythonCCS pythonCcsProxy;
 */
extern CProxy_PythonCCS pythonCcsProxy;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_pythonCcsProxy(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|pythonCcsProxy;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: mainchare PythonCCS: Chare{
PythonCCS(CkArgMsg* impl_msg);
void forwardString(CkReductionMsg* impl_msg);
void forwardInt(CkReductionMsg* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_PythonCCS::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: PythonCCS(CkArgMsg* impl_msg);
 */
CkChareID CProxy_PythonCCS::ckNew(CkArgMsg* impl_msg, int impl_onPE)
{
  CkChareID impl_ret;
  CkCreateChare(CkIndex_PythonCCS::__idx, CkIndex_PythonCCS::idx_PythonCCS_CkArgMsg(), impl_msg, &impl_ret, impl_onPE);
  return impl_ret;
}
void CProxy_PythonCCS::ckNew(CkArgMsg* impl_msg, CkChareID* pcid, int impl_onPE)
{
  CkCreateChare(CkIndex_PythonCCS::__idx, CkIndex_PythonCCS::idx_PythonCCS_CkArgMsg(), impl_msg, pcid, impl_onPE);
}

// Entry point registration function
int CkIndex_PythonCCS::reg_PythonCCS_CkArgMsg() {
  int epidx = CkRegisterEp("PythonCCS(CkArgMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_PythonCCS_CkArgMsg), CMessage_CkArgMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkArgMsg::ckDebugPup);
  return epidx;
}

void CkIndex_PythonCCS::_call_PythonCCS_CkArgMsg(void* impl_msg, void* impl_obj_void)
{
  PythonCCS* impl_obj = static_cast<PythonCCS*>(impl_obj_void);
  new (impl_obj_void) PythonCCS((CkArgMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void forwardString(CkReductionMsg* impl_msg);
 */
void CProxy_PythonCCS::forwardString(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_PythonCCS::idx_forwardString_CkReductionMsg(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_PythonCCS::idx_forwardString_CkReductionMsg(), impl_msg, &ckGetChareID(),destPE);
  } else {
    CkSendMsg(CkIndex_PythonCCS::idx_forwardString_CkReductionMsg(), impl_msg, &ckGetChareID(),0);
  }
}

// Entry point registration function
int CkIndex_PythonCCS::reg_forwardString_CkReductionMsg() {
  int epidx = CkRegisterEp("forwardString(CkReductionMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_forwardString_CkReductionMsg), CMessage_CkReductionMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkReductionMsg::ckDebugPup);
  return epidx;
}

void CkIndex_PythonCCS::_call_forwardString_CkReductionMsg(void* impl_msg, void* impl_obj_void)
{
  PythonCCS* impl_obj = static_cast<PythonCCS*>(impl_obj_void);
  impl_obj->forwardString((CkReductionMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void forwardInt(CkReductionMsg* impl_msg);
 */
void CProxy_PythonCCS::forwardInt(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_PythonCCS::idx_forwardInt_CkReductionMsg(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_PythonCCS::idx_forwardInt_CkReductionMsg(), impl_msg, &ckGetChareID(),destPE);
  } else {
    CkSendMsg(CkIndex_PythonCCS::idx_forwardInt_CkReductionMsg(), impl_msg, &ckGetChareID(),0);
  }
}

// Entry point registration function
int CkIndex_PythonCCS::reg_forwardInt_CkReductionMsg() {
  int epidx = CkRegisterEp("forwardInt(CkReductionMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_forwardInt_CkReductionMsg), CMessage_CkReductionMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkReductionMsg::ckDebugPup);
  return epidx;
}

void CkIndex_PythonCCS::_call_forwardInt_CkReductionMsg(void* impl_msg, void* impl_obj_void)
{
  PythonCCS* impl_obj = static_cast<PythonCCS*>(impl_obj_void);
  impl_obj->forwardInt((CkReductionMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_PythonCCS::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeMainChare);
  CkRegisterBase(__idx, CkIndex_Chare::__idx);
  // REG: PythonCCS(CkArgMsg* impl_msg);
  idx_PythonCCS_CkArgMsg();
  CkRegisterMainChare(__idx, idx_PythonCCS_CkArgMsg());

  // REG: void forwardString(CkReductionMsg* impl_msg);
  idx_forwardString_CkReductionMsg();

  // REG: void forwardInt(CkReductionMsg* impl_msg);
  idx_forwardInt_CkReductionMsg();

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerPythonCCS(void)
{
  static int _done = 0; if(_done) return; _done = 1;
  _registerInitCall(initializePythonDefault,1);

  CkRegisterReadonly("pythonCcsProxy","CProxy_PythonCCS",sizeof(pythonCcsProxy),(void *) &pythonCcsProxy,__xlater_roPup_pythonCcsProxy);

/* REG: mainchare PythonCCS: Chare{
PythonCCS(CkArgMsg* impl_msg);
void forwardString(CkReductionMsg* impl_msg);
void forwardInt(CkReductionMsg* impl_msg);
};
*/
  CkIndex_PythonCCS::__register("PythonCCS", sizeof(PythonCCS));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_PythonCCS::virtual_pup(PUP::er &p) {
    recursive_pup<PythonCCS>(dynamic_cast<PythonCCS*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
