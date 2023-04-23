/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_CpdPythonGroup::getArray_2_closure : public SDAG::Closure {
            int impl_noname_0;


      getArray_2_closure() {
        init();
      }
      getArray_2_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return impl_noname_0;}
      void pup(PUP::er& __p) {
        __p | impl_noname_0;
        packClosure(__p);
      }
      virtual ~getArray_2_closure() {
      }
      PUPable_decl(SINGLE_ARG(getArray_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_CpdPythonGroup::getValue_3_closure : public SDAG::Closure {
            int impl_noname_1;


      getValue_3_closure() {
        init();
      }
      getValue_3_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return impl_noname_1;}
      void pup(PUP::er& __p) {
        __p | impl_noname_1;
        packClosure(__p);
      }
      virtual ~getValue_3_closure() {
      }
      PUPable_decl(SINGLE_ARG(getValue_3_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_CpdPythonGroup::getCast_4_closure : public SDAG::Closure {
            int impl_noname_2;


      getCast_4_closure() {
        init();
      }
      getCast_4_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return impl_noname_2;}
      void pup(PUP::er& __p) {
        __p | impl_noname_2;
        packClosure(__p);
      }
      virtual ~getCast_4_closure() {
      }
      PUPable_decl(SINGLE_ARG(getCast_4_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_CpdPythonGroup::getStatic_5_closure : public SDAG::Closure {
            int impl_noname_3;


      getStatic_5_closure() {
        init();
      }
      getStatic_5_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return impl_noname_3;}
      void pup(PUP::er& __p) {
        __p | impl_noname_3;
        packClosure(__p);
      }
      virtual ~getStatic_5_closure() {
      }
      PUPable_decl(SINGLE_ARG(getStatic_5_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_CpdPythonGroup::getMessage_6_closure : public SDAG::Closure {
            int impl_noname_4;


      getMessage_6_closure() {
        init();
      }
      getMessage_6_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return impl_noname_4;}
      void pup(PUP::er& __p) {
        __p | impl_noname_4;
        packClosure(__p);
      }
      virtual ~getMessage_6_closure() {
      }
      PUPable_decl(SINGLE_ARG(getMessage_6_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: mainchare CpdPython: Chare{
CpdPython(CkArgMsg* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_CpdPython::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: CpdPython(CkArgMsg* impl_msg);
 */
CkChareID CProxy_CpdPython::ckNew(CkArgMsg* impl_msg, int impl_onPE)
{
  CkChareID impl_ret;
  CkCreateChare(CkIndex_CpdPython::__idx, CkIndex_CpdPython::idx_CpdPython_CkArgMsg(), impl_msg, &impl_ret, impl_onPE);
  return impl_ret;
}
void CProxy_CpdPython::ckNew(CkArgMsg* impl_msg, CkChareID* pcid, int impl_onPE)
{
  CkCreateChare(CkIndex_CpdPython::__idx, CkIndex_CpdPython::idx_CpdPython_CkArgMsg(), impl_msg, pcid, impl_onPE);
}

// Entry point registration function
int CkIndex_CpdPython::reg_CpdPython_CkArgMsg() {
  int epidx = CkRegisterEp("CpdPython(CkArgMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_CpdPython_CkArgMsg), CMessage_CkArgMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkArgMsg::ckDebugPup);
  return epidx;
}

void CkIndex_CpdPython::_call_CpdPython_CkArgMsg(void* impl_msg, void* impl_obj_void)
{
  CpdPython* impl_obj = static_cast<CpdPython*>(impl_obj_void);
  new (impl_obj_void) CpdPython((CkArgMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_CpdPython::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeMainChare);
  CkRegisterBase(__idx, CkIndex_Chare::__idx);
  // REG: CpdPython(CkArgMsg* impl_msg);
  idx_CpdPython_CkArgMsg();
  CkRegisterMainChare(__idx, idx_CpdPython_CkArgMsg());

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group CpdPythonGroup: IrrGroup{
CpdPythonGroup();
void getArray(int impl_noname_0);
void getValue(int impl_noname_1);
void getCast(int impl_noname_2);
void getStatic(int impl_noname_3);
void getMessage(int impl_noname_4);
void registerPersistent(CkCcsRequestMsg* impl_msg);
void pyRequest(CkCcsRequestMsg* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_CpdPythonGroup::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: CpdPythonGroup();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void getArray(int impl_noname_0);
 */
void CProxyElement_CpdPythonGroup::getArray(int impl_noname_0, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int impl_noname_0
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_0;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_0;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CpdPythonGroup::idx_getArray_marshall2(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CpdPythonGroup::idx_getArray_marshall2(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_CpdPythonGroup::idx_getArray_marshall2(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void getValue(int impl_noname_1);
 */
void CProxyElement_CpdPythonGroup::getValue(int impl_noname_1, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int impl_noname_1
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_1;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_1;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CpdPythonGroup::idx_getValue_marshall3(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CpdPythonGroup::idx_getValue_marshall3(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_CpdPythonGroup::idx_getValue_marshall3(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void getCast(int impl_noname_2);
 */
void CProxyElement_CpdPythonGroup::getCast(int impl_noname_2, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int impl_noname_2
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_2;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_2;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CpdPythonGroup::idx_getCast_marshall4(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CpdPythonGroup::idx_getCast_marshall4(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_CpdPythonGroup::idx_getCast_marshall4(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void getStatic(int impl_noname_3);
 */
void CProxyElement_CpdPythonGroup::getStatic(int impl_noname_3, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int impl_noname_3
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_3;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_3;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CpdPythonGroup::idx_getStatic_marshall5(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CpdPythonGroup::idx_getStatic_marshall5(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_CpdPythonGroup::idx_getStatic_marshall5(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void getMessage(int impl_noname_4);
 */
void CProxyElement_CpdPythonGroup::getMessage(int impl_noname_4, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int impl_noname_4
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_4;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_4;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CpdPythonGroup::idx_getMessage_marshall6(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CpdPythonGroup::idx_getMessage_marshall6(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_CpdPythonGroup::idx_getMessage_marshall6(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void registerPersistent(CkCcsRequestMsg* impl_msg);
 */
void CProxyElement_CpdPythonGroup::registerPersistent(CkCcsRequestMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CpdPythonGroup::idx_registerPersistent_CkCcsRequestMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CpdPythonGroup::idx_registerPersistent_CkCcsRequestMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_CpdPythonGroup::idx_registerPersistent_CkCcsRequestMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void pyRequest(CkCcsRequestMsg* impl_msg);
 */
void CProxyElement_CpdPythonGroup::pyRequest(CkCcsRequestMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CpdPythonGroup::idx_pyRequest_CkCcsRequestMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_CpdPythonGroup::idx_pyRequest_CkCcsRequestMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_CpdPythonGroup::idx_pyRequest_CkCcsRequestMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: CpdPythonGroup();
 */
CkGroupID CProxy_CpdPythonGroup::ckNew(const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_CpdPythonGroup::__idx, CkIndex_CpdPythonGroup::idx_CpdPythonGroup_void(), impl_msg);
  return gId;
}

// Entry point registration function
int CkIndex_CpdPythonGroup::reg_CpdPythonGroup_void() {
  int epidx = CkRegisterEp("CpdPythonGroup()",
      reinterpret_cast<CkCallFnPtr>(_call_CpdPythonGroup_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_CpdPythonGroup::_call_CpdPythonGroup_void(void* impl_msg, void* impl_obj_void)
{
  CpdPythonGroup* impl_obj = static_cast<CpdPythonGroup*>(impl_obj_void);
  new (impl_obj_void) CpdPythonGroup();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void getArray(int impl_noname_0);
 */
void CProxy_CpdPythonGroup::getArray(int impl_noname_0, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int impl_noname_0
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_0;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_0;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CpdPythonGroup::idx_getArray_marshall2(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CpdPythonGroup::idx_getArray_marshall2(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CpdPythonGroup::idx_getArray_marshall2(), impl_msg, ckGetGroupID(),0);
}
void CProxy_CpdPythonGroup::getArray(int impl_noname_0, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: int impl_noname_0
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_0;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_0;
  }
  CkSendMsgBranchMulti(CkIndex_CpdPythonGroup::idx_getArray_marshall2(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_CpdPythonGroup::getArray(int impl_noname_0, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: int impl_noname_0
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_0;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_0;
  }
  CkSendMsgBranchGroup(CkIndex_CpdPythonGroup::idx_getArray_marshall2(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_CpdPythonGroup::reg_getArray_marshall2() {
  int epidx = CkRegisterEp("getArray(int impl_noname_0)",
      reinterpret_cast<CkCallFnPtr>(_call_getArray_marshall2), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_getArray_marshall2);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_getArray_marshall2);

  return epidx;
}

void CkIndex_CpdPythonGroup::_call_getArray_marshall2(void* impl_msg, void* impl_obj_void)
{
  CpdPythonGroup* impl_obj = static_cast<CpdPythonGroup*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int impl_noname_0*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> impl_noname_0;
  implP|impl_noname_0;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->getArray(std::move(impl_noname_0.t));
}
int CkIndex_CpdPythonGroup::_callmarshall_getArray_marshall2(char* impl_buf, void* impl_obj_void) {
  CpdPythonGroup* impl_obj = static_cast<CpdPythonGroup*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int impl_noname_0*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> impl_noname_0;
  implP|impl_noname_0;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->getArray(std::move(impl_noname_0.t));
  return implP.size();
}
void CkIndex_CpdPythonGroup::_marshallmessagepup_getArray_marshall2(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int impl_noname_0*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> impl_noname_0;
  implP|impl_noname_0;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("impl_noname_0");
  implDestP|impl_noname_0;
}
PUPable_def(SINGLE_ARG(Closure_CpdPythonGroup::getArray_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void getValue(int impl_noname_1);
 */
void CProxy_CpdPythonGroup::getValue(int impl_noname_1, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int impl_noname_1
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_1;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_1;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CpdPythonGroup::idx_getValue_marshall3(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CpdPythonGroup::idx_getValue_marshall3(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CpdPythonGroup::idx_getValue_marshall3(), impl_msg, ckGetGroupID(),0);
}
void CProxy_CpdPythonGroup::getValue(int impl_noname_1, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: int impl_noname_1
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_1;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_1;
  }
  CkSendMsgBranchMulti(CkIndex_CpdPythonGroup::idx_getValue_marshall3(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_CpdPythonGroup::getValue(int impl_noname_1, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: int impl_noname_1
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_1;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_1;
  }
  CkSendMsgBranchGroup(CkIndex_CpdPythonGroup::idx_getValue_marshall3(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_CpdPythonGroup::reg_getValue_marshall3() {
  int epidx = CkRegisterEp("getValue(int impl_noname_1)",
      reinterpret_cast<CkCallFnPtr>(_call_getValue_marshall3), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_getValue_marshall3);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_getValue_marshall3);

  return epidx;
}

void CkIndex_CpdPythonGroup::_call_getValue_marshall3(void* impl_msg, void* impl_obj_void)
{
  CpdPythonGroup* impl_obj = static_cast<CpdPythonGroup*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int impl_noname_1*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> impl_noname_1;
  implP|impl_noname_1;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->getValue(std::move(impl_noname_1.t));
}
int CkIndex_CpdPythonGroup::_callmarshall_getValue_marshall3(char* impl_buf, void* impl_obj_void) {
  CpdPythonGroup* impl_obj = static_cast<CpdPythonGroup*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int impl_noname_1*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> impl_noname_1;
  implP|impl_noname_1;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->getValue(std::move(impl_noname_1.t));
  return implP.size();
}
void CkIndex_CpdPythonGroup::_marshallmessagepup_getValue_marshall3(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int impl_noname_1*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> impl_noname_1;
  implP|impl_noname_1;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("impl_noname_1");
  implDestP|impl_noname_1;
}
PUPable_def(SINGLE_ARG(Closure_CpdPythonGroup::getValue_3_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void getCast(int impl_noname_2);
 */
void CProxy_CpdPythonGroup::getCast(int impl_noname_2, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int impl_noname_2
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_2;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_2;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CpdPythonGroup::idx_getCast_marshall4(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CpdPythonGroup::idx_getCast_marshall4(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CpdPythonGroup::idx_getCast_marshall4(), impl_msg, ckGetGroupID(),0);
}
void CProxy_CpdPythonGroup::getCast(int impl_noname_2, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: int impl_noname_2
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_2;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_2;
  }
  CkSendMsgBranchMulti(CkIndex_CpdPythonGroup::idx_getCast_marshall4(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_CpdPythonGroup::getCast(int impl_noname_2, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: int impl_noname_2
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_2;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_2;
  }
  CkSendMsgBranchGroup(CkIndex_CpdPythonGroup::idx_getCast_marshall4(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_CpdPythonGroup::reg_getCast_marshall4() {
  int epidx = CkRegisterEp("getCast(int impl_noname_2)",
      reinterpret_cast<CkCallFnPtr>(_call_getCast_marshall4), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_getCast_marshall4);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_getCast_marshall4);

  return epidx;
}

void CkIndex_CpdPythonGroup::_call_getCast_marshall4(void* impl_msg, void* impl_obj_void)
{
  CpdPythonGroup* impl_obj = static_cast<CpdPythonGroup*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int impl_noname_2*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> impl_noname_2;
  implP|impl_noname_2;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->getCast(std::move(impl_noname_2.t));
}
int CkIndex_CpdPythonGroup::_callmarshall_getCast_marshall4(char* impl_buf, void* impl_obj_void) {
  CpdPythonGroup* impl_obj = static_cast<CpdPythonGroup*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int impl_noname_2*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> impl_noname_2;
  implP|impl_noname_2;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->getCast(std::move(impl_noname_2.t));
  return implP.size();
}
void CkIndex_CpdPythonGroup::_marshallmessagepup_getCast_marshall4(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int impl_noname_2*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> impl_noname_2;
  implP|impl_noname_2;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("impl_noname_2");
  implDestP|impl_noname_2;
}
PUPable_def(SINGLE_ARG(Closure_CpdPythonGroup::getCast_4_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void getStatic(int impl_noname_3);
 */
void CProxy_CpdPythonGroup::getStatic(int impl_noname_3, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int impl_noname_3
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_3;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_3;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CpdPythonGroup::idx_getStatic_marshall5(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CpdPythonGroup::idx_getStatic_marshall5(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CpdPythonGroup::idx_getStatic_marshall5(), impl_msg, ckGetGroupID(),0);
}
void CProxy_CpdPythonGroup::getStatic(int impl_noname_3, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: int impl_noname_3
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_3;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_3;
  }
  CkSendMsgBranchMulti(CkIndex_CpdPythonGroup::idx_getStatic_marshall5(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_CpdPythonGroup::getStatic(int impl_noname_3, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: int impl_noname_3
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_3;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_3;
  }
  CkSendMsgBranchGroup(CkIndex_CpdPythonGroup::idx_getStatic_marshall5(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_CpdPythonGroup::reg_getStatic_marshall5() {
  int epidx = CkRegisterEp("getStatic(int impl_noname_3)",
      reinterpret_cast<CkCallFnPtr>(_call_getStatic_marshall5), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_getStatic_marshall5);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_getStatic_marshall5);

  return epidx;
}

void CkIndex_CpdPythonGroup::_call_getStatic_marshall5(void* impl_msg, void* impl_obj_void)
{
  CpdPythonGroup* impl_obj = static_cast<CpdPythonGroup*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int impl_noname_3*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> impl_noname_3;
  implP|impl_noname_3;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->getStatic(std::move(impl_noname_3.t));
}
int CkIndex_CpdPythonGroup::_callmarshall_getStatic_marshall5(char* impl_buf, void* impl_obj_void) {
  CpdPythonGroup* impl_obj = static_cast<CpdPythonGroup*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int impl_noname_3*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> impl_noname_3;
  implP|impl_noname_3;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->getStatic(std::move(impl_noname_3.t));
  return implP.size();
}
void CkIndex_CpdPythonGroup::_marshallmessagepup_getStatic_marshall5(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int impl_noname_3*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> impl_noname_3;
  implP|impl_noname_3;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("impl_noname_3");
  implDestP|impl_noname_3;
}
PUPable_def(SINGLE_ARG(Closure_CpdPythonGroup::getStatic_5_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void getMessage(int impl_noname_4);
 */
void CProxy_CpdPythonGroup::getMessage(int impl_noname_4, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int impl_noname_4
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_4;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_4;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CpdPythonGroup::idx_getMessage_marshall6(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CpdPythonGroup::idx_getMessage_marshall6(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CpdPythonGroup::idx_getMessage_marshall6(), impl_msg, ckGetGroupID(),0);
}
void CProxy_CpdPythonGroup::getMessage(int impl_noname_4, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: int impl_noname_4
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_4;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_4;
  }
  CkSendMsgBranchMulti(CkIndex_CpdPythonGroup::idx_getMessage_marshall6(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_CpdPythonGroup::getMessage(int impl_noname_4, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: int impl_noname_4
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_4;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_4;
  }
  CkSendMsgBranchGroup(CkIndex_CpdPythonGroup::idx_getMessage_marshall6(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_CpdPythonGroup::reg_getMessage_marshall6() {
  int epidx = CkRegisterEp("getMessage(int impl_noname_4)",
      reinterpret_cast<CkCallFnPtr>(_call_getMessage_marshall6), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_getMessage_marshall6);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_getMessage_marshall6);

  return epidx;
}

void CkIndex_CpdPythonGroup::_call_getMessage_marshall6(void* impl_msg, void* impl_obj_void)
{
  CpdPythonGroup* impl_obj = static_cast<CpdPythonGroup*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int impl_noname_4*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> impl_noname_4;
  implP|impl_noname_4;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->getMessage(std::move(impl_noname_4.t));
}
int CkIndex_CpdPythonGroup::_callmarshall_getMessage_marshall6(char* impl_buf, void* impl_obj_void) {
  CpdPythonGroup* impl_obj = static_cast<CpdPythonGroup*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int impl_noname_4*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> impl_noname_4;
  implP|impl_noname_4;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->getMessage(std::move(impl_noname_4.t));
  return implP.size();
}
void CkIndex_CpdPythonGroup::_marshallmessagepup_getMessage_marshall6(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int impl_noname_4*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> impl_noname_4;
  implP|impl_noname_4;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("impl_noname_4");
  implDestP|impl_noname_4;
}
PUPable_def(SINGLE_ARG(Closure_CpdPythonGroup::getMessage_6_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void registerPersistent(CkCcsRequestMsg* impl_msg);
 */
void CProxy_CpdPythonGroup::registerPersistent(CkCcsRequestMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CpdPythonGroup::idx_registerPersistent_CkCcsRequestMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CpdPythonGroup::idx_registerPersistent_CkCcsRequestMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CpdPythonGroup::idx_registerPersistent_CkCcsRequestMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_CpdPythonGroup::registerPersistent(CkCcsRequestMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_CpdPythonGroup::idx_registerPersistent_CkCcsRequestMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_CpdPythonGroup::registerPersistent(CkCcsRequestMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_CpdPythonGroup::idx_registerPersistent_CkCcsRequestMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_CpdPythonGroup::reg_registerPersistent_CkCcsRequestMsg() {
  int epidx = CkRegisterEp("registerPersistent(CkCcsRequestMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_registerPersistent_CkCcsRequestMsg), CMessage_CkCcsRequestMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkCcsRequestMsg::ckDebugPup);
  return epidx;
}

void CkIndex_CpdPythonGroup::_call_registerPersistent_CkCcsRequestMsg(void* impl_msg, void* impl_obj_void)
{
  CpdPythonGroup* impl_obj = static_cast<CpdPythonGroup*>(impl_obj_void);
  impl_obj->registerPersistent((CkCcsRequestMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void pyRequest(CkCcsRequestMsg* impl_msg);
 */
void CProxy_CpdPythonGroup::pyRequest(CkCcsRequestMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_CpdPythonGroup::idx_pyRequest_CkCcsRequestMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_CpdPythonGroup::idx_pyRequest_CkCcsRequestMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_CpdPythonGroup::idx_pyRequest_CkCcsRequestMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_CpdPythonGroup::pyRequest(CkCcsRequestMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_CpdPythonGroup::idx_pyRequest_CkCcsRequestMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_CpdPythonGroup::pyRequest(CkCcsRequestMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_CpdPythonGroup::idx_pyRequest_CkCcsRequestMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_CpdPythonGroup::reg_pyRequest_CkCcsRequestMsg() {
  int epidx = CkRegisterEp("pyRequest(CkCcsRequestMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_pyRequest_CkCcsRequestMsg), CMessage_CkCcsRequestMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkCcsRequestMsg::ckDebugPup);
  return epidx;
}

void CkIndex_CpdPythonGroup::_call_pyRequest_CkCcsRequestMsg(void* impl_msg, void* impl_obj_void)
{
  CpdPythonGroup* impl_obj = static_cast<CpdPythonGroup*>(impl_obj_void);
  impl_obj->pyRequest((CkCcsRequestMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: CpdPythonGroup();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void getArray(int impl_noname_0);
 */
void CProxySection_CpdPythonGroup::getArray(int impl_noname_0, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int impl_noname_0
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_0;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_0;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CpdPythonGroup::idx_getArray_marshall2(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CpdPythonGroup::idx_getArray_marshall2(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void getValue(int impl_noname_1);
 */
void CProxySection_CpdPythonGroup::getValue(int impl_noname_1, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int impl_noname_1
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_1;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_1;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CpdPythonGroup::idx_getValue_marshall3(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CpdPythonGroup::idx_getValue_marshall3(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void getCast(int impl_noname_2);
 */
void CProxySection_CpdPythonGroup::getCast(int impl_noname_2, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int impl_noname_2
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_2;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_2;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CpdPythonGroup::idx_getCast_marshall4(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CpdPythonGroup::idx_getCast_marshall4(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void getStatic(int impl_noname_3);
 */
void CProxySection_CpdPythonGroup::getStatic(int impl_noname_3, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int impl_noname_3
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_3;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_3;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CpdPythonGroup::idx_getStatic_marshall5(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CpdPythonGroup::idx_getStatic_marshall5(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void getMessage(int impl_noname_4);
 */
void CProxySection_CpdPythonGroup::getMessage(int impl_noname_4, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int impl_noname_4
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_4;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_4;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CpdPythonGroup::idx_getMessage_marshall6(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CpdPythonGroup::idx_getMessage_marshall6(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void registerPersistent(CkCcsRequestMsg* impl_msg);
 */
void CProxySection_CpdPythonGroup::registerPersistent(CkCcsRequestMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CpdPythonGroup::idx_registerPersistent_CkCcsRequestMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CpdPythonGroup::idx_registerPersistent_CkCcsRequestMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void pyRequest(CkCcsRequestMsg* impl_msg);
 */
void CProxySection_CpdPythonGroup::pyRequest(CkCcsRequestMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_CpdPythonGroup::idx_pyRequest_CkCcsRequestMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_CpdPythonGroup::idx_pyRequest_CkCcsRequestMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* ---------------- python wrapper -------------- */
PyMethodDef CkPython_CpdPythonGroup::CkPy_MethodsCustom[] = {
  {"getArray",_Python_CpdPythonGroup_getArray,METH_VARARGS},
  {"getValue",_Python_CpdPythonGroup_getValue,METH_VARARGS},
  {"getCast",_Python_CpdPythonGroup_getCast,METH_VARARGS},
  {"getStatic",_Python_CpdPythonGroup_getStatic,METH_VARARGS},
  {"getMessage",_Python_CpdPythonGroup_getMessage,METH_VARARGS},
  {NULL, NULL}
};

const char * CkPython_CpdPythonGroup::CkPy_MethodsCustomDoc = "charm.__doc__ = \"Available methods for object CpdPythonGroup:\\n"
  "getArray -- ""\\n"
  "getValue -- ""\\n"
  "getCast -- ""\\n"
  "getStatic -- ""\\n"
  "getMessage -- ""\\n"
  "\"";

/* DEFS: CpdPythonGroup();
 */
/* DEFS: void getArray(int impl_noname_0);
 */
PyObject *_Python_CpdPythonGroup_getArray(PyObject *self, PyObject *arg) {
  PyObject *dict = PyModule_GetDict(PyImport_AddModule("__main__"));
  int pyNumber = PyInt_AsLong(PyDict_GetItemString(dict,"__charmNumber__"));
  PythonObject *pythonObj = (PythonObject *)PyLong_AsVoidPtr(PyDict_GetItemString(dict,"__charmObject__"));
  CpdPythonGroup *object = static_cast<CpdPythonGroup*>(pythonObj);
  object->pyWorkers[pyNumber].arg=arg;
  object->pyWorkers[pyNumber].result=&CtvAccess(pythonReturnValue);
  object->pyWorkers[pyNumber].pythread=PyThreadState_Get();
  CtvAccess(pythonReturnValue) = 0;
  //pyWorker->thisProxy.getArray(pyNumber);
  object->getArray(pyNumber);
  //CthSuspend();
  if (CtvAccess(pythonReturnValue)) {
    return CtvAccess(pythonReturnValue);
  } else {
    Py_INCREF(Py_None); return Py_None;
  }
}
/* DEFS: void getValue(int impl_noname_1);
 */
PyObject *_Python_CpdPythonGroup_getValue(PyObject *self, PyObject *arg) {
  PyObject *dict = PyModule_GetDict(PyImport_AddModule("__main__"));
  int pyNumber = PyInt_AsLong(PyDict_GetItemString(dict,"__charmNumber__"));
  PythonObject *pythonObj = (PythonObject *)PyLong_AsVoidPtr(PyDict_GetItemString(dict,"__charmObject__"));
  CpdPythonGroup *object = static_cast<CpdPythonGroup*>(pythonObj);
  object->pyWorkers[pyNumber].arg=arg;
  object->pyWorkers[pyNumber].result=&CtvAccess(pythonReturnValue);
  object->pyWorkers[pyNumber].pythread=PyThreadState_Get();
  CtvAccess(pythonReturnValue) = 0;
  //pyWorker->thisProxy.getValue(pyNumber);
  object->getValue(pyNumber);
  //CthSuspend();
  if (CtvAccess(pythonReturnValue)) {
    return CtvAccess(pythonReturnValue);
  } else {
    Py_INCREF(Py_None); return Py_None;
  }
}
/* DEFS: void getCast(int impl_noname_2);
 */
PyObject *_Python_CpdPythonGroup_getCast(PyObject *self, PyObject *arg) {
  PyObject *dict = PyModule_GetDict(PyImport_AddModule("__main__"));
  int pyNumber = PyInt_AsLong(PyDict_GetItemString(dict,"__charmNumber__"));
  PythonObject *pythonObj = (PythonObject *)PyLong_AsVoidPtr(PyDict_GetItemString(dict,"__charmObject__"));
  CpdPythonGroup *object = static_cast<CpdPythonGroup*>(pythonObj);
  object->pyWorkers[pyNumber].arg=arg;
  object->pyWorkers[pyNumber].result=&CtvAccess(pythonReturnValue);
  object->pyWorkers[pyNumber].pythread=PyThreadState_Get();
  CtvAccess(pythonReturnValue) = 0;
  //pyWorker->thisProxy.getCast(pyNumber);
  object->getCast(pyNumber);
  //CthSuspend();
  if (CtvAccess(pythonReturnValue)) {
    return CtvAccess(pythonReturnValue);
  } else {
    Py_INCREF(Py_None); return Py_None;
  }
}
/* DEFS: void getStatic(int impl_noname_3);
 */
PyObject *_Python_CpdPythonGroup_getStatic(PyObject *self, PyObject *arg) {
  PyObject *dict = PyModule_GetDict(PyImport_AddModule("__main__"));
  int pyNumber = PyInt_AsLong(PyDict_GetItemString(dict,"__charmNumber__"));
  PythonObject *pythonObj = (PythonObject *)PyLong_AsVoidPtr(PyDict_GetItemString(dict,"__charmObject__"));
  CpdPythonGroup *object = static_cast<CpdPythonGroup*>(pythonObj);
  object->pyWorkers[pyNumber].arg=arg;
  object->pyWorkers[pyNumber].result=&CtvAccess(pythonReturnValue);
  object->pyWorkers[pyNumber].pythread=PyThreadState_Get();
  CtvAccess(pythonReturnValue) = 0;
  //pyWorker->thisProxy.getStatic(pyNumber);
  object->getStatic(pyNumber);
  //CthSuspend();
  if (CtvAccess(pythonReturnValue)) {
    return CtvAccess(pythonReturnValue);
  } else {
    Py_INCREF(Py_None); return Py_None;
  }
}
/* DEFS: void getMessage(int impl_noname_4);
 */
PyObject *_Python_CpdPythonGroup_getMessage(PyObject *self, PyObject *arg) {
  PyObject *dict = PyModule_GetDict(PyImport_AddModule("__main__"));
  int pyNumber = PyInt_AsLong(PyDict_GetItemString(dict,"__charmNumber__"));
  PythonObject *pythonObj = (PythonObject *)PyLong_AsVoidPtr(PyDict_GetItemString(dict,"__charmObject__"));
  CpdPythonGroup *object = static_cast<CpdPythonGroup*>(pythonObj);
  object->pyWorkers[pyNumber].arg=arg;
  object->pyWorkers[pyNumber].result=&CtvAccess(pythonReturnValue);
  object->pyWorkers[pyNumber].pythread=PyThreadState_Get();
  CtvAccess(pythonReturnValue) = 0;
  //pyWorker->thisProxy.getMessage(pyNumber);
  object->getMessage(pyNumber);
  //CthSuspend();
  if (CtvAccess(pythonReturnValue)) {
    return CtvAccess(pythonReturnValue);
  } else {
    Py_INCREF(Py_None); return Py_None;
  }
}
/* DEFS: void registerPersistent(CkCcsRequestMsg* impl_msg);
 */
/* DEFS: void pyRequest(CkCcsRequestMsg* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_CpdPythonGroup::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,CpdPythonGroup::isIrreducible());
  // REG: CpdPythonGroup();
  idx_CpdPythonGroup_void();
  CkRegisterDefaultCtor(__idx, idx_CpdPythonGroup_void());

  // REG: void getArray(int impl_noname_0);
  idx_getArray_marshall2();

  // REG: void getValue(int impl_noname_1);
  idx_getValue_marshall3();

  // REG: void getCast(int impl_noname_2);
  idx_getCast_marshall4();

  // REG: void getStatic(int impl_noname_3);
  idx_getStatic_marshall5();

  // REG: void getMessage(int impl_noname_4);
  idx_getMessage_marshall6();

  // REG: void registerPersistent(CkCcsRequestMsg* impl_msg);
  idx_registerPersistent_CkCcsRequestMsg();

  // REG: void pyRequest(CkCcsRequestMsg* impl_msg);
  idx_pyRequest_CkCcsRequestMsg();

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registercharmdebug_python(void)
{
  static int _done = 0; if(_done) return; _done = 1;
/* REG: mainchare CpdPython: Chare{
CpdPython(CkArgMsg* impl_msg);
};
*/
  CkIndex_CpdPython::__register("CpdPython", sizeof(CpdPython));

/* REG: group CpdPythonGroup: IrrGroup{
CpdPythonGroup();
void getArray(int impl_noname_0);
void getValue(int impl_noname_1);
void getCast(int impl_noname_2);
void getStatic(int impl_noname_3);
void getMessage(int impl_noname_4);
void registerPersistent(CkCcsRequestMsg* impl_msg);
void pyRequest(CkCcsRequestMsg* impl_msg);
};
*/
  CkIndex_CpdPythonGroup::__register("CpdPythonGroup", sizeof(CpdPythonGroup));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_CpdPython::virtual_pup(PUP::er &p) {
    recursive_pup<CpdPython>(dynamic_cast<CpdPython*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_CpdPythonGroup::virtual_pup(PUP::er &p) {
    recursive_pup<CpdPythonGroup>(dynamic_cast<CpdPythonGroup*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
