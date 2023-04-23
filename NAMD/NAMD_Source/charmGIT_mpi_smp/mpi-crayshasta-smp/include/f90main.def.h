
/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_f90main::done_2_closure : public SDAG::Closure {
      

      done_2_closure() {
        init();
      }
      done_2_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~done_2_closure() {
      }
      PUPable_decl(SINGLE_ARG(done_2_closure));
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

/* DEFS: mainchare f90main: Chare{
f90main(CkArgMsg* impl_msg);
void done();
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_f90main::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: f90main(CkArgMsg* impl_msg);
 */
CkChareID CProxy_f90main::ckNew(CkArgMsg* impl_msg, int impl_onPE)
{
  CkChareID impl_ret;
  CkCreateChare(CkIndex_f90main::__idx, CkIndex_f90main::idx_f90main_CkArgMsg(), impl_msg, &impl_ret, impl_onPE);
  return impl_ret;
}
void CProxy_f90main::ckNew(CkArgMsg* impl_msg, CkChareID* pcid, int impl_onPE)
{
  CkCreateChare(CkIndex_f90main::__idx, CkIndex_f90main::idx_f90main_CkArgMsg(), impl_msg, pcid, impl_onPE);
}

// Entry point registration function
int CkIndex_f90main::reg_f90main_CkArgMsg() {
  int epidx = CkRegisterEp("f90main(CkArgMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_f90main_CkArgMsg), CMessage_CkArgMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkArgMsg::ckDebugPup);
  return epidx;
}

void CkIndex_f90main::_call_f90main_CkArgMsg(void* impl_msg, void* impl_obj_void)
{
  f90main* impl_obj = static_cast<f90main*>(impl_obj_void);
  new (impl_obj_void) f90main((CkArgMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void done();
 */
void CProxy_f90main::done(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_f90main::idx_done_void(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_f90main::idx_done_void(), impl_msg, &ckGetChareID(),destPE);
  } else {
    CkSendMsg(CkIndex_f90main::idx_done_void(), impl_msg, &ckGetChareID(),0);
  }
}

// Entry point registration function
int CkIndex_f90main::reg_done_void() {
  int epidx = CkRegisterEp("done()",
      reinterpret_cast<CkCallFnPtr>(_call_done_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_f90main::_call_done_void(void* impl_msg, void* impl_obj_void)
{
  f90main* impl_obj = static_cast<f90main*>(impl_obj_void);
  impl_obj->done();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_f90main::done_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_f90main::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeMainChare);
  CkRegisterBase(__idx, CkIndex_Chare::__idx);
  // REG: f90main(CkArgMsg* impl_msg);
  idx_f90main_CkArgMsg();
  CkRegisterMainChare(__idx, idx_f90main_CkArgMsg());

  // REG: void done();
  idx_done_void();

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerf90main(void)
{
  static int _done = 0; if(_done) return; _done = 1;
  CkRegisterReadonly("mainhandle","CkChareID",sizeof(mainhandle),(void *) &mainhandle,__xlater_roPup_mainhandle);

/* REG: mainchare f90main: Chare{
f90main(CkArgMsg* impl_msg);
void done();
};
*/
  CkIndex_f90main::__register("f90main", sizeof(f90main));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_f90main::virtual_pup(PUP::er &p) {
    recursive_pup<f90main>(dynamic_cast<f90main*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
