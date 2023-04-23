


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_LBManager::ResumeClients_2_closure : public SDAG::Closure {
      

      ResumeClients_2_closure() {
        init();
      }
      ResumeClients_2_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~ResumeClients_2_closure() {
      }
      PUPable_decl(SINGLE_ARG(ResumeClients_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */




/* DEFS: readonly CkGroupID _lbmgr;
 */
extern CkGroupID _lbmgr;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup__lbmgr(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|_lbmgr;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: mainchare LBMgrInit: Chare{
LBMgrInit(CkArgMsg* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_LBMgrInit::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: LBMgrInit(CkArgMsg* impl_msg);
 */
CkChareID CProxy_LBMgrInit::ckNew(CkArgMsg* impl_msg, int impl_onPE)
{
  CkChareID impl_ret;
  CkCreateChare(CkIndex_LBMgrInit::__idx, CkIndex_LBMgrInit::idx_LBMgrInit_CkArgMsg(), impl_msg, &impl_ret, impl_onPE);
  return impl_ret;
}
void CProxy_LBMgrInit::ckNew(CkArgMsg* impl_msg, CkChareID* pcid, int impl_onPE)
{
  CkCreateChare(CkIndex_LBMgrInit::__idx, CkIndex_LBMgrInit::idx_LBMgrInit_CkArgMsg(), impl_msg, pcid, impl_onPE);
}

// Entry point registration function
int CkIndex_LBMgrInit::reg_LBMgrInit_CkArgMsg() {
  int epidx = CkRegisterEp("LBMgrInit(CkArgMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_LBMgrInit_CkArgMsg), CMessage_CkArgMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkArgMsg::ckDebugPup);
  return epidx;
}

void CkIndex_LBMgrInit::_call_LBMgrInit_CkArgMsg(void* impl_msg, void* impl_obj_void)
{
  LBMgrInit* impl_obj = static_cast<LBMgrInit*>(impl_obj_void);
  new (impl_obj_void) LBMgrInit((CkArgMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_LBMgrInit::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeMainChare);
  CkRegisterBase(__idx, CkIndex_Chare::__idx);
  // REG: LBMgrInit(CkArgMsg* impl_msg);
  idx_LBMgrInit_CkArgMsg();
  CkRegisterMainChare(__idx, idx_LBMgrInit_CkArgMsg());

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group LBManager: IrrGroup{
void LBManager();
void ResumeClients();
  initcall void initnodeFn(void);
LBManager(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_LBManager::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: void LBManager();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ResumeClients();
 */
void CProxyElement_LBManager::ResumeClients(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_LBManager::idx_ResumeClients_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_LBManager::idx_ResumeClients_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_LBManager::idx_ResumeClients_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
/* DEFS: LBManager(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void LBManager();
 */
CkGroupID CProxy_LBManager::ckNew(const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_LBManager::__idx, CkIndex_LBManager::idx_LBManager_void(), impl_msg);
  return gId;
}

// Entry point registration function
int CkIndex_LBManager::reg_LBManager_void() {
  int epidx = CkRegisterEp("LBManager()",
      reinterpret_cast<CkCallFnPtr>(_call_LBManager_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_LBManager::_call_LBManager_void(void* impl_msg, void* impl_obj_void)
{
  LBManager* impl_obj = static_cast<LBManager*>(impl_obj_void);
  new (impl_obj_void) LBManager();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ResumeClients();
 */
void CProxy_LBManager::ResumeClients(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_LBManager::idx_ResumeClients_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_LBManager::idx_ResumeClients_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_LBManager::idx_ResumeClients_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_LBManager::ResumeClients(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_LBManager::idx_ResumeClients_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_LBManager::ResumeClients(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_LBManager::idx_ResumeClients_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_LBManager::reg_ResumeClients_void() {
  int epidx = CkRegisterEp("ResumeClients()",
      reinterpret_cast<CkCallFnPtr>(_call_ResumeClients_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_LBManager::_call_ResumeClients_void(void* impl_msg, void* impl_obj_void)
{
  LBManager* impl_obj = static_cast<LBManager*>(impl_obj_void);
  impl_obj->ResumeClients();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_LBManager::ResumeClients_2_closure))
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
/* DEFS: LBManager(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_LBManager::reg_LBManager_CkMigrateMessage() {
  int epidx = CkRegisterEp("LBManager(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_LBManager_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_LBManager::_call_LBManager_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  new (impl_obj_void) LBManager((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void LBManager();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ResumeClients();
 */
void CProxySection_LBManager::ResumeClients(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_LBManager::idx_ResumeClients_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_LBManager::idx_ResumeClients_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
/* DEFS: LBManager(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_LBManager::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,LBManager::isIrreducible());
  // REG: void LBManager();
  idx_LBManager_void();
  CkRegisterDefaultCtor(__idx, idx_LBManager_void());

  // REG: void ResumeClients();
  idx_ResumeClients_void();

  _registerInitCall(LBManager::initnodeFn,1);

  // REG: LBManager(CkMigrateMessage* impl_msg);
  idx_LBManager_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_LBManager_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerLBManager(void)
{
  static int _done = 0; if(_done) return; _done = 1;
  _registerCkMarshall();

  _registerBaseLB();

  CkRegisterReadonly("_lbmgr","CkGroupID",sizeof(_lbmgr),(void *) &_lbmgr,__xlater_roPup__lbmgr);

/* REG: mainchare LBMgrInit: Chare{
LBMgrInit(CkArgMsg* impl_msg);
};
*/
  CkIndex_LBMgrInit::__register("LBMgrInit", sizeof(LBMgrInit));

/* REG: group LBManager: IrrGroup{
void LBManager();
void ResumeClients();
  initcall void initnodeFn(void);
LBManager(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_LBManager::__register("LBManager", sizeof(LBManager));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_LBMgrInit::virtual_pup(PUP::er &p) {
    recursive_pup<LBMgrInit>(dynamic_cast<LBMgrInit*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_LBManager::virtual_pup(PUP::er &p) {
    recursive_pup<LBManager>(dynamic_cast<LBManager*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
