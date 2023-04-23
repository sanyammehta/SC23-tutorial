



/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_LBgroup::calculateLocalLoad_2_closure : public SDAG::Closure {
      

      calculateLocalLoad_2_closure() {
        init();
      }
      calculateLocalLoad_2_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~calculateLocalLoad_2_closure() {
      }
      PUPable_decl(SINGLE_ARG(calculateLocalLoad_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: readonly CProxy_LBgroup TheLBG;
 */
extern CProxy_LBgroup TheLBG;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_TheLBG(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|TheLBG;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly CProxy_LBstrategy TheLBstrategy;
 */
extern CProxy_LBstrategy TheLBstrategy;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_TheLBstrategy(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|TheLBstrategy;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message LoadReport;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_LoadReport::operator new(size_t s){
  return LoadReport::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_LoadReport::operator new(size_t s, int* sz){
  return LoadReport::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_LoadReport::operator new(size_t s, int* sz,const int pb){
  return LoadReport::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_LoadReport::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return LoadReport::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_LoadReport::operator new(size_t s, const int p) {
  return LoadReport::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_LoadReport::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return LoadReport::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_LoadReport::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_LoadReport::CMessage_LoadReport() {
LoadReport *newmsg = (LoadReport *)this;
}
void CMessage_LoadReport::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_LoadReport::pack(LoadReport *msg) {
  return (void *) msg;
}
LoadReport* CMessage_LoadReport::unpack(void* buf) {
  LoadReport *msg = (LoadReport *) buf;
  return msg;
}
int CMessage_LoadReport::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message BalanceSpecs;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_BalanceSpecs::operator new(size_t s){
  return BalanceSpecs::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_BalanceSpecs::operator new(size_t s, int* sz){
  return BalanceSpecs::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_BalanceSpecs::operator new(size_t s, int* sz,const int pb){
  return BalanceSpecs::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_BalanceSpecs::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return BalanceSpecs::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_BalanceSpecs::operator new(size_t s, const int p) {
  return BalanceSpecs::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_BalanceSpecs::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return BalanceSpecs::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_BalanceSpecs::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_BalanceSpecs::CMessage_BalanceSpecs() {
BalanceSpecs *newmsg = (BalanceSpecs *)this;
}
void CMessage_BalanceSpecs::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_BalanceSpecs::pack(BalanceSpecs *msg) {
  return (void *) msg;
}
BalanceSpecs* CMessage_BalanceSpecs::unpack(void* buf) {
  BalanceSpecs *msg = (BalanceSpecs *) buf;
  return msg;
}
int CMessage_BalanceSpecs::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group LBgroup: IrrGroup{
LBgroup();
void calculateLocalLoad();
void balance(BalanceSpecs* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_LBgroup::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: LBgroup();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void calculateLocalLoad();
 */
void CProxyElement_LBgroup::calculateLocalLoad(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_LBgroup::idx_calculateLocalLoad_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_LBgroup::idx_calculateLocalLoad_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_LBgroup::idx_calculateLocalLoad_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void balance(BalanceSpecs* impl_msg);
 */
void CProxyElement_LBgroup::balance(BalanceSpecs* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_LBgroup::idx_balance_BalanceSpecs(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_LBgroup::idx_balance_BalanceSpecs(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_LBgroup::idx_balance_BalanceSpecs(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: LBgroup();
 */
CkGroupID CProxy_LBgroup::ckNew(const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_LBgroup::__idx, CkIndex_LBgroup::idx_LBgroup_void(), impl_msg);
  return gId;
}

// Entry point registration function
int CkIndex_LBgroup::reg_LBgroup_void() {
  int epidx = CkRegisterEp("LBgroup()",
      reinterpret_cast<CkCallFnPtr>(_call_LBgroup_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_LBgroup::_call_LBgroup_void(void* impl_msg, void* impl_obj_void)
{
  LBgroup* impl_obj = static_cast<LBgroup*>(impl_obj_void);
  new (impl_obj_void) LBgroup();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void calculateLocalLoad();
 */
void CProxy_LBgroup::calculateLocalLoad(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_LBgroup::idx_calculateLocalLoad_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_LBgroup::idx_calculateLocalLoad_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_LBgroup::idx_calculateLocalLoad_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_LBgroup::calculateLocalLoad(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_LBgroup::idx_calculateLocalLoad_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_LBgroup::calculateLocalLoad(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_LBgroup::idx_calculateLocalLoad_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_LBgroup::reg_calculateLocalLoad_void() {
  int epidx = CkRegisterEp("calculateLocalLoad()",
      reinterpret_cast<CkCallFnPtr>(_call_calculateLocalLoad_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_LBgroup::_call_calculateLocalLoad_void(void* impl_msg, void* impl_obj_void)
{
  LBgroup* impl_obj = static_cast<LBgroup*>(impl_obj_void);
  impl_obj->calculateLocalLoad();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_LBgroup::calculateLocalLoad_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void balance(BalanceSpecs* impl_msg);
 */
void CProxy_LBgroup::balance(BalanceSpecs* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_LBgroup::idx_balance_BalanceSpecs(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_LBgroup::idx_balance_BalanceSpecs(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_LBgroup::idx_balance_BalanceSpecs(), impl_msg, ckGetGroupID(),0);
}
void CProxy_LBgroup::balance(BalanceSpecs* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_LBgroup::idx_balance_BalanceSpecs(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_LBgroup::balance(BalanceSpecs* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_LBgroup::idx_balance_BalanceSpecs(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_LBgroup::reg_balance_BalanceSpecs() {
  int epidx = CkRegisterEp("balance(BalanceSpecs* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_balance_BalanceSpecs), CMessage_BalanceSpecs::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)BalanceSpecs::ckDebugPup);
  return epidx;
}

void CkIndex_LBgroup::_call_balance_BalanceSpecs(void* impl_msg, void* impl_obj_void)
{
  LBgroup* impl_obj = static_cast<LBgroup*>(impl_obj_void);
  impl_obj->balance((BalanceSpecs*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: LBgroup();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void calculateLocalLoad();
 */
void CProxySection_LBgroup::calculateLocalLoad(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_LBgroup::idx_calculateLocalLoad_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_LBgroup::idx_calculateLocalLoad_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void balance(BalanceSpecs* impl_msg);
 */
void CProxySection_LBgroup::balance(BalanceSpecs* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_LBgroup::idx_balance_BalanceSpecs(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_LBgroup::idx_balance_BalanceSpecs(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_LBgroup::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,LBgroup::isIrreducible());
  // REG: LBgroup();
  idx_LBgroup_void();
  CkRegisterDefaultCtor(__idx, idx_LBgroup_void());

  // REG: void calculateLocalLoad();
  idx_calculateLocalLoad_void();

  // REG: void balance(BalanceSpecs* impl_msg);
  idx_balance_BalanceSpecs();

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group LBstrategy: IrrGroup{
LBstrategy();
void recvLoadReport(LoadReport* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_LBstrategy::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: LBstrategy();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvLoadReport(LoadReport* impl_msg);
 */
void CProxyElement_LBstrategy::recvLoadReport(LoadReport* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_LBstrategy::idx_recvLoadReport_LoadReport(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_LBstrategy::idx_recvLoadReport_LoadReport(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_LBstrategy::idx_recvLoadReport_LoadReport(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: LBstrategy();
 */
CkGroupID CProxy_LBstrategy::ckNew(const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_LBstrategy::__idx, CkIndex_LBstrategy::idx_LBstrategy_void(), impl_msg);
  return gId;
}

// Entry point registration function
int CkIndex_LBstrategy::reg_LBstrategy_void() {
  int epidx = CkRegisterEp("LBstrategy()",
      reinterpret_cast<CkCallFnPtr>(_call_LBstrategy_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_LBstrategy::_call_LBstrategy_void(void* impl_msg, void* impl_obj_void)
{
  LBstrategy* impl_obj = static_cast<LBstrategy*>(impl_obj_void);
  new (impl_obj_void) LBstrategy();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvLoadReport(LoadReport* impl_msg);
 */
void CProxy_LBstrategy::recvLoadReport(LoadReport* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_LBstrategy::idx_recvLoadReport_LoadReport(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_LBstrategy::idx_recvLoadReport_LoadReport(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_LBstrategy::idx_recvLoadReport_LoadReport(), impl_msg, ckGetGroupID(),0);
}
void CProxy_LBstrategy::recvLoadReport(LoadReport* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_LBstrategy::idx_recvLoadReport_LoadReport(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_LBstrategy::recvLoadReport(LoadReport* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_LBstrategy::idx_recvLoadReport_LoadReport(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_LBstrategy::reg_recvLoadReport_LoadReport() {
  int epidx = CkRegisterEp("recvLoadReport(LoadReport* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_recvLoadReport_LoadReport), CMessage_LoadReport::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)LoadReport::ckDebugPup);
  return epidx;
}

void CkIndex_LBstrategy::_call_recvLoadReport_LoadReport(void* impl_msg, void* impl_obj_void)
{
  LBstrategy* impl_obj = static_cast<LBstrategy*>(impl_obj_void);
  impl_obj->recvLoadReport((LoadReport*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: LBstrategy();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvLoadReport(LoadReport* impl_msg);
 */
void CProxySection_LBstrategy::recvLoadReport(LoadReport* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_LBstrategy::idx_recvLoadReport_LoadReport(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_LBstrategy::idx_recvLoadReport_LoadReport(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_LBstrategy::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,LBstrategy::isIrreducible());
  // REG: LBstrategy();
  idx_LBstrategy_void();
  CkRegisterDefaultCtor(__idx, idx_LBstrategy_void());

  // REG: void recvLoadReport(LoadReport* impl_msg);
  idx_recvLoadReport_LoadReport();

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerldbal(void)
{
  static int _done = 0; if(_done) return; _done = 1;
  CkRegisterReadonly("TheLBG","CProxy_LBgroup",sizeof(TheLBG),(void *) &TheLBG,__xlater_roPup_TheLBG);

  CkRegisterReadonly("TheLBstrategy","CProxy_LBstrategy",sizeof(TheLBstrategy),(void *) &TheLBstrategy,__xlater_roPup_TheLBstrategy);

/* REG: message LoadReport;
*/
CMessage_LoadReport::__register("LoadReport", sizeof(LoadReport),(CkPackFnPtr) LoadReport::pack,(CkUnpackFnPtr) LoadReport::unpack);

/* REG: message BalanceSpecs;
*/
CMessage_BalanceSpecs::__register("BalanceSpecs", sizeof(BalanceSpecs),(CkPackFnPtr) BalanceSpecs::pack,(CkUnpackFnPtr) BalanceSpecs::unpack);

/* REG: group LBgroup: IrrGroup{
LBgroup();
void calculateLocalLoad();
void balance(BalanceSpecs* impl_msg);
};
*/
  CkIndex_LBgroup::__register("LBgroup", sizeof(LBgroup));

/* REG: group LBstrategy: IrrGroup{
LBstrategy();
void recvLoadReport(LoadReport* impl_msg);
};
*/
  CkIndex_LBstrategy::__register("LBstrategy", sizeof(LBstrategy));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_LBgroup::virtual_pup(PUP::er &p) {
    recursive_pup<LBgroup>(dynamic_cast<LBgroup*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_LBstrategy::virtual_pup(PUP::er &p) {
    recursive_pup<LBstrategy>(dynamic_cast<LBstrategy*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
