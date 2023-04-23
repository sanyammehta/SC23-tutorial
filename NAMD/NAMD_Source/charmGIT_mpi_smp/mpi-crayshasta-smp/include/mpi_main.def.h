/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_mpi_main::exit_2_closure : public SDAG::Closure {
      

      exit_2_closure() {
        init();
      }
      exit_2_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~exit_2_closure() {
      }
      PUPable_decl(SINGLE_ARG(exit_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: mainchare mpi_main: Chare{
mpi_main(CkArgMsg* impl_msg);
void exit();
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_mpi_main::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: mpi_main(CkArgMsg* impl_msg);
 */
CkChareID CProxy_mpi_main::ckNew(CkArgMsg* impl_msg, int impl_onPE)
{
  CkChareID impl_ret;
  CkCreateChare(CkIndex_mpi_main::__idx, CkIndex_mpi_main::idx_mpi_main_CkArgMsg(), impl_msg, &impl_ret, impl_onPE);
  return impl_ret;
}
void CProxy_mpi_main::ckNew(CkArgMsg* impl_msg, CkChareID* pcid, int impl_onPE)
{
  CkCreateChare(CkIndex_mpi_main::__idx, CkIndex_mpi_main::idx_mpi_main_CkArgMsg(), impl_msg, pcid, impl_onPE);
}

// Entry point registration function
int CkIndex_mpi_main::reg_mpi_main_CkArgMsg() {
  int epidx = CkRegisterEp("mpi_main(CkArgMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_mpi_main_CkArgMsg), CMessage_CkArgMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkArgMsg::ckDebugPup);
  return epidx;
}

void CkIndex_mpi_main::_call_mpi_main_CkArgMsg(void* impl_msg, void* impl_obj_void)
{
  mpi_main* impl_obj = static_cast<mpi_main*>(impl_obj_void);
  new (impl_obj_void) mpi_main((CkArgMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void exit();
 */
void CProxy_mpi_main::exit(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_mpi_main::idx_exit_void(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_mpi_main::idx_exit_void(), impl_msg, &ckGetChareID(),destPE);
  } else {
    CkSendMsg(CkIndex_mpi_main::idx_exit_void(), impl_msg, &ckGetChareID(),0);
  }
}

// Entry point registration function
int CkIndex_mpi_main::reg_exit_void() {
  int epidx = CkRegisterEp("exit()",
      reinterpret_cast<CkCallFnPtr>(_call_exit_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_mpi_main::_call_exit_void(void* impl_msg, void* impl_obj_void)
{
  mpi_main* impl_obj = static_cast<mpi_main*>(impl_obj_void);
  impl_obj->exit();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_mpi_main::exit_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_mpi_main::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeMainChare);
  CkRegisterBase(__idx, CkIndex_Chare::__idx);
  // REG: mpi_main(CkArgMsg* impl_msg);
  idx_mpi_main_CkArgMsg();
  CkRegisterMainChare(__idx, idx_mpi_main_CkArgMsg());

  // REG: void exit();
  idx_exit_void();

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registermpi_main(void)
{
  static int _done = 0; if(_done) return; _done = 1;
/* REG: mainchare mpi_main: Chare{
mpi_main(CkArgMsg* impl_msg);
void exit();
};
*/
  CkIndex_mpi_main::__register("mpi_main", sizeof(mpi_main));

}
extern "C" void CkRegisterMainModule(void) {
  _registermpi_main();
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_mpi_main::virtual_pup(PUP::er &p) {
    recursive_pup<mpi_main>(dynamic_cast<mpi_main*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
