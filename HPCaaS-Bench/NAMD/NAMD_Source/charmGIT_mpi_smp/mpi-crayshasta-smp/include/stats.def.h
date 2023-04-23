


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_localStat::SendStats_2_closure : public SDAG::Closure {
      

      SendStats_2_closure() {
        init();
      }
      SendStats_2_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~SendStats_2_closure() {
      }
      PUPable_decl(SINGLE_ARG(SendStats_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: readonly CkGroupID theLocalStats;
 */
extern CkGroupID theLocalStats;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_theLocalStats(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|theLocalStats;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly CkChareID theGlobalStats;
 */
extern CkChareID theGlobalStats;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_theGlobalStats(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|theGlobalStats;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message localStatSummary;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_localStatSummary::operator new(size_t s){
  return localStatSummary::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_localStatSummary::operator new(size_t s, int* sz){
  return localStatSummary::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_localStatSummary::operator new(size_t s, int* sz,const int pb){
  return localStatSummary::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_localStatSummary::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return localStatSummary::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_localStatSummary::operator new(size_t s, const int p) {
  return localStatSummary::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_localStatSummary::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return localStatSummary::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_localStatSummary::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_localStatSummary::CMessage_localStatSummary() {
localStatSummary *newmsg = (localStatSummary *)this;
}
void CMessage_localStatSummary::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_localStatSummary::pack(localStatSummary *msg) {
  return (void *) msg;
}
localStatSummary* CMessage_localStatSummary::unpack(void* buf) {
  localStatSummary *msg = (localStatSummary *) buf;
  return msg;
}
int CMessage_localStatSummary::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group localStat: IrrGroup{
localStat();
void SendStats();
localStat(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_localStat::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: localStat();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void SendStats();
 */
void CProxyElement_localStat::SendStats(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_localStat::idx_SendStats_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_localStat::idx_SendStats_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_localStat::idx_SendStats_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: localStat(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: localStat();
 */
CkGroupID CProxy_localStat::ckNew(const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_localStat::__idx, CkIndex_localStat::idx_localStat_void(), impl_msg);
  return gId;
}

// Entry point registration function
int CkIndex_localStat::reg_localStat_void() {
  int epidx = CkRegisterEp("localStat()",
      reinterpret_cast<CkCallFnPtr>(_call_localStat_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_localStat::_call_localStat_void(void* impl_msg, void* impl_obj_void)
{
  localStat* impl_obj = static_cast<localStat*>(impl_obj_void);
  new (impl_obj_void) localStat();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void SendStats();
 */
void CProxy_localStat::SendStats(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_localStat::idx_SendStats_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_localStat::idx_SendStats_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_localStat::idx_SendStats_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_localStat::SendStats(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_localStat::idx_SendStats_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_localStat::SendStats(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_localStat::idx_SendStats_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_localStat::reg_SendStats_void() {
  int epidx = CkRegisterEp("SendStats()",
      reinterpret_cast<CkCallFnPtr>(_call_SendStats_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_localStat::_call_SendStats_void(void* impl_msg, void* impl_obj_void)
{
  localStat* impl_obj = static_cast<localStat*>(impl_obj_void);
  impl_obj->SendStats();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_localStat::SendStats_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: localStat(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_localStat::reg_localStat_CkMigrateMessage() {
  int epidx = CkRegisterEp("localStat(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_localStat_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_localStat::_call_localStat_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  new (impl_obj_void) localStat((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: localStat();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void SendStats();
 */
void CProxySection_localStat::SendStats(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_localStat::idx_SendStats_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_localStat::idx_SendStats_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: localStat(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_localStat::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,localStat::isIrreducible());
  // REG: localStat();
  idx_localStat_void();
  CkRegisterDefaultCtor(__idx, idx_localStat_void());

  // REG: void SendStats();
  idx_SendStats_void();

  // REG: localStat(CkMigrateMessage* impl_msg);
  idx_localStat_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_localStat_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: chare globalStat: Chare{
globalStat();
void localStatReport(localStatSummary* impl_msg);
globalStat(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_globalStat::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: globalStat();
 */
CkChareID CProxy_globalStat::ckNew(int impl_onPE, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkChareID impl_ret;
  CkCreateChare(CkIndex_globalStat::__idx, CkIndex_globalStat::idx_globalStat_void(), impl_msg, &impl_ret, impl_onPE);
  return impl_ret;
}
void CProxy_globalStat::ckNew(CkChareID* pcid, int impl_onPE, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkCreateChare(CkIndex_globalStat::__idx, CkIndex_globalStat::idx_globalStat_void(), impl_msg, pcid, impl_onPE);
}

// Entry point registration function
int CkIndex_globalStat::reg_globalStat_void() {
  int epidx = CkRegisterEp("globalStat()",
      reinterpret_cast<CkCallFnPtr>(_call_globalStat_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_globalStat::_call_globalStat_void(void* impl_msg, void* impl_obj_void)
{
  globalStat* impl_obj = static_cast<globalStat*>(impl_obj_void);
  new (impl_obj_void) globalStat();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void localStatReport(localStatSummary* impl_msg);
 */
void CProxy_globalStat::localStatReport(localStatSummary* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_globalStat::idx_localStatReport_localStatSummary(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_globalStat::idx_localStatReport_localStatSummary(), impl_msg, &ckGetChareID(),destPE);
  } else {
    CkSendMsg(CkIndex_globalStat::idx_localStatReport_localStatSummary(), impl_msg, &ckGetChareID(),0);
  }
}

// Entry point registration function
int CkIndex_globalStat::reg_localStatReport_localStatSummary() {
  int epidx = CkRegisterEp("localStatReport(localStatSummary* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_localStatReport_localStatSummary), CMessage_localStatSummary::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)localStatSummary::ckDebugPup);
  return epidx;
}

void CkIndex_globalStat::_call_localStatReport_localStatSummary(void* impl_msg, void* impl_obj_void)
{
  globalStat* impl_obj = static_cast<globalStat*>(impl_obj_void);
  impl_obj->localStatReport((localStatSummary*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: globalStat(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_globalStat::reg_globalStat_CkMigrateMessage() {
  int epidx = CkRegisterEp("globalStat(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_globalStat_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_globalStat::_call_globalStat_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  new (impl_obj_void) globalStat((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_globalStat::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeChare);
  CkRegisterBase(__idx, CkIndex_Chare::__idx);
  // REG: globalStat();
  idx_globalStat_void();
  CkRegisterDefaultCtor(__idx, idx_globalStat_void());

  // REG: void localStatReport(localStatSummary* impl_msg);
  idx_localStatReport_localStatSummary();

  // REG: globalStat(CkMigrateMessage* impl_msg);
  idx_globalStat_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_globalStat_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerstats(void)
{
  static int _done = 0; if(_done) return; _done = 1;
  CkRegisterReadonly("theLocalStats","CkGroupID",sizeof(theLocalStats),(void *) &theLocalStats,__xlater_roPup_theLocalStats);

  CkRegisterReadonly("theGlobalStats","CkChareID",sizeof(theGlobalStats),(void *) &theGlobalStats,__xlater_roPup_theGlobalStats);

/* REG: message localStatSummary;
*/
CMessage_localStatSummary::__register("localStatSummary", sizeof(localStatSummary),(CkPackFnPtr) localStatSummary::pack,(CkUnpackFnPtr) localStatSummary::unpack);

/* REG: group localStat: IrrGroup{
localStat();
void SendStats();
localStat(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_localStat::__register("localStat", sizeof(localStat));

/* REG: chare globalStat: Chare{
globalStat();
void localStatReport(localStatSummary* impl_msg);
globalStat(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_globalStat::__register("globalStat", sizeof(globalStat));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_localStat::virtual_pup(PUP::er &p) {
    recursive_pup<localStat>(dynamic_cast<localStat*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_globalStat::virtual_pup(PUP::er &p) {
    recursive_pup<globalStat>(dynamic_cast<globalStat*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
