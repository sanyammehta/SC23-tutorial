

/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_main::readMesh_2_closure : public SDAG::Closure {
      

      readMesh_2_closure() {
        init();
      }
      readMesh_2_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~readMesh_2_closure() {
      }
      PUPable_decl(SINGLE_ARG(readMesh_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */



/* DEFS: readonly CkChareID mainhandle;
 */
extern CkChareID mainhandle;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_mainhandle(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|mainhandle;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: mainchare main: Chare{
main(CkArgMsg* impl_msg);
threaded void readMesh();
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_main::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: main(CkArgMsg* impl_msg);
 */
CkChareID CProxy_main::ckNew(CkArgMsg* impl_msg, int impl_onPE)
{
  CkChareID impl_ret;
  CkCreateChare(CkIndex_main::__idx, CkIndex_main::idx_main_CkArgMsg(), impl_msg, &impl_ret, impl_onPE);
  return impl_ret;
}
void CProxy_main::ckNew(CkArgMsg* impl_msg, CkChareID* pcid, int impl_onPE)
{
  CkCreateChare(CkIndex_main::__idx, CkIndex_main::idx_main_CkArgMsg(), impl_msg, pcid, impl_onPE);
}

// Entry point registration function
int CkIndex_main::reg_main_CkArgMsg() {
  int epidx = CkRegisterEp("main(CkArgMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_main_CkArgMsg), CMessage_CkArgMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkArgMsg::ckDebugPup);
  return epidx;
}

void CkIndex_main::_call_main_CkArgMsg(void* impl_msg, void* impl_obj_void)
{
  main* impl_obj = static_cast<main*>(impl_obj_void);
  new (impl_obj_void) main((CkArgMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded void readMesh();
 */
void CProxy_main::readMesh(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_main::idx_readMesh_void(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_main::idx_readMesh_void(), impl_msg, &ckGetChareID(),destPE);
  } else {
    CkSendMsg(CkIndex_main::idx_readMesh_void(), impl_msg, &ckGetChareID(),0);
  }
}

// Entry point registration function
int CkIndex_main::reg_readMesh_void() {
  int epidx = CkRegisterEp("readMesh()",
      reinterpret_cast<CkCallFnPtr>(_call_readMesh_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_main::_call_readMesh_void(void* impl_msg, void* impl_obj_void)
{
  main* impl_obj = static_cast<main*>(impl_obj_void);
  CthThread tid = CthCreate((CthVoidFn)_callthr_readMesh_void, new CkThrCallArg(impl_msg,impl_obj), 0);
  ((Chare *)impl_obj)->CkAddThreadListeners(tid,impl_msg);
  CthTraceResume(tid);
  CthResume(tid);
}
void CkIndex_main::_callthr_readMesh_void(CkThrCallArg *impl_arg)
{
  void *impl_msg = impl_arg->msg;
  void *impl_obj_void = impl_arg->obj;
  main *impl_obj = static_cast<main *>(impl_obj_void);
  delete impl_arg;
  impl_obj->readMesh();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_main::readMesh_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_main::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeMainChare);
  CkRegisterBase(__idx, CkIndex_Chare::__idx);
  // REG: main(CkArgMsg* impl_msg);
  idx_main_CkArgMsg();
  CkRegisterMainChare(__idx, idx_main_CkArgMsg());

  // REG: threaded void readMesh();
  idx_readMesh_void();

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerPgm(void)
{
  static int _done = 0; if(_done) return; _done = 1;
  _registerPMAF();

  CkRegisterReadonly("mainhandle","CkChareID",sizeof(mainhandle),(void *) &mainhandle,__xlater_roPup_mainhandle);

/* REG: mainchare main: Chare{
main(CkArgMsg* impl_msg);
threaded void readMesh();
};
*/
  CkIndex_main::__register("main", sizeof(main));

}
extern "C" void CkRegisterMainModule(void) {
  _registerPgm();
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_main::virtual_pup(PUP::er &p) {
    recursive_pup<main>(dynamic_cast<main*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
