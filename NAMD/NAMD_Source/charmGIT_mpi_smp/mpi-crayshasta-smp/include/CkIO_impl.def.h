
namespace Ck {
namespace IO {
namespace impl {

/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Director::openFile_2_closure : public SDAG::Closure {
            std::string name;
            CkCallback opened;
            Options opts;


      openFile_2_closure() {
        init();
      }
      openFile_2_closure(CkMigrateMessage*) {
        init();
      }
            std::string & getP0() { return name;}
            CkCallback & getP1() { return opened;}
            Options & getP2() { return opts;}
      void pup(PUP::er& __p) {
        __p | name;
        __p | opened;
        __p | opts;
        packClosure(__p);
      }
      virtual ~openFile_2_closure() {
      }
      PUPable_decl(SINGLE_ARG(openFile_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Director::fileOpened_3_closure : public SDAG::Closure {
            FileToken file;


      fileOpened_3_closure() {
        init();
      }
      fileOpened_3_closure(CkMigrateMessage*) {
        init();
      }
            FileToken & getP0() { return file;}
      void pup(PUP::er& __p) {
        __p | file;
        packClosure(__p);
      }
      virtual ~fileOpened_3_closure() {
      }
      PUPable_decl(SINGLE_ARG(fileOpened_3_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Director::sessionComplete_4_closure : public SDAG::Closure {
            FileToken file;


      sessionComplete_4_closure() {
        init();
      }
      sessionComplete_4_closure(CkMigrateMessage*) {
        init();
      }
            FileToken & getP0() { return file;}
      void pup(PUP::er& __p) {
        __p | file;
        packClosure(__p);
      }
      virtual ~sessionComplete_4_closure() {
      }
      PUPable_decl(SINGLE_ARG(sessionComplete_4_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Director::prepareWriteSession_5_closure : public SDAG::Closure {
            FileToken file;
            size_t bytes;
            size_t offset;
            CkCallback ready;
            CkCallback complete;


      prepareWriteSession_5_closure() {
        init();
      }
      prepareWriteSession_5_closure(CkMigrateMessage*) {
        init();
      }
            FileToken & getP0() { return file;}
            size_t & getP1() { return bytes;}
            size_t & getP2() { return offset;}
            CkCallback & getP3() { return ready;}
            CkCallback & getP4() { return complete;}
      void pup(PUP::er& __p) {
        __p | file;
        __p | bytes;
        __p | offset;
        __p | ready;
        __p | complete;
        packClosure(__p);
      }
      virtual ~prepareWriteSession_5_closure() {
      }
      PUPable_decl(SINGLE_ARG(prepareWriteSession_5_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Director::prepareWriteSession_6_closure : public SDAG::Closure {
            FileToken file;
            size_t bytes;
            size_t offset;
            CkCallback ready;
            char *commitData;
            size_t commitBytes;
            size_t commitOffset;
            CkCallback complete;

      CkMarshallMsg* _impl_marshall;
      char* _impl_buf_in;
      int _impl_buf_size;

      prepareWriteSession_6_closure() {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      prepareWriteSession_6_closure(CkMigrateMessage*) {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
            FileToken & getP0() { return file;}
            size_t & getP1() { return bytes;}
            size_t & getP2() { return offset;}
            CkCallback & getP3() { return ready;}
            char *& getP4() { return commitData;}
            size_t & getP5() { return commitBytes;}
            size_t & getP6() { return commitOffset;}
            CkCallback & getP7() { return complete;}
      void pup(PUP::er& __p) {
        __p | file;
        __p | bytes;
        __p | offset;
        __p | ready;
        __p | commitBytes;
        __p | commitOffset;
        __p | complete;
        packClosure(__p);
        __p | _impl_buf_size;
        bool hasMsg = (_impl_marshall != 0); __p | hasMsg;
        if (hasMsg) CkPupMessage(__p, (void**)&_impl_marshall);
        else PUParray(__p, _impl_buf_in, _impl_buf_size);
        if (__p.isUnpacking()) {
          char *impl_buf = _impl_marshall ? _impl_marshall->msgBuf : _impl_buf_in;
          PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<FileToken> file;
  implP|file;
  PUP::detail::TemporaryObjectHolder<size_t> bytes;
  implP|bytes;
  PUP::detail::TemporaryObjectHolder<size_t> offset;
  implP|offset;
  PUP::detail::TemporaryObjectHolder<CkCallback> ready;
  implP|ready;
  int impl_off_commitData, impl_cnt_commitData;
  implP|impl_off_commitData;
  implP|impl_cnt_commitData;
  PUP::detail::TemporaryObjectHolder<size_t> commitBytes;
  implP|commitBytes;
  PUP::detail::TemporaryObjectHolder<size_t> commitOffset;
  implP|commitOffset;
  PUP::detail::TemporaryObjectHolder<CkCallback> complete;
  implP|complete;
          impl_buf+=CK_ALIGN(implP.size(),16);
          commitData = (char *)(impl_buf+impl_off_commitData);
        }
      }
      virtual ~prepareWriteSession_6_closure() {
        if (_impl_marshall) CmiFree(UsrToEnv(_impl_marshall));
      }
      PUPable_decl(SINGLE_ARG(prepareWriteSession_6_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Director::close_9_closure : public SDAG::Closure {
            FileToken token;
            CkCallback closed;


      close_9_closure() {
        init();
      }
      close_9_closure(CkMigrateMessage*) {
        init();
      }
            FileToken & getP0() { return token;}
            CkCallback & getP1() { return closed;}
      void pup(PUP::er& __p) {
        __p | token;
        __p | closed;
        packClosure(__p);
      }
      virtual ~close_9_closure() {
      }
      PUPable_decl(SINGLE_ARG(close_9_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Manager::run_2_closure : public SDAG::Closure {
      

      run_2_closure() {
        init();
      }
      run_2_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~run_2_closure() {
      }
      PUPable_decl(SINGLE_ARG(run_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Manager::openFile_3_closure : public SDAG::Closure {
            unsigned int opnum;
            FileToken token;
            std::string name;
            Options opts;


      openFile_3_closure() {
        init();
      }
      openFile_3_closure(CkMigrateMessage*) {
        init();
      }
            unsigned int & getP0() { return opnum;}
            FileToken & getP1() { return token;}
            std::string & getP2() { return name;}
            Options & getP3() { return opts;}
      void pup(PUP::er& __p) {
        __p | opnum;
        __p | token;
        __p | name;
        __p | opts;
        packClosure(__p);
      }
      virtual ~openFile_3_closure() {
      }
      PUPable_decl(SINGLE_ARG(openFile_3_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Manager::close_4_closure : public SDAG::Closure {
            unsigned int opnum;
            FileToken token;
            CkCallback closed;


      close_4_closure() {
        init();
      }
      close_4_closure(CkMigrateMessage*) {
        init();
      }
            unsigned int & getP0() { return opnum;}
            FileToken & getP1() { return token;}
            CkCallback & getP2() { return closed;}
      void pup(PUP::er& __p) {
        __p | opnum;
        __p | token;
        __p | closed;
        packClosure(__p);
      }
      virtual ~close_4_closure() {
      }
      PUPable_decl(SINGLE_ARG(close_4_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_WriteSession::forwardData_2_closure : public SDAG::Closure {
            char *data;
            size_t bytes;
            size_t offset;

      CkMarshallMsg* _impl_marshall;
      char* _impl_buf_in;
      int _impl_buf_size;

      forwardData_2_closure() {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      forwardData_2_closure(CkMigrateMessage*) {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
            char *& getP0() { return data;}
            size_t & getP1() { return bytes;}
            size_t & getP2() { return offset;}
      void pup(PUP::er& __p) {
        __p | bytes;
        __p | offset;
        packClosure(__p);
        __p | _impl_buf_size;
        bool hasMsg = (_impl_marshall != 0); __p | hasMsg;
        if (hasMsg) CkPupMessage(__p, (void**)&_impl_marshall);
        else PUParray(__p, _impl_buf_in, _impl_buf_size);
        if (__p.isUnpacking()) {
          char *impl_buf = _impl_marshall ? _impl_marshall->msgBuf : _impl_buf_in;
          PUP::fromMem implP(impl_buf);
  int impl_off_data, impl_cnt_data;
  implP|impl_off_data;
  implP|impl_cnt_data;
  PUP::detail::TemporaryObjectHolder<size_t> bytes;
  implP|bytes;
  PUP::detail::TemporaryObjectHolder<size_t> offset;
  implP|offset;
          impl_buf+=CK_ALIGN(implP.size(),16);
          data = (char *)(impl_buf+impl_off_data);
        }
      }
      virtual ~forwardData_2_closure() {
        if (_impl_marshall) CmiFree(UsrToEnv(_impl_marshall));
      }
      PUPable_decl(SINGLE_ARG(forwardData_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_WriteSession::syncData_3_closure : public SDAG::Closure {
      

      syncData_3_closure() {
        init();
      }
      syncData_3_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~syncData_3_closure() {
      }
      PUPable_decl(SINGLE_ARG(syncData_3_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


} // namespace impl

} // namespace IO

} // namespace Ck


namespace Ck {
namespace IO {
namespace impl {
/* DEFS: readonly CProxy_Director director;
 */
extern CProxy_Director director;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_director(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|director;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: mainchare Director: Chare{
Director(CkArgMsg* impl_msg);
void openFile(const std::string &name, const CkCallback &opened, const Options &opts);
void fileOpened(const FileToken &file);
void sessionComplete(const FileToken &file);
void prepareWriteSession(const FileToken &file, const size_t &bytes, const size_t &offset, const CkCallback &ready, const CkCallback &complete);
void prepareWriteSession(const FileToken &file, const size_t &bytes, const size_t &offset, const CkCallback &ready, const char *commitData, const size_t &commitBytes, const size_t &commitOffset, const CkCallback &complete);
void sessionReady(CkReductionMsg* impl_msg);
void sessionDone(CkReductionMsg* impl_msg);
void close(const FileToken &token, const CkCallback &closed);
Director(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_Director::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: Director(CkArgMsg* impl_msg);
 */
CkChareID CProxy_Director::ckNew(CkArgMsg* impl_msg, int impl_onPE)
{
  CkChareID impl_ret;
  CkCreateChare(CkIndex_Director::__idx, CkIndex_Director::idx_Director_CkArgMsg(), impl_msg, &impl_ret, impl_onPE);
  return impl_ret;
}
void CProxy_Director::ckNew(CkArgMsg* impl_msg, CkChareID* pcid, int impl_onPE)
{
  CkCreateChare(CkIndex_Director::__idx, CkIndex_Director::idx_Director_CkArgMsg(), impl_msg, pcid, impl_onPE);
}

// Entry point registration function
int CkIndex_Director::reg_Director_CkArgMsg() {
  int epidx = CkRegisterEp("Director(CkArgMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_Director_CkArgMsg), CMessage_CkArgMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkArgMsg::ckDebugPup);
  return epidx;
}

void CkIndex_Director::_call_Director_CkArgMsg(void* impl_msg, void* impl_obj_void)
{
  Director* impl_obj = static_cast<Director*>(impl_obj_void);
  new (impl_obj_void) Director((CkArgMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void openFile(const std::string &name, const CkCallback &opened, const Options &opts);
 */
void CProxy_Director::openFile(const std::string &name, const CkCallback &opened, const Options &opts, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const std::string &name, const CkCallback &opened, const Options &opts
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<std::string>::type>::type &)name;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)opened;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Options>::type>::type &)opts;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<std::string>::type>::type &)name;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)opened;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Options>::type>::type &)opts;
  }
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_Director::idx_openFile_marshall2(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_Director::idx_openFile_marshall2(), impl_msg, &ckGetChareID(),destPE);
  } else {
    CkSendMsg(CkIndex_Director::idx_openFile_marshall2(), impl_msg, &ckGetChareID(),0);
  }
}

// Entry point registration function
int CkIndex_Director::reg_openFile_marshall2() {
  int epidx = CkRegisterEp("openFile(const std::string &name, const CkCallback &opened, const Options &opts)",
      reinterpret_cast<CkCallFnPtr>(_call_openFile_marshall2), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_openFile_marshall2);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_openFile_marshall2);

  return epidx;
}

void CkIndex_Director::_call_openFile_marshall2(void* impl_msg, void* impl_obj_void)
{
  Director* impl_obj = static_cast<Director*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const std::string &name, const CkCallback &opened, const Options &opts*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<std::string> name;
  implP|name;
  PUP::detail::TemporaryObjectHolder<CkCallback> opened;
  implP|opened;
  PUP::detail::TemporaryObjectHolder<Options> opts;
  implP|opts;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->openFile(std::move(name.t), std::move(opened.t), std::move(opts.t));
}
int CkIndex_Director::_callmarshall_openFile_marshall2(char* impl_buf, void* impl_obj_void) {
  Director* impl_obj = static_cast<Director*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const std::string &name, const CkCallback &opened, const Options &opts*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<std::string> name;
  implP|name;
  PUP::detail::TemporaryObjectHolder<CkCallback> opened;
  implP|opened;
  PUP::detail::TemporaryObjectHolder<Options> opts;
  implP|opts;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->openFile(std::move(name.t), std::move(opened.t), std::move(opts.t));
  return implP.size();
}
void CkIndex_Director::_marshallmessagepup_openFile_marshall2(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const std::string &name, const CkCallback &opened, const Options &opts*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<std::string> name;
  implP|name;
  PUP::detail::TemporaryObjectHolder<CkCallback> opened;
  implP|opened;
  PUP::detail::TemporaryObjectHolder<Options> opts;
  implP|opts;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("name");
  implDestP|name;
  if (implDestP.hasComments()) implDestP.comment("opened");
  implDestP|opened;
  if (implDestP.hasComments()) implDestP.comment("opts");
  implDestP|opts;
}
PUPable_def(SINGLE_ARG(Closure_Director::openFile_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void fileOpened(const FileToken &file);
 */
void CProxy_Director::fileOpened(const FileToken &file, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const FileToken &file
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<FileToken>::type>::type &)file;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<FileToken>::type>::type &)file;
  }
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_Director::idx_fileOpened_marshall3(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_Director::idx_fileOpened_marshall3(), impl_msg, &ckGetChareID(),destPE);
  } else {
    CkSendMsg(CkIndex_Director::idx_fileOpened_marshall3(), impl_msg, &ckGetChareID(),0);
  }
}
void CkIndex_Director::_call_redn_wrapper_fileOpened_marshall3(void* impl_msg, void* impl_obj_void)
{
  Director* impl_obj = static_cast<Director*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
  /*Unmarshall pup'd fields: const FileToken &file*/
  PUP::fromMem implP(impl_buf);
  /* non two-param case */
  PUP::detail::TemporaryObjectHolder<FileToken> file;
  implP|file;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->fileOpened(std::move(file.t));
  delete (CkReductionMsg*)impl_msg;
}


// Entry point registration function
int CkIndex_Director::reg_fileOpened_marshall3() {
  int epidx = CkRegisterEp("fileOpened(const FileToken &file)",
      reinterpret_cast<CkCallFnPtr>(_call_fileOpened_marshall3), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_fileOpened_marshall3);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_fileOpened_marshall3);

  return epidx;
}


// Redn wrapper registration function
int CkIndex_Director::reg_redn_wrapper_fileOpened_marshall3() {
  return CkRegisterEp("redn_wrapper_fileOpened(CkReductionMsg *impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_redn_wrapper_fileOpened_marshall3), CkMarshallMsg::__idx, __idx, 0);
}

void CkIndex_Director::_call_fileOpened_marshall3(void* impl_msg, void* impl_obj_void)
{
  Director* impl_obj = static_cast<Director*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const FileToken &file*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<FileToken> file;
  implP|file;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->fileOpened(std::move(file.t));
}
int CkIndex_Director::_callmarshall_fileOpened_marshall3(char* impl_buf, void* impl_obj_void) {
  Director* impl_obj = static_cast<Director*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const FileToken &file*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<FileToken> file;
  implP|file;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->fileOpened(std::move(file.t));
  return implP.size();
}
void CkIndex_Director::_marshallmessagepup_fileOpened_marshall3(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const FileToken &file*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<FileToken> file;
  implP|file;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("file");
  implDestP|file;
}
PUPable_def(SINGLE_ARG(Closure_Director::fileOpened_3_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void sessionComplete(const FileToken &file);
 */
void CProxy_Director::sessionComplete(const FileToken &file, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const FileToken &file
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<FileToken>::type>::type &)file;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<FileToken>::type>::type &)file;
  }
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_Director::idx_sessionComplete_marshall4(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_Director::idx_sessionComplete_marshall4(), impl_msg, &ckGetChareID(),destPE);
  } else {
    CkSendMsg(CkIndex_Director::idx_sessionComplete_marshall4(), impl_msg, &ckGetChareID(),0);
  }
}
void CkIndex_Director::_call_redn_wrapper_sessionComplete_marshall4(void* impl_msg, void* impl_obj_void)
{
  Director* impl_obj = static_cast<Director*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
  /*Unmarshall pup'd fields: const FileToken &file*/
  PUP::fromMem implP(impl_buf);
  /* non two-param case */
  PUP::detail::TemporaryObjectHolder<FileToken> file;
  implP|file;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->sessionComplete(std::move(file.t));
  delete (CkReductionMsg*)impl_msg;
}


// Entry point registration function
int CkIndex_Director::reg_sessionComplete_marshall4() {
  int epidx = CkRegisterEp("sessionComplete(const FileToken &file)",
      reinterpret_cast<CkCallFnPtr>(_call_sessionComplete_marshall4), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_sessionComplete_marshall4);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_sessionComplete_marshall4);

  return epidx;
}


// Redn wrapper registration function
int CkIndex_Director::reg_redn_wrapper_sessionComplete_marshall4() {
  return CkRegisterEp("redn_wrapper_sessionComplete(CkReductionMsg *impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_redn_wrapper_sessionComplete_marshall4), CkMarshallMsg::__idx, __idx, 0);
}

void CkIndex_Director::_call_sessionComplete_marshall4(void* impl_msg, void* impl_obj_void)
{
  Director* impl_obj = static_cast<Director*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const FileToken &file*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<FileToken> file;
  implP|file;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->sessionComplete(std::move(file.t));
}
int CkIndex_Director::_callmarshall_sessionComplete_marshall4(char* impl_buf, void* impl_obj_void) {
  Director* impl_obj = static_cast<Director*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const FileToken &file*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<FileToken> file;
  implP|file;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->sessionComplete(std::move(file.t));
  return implP.size();
}
void CkIndex_Director::_marshallmessagepup_sessionComplete_marshall4(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const FileToken &file*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<FileToken> file;
  implP|file;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("file");
  implDestP|file;
}
PUPable_def(SINGLE_ARG(Closure_Director::sessionComplete_4_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void prepareWriteSession(const FileToken &file, const size_t &bytes, const size_t &offset, const CkCallback &ready, const CkCallback &complete);
 */
void CProxy_Director::prepareWriteSession(const FileToken &file, const size_t &bytes, const size_t &offset, const CkCallback &ready, const CkCallback &complete, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const FileToken &file, const size_t &bytes, const size_t &offset, const CkCallback &ready, const CkCallback &complete
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<FileToken>::type>::type &)file;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<size_t>::type>::type &)bytes;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<size_t>::type>::type &)offset;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)ready;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)complete;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<FileToken>::type>::type &)file;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<size_t>::type>::type &)bytes;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<size_t>::type>::type &)offset;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)ready;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)complete;
  }
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_Director::idx_prepareWriteSession_marshall5(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_Director::idx_prepareWriteSession_marshall5(), impl_msg, &ckGetChareID(),destPE);
  } else {
    CkSendMsg(CkIndex_Director::idx_prepareWriteSession_marshall5(), impl_msg, &ckGetChareID(),0);
  }
}

// Entry point registration function
int CkIndex_Director::reg_prepareWriteSession_marshall5() {
  int epidx = CkRegisterEp("prepareWriteSession(const FileToken &file, const size_t &bytes, const size_t &offset, const CkCallback &ready, const CkCallback &complete)",
      reinterpret_cast<CkCallFnPtr>(_call_prepareWriteSession_marshall5), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_prepareWriteSession_marshall5);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_prepareWriteSession_marshall5);

  return epidx;
}

void CkIndex_Director::_call_prepareWriteSession_marshall5(void* impl_msg, void* impl_obj_void)
{
  Director* impl_obj = static_cast<Director*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  PUP::fromMem implP(impl_buf);
  Closure_Director::prepareWriteSession_5_closure* genClosure = new Closure_Director::prepareWriteSession_5_closure();
  implP|genClosure->file;
  implP|genClosure->bytes;
  implP|genClosure->offset;
  implP|genClosure->ready;
  implP|genClosure->complete;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->_sdag_fnc_prepareWriteSession(genClosure);
  genClosure->deref();
}
int CkIndex_Director::_callmarshall_prepareWriteSession_marshall5(char* impl_buf, void* impl_obj_void) {
  Director* impl_obj = static_cast<Director*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  PUP::fromMem implP(impl_buf);
  Closure_Director::prepareWriteSession_5_closure* genClosure = new Closure_Director::prepareWriteSession_5_closure();
  implP|genClosure->file;
  implP|genClosure->bytes;
  implP|genClosure->offset;
  implP|genClosure->ready;
  implP|genClosure->complete;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->_sdag_fnc_prepareWriteSession(genClosure);
  genClosure->deref();
  return implP.size();
}
void CkIndex_Director::_marshallmessagepup_prepareWriteSession_marshall5(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const FileToken &file, const size_t &bytes, const size_t &offset, const CkCallback &ready, const CkCallback &complete*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<FileToken> file;
  implP|file;
  PUP::detail::TemporaryObjectHolder<size_t> bytes;
  implP|bytes;
  PUP::detail::TemporaryObjectHolder<size_t> offset;
  implP|offset;
  PUP::detail::TemporaryObjectHolder<CkCallback> ready;
  implP|ready;
  PUP::detail::TemporaryObjectHolder<CkCallback> complete;
  implP|complete;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("file");
  implDestP|file;
  if (implDestP.hasComments()) implDestP.comment("bytes");
  implDestP|bytes;
  if (implDestP.hasComments()) implDestP.comment("offset");
  implDestP|offset;
  if (implDestP.hasComments()) implDestP.comment("ready");
  implDestP|ready;
  if (implDestP.hasComments()) implDestP.comment("complete");
  implDestP|complete;
}
PUPable_def(SINGLE_ARG(Closure_Director::prepareWriteSession_5_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void prepareWriteSession(const FileToken &file, const size_t &bytes, const size_t &offset, const CkCallback &ready, const char *commitData, const size_t &commitBytes, const size_t &commitOffset, const CkCallback &complete);
 */
void CProxy_Director::prepareWriteSession(const FileToken &file, const size_t &bytes, const size_t &offset, const CkCallback &ready, const char *commitData, const size_t &commitBytes, const size_t &commitOffset, const CkCallback &complete, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const FileToken &file, const size_t &bytes, const size_t &offset, const CkCallback &ready, const char *commitData, const size_t &commitBytes, const size_t &commitOffset, const CkCallback &complete
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_commitData, impl_cnt_commitData;
  impl_off_commitData=impl_off=CK_ALIGN(impl_off,sizeof(char));
  impl_off+=(impl_cnt_commitData=sizeof(char)*(commitBytes));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<FileToken>::type>::type &)file;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<size_t>::type>::type &)bytes;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<size_t>::type>::type &)offset;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)ready;
    implP|impl_off_commitData;
    implP|impl_cnt_commitData;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<size_t>::type>::type &)commitBytes;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<size_t>::type>::type &)commitOffset;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)complete;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<FileToken>::type>::type &)file;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<size_t>::type>::type &)bytes;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<size_t>::type>::type &)offset;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)ready;
    implP|impl_off_commitData;
    implP|impl_cnt_commitData;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<size_t>::type>::type &)commitBytes;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<size_t>::type>::type &)commitOffset;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)complete;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_commitData,commitData,impl_cnt_commitData);
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_Director::idx_prepareWriteSession_marshall6(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_Director::idx_prepareWriteSession_marshall6(), impl_msg, &ckGetChareID(),destPE);
  } else {
    CkSendMsg(CkIndex_Director::idx_prepareWriteSession_marshall6(), impl_msg, &ckGetChareID(),0);
  }
}

// Entry point registration function
int CkIndex_Director::reg_prepareWriteSession_marshall6() {
  int epidx = CkRegisterEp("prepareWriteSession(const FileToken &file, const size_t &bytes, const size_t &offset, const CkCallback &ready, const char *commitData, const size_t &commitBytes, const size_t &commitOffset, const CkCallback &complete)",
      reinterpret_cast<CkCallFnPtr>(_call_prepareWriteSession_marshall6), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_prepareWriteSession_marshall6);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_prepareWriteSession_marshall6);

  return epidx;
}

void CkIndex_Director::_call_prepareWriteSession_marshall6(void* impl_msg, void* impl_obj_void)
{
  Director* impl_obj = static_cast<Director*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  PUP::fromMem implP(impl_buf);
  Closure_Director::prepareWriteSession_6_closure* genClosure = new Closure_Director::prepareWriteSession_6_closure();
  implP|genClosure->file;
  implP|genClosure->bytes;
  implP|genClosure->offset;
  implP|genClosure->ready;
  int impl_off_commitData, impl_cnt_commitData;
  implP|impl_off_commitData;
  implP|impl_cnt_commitData;
  implP|genClosure->commitBytes;
  implP|genClosure->commitOffset;
  implP|genClosure->complete;
  impl_buf+=CK_ALIGN(implP.size(),16);
  genClosure->commitData = (char *)(impl_buf+impl_off_commitData);
  genClosure->_impl_marshall = impl_msg_typed;
  CkReferenceMsg(genClosure->_impl_marshall);
  impl_obj->_sdag_fnc_prepareWriteSession(genClosure);
  genClosure->deref();
}
int CkIndex_Director::_callmarshall_prepareWriteSession_marshall6(char* impl_buf, void* impl_obj_void) {
  Director* impl_obj = static_cast<Director*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  PUP::fromMem implP(impl_buf);
  Closure_Director::prepareWriteSession_6_closure* genClosure = new Closure_Director::prepareWriteSession_6_closure();
  implP|genClosure->file;
  implP|genClosure->bytes;
  implP|genClosure->offset;
  implP|genClosure->ready;
  int impl_off_commitData, impl_cnt_commitData;
  implP|impl_off_commitData;
  implP|impl_cnt_commitData;
  implP|genClosure->commitBytes;
  implP|genClosure->commitOffset;
  implP|genClosure->complete;
  impl_buf+=CK_ALIGN(implP.size(),16);
  genClosure->commitData = (char *)(impl_buf+impl_off_commitData);
  impl_obj->_sdag_fnc_prepareWriteSession(genClosure);
  genClosure->deref();
  return implP.size();
}
void CkIndex_Director::_marshallmessagepup_prepareWriteSession_marshall6(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const FileToken &file, const size_t &bytes, const size_t &offset, const CkCallback &ready, const char *commitData, const size_t &commitBytes, const size_t &commitOffset, const CkCallback &complete*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<FileToken> file;
  implP|file;
  PUP::detail::TemporaryObjectHolder<size_t> bytes;
  implP|bytes;
  PUP::detail::TemporaryObjectHolder<size_t> offset;
  implP|offset;
  PUP::detail::TemporaryObjectHolder<CkCallback> ready;
  implP|ready;
  int impl_off_commitData, impl_cnt_commitData;
  implP|impl_off_commitData;
  implP|impl_cnt_commitData;
  PUP::detail::TemporaryObjectHolder<size_t> commitBytes;
  implP|commitBytes;
  PUP::detail::TemporaryObjectHolder<size_t> commitOffset;
  implP|commitOffset;
  PUP::detail::TemporaryObjectHolder<CkCallback> complete;
  implP|complete;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  char *commitData=(char *)(impl_buf+impl_off_commitData);
  if (implDestP.hasComments()) implDestP.comment("file");
  implDestP|file;
  if (implDestP.hasComments()) implDestP.comment("bytes");
  implDestP|bytes;
  if (implDestP.hasComments()) implDestP.comment("offset");
  implDestP|offset;
  if (implDestP.hasComments()) implDestP.comment("ready");
  implDestP|ready;
  if (implDestP.hasComments()) implDestP.comment("commitData");
  implDestP.synchronize(PUP::sync_begin_array);
  for (int impl_i=0;impl_i*(sizeof(*commitData))<impl_cnt_commitData;impl_i++) {
    implDestP.synchronize(PUP::sync_item);
    implDestP|commitData[impl_i];
  }
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("commitBytes");
  implDestP|commitBytes;
  if (implDestP.hasComments()) implDestP.comment("commitOffset");
  implDestP|commitOffset;
  if (implDestP.hasComments()) implDestP.comment("complete");
  implDestP|complete;
}
PUPable_def(SINGLE_ARG(Closure_Director::prepareWriteSession_6_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void sessionReady(CkReductionMsg* impl_msg);
 */
void CProxy_Director::sessionReady(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_Director::idx_sessionReady_CkReductionMsg(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_Director::idx_sessionReady_CkReductionMsg(), impl_msg, &ckGetChareID(),destPE);
  } else {
    CkSendMsg(CkIndex_Director::idx_sessionReady_CkReductionMsg(), impl_msg, &ckGetChareID(),0);
  }
}

// Entry point registration function
int CkIndex_Director::reg_sessionReady_CkReductionMsg() {
  int epidx = CkRegisterEp("sessionReady(CkReductionMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_sessionReady_CkReductionMsg), CMessage_CkReductionMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkReductionMsg::ckDebugPup);
  return epidx;
}

void CkIndex_Director::_call_sessionReady_CkReductionMsg(void* impl_msg, void* impl_obj_void)
{
  Director* impl_obj = static_cast<Director*>(impl_obj_void);
  impl_obj->sessionReady((CkReductionMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void sessionDone(CkReductionMsg* impl_msg);
 */
void CProxy_Director::sessionDone(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_Director::idx_sessionDone_CkReductionMsg(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_Director::idx_sessionDone_CkReductionMsg(), impl_msg, &ckGetChareID(),destPE);
  } else {
    CkSendMsg(CkIndex_Director::idx_sessionDone_CkReductionMsg(), impl_msg, &ckGetChareID(),0);
  }
}

// Entry point registration function
int CkIndex_Director::reg_sessionDone_CkReductionMsg() {
  int epidx = CkRegisterEp("sessionDone(CkReductionMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_sessionDone_CkReductionMsg), CMessage_CkReductionMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkReductionMsg::ckDebugPup);
  return epidx;
}

void CkIndex_Director::_call_sessionDone_CkReductionMsg(void* impl_msg, void* impl_obj_void)
{
  Director* impl_obj = static_cast<Director*>(impl_obj_void);
  impl_obj->sessionDone((CkReductionMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void close(const FileToken &token, const CkCallback &closed);
 */
void CProxy_Director::close(const FileToken &token, const CkCallback &closed, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const FileToken &token, const CkCallback &closed
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<FileToken>::type>::type &)token;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)closed;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<FileToken>::type>::type &)token;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)closed;
  }
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_Director::idx_close_marshall9(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_Director::idx_close_marshall9(), impl_msg, &ckGetChareID(),destPE);
  } else {
    CkSendMsg(CkIndex_Director::idx_close_marshall9(), impl_msg, &ckGetChareID(),0);
  }
}

// Entry point registration function
int CkIndex_Director::reg_close_marshall9() {
  int epidx = CkRegisterEp("close(const FileToken &token, const CkCallback &closed)",
      reinterpret_cast<CkCallFnPtr>(_call_close_marshall9), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_close_marshall9);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_close_marshall9);

  return epidx;
}

void CkIndex_Director::_call_close_marshall9(void* impl_msg, void* impl_obj_void)
{
  Director* impl_obj = static_cast<Director*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const FileToken &token, const CkCallback &closed*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<FileToken> token;
  implP|token;
  PUP::detail::TemporaryObjectHolder<CkCallback> closed;
  implP|closed;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->close(std::move(token.t), std::move(closed.t));
}
int CkIndex_Director::_callmarshall_close_marshall9(char* impl_buf, void* impl_obj_void) {
  Director* impl_obj = static_cast<Director*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const FileToken &token, const CkCallback &closed*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<FileToken> token;
  implP|token;
  PUP::detail::TemporaryObjectHolder<CkCallback> closed;
  implP|closed;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->close(std::move(token.t), std::move(closed.t));
  return implP.size();
}
void CkIndex_Director::_marshallmessagepup_close_marshall9(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const FileToken &token, const CkCallback &closed*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<FileToken> token;
  implP|token;
  PUP::detail::TemporaryObjectHolder<CkCallback> closed;
  implP|closed;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("token");
  implDestP|token;
  if (implDestP.hasComments()) implDestP.comment("closed");
  implDestP|closed;
}
PUPable_def(SINGLE_ARG(Closure_Director::close_9_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Director(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_Director::reg_Director_CkMigrateMessage() {
  int epidx = CkRegisterEp("Director(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_Director_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_Director::_call_Director_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  new (impl_obj_void) Director((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_Director::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeMainChare);
  CkRegisterBase(__idx, CkIndex_Chare::__idx);
  // REG: Director(CkArgMsg* impl_msg);
  idx_Director_CkArgMsg();
  CkRegisterMainChare(__idx, idx_Director_CkArgMsg());

  // REG: void openFile(const std::string &name, const CkCallback &opened, const Options &opts);
  idx_openFile_marshall2();

  // REG: void fileOpened(const FileToken &file);
  idx_fileOpened_marshall3();
  idx_redn_wrapper_fileOpened_marshall3();

  // REG: void sessionComplete(const FileToken &file);
  idx_sessionComplete_marshall4();
  idx_redn_wrapper_sessionComplete_marshall4();

  // REG: void prepareWriteSession(const FileToken &file, const size_t &bytes, const size_t &offset, const CkCallback &ready, const CkCallback &complete);
  idx_prepareWriteSession_marshall5();

  // REG: void prepareWriteSession(const FileToken &file, const size_t &bytes, const size_t &offset, const CkCallback &ready, const char *commitData, const size_t &commitBytes, const size_t &commitOffset, const CkCallback &complete);
  idx_prepareWriteSession_marshall6();

  // REG: void sessionReady(CkReductionMsg* impl_msg);
  idx_sessionReady_CkReductionMsg();

  // REG: void sessionDone(CkReductionMsg* impl_msg);
  idx_sessionDone_CkReductionMsg();

  // REG: void close(const FileToken &token, const CkCallback &closed);
  idx_close_marshall9();

  // REG: Director(CkMigrateMessage* impl_msg);
  idx_Director_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_Director_CkMigrateMessage());

  Director::__sdag_register(); // Potentially missing Director_SDAG_CODE in your class definition?
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void Director::prepareWriteSession(FileToken file, size_t bytes, size_t offset, CkCallback ready, CkCallback complete){
  CkPrintf("Error> Direct call to SDAG entry method \'%s::%s\'!\n", "Director", "prepareWriteSession(FileToken file, size_t bytes, size_t offset, CkCallback ready, CkCallback complete)"); 
  CkAbort("Direct SDAG call is not allowed for SDAG entry methods having when constructs. Call such SDAG methods using a proxy"); 
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Director::_sdag_fnc_prepareWriteSession(FileToken file, size_t bytes, size_t offset, CkCallback ready, CkCallback complete){
  Closure_Director::prepareWriteSession_5_closure* genClosure = new Closure_Director::prepareWriteSession_5_closure();
  genClosure->getP0() = file;
  genClosure->getP1() = bytes;
  genClosure->getP2() = offset;
  genClosure->getP3() = ready;
  genClosure->getP4() = complete;
  _sdag_fnc_prepareWriteSession(genClosure);
  genClosure->deref();
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Director::_sdag_fnc_prepareWriteSession(Closure_Director::prepareWriteSession_5_closure* gen0) {
  _TRACE_END_EXECUTE(); 
  if (!__dep.get()) _sdag_init();
  _slist_0(gen0);
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, NULL, this); 
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Director::prepareWriteSession_end(Closure_Director::prepareWriteSession_5_closure* gen0) {
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Director::_slist_0(Closure_Director::prepareWriteSession_5_closure* gen0) {
  _serial_0(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Director::_slist_0_end(Closure_Director::prepareWriteSession_5_closure* gen0) {
  prepareWriteSession_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Director::_serial_0(Closure_Director::prepareWriteSession_5_closure* gen0) {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Director_serial_0()), CkMyPe(), 0, NULL, this); 
  {
    FileToken& file = gen0->getP0();
    size_t& bytes = gen0->getP1();
    size_t& offset = gen0->getP2();
    CkCallback& ready = gen0->getP3();
    CkCallback& complete = gen0->getP4();
    { // begin serial block
#line 23 "/cray/css/users/smehta/NAMD_CPU_bundle/NAMD_Git-2022-07-21_Source/charmGIT_mpi_smp/src/libs/ck-libs/io/ckio.ci"

              prepareWriteSession_helper(file, bytes, offset, ready, complete);
            
#line 1352 "CkIO_impl.def.h"
    } // end serial block
  }
  _TRACE_END_EXECUTE(); 
  _when_0(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* Director::_when_0(Closure_Director::prepareWriteSession_5_closure* gen0) {
  CMK_REFNUM_TYPE refnum_0;
  {
    FileToken& file = gen0->getP0();
    size_t& bytes = gen0->getP1();
    size_t& offset = gen0->getP2();
    CkCallback& ready = gen0->getP3();
    CkCallback& complete = gen0->getP4();
    {
      refnum_0 = files[file].sessionID;
    }
  }
  return _when_0(gen0, refnum_0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* Director::_when_0(Closure_Director::prepareWriteSession_5_closure* gen0, int refnum_0) {
  SDAG::Buffer* buf0 = __dep->tryFindMessage(0, true, refnum_0, 0);
  if (buf0) {
    __dep->removeMessage(buf0);
    _serial_1(gen0, static_cast<CkReductionMsg*>(static_cast<SDAG::MsgClosure*>(buf0->cl)->msg));
    delete buf0;
    return 0;
  } else {
    SDAG::Continuation* c = new SDAG::Continuation(0);
    c->addClosure(gen0);
    c->entries.push_back(0);
    c->refnums.push_back(refnum_0);
    __dep->reg(c);
    return c;
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Director::_when_0_end(Closure_Director::prepareWriteSession_5_closure* gen0, CkReductionMsg* gen1) {
  {
    FileToken& file = gen0->getP0();
    size_t& bytes = gen0->getP1();
    size_t& offset = gen0->getP2();
    CkCallback& ready = gen0->getP3();
    CkCallback& complete = gen0->getP4();
    {
      CkReductionMsg*& m = gen1;
      CmiFree(UsrToEnv(m));
    }
  }
  _slist_0_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Director::_serial_1(Closure_Director::prepareWriteSession_5_closure* gen0, CkReductionMsg* gen1) {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Director_serial_1()), CkMyPe(), 0, NULL, this); 
  {
    FileToken& file = gen0->getP0();
    size_t& bytes = gen0->getP1();
    size_t& offset = gen0->getP2();
    CkCallback& ready = gen0->getP3();
    CkCallback& complete = gen0->getP4();
    {
      CkReductionMsg*& m = gen1;
      { // begin serial block
#line 26 "/cray/css/users/smehta/NAMD_CPU_bundle/NAMD_Git-2022-07-21_Source/charmGIT_mpi_smp/src/libs/ck-libs/io/ckio.ci"

              delete m;
              ready.send(new SessionReadyMsg(Session(file, bytes, offset,
                                                     files[file].session)));
            
#line 1435 "CkIO_impl.def.h"
      } // end serial block
    }
  }
  _TRACE_END_EXECUTE(); 
  _when_0_end(gen0, gen1);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Director::prepareWriteSession(FileToken file, size_t bytes, size_t offset, CkCallback ready, char * commitData, size_t commitBytes, size_t commitOffset, CkCallback complete){
  CkPrintf("Error> Direct call to SDAG entry method \'%s::%s\'!\n", "Director", "prepareWriteSession(FileToken file, size_t bytes, size_t offset, CkCallback ready, char * commitData, size_t commitBytes, size_t commitOffset, CkCallback complete)"); 
  CkAbort("Direct SDAG call is not allowed for SDAG entry methods having when constructs. Call such SDAG methods using a proxy"); 
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Director::_sdag_fnc_prepareWriteSession(FileToken file, size_t bytes, size_t offset, CkCallback ready, char * commitData, size_t commitBytes, size_t commitOffset, CkCallback complete){
  Closure_Director::prepareWriteSession_6_closure* genClosure = new Closure_Director::prepareWriteSession_6_closure();
  genClosure->getP0() = file;
  genClosure->getP1() = bytes;
  genClosure->getP2() = offset;
  genClosure->getP3() = ready;
  genClosure->getP4() = commitData;
  genClosure->getP5() = commitBytes;
  genClosure->getP6() = commitOffset;
  genClosure->getP7() = complete;
  _sdag_fnc_prepareWriteSession(genClosure);
  genClosure->deref();
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Director::_sdag_fnc_prepareWriteSession(Closure_Director::prepareWriteSession_6_closure* gen0) {
  _TRACE_END_EXECUTE(); 
  if (!__dep.get()) _sdag_init();
  _slist_1(gen0);
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, NULL, this); 
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Director::prepareWriteSession_end(Closure_Director::prepareWriteSession_6_closure* gen0) {
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Director::_slist_1(Closure_Director::prepareWriteSession_6_closure* gen0) {
  _serial_2(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Director::_slist_1_end(Closure_Director::prepareWriteSession_6_closure* gen0) {
  prepareWriteSession_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Director::_serial_2(Closure_Director::prepareWriteSession_6_closure* gen0) {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Director_serial_2()), CkMyPe(), 0, NULL, this); 
  {
    FileToken& file = gen0->getP0();
    size_t& bytes = gen0->getP1();
    size_t& offset = gen0->getP2();
    CkCallback& ready = gen0->getP3();
    char*& commitData = gen0->getP4();
    size_t& commitBytes = gen0->getP5();
    size_t& commitOffset = gen0->getP6();
    CkCallback& complete = gen0->getP7();
    { // begin serial block
#line 36 "/cray/css/users/smehta/NAMD_CPU_bundle/NAMD_Git-2022-07-21_Source/charmGIT_mpi_smp/src/libs/ck-libs/io/ckio.ci"

              CkCallback committed(CkIndex_Director::sessionDone(NULL), thisProxy);
              committed.setRefnum(++sessionID);
              prepareWriteSession_helper(file, bytes, offset, ready, committed);
            
#line 1517 "CkIO_impl.def.h"
    } // end serial block
  }
  _TRACE_END_EXECUTE(); 
  _when_1(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* Director::_when_1(Closure_Director::prepareWriteSession_6_closure* gen0) {
  CMK_REFNUM_TYPE refnum_0;
  {
    FileToken& file = gen0->getP0();
    size_t& bytes = gen0->getP1();
    size_t& offset = gen0->getP2();
    CkCallback& ready = gen0->getP3();
    char*& commitData = gen0->getP4();
    size_t& commitBytes = gen0->getP5();
    size_t& commitOffset = gen0->getP6();
    CkCallback& complete = gen0->getP7();
    {
      refnum_0 = files[file].sessionID;
    }
  }
  return _when_1(gen0, refnum_0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* Director::_when_1(Closure_Director::prepareWriteSession_6_closure* gen0, int refnum_0) {
  SDAG::Buffer* buf0 = __dep->tryFindMessage(0, true, refnum_0, 0);
  if (buf0) {
    __dep->removeMessage(buf0);
    _serial_3(gen0, static_cast<CkReductionMsg*>(static_cast<SDAG::MsgClosure*>(buf0->cl)->msg));
    delete buf0;
    return 0;
  } else {
    SDAG::Continuation* c = new SDAG::Continuation(1);
    c->addClosure(gen0);
    c->entries.push_back(0);
    c->refnums.push_back(refnum_0);
    __dep->reg(c);
    return c;
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Director::_when_1_end(Closure_Director::prepareWriteSession_6_closure* gen0, CkReductionMsg* gen1) {
  {
    FileToken& file = gen0->getP0();
    size_t& bytes = gen0->getP1();
    size_t& offset = gen0->getP2();
    CkCallback& ready = gen0->getP3();
    char*& commitData = gen0->getP4();
    size_t& commitBytes = gen0->getP5();
    size_t& commitOffset = gen0->getP6();
    CkCallback& complete = gen0->getP7();
    {
      CkReductionMsg*& m = gen1;
      CmiFree(UsrToEnv(m));
    }
  }
  _when_2(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Director::_serial_3(Closure_Director::prepareWriteSession_6_closure* gen0, CkReductionMsg* gen1) {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Director_serial_3()), CkMyPe(), 0, NULL, this); 
  {
    FileToken& file = gen0->getP0();
    size_t& bytes = gen0->getP1();
    size_t& offset = gen0->getP2();
    CkCallback& ready = gen0->getP3();
    char*& commitData = gen0->getP4();
    size_t& commitBytes = gen0->getP5();
    size_t& commitOffset = gen0->getP6();
    CkCallback& complete = gen0->getP7();
    {
      CkReductionMsg*& m = gen1;
      { // begin serial block
#line 41 "/cray/css/users/smehta/NAMD_CPU_bundle/NAMD_Git-2022-07-21_Source/charmGIT_mpi_smp/src/libs/ck-libs/io/ckio.ci"

              delete m;
              ready.send(new SessionReadyMsg(Session(file, bytes, offset,
                                                     files[file].session)));
            
#line 1609 "CkIO_impl.def.h"
      } // end serial block
    }
  }
  _TRACE_END_EXECUTE(); 
  _when_1_end(gen0, gen1);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* Director::_when_2(Closure_Director::prepareWriteSession_6_closure* gen0) {
  CMK_REFNUM_TYPE refnum_0;
  {
    FileToken& file = gen0->getP0();
    size_t& bytes = gen0->getP1();
    size_t& offset = gen0->getP2();
    CkCallback& ready = gen0->getP3();
    char*& commitData = gen0->getP4();
    size_t& commitBytes = gen0->getP5();
    size_t& commitOffset = gen0->getP6();
    CkCallback& complete = gen0->getP7();
    {
      refnum_0 = files[file].sessionID;
    }
  }
  return _when_2(gen0, refnum_0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* Director::_when_2(Closure_Director::prepareWriteSession_6_closure* gen0, int refnum_0) {
  SDAG::Buffer* buf0 = __dep->tryFindMessage(1, true, refnum_0, 0);
  if (buf0) {
    __dep->removeMessage(buf0);
    _serial_4(gen0, static_cast<CkReductionMsg*>(static_cast<SDAG::MsgClosure*>(buf0->cl)->msg));
    delete buf0;
    return 0;
  } else {
    SDAG::Continuation* c = new SDAG::Continuation(2);
    c->addClosure(gen0);
    c->entries.push_back(1);
    c->refnums.push_back(refnum_0);
    __dep->reg(c);
    return c;
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Director::_when_2_end(Closure_Director::prepareWriteSession_6_closure* gen0, CkReductionMsg* gen1) {
  {
    FileToken& file = gen0->getP0();
    size_t& bytes = gen0->getP1();
    size_t& offset = gen0->getP2();
    CkCallback& ready = gen0->getP3();
    char*& commitData = gen0->getP4();
    size_t& commitBytes = gen0->getP5();
    size_t& commitOffset = gen0->getP6();
    CkCallback& complete = gen0->getP7();
    {
      CkReductionMsg*& m = gen1;
      CmiFree(UsrToEnv(m));
    }
  }
  _slist_1_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Director::_serial_4(Closure_Director::prepareWriteSession_6_closure* gen0, CkReductionMsg* gen1) {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Director_serial_4()), CkMyPe(), 0, NULL, this); 
  {
    FileToken& file = gen0->getP0();
    size_t& bytes = gen0->getP1();
    size_t& offset = gen0->getP2();
    CkCallback& ready = gen0->getP3();
    char*& commitData = gen0->getP4();
    size_t& commitBytes = gen0->getP5();
    size_t& commitOffset = gen0->getP6();
    CkCallback& complete = gen0->getP7();
    {
      CkReductionMsg*& m = gen1;
      { // begin serial block
#line 46 "/cray/css/users/smehta/NAMD_CPU_bundle/NAMD_Git-2022-07-21_Source/charmGIT_mpi_smp/src/libs/ck-libs/io/ckio.ci"

              delete m;
              impl::FileInfo* info = CkpvAccess(manager)->get(file);
              CmiInt8 ret = CmiPwrite(info->fd, commitData, commitBytes, commitOffset);
              if (ret != commitBytes)
                fatalError("Commit write failed", info->name);
              complete.send(CkReductionMsg::buildNew(0, NULL, CkReduction::nop));
            
#line 1705 "CkIO_impl.def.h"
      } // end serial block
    }
  }
  _TRACE_END_EXECUTE(); 
  _when_2_end(gen0, gen1);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Director::sessionReady(CkReductionMsg* m_msg){
  if (!__dep.get()) _sdag_init();
  CkReferenceMsg(m_msg);
  __dep->pushBuffer(0, new SDAG::MsgClosure(m_msg));
  SDAG::Continuation* c = __dep->tryFindContinuation(0);
  if (c) {
    _TRACE_END_EXECUTE(); 
    switch(c->whenID) {
    case 0:
      _when_0(
        static_cast<Closure_Director::prepareWriteSession_5_closure*>(c->closure[0]), 
        c->refnums[0]
      );
    break;
    case 1:
      _when_1(
        static_cast<Closure_Director::prepareWriteSession_6_closure*>(c->closure[0]), 
        c->refnums[0]
      );
    break;
    }
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, NULL, this); 
    delete c;
  }
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Director::sessionDone(CkReductionMsg* m_msg){
  if (!__dep.get()) _sdag_init();
  CkReferenceMsg(m_msg);
  __dep->pushBuffer(1, new SDAG::MsgClosure(m_msg));
  SDAG::Continuation* c = __dep->tryFindContinuation(1);
  if (c) {
    _TRACE_END_EXECUTE(); 
    _when_2(
      static_cast<Closure_Director::prepareWriteSession_6_closure*>(c->closure[0]), 
      c->refnums[0]
    );
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, NULL, this); 
    delete c;
  }
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Director::_sdag_init() { // Potentially missing Director_SDAG_CODE in your class definition?
  __dep.reset(new SDAG::Dependency(2,3));
  __dep->addDepends(0,0);
  __dep->addDepends(1,0);
  __dep->addDepends(2,1);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Director::__sdag_init() { // Potentially missing Director_SDAG_CODE in your class definition?
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Director::_sdag_pup(PUP::er &p) {  // Potentially missing Director_SDAG_CODE in your class definition?
  p|__dep;
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Director::__sdag_register() { // Potentially missing Director_SDAG_CODE in your class definition?
  (void)_sdag_idx_Director_serial_0();
  (void)_sdag_idx_Director_serial_1();
  (void)_sdag_idx_Director_serial_2();
  (void)_sdag_idx_Director_serial_3();
  (void)_sdag_idx_Director_serial_4();
  PUPable_reg(SINGLE_ARG(Closure_Director::openFile_2_closure));
  PUPable_reg(SINGLE_ARG(Closure_Director::fileOpened_3_closure));
  PUPable_reg(SINGLE_ARG(Closure_Director::sessionComplete_4_closure));
  PUPable_reg(SINGLE_ARG(Closure_Director::prepareWriteSession_5_closure));
  PUPable_reg(SINGLE_ARG(Closure_Director::prepareWriteSession_6_closure));
  PUPable_reg(SINGLE_ARG(Closure_Director::close_9_closure));
  PUPable_reg(SINGLE_ARG(Closure_Director::openFile_2_closure));
  PUPable_reg(SINGLE_ARG(Closure_Director::fileOpened_3_closure));
  PUPable_reg(SINGLE_ARG(Closure_Director::sessionComplete_4_closure));
  PUPable_reg(SINGLE_ARG(Closure_Director::prepareWriteSession_5_closure));
  PUPable_reg(SINGLE_ARG(Closure_Director::prepareWriteSession_6_closure));
  PUPable_reg(SINGLE_ARG(Closure_Director::close_9_closure));
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Director::_sdag_idx_Director_serial_0() { // Potentially missing Director_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_Director_serial_0();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Director::_sdag_reg_Director_serial_0() { // Potentially missing Director_SDAG_CODE in your class definition?
  return CkRegisterEp("Director_serial_0", NULL, 0, CkIndex_Director::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Director::_sdag_idx_Director_serial_1() { // Potentially missing Director_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_Director_serial_1();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Director::_sdag_reg_Director_serial_1() { // Potentially missing Director_SDAG_CODE in your class definition?
  return CkRegisterEp("Director_serial_1", NULL, 0, CkIndex_Director::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Director::_sdag_idx_Director_serial_2() { // Potentially missing Director_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_Director_serial_2();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Director::_sdag_reg_Director_serial_2() { // Potentially missing Director_SDAG_CODE in your class definition?
  return CkRegisterEp("Director_serial_2", NULL, 0, CkIndex_Director::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Director::_sdag_idx_Director_serial_3() { // Potentially missing Director_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_Director_serial_3();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Director::_sdag_reg_Director_serial_3() { // Potentially missing Director_SDAG_CODE in your class definition?
  return CkRegisterEp("Director_serial_3", NULL, 0, CkIndex_Director::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Director::_sdag_idx_Director_serial_4() { // Potentially missing Director_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_Director_serial_4();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Director::_sdag_reg_Director_serial_4() { // Potentially missing Director_SDAG_CODE in your class definition?
  return CkRegisterEp("Director_serial_4", NULL, 0, CkIndex_Director::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */



/* DEFS: group Manager: IrrGroup{
Manager();
void run();
void openFile(unsigned int opnum, const FileToken &token, const std::string &name, const Options &opts);
void close(unsigned int opnum, const FileToken &token, const CkCallback &closed);
Manager(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_Manager::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: Manager();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void run();
 */
void CProxyElement_Manager::run(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Manager::idx_run_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_Manager::idx_run_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_Manager::idx_run_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void openFile(unsigned int opnum, const FileToken &token, const std::string &name, const Options &opts);
 */
void CProxyElement_Manager::openFile(unsigned int opnum, const FileToken &token, const std::string &name, const Options &opts, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: unsigned int opnum, const FileToken &token, const std::string &name, const Options &opts
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|opnum;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<FileToken>::type>::type &)token;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<std::string>::type>::type &)name;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Options>::type>::type &)opts;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|opnum;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<FileToken>::type>::type &)token;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<std::string>::type>::type &)name;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Options>::type>::type &)opts;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Manager::idx_openFile_marshall3(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_Manager::idx_openFile_marshall3(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_Manager::idx_openFile_marshall3(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void close(unsigned int opnum, const FileToken &token, const CkCallback &closed);
 */
void CProxyElement_Manager::close(unsigned int opnum, const FileToken &token, const CkCallback &closed, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: unsigned int opnum, const FileToken &token, const CkCallback &closed
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|opnum;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<FileToken>::type>::type &)token;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)closed;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|opnum;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<FileToken>::type>::type &)token;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)closed;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Manager::idx_close_marshall4(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_Manager::idx_close_marshall4(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_Manager::idx_close_marshall4(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Manager(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Manager();
 */
CkGroupID CProxy_Manager::ckNew(const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_Manager::__idx, CkIndex_Manager::idx_Manager_void(), impl_msg);
  return gId;
}

// Entry point registration function
int CkIndex_Manager::reg_Manager_void() {
  int epidx = CkRegisterEp("Manager()",
      reinterpret_cast<CkCallFnPtr>(_call_Manager_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_Manager::_call_Manager_void(void* impl_msg, void* impl_obj_void)
{
  Manager* impl_obj = static_cast<Manager*>(impl_obj_void);
  new (impl_obj_void) Manager();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void run();
 */
void CProxy_Manager::run(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Manager::idx_run_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_Manager::idx_run_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_Manager::idx_run_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_Manager::run(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_Manager::idx_run_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_Manager::run(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_Manager::idx_run_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_Manager::reg_run_void() {
  int epidx = CkRegisterEp("run()",
      reinterpret_cast<CkCallFnPtr>(_call_run_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_Manager::_call_run_void(void* impl_msg, void* impl_obj_void)
{
  Manager* impl_obj = static_cast<Manager*>(impl_obj_void);
  impl_obj->_sdag_fnc_run();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_Manager::run_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void openFile(unsigned int opnum, const FileToken &token, const std::string &name, const Options &opts);
 */
void CProxy_Manager::openFile(unsigned int opnum, const FileToken &token, const std::string &name, const Options &opts, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: unsigned int opnum, const FileToken &token, const std::string &name, const Options &opts
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|opnum;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<FileToken>::type>::type &)token;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<std::string>::type>::type &)name;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Options>::type>::type &)opts;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|opnum;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<FileToken>::type>::type &)token;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<std::string>::type>::type &)name;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Options>::type>::type &)opts;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Manager::idx_openFile_marshall3(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_Manager::idx_openFile_marshall3(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_Manager::idx_openFile_marshall3(), impl_msg, ckGetGroupID(),0);
}
void CProxy_Manager::openFile(unsigned int opnum, const FileToken &token, const std::string &name, const Options &opts, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: unsigned int opnum, const FileToken &token, const std::string &name, const Options &opts
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|opnum;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<FileToken>::type>::type &)token;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<std::string>::type>::type &)name;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Options>::type>::type &)opts;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|opnum;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<FileToken>::type>::type &)token;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<std::string>::type>::type &)name;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Options>::type>::type &)opts;
  }
  CkSendMsgBranchMulti(CkIndex_Manager::idx_openFile_marshall3(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_Manager::openFile(unsigned int opnum, const FileToken &token, const std::string &name, const Options &opts, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: unsigned int opnum, const FileToken &token, const std::string &name, const Options &opts
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|opnum;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<FileToken>::type>::type &)token;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<std::string>::type>::type &)name;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Options>::type>::type &)opts;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|opnum;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<FileToken>::type>::type &)token;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<std::string>::type>::type &)name;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Options>::type>::type &)opts;
  }
  CkSendMsgBranchGroup(CkIndex_Manager::idx_openFile_marshall3(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_Manager::reg_openFile_marshall3() {
  int epidx = CkRegisterEp("openFile(unsigned int opnum, const FileToken &token, const std::string &name, const Options &opts)",
      reinterpret_cast<CkCallFnPtr>(_call_openFile_marshall3), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_openFile_marshall3);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_openFile_marshall3);

  return epidx;
}

void CkIndex_Manager::_call_openFile_marshall3(void* impl_msg, void* impl_obj_void)
{
  Manager* impl_obj = static_cast<Manager*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  PUP::fromMem implP(impl_buf);
  Closure_Manager::openFile_3_closure* genClosure = new Closure_Manager::openFile_3_closure();
  implP|genClosure->opnum;
  implP|genClosure->token;
  implP|genClosure->name;
  implP|genClosure->opts;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->openFile(genClosure);
  genClosure->deref();
}
int CkIndex_Manager::_callmarshall_openFile_marshall3(char* impl_buf, void* impl_obj_void) {
  Manager* impl_obj = static_cast<Manager*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  PUP::fromMem implP(impl_buf);
  Closure_Manager::openFile_3_closure* genClosure = new Closure_Manager::openFile_3_closure();
  implP|genClosure->opnum;
  implP|genClosure->token;
  implP|genClosure->name;
  implP|genClosure->opts;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->openFile(genClosure);
  genClosure->deref();
  return implP.size();
}
void CkIndex_Manager::_marshallmessagepup_openFile_marshall3(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: unsigned int opnum, const FileToken &token, const std::string &name, const Options &opts*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<unsigned int> opnum;
  implP|opnum;
  PUP::detail::TemporaryObjectHolder<FileToken> token;
  implP|token;
  PUP::detail::TemporaryObjectHolder<std::string> name;
  implP|name;
  PUP::detail::TemporaryObjectHolder<Options> opts;
  implP|opts;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("opnum");
  implDestP|opnum;
  if (implDestP.hasComments()) implDestP.comment("token");
  implDestP|token;
  if (implDestP.hasComments()) implDestP.comment("name");
  implDestP|name;
  if (implDestP.hasComments()) implDestP.comment("opts");
  implDestP|opts;
}
PUPable_def(SINGLE_ARG(Closure_Manager::openFile_3_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void close(unsigned int opnum, const FileToken &token, const CkCallback &closed);
 */
void CProxy_Manager::close(unsigned int opnum, const FileToken &token, const CkCallback &closed, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: unsigned int opnum, const FileToken &token, const CkCallback &closed
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|opnum;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<FileToken>::type>::type &)token;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)closed;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|opnum;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<FileToken>::type>::type &)token;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)closed;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Manager::idx_close_marshall4(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_Manager::idx_close_marshall4(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_Manager::idx_close_marshall4(), impl_msg, ckGetGroupID(),0);
}
void CProxy_Manager::close(unsigned int opnum, const FileToken &token, const CkCallback &closed, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: unsigned int opnum, const FileToken &token, const CkCallback &closed
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|opnum;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<FileToken>::type>::type &)token;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)closed;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|opnum;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<FileToken>::type>::type &)token;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)closed;
  }
  CkSendMsgBranchMulti(CkIndex_Manager::idx_close_marshall4(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_Manager::close(unsigned int opnum, const FileToken &token, const CkCallback &closed, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: unsigned int opnum, const FileToken &token, const CkCallback &closed
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|opnum;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<FileToken>::type>::type &)token;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)closed;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|opnum;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<FileToken>::type>::type &)token;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)closed;
  }
  CkSendMsgBranchGroup(CkIndex_Manager::idx_close_marshall4(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_Manager::reg_close_marshall4() {
  int epidx = CkRegisterEp("close(unsigned int opnum, const FileToken &token, const CkCallback &closed)",
      reinterpret_cast<CkCallFnPtr>(_call_close_marshall4), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_close_marshall4);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_close_marshall4);

  return epidx;
}

void CkIndex_Manager::_call_close_marshall4(void* impl_msg, void* impl_obj_void)
{
  Manager* impl_obj = static_cast<Manager*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  PUP::fromMem implP(impl_buf);
  Closure_Manager::close_4_closure* genClosure = new Closure_Manager::close_4_closure();
  implP|genClosure->opnum;
  implP|genClosure->token;
  implP|genClosure->closed;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->close(genClosure);
  genClosure->deref();
}
int CkIndex_Manager::_callmarshall_close_marshall4(char* impl_buf, void* impl_obj_void) {
  Manager* impl_obj = static_cast<Manager*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  PUP::fromMem implP(impl_buf);
  Closure_Manager::close_4_closure* genClosure = new Closure_Manager::close_4_closure();
  implP|genClosure->opnum;
  implP|genClosure->token;
  implP|genClosure->closed;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->close(genClosure);
  genClosure->deref();
  return implP.size();
}
void CkIndex_Manager::_marshallmessagepup_close_marshall4(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: unsigned int opnum, const FileToken &token, const CkCallback &closed*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<unsigned int> opnum;
  implP|opnum;
  PUP::detail::TemporaryObjectHolder<FileToken> token;
  implP|token;
  PUP::detail::TemporaryObjectHolder<CkCallback> closed;
  implP|closed;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("opnum");
  implDestP|opnum;
  if (implDestP.hasComments()) implDestP.comment("token");
  implDestP|token;
  if (implDestP.hasComments()) implDestP.comment("closed");
  implDestP|closed;
}
PUPable_def(SINGLE_ARG(Closure_Manager::close_4_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Manager(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_Manager::reg_Manager_CkMigrateMessage() {
  int epidx = CkRegisterEp("Manager(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_Manager_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_Manager::_call_Manager_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  new (impl_obj_void) Manager((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Manager();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void run();
 */
void CProxySection_Manager::run(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_Manager::idx_run_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_Manager::idx_run_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void openFile(unsigned int opnum, const FileToken &token, const std::string &name, const Options &opts);
 */
void CProxySection_Manager::openFile(unsigned int opnum, const FileToken &token, const std::string &name, const Options &opts, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: unsigned int opnum, const FileToken &token, const std::string &name, const Options &opts
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|opnum;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<FileToken>::type>::type &)token;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<std::string>::type>::type &)name;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Options>::type>::type &)opts;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|opnum;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<FileToken>::type>::type &)token;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<std::string>::type>::type &)name;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Options>::type>::type &)opts;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_Manager::idx_openFile_marshall3(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_Manager::idx_openFile_marshall3(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void close(unsigned int opnum, const FileToken &token, const CkCallback &closed);
 */
void CProxySection_Manager::close(unsigned int opnum, const FileToken &token, const CkCallback &closed, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: unsigned int opnum, const FileToken &token, const CkCallback &closed
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|opnum;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<FileToken>::type>::type &)token;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)closed;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|opnum;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<FileToken>::type>::type &)token;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)closed;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_Manager::idx_close_marshall4(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_Manager::idx_close_marshall4(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Manager(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_Manager::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,Manager::isIrreducible());
  // REG: Manager();
  idx_Manager_void();
  CkRegisterDefaultCtor(__idx, idx_Manager_void());

  // REG: void run();
  idx_run_void();

  // REG: void openFile(unsigned int opnum, const FileToken &token, const std::string &name, const Options &opts);
  idx_openFile_marshall3();

  // REG: void close(unsigned int opnum, const FileToken &token, const CkCallback &closed);
  idx_close_marshall4();

  // REG: Manager(CkMigrateMessage* impl_msg);
  idx_Manager_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_Manager_CkMigrateMessage());

  Manager::__sdag_register(); // Potentially missing Manager_SDAG_CODE in your class definition?
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void Manager::run(){
  CkPrintf("Error> Direct call to SDAG entry method \'%s::%s\'!\n", "Manager", "run()"); 
  CkAbort("Direct SDAG call is not allowed for SDAG entry methods having when constructs. Call such SDAG methods using a proxy"); 
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Manager::_sdag_fnc_run() {
  _TRACE_END_EXECUTE(); 
  if (!__dep.get()) _sdag_init();
  _slist_0();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, NULL, this); 
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Manager::run_end() {
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Manager::_slist_0() {
  _while_0();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Manager::_slist_0_end() {
  run_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Manager::_while_0() {
  if (true) {
    _slist_1();
  } else {
    _slist_0_end();
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Manager::_while_0_end() {
  if (true) {
    _slist_1();
  } else {
    _slist_0_end();
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Manager::_slist_1() {
  _case_0();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Manager::_slist_1_end() {
  _while_0_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Manager::_case_0() {
  _caselist_0();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Manager::_case_0_end() {
  _serial_2();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Manager::_caselist_0() {
  SDAG::CSpeculator* _cs0 = new SDAG::CSpeculator(__dep->getAndIncrementSpeculationIndex());
  SDAG::Continuation* c = 0;
  c = _when_0(_cs0);
  if (!c) return;
  else c->speculationIndex = _cs0->speculationIndex;
  c = _when_1(_cs0);
  if (!c) return;
  else c->speculationIndex = _cs0->speculationIndex;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Manager::_caselist_0_end(SDAG::CSpeculator* _cs0) {
  _cs0->deref();
  _case_0_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* Manager::_when_0(SDAG::CSpeculator* _cs0) {
  CMK_REFNUM_TYPE refnum_0;
  {
    {
      refnum_0 = opnum;
    }
  }
  return _when_0(_cs0, refnum_0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* Manager::_when_0(SDAG::CSpeculator* _cs0, int refnum_0) {
  SDAG::Buffer* buf0 = __dep->tryFindMessage(0, true, refnum_0, 0);
  if (buf0) {
    __dep->removeMessage(buf0);
    __dep->removeAllSpeculationIndex(_cs0->speculationIndex);
    _serial_0(_cs0, static_cast<Closure_Manager::openFile_3_closure*>(buf0->cl));
    delete buf0;
    return 0;
  } else {
    SDAG::Continuation* c = new SDAG::Continuation(0);
    c->addClosure(_cs0);
    c->entries.push_back(0);
    c->refnums.push_back(refnum_0);
    __dep->reg(c);
    return c;
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Manager::_when_0_end(SDAG::CSpeculator* _cs0, Closure_Manager::openFile_3_closure* gen1) {
  _caselist_0_end(_cs0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Manager::_serial_0(SDAG::CSpeculator* _cs0, Closure_Manager::openFile_3_closure* gen1) {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Manager_serial_0()), CkMyPe(), 0, NULL, this); 
  {
    {
      unsigned int& opnum_ = gen1->getP0();
      FileToken& token = gen1->getP1();
      std::string& name = gen1->getP2();
      Options& opts = gen1->getP3();
      { // begin serial block
#line 67 "/cray/css/users/smehta/NAMD_CPU_bundle/NAMD_Git-2022-07-21_Source/charmGIT_mpi_smp/src/libs/ck-libs/io/ckio.ci"
 prepareFile(token, name, opts); 
#line 2673 "CkIO_impl.def.h"
      } // end serial block
    }
  }
  _TRACE_END_EXECUTE(); 
  _when_0_end(_cs0, gen1);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* Manager::_when_1(SDAG::CSpeculator* _cs0) {
  CMK_REFNUM_TYPE refnum_0;
  {
    {
      refnum_0 = opnum;
    }
  }
  return _when_1(_cs0, refnum_0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* Manager::_when_1(SDAG::CSpeculator* _cs0, int refnum_0) {
  SDAG::Buffer* buf0 = __dep->tryFindMessage(1, true, refnum_0, 0);
  if (buf0) {
    __dep->removeMessage(buf0);
    __dep->removeAllSpeculationIndex(_cs0->speculationIndex);
    _serial_1(_cs0, static_cast<Closure_Manager::close_4_closure*>(buf0->cl));
    delete buf0;
    return 0;
  } else {
    SDAG::Continuation* c = new SDAG::Continuation(1);
    c->addClosure(_cs0);
    c->entries.push_back(1);
    c->refnums.push_back(refnum_0);
    __dep->reg(c);
    return c;
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Manager::_when_1_end(SDAG::CSpeculator* _cs0, Closure_Manager::close_4_closure* gen1) {
  _caselist_0_end(_cs0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Manager::_serial_1(SDAG::CSpeculator* _cs0, Closure_Manager::close_4_closure* gen1) {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Manager_serial_1()), CkMyPe(), 0, NULL, this); 
  {
    {
      unsigned int& opnum_ = gen1->getP0();
      FileToken& token = gen1->getP1();
      CkCallback& closed = gen1->getP2();
      { // begin serial block
#line 69 "/cray/css/users/smehta/NAMD_CPU_bundle/NAMD_Git-2022-07-21_Source/charmGIT_mpi_smp/src/libs/ck-libs/io/ckio.ci"
 doClose(token, closed); 
#line 2735 "CkIO_impl.def.h"
      } // end serial block
    }
  }
  _TRACE_END_EXECUTE(); 
  _when_1_end(_cs0, gen1);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Manager::_serial_2() {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Manager_serial_2()), CkMyPe(), 0, NULL, this); 
  { // begin serial block
#line 71 "/cray/css/users/smehta/NAMD_CPU_bundle/NAMD_Git-2022-07-21_Source/charmGIT_mpi_smp/src/libs/ck-libs/io/ckio.ci"
 opnum++; 
#line 2751 "CkIO_impl.def.h"
  } // end serial block
  _TRACE_END_EXECUTE(); 
  _slist_1_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Manager::openFile(unsigned int opnum_, FileToken token, std::string name, Options opts){
  Closure_Manager::openFile_3_closure* genClosure = new Closure_Manager::openFile_3_closure();
  genClosure->getP0() = opnum_;
  genClosure->getP1() = token;
  genClosure->getP2() = name;
  genClosure->getP3() = opts;
  openFile(genClosure);
  genClosure->deref();
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Manager::openFile(Closure_Manager::openFile_3_closure* genClosure){
  if (!__dep.get()) _sdag_init();
  if (!genClosure->hasRefnum) genClosure->setRefnum(genClosure->getP0());
  __dep->pushBuffer(0, genClosure);
  SDAG::Continuation* c = __dep->tryFindContinuation(0);
  if (c) {
    _TRACE_END_EXECUTE(); 
    _when_0(
      static_cast<SDAG::CSpeculator*>(c->closure[0]), 
      c->refnums[0]
    );
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, NULL, this); 
    delete c;
  }
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Manager::close(unsigned int opnum_, FileToken token, CkCallback closed){
  Closure_Manager::close_4_closure* genClosure = new Closure_Manager::close_4_closure();
  genClosure->getP0() = opnum_;
  genClosure->getP1() = token;
  genClosure->getP2() = closed;
  close(genClosure);
  genClosure->deref();
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Manager::close(Closure_Manager::close_4_closure* genClosure){
  if (!__dep.get()) _sdag_init();
  if (!genClosure->hasRefnum) genClosure->setRefnum(genClosure->getP0());
  __dep->pushBuffer(1, genClosure);
  SDAG::Continuation* c = __dep->tryFindContinuation(1);
  if (c) {
    _TRACE_END_EXECUTE(); 
    _when_1(
      static_cast<SDAG::CSpeculator*>(c->closure[0]), 
      c->refnums[0]
    );
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, NULL, this); 
    delete c;
  }
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Manager::_sdag_init() { // Potentially missing Manager_SDAG_CODE in your class definition?
  __dep.reset(new SDAG::Dependency(2,2));
  __dep->addDepends(0,0);
  __dep->addDepends(1,1);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Manager::__sdag_init() { // Potentially missing Manager_SDAG_CODE in your class definition?
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Manager::_sdag_pup(PUP::er &p) {  // Potentially missing Manager_SDAG_CODE in your class definition?
  p|__dep;
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Manager::__sdag_register() { // Potentially missing Manager_SDAG_CODE in your class definition?
  (void)_sdag_idx_Manager_serial_0();
  (void)_sdag_idx_Manager_serial_1();
  (void)_sdag_idx_Manager_serial_2();
  PUPable_reg(SINGLE_ARG(Closure_Manager::run_2_closure));
  PUPable_reg(SINGLE_ARG(Closure_Manager::openFile_3_closure));
  PUPable_reg(SINGLE_ARG(Closure_Manager::close_4_closure));
  PUPable_reg(SINGLE_ARG(Closure_Manager::run_2_closure));
  PUPable_reg(SINGLE_ARG(Closure_Manager::openFile_3_closure));
  PUPable_reg(SINGLE_ARG(Closure_Manager::close_4_closure));
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Manager::_sdag_idx_Manager_serial_0() { // Potentially missing Manager_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_Manager_serial_0();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Manager::_sdag_reg_Manager_serial_0() { // Potentially missing Manager_SDAG_CODE in your class definition?
  return CkRegisterEp("Manager_serial_0", NULL, 0, CkIndex_Manager::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Manager::_sdag_idx_Manager_serial_1() { // Potentially missing Manager_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_Manager_serial_1();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Manager::_sdag_reg_Manager_serial_1() { // Potentially missing Manager_SDAG_CODE in your class definition?
  return CkRegisterEp("Manager_serial_1", NULL, 0, CkIndex_Manager::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Manager::_sdag_idx_Manager_serial_2() { // Potentially missing Manager_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_Manager_serial_2();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Manager::_sdag_reg_Manager_serial_2() { // Potentially missing Manager_SDAG_CODE in your class definition?
  return CkRegisterEp("Manager_serial_2", NULL, 0, CkIndex_Manager::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */



/* DEFS: array WriteSession: ArrayElement{
WriteSession(const FileToken &file, const size_t &offset, const size_t &bytes);
void forwardData(const char *data, const size_t &bytes, const size_t &offset);
void syncData();
WriteSession(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_WriteSession::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CProxySection_WriteSession::contribute(CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(sid, userData, fragSize);
}

void CProxySection_WriteSession::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, userData, fragSize);
}

template <typename T>
void CProxySection_WriteSession::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, userData, fragSize);
}

void CProxySection_WriteSession::contribute(CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(sid, cb, userData, fragSize);
}

void CProxySection_WriteSession::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, cb, userData, fragSize);
}

template <typename T>
void CProxySection_WriteSession::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, cb, userData, fragSize);
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: WriteSession(const FileToken &file, const size_t &offset, const size_t &bytes);
 */
void CProxyElement_WriteSession::insert(const FileToken &file, const size_t &offset, const size_t &bytes, int onPE, const CkEntryOptions *impl_e_opts)
{ 
   //Marshall: const FileToken &file, const size_t &offset, const size_t &bytes
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<FileToken>::type>::type &)file;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<size_t>::type>::type &)offset;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<size_t>::type>::type &)bytes;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<FileToken>::type>::type &)file;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<size_t>::type>::type &)offset;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<size_t>::type>::type &)bytes;
  }
   UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
   ckInsert((CkArrayMessage *)impl_msg,CkIndex_WriteSession::idx_WriteSession_marshall1(),onPE);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void forwardData(const char *data, const size_t &bytes, const size_t &offset);
 */
void CProxyElement_WriteSession::forwardData(const char *data, const size_t &bytes, const size_t &offset, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const char *data, const size_t &bytes, const size_t &offset
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_data, impl_cnt_data;
  impl_off_data=impl_off=CK_ALIGN(impl_off,sizeof(char));
  impl_off+=(impl_cnt_data=sizeof(char)*(bytes));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_data;
    implP|impl_cnt_data;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<size_t>::type>::type &)bytes;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<size_t>::type>::type &)offset;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_data;
    implP|impl_cnt_data;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<size_t>::type>::type &)bytes;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<size_t>::type>::type &)offset;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_data,data,impl_cnt_data);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_WriteSession::idx_forwardData_marshall2(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void syncData();
 */
void CProxyElement_WriteSession::syncData(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_WriteSession::idx_syncData_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: WriteSession(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: WriteSession(const FileToken &file, const size_t &offset, const size_t &bytes);
 */
CkArrayID CProxy_WriteSession::ckNew(const FileToken &file, const size_t &offset, const size_t &bytes, const CkArrayOptions &opts, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const FileToken &file, const size_t &offset, const size_t &bytes
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<FileToken>::type>::type &)file;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<size_t>::type>::type &)offset;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<size_t>::type>::type &)bytes;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<FileToken>::type>::type &)file;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<size_t>::type>::type &)offset;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<size_t>::type>::type &)bytes;
  }
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_WriteSession::idx_WriteSession_marshall1(), opts);
  return gId;
}
void CProxy_WriteSession::ckNew(const FileToken &file, const size_t &offset, const size_t &bytes, const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const FileToken &file, const size_t &offset, const size_t &bytes
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<FileToken>::type>::type &)file;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<size_t>::type>::type &)offset;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<size_t>::type>::type &)bytes;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<FileToken>::type>::type &)file;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<size_t>::type>::type &)offset;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<size_t>::type>::type &)bytes;
  }
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_WriteSession::idx_WriteSession_marshall1(), _ck_array_creation_cb, opts, impl_msg);
}
CkArrayID CProxy_WriteSession::ckNew(const FileToken &file, const size_t &offset, const size_t &bytes, const int s1, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const FileToken &file, const size_t &offset, const size_t &bytes
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<FileToken>::type>::type &)file;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<size_t>::type>::type &)offset;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<size_t>::type>::type &)bytes;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<FileToken>::type>::type &)file;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<size_t>::type>::type &)offset;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<size_t>::type>::type &)bytes;
  }
  CkArrayOptions opts(s1);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_WriteSession::idx_WriteSession_marshall1(), opts);
  return gId;
}
void CProxy_WriteSession::ckNew(const FileToken &file, const size_t &offset, const size_t &bytes, const int s1, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const FileToken &file, const size_t &offset, const size_t &bytes
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<FileToken>::type>::type &)file;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<size_t>::type>::type &)offset;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<size_t>::type>::type &)bytes;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<FileToken>::type>::type &)file;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<size_t>::type>::type &)offset;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<size_t>::type>::type &)bytes;
  }
  CkArrayOptions opts(s1);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_WriteSession::idx_WriteSession_marshall1(), _ck_array_creation_cb, opts, impl_msg);
}

// Entry point registration function
int CkIndex_WriteSession::reg_WriteSession_marshall1() {
  int epidx = CkRegisterEp("WriteSession(const FileToken &file, const size_t &offset, const size_t &bytes)",
      reinterpret_cast<CkCallFnPtr>(_call_WriteSession_marshall1), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_WriteSession_marshall1);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_WriteSession_marshall1);

  return epidx;
}

void CkIndex_WriteSession::_call_WriteSession_marshall1(void* impl_msg, void* impl_obj_void)
{
  WriteSession* impl_obj = static_cast<WriteSession*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const FileToken &file, const size_t &offset, const size_t &bytes*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<FileToken> file;
  implP|file;
  PUP::detail::TemporaryObjectHolder<size_t> offset;
  implP|offset;
  PUP::detail::TemporaryObjectHolder<size_t> bytes;
  implP|bytes;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) WriteSession(std::move(file.t), std::move(offset.t), std::move(bytes.t));
}
int CkIndex_WriteSession::_callmarshall_WriteSession_marshall1(char* impl_buf, void* impl_obj_void) {
  WriteSession* impl_obj = static_cast<WriteSession*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const FileToken &file, const size_t &offset, const size_t &bytes*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<FileToken> file;
  implP|file;
  PUP::detail::TemporaryObjectHolder<size_t> offset;
  implP|offset;
  PUP::detail::TemporaryObjectHolder<size_t> bytes;
  implP|bytes;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) WriteSession(std::move(file.t), std::move(offset.t), std::move(bytes.t));
  return implP.size();
}
void CkIndex_WriteSession::_marshallmessagepup_WriteSession_marshall1(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const FileToken &file, const size_t &offset, const size_t &bytes*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<FileToken> file;
  implP|file;
  PUP::detail::TemporaryObjectHolder<size_t> offset;
  implP|offset;
  PUP::detail::TemporaryObjectHolder<size_t> bytes;
  implP|bytes;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("file");
  implDestP|file;
  if (implDestP.hasComments()) implDestP.comment("offset");
  implDestP|offset;
  if (implDestP.hasComments()) implDestP.comment("bytes");
  implDestP|bytes;
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void forwardData(const char *data, const size_t &bytes, const size_t &offset);
 */
void CProxy_WriteSession::forwardData(const char *data, const size_t &bytes, const size_t &offset, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const char *data, const size_t &bytes, const size_t &offset
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_data, impl_cnt_data;
  impl_off_data=impl_off=CK_ALIGN(impl_off,sizeof(char));
  impl_off+=(impl_cnt_data=sizeof(char)*(bytes));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_data;
    implP|impl_cnt_data;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<size_t>::type>::type &)bytes;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<size_t>::type>::type &)offset;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_data;
    implP|impl_cnt_data;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<size_t>::type>::type &)bytes;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<size_t>::type>::type &)offset;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_data,data,impl_cnt_data);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_WriteSession::idx_forwardData_marshall2(),0);
}

// Entry point registration function
int CkIndex_WriteSession::reg_forwardData_marshall2() {
  int epidx = CkRegisterEp("forwardData(const char *data, const size_t &bytes, const size_t &offset)",
      reinterpret_cast<CkCallFnPtr>(_call_forwardData_marshall2), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_forwardData_marshall2);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_forwardData_marshall2);

  return epidx;
}

void CkIndex_WriteSession::_call_forwardData_marshall2(void* impl_msg, void* impl_obj_void)
{
  WriteSession* impl_obj = static_cast<WriteSession*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const char *data, const size_t &bytes, const size_t &offset*/
  PUP::fromMem implP(impl_buf);
  int impl_off_data, impl_cnt_data;
  implP|impl_off_data;
  implP|impl_cnt_data;
  PUP::detail::TemporaryObjectHolder<size_t> bytes;
  implP|bytes;
  PUP::detail::TemporaryObjectHolder<size_t> offset;
  implP|offset;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  char *data=(char *)(impl_buf+impl_off_data);
  impl_obj->forwardData(data, std::move(bytes.t), std::move(offset.t));
}
int CkIndex_WriteSession::_callmarshall_forwardData_marshall2(char* impl_buf, void* impl_obj_void) {
  WriteSession* impl_obj = static_cast<WriteSession*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const char *data, const size_t &bytes, const size_t &offset*/
  PUP::fromMem implP(impl_buf);
  int impl_off_data, impl_cnt_data;
  implP|impl_off_data;
  implP|impl_cnt_data;
  PUP::detail::TemporaryObjectHolder<size_t> bytes;
  implP|bytes;
  PUP::detail::TemporaryObjectHolder<size_t> offset;
  implP|offset;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  char *data=(char *)(impl_buf+impl_off_data);
  impl_obj->forwardData(data, std::move(bytes.t), std::move(offset.t));
  return implP.size();
}
void CkIndex_WriteSession::_marshallmessagepup_forwardData_marshall2(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const char *data, const size_t &bytes, const size_t &offset*/
  PUP::fromMem implP(impl_buf);
  int impl_off_data, impl_cnt_data;
  implP|impl_off_data;
  implP|impl_cnt_data;
  PUP::detail::TemporaryObjectHolder<size_t> bytes;
  implP|bytes;
  PUP::detail::TemporaryObjectHolder<size_t> offset;
  implP|offset;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  char *data=(char *)(impl_buf+impl_off_data);
  if (implDestP.hasComments()) implDestP.comment("data");
  implDestP.synchronize(PUP::sync_begin_array);
  for (int impl_i=0;impl_i*(sizeof(*data))<impl_cnt_data;impl_i++) {
    implDestP.synchronize(PUP::sync_item);
    implDestP|data[impl_i];
  }
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("bytes");
  implDestP|bytes;
  if (implDestP.hasComments()) implDestP.comment("offset");
  implDestP|offset;
}
PUPable_def(SINGLE_ARG(Closure_WriteSession::forwardData_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void syncData();
 */
void CProxy_WriteSession::syncData(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_WriteSession::idx_syncData_void(),0);
}

// Entry point registration function
int CkIndex_WriteSession::reg_syncData_void() {
  int epidx = CkRegisterEp("syncData()",
      reinterpret_cast<CkCallFnPtr>(_call_syncData_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_WriteSession::_call_syncData_void(void* impl_msg, void* impl_obj_void)
{
  WriteSession* impl_obj = static_cast<WriteSession*>(impl_obj_void);
  impl_obj->syncData();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_WriteSession::syncData_3_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: WriteSession(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_WriteSession::reg_WriteSession_CkMigrateMessage() {
  int epidx = CkRegisterEp("WriteSession(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_WriteSession_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_WriteSession::_call_WriteSession_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  call_migration_constructor<WriteSession> c = impl_obj_void;
  c((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: WriteSession(const FileToken &file, const size_t &offset, const size_t &bytes);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void forwardData(const char *data, const size_t &bytes, const size_t &offset);
 */
void CProxySection_WriteSession::forwardData(const char *data, const size_t &bytes, const size_t &offset, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const char *data, const size_t &bytes, const size_t &offset
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_data, impl_cnt_data;
  impl_off_data=impl_off=CK_ALIGN(impl_off,sizeof(char));
  impl_off+=(impl_cnt_data=sizeof(char)*(bytes));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_data;
    implP|impl_cnt_data;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<size_t>::type>::type &)bytes;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<size_t>::type>::type &)offset;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_data;
    implP|impl_cnt_data;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<size_t>::type>::type &)bytes;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<size_t>::type>::type &)offset;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_data,data,impl_cnt_data);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_WriteSession::idx_forwardData_marshall2(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void syncData();
 */
void CProxySection_WriteSession::syncData(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_WriteSession::idx_syncData_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: WriteSession(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_WriteSession::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeArray);
  CkRegisterArrayDimensions(__idx, 1);
  CkRegisterBase(__idx, CkIndex_ArrayElement::__idx);
  // REG: WriteSession(const FileToken &file, const size_t &offset, const size_t &bytes);
  idx_WriteSession_marshall1();

  // REG: void forwardData(const char *data, const size_t &bytes, const size_t &offset);
  idx_forwardData_marshall2();

  // REG: void syncData();
  idx_syncData_void();

  // REG: WriteSession(CkMigrateMessage* impl_msg);
  idx_WriteSession_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_WriteSession_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group Map: CkArrayMap{
Map();
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_Map::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: Map();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Map();
 */
CkGroupID CProxy_Map::ckNew(const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_Map::__idx, CkIndex_Map::idx_Map_void(), impl_msg);
  return gId;
}

// Entry point registration function
int CkIndex_Map::reg_Map_void() {
  int epidx = CkRegisterEp("Map()",
      reinterpret_cast<CkCallFnPtr>(_call_Map_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_Map::_call_Map_void(void* impl_msg, void* impl_obj_void)
{
  Map* impl_obj = static_cast<Map*>(impl_obj_void);
  new (impl_obj_void) Map();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Map();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_Map::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_CkArrayMap::__idx);
   CkRegisterGroupIrr(__idx,Map::isIrreducible());
  // REG: Map();
  idx_Map_void();
  CkRegisterDefaultCtor(__idx, idx_Map_void());

}
#endif /* CK_TEMPLATES_ONLY */

} // namespace impl

} // namespace IO

} // namespace Ck

#ifndef CK_TEMPLATES_ONLY
void _registerCkIO_impl(void)
{
  static int _done = 0; if(_done) return; _done = 1;

using namespace Ck;
using namespace IO;
using namespace impl;
  CkRegisterReadonly("director","CProxy_Director",sizeof(director),(void *) &director,__xlater_roPup_director);

/* REG: mainchare Director: Chare{
Director(CkArgMsg* impl_msg);
void openFile(const std::string &name, const CkCallback &opened, const Options &opts);
void fileOpened(const FileToken &file);
void sessionComplete(const FileToken &file);
void prepareWriteSession(const FileToken &file, const size_t &bytes, const size_t &offset, const CkCallback &ready, const CkCallback &complete);
void prepareWriteSession(const FileToken &file, const size_t &bytes, const size_t &offset, const CkCallback &ready, const char *commitData, const size_t &commitBytes, const size_t &commitOffset, const CkCallback &complete);
void sessionReady(CkReductionMsg* impl_msg);
void sessionDone(CkReductionMsg* impl_msg);
void close(const FileToken &token, const CkCallback &closed);
Director(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_Director::__register("Director", sizeof(Director));

/* REG: group Manager: IrrGroup{
Manager();
void run();
void openFile(unsigned int opnum, const FileToken &token, const std::string &name, const Options &opts);
void close(unsigned int opnum, const FileToken &token, const CkCallback &closed);
Manager(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_Manager::__register("Manager", sizeof(Manager));

/* REG: array WriteSession: ArrayElement{
WriteSession(const FileToken &file, const size_t &offset, const size_t &bytes);
void forwardData(const char *data, const size_t &bytes, const size_t &offset);
void syncData();
WriteSession(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_WriteSession::__register("WriteSession", sizeof(WriteSession));

/* REG: group Map: CkArrayMap{
Map();
};
*/
  CkIndex_Map::__register("Map", sizeof(Map));




}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void Ck::IO::impl::CBase_Director::virtual_pup(PUP::er &p) {
    recursive_pup<Ck::IO::impl::Director>(dynamic_cast<Ck::IO::impl::Director*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void Ck::IO::impl::CBase_Manager::virtual_pup(PUP::er &p) {
    recursive_pup<Ck::IO::impl::Manager>(dynamic_cast<Ck::IO::impl::Manager*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void Ck::IO::impl::CBase_WriteSession::virtual_pup(PUP::er &p) {
    recursive_pup<Ck::IO::impl::WriteSession>(dynamic_cast<Ck::IO::impl::WriteSession*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void Ck::IO::impl::CBase_Map::virtual_pup(PUP::er &p) {
    recursive_pup<Ck::IO::impl::Map>(dynamic_cast<Ck::IO::impl::Map*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
