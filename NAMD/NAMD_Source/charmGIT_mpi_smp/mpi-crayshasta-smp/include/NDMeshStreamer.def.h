


/* ---------------- method closures -------------- */
#ifdef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
template <class dtype, class RouterType> 

    struct Closure_MeshStreamer <dtype, RouterType> ::enablePeriodicFlushing_2_closure : public SDAG::Closure {
      

      enablePeriodicFlushing_2_closure() {
        init();
      }
      enablePeriodicFlushing_2_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~enablePeriodicFlushing_2_closure() {
      }
      PUPable_decl_template(SINGLE_ARG(enablePeriodicFlushing_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
template <class dtype, class RouterType> 

    struct Closure_MeshStreamer <dtype, RouterType> ::finish_3_closure : public SDAG::Closure {
      

      finish_3_closure() {
        init();
      }
      finish_3_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~finish_3_closure() {
      }
      PUPable_decl_template(SINGLE_ARG(finish_3_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
template <class dtype, class RouterType> 

    struct Closure_MeshStreamer <dtype, RouterType> ::init_4_closure : public SDAG::Closure {
            int numLocalContributors;
            CkCallback startCb;
            CkCallback endCb;
            int prio;
            bool usePeriodicFlushing;


      init_4_closure() {
        init();
      }
      init_4_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return numLocalContributors;}
            CkCallback & getP1() { return startCb;}
            CkCallback & getP2() { return endCb;}
            int & getP3() { return prio;}
            bool & getP4() { return usePeriodicFlushing;}
      void pup(PUP::er& __p) {
        __p | numLocalContributors;
        __p | startCb;
        __p | endCb;
        __p | prio;
        __p | usePeriodicFlushing;
        packClosure(__p);
      }
      virtual ~init_4_closure() {
      }
      PUPable_decl_template(SINGLE_ARG(init_4_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
template <class dtype, class RouterType> 

    struct Closure_MeshStreamer <dtype, RouterType> ::init_5_closure : public SDAG::Closure {
            int numContributors;
            CkCallback startCb;
            CkCallback endCb;
            CProxy_CompletionDetector detector;
            int prio;
            bool usePeriodicFlushing;


      init_5_closure() {
        init();
      }
      init_5_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return numContributors;}
            CkCallback & getP1() { return startCb;}
            CkCallback & getP2() { return endCb;}
            CProxy_CompletionDetector & getP3() { return detector;}
            int & getP4() { return prio;}
            bool & getP5() { return usePeriodicFlushing;}
      void pup(PUP::er& __p) {
        __p | numContributors;
        __p | startCb;
        __p | endCb;
        __p | detector;
        __p | prio;
        __p | usePeriodicFlushing;
        packClosure(__p);
      }
      virtual ~init_5_closure() {
      }
      PUPable_decl_template(SINGLE_ARG(init_5_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
template <class dtype, class RouterType> 

    struct Closure_MeshStreamer <dtype, RouterType> ::init_6_closure : public SDAG::Closure {
            CkArrayID senderArrayID;
            CkCallback startCb;
            CkCallback endCb;
            int prio;
            bool usePeriodicFlushing;


      init_6_closure() {
        init();
      }
      init_6_closure(CkMigrateMessage*) {
        init();
      }
            CkArrayID & getP0() { return senderArrayID;}
            CkCallback & getP1() { return startCb;}
            CkCallback & getP2() { return endCb;}
            int & getP3() { return prio;}
            bool & getP4() { return usePeriodicFlushing;}
      void pup(PUP::er& __p) {
        __p | senderArrayID;
        __p | startCb;
        __p | endCb;
        __p | prio;
        __p | usePeriodicFlushing;
        packClosure(__p);
      }
      virtual ~init_6_closure() {
      }
      PUPable_decl_template(SINGLE_ARG(init_6_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
template <class dtype, class RouterType> 

    struct Closure_MeshStreamer <dtype, RouterType> ::init_7_closure : public SDAG::Closure {
            CkCallback endCb;
            int prio;


      init_7_closure() {
        init();
      }
      init_7_closure(CkMigrateMessage*) {
        init();
      }
            CkCallback & getP0() { return endCb;}
            int & getP1() { return prio;}
      void pup(PUP::er& __p) {
        __p | endCb;
        __p | prio;
        packClosure(__p);
      }
      virtual ~init_7_closure() {
      }
      PUPable_decl_template(SINGLE_ARG(init_7_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
template <class dtype, class RouterType> 

    struct Closure_MeshStreamer <dtype, RouterType> ::syncInit_8_closure : public SDAG::Closure {
      

      syncInit_8_closure() {
        init();
      }
      syncInit_8_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~syncInit_8_closure() {
      }
      PUPable_decl_template(SINGLE_ARG(syncInit_8_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* ---------------- method closures -------------- */
#ifdef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* ---------------- method closures -------------- */
#ifdef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
template <class dtype, class ClientType, class RouterType, int(*EntryMethod)(char* impl_noname_2, void* impl_noname_3)> 

    struct Closure_ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ::processLocationRequest_2_closure : public SDAG::Closure {
            CkArrayIndex arrayId;
            int deliveredToPe;
            int sourcePe;


      processLocationRequest_2_closure() {
        init();
      }
      processLocationRequest_2_closure(CkMigrateMessage*) {
        init();
      }
            CkArrayIndex & getP0() { return arrayId;}
            int & getP1() { return deliveredToPe;}
            int & getP2() { return sourcePe;}
      void pup(PUP::er& __p) {
        __p | arrayId;
        __p | deliveredToPe;
        __p | sourcePe;
        packClosure(__p);
      }
      virtual ~processLocationRequest_2_closure() {
      }
      PUPable_decl_template(SINGLE_ARG(processLocationRequest_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
template <class dtype, class ClientType, class RouterType, int(*EntryMethod)(char* impl_noname_2, void* impl_noname_3)> 

    struct Closure_ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ::resendMisdeliveredItems_3_closure : public SDAG::Closure {
            CkArrayIndex arrayId;
            int destinationPe;


      resendMisdeliveredItems_3_closure() {
        init();
      }
      resendMisdeliveredItems_3_closure(CkMigrateMessage*) {
        init();
      }
            CkArrayIndex & getP0() { return arrayId;}
            int & getP1() { return destinationPe;}
      void pup(PUP::er& __p) {
        __p | arrayId;
        __p | destinationPe;
        packClosure(__p);
      }
      virtual ~resendMisdeliveredItems_3_closure() {
      }
      PUPable_decl_template(SINGLE_ARG(resendMisdeliveredItems_3_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
template <class dtype, class ClientType, class RouterType, int(*EntryMethod)(char* impl_noname_2, void* impl_noname_3)> 

    struct Closure_ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ::updateLocationAtSource_4_closure : public SDAG::Closure {
            CkArrayIndex arrayId;
            int destinationPe;


      updateLocationAtSource_4_closure() {
        init();
      }
      updateLocationAtSource_4_closure(CkMigrateMessage*) {
        init();
      }
            CkArrayIndex & getP0() { return arrayId;}
            int & getP1() { return destinationPe;}
      void pup(PUP::er& __p) {
        __p | arrayId;
        __p | destinationPe;
        packClosure(__p);
      }
      virtual ~updateLocationAtSource_4_closure() {
      }
      PUPable_decl_template(SINGLE_ARG(updateLocationAtSource_4_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */




/* DEFS: message MeshStreamerMessageV{
int destinationPes[];
int sourcePes[];
std::uint16_t offsets[];
CkArrayIndex destObjects[];
char dataItems[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_MeshStreamerMessageV::operator new(size_t s){
  return MeshStreamerMessageV::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_MeshStreamerMessageV::operator new(size_t s, int* sz){
  return MeshStreamerMessageV::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_MeshStreamerMessageV::operator new(size_t s, int* sz,const int pb){
  return MeshStreamerMessageV::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_MeshStreamerMessageV::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return MeshStreamerMessageV::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_MeshStreamerMessageV::operator new(size_t s, int sz0, int sz1, int sz2, int sz3, int sz4) {
  int sizes[5];
  sizes[0] = sz0;
  sizes[1] = sz1;
  sizes[2] = sz2;
  sizes[3] = sz3;
  sizes[4] = sz4;
  return MeshStreamerMessageV::alloc(__idx, s, sizes, 0, GroupDepNum{});
}
void *CMessage_MeshStreamerMessageV::operator new(size_t s, int sz0, int sz1, int sz2, int sz3, int sz4, const int p) {
  int sizes[5];
  sizes[0] = sz0;
  sizes[1] = sz1;
  sizes[2] = sz2;
  sizes[3] = sz3;
  sizes[4] = sz4;
  return MeshStreamerMessageV::alloc(__idx, s, sizes, p, GroupDepNum{});
}
void *CMessage_MeshStreamerMessageV::operator new(size_t s, int sz0, int sz1, int sz2, int sz3, int sz4, const int p, const GroupDepNum groupDepNum) {
  int sizes[5];
  sizes[0] = sz0;
  sizes[1] = sz1;
  sizes[2] = sz2;
  sizes[3] = sz3;
  sizes[4] = sz4;
  return MeshStreamerMessageV::alloc(__idx, s, sizes, p, groupDepNum);
}
void* CMessage_MeshStreamerMessageV::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN_DEFAULT(sizeof(int)*sizes[0]);
  if(sizes==0)
    CkpvAccess(_offsets)[2] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[2] = CkpvAccess(_offsets)[1] + ALIGN_DEFAULT(sizeof(int)*sizes[1]);
  if(sizes==0)
    CkpvAccess(_offsets)[3] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[3] = CkpvAccess(_offsets)[2] + ALIGN_DEFAULT(sizeof(std::uint16_t)*sizes[2]);
  if(sizes==0)
    CkpvAccess(_offsets)[4] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[4] = CkpvAccess(_offsets)[3] + ALIGN_DEFAULT(sizeof(CkArrayIndex)*sizes[3]);
  if(sizes==0)
    CkpvAccess(_offsets)[5] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[5] = CkpvAccess(_offsets)[4] + ALIGN_DEFAULT(sizeof(char)*sizes[4]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[5], pb, groupDepNum);
}
CMessage_MeshStreamerMessageV::CMessage_MeshStreamerMessageV() {
MeshStreamerMessageV *newmsg = (MeshStreamerMessageV *)this;
  newmsg->destinationPes = (int *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
  newmsg->sourcePes = (int *) ((char *)newmsg + CkpvAccess(_offsets)[1]);
  newmsg->offsets = (std::uint16_t *) ((char *)newmsg + CkpvAccess(_offsets)[2]);
  newmsg->destObjects = (CkArrayIndex *) ((char *)newmsg + CkpvAccess(_offsets)[3]);
  newmsg->dataItems = (char *) ((char *)newmsg + CkpvAccess(_offsets)[4]);
}
void CMessage_MeshStreamerMessageV::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_MeshStreamerMessageV::pack(MeshStreamerMessageV *msg) {
  msg->destinationPes = (int *) ((char *)msg->destinationPes - (char *)msg);
  msg->sourcePes = (int *) ((char *)msg->sourcePes - (char *)msg);
  msg->offsets = (std::uint16_t *) ((char *)msg->offsets - (char *)msg);
  msg->destObjects = (CkArrayIndex *) ((char *)msg->destObjects - (char *)msg);
  msg->dataItems = (char *) ((char *)msg->dataItems - (char *)msg);
  return (void *) msg;
}
MeshStreamerMessageV* CMessage_MeshStreamerMessageV::unpack(void* buf) {
  MeshStreamerMessageV *msg = (MeshStreamerMessageV *) buf;
  msg->destinationPes = (int *) ((size_t)msg->destinationPes + (char *)msg);
  msg->sourcePes = (int *) ((size_t)msg->sourcePes + (char *)msg);
  msg->offsets = (std::uint16_t *) ((size_t)msg->offsets + (char *)msg);
  msg->destObjects = (CkArrayIndex *) ((size_t)msg->destObjects + (char *)msg);
  msg->dataItems = (char *) ((size_t)msg->dataItems + (char *)msg);
  return msg;
}
int CMessage_MeshStreamerMessageV::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: template <class dtype, class RouterType> group MeshStreamer: IrrGroup{
void receiveAlongRoute(MeshStreamerMessageV* impl_msg);
void enablePeriodicFlushing();
void finish();
void init(int numLocalContributors, const CkCallback &startCb, const CkCallback &endCb, int prio, const bool &usePeriodicFlushing);
void init(int numContributors, const CkCallback &startCb, const CkCallback &endCb, const CProxy_CompletionDetector &detector, int prio, const bool &usePeriodicFlushing);
void init(const CkArrayID &senderArrayID, const CkCallback &startCb, const CkCallback &endCb, int prio, const bool &usePeriodicFlushing);
void init(const CkCallback &endCb, int prio);
void syncInit();
void receiveAtDestination(MeshStreamerMessageV* impl_msg);
MeshStreamer(CkMigrateMessage* impl_msg);
};
 */
#ifdef CK_TEMPLATES_ONLY
template <class dtype, class RouterType>  int CkIndex_MeshStreamer <dtype, RouterType> ::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifdef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifdef CK_TEMPLATES_ONLY
/* DEFS: void receiveAlongRoute(MeshStreamerMessageV* impl_msg);
 */
template <class dtype, class RouterType> 
void CProxyElement_MeshStreamer <dtype, RouterType> ::receiveAlongRoute(MeshStreamerMessageV* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_MeshStreamer <dtype, RouterType> ::idx_receiveAlongRoute_MeshStreamerMessageV(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_MeshStreamer <dtype, RouterType> ::idx_receiveAlongRoute_MeshStreamerMessageV(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_MeshStreamer <dtype, RouterType> ::idx_receiveAlongRoute_MeshStreamerMessageV(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void enablePeriodicFlushing();
 */
template <class dtype, class RouterType> 
void CProxyElement_MeshStreamer <dtype, RouterType> ::enablePeriodicFlushing(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_MeshStreamer <dtype, RouterType> ::idx_enablePeriodicFlushing_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_MeshStreamer <dtype, RouterType> ::idx_enablePeriodicFlushing_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_MeshStreamer <dtype, RouterType> ::idx_enablePeriodicFlushing_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void finish();
 */
template <class dtype, class RouterType> 
void CProxyElement_MeshStreamer <dtype, RouterType> ::finish(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_MeshStreamer <dtype, RouterType> ::idx_finish_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_MeshStreamer <dtype, RouterType> ::idx_finish_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_MeshStreamer <dtype, RouterType> ::idx_finish_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void init(int numLocalContributors, const CkCallback &startCb, const CkCallback &endCb, int prio, const bool &usePeriodicFlushing);
 */
template <class dtype, class RouterType> 
void CProxyElement_MeshStreamer <dtype, RouterType> ::init(int numLocalContributors, const CkCallback &startCb, const CkCallback &endCb, int prio, const bool &usePeriodicFlushing, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int numLocalContributors, const CkCallback &startCb, const CkCallback &endCb, int prio, const bool &usePeriodicFlushing
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|numLocalContributors;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)startCb;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)endCb;
    implP|prio;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)usePeriodicFlushing;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|numLocalContributors;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)startCb;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)endCb;
    implP|prio;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)usePeriodicFlushing;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_MeshStreamer <dtype, RouterType> ::idx_init_marshall4(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_MeshStreamer <dtype, RouterType> ::idx_init_marshall4(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_MeshStreamer <dtype, RouterType> ::idx_init_marshall4(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void init(int numContributors, const CkCallback &startCb, const CkCallback &endCb, const CProxy_CompletionDetector &detector, int prio, const bool &usePeriodicFlushing);
 */
template <class dtype, class RouterType> 
void CProxyElement_MeshStreamer <dtype, RouterType> ::init(int numContributors, const CkCallback &startCb, const CkCallback &endCb, const CProxy_CompletionDetector &detector, int prio, const bool &usePeriodicFlushing, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int numContributors, const CkCallback &startCb, const CkCallback &endCb, const CProxy_CompletionDetector &detector, int prio, const bool &usePeriodicFlushing
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|numContributors;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)startCb;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)endCb;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_CompletionDetector>::type>::type &)detector;
    implP|prio;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)usePeriodicFlushing;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|numContributors;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)startCb;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)endCb;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_CompletionDetector>::type>::type &)detector;
    implP|prio;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)usePeriodicFlushing;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_MeshStreamer <dtype, RouterType> ::idx_init_marshall5(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_MeshStreamer <dtype, RouterType> ::idx_init_marshall5(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_MeshStreamer <dtype, RouterType> ::idx_init_marshall5(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void init(const CkArrayID &senderArrayID, const CkCallback &startCb, const CkCallback &endCb, int prio, const bool &usePeriodicFlushing);
 */
template <class dtype, class RouterType> 
void CProxyElement_MeshStreamer <dtype, RouterType> ::init(const CkArrayID &senderArrayID, const CkCallback &startCb, const CkCallback &endCb, int prio, const bool &usePeriodicFlushing, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkArrayID &senderArrayID, const CkCallback &startCb, const CkCallback &endCb, int prio, const bool &usePeriodicFlushing
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayID>::type>::type &)senderArrayID;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)startCb;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)endCb;
    implP|prio;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)usePeriodicFlushing;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayID>::type>::type &)senderArrayID;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)startCb;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)endCb;
    implP|prio;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)usePeriodicFlushing;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_MeshStreamer <dtype, RouterType> ::idx_init_marshall6(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_MeshStreamer <dtype, RouterType> ::idx_init_marshall6(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_MeshStreamer <dtype, RouterType> ::idx_init_marshall6(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void init(const CkCallback &endCb, int prio);
 */
template <class dtype, class RouterType> 
void CProxyElement_MeshStreamer <dtype, RouterType> ::init(const CkCallback &endCb, int prio, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkCallback &endCb, int prio
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)endCb;
    implP|prio;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)endCb;
    implP|prio;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_MeshStreamer <dtype, RouterType> ::idx_init_marshall7(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_MeshStreamer <dtype, RouterType> ::idx_init_marshall7(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_MeshStreamer <dtype, RouterType> ::idx_init_marshall7(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void syncInit();
 */
template <class dtype, class RouterType> 
void CProxyElement_MeshStreamer <dtype, RouterType> ::syncInit(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_MeshStreamer <dtype, RouterType> ::idx_syncInit_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_MeshStreamer <dtype, RouterType> ::idx_syncInit_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_MeshStreamer <dtype, RouterType> ::idx_syncInit_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
template <class dtype, class RouterType> 
void CkIndex_MeshStreamer <dtype, RouterType> ::_call_redn_wrapper_syncInit_void(void* impl_msg, void* impl_obj_void)
{
  MeshStreamer <dtype, RouterType> * impl_obj = static_cast<MeshStreamer <dtype, RouterType> *> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
  impl_obj->syncInit();
  delete (CkReductionMsg*)impl_msg;
}

#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void receiveAtDestination(MeshStreamerMessageV* impl_msg);
 */
template <class dtype, class RouterType> 
void CProxyElement_MeshStreamer <dtype, RouterType> ::receiveAtDestination(MeshStreamerMessageV* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_MeshStreamer <dtype, RouterType> ::idx_receiveAtDestination_MeshStreamerMessageV(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_MeshStreamer <dtype, RouterType> ::idx_receiveAtDestination_MeshStreamerMessageV(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_MeshStreamer <dtype, RouterType> ::idx_receiveAtDestination_MeshStreamerMessageV(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: MeshStreamer(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void receiveAlongRoute(MeshStreamerMessageV* impl_msg);
 */
template <class dtype, class RouterType> 
void CProxy_MeshStreamer <dtype, RouterType> ::receiveAlongRoute(MeshStreamerMessageV* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_MeshStreamer <dtype, RouterType> ::idx_receiveAlongRoute_MeshStreamerMessageV(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_MeshStreamer <dtype, RouterType> ::idx_receiveAlongRoute_MeshStreamerMessageV(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_MeshStreamer <dtype, RouterType> ::idx_receiveAlongRoute_MeshStreamerMessageV(), impl_msg, ckGetGroupID(),0);
}
template <class dtype, class RouterType> 
void CProxy_MeshStreamer <dtype, RouterType> ::receiveAlongRoute(MeshStreamerMessageV* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_MeshStreamer <dtype, RouterType> ::idx_receiveAlongRoute_MeshStreamerMessageV(), impl_msg, ckGetGroupID(), npes, pes,0);
}
template <class dtype, class RouterType> 
void CProxy_MeshStreamer <dtype, RouterType> ::receiveAlongRoute(MeshStreamerMessageV* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_MeshStreamer <dtype, RouterType> ::idx_receiveAlongRoute_MeshStreamerMessageV(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
template <class dtype, class RouterType> 
int CkIndex_MeshStreamer <dtype, RouterType> ::reg_receiveAlongRoute_MeshStreamerMessageV() {
  int epidx = CkRegisterEp("receiveAlongRoute(MeshStreamerMessageV* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_receiveAlongRoute_MeshStreamerMessageV), CMessage_MeshStreamerMessageV::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)MeshStreamerMessageV::ckDebugPup);
  return epidx;
}

template <class dtype, class RouterType> 
void CkIndex_MeshStreamer <dtype, RouterType> ::_call_receiveAlongRoute_MeshStreamerMessageV(void* impl_msg, void* impl_obj_void)
{
  MeshStreamer <dtype, RouterType> * impl_obj = static_cast<MeshStreamer <dtype, RouterType> *>(impl_obj_void);
  impl_obj->receiveAlongRoute((MeshStreamerMessageV*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void enablePeriodicFlushing();
 */
template <class dtype, class RouterType> 
void CProxy_MeshStreamer <dtype, RouterType> ::enablePeriodicFlushing(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_MeshStreamer <dtype, RouterType> ::idx_enablePeriodicFlushing_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_MeshStreamer <dtype, RouterType> ::idx_enablePeriodicFlushing_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_MeshStreamer <dtype, RouterType> ::idx_enablePeriodicFlushing_void(), impl_msg, ckGetGroupID(),0);
}
template <class dtype, class RouterType> 
void CProxy_MeshStreamer <dtype, RouterType> ::enablePeriodicFlushing(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_MeshStreamer <dtype, RouterType> ::idx_enablePeriodicFlushing_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
template <class dtype, class RouterType> 
void CProxy_MeshStreamer <dtype, RouterType> ::enablePeriodicFlushing(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_MeshStreamer <dtype, RouterType> ::idx_enablePeriodicFlushing_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
template <class dtype, class RouterType> 
int CkIndex_MeshStreamer <dtype, RouterType> ::reg_enablePeriodicFlushing_void() {
  int epidx = CkRegisterEp("enablePeriodicFlushing()",
      reinterpret_cast<CkCallFnPtr>(_call_enablePeriodicFlushing_void), 0, __idx, 0);
  return epidx;
}

template <class dtype, class RouterType> 
void CkIndex_MeshStreamer <dtype, RouterType> ::_call_enablePeriodicFlushing_void(void* impl_msg, void* impl_obj_void)
{
  MeshStreamer <dtype, RouterType> * impl_obj = static_cast<MeshStreamer <dtype, RouterType> *>(impl_obj_void);
  impl_obj->enablePeriodicFlushing();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
template <class dtype, class RouterType> PUPable_def_template_nonInst(SINGLE_ARG(Closure_MeshStreamer <dtype, RouterType> ::enablePeriodicFlushing_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void finish();
 */
template <class dtype, class RouterType> 
void CProxy_MeshStreamer <dtype, RouterType> ::finish(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_MeshStreamer <dtype, RouterType> ::idx_finish_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_MeshStreamer <dtype, RouterType> ::idx_finish_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_MeshStreamer <dtype, RouterType> ::idx_finish_void(), impl_msg, ckGetGroupID(),0);
}
template <class dtype, class RouterType> 
void CProxy_MeshStreamer <dtype, RouterType> ::finish(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_MeshStreamer <dtype, RouterType> ::idx_finish_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
template <class dtype, class RouterType> 
void CProxy_MeshStreamer <dtype, RouterType> ::finish(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_MeshStreamer <dtype, RouterType> ::idx_finish_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
template <class dtype, class RouterType> 
int CkIndex_MeshStreamer <dtype, RouterType> ::reg_finish_void() {
  int epidx = CkRegisterEp("finish()",
      reinterpret_cast<CkCallFnPtr>(_call_finish_void), 0, __idx, 0);
  return epidx;
}

template <class dtype, class RouterType> 
void CkIndex_MeshStreamer <dtype, RouterType> ::_call_finish_void(void* impl_msg, void* impl_obj_void)
{
  MeshStreamer <dtype, RouterType> * impl_obj = static_cast<MeshStreamer <dtype, RouterType> *>(impl_obj_void);
  impl_obj->finish();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
template <class dtype, class RouterType> PUPable_def_template_nonInst(SINGLE_ARG(Closure_MeshStreamer <dtype, RouterType> ::finish_3_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void init(int numLocalContributors, const CkCallback &startCb, const CkCallback &endCb, int prio, const bool &usePeriodicFlushing);
 */
template <class dtype, class RouterType> 
void CProxy_MeshStreamer <dtype, RouterType> ::init(int numLocalContributors, const CkCallback &startCb, const CkCallback &endCb, int prio, const bool &usePeriodicFlushing, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int numLocalContributors, const CkCallback &startCb, const CkCallback &endCb, int prio, const bool &usePeriodicFlushing
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|numLocalContributors;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)startCb;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)endCb;
    implP|prio;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)usePeriodicFlushing;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|numLocalContributors;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)startCb;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)endCb;
    implP|prio;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)usePeriodicFlushing;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_MeshStreamer <dtype, RouterType> ::idx_init_marshall4(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_MeshStreamer <dtype, RouterType> ::idx_init_marshall4(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_MeshStreamer <dtype, RouterType> ::idx_init_marshall4(), impl_msg, ckGetGroupID(),0);
}
template <class dtype, class RouterType> 
void CProxy_MeshStreamer <dtype, RouterType> ::init(int numLocalContributors, const CkCallback &startCb, const CkCallback &endCb, int prio, const bool &usePeriodicFlushing, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: int numLocalContributors, const CkCallback &startCb, const CkCallback &endCb, int prio, const bool &usePeriodicFlushing
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|numLocalContributors;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)startCb;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)endCb;
    implP|prio;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)usePeriodicFlushing;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|numLocalContributors;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)startCb;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)endCb;
    implP|prio;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)usePeriodicFlushing;
  }
  CkSendMsgBranchMulti(CkIndex_MeshStreamer <dtype, RouterType> ::idx_init_marshall4(), impl_msg, ckGetGroupID(), npes, pes,0);
}
template <class dtype, class RouterType> 
void CProxy_MeshStreamer <dtype, RouterType> ::init(int numLocalContributors, const CkCallback &startCb, const CkCallback &endCb, int prio, const bool &usePeriodicFlushing, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: int numLocalContributors, const CkCallback &startCb, const CkCallback &endCb, int prio, const bool &usePeriodicFlushing
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|numLocalContributors;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)startCb;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)endCb;
    implP|prio;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)usePeriodicFlushing;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|numLocalContributors;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)startCb;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)endCb;
    implP|prio;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)usePeriodicFlushing;
  }
  CkSendMsgBranchGroup(CkIndex_MeshStreamer <dtype, RouterType> ::idx_init_marshall4(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
template <class dtype, class RouterType> 
int CkIndex_MeshStreamer <dtype, RouterType> ::reg_init_marshall4() {
  int epidx = CkRegisterEp("init(int numLocalContributors, const CkCallback &startCb, const CkCallback &endCb, int prio, const bool &usePeriodicFlushing)",
      reinterpret_cast<CkCallFnPtr>(_call_init_marshall4), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_init_marshall4);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_init_marshall4);

  return epidx;
}

template <class dtype, class RouterType> 
void CkIndex_MeshStreamer <dtype, RouterType> ::_call_init_marshall4(void* impl_msg, void* impl_obj_void)
{
  MeshStreamer <dtype, RouterType> * impl_obj = static_cast<MeshStreamer <dtype, RouterType> *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int numLocalContributors, const CkCallback &startCb, const CkCallback &endCb, int prio, const bool &usePeriodicFlushing*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> numLocalContributors;
  implP|numLocalContributors;
  PUP::detail::TemporaryObjectHolder<CkCallback> startCb;
  implP|startCb;
  PUP::detail::TemporaryObjectHolder<CkCallback> endCb;
  implP|endCb;
  PUP::detail::TemporaryObjectHolder<int> prio;
  implP|prio;
  PUP::detail::TemporaryObjectHolder<bool> usePeriodicFlushing;
  implP|usePeriodicFlushing;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->init(std::move(numLocalContributors.t), std::move(startCb.t), std::move(endCb.t), std::move(prio.t), std::move(usePeriodicFlushing.t));
}
template <class dtype, class RouterType> 
int CkIndex_MeshStreamer <dtype, RouterType> ::_callmarshall_init_marshall4(char* impl_buf, void* impl_obj_void) {
  MeshStreamer <dtype, RouterType> * impl_obj = static_cast<MeshStreamer <dtype, RouterType> *>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int numLocalContributors, const CkCallback &startCb, const CkCallback &endCb, int prio, const bool &usePeriodicFlushing*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> numLocalContributors;
  implP|numLocalContributors;
  PUP::detail::TemporaryObjectHolder<CkCallback> startCb;
  implP|startCb;
  PUP::detail::TemporaryObjectHolder<CkCallback> endCb;
  implP|endCb;
  PUP::detail::TemporaryObjectHolder<int> prio;
  implP|prio;
  PUP::detail::TemporaryObjectHolder<bool> usePeriodicFlushing;
  implP|usePeriodicFlushing;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->init(std::move(numLocalContributors.t), std::move(startCb.t), std::move(endCb.t), std::move(prio.t), std::move(usePeriodicFlushing.t));
  return implP.size();
}
template <class dtype, class RouterType> 
void CkIndex_MeshStreamer <dtype, RouterType> ::_marshallmessagepup_init_marshall4(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int numLocalContributors, const CkCallback &startCb, const CkCallback &endCb, int prio, const bool &usePeriodicFlushing*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> numLocalContributors;
  implP|numLocalContributors;
  PUP::detail::TemporaryObjectHolder<CkCallback> startCb;
  implP|startCb;
  PUP::detail::TemporaryObjectHolder<CkCallback> endCb;
  implP|endCb;
  PUP::detail::TemporaryObjectHolder<int> prio;
  implP|prio;
  PUP::detail::TemporaryObjectHolder<bool> usePeriodicFlushing;
  implP|usePeriodicFlushing;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("numLocalContributors");
  implDestP|numLocalContributors;
  if (implDestP.hasComments()) implDestP.comment("startCb");
  implDestP|startCb;
  if (implDestP.hasComments()) implDestP.comment("endCb");
  implDestP|endCb;
  if (implDestP.hasComments()) implDestP.comment("prio");
  implDestP|prio;
  if (implDestP.hasComments()) implDestP.comment("usePeriodicFlushing");
  implDestP|usePeriodicFlushing;
}
template <class dtype, class RouterType> PUPable_def_template_nonInst(SINGLE_ARG(Closure_MeshStreamer <dtype, RouterType> ::init_4_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void init(int numContributors, const CkCallback &startCb, const CkCallback &endCb, const CProxy_CompletionDetector &detector, int prio, const bool &usePeriodicFlushing);
 */
template <class dtype, class RouterType> 
void CProxy_MeshStreamer <dtype, RouterType> ::init(int numContributors, const CkCallback &startCb, const CkCallback &endCb, const CProxy_CompletionDetector &detector, int prio, const bool &usePeriodicFlushing, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int numContributors, const CkCallback &startCb, const CkCallback &endCb, const CProxy_CompletionDetector &detector, int prio, const bool &usePeriodicFlushing
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|numContributors;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)startCb;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)endCb;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_CompletionDetector>::type>::type &)detector;
    implP|prio;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)usePeriodicFlushing;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|numContributors;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)startCb;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)endCb;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_CompletionDetector>::type>::type &)detector;
    implP|prio;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)usePeriodicFlushing;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_MeshStreamer <dtype, RouterType> ::idx_init_marshall5(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_MeshStreamer <dtype, RouterType> ::idx_init_marshall5(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_MeshStreamer <dtype, RouterType> ::idx_init_marshall5(), impl_msg, ckGetGroupID(),0);
}
template <class dtype, class RouterType> 
void CProxy_MeshStreamer <dtype, RouterType> ::init(int numContributors, const CkCallback &startCb, const CkCallback &endCb, const CProxy_CompletionDetector &detector, int prio, const bool &usePeriodicFlushing, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: int numContributors, const CkCallback &startCb, const CkCallback &endCb, const CProxy_CompletionDetector &detector, int prio, const bool &usePeriodicFlushing
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|numContributors;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)startCb;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)endCb;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_CompletionDetector>::type>::type &)detector;
    implP|prio;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)usePeriodicFlushing;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|numContributors;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)startCb;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)endCb;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_CompletionDetector>::type>::type &)detector;
    implP|prio;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)usePeriodicFlushing;
  }
  CkSendMsgBranchMulti(CkIndex_MeshStreamer <dtype, RouterType> ::idx_init_marshall5(), impl_msg, ckGetGroupID(), npes, pes,0);
}
template <class dtype, class RouterType> 
void CProxy_MeshStreamer <dtype, RouterType> ::init(int numContributors, const CkCallback &startCb, const CkCallback &endCb, const CProxy_CompletionDetector &detector, int prio, const bool &usePeriodicFlushing, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: int numContributors, const CkCallback &startCb, const CkCallback &endCb, const CProxy_CompletionDetector &detector, int prio, const bool &usePeriodicFlushing
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|numContributors;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)startCb;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)endCb;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_CompletionDetector>::type>::type &)detector;
    implP|prio;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)usePeriodicFlushing;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|numContributors;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)startCb;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)endCb;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_CompletionDetector>::type>::type &)detector;
    implP|prio;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)usePeriodicFlushing;
  }
  CkSendMsgBranchGroup(CkIndex_MeshStreamer <dtype, RouterType> ::idx_init_marshall5(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
template <class dtype, class RouterType> 
int CkIndex_MeshStreamer <dtype, RouterType> ::reg_init_marshall5() {
  int epidx = CkRegisterEp("init(int numContributors, const CkCallback &startCb, const CkCallback &endCb, const CProxy_CompletionDetector &detector, int prio, const bool &usePeriodicFlushing)",
      reinterpret_cast<CkCallFnPtr>(_call_init_marshall5), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_init_marshall5);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_init_marshall5);

  return epidx;
}

template <class dtype, class RouterType> 
void CkIndex_MeshStreamer <dtype, RouterType> ::_call_init_marshall5(void* impl_msg, void* impl_obj_void)
{
  MeshStreamer <dtype, RouterType> * impl_obj = static_cast<MeshStreamer <dtype, RouterType> *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int numContributors, const CkCallback &startCb, const CkCallback &endCb, const CProxy_CompletionDetector &detector, int prio, const bool &usePeriodicFlushing*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> numContributors;
  implP|numContributors;
  PUP::detail::TemporaryObjectHolder<CkCallback> startCb;
  implP|startCb;
  PUP::detail::TemporaryObjectHolder<CkCallback> endCb;
  implP|endCb;
  PUP::detail::TemporaryObjectHolder<CProxy_CompletionDetector> detector;
  implP|detector;
  PUP::detail::TemporaryObjectHolder<int> prio;
  implP|prio;
  PUP::detail::TemporaryObjectHolder<bool> usePeriodicFlushing;
  implP|usePeriodicFlushing;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->init(std::move(numContributors.t), std::move(startCb.t), std::move(endCb.t), std::move(detector.t), std::move(prio.t), std::move(usePeriodicFlushing.t));
}
template <class dtype, class RouterType> 
int CkIndex_MeshStreamer <dtype, RouterType> ::_callmarshall_init_marshall5(char* impl_buf, void* impl_obj_void) {
  MeshStreamer <dtype, RouterType> * impl_obj = static_cast<MeshStreamer <dtype, RouterType> *>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int numContributors, const CkCallback &startCb, const CkCallback &endCb, const CProxy_CompletionDetector &detector, int prio, const bool &usePeriodicFlushing*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> numContributors;
  implP|numContributors;
  PUP::detail::TemporaryObjectHolder<CkCallback> startCb;
  implP|startCb;
  PUP::detail::TemporaryObjectHolder<CkCallback> endCb;
  implP|endCb;
  PUP::detail::TemporaryObjectHolder<CProxy_CompletionDetector> detector;
  implP|detector;
  PUP::detail::TemporaryObjectHolder<int> prio;
  implP|prio;
  PUP::detail::TemporaryObjectHolder<bool> usePeriodicFlushing;
  implP|usePeriodicFlushing;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->init(std::move(numContributors.t), std::move(startCb.t), std::move(endCb.t), std::move(detector.t), std::move(prio.t), std::move(usePeriodicFlushing.t));
  return implP.size();
}
template <class dtype, class RouterType> 
void CkIndex_MeshStreamer <dtype, RouterType> ::_marshallmessagepup_init_marshall5(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int numContributors, const CkCallback &startCb, const CkCallback &endCb, const CProxy_CompletionDetector &detector, int prio, const bool &usePeriodicFlushing*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> numContributors;
  implP|numContributors;
  PUP::detail::TemporaryObjectHolder<CkCallback> startCb;
  implP|startCb;
  PUP::detail::TemporaryObjectHolder<CkCallback> endCb;
  implP|endCb;
  PUP::detail::TemporaryObjectHolder<CProxy_CompletionDetector> detector;
  implP|detector;
  PUP::detail::TemporaryObjectHolder<int> prio;
  implP|prio;
  PUP::detail::TemporaryObjectHolder<bool> usePeriodicFlushing;
  implP|usePeriodicFlushing;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("numContributors");
  implDestP|numContributors;
  if (implDestP.hasComments()) implDestP.comment("startCb");
  implDestP|startCb;
  if (implDestP.hasComments()) implDestP.comment("endCb");
  implDestP|endCb;
  if (implDestP.hasComments()) implDestP.comment("detector");
  implDestP|detector;
  if (implDestP.hasComments()) implDestP.comment("prio");
  implDestP|prio;
  if (implDestP.hasComments()) implDestP.comment("usePeriodicFlushing");
  implDestP|usePeriodicFlushing;
}
template <class dtype, class RouterType> PUPable_def_template_nonInst(SINGLE_ARG(Closure_MeshStreamer <dtype, RouterType> ::init_5_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void init(const CkArrayID &senderArrayID, const CkCallback &startCb, const CkCallback &endCb, int prio, const bool &usePeriodicFlushing);
 */
template <class dtype, class RouterType> 
void CProxy_MeshStreamer <dtype, RouterType> ::init(const CkArrayID &senderArrayID, const CkCallback &startCb, const CkCallback &endCb, int prio, const bool &usePeriodicFlushing, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkArrayID &senderArrayID, const CkCallback &startCb, const CkCallback &endCb, int prio, const bool &usePeriodicFlushing
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayID>::type>::type &)senderArrayID;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)startCb;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)endCb;
    implP|prio;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)usePeriodicFlushing;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayID>::type>::type &)senderArrayID;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)startCb;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)endCb;
    implP|prio;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)usePeriodicFlushing;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_MeshStreamer <dtype, RouterType> ::idx_init_marshall6(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_MeshStreamer <dtype, RouterType> ::idx_init_marshall6(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_MeshStreamer <dtype, RouterType> ::idx_init_marshall6(), impl_msg, ckGetGroupID(),0);
}
template <class dtype, class RouterType> 
void CProxy_MeshStreamer <dtype, RouterType> ::init(const CkArrayID &senderArrayID, const CkCallback &startCb, const CkCallback &endCb, int prio, const bool &usePeriodicFlushing, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: const CkArrayID &senderArrayID, const CkCallback &startCb, const CkCallback &endCb, int prio, const bool &usePeriodicFlushing
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayID>::type>::type &)senderArrayID;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)startCb;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)endCb;
    implP|prio;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)usePeriodicFlushing;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayID>::type>::type &)senderArrayID;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)startCb;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)endCb;
    implP|prio;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)usePeriodicFlushing;
  }
  CkSendMsgBranchMulti(CkIndex_MeshStreamer <dtype, RouterType> ::idx_init_marshall6(), impl_msg, ckGetGroupID(), npes, pes,0);
}
template <class dtype, class RouterType> 
void CProxy_MeshStreamer <dtype, RouterType> ::init(const CkArrayID &senderArrayID, const CkCallback &startCb, const CkCallback &endCb, int prio, const bool &usePeriodicFlushing, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: const CkArrayID &senderArrayID, const CkCallback &startCb, const CkCallback &endCb, int prio, const bool &usePeriodicFlushing
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayID>::type>::type &)senderArrayID;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)startCb;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)endCb;
    implP|prio;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)usePeriodicFlushing;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayID>::type>::type &)senderArrayID;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)startCb;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)endCb;
    implP|prio;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)usePeriodicFlushing;
  }
  CkSendMsgBranchGroup(CkIndex_MeshStreamer <dtype, RouterType> ::idx_init_marshall6(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
template <class dtype, class RouterType> 
int CkIndex_MeshStreamer <dtype, RouterType> ::reg_init_marshall6() {
  int epidx = CkRegisterEp("init(const CkArrayID &senderArrayID, const CkCallback &startCb, const CkCallback &endCb, int prio, const bool &usePeriodicFlushing)",
      reinterpret_cast<CkCallFnPtr>(_call_init_marshall6), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_init_marshall6);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_init_marshall6);

  return epidx;
}

template <class dtype, class RouterType> 
void CkIndex_MeshStreamer <dtype, RouterType> ::_call_init_marshall6(void* impl_msg, void* impl_obj_void)
{
  MeshStreamer <dtype, RouterType> * impl_obj = static_cast<MeshStreamer <dtype, RouterType> *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CkArrayID &senderArrayID, const CkCallback &startCb, const CkCallback &endCb, int prio, const bool &usePeriodicFlushing*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkArrayID> senderArrayID;
  implP|senderArrayID;
  PUP::detail::TemporaryObjectHolder<CkCallback> startCb;
  implP|startCb;
  PUP::detail::TemporaryObjectHolder<CkCallback> endCb;
  implP|endCb;
  PUP::detail::TemporaryObjectHolder<int> prio;
  implP|prio;
  PUP::detail::TemporaryObjectHolder<bool> usePeriodicFlushing;
  implP|usePeriodicFlushing;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->init(std::move(senderArrayID.t), std::move(startCb.t), std::move(endCb.t), std::move(prio.t), std::move(usePeriodicFlushing.t));
}
template <class dtype, class RouterType> 
int CkIndex_MeshStreamer <dtype, RouterType> ::_callmarshall_init_marshall6(char* impl_buf, void* impl_obj_void) {
  MeshStreamer <dtype, RouterType> * impl_obj = static_cast<MeshStreamer <dtype, RouterType> *>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const CkArrayID &senderArrayID, const CkCallback &startCb, const CkCallback &endCb, int prio, const bool &usePeriodicFlushing*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkArrayID> senderArrayID;
  implP|senderArrayID;
  PUP::detail::TemporaryObjectHolder<CkCallback> startCb;
  implP|startCb;
  PUP::detail::TemporaryObjectHolder<CkCallback> endCb;
  implP|endCb;
  PUP::detail::TemporaryObjectHolder<int> prio;
  implP|prio;
  PUP::detail::TemporaryObjectHolder<bool> usePeriodicFlushing;
  implP|usePeriodicFlushing;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->init(std::move(senderArrayID.t), std::move(startCb.t), std::move(endCb.t), std::move(prio.t), std::move(usePeriodicFlushing.t));
  return implP.size();
}
template <class dtype, class RouterType> 
void CkIndex_MeshStreamer <dtype, RouterType> ::_marshallmessagepup_init_marshall6(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CkArrayID &senderArrayID, const CkCallback &startCb, const CkCallback &endCb, int prio, const bool &usePeriodicFlushing*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkArrayID> senderArrayID;
  implP|senderArrayID;
  PUP::detail::TemporaryObjectHolder<CkCallback> startCb;
  implP|startCb;
  PUP::detail::TemporaryObjectHolder<CkCallback> endCb;
  implP|endCb;
  PUP::detail::TemporaryObjectHolder<int> prio;
  implP|prio;
  PUP::detail::TemporaryObjectHolder<bool> usePeriodicFlushing;
  implP|usePeriodicFlushing;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("senderArrayID");
  implDestP|senderArrayID;
  if (implDestP.hasComments()) implDestP.comment("startCb");
  implDestP|startCb;
  if (implDestP.hasComments()) implDestP.comment("endCb");
  implDestP|endCb;
  if (implDestP.hasComments()) implDestP.comment("prio");
  implDestP|prio;
  if (implDestP.hasComments()) implDestP.comment("usePeriodicFlushing");
  implDestP|usePeriodicFlushing;
}
template <class dtype, class RouterType> PUPable_def_template_nonInst(SINGLE_ARG(Closure_MeshStreamer <dtype, RouterType> ::init_6_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void init(const CkCallback &endCb, int prio);
 */
template <class dtype, class RouterType> 
void CProxy_MeshStreamer <dtype, RouterType> ::init(const CkCallback &endCb, int prio, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkCallback &endCb, int prio
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)endCb;
    implP|prio;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)endCb;
    implP|prio;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_MeshStreamer <dtype, RouterType> ::idx_init_marshall7(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_MeshStreamer <dtype, RouterType> ::idx_init_marshall7(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_MeshStreamer <dtype, RouterType> ::idx_init_marshall7(), impl_msg, ckGetGroupID(),0);
}
template <class dtype, class RouterType> 
void CProxy_MeshStreamer <dtype, RouterType> ::init(const CkCallback &endCb, int prio, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: const CkCallback &endCb, int prio
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)endCb;
    implP|prio;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)endCb;
    implP|prio;
  }
  CkSendMsgBranchMulti(CkIndex_MeshStreamer <dtype, RouterType> ::idx_init_marshall7(), impl_msg, ckGetGroupID(), npes, pes,0);
}
template <class dtype, class RouterType> 
void CProxy_MeshStreamer <dtype, RouterType> ::init(const CkCallback &endCb, int prio, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: const CkCallback &endCb, int prio
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)endCb;
    implP|prio;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)endCb;
    implP|prio;
  }
  CkSendMsgBranchGroup(CkIndex_MeshStreamer <dtype, RouterType> ::idx_init_marshall7(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
template <class dtype, class RouterType> 
int CkIndex_MeshStreamer <dtype, RouterType> ::reg_init_marshall7() {
  int epidx = CkRegisterEp("init(const CkCallback &endCb, int prio)",
      reinterpret_cast<CkCallFnPtr>(_call_init_marshall7), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_init_marshall7);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_init_marshall7);

  return epidx;
}

template <class dtype, class RouterType> 
void CkIndex_MeshStreamer <dtype, RouterType> ::_call_init_marshall7(void* impl_msg, void* impl_obj_void)
{
  MeshStreamer <dtype, RouterType> * impl_obj = static_cast<MeshStreamer <dtype, RouterType> *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CkCallback &endCb, int prio*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkCallback> endCb;
  implP|endCb;
  PUP::detail::TemporaryObjectHolder<int> prio;
  implP|prio;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->init(std::move(endCb.t), std::move(prio.t));
}
template <class dtype, class RouterType> 
int CkIndex_MeshStreamer <dtype, RouterType> ::_callmarshall_init_marshall7(char* impl_buf, void* impl_obj_void) {
  MeshStreamer <dtype, RouterType> * impl_obj = static_cast<MeshStreamer <dtype, RouterType> *>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const CkCallback &endCb, int prio*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkCallback> endCb;
  implP|endCb;
  PUP::detail::TemporaryObjectHolder<int> prio;
  implP|prio;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->init(std::move(endCb.t), std::move(prio.t));
  return implP.size();
}
template <class dtype, class RouterType> 
void CkIndex_MeshStreamer <dtype, RouterType> ::_marshallmessagepup_init_marshall7(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CkCallback &endCb, int prio*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkCallback> endCb;
  implP|endCb;
  PUP::detail::TemporaryObjectHolder<int> prio;
  implP|prio;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("endCb");
  implDestP|endCb;
  if (implDestP.hasComments()) implDestP.comment("prio");
  implDestP|prio;
}
template <class dtype, class RouterType> PUPable_def_template_nonInst(SINGLE_ARG(Closure_MeshStreamer <dtype, RouterType> ::init_7_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void syncInit();
 */
template <class dtype, class RouterType> 
void CProxy_MeshStreamer <dtype, RouterType> ::syncInit(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_MeshStreamer <dtype, RouterType> ::idx_syncInit_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_MeshStreamer <dtype, RouterType> ::idx_syncInit_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_MeshStreamer <dtype, RouterType> ::idx_syncInit_void(), impl_msg, ckGetGroupID(),0);
}
template <class dtype, class RouterType> 
void CProxy_MeshStreamer <dtype, RouterType> ::syncInit(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_MeshStreamer <dtype, RouterType> ::idx_syncInit_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
template <class dtype, class RouterType> 
void CProxy_MeshStreamer <dtype, RouterType> ::syncInit(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_MeshStreamer <dtype, RouterType> ::idx_syncInit_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
template <class dtype, class RouterType> 
int CkIndex_MeshStreamer <dtype, RouterType> ::reg_syncInit_void() {
  int epidx = CkRegisterEp("syncInit()",
      reinterpret_cast<CkCallFnPtr>(_call_syncInit_void), 0, __idx, 0);
  return epidx;
}


// Redn wrapper registration function
template <class dtype, class RouterType> 
int CkIndex_MeshStreamer <dtype, RouterType> ::reg_redn_wrapper_syncInit_void() {
  return CkRegisterEp("redn_wrapper_syncInit(CkReductionMsg *impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_redn_wrapper_syncInit_void), CMessage_CkReductionMsg::__idx, __idx, 0);
}

template <class dtype, class RouterType> 
void CkIndex_MeshStreamer <dtype, RouterType> ::_call_syncInit_void(void* impl_msg, void* impl_obj_void)
{
  MeshStreamer <dtype, RouterType> * impl_obj = static_cast<MeshStreamer <dtype, RouterType> *>(impl_obj_void);
  impl_obj->syncInit();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
template <class dtype, class RouterType> PUPable_def_template_nonInst(SINGLE_ARG(Closure_MeshStreamer <dtype, RouterType> ::syncInit_8_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void receiveAtDestination(MeshStreamerMessageV* impl_msg);
 */
template <class dtype, class RouterType> 
void CProxy_MeshStreamer <dtype, RouterType> ::receiveAtDestination(MeshStreamerMessageV* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_MeshStreamer <dtype, RouterType> ::idx_receiveAtDestination_MeshStreamerMessageV(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_MeshStreamer <dtype, RouterType> ::idx_receiveAtDestination_MeshStreamerMessageV(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_MeshStreamer <dtype, RouterType> ::idx_receiveAtDestination_MeshStreamerMessageV(), impl_msg, ckGetGroupID(),0);
}
template <class dtype, class RouterType> 
void CProxy_MeshStreamer <dtype, RouterType> ::receiveAtDestination(MeshStreamerMessageV* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_MeshStreamer <dtype, RouterType> ::idx_receiveAtDestination_MeshStreamerMessageV(), impl_msg, ckGetGroupID(), npes, pes,0);
}
template <class dtype, class RouterType> 
void CProxy_MeshStreamer <dtype, RouterType> ::receiveAtDestination(MeshStreamerMessageV* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_MeshStreamer <dtype, RouterType> ::idx_receiveAtDestination_MeshStreamerMessageV(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
template <class dtype, class RouterType> 
int CkIndex_MeshStreamer <dtype, RouterType> ::reg_receiveAtDestination_MeshStreamerMessageV() {
  int epidx = CkRegisterEp("receiveAtDestination(MeshStreamerMessageV* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_receiveAtDestination_MeshStreamerMessageV), CMessage_MeshStreamerMessageV::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)MeshStreamerMessageV::ckDebugPup);
  return epidx;
}

template <class dtype, class RouterType> 
void CkIndex_MeshStreamer <dtype, RouterType> ::_call_receiveAtDestination_MeshStreamerMessageV(void* impl_msg, void* impl_obj_void)
{
  MeshStreamer <dtype, RouterType> * impl_obj = static_cast<MeshStreamer <dtype, RouterType> *>(impl_obj_void);
  impl_obj->receiveAtDestination((MeshStreamerMessageV*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: MeshStreamer(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
template <class dtype, class RouterType> 
int CkIndex_MeshStreamer <dtype, RouterType> ::reg_MeshStreamer_CkMigrateMessage() {
  int epidx = CkRegisterEp("MeshStreamer(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_MeshStreamer_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

template <class dtype, class RouterType> 
void CkIndex_MeshStreamer <dtype, RouterType> ::_call_MeshStreamer_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  new (impl_obj_void) MeshStreamer <dtype, RouterType> ((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void receiveAlongRoute(MeshStreamerMessageV* impl_msg);
 */
template <class dtype, class RouterType> 
void CProxySection_MeshStreamer <dtype, RouterType> ::receiveAlongRoute(MeshStreamerMessageV* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_MeshStreamer <dtype, RouterType> ::idx_receiveAlongRoute_MeshStreamerMessageV(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_MeshStreamer <dtype, RouterType> ::idx_receiveAlongRoute_MeshStreamerMessageV(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void enablePeriodicFlushing();
 */
template <class dtype, class RouterType> 
void CProxySection_MeshStreamer <dtype, RouterType> ::enablePeriodicFlushing(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_MeshStreamer <dtype, RouterType> ::idx_enablePeriodicFlushing_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_MeshStreamer <dtype, RouterType> ::idx_enablePeriodicFlushing_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void finish();
 */
template <class dtype, class RouterType> 
void CProxySection_MeshStreamer <dtype, RouterType> ::finish(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_MeshStreamer <dtype, RouterType> ::idx_finish_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_MeshStreamer <dtype, RouterType> ::idx_finish_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void init(int numLocalContributors, const CkCallback &startCb, const CkCallback &endCb, int prio, const bool &usePeriodicFlushing);
 */
template <class dtype, class RouterType> 
void CProxySection_MeshStreamer <dtype, RouterType> ::init(int numLocalContributors, const CkCallback &startCb, const CkCallback &endCb, int prio, const bool &usePeriodicFlushing, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int numLocalContributors, const CkCallback &startCb, const CkCallback &endCb, int prio, const bool &usePeriodicFlushing
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|numLocalContributors;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)startCb;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)endCb;
    implP|prio;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)usePeriodicFlushing;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|numLocalContributors;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)startCb;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)endCb;
    implP|prio;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)usePeriodicFlushing;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_MeshStreamer <dtype, RouterType> ::idx_init_marshall4(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_MeshStreamer <dtype, RouterType> ::idx_init_marshall4(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void init(int numContributors, const CkCallback &startCb, const CkCallback &endCb, const CProxy_CompletionDetector &detector, int prio, const bool &usePeriodicFlushing);
 */
template <class dtype, class RouterType> 
void CProxySection_MeshStreamer <dtype, RouterType> ::init(int numContributors, const CkCallback &startCb, const CkCallback &endCb, const CProxy_CompletionDetector &detector, int prio, const bool &usePeriodicFlushing, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int numContributors, const CkCallback &startCb, const CkCallback &endCb, const CProxy_CompletionDetector &detector, int prio, const bool &usePeriodicFlushing
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|numContributors;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)startCb;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)endCb;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_CompletionDetector>::type>::type &)detector;
    implP|prio;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)usePeriodicFlushing;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|numContributors;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)startCb;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)endCb;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_CompletionDetector>::type>::type &)detector;
    implP|prio;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)usePeriodicFlushing;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_MeshStreamer <dtype, RouterType> ::idx_init_marshall5(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_MeshStreamer <dtype, RouterType> ::idx_init_marshall5(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void init(const CkArrayID &senderArrayID, const CkCallback &startCb, const CkCallback &endCb, int prio, const bool &usePeriodicFlushing);
 */
template <class dtype, class RouterType> 
void CProxySection_MeshStreamer <dtype, RouterType> ::init(const CkArrayID &senderArrayID, const CkCallback &startCb, const CkCallback &endCb, int prio, const bool &usePeriodicFlushing, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkArrayID &senderArrayID, const CkCallback &startCb, const CkCallback &endCb, int prio, const bool &usePeriodicFlushing
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayID>::type>::type &)senderArrayID;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)startCb;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)endCb;
    implP|prio;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)usePeriodicFlushing;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayID>::type>::type &)senderArrayID;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)startCb;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)endCb;
    implP|prio;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)usePeriodicFlushing;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_MeshStreamer <dtype, RouterType> ::idx_init_marshall6(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_MeshStreamer <dtype, RouterType> ::idx_init_marshall6(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void init(const CkCallback &endCb, int prio);
 */
template <class dtype, class RouterType> 
void CProxySection_MeshStreamer <dtype, RouterType> ::init(const CkCallback &endCb, int prio, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkCallback &endCb, int prio
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)endCb;
    implP|prio;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)endCb;
    implP|prio;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_MeshStreamer <dtype, RouterType> ::idx_init_marshall7(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_MeshStreamer <dtype, RouterType> ::idx_init_marshall7(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void syncInit();
 */
template <class dtype, class RouterType> 
void CProxySection_MeshStreamer <dtype, RouterType> ::syncInit(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_MeshStreamer <dtype, RouterType> ::idx_syncInit_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_MeshStreamer <dtype, RouterType> ::idx_syncInit_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void receiveAtDestination(MeshStreamerMessageV* impl_msg);
 */
template <class dtype, class RouterType> 
void CProxySection_MeshStreamer <dtype, RouterType> ::receiveAtDestination(MeshStreamerMessageV* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_MeshStreamer <dtype, RouterType> ::idx_receiveAtDestination_MeshStreamerMessageV(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_MeshStreamer <dtype, RouterType> ::idx_receiveAtDestination_MeshStreamerMessageV(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: MeshStreamer(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifdef CK_TEMPLATES_ONLY
template <class dtype, class RouterType> void CkIndex_MeshStreamer <dtype, RouterType> ::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,MeshStreamer <dtype, RouterType> ::isIrreducible());
  // REG: void receiveAlongRoute(MeshStreamerMessageV* impl_msg);
  idx_receiveAlongRoute_MeshStreamerMessageV();

  // REG: void enablePeriodicFlushing();
  idx_enablePeriodicFlushing_void();

  // REG: void finish();
  idx_finish_void();

  // REG: void init(int numLocalContributors, const CkCallback &startCb, const CkCallback &endCb, int prio, const bool &usePeriodicFlushing);
  idx_init_marshall4();

  // REG: void init(int numContributors, const CkCallback &startCb, const CkCallback &endCb, const CProxy_CompletionDetector &detector, int prio, const bool &usePeriodicFlushing);
  idx_init_marshall5();

  // REG: void init(const CkArrayID &senderArrayID, const CkCallback &startCb, const CkCallback &endCb, int prio, const bool &usePeriodicFlushing);
  idx_init_marshall6();

  // REG: void init(const CkCallback &endCb, int prio);
  idx_init_marshall7();

  // REG: void syncInit();
  idx_syncInit_void();
  idx_redn_wrapper_syncInit_void();

  // REG: void receiveAtDestination(MeshStreamerMessageV* impl_msg);
  idx_receiveAtDestination_MeshStreamerMessageV();

  // REG: MeshStreamer(CkMigrateMessage* impl_msg);
  idx_MeshStreamer_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_MeshStreamer_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */
#ifdef CK_TEMPLATES_ONLY
template <class dtype, class RouterType> 
struct CBase_MeshStreamer : public Group, virtual CBase
 {
  CProxy_MeshStreamer <dtype, RouterType>  thisProxy;
  CBase_MeshStreamer() : thisProxy(this)
    , Group()
  { }
  CBase_MeshStreamer(CkMigrateMessage* m) : thisProxy(this)
    , Group(m)  { }
  template <typename... Args>
  CBase_MeshStreamer(Args... args) : thisProxy(this)
    , Group(args...)  { }
  void pup(PUP::er &p) { }
  void _sdag_pup(PUP::er &p) { }
  void virtual_pup(PUP::er &p) {
    recursive_pup<MeshStreamer <dtype, RouterType> >(dynamic_cast<MeshStreamer <dtype, RouterType> *>(this), p);
}
  void parent_pup(PUP::er &p) {
    recursive_pup<Group>(this, p);
    p|thisProxy;
  }
};
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: template <class dtype, class ClientType, class RouterType, int(*EntryMethod)(char* impl_noname_0, void* impl_noname_1)=defaultMeshStreamerDeliver<dtype,ClientType>> group GroupMeshStreamer: MeshStreamer<dtype,RouterType>{
GroupMeshStreamer(int numDimensions, const int *dimensionSizes, const CkGroupID &clientGID, int bufferSize, const bool &yieldFlag, double progressPeriodInMs, int maxItemsBuffered, int _thresholdFractionNum, int _thresholdFractionDen, int _cutoffFractionNum, int _cutoffFractionDen);
GroupMeshStreamer(CkMigrateMessage* impl_msg);
};
 */
#ifdef CK_TEMPLATES_ONLY
template <class dtype, class ClientType, class RouterType, int(*EntryMethod)(char* impl_noname_0, void* impl_noname_1)>  int CkIndex_GroupMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifdef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifdef CK_TEMPLATES_ONLY
/* DEFS: GroupMeshStreamer(int numDimensions, const int *dimensionSizes, const CkGroupID &clientGID, int bufferSize, const bool &yieldFlag, double progressPeriodInMs, int maxItemsBuffered, int _thresholdFractionNum, int _thresholdFractionDen, int _cutoffFractionNum, int _cutoffFractionDen);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: GroupMeshStreamer(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: GroupMeshStreamer(int numDimensions, const int *dimensionSizes, const CkGroupID &clientGID, int bufferSize, const bool &yieldFlag, double progressPeriodInMs, int maxItemsBuffered, int _thresholdFractionNum, int _thresholdFractionDen, int _cutoffFractionNum, int _cutoffFractionDen);
 */
template <class dtype, class ClientType, class RouterType, int(*EntryMethod)(char* impl_noname_0, void* impl_noname_1)> 
CkGroupID CProxy_GroupMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ::ckNew(int numDimensions, const int *dimensionSizes, const CkGroupID &clientGID, int bufferSize, const bool &yieldFlag, double progressPeriodInMs, int maxItemsBuffered, int _thresholdFractionNum, int _thresholdFractionDen, int _cutoffFractionNum, int _cutoffFractionDen, const CkEntryOptions *impl_e_opts)
{
  //Marshall: int numDimensions, const int *dimensionSizes, const CkGroupID &clientGID, int bufferSize, const bool &yieldFlag, double progressPeriodInMs, int maxItemsBuffered, int _thresholdFractionNum, int _thresholdFractionDen, int _cutoffFractionNum, int _cutoffFractionDen
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_dimensionSizes, impl_cnt_dimensionSizes;
  impl_off_dimensionSizes=impl_off=CK_ALIGN(impl_off,sizeof(int));
  impl_off+=(impl_cnt_dimensionSizes=sizeof(int)*(numDimensions));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|numDimensions;
    implP|impl_off_dimensionSizes;
    implP|impl_cnt_dimensionSizes;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkGroupID>::type>::type &)clientGID;
    implP|bufferSize;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)yieldFlag;
    implP|progressPeriodInMs;
    implP|maxItemsBuffered;
    implP|_thresholdFractionNum;
    implP|_thresholdFractionDen;
    implP|_cutoffFractionNum;
    implP|_cutoffFractionDen;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|numDimensions;
    implP|impl_off_dimensionSizes;
    implP|impl_cnt_dimensionSizes;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkGroupID>::type>::type &)clientGID;
    implP|bufferSize;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)yieldFlag;
    implP|progressPeriodInMs;
    implP|maxItemsBuffered;
    implP|_thresholdFractionNum;
    implP|_thresholdFractionDen;
    implP|_cutoffFractionNum;
    implP|_cutoffFractionDen;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_dimensionSizes,dimensionSizes,impl_cnt_dimensionSizes);
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_GroupMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ::__idx, CkIndex_GroupMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ::idx_GroupMeshStreamer_marshall1(), impl_msg);
  return gId;
}
template <class dtype, class ClientType, class RouterType, int(*EntryMethod)(char* impl_noname_0, void* impl_noname_1)> 
  CProxy_GroupMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ::CProxy_GroupMeshStreamer(int numDimensions, const int *dimensionSizes, const CkGroupID &clientGID, int bufferSize, const bool &yieldFlag, double progressPeriodInMs, int maxItemsBuffered, int _thresholdFractionNum, int _thresholdFractionDen, int _cutoffFractionNum, int _cutoffFractionDen, const CkEntryOptions *impl_e_opts)
{
  //Marshall: int numDimensions, const int *dimensionSizes, const CkGroupID &clientGID, int bufferSize, const bool &yieldFlag, double progressPeriodInMs, int maxItemsBuffered, int _thresholdFractionNum, int _thresholdFractionDen, int _cutoffFractionNum, int _cutoffFractionDen
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_dimensionSizes, impl_cnt_dimensionSizes;
  impl_off_dimensionSizes=impl_off=CK_ALIGN(impl_off,sizeof(int));
  impl_off+=(impl_cnt_dimensionSizes=sizeof(int)*(numDimensions));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|numDimensions;
    implP|impl_off_dimensionSizes;
    implP|impl_cnt_dimensionSizes;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkGroupID>::type>::type &)clientGID;
    implP|bufferSize;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)yieldFlag;
    implP|progressPeriodInMs;
    implP|maxItemsBuffered;
    implP|_thresholdFractionNum;
    implP|_thresholdFractionDen;
    implP|_cutoffFractionNum;
    implP|_cutoffFractionDen;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|numDimensions;
    implP|impl_off_dimensionSizes;
    implP|impl_cnt_dimensionSizes;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkGroupID>::type>::type &)clientGID;
    implP|bufferSize;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)yieldFlag;
    implP|progressPeriodInMs;
    implP|maxItemsBuffered;
    implP|_thresholdFractionNum;
    implP|_thresholdFractionDen;
    implP|_cutoffFractionNum;
    implP|_cutoffFractionDen;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_dimensionSizes,dimensionSizes,impl_cnt_dimensionSizes);
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  ckSetGroupID(CkCreateGroup(CkIndex_GroupMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ::__idx, CkIndex_GroupMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ::idx_GroupMeshStreamer_marshall1(), impl_msg));
}

// Entry point registration function
template <class dtype, class ClientType, class RouterType, int(*EntryMethod)(char* impl_noname_0, void* impl_noname_1)> 
int CkIndex_GroupMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ::reg_GroupMeshStreamer_marshall1() {
  int epidx = CkRegisterEp("GroupMeshStreamer(int numDimensions, const int *dimensionSizes, const CkGroupID &clientGID, int bufferSize, const bool &yieldFlag, double progressPeriodInMs, int maxItemsBuffered, int _thresholdFractionNum, int _thresholdFractionDen, int _cutoffFractionNum, int _cutoffFractionDen)",
      reinterpret_cast<CkCallFnPtr>(_call_GroupMeshStreamer_marshall1), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_GroupMeshStreamer_marshall1);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_GroupMeshStreamer_marshall1);

  return epidx;
}

template <class dtype, class ClientType, class RouterType, int(*EntryMethod)(char* impl_noname_0, void* impl_noname_1)> 
void CkIndex_GroupMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ::_call_GroupMeshStreamer_marshall1(void* impl_msg, void* impl_obj_void)
{
  GroupMeshStreamer <dtype, ClientType, RouterType, EntryMethod> * impl_obj = static_cast<GroupMeshStreamer <dtype, ClientType, RouterType, EntryMethod> *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int numDimensions, const int *dimensionSizes, const CkGroupID &clientGID, int bufferSize, const bool &yieldFlag, double progressPeriodInMs, int maxItemsBuffered, int _thresholdFractionNum, int _thresholdFractionDen, int _cutoffFractionNum, int _cutoffFractionDen*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> numDimensions;
  implP|numDimensions;
  int impl_off_dimensionSizes, impl_cnt_dimensionSizes;
  implP|impl_off_dimensionSizes;
  implP|impl_cnt_dimensionSizes;
  PUP::detail::TemporaryObjectHolder<CkGroupID> clientGID;
  implP|clientGID;
  PUP::detail::TemporaryObjectHolder<int> bufferSize;
  implP|bufferSize;
  PUP::detail::TemporaryObjectHolder<bool> yieldFlag;
  implP|yieldFlag;
  PUP::detail::TemporaryObjectHolder<double> progressPeriodInMs;
  implP|progressPeriodInMs;
  PUP::detail::TemporaryObjectHolder<int> maxItemsBuffered;
  implP|maxItemsBuffered;
  PUP::detail::TemporaryObjectHolder<int> _thresholdFractionNum;
  implP|_thresholdFractionNum;
  PUP::detail::TemporaryObjectHolder<int> _thresholdFractionDen;
  implP|_thresholdFractionDen;
  PUP::detail::TemporaryObjectHolder<int> _cutoffFractionNum;
  implP|_cutoffFractionNum;
  PUP::detail::TemporaryObjectHolder<int> _cutoffFractionDen;
  implP|_cutoffFractionDen;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  int *dimensionSizes=(int *)(impl_buf+impl_off_dimensionSizes);
  new (impl_obj_void) GroupMeshStreamer <dtype, ClientType, RouterType, EntryMethod> (std::move(numDimensions.t), dimensionSizes, std::move(clientGID.t), std::move(bufferSize.t), std::move(yieldFlag.t), std::move(progressPeriodInMs.t), std::move(maxItemsBuffered.t), std::move(_thresholdFractionNum.t), std::move(_thresholdFractionDen.t), std::move(_cutoffFractionNum.t), std::move(_cutoffFractionDen.t));
}
template <class dtype, class ClientType, class RouterType, int(*EntryMethod)(char* impl_noname_0, void* impl_noname_1)> 
int CkIndex_GroupMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ::_callmarshall_GroupMeshStreamer_marshall1(char* impl_buf, void* impl_obj_void) {
  GroupMeshStreamer <dtype, ClientType, RouterType, EntryMethod> * impl_obj = static_cast<GroupMeshStreamer <dtype, ClientType, RouterType, EntryMethod> *>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int numDimensions, const int *dimensionSizes, const CkGroupID &clientGID, int bufferSize, const bool &yieldFlag, double progressPeriodInMs, int maxItemsBuffered, int _thresholdFractionNum, int _thresholdFractionDen, int _cutoffFractionNum, int _cutoffFractionDen*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> numDimensions;
  implP|numDimensions;
  int impl_off_dimensionSizes, impl_cnt_dimensionSizes;
  implP|impl_off_dimensionSizes;
  implP|impl_cnt_dimensionSizes;
  PUP::detail::TemporaryObjectHolder<CkGroupID> clientGID;
  implP|clientGID;
  PUP::detail::TemporaryObjectHolder<int> bufferSize;
  implP|bufferSize;
  PUP::detail::TemporaryObjectHolder<bool> yieldFlag;
  implP|yieldFlag;
  PUP::detail::TemporaryObjectHolder<double> progressPeriodInMs;
  implP|progressPeriodInMs;
  PUP::detail::TemporaryObjectHolder<int> maxItemsBuffered;
  implP|maxItemsBuffered;
  PUP::detail::TemporaryObjectHolder<int> _thresholdFractionNum;
  implP|_thresholdFractionNum;
  PUP::detail::TemporaryObjectHolder<int> _thresholdFractionDen;
  implP|_thresholdFractionDen;
  PUP::detail::TemporaryObjectHolder<int> _cutoffFractionNum;
  implP|_cutoffFractionNum;
  PUP::detail::TemporaryObjectHolder<int> _cutoffFractionDen;
  implP|_cutoffFractionDen;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  int *dimensionSizes=(int *)(impl_buf+impl_off_dimensionSizes);
  new (impl_obj_void) GroupMeshStreamer <dtype, ClientType, RouterType, EntryMethod> (std::move(numDimensions.t), dimensionSizes, std::move(clientGID.t), std::move(bufferSize.t), std::move(yieldFlag.t), std::move(progressPeriodInMs.t), std::move(maxItemsBuffered.t), std::move(_thresholdFractionNum.t), std::move(_thresholdFractionDen.t), std::move(_cutoffFractionNum.t), std::move(_cutoffFractionDen.t));
  return implP.size();
}
template <class dtype, class ClientType, class RouterType, int(*EntryMethod)(char* impl_noname_0, void* impl_noname_1)> 
void CkIndex_GroupMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ::_marshallmessagepup_GroupMeshStreamer_marshall1(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int numDimensions, const int *dimensionSizes, const CkGroupID &clientGID, int bufferSize, const bool &yieldFlag, double progressPeriodInMs, int maxItemsBuffered, int _thresholdFractionNum, int _thresholdFractionDen, int _cutoffFractionNum, int _cutoffFractionDen*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> numDimensions;
  implP|numDimensions;
  int impl_off_dimensionSizes, impl_cnt_dimensionSizes;
  implP|impl_off_dimensionSizes;
  implP|impl_cnt_dimensionSizes;
  PUP::detail::TemporaryObjectHolder<CkGroupID> clientGID;
  implP|clientGID;
  PUP::detail::TemporaryObjectHolder<int> bufferSize;
  implP|bufferSize;
  PUP::detail::TemporaryObjectHolder<bool> yieldFlag;
  implP|yieldFlag;
  PUP::detail::TemporaryObjectHolder<double> progressPeriodInMs;
  implP|progressPeriodInMs;
  PUP::detail::TemporaryObjectHolder<int> maxItemsBuffered;
  implP|maxItemsBuffered;
  PUP::detail::TemporaryObjectHolder<int> _thresholdFractionNum;
  implP|_thresholdFractionNum;
  PUP::detail::TemporaryObjectHolder<int> _thresholdFractionDen;
  implP|_thresholdFractionDen;
  PUP::detail::TemporaryObjectHolder<int> _cutoffFractionNum;
  implP|_cutoffFractionNum;
  PUP::detail::TemporaryObjectHolder<int> _cutoffFractionDen;
  implP|_cutoffFractionDen;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  int *dimensionSizes=(int *)(impl_buf+impl_off_dimensionSizes);
  if (implDestP.hasComments()) implDestP.comment("numDimensions");
  implDestP|numDimensions;
  if (implDestP.hasComments()) implDestP.comment("dimensionSizes");
  implDestP.synchronize(PUP::sync_begin_array);
  for (int impl_i=0;impl_i*(sizeof(*dimensionSizes))<impl_cnt_dimensionSizes;impl_i++) {
    implDestP.synchronize(PUP::sync_item);
    implDestP|dimensionSizes[impl_i];
  }
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("clientGID");
  implDestP|clientGID;
  if (implDestP.hasComments()) implDestP.comment("bufferSize");
  implDestP|bufferSize;
  if (implDestP.hasComments()) implDestP.comment("yieldFlag");
  implDestP|yieldFlag;
  if (implDestP.hasComments()) implDestP.comment("progressPeriodInMs");
  implDestP|progressPeriodInMs;
  if (implDestP.hasComments()) implDestP.comment("maxItemsBuffered");
  implDestP|maxItemsBuffered;
  if (implDestP.hasComments()) implDestP.comment("_thresholdFractionNum");
  implDestP|_thresholdFractionNum;
  if (implDestP.hasComments()) implDestP.comment("_thresholdFractionDen");
  implDestP|_thresholdFractionDen;
  if (implDestP.hasComments()) implDestP.comment("_cutoffFractionNum");
  implDestP|_cutoffFractionNum;
  if (implDestP.hasComments()) implDestP.comment("_cutoffFractionDen");
  implDestP|_cutoffFractionDen;
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: GroupMeshStreamer(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
template <class dtype, class ClientType, class RouterType, int(*EntryMethod)(char* impl_noname_0, void* impl_noname_1)> 
int CkIndex_GroupMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ::reg_GroupMeshStreamer_CkMigrateMessage() {
  int epidx = CkRegisterEp("GroupMeshStreamer(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_GroupMeshStreamer_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

template <class dtype, class ClientType, class RouterType, int(*EntryMethod)(char* impl_noname_0, void* impl_noname_1)> 
void CkIndex_GroupMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ::_call_GroupMeshStreamer_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  new (impl_obj_void) GroupMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: GroupMeshStreamer(int numDimensions, const int *dimensionSizes, const CkGroupID &clientGID, int bufferSize, const bool &yieldFlag, double progressPeriodInMs, int maxItemsBuffered, int _thresholdFractionNum, int _thresholdFractionDen, int _cutoffFractionNum, int _cutoffFractionDen);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: GroupMeshStreamer(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifdef CK_TEMPLATES_ONLY
template <class dtype, class ClientType, class RouterType, int(*EntryMethod)(char* impl_noname_0, void* impl_noname_1)> void CkIndex_GroupMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_MeshStreamer<dtype,RouterType>::__idx);
   CkRegisterGroupIrr(__idx,GroupMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ::isIrreducible());
  // REG: GroupMeshStreamer(int numDimensions, const int *dimensionSizes, const CkGroupID &clientGID, int bufferSize, const bool &yieldFlag, double progressPeriodInMs, int maxItemsBuffered, int _thresholdFractionNum, int _thresholdFractionDen, int _cutoffFractionNum, int _cutoffFractionDen);
  idx_GroupMeshStreamer_marshall1();

  // REG: GroupMeshStreamer(CkMigrateMessage* impl_msg);
  idx_GroupMeshStreamer_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_GroupMeshStreamer_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */
#ifdef CK_TEMPLATES_ONLY
template <class dtype, class ClientType, class RouterType, int(*EntryMethod)(char* impl_noname_0, void* impl_noname_1)> 
struct CBase_GroupMeshStreamer : public MeshStreamer<dtype,RouterType>, virtual CBase
 {
  CProxy_GroupMeshStreamer <dtype, ClientType, RouterType, EntryMethod>  thisProxy;
  CBase_GroupMeshStreamer() : thisProxy(this)
    , MeshStreamer<dtype,RouterType>()
  { }
  CBase_GroupMeshStreamer(CkMigrateMessage* m) : thisProxy(this)
    , MeshStreamer<dtype,RouterType>(m)  { }
  template <typename... Args>
  CBase_GroupMeshStreamer(Args... args) : thisProxy(this)
    , MeshStreamer<dtype,RouterType>(args...)  { }
  void pup(PUP::er &p) { }
  void _sdag_pup(PUP::er &p) { }
  void virtual_pup(PUP::er &p) {
    recursive_pup<GroupMeshStreamer <dtype, ClientType, RouterType, EntryMethod> >(dynamic_cast<GroupMeshStreamer <dtype, ClientType, RouterType, EntryMethod> *>(this), p);
}
  void parent_pup(PUP::er &p) {
    recursive_pup<MeshStreamer<dtype,RouterType>>(this, p);
    p|thisProxy;
  }
};
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: template <class dtype, class ClientType, class RouterType, int(*EntryMethod)(char* impl_noname_2, void* impl_noname_3)=defaultMeshStreamerDeliver<dtype,ClientType>> group ArrayMeshStreamer: MeshStreamer<dtype,RouterType>{
ArrayMeshStreamer(int numDimensions, const int *dimensionSizes, const CkArrayID &clientAID, int bufferSize, const bool &yieldFlag, double progressPeriodInMs, int maxItemsBuffered, int _thresholdFractionNum, int _thresholdFractionDen, int _cutoffFractionNum, int _cutoffFractionDen);
void processLocationRequest(const CkArrayIndex &arrayId, int deliveredToPe, int sourcePe);
void resendMisdeliveredItems(const CkArrayIndex &arrayId, int destinationPe);
void updateLocationAtSource(const CkArrayIndex &arrayId, int destinationPe);
ArrayMeshStreamer(CkMigrateMessage* impl_msg);
};
 */
#ifdef CK_TEMPLATES_ONLY
template <class dtype, class ClientType, class RouterType, int(*EntryMethod)(char* impl_noname_2, void* impl_noname_3)>  int CkIndex_ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifdef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifdef CK_TEMPLATES_ONLY
/* DEFS: ArrayMeshStreamer(int numDimensions, const int *dimensionSizes, const CkArrayID &clientAID, int bufferSize, const bool &yieldFlag, double progressPeriodInMs, int maxItemsBuffered, int _thresholdFractionNum, int _thresholdFractionDen, int _cutoffFractionNum, int _cutoffFractionDen);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void processLocationRequest(const CkArrayIndex &arrayId, int deliveredToPe, int sourcePe);
 */
template <class dtype, class ClientType, class RouterType, int(*EntryMethod)(char* impl_noname_2, void* impl_noname_3)> 
void CProxyElement_ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ::processLocationRequest(const CkArrayIndex &arrayId, int deliveredToPe, int sourcePe, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkArrayIndex &arrayId, int deliveredToPe, int sourcePe
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)arrayId;
    implP|deliveredToPe;
    implP|sourcePe;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)arrayId;
    implP|deliveredToPe;
    implP|sourcePe;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ::idx_processLocationRequest_marshall2(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ::idx_processLocationRequest_marshall2(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ::idx_processLocationRequest_marshall2(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void resendMisdeliveredItems(const CkArrayIndex &arrayId, int destinationPe);
 */
template <class dtype, class ClientType, class RouterType, int(*EntryMethod)(char* impl_noname_2, void* impl_noname_3)> 
void CProxyElement_ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ::resendMisdeliveredItems(const CkArrayIndex &arrayId, int destinationPe, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkArrayIndex &arrayId, int destinationPe
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)arrayId;
    implP|destinationPe;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)arrayId;
    implP|destinationPe;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ::idx_resendMisdeliveredItems_marshall3(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ::idx_resendMisdeliveredItems_marshall3(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ::idx_resendMisdeliveredItems_marshall3(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void updateLocationAtSource(const CkArrayIndex &arrayId, int destinationPe);
 */
template <class dtype, class ClientType, class RouterType, int(*EntryMethod)(char* impl_noname_2, void* impl_noname_3)> 
void CProxyElement_ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ::updateLocationAtSource(const CkArrayIndex &arrayId, int destinationPe, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkArrayIndex &arrayId, int destinationPe
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)arrayId;
    implP|destinationPe;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)arrayId;
    implP|destinationPe;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ::idx_updateLocationAtSource_marshall4(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ::idx_updateLocationAtSource_marshall4(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ::idx_updateLocationAtSource_marshall4(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: ArrayMeshStreamer(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: ArrayMeshStreamer(int numDimensions, const int *dimensionSizes, const CkArrayID &clientAID, int bufferSize, const bool &yieldFlag, double progressPeriodInMs, int maxItemsBuffered, int _thresholdFractionNum, int _thresholdFractionDen, int _cutoffFractionNum, int _cutoffFractionDen);
 */
template <class dtype, class ClientType, class RouterType, int(*EntryMethod)(char* impl_noname_2, void* impl_noname_3)> 
CkGroupID CProxy_ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ::ckNew(int numDimensions, const int *dimensionSizes, const CkArrayID &clientAID, int bufferSize, const bool &yieldFlag, double progressPeriodInMs, int maxItemsBuffered, int _thresholdFractionNum, int _thresholdFractionDen, int _cutoffFractionNum, int _cutoffFractionDen, const CkEntryOptions *impl_e_opts)
{
  //Marshall: int numDimensions, const int *dimensionSizes, const CkArrayID &clientAID, int bufferSize, const bool &yieldFlag, double progressPeriodInMs, int maxItemsBuffered, int _thresholdFractionNum, int _thresholdFractionDen, int _cutoffFractionNum, int _cutoffFractionDen
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_dimensionSizes, impl_cnt_dimensionSizes;
  impl_off_dimensionSizes=impl_off=CK_ALIGN(impl_off,sizeof(int));
  impl_off+=(impl_cnt_dimensionSizes=sizeof(int)*(numDimensions));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|numDimensions;
    implP|impl_off_dimensionSizes;
    implP|impl_cnt_dimensionSizes;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayID>::type>::type &)clientAID;
    implP|bufferSize;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)yieldFlag;
    implP|progressPeriodInMs;
    implP|maxItemsBuffered;
    implP|_thresholdFractionNum;
    implP|_thresholdFractionDen;
    implP|_cutoffFractionNum;
    implP|_cutoffFractionDen;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|numDimensions;
    implP|impl_off_dimensionSizes;
    implP|impl_cnt_dimensionSizes;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayID>::type>::type &)clientAID;
    implP|bufferSize;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)yieldFlag;
    implP|progressPeriodInMs;
    implP|maxItemsBuffered;
    implP|_thresholdFractionNum;
    implP|_thresholdFractionDen;
    implP|_cutoffFractionNum;
    implP|_cutoffFractionDen;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_dimensionSizes,dimensionSizes,impl_cnt_dimensionSizes);
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ::__idx, CkIndex_ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ::idx_ArrayMeshStreamer_marshall1(), impl_msg);
  return gId;
}
template <class dtype, class ClientType, class RouterType, int(*EntryMethod)(char* impl_noname_2, void* impl_noname_3)> 
  CProxy_ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ::CProxy_ArrayMeshStreamer(int numDimensions, const int *dimensionSizes, const CkArrayID &clientAID, int bufferSize, const bool &yieldFlag, double progressPeriodInMs, int maxItemsBuffered, int _thresholdFractionNum, int _thresholdFractionDen, int _cutoffFractionNum, int _cutoffFractionDen, const CkEntryOptions *impl_e_opts)
{
  //Marshall: int numDimensions, const int *dimensionSizes, const CkArrayID &clientAID, int bufferSize, const bool &yieldFlag, double progressPeriodInMs, int maxItemsBuffered, int _thresholdFractionNum, int _thresholdFractionDen, int _cutoffFractionNum, int _cutoffFractionDen
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_dimensionSizes, impl_cnt_dimensionSizes;
  impl_off_dimensionSizes=impl_off=CK_ALIGN(impl_off,sizeof(int));
  impl_off+=(impl_cnt_dimensionSizes=sizeof(int)*(numDimensions));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|numDimensions;
    implP|impl_off_dimensionSizes;
    implP|impl_cnt_dimensionSizes;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayID>::type>::type &)clientAID;
    implP|bufferSize;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)yieldFlag;
    implP|progressPeriodInMs;
    implP|maxItemsBuffered;
    implP|_thresholdFractionNum;
    implP|_thresholdFractionDen;
    implP|_cutoffFractionNum;
    implP|_cutoffFractionDen;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|numDimensions;
    implP|impl_off_dimensionSizes;
    implP|impl_cnt_dimensionSizes;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayID>::type>::type &)clientAID;
    implP|bufferSize;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)yieldFlag;
    implP|progressPeriodInMs;
    implP|maxItemsBuffered;
    implP|_thresholdFractionNum;
    implP|_thresholdFractionDen;
    implP|_cutoffFractionNum;
    implP|_cutoffFractionDen;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_dimensionSizes,dimensionSizes,impl_cnt_dimensionSizes);
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  ckSetGroupID(CkCreateGroup(CkIndex_ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ::__idx, CkIndex_ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ::idx_ArrayMeshStreamer_marshall1(), impl_msg));
}

// Entry point registration function
template <class dtype, class ClientType, class RouterType, int(*EntryMethod)(char* impl_noname_2, void* impl_noname_3)> 
int CkIndex_ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ::reg_ArrayMeshStreamer_marshall1() {
  int epidx = CkRegisterEp("ArrayMeshStreamer(int numDimensions, const int *dimensionSizes, const CkArrayID &clientAID, int bufferSize, const bool &yieldFlag, double progressPeriodInMs, int maxItemsBuffered, int _thresholdFractionNum, int _thresholdFractionDen, int _cutoffFractionNum, int _cutoffFractionDen)",
      reinterpret_cast<CkCallFnPtr>(_call_ArrayMeshStreamer_marshall1), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_ArrayMeshStreamer_marshall1);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_ArrayMeshStreamer_marshall1);

  return epidx;
}

template <class dtype, class ClientType, class RouterType, int(*EntryMethod)(char* impl_noname_2, void* impl_noname_3)> 
void CkIndex_ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ::_call_ArrayMeshStreamer_marshall1(void* impl_msg, void* impl_obj_void)
{
  ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> * impl_obj = static_cast<ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int numDimensions, const int *dimensionSizes, const CkArrayID &clientAID, int bufferSize, const bool &yieldFlag, double progressPeriodInMs, int maxItemsBuffered, int _thresholdFractionNum, int _thresholdFractionDen, int _cutoffFractionNum, int _cutoffFractionDen*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> numDimensions;
  implP|numDimensions;
  int impl_off_dimensionSizes, impl_cnt_dimensionSizes;
  implP|impl_off_dimensionSizes;
  implP|impl_cnt_dimensionSizes;
  PUP::detail::TemporaryObjectHolder<CkArrayID> clientAID;
  implP|clientAID;
  PUP::detail::TemporaryObjectHolder<int> bufferSize;
  implP|bufferSize;
  PUP::detail::TemporaryObjectHolder<bool> yieldFlag;
  implP|yieldFlag;
  PUP::detail::TemporaryObjectHolder<double> progressPeriodInMs;
  implP|progressPeriodInMs;
  PUP::detail::TemporaryObjectHolder<int> maxItemsBuffered;
  implP|maxItemsBuffered;
  PUP::detail::TemporaryObjectHolder<int> _thresholdFractionNum;
  implP|_thresholdFractionNum;
  PUP::detail::TemporaryObjectHolder<int> _thresholdFractionDen;
  implP|_thresholdFractionDen;
  PUP::detail::TemporaryObjectHolder<int> _cutoffFractionNum;
  implP|_cutoffFractionNum;
  PUP::detail::TemporaryObjectHolder<int> _cutoffFractionDen;
  implP|_cutoffFractionDen;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  int *dimensionSizes=(int *)(impl_buf+impl_off_dimensionSizes);
  new (impl_obj_void) ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> (std::move(numDimensions.t), dimensionSizes, std::move(clientAID.t), std::move(bufferSize.t), std::move(yieldFlag.t), std::move(progressPeriodInMs.t), std::move(maxItemsBuffered.t), std::move(_thresholdFractionNum.t), std::move(_thresholdFractionDen.t), std::move(_cutoffFractionNum.t), std::move(_cutoffFractionDen.t));
}
template <class dtype, class ClientType, class RouterType, int(*EntryMethod)(char* impl_noname_2, void* impl_noname_3)> 
int CkIndex_ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ::_callmarshall_ArrayMeshStreamer_marshall1(char* impl_buf, void* impl_obj_void) {
  ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> * impl_obj = static_cast<ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> *>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int numDimensions, const int *dimensionSizes, const CkArrayID &clientAID, int bufferSize, const bool &yieldFlag, double progressPeriodInMs, int maxItemsBuffered, int _thresholdFractionNum, int _thresholdFractionDen, int _cutoffFractionNum, int _cutoffFractionDen*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> numDimensions;
  implP|numDimensions;
  int impl_off_dimensionSizes, impl_cnt_dimensionSizes;
  implP|impl_off_dimensionSizes;
  implP|impl_cnt_dimensionSizes;
  PUP::detail::TemporaryObjectHolder<CkArrayID> clientAID;
  implP|clientAID;
  PUP::detail::TemporaryObjectHolder<int> bufferSize;
  implP|bufferSize;
  PUP::detail::TemporaryObjectHolder<bool> yieldFlag;
  implP|yieldFlag;
  PUP::detail::TemporaryObjectHolder<double> progressPeriodInMs;
  implP|progressPeriodInMs;
  PUP::detail::TemporaryObjectHolder<int> maxItemsBuffered;
  implP|maxItemsBuffered;
  PUP::detail::TemporaryObjectHolder<int> _thresholdFractionNum;
  implP|_thresholdFractionNum;
  PUP::detail::TemporaryObjectHolder<int> _thresholdFractionDen;
  implP|_thresholdFractionDen;
  PUP::detail::TemporaryObjectHolder<int> _cutoffFractionNum;
  implP|_cutoffFractionNum;
  PUP::detail::TemporaryObjectHolder<int> _cutoffFractionDen;
  implP|_cutoffFractionDen;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  int *dimensionSizes=(int *)(impl_buf+impl_off_dimensionSizes);
  new (impl_obj_void) ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> (std::move(numDimensions.t), dimensionSizes, std::move(clientAID.t), std::move(bufferSize.t), std::move(yieldFlag.t), std::move(progressPeriodInMs.t), std::move(maxItemsBuffered.t), std::move(_thresholdFractionNum.t), std::move(_thresholdFractionDen.t), std::move(_cutoffFractionNum.t), std::move(_cutoffFractionDen.t));
  return implP.size();
}
template <class dtype, class ClientType, class RouterType, int(*EntryMethod)(char* impl_noname_2, void* impl_noname_3)> 
void CkIndex_ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ::_marshallmessagepup_ArrayMeshStreamer_marshall1(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int numDimensions, const int *dimensionSizes, const CkArrayID &clientAID, int bufferSize, const bool &yieldFlag, double progressPeriodInMs, int maxItemsBuffered, int _thresholdFractionNum, int _thresholdFractionDen, int _cutoffFractionNum, int _cutoffFractionDen*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> numDimensions;
  implP|numDimensions;
  int impl_off_dimensionSizes, impl_cnt_dimensionSizes;
  implP|impl_off_dimensionSizes;
  implP|impl_cnt_dimensionSizes;
  PUP::detail::TemporaryObjectHolder<CkArrayID> clientAID;
  implP|clientAID;
  PUP::detail::TemporaryObjectHolder<int> bufferSize;
  implP|bufferSize;
  PUP::detail::TemporaryObjectHolder<bool> yieldFlag;
  implP|yieldFlag;
  PUP::detail::TemporaryObjectHolder<double> progressPeriodInMs;
  implP|progressPeriodInMs;
  PUP::detail::TemporaryObjectHolder<int> maxItemsBuffered;
  implP|maxItemsBuffered;
  PUP::detail::TemporaryObjectHolder<int> _thresholdFractionNum;
  implP|_thresholdFractionNum;
  PUP::detail::TemporaryObjectHolder<int> _thresholdFractionDen;
  implP|_thresholdFractionDen;
  PUP::detail::TemporaryObjectHolder<int> _cutoffFractionNum;
  implP|_cutoffFractionNum;
  PUP::detail::TemporaryObjectHolder<int> _cutoffFractionDen;
  implP|_cutoffFractionDen;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  int *dimensionSizes=(int *)(impl_buf+impl_off_dimensionSizes);
  if (implDestP.hasComments()) implDestP.comment("numDimensions");
  implDestP|numDimensions;
  if (implDestP.hasComments()) implDestP.comment("dimensionSizes");
  implDestP.synchronize(PUP::sync_begin_array);
  for (int impl_i=0;impl_i*(sizeof(*dimensionSizes))<impl_cnt_dimensionSizes;impl_i++) {
    implDestP.synchronize(PUP::sync_item);
    implDestP|dimensionSizes[impl_i];
  }
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("clientAID");
  implDestP|clientAID;
  if (implDestP.hasComments()) implDestP.comment("bufferSize");
  implDestP|bufferSize;
  if (implDestP.hasComments()) implDestP.comment("yieldFlag");
  implDestP|yieldFlag;
  if (implDestP.hasComments()) implDestP.comment("progressPeriodInMs");
  implDestP|progressPeriodInMs;
  if (implDestP.hasComments()) implDestP.comment("maxItemsBuffered");
  implDestP|maxItemsBuffered;
  if (implDestP.hasComments()) implDestP.comment("_thresholdFractionNum");
  implDestP|_thresholdFractionNum;
  if (implDestP.hasComments()) implDestP.comment("_thresholdFractionDen");
  implDestP|_thresholdFractionDen;
  if (implDestP.hasComments()) implDestP.comment("_cutoffFractionNum");
  implDestP|_cutoffFractionNum;
  if (implDestP.hasComments()) implDestP.comment("_cutoffFractionDen");
  implDestP|_cutoffFractionDen;
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void processLocationRequest(const CkArrayIndex &arrayId, int deliveredToPe, int sourcePe);
 */
template <class dtype, class ClientType, class RouterType, int(*EntryMethod)(char* impl_noname_2, void* impl_noname_3)> 
void CProxy_ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ::processLocationRequest(const CkArrayIndex &arrayId, int deliveredToPe, int sourcePe, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkArrayIndex &arrayId, int deliveredToPe, int sourcePe
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)arrayId;
    implP|deliveredToPe;
    implP|sourcePe;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)arrayId;
    implP|deliveredToPe;
    implP|sourcePe;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ::idx_processLocationRequest_marshall2(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ::idx_processLocationRequest_marshall2(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ::idx_processLocationRequest_marshall2(), impl_msg, ckGetGroupID(),0);
}
template <class dtype, class ClientType, class RouterType, int(*EntryMethod)(char* impl_noname_2, void* impl_noname_3)> 
void CProxy_ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ::processLocationRequest(const CkArrayIndex &arrayId, int deliveredToPe, int sourcePe, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: const CkArrayIndex &arrayId, int deliveredToPe, int sourcePe
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)arrayId;
    implP|deliveredToPe;
    implP|sourcePe;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)arrayId;
    implP|deliveredToPe;
    implP|sourcePe;
  }
  CkSendMsgBranchMulti(CkIndex_ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ::idx_processLocationRequest_marshall2(), impl_msg, ckGetGroupID(), npes, pes,0);
}
template <class dtype, class ClientType, class RouterType, int(*EntryMethod)(char* impl_noname_2, void* impl_noname_3)> 
void CProxy_ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ::processLocationRequest(const CkArrayIndex &arrayId, int deliveredToPe, int sourcePe, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: const CkArrayIndex &arrayId, int deliveredToPe, int sourcePe
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)arrayId;
    implP|deliveredToPe;
    implP|sourcePe;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)arrayId;
    implP|deliveredToPe;
    implP|sourcePe;
  }
  CkSendMsgBranchGroup(CkIndex_ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ::idx_processLocationRequest_marshall2(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
template <class dtype, class ClientType, class RouterType, int(*EntryMethod)(char* impl_noname_2, void* impl_noname_3)> 
int CkIndex_ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ::reg_processLocationRequest_marshall2() {
  int epidx = CkRegisterEp("processLocationRequest(const CkArrayIndex &arrayId, int deliveredToPe, int sourcePe)",
      reinterpret_cast<CkCallFnPtr>(_call_processLocationRequest_marshall2), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_processLocationRequest_marshall2);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_processLocationRequest_marshall2);

  return epidx;
}

template <class dtype, class ClientType, class RouterType, int(*EntryMethod)(char* impl_noname_2, void* impl_noname_3)> 
void CkIndex_ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ::_call_processLocationRequest_marshall2(void* impl_msg, void* impl_obj_void)
{
  ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> * impl_obj = static_cast<ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CkArrayIndex &arrayId, int deliveredToPe, int sourcePe*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkArrayIndex> arrayId;
  implP|arrayId;
  PUP::detail::TemporaryObjectHolder<int> deliveredToPe;
  implP|deliveredToPe;
  PUP::detail::TemporaryObjectHolder<int> sourcePe;
  implP|sourcePe;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->processLocationRequest(std::move(arrayId.t), std::move(deliveredToPe.t), std::move(sourcePe.t));
}
template <class dtype, class ClientType, class RouterType, int(*EntryMethod)(char* impl_noname_2, void* impl_noname_3)> 
int CkIndex_ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ::_callmarshall_processLocationRequest_marshall2(char* impl_buf, void* impl_obj_void) {
  ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> * impl_obj = static_cast<ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> *>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const CkArrayIndex &arrayId, int deliveredToPe, int sourcePe*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkArrayIndex> arrayId;
  implP|arrayId;
  PUP::detail::TemporaryObjectHolder<int> deliveredToPe;
  implP|deliveredToPe;
  PUP::detail::TemporaryObjectHolder<int> sourcePe;
  implP|sourcePe;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->processLocationRequest(std::move(arrayId.t), std::move(deliveredToPe.t), std::move(sourcePe.t));
  return implP.size();
}
template <class dtype, class ClientType, class RouterType, int(*EntryMethod)(char* impl_noname_2, void* impl_noname_3)> 
void CkIndex_ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ::_marshallmessagepup_processLocationRequest_marshall2(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CkArrayIndex &arrayId, int deliveredToPe, int sourcePe*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkArrayIndex> arrayId;
  implP|arrayId;
  PUP::detail::TemporaryObjectHolder<int> deliveredToPe;
  implP|deliveredToPe;
  PUP::detail::TemporaryObjectHolder<int> sourcePe;
  implP|sourcePe;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("arrayId");
  implDestP|arrayId;
  if (implDestP.hasComments()) implDestP.comment("deliveredToPe");
  implDestP|deliveredToPe;
  if (implDestP.hasComments()) implDestP.comment("sourcePe");
  implDestP|sourcePe;
}
template <class dtype, class ClientType, class RouterType, int(*EntryMethod)(char* impl_noname_2, void* impl_noname_3)> PUPable_def_template_nonInst(SINGLE_ARG(Closure_ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ::processLocationRequest_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void resendMisdeliveredItems(const CkArrayIndex &arrayId, int destinationPe);
 */
template <class dtype, class ClientType, class RouterType, int(*EntryMethod)(char* impl_noname_2, void* impl_noname_3)> 
void CProxy_ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ::resendMisdeliveredItems(const CkArrayIndex &arrayId, int destinationPe, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkArrayIndex &arrayId, int destinationPe
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)arrayId;
    implP|destinationPe;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)arrayId;
    implP|destinationPe;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ::idx_resendMisdeliveredItems_marshall3(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ::idx_resendMisdeliveredItems_marshall3(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ::idx_resendMisdeliveredItems_marshall3(), impl_msg, ckGetGroupID(),0);
}
template <class dtype, class ClientType, class RouterType, int(*EntryMethod)(char* impl_noname_2, void* impl_noname_3)> 
void CProxy_ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ::resendMisdeliveredItems(const CkArrayIndex &arrayId, int destinationPe, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: const CkArrayIndex &arrayId, int destinationPe
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)arrayId;
    implP|destinationPe;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)arrayId;
    implP|destinationPe;
  }
  CkSendMsgBranchMulti(CkIndex_ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ::idx_resendMisdeliveredItems_marshall3(), impl_msg, ckGetGroupID(), npes, pes,0);
}
template <class dtype, class ClientType, class RouterType, int(*EntryMethod)(char* impl_noname_2, void* impl_noname_3)> 
void CProxy_ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ::resendMisdeliveredItems(const CkArrayIndex &arrayId, int destinationPe, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: const CkArrayIndex &arrayId, int destinationPe
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)arrayId;
    implP|destinationPe;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)arrayId;
    implP|destinationPe;
  }
  CkSendMsgBranchGroup(CkIndex_ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ::idx_resendMisdeliveredItems_marshall3(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
template <class dtype, class ClientType, class RouterType, int(*EntryMethod)(char* impl_noname_2, void* impl_noname_3)> 
int CkIndex_ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ::reg_resendMisdeliveredItems_marshall3() {
  int epidx = CkRegisterEp("resendMisdeliveredItems(const CkArrayIndex &arrayId, int destinationPe)",
      reinterpret_cast<CkCallFnPtr>(_call_resendMisdeliveredItems_marshall3), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_resendMisdeliveredItems_marshall3);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_resendMisdeliveredItems_marshall3);

  return epidx;
}

template <class dtype, class ClientType, class RouterType, int(*EntryMethod)(char* impl_noname_2, void* impl_noname_3)> 
void CkIndex_ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ::_call_resendMisdeliveredItems_marshall3(void* impl_msg, void* impl_obj_void)
{
  ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> * impl_obj = static_cast<ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CkArrayIndex &arrayId, int destinationPe*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkArrayIndex> arrayId;
  implP|arrayId;
  PUP::detail::TemporaryObjectHolder<int> destinationPe;
  implP|destinationPe;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->resendMisdeliveredItems(std::move(arrayId.t), std::move(destinationPe.t));
}
template <class dtype, class ClientType, class RouterType, int(*EntryMethod)(char* impl_noname_2, void* impl_noname_3)> 
int CkIndex_ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ::_callmarshall_resendMisdeliveredItems_marshall3(char* impl_buf, void* impl_obj_void) {
  ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> * impl_obj = static_cast<ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> *>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const CkArrayIndex &arrayId, int destinationPe*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkArrayIndex> arrayId;
  implP|arrayId;
  PUP::detail::TemporaryObjectHolder<int> destinationPe;
  implP|destinationPe;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->resendMisdeliveredItems(std::move(arrayId.t), std::move(destinationPe.t));
  return implP.size();
}
template <class dtype, class ClientType, class RouterType, int(*EntryMethod)(char* impl_noname_2, void* impl_noname_3)> 
void CkIndex_ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ::_marshallmessagepup_resendMisdeliveredItems_marshall3(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CkArrayIndex &arrayId, int destinationPe*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkArrayIndex> arrayId;
  implP|arrayId;
  PUP::detail::TemporaryObjectHolder<int> destinationPe;
  implP|destinationPe;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("arrayId");
  implDestP|arrayId;
  if (implDestP.hasComments()) implDestP.comment("destinationPe");
  implDestP|destinationPe;
}
template <class dtype, class ClientType, class RouterType, int(*EntryMethod)(char* impl_noname_2, void* impl_noname_3)> PUPable_def_template_nonInst(SINGLE_ARG(Closure_ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ::resendMisdeliveredItems_3_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void updateLocationAtSource(const CkArrayIndex &arrayId, int destinationPe);
 */
template <class dtype, class ClientType, class RouterType, int(*EntryMethod)(char* impl_noname_2, void* impl_noname_3)> 
void CProxy_ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ::updateLocationAtSource(const CkArrayIndex &arrayId, int destinationPe, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkArrayIndex &arrayId, int destinationPe
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)arrayId;
    implP|destinationPe;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)arrayId;
    implP|destinationPe;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ::idx_updateLocationAtSource_marshall4(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ::idx_updateLocationAtSource_marshall4(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ::idx_updateLocationAtSource_marshall4(), impl_msg, ckGetGroupID(),0);
}
template <class dtype, class ClientType, class RouterType, int(*EntryMethod)(char* impl_noname_2, void* impl_noname_3)> 
void CProxy_ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ::updateLocationAtSource(const CkArrayIndex &arrayId, int destinationPe, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: const CkArrayIndex &arrayId, int destinationPe
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)arrayId;
    implP|destinationPe;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)arrayId;
    implP|destinationPe;
  }
  CkSendMsgBranchMulti(CkIndex_ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ::idx_updateLocationAtSource_marshall4(), impl_msg, ckGetGroupID(), npes, pes,0);
}
template <class dtype, class ClientType, class RouterType, int(*EntryMethod)(char* impl_noname_2, void* impl_noname_3)> 
void CProxy_ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ::updateLocationAtSource(const CkArrayIndex &arrayId, int destinationPe, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: const CkArrayIndex &arrayId, int destinationPe
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)arrayId;
    implP|destinationPe;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)arrayId;
    implP|destinationPe;
  }
  CkSendMsgBranchGroup(CkIndex_ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ::idx_updateLocationAtSource_marshall4(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
template <class dtype, class ClientType, class RouterType, int(*EntryMethod)(char* impl_noname_2, void* impl_noname_3)> 
int CkIndex_ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ::reg_updateLocationAtSource_marshall4() {
  int epidx = CkRegisterEp("updateLocationAtSource(const CkArrayIndex &arrayId, int destinationPe)",
      reinterpret_cast<CkCallFnPtr>(_call_updateLocationAtSource_marshall4), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_updateLocationAtSource_marshall4);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_updateLocationAtSource_marshall4);

  return epidx;
}

template <class dtype, class ClientType, class RouterType, int(*EntryMethod)(char* impl_noname_2, void* impl_noname_3)> 
void CkIndex_ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ::_call_updateLocationAtSource_marshall4(void* impl_msg, void* impl_obj_void)
{
  ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> * impl_obj = static_cast<ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CkArrayIndex &arrayId, int destinationPe*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkArrayIndex> arrayId;
  implP|arrayId;
  PUP::detail::TemporaryObjectHolder<int> destinationPe;
  implP|destinationPe;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->updateLocationAtSource(std::move(arrayId.t), std::move(destinationPe.t));
}
template <class dtype, class ClientType, class RouterType, int(*EntryMethod)(char* impl_noname_2, void* impl_noname_3)> 
int CkIndex_ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ::_callmarshall_updateLocationAtSource_marshall4(char* impl_buf, void* impl_obj_void) {
  ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> * impl_obj = static_cast<ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> *>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const CkArrayIndex &arrayId, int destinationPe*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkArrayIndex> arrayId;
  implP|arrayId;
  PUP::detail::TemporaryObjectHolder<int> destinationPe;
  implP|destinationPe;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->updateLocationAtSource(std::move(arrayId.t), std::move(destinationPe.t));
  return implP.size();
}
template <class dtype, class ClientType, class RouterType, int(*EntryMethod)(char* impl_noname_2, void* impl_noname_3)> 
void CkIndex_ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ::_marshallmessagepup_updateLocationAtSource_marshall4(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CkArrayIndex &arrayId, int destinationPe*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkArrayIndex> arrayId;
  implP|arrayId;
  PUP::detail::TemporaryObjectHolder<int> destinationPe;
  implP|destinationPe;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("arrayId");
  implDestP|arrayId;
  if (implDestP.hasComments()) implDestP.comment("destinationPe");
  implDestP|destinationPe;
}
template <class dtype, class ClientType, class RouterType, int(*EntryMethod)(char* impl_noname_2, void* impl_noname_3)> PUPable_def_template_nonInst(SINGLE_ARG(Closure_ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ::updateLocationAtSource_4_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: ArrayMeshStreamer(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
template <class dtype, class ClientType, class RouterType, int(*EntryMethod)(char* impl_noname_2, void* impl_noname_3)> 
int CkIndex_ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ::reg_ArrayMeshStreamer_CkMigrateMessage() {
  int epidx = CkRegisterEp("ArrayMeshStreamer(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_ArrayMeshStreamer_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

template <class dtype, class ClientType, class RouterType, int(*EntryMethod)(char* impl_noname_2, void* impl_noname_3)> 
void CkIndex_ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ::_call_ArrayMeshStreamer_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  new (impl_obj_void) ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: ArrayMeshStreamer(int numDimensions, const int *dimensionSizes, const CkArrayID &clientAID, int bufferSize, const bool &yieldFlag, double progressPeriodInMs, int maxItemsBuffered, int _thresholdFractionNum, int _thresholdFractionDen, int _cutoffFractionNum, int _cutoffFractionDen);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void processLocationRequest(const CkArrayIndex &arrayId, int deliveredToPe, int sourcePe);
 */
template <class dtype, class ClientType, class RouterType, int(*EntryMethod)(char* impl_noname_2, void* impl_noname_3)> 
void CProxySection_ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ::processLocationRequest(const CkArrayIndex &arrayId, int deliveredToPe, int sourcePe, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkArrayIndex &arrayId, int deliveredToPe, int sourcePe
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)arrayId;
    implP|deliveredToPe;
    implP|sourcePe;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)arrayId;
    implP|deliveredToPe;
    implP|sourcePe;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ::idx_processLocationRequest_marshall2(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ::idx_processLocationRequest_marshall2(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void resendMisdeliveredItems(const CkArrayIndex &arrayId, int destinationPe);
 */
template <class dtype, class ClientType, class RouterType, int(*EntryMethod)(char* impl_noname_2, void* impl_noname_3)> 
void CProxySection_ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ::resendMisdeliveredItems(const CkArrayIndex &arrayId, int destinationPe, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkArrayIndex &arrayId, int destinationPe
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)arrayId;
    implP|destinationPe;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)arrayId;
    implP|destinationPe;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ::idx_resendMisdeliveredItems_marshall3(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ::idx_resendMisdeliveredItems_marshall3(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void updateLocationAtSource(const CkArrayIndex &arrayId, int destinationPe);
 */
template <class dtype, class ClientType, class RouterType, int(*EntryMethod)(char* impl_noname_2, void* impl_noname_3)> 
void CProxySection_ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ::updateLocationAtSource(const CkArrayIndex &arrayId, int destinationPe, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkArrayIndex &arrayId, int destinationPe
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)arrayId;
    implP|destinationPe;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)arrayId;
    implP|destinationPe;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ::idx_updateLocationAtSource_marshall4(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ::idx_updateLocationAtSource_marshall4(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: ArrayMeshStreamer(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifdef CK_TEMPLATES_ONLY
template <class dtype, class ClientType, class RouterType, int(*EntryMethod)(char* impl_noname_2, void* impl_noname_3)> void CkIndex_ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_MeshStreamer<dtype,RouterType>::__idx);
   CkRegisterGroupIrr(__idx,ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ::isIrreducible());
  // REG: ArrayMeshStreamer(int numDimensions, const int *dimensionSizes, const CkArrayID &clientAID, int bufferSize, const bool &yieldFlag, double progressPeriodInMs, int maxItemsBuffered, int _thresholdFractionNum, int _thresholdFractionDen, int _cutoffFractionNum, int _cutoffFractionDen);
  idx_ArrayMeshStreamer_marshall1();

  // REG: void processLocationRequest(const CkArrayIndex &arrayId, int deliveredToPe, int sourcePe);
  idx_processLocationRequest_marshall2();

  // REG: void resendMisdeliveredItems(const CkArrayIndex &arrayId, int destinationPe);
  idx_resendMisdeliveredItems_marshall3();

  // REG: void updateLocationAtSource(const CkArrayIndex &arrayId, int destinationPe);
  idx_updateLocationAtSource_marshall4();

  // REG: ArrayMeshStreamer(CkMigrateMessage* impl_msg);
  idx_ArrayMeshStreamer_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_ArrayMeshStreamer_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */
#ifdef CK_TEMPLATES_ONLY
template <class dtype, class ClientType, class RouterType, int(*EntryMethod)(char* impl_noname_2, void* impl_noname_3)> 
struct CBase_ArrayMeshStreamer : public MeshStreamer<dtype,RouterType>, virtual CBase
 {
  CProxy_ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod>  thisProxy;
  CBase_ArrayMeshStreamer() : thisProxy(this)
    , MeshStreamer<dtype,RouterType>()
  { }
  CBase_ArrayMeshStreamer(CkMigrateMessage* m) : thisProxy(this)
    , MeshStreamer<dtype,RouterType>(m)  { }
  template <typename... Args>
  CBase_ArrayMeshStreamer(Args... args) : thisProxy(this)
    , MeshStreamer<dtype,RouterType>(args...)  { }
  void pup(PUP::er &p) { }
  void _sdag_pup(PUP::er &p) { }
  void virtual_pup(PUP::er &p) {
    recursive_pup<ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> >(dynamic_cast<ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> *>(this), p);
}
  void parent_pup(PUP::er &p) {
    recursive_pup<MeshStreamer<dtype,RouterType>>(this, p);
    p|thisProxy;
  }
};
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerNDMeshStreamer(void)
{
  static int _done = 0; if(_done) return; _done = 1;
  _registercompletion();


/* REG: message MeshStreamerMessageV{
int destinationPes[];
int sourcePes[];
std::uint16_t offsets[];
CkArrayIndex destObjects[];
char dataItems[];
}
;
*/
CMessage_MeshStreamerMessageV::__register("MeshStreamerMessageV", sizeof(MeshStreamerMessageV),(CkPackFnPtr) MeshStreamerMessageV::pack,(CkUnpackFnPtr) MeshStreamerMessageV::unpack);




}
#endif /* CK_TEMPLATES_ONLY */
