



/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ParFUMShadowArray::lockRegionForRemote_3_closure : public SDAG::Closure {
            RegionID regionID;
            int *sharedIdxls;
            int numSharedIdxls;
            adaptAdj *elements;
            int numElements;

      CkMarshallMsg* _impl_marshall;
      char* _impl_buf_in;
      int _impl_buf_size;

      lockRegionForRemote_3_closure() {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      lockRegionForRemote_3_closure(CkMigrateMessage*) {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
            RegionID & getP0() { return regionID;}
            int *& getP1() { return sharedIdxls;}
            int & getP2() { return numSharedIdxls;}
            adaptAdj *& getP3() { return elements;}
            int & getP4() { return numElements;}
      void pup(PUP::er& __p) {
        __p | regionID;
        __p | numSharedIdxls;
        __p | numElements;
        packClosure(__p);
        __p | _impl_buf_size;
        bool hasMsg = (_impl_marshall != 0); __p | hasMsg;
        if (hasMsg) CkPupMessage(__p, (void**)&_impl_marshall);
        else PUParray(__p, _impl_buf_in, _impl_buf_size);
        if (__p.isUnpacking()) {
          char *impl_buf = _impl_marshall ? _impl_marshall->msgBuf : _impl_buf_in;
          PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<RegionID> regionID;
  implP|regionID;
  int impl_off_sharedIdxls, impl_cnt_sharedIdxls;
  implP|impl_off_sharedIdxls;
  implP|impl_cnt_sharedIdxls;
  PUP::detail::TemporaryObjectHolder<int> numSharedIdxls;
  implP|numSharedIdxls;
  int impl_off_elements, impl_cnt_elements;
  implP|impl_off_elements;
  implP|impl_cnt_elements;
  PUP::detail::TemporaryObjectHolder<int> numElements;
  implP|numElements;
          impl_buf+=CK_ALIGN(implP.size(),16);
          sharedIdxls = (int *)(impl_buf+impl_off_sharedIdxls);
          elements = (adaptAdj *)(impl_buf+impl_off_elements);
        }
      }
      virtual ~lockRegionForRemote_3_closure() {
        if (_impl_marshall) CmiFree(UsrToEnv(_impl_marshall));
      }
      PUPable_decl(SINGLE_ARG(lockRegionForRemote_3_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ParFUMShadowArray::lockReply_4_closure : public SDAG::Closure {
            int remoteChunk;
            RegionID regionID;
            bool success;
            int tag;
            int otherSuccess;


      lockReply_4_closure() {
        init();
      }
      lockReply_4_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return remoteChunk;}
            RegionID & getP1() { return regionID;}
            bool & getP2() { return success;}
            int & getP3() { return tag;}
            int & getP4() { return otherSuccess;}
      void pup(PUP::er& __p) {
        __p | remoteChunk;
        __p | regionID;
        __p | success;
        __p | tag;
        __p | otherSuccess;
        packClosure(__p);
      }
      virtual ~lockReply_4_closure() {
      }
      PUPable_decl(SINGLE_ARG(lockReply_4_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ParFUMShadowArray::unlockForRemote_5_closure : public SDAG::Closure {
            RegionID regionID;


      unlockForRemote_5_closure() {
        init();
      }
      unlockForRemote_5_closure(CkMigrateMessage*) {
        init();
      }
            RegionID & getP0() { return regionID;}
      void pup(PUP::er& __p) {
        __p | regionID;
        packClosure(__p);
      }
      virtual ~unlockForRemote_5_closure() {
      }
      PUPable_decl(SINGLE_ARG(unlockForRemote_5_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ParFUMShadowArray::unpendForRemote_6_closure : public SDAG::Closure {
            RegionID regionID;


      unpendForRemote_6_closure() {
        init();
      }
      unpendForRemote_6_closure(CkMigrateMessage*) {
        init();
      }
            RegionID & getP0() { return regionID;}
      void pup(PUP::er& __p) {
        __p | regionID;
        packClosure(__p);
      }
      virtual ~unpendForRemote_6_closure() {
      }
      PUPable_decl(SINGLE_ARG(unpendForRemote_6_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ParFUMShadowArray::unlockReply_7_closure : public SDAG::Closure {
            int remoteChunk;
            RegionID regionID;


      unlockReply_7_closure() {
        init();
      }
      unlockReply_7_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return remoteChunk;}
            RegionID & getP1() { return regionID;}
      void pup(PUP::er& __p) {
        __p | remoteChunk;
        __p | regionID;
        packClosure(__p);
      }
      virtual ~unlockReply_7_closure() {
      }
      PUPable_decl(SINGLE_ARG(unlockReply_7_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ParFUMShadowArray::remote_bulk_edge_bisect_2D_8_closure : public SDAG::Closure {
            adaptAdj nbrElem;
            adaptAdj splitElem;
            int new_idxl;
            int n1_idxl;
            int n2_idxl;
            int partitionID;


      remote_bulk_edge_bisect_2D_8_closure() {
        init();
      }
      remote_bulk_edge_bisect_2D_8_closure(CkMigrateMessage*) {
        init();
      }
            adaptAdj & getP0() { return nbrElem;}
            adaptAdj & getP1() { return splitElem;}
            int & getP2() { return new_idxl;}
            int & getP3() { return n1_idxl;}
            int & getP4() { return n2_idxl;}
            int & getP5() { return partitionID;}
      void pup(PUP::er& __p) {
        __p | nbrElem;
        __p | splitElem;
        __p | new_idxl;
        __p | n1_idxl;
        __p | n2_idxl;
        __p | partitionID;
        packClosure(__p);
      }
      virtual ~remote_bulk_edge_bisect_2D_8_closure() {
      }
      PUPable_decl(SINGLE_ARG(remote_bulk_edge_bisect_2D_8_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ParFUMShadowArray::remote_adaptAdj_replace_9_closure : public SDAG::Closure {
            adaptAdj elem;
            adaptAdj oldElem;
            adaptAdj newElem;


      remote_adaptAdj_replace_9_closure() {
        init();
      }
      remote_adaptAdj_replace_9_closure(CkMigrateMessage*) {
        init();
      }
            adaptAdj & getP0() { return elem;}
            adaptAdj & getP1() { return oldElem;}
            adaptAdj & getP2() { return newElem;}
      void pup(PUP::er& __p) {
        __p | elem;
        __p | oldElem;
        __p | newElem;
        packClosure(__p);
      }
      virtual ~remote_adaptAdj_replace_9_closure() {
      }
      PUPable_decl(SINGLE_ARG(remote_adaptAdj_replace_9_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ParFUMShadowArray::remote_edgeAdj_replace_10_closure : public SDAG::Closure {
            int remotePartID;
            adaptAdj adj;
            adaptAdj elem;
            adaptAdj splitElem;
            int n1_idxl;
            int n2_idxl;


      remote_edgeAdj_replace_10_closure() {
        init();
      }
      remote_edgeAdj_replace_10_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return remotePartID;}
            adaptAdj & getP1() { return adj;}
            adaptAdj & getP2() { return elem;}
            adaptAdj & getP3() { return splitElem;}
            int & getP4() { return n1_idxl;}
            int & getP5() { return n2_idxl;}
      void pup(PUP::er& __p) {
        __p | remotePartID;
        __p | adj;
        __p | elem;
        __p | splitElem;
        __p | n1_idxl;
        __p | n2_idxl;
        packClosure(__p);
      }
      virtual ~remote_edgeAdj_replace_10_closure() {
      }
      PUPable_decl(SINGLE_ARG(remote_edgeAdj_replace_10_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ParFUMShadowArray::remote_edgeAdj_add_11_closure : public SDAG::Closure {
            int remotePartID;
            adaptAdj elem;
            adaptAdj splitElem;
            int n1_idxl;
            int n2_idxl;


      remote_edgeAdj_add_11_closure() {
        init();
      }
      remote_edgeAdj_add_11_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return remotePartID;}
            adaptAdj & getP1() { return elem;}
            adaptAdj & getP2() { return splitElem;}
            int & getP3() { return n1_idxl;}
            int & getP4() { return n2_idxl;}
      void pup(PUP::er& __p) {
        __p | remotePartID;
        __p | elem;
        __p | splitElem;
        __p | n1_idxl;
        __p | n2_idxl;
        packClosure(__p);
      }
      virtual ~remote_edgeAdj_add_11_closure() {
      }
      PUPable_decl(SINGLE_ARG(remote_edgeAdj_add_11_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ParFUMShadowArray::recv_split_3D_12_closure : public SDAG::Closure {
            int pos;
            int tableID;
            adaptAdj elem;
            adaptAdj splitElem;


      recv_split_3D_12_closure() {
        init();
      }
      recv_split_3D_12_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return pos;}
            int & getP1() { return tableID;}
            adaptAdj & getP2() { return elem;}
            adaptAdj & getP3() { return splitElem;}
      void pup(PUP::er& __p) {
        __p | pos;
        __p | tableID;
        __p | elem;
        __p | splitElem;
        packClosure(__p);
      }
      virtual ~recv_split_3D_12_closure() {
      }
      PUPable_decl(SINGLE_ARG(recv_split_3D_12_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ParFUMShadowArray::handle_split_3D_13_closure : public SDAG::Closure {
            int remotePartID;
            int pos;
            int tableID;
            adaptAdj elem;
            RegionID lockRegionID;
            int n1_idxl;
            int n2_idxl;
            int n5_idxl;


      handle_split_3D_13_closure() {
        init();
      }
      handle_split_3D_13_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return remotePartID;}
            int & getP1() { return pos;}
            int & getP2() { return tableID;}
            adaptAdj & getP3() { return elem;}
            RegionID & getP4() { return lockRegionID;}
            int & getP5() { return n1_idxl;}
            int & getP6() { return n2_idxl;}
            int & getP7() { return n5_idxl;}
      void pup(PUP::er& __p) {
        __p | remotePartID;
        __p | pos;
        __p | tableID;
        __p | elem;
        __p | lockRegionID;
        __p | n1_idxl;
        __p | n2_idxl;
        __p | n5_idxl;
        packClosure(__p);
      }
      virtual ~handle_split_3D_13_closure() {
      }
      PUPable_decl(SINGLE_ARG(handle_split_3D_13_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ParFUMShadowArray::recv_splits_14_closure : public SDAG::Closure {
            int tableID;
            int expectedSplits;


      recv_splits_14_closure() {
        init();
      }
      recv_splits_14_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return tableID;}
            int & getP1() { return expectedSplits;}
      void pup(PUP::er& __p) {
        __p | tableID;
        __p | expectedSplits;
        packClosure(__p);
      }
      virtual ~recv_splits_14_closure() {
      }
      PUPable_decl(SINGLE_ARG(recv_splits_14_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ParFUMShadowArray::isLongest_15_closure : public SDAG::Closure {
            int elem;
            int elemType;
            double len;


      isLongest_15_closure() {
        init();
      }
      isLongest_15_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return elem;}
            int & getP1() { return elemType;}
            double & getP2() { return len;}
      void pup(PUP::er& __p) {
        __p | elem;
        __p | elemType;
        __p | len;
        packClosure(__p);
      }
      virtual ~isLongest_15_closure() {
      }
      PUPable_decl(SINGLE_ARG(isLongest_15_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_ParFUMShadowArray::update_asterisk_3D_16_closure : public SDAG::Closure {
            int remotePartID;
            int i;
            adaptAdj elem;
            int numElemPairs;
            adaptAdj *elemPairs;
            RegionID lockRegionID;
            int n1_idxl;
            int n2_idxl;
            int n5_idxl;

      CkMarshallMsg* _impl_marshall;
      char* _impl_buf_in;
      int _impl_buf_size;

      update_asterisk_3D_16_closure() {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      update_asterisk_3D_16_closure(CkMigrateMessage*) {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
            int & getP0() { return remotePartID;}
            int & getP1() { return i;}
            adaptAdj & getP2() { return elem;}
            int & getP3() { return numElemPairs;}
            adaptAdj *& getP4() { return elemPairs;}
            RegionID & getP5() { return lockRegionID;}
            int & getP6() { return n1_idxl;}
            int & getP7() { return n2_idxl;}
            int & getP8() { return n5_idxl;}
      void pup(PUP::er& __p) {
        __p | remotePartID;
        __p | i;
        __p | elem;
        __p | numElemPairs;
        __p | lockRegionID;
        __p | n1_idxl;
        __p | n2_idxl;
        __p | n5_idxl;
        packClosure(__p);
        __p | _impl_buf_size;
        bool hasMsg = (_impl_marshall != 0); __p | hasMsg;
        if (hasMsg) CkPupMessage(__p, (void**)&_impl_marshall);
        else PUParray(__p, _impl_buf_in, _impl_buf_size);
        if (__p.isUnpacking()) {
          char *impl_buf = _impl_marshall ? _impl_marshall->msgBuf : _impl_buf_in;
          PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> remotePartID;
  implP|remotePartID;
  PUP::detail::TemporaryObjectHolder<int> i;
  implP|i;
  PUP::detail::TemporaryObjectHolder<adaptAdj> elem;
  implP|elem;
  PUP::detail::TemporaryObjectHolder<int> numElemPairs;
  implP|numElemPairs;
  int impl_off_elemPairs, impl_cnt_elemPairs;
  implP|impl_off_elemPairs;
  implP|impl_cnt_elemPairs;
  PUP::detail::TemporaryObjectHolder<RegionID> lockRegionID;
  implP|lockRegionID;
  PUP::detail::TemporaryObjectHolder<int> n1_idxl;
  implP|n1_idxl;
  PUP::detail::TemporaryObjectHolder<int> n2_idxl;
  implP|n2_idxl;
  PUP::detail::TemporaryObjectHolder<int> n5_idxl;
  implP|n5_idxl;
          impl_buf+=CK_ALIGN(implP.size(),16);
          elemPairs = (adaptAdj *)(impl_buf+impl_off_elemPairs);
        }
      }
      virtual ~update_asterisk_3D_16_closure() {
        if (_impl_marshall) CmiFree(UsrToEnv(_impl_marshall));
      }
      PUPable_decl(SINGLE_ARG(update_asterisk_3D_16_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: readonly CProxy_ParFUMShadowArray meshSA;
 */
extern CProxy_ParFUMShadowArray meshSA;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_meshSA(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|meshSA;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message lockChunksMsg{
int chkList[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_lockChunksMsg::operator new(size_t s){
  return lockChunksMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_lockChunksMsg::operator new(size_t s, int* sz){
  return lockChunksMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_lockChunksMsg::operator new(size_t s, int* sz,const int pb){
  return lockChunksMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_lockChunksMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return lockChunksMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_lockChunksMsg::operator new(size_t s, int sz0) {
  int sizes[1];
  sizes[0] = sz0;
  return lockChunksMsg::alloc(__idx, s, sizes, 0, GroupDepNum{});
}
void *CMessage_lockChunksMsg::operator new(size_t s, int sz0, const int p) {
  int sizes[1];
  sizes[0] = sz0;
  return lockChunksMsg::alloc(__idx, s, sizes, p, GroupDepNum{});
}
void *CMessage_lockChunksMsg::operator new(size_t s, int sz0, const int p, const GroupDepNum groupDepNum) {
  int sizes[1];
  sizes[0] = sz0;
  return lockChunksMsg::alloc(__idx, s, sizes, p, groupDepNum);
}
void* CMessage_lockChunksMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN_DEFAULT(sizeof(int)*sizes[0]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[1], pb, groupDepNum);
}
CMessage_lockChunksMsg::CMessage_lockChunksMsg() {
lockChunksMsg *newmsg = (lockChunksMsg *)this;
  newmsg->chkList = (int *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
}
void CMessage_lockChunksMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_lockChunksMsg::pack(lockChunksMsg *msg) {
  msg->chkList = (int *) ((char *)msg->chkList - (char *)msg);
  return (void *) msg;
}
lockChunksMsg* CMessage_lockChunksMsg::unpack(void* buf) {
  lockChunksMsg *msg = (lockChunksMsg *) buf;
  msg->chkList = (int *) ((size_t)msg->chkList + (char *)msg);
  return msg;
}
int CMessage_lockChunksMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message adaptAdjMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_adaptAdjMsg::operator new(size_t s){
  return adaptAdjMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_adaptAdjMsg::operator new(size_t s, int* sz){
  return adaptAdjMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_adaptAdjMsg::operator new(size_t s, int* sz,const int pb){
  return adaptAdjMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_adaptAdjMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return adaptAdjMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_adaptAdjMsg::operator new(size_t s, const int p) {
  return adaptAdjMsg::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_adaptAdjMsg::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return adaptAdjMsg::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_adaptAdjMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_adaptAdjMsg::CMessage_adaptAdjMsg() {
adaptAdjMsg *newmsg = (adaptAdjMsg *)this;
}
void CMessage_adaptAdjMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_adaptAdjMsg::pack(adaptAdjMsg *msg) {
  return (void *) msg;
}
adaptAdjMsg* CMessage_adaptAdjMsg::unpack(void* buf) {
  adaptAdjMsg *msg = (adaptAdjMsg *) buf;
  return msg;
}
int CMessage_adaptAdjMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message longestMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_longestMsg::operator new(size_t s){
  return longestMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_longestMsg::operator new(size_t s, int* sz){
  return longestMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_longestMsg::operator new(size_t s, int* sz,const int pb){
  return longestMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_longestMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return longestMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_longestMsg::operator new(size_t s, const int p) {
  return longestMsg::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_longestMsg::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return longestMsg::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_longestMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_longestMsg::CMessage_longestMsg() {
longestMsg *newmsg = (longestMsg *)this;
}
void CMessage_longestMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_longestMsg::pack(longestMsg *msg) {
  return (void *) msg;
}
longestMsg* CMessage_longestMsg::unpack(void* buf) {
  longestMsg *msg = (longestMsg *) buf;
  return msg;
}
int CMessage_longestMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: array ParFUMShadowArray: ArrayElement{
ParFUMShadowArray(int s, int i);
void setFemMesh(FEMMeshMsg* impl_msg);
void lockRegionForRemote(const RegionID &regionID, const int *sharedIdxls, int numSharedIdxls, const adaptAdj *elements, int numElements);
void lockReply(int remoteChunk, const RegionID &regionID, const bool &success, int tag, int otherSuccess);
void unlockForRemote(const RegionID &regionID);
void unpendForRemote(const RegionID &regionID);
void unlockReply(int remoteChunk, const RegionID &regionID);
sync adaptAdjMsg* remote_bulk_edge_bisect_2D(const adaptAdj &nbrElem, const adaptAdj &splitElem, int new_idxl, int n1_idxl, int n2_idxl, int partitionID);
sync void remote_adaptAdj_replace(const adaptAdj &elem, const adaptAdj &oldElem, const adaptAdj &newElem);
sync void remote_edgeAdj_replace(int remotePartID, const adaptAdj &adj, const adaptAdj &elem, const adaptAdj &splitElem, int n1_idxl, int n2_idxl);
sync void remote_edgeAdj_add(int remotePartID, const adaptAdj &elem, const adaptAdj &splitElem, int n1_idxl, int n2_idxl);
void recv_split_3D(int pos, int tableID, const adaptAdj &elem, const adaptAdj &splitElem);
void handle_split_3D(int remotePartID, int pos, int tableID, const adaptAdj &elem, const RegionID &lockRegionID, int n1_idxl, int n2_idxl, int n5_idxl);
threaded sync void recv_splits(int tableID, int expectedSplits);
sync longestMsg* isLongest(int elem, int elemType, double len);
void update_asterisk_3D(int remotePartID, int i, const adaptAdj &elem, int numElemPairs, const adaptAdj *elemPairs, const RegionID &lockRegionID, int n1_idxl, int n2_idxl, int n5_idxl);
ParFUMShadowArray(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_ParFUMShadowArray::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CProxySection_ParFUMShadowArray::contribute(CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(sid, userData, fragSize);
}

void CProxySection_ParFUMShadowArray::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, userData, fragSize);
}

template <typename T>
void CProxySection_ParFUMShadowArray::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, userData, fragSize);
}

void CProxySection_ParFUMShadowArray::contribute(CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(sid, cb, userData, fragSize);
}

void CProxySection_ParFUMShadowArray::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, cb, userData, fragSize);
}

template <typename T>
void CProxySection_ParFUMShadowArray::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, cb, userData, fragSize);
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: ParFUMShadowArray(int s, int i);
 */
void CProxyElement_ParFUMShadowArray::insert(int s, int i, int onPE, const CkEntryOptions *impl_e_opts)
{ 
   //Marshall: int s, int i
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|s;
    implP|i;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|s;
    implP|i;
  }
   UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
   ckInsert((CkArrayMessage *)impl_msg,CkIndex_ParFUMShadowArray::idx_ParFUMShadowArray_marshall1(),onPE);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setFemMesh(FEMMeshMsg* impl_msg);
 */
void CProxyElement_ParFUMShadowArray::setFemMesh(FEMMeshMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ParFUMShadowArray::idx_setFemMesh_FEMMeshMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void lockRegionForRemote(const RegionID &regionID, const int *sharedIdxls, int numSharedIdxls, const adaptAdj *elements, int numElements);
 */
void CProxyElement_ParFUMShadowArray::lockRegionForRemote(const RegionID &regionID, const int *sharedIdxls, int numSharedIdxls, const adaptAdj *elements, int numElements, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const RegionID &regionID, const int *sharedIdxls, int numSharedIdxls, const adaptAdj *elements, int numElements
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_sharedIdxls, impl_cnt_sharedIdxls;
  impl_off_sharedIdxls=impl_off=CK_ALIGN(impl_off,sizeof(int));
  impl_off+=(impl_cnt_sharedIdxls=sizeof(int)*(numSharedIdxls));
  int impl_off_elements, impl_cnt_elements;
  impl_off_elements=impl_off=CK_ALIGN(impl_off,sizeof(adaptAdj));
  impl_off+=(impl_cnt_elements=sizeof(adaptAdj)*(numElements));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<RegionID>::type>::type &)regionID;
    implP|impl_off_sharedIdxls;
    implP|impl_cnt_sharedIdxls;
    implP|numSharedIdxls;
    implP|impl_off_elements;
    implP|impl_cnt_elements;
    implP|numElements;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<RegionID>::type>::type &)regionID;
    implP|impl_off_sharedIdxls;
    implP|impl_cnt_sharedIdxls;
    implP|numSharedIdxls;
    implP|impl_off_elements;
    implP|impl_cnt_elements;
    implP|numElements;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_sharedIdxls,sharedIdxls,impl_cnt_sharedIdxls);
  memcpy(impl_buf+impl_off_elements,elements,impl_cnt_elements);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ParFUMShadowArray::idx_lockRegionForRemote_marshall3(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void lockReply(int remoteChunk, const RegionID &regionID, const bool &success, int tag, int otherSuccess);
 */
void CProxyElement_ParFUMShadowArray::lockReply(int remoteChunk, const RegionID &regionID, const bool &success, int tag, int otherSuccess, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int remoteChunk, const RegionID &regionID, const bool &success, int tag, int otherSuccess
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|remoteChunk;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<RegionID>::type>::type &)regionID;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)success;
    implP|tag;
    implP|otherSuccess;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|remoteChunk;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<RegionID>::type>::type &)regionID;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)success;
    implP|tag;
    implP|otherSuccess;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ParFUMShadowArray::idx_lockReply_marshall4(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void unlockForRemote(const RegionID &regionID);
 */
void CProxyElement_ParFUMShadowArray::unlockForRemote(const RegionID &regionID, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const RegionID &regionID
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<RegionID>::type>::type &)regionID;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<RegionID>::type>::type &)regionID;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ParFUMShadowArray::idx_unlockForRemote_marshall5(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void unpendForRemote(const RegionID &regionID);
 */
void CProxyElement_ParFUMShadowArray::unpendForRemote(const RegionID &regionID, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const RegionID &regionID
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<RegionID>::type>::type &)regionID;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<RegionID>::type>::type &)regionID;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ParFUMShadowArray::idx_unpendForRemote_marshall6(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void unlockReply(int remoteChunk, const RegionID &regionID);
 */
void CProxyElement_ParFUMShadowArray::unlockReply(int remoteChunk, const RegionID &regionID, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int remoteChunk, const RegionID &regionID
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|remoteChunk;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<RegionID>::type>::type &)regionID;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|remoteChunk;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<RegionID>::type>::type &)regionID;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ParFUMShadowArray::idx_unlockReply_marshall7(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync adaptAdjMsg* remote_bulk_edge_bisect_2D(const adaptAdj &nbrElem, const adaptAdj &splitElem, int new_idxl, int n1_idxl, int n2_idxl, int partitionID);
 */
adaptAdjMsg* CProxyElement_ParFUMShadowArray::remote_bulk_edge_bisect_2D(const adaptAdj &nbrElem, const adaptAdj &splitElem, int new_idxl, int n1_idxl, int n2_idxl, int partitionID, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const adaptAdj &nbrElem, const adaptAdj &splitElem, int new_idxl, int n1_idxl, int n2_idxl, int partitionID
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<adaptAdj>::type>::type &)nbrElem;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<adaptAdj>::type>::type &)splitElem;
    implP|new_idxl;
    implP|n1_idxl;
    implP|n2_idxl;
    implP|partitionID;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<adaptAdj>::type>::type &)nbrElem;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<adaptAdj>::type>::type &)splitElem;
    implP|new_idxl;
    implP|n1_idxl;
    implP|n2_idxl;
    implP|partitionID;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  adaptAdjMsg* impl_msg_typed_ret = (adaptAdjMsg*)ckSendSync(impl_amsg, CkIndex_ParFUMShadowArray::idx_remote_bulk_edge_bisect_2D_marshall8());
  return impl_msg_typed_ret;
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync void remote_adaptAdj_replace(const adaptAdj &elem, const adaptAdj &oldElem, const adaptAdj &newElem);
 */
void CProxyElement_ParFUMShadowArray::remote_adaptAdj_replace(const adaptAdj &elem, const adaptAdj &oldElem, const adaptAdj &newElem, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const adaptAdj &elem, const adaptAdj &oldElem, const adaptAdj &newElem
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<adaptAdj>::type>::type &)elem;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<adaptAdj>::type>::type &)oldElem;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<adaptAdj>::type>::type &)newElem;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<adaptAdj>::type>::type &)elem;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<adaptAdj>::type>::type &)oldElem;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<adaptAdj>::type>::type &)newElem;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  void *impl_msg_typed_ret = ckSendSync(impl_amsg, CkIndex_ParFUMShadowArray::idx_remote_adaptAdj_replace_marshall9());
  CkFreeSysMsg(impl_msg_typed_ret); 
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync void remote_edgeAdj_replace(int remotePartID, const adaptAdj &adj, const adaptAdj &elem, const adaptAdj &splitElem, int n1_idxl, int n2_idxl);
 */
void CProxyElement_ParFUMShadowArray::remote_edgeAdj_replace(int remotePartID, const adaptAdj &adj, const adaptAdj &elem, const adaptAdj &splitElem, int n1_idxl, int n2_idxl, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int remotePartID, const adaptAdj &adj, const adaptAdj &elem, const adaptAdj &splitElem, int n1_idxl, int n2_idxl
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|remotePartID;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<adaptAdj>::type>::type &)adj;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<adaptAdj>::type>::type &)elem;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<adaptAdj>::type>::type &)splitElem;
    implP|n1_idxl;
    implP|n2_idxl;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|remotePartID;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<adaptAdj>::type>::type &)adj;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<adaptAdj>::type>::type &)elem;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<adaptAdj>::type>::type &)splitElem;
    implP|n1_idxl;
    implP|n2_idxl;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  void *impl_msg_typed_ret = ckSendSync(impl_amsg, CkIndex_ParFUMShadowArray::idx_remote_edgeAdj_replace_marshall10());
  CkFreeSysMsg(impl_msg_typed_ret); 
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync void remote_edgeAdj_add(int remotePartID, const adaptAdj &elem, const adaptAdj &splitElem, int n1_idxl, int n2_idxl);
 */
void CProxyElement_ParFUMShadowArray::remote_edgeAdj_add(int remotePartID, const adaptAdj &elem, const adaptAdj &splitElem, int n1_idxl, int n2_idxl, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int remotePartID, const adaptAdj &elem, const adaptAdj &splitElem, int n1_idxl, int n2_idxl
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|remotePartID;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<adaptAdj>::type>::type &)elem;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<adaptAdj>::type>::type &)splitElem;
    implP|n1_idxl;
    implP|n2_idxl;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|remotePartID;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<adaptAdj>::type>::type &)elem;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<adaptAdj>::type>::type &)splitElem;
    implP|n1_idxl;
    implP|n2_idxl;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  void *impl_msg_typed_ret = ckSendSync(impl_amsg, CkIndex_ParFUMShadowArray::idx_remote_edgeAdj_add_marshall11());
  CkFreeSysMsg(impl_msg_typed_ret); 
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recv_split_3D(int pos, int tableID, const adaptAdj &elem, const adaptAdj &splitElem);
 */
void CProxyElement_ParFUMShadowArray::recv_split_3D(int pos, int tableID, const adaptAdj &elem, const adaptAdj &splitElem, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int pos, int tableID, const adaptAdj &elem, const adaptAdj &splitElem
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|pos;
    implP|tableID;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<adaptAdj>::type>::type &)elem;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<adaptAdj>::type>::type &)splitElem;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|pos;
    implP|tableID;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<adaptAdj>::type>::type &)elem;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<adaptAdj>::type>::type &)splitElem;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ParFUMShadowArray::idx_recv_split_3D_marshall12(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void handle_split_3D(int remotePartID, int pos, int tableID, const adaptAdj &elem, const RegionID &lockRegionID, int n1_idxl, int n2_idxl, int n5_idxl);
 */
void CProxyElement_ParFUMShadowArray::handle_split_3D(int remotePartID, int pos, int tableID, const adaptAdj &elem, const RegionID &lockRegionID, int n1_idxl, int n2_idxl, int n5_idxl, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int remotePartID, int pos, int tableID, const adaptAdj &elem, const RegionID &lockRegionID, int n1_idxl, int n2_idxl, int n5_idxl
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|remotePartID;
    implP|pos;
    implP|tableID;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<adaptAdj>::type>::type &)elem;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<RegionID>::type>::type &)lockRegionID;
    implP|n1_idxl;
    implP|n2_idxl;
    implP|n5_idxl;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|remotePartID;
    implP|pos;
    implP|tableID;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<adaptAdj>::type>::type &)elem;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<RegionID>::type>::type &)lockRegionID;
    implP|n1_idxl;
    implP|n2_idxl;
    implP|n5_idxl;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ParFUMShadowArray::idx_handle_split_3D_marshall13(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded sync void recv_splits(int tableID, int expectedSplits);
 */
void CProxyElement_ParFUMShadowArray::recv_splits(int tableID, int expectedSplits, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int tableID, int expectedSplits
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|tableID;
    implP|expectedSplits;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|tableID;
    implP|expectedSplits;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  void *impl_msg_typed_ret = ckSendSync(impl_amsg, CkIndex_ParFUMShadowArray::idx_recv_splits_marshall14());
  CkFreeSysMsg(impl_msg_typed_ret); 
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync longestMsg* isLongest(int elem, int elemType, double len);
 */
longestMsg* CProxyElement_ParFUMShadowArray::isLongest(int elem, int elemType, double len, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int elem, int elemType, double len
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|elem;
    implP|elemType;
    implP|len;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|elem;
    implP|elemType;
    implP|len;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  longestMsg* impl_msg_typed_ret = (longestMsg*)ckSendSync(impl_amsg, CkIndex_ParFUMShadowArray::idx_isLongest_marshall15());
  return impl_msg_typed_ret;
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void update_asterisk_3D(int remotePartID, int i, const adaptAdj &elem, int numElemPairs, const adaptAdj *elemPairs, const RegionID &lockRegionID, int n1_idxl, int n2_idxl, int n5_idxl);
 */
void CProxyElement_ParFUMShadowArray::update_asterisk_3D(int remotePartID, int i, const adaptAdj &elem, int numElemPairs, const adaptAdj *elemPairs, const RegionID &lockRegionID, int n1_idxl, int n2_idxl, int n5_idxl, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int remotePartID, int i, const adaptAdj &elem, int numElemPairs, const adaptAdj *elemPairs, const RegionID &lockRegionID, int n1_idxl, int n2_idxl, int n5_idxl
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_elemPairs, impl_cnt_elemPairs;
  impl_off_elemPairs=impl_off=CK_ALIGN(impl_off,sizeof(adaptAdj));
  impl_off+=(impl_cnt_elemPairs=sizeof(adaptAdj)*(2*numElemPairs));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|remotePartID;
    implP|i;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<adaptAdj>::type>::type &)elem;
    implP|numElemPairs;
    implP|impl_off_elemPairs;
    implP|impl_cnt_elemPairs;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<RegionID>::type>::type &)lockRegionID;
    implP|n1_idxl;
    implP|n2_idxl;
    implP|n5_idxl;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|remotePartID;
    implP|i;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<adaptAdj>::type>::type &)elem;
    implP|numElemPairs;
    implP|impl_off_elemPairs;
    implP|impl_cnt_elemPairs;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<RegionID>::type>::type &)lockRegionID;
    implP|n1_idxl;
    implP|n2_idxl;
    implP|n5_idxl;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_elemPairs,elemPairs,impl_cnt_elemPairs);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ParFUMShadowArray::idx_update_asterisk_3D_marshall16(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ParFUMShadowArray(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ParFUMShadowArray(int s, int i);
 */
CkArrayID CProxy_ParFUMShadowArray::ckNew(int s, int i, const CkArrayOptions &opts, const CkEntryOptions *impl_e_opts)
{
  //Marshall: int s, int i
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|s;
    implP|i;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|s;
    implP|i;
  }
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_ParFUMShadowArray::idx_ParFUMShadowArray_marshall1(), opts);
  return gId;
}
void CProxy_ParFUMShadowArray::ckNew(int s, int i, const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts)
{
  //Marshall: int s, int i
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|s;
    implP|i;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|s;
    implP|i;
  }
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_ParFUMShadowArray::idx_ParFUMShadowArray_marshall1(), _ck_array_creation_cb, opts, impl_msg);
}
CkArrayID CProxy_ParFUMShadowArray::ckNew(int s, int i, const int s1, const CkEntryOptions *impl_e_opts)
{
  //Marshall: int s, int i
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|s;
    implP|i;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|s;
    implP|i;
  }
  CkArrayOptions opts(s1);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_ParFUMShadowArray::idx_ParFUMShadowArray_marshall1(), opts);
  return gId;
}
void CProxy_ParFUMShadowArray::ckNew(int s, int i, const int s1, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts)
{
  //Marshall: int s, int i
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|s;
    implP|i;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|s;
    implP|i;
  }
  CkArrayOptions opts(s1);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_ParFUMShadowArray::idx_ParFUMShadowArray_marshall1(), _ck_array_creation_cb, opts, impl_msg);
}

// Entry point registration function
int CkIndex_ParFUMShadowArray::reg_ParFUMShadowArray_marshall1() {
  int epidx = CkRegisterEp("ParFUMShadowArray(int s, int i)",
      reinterpret_cast<CkCallFnPtr>(_call_ParFUMShadowArray_marshall1), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_ParFUMShadowArray_marshall1);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_ParFUMShadowArray_marshall1);

  return epidx;
}

void CkIndex_ParFUMShadowArray::_call_ParFUMShadowArray_marshall1(void* impl_msg, void* impl_obj_void)
{
  ParFUMShadowArray* impl_obj = static_cast<ParFUMShadowArray*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int s, int i*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> s;
  implP|s;
  PUP::detail::TemporaryObjectHolder<int> i;
  implP|i;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) ParFUMShadowArray(std::move(s.t), std::move(i.t));
}
int CkIndex_ParFUMShadowArray::_callmarshall_ParFUMShadowArray_marshall1(char* impl_buf, void* impl_obj_void) {
  ParFUMShadowArray* impl_obj = static_cast<ParFUMShadowArray*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int s, int i*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> s;
  implP|s;
  PUP::detail::TemporaryObjectHolder<int> i;
  implP|i;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) ParFUMShadowArray(std::move(s.t), std::move(i.t));
  return implP.size();
}
void CkIndex_ParFUMShadowArray::_marshallmessagepup_ParFUMShadowArray_marshall1(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int s, int i*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> s;
  implP|s;
  PUP::detail::TemporaryObjectHolder<int> i;
  implP|i;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("s");
  implDestP|s;
  if (implDestP.hasComments()) implDestP.comment("i");
  implDestP|i;
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setFemMesh(FEMMeshMsg* impl_msg);
 */
void CProxy_ParFUMShadowArray::setFemMesh(FEMMeshMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_ParFUMShadowArray::idx_setFemMesh_FEMMeshMsg(),0);
}

// Entry point registration function
int CkIndex_ParFUMShadowArray::reg_setFemMesh_FEMMeshMsg() {
  int epidx = CkRegisterEp("setFemMesh(FEMMeshMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_setFemMesh_FEMMeshMsg), CMessage_FEMMeshMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)FEMMeshMsg::ckDebugPup);
  return epidx;
}

void CkIndex_ParFUMShadowArray::_call_setFemMesh_FEMMeshMsg(void* impl_msg, void* impl_obj_void)
{
  ParFUMShadowArray* impl_obj = static_cast<ParFUMShadowArray*>(impl_obj_void);
  impl_obj->setFemMesh((FEMMeshMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void lockRegionForRemote(const RegionID &regionID, const int *sharedIdxls, int numSharedIdxls, const adaptAdj *elements, int numElements);
 */
void CProxy_ParFUMShadowArray::lockRegionForRemote(const RegionID &regionID, const int *sharedIdxls, int numSharedIdxls, const adaptAdj *elements, int numElements, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const RegionID &regionID, const int *sharedIdxls, int numSharedIdxls, const adaptAdj *elements, int numElements
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_sharedIdxls, impl_cnt_sharedIdxls;
  impl_off_sharedIdxls=impl_off=CK_ALIGN(impl_off,sizeof(int));
  impl_off+=(impl_cnt_sharedIdxls=sizeof(int)*(numSharedIdxls));
  int impl_off_elements, impl_cnt_elements;
  impl_off_elements=impl_off=CK_ALIGN(impl_off,sizeof(adaptAdj));
  impl_off+=(impl_cnt_elements=sizeof(adaptAdj)*(numElements));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<RegionID>::type>::type &)regionID;
    implP|impl_off_sharedIdxls;
    implP|impl_cnt_sharedIdxls;
    implP|numSharedIdxls;
    implP|impl_off_elements;
    implP|impl_cnt_elements;
    implP|numElements;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<RegionID>::type>::type &)regionID;
    implP|impl_off_sharedIdxls;
    implP|impl_cnt_sharedIdxls;
    implP|numSharedIdxls;
    implP|impl_off_elements;
    implP|impl_cnt_elements;
    implP|numElements;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_sharedIdxls,sharedIdxls,impl_cnt_sharedIdxls);
  memcpy(impl_buf+impl_off_elements,elements,impl_cnt_elements);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_ParFUMShadowArray::idx_lockRegionForRemote_marshall3(),0);
}

// Entry point registration function
int CkIndex_ParFUMShadowArray::reg_lockRegionForRemote_marshall3() {
  int epidx = CkRegisterEp("lockRegionForRemote(const RegionID &regionID, const int *sharedIdxls, int numSharedIdxls, const adaptAdj *elements, int numElements)",
      reinterpret_cast<CkCallFnPtr>(_call_lockRegionForRemote_marshall3), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_lockRegionForRemote_marshall3);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_lockRegionForRemote_marshall3);

  return epidx;
}

void CkIndex_ParFUMShadowArray::_call_lockRegionForRemote_marshall3(void* impl_msg, void* impl_obj_void)
{
  ParFUMShadowArray* impl_obj = static_cast<ParFUMShadowArray*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const RegionID &regionID, const int *sharedIdxls, int numSharedIdxls, const adaptAdj *elements, int numElements*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<RegionID> regionID;
  implP|regionID;
  int impl_off_sharedIdxls, impl_cnt_sharedIdxls;
  implP|impl_off_sharedIdxls;
  implP|impl_cnt_sharedIdxls;
  PUP::detail::TemporaryObjectHolder<int> numSharedIdxls;
  implP|numSharedIdxls;
  int impl_off_elements, impl_cnt_elements;
  implP|impl_off_elements;
  implP|impl_cnt_elements;
  PUP::detail::TemporaryObjectHolder<int> numElements;
  implP|numElements;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  int *sharedIdxls=(int *)(impl_buf+impl_off_sharedIdxls);
  adaptAdj *elements=(adaptAdj *)(impl_buf+impl_off_elements);
  impl_obj->lockRegionForRemote(std::move(regionID.t), sharedIdxls, std::move(numSharedIdxls.t), elements, std::move(numElements.t));
}
int CkIndex_ParFUMShadowArray::_callmarshall_lockRegionForRemote_marshall3(char* impl_buf, void* impl_obj_void) {
  ParFUMShadowArray* impl_obj = static_cast<ParFUMShadowArray*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const RegionID &regionID, const int *sharedIdxls, int numSharedIdxls, const adaptAdj *elements, int numElements*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<RegionID> regionID;
  implP|regionID;
  int impl_off_sharedIdxls, impl_cnt_sharedIdxls;
  implP|impl_off_sharedIdxls;
  implP|impl_cnt_sharedIdxls;
  PUP::detail::TemporaryObjectHolder<int> numSharedIdxls;
  implP|numSharedIdxls;
  int impl_off_elements, impl_cnt_elements;
  implP|impl_off_elements;
  implP|impl_cnt_elements;
  PUP::detail::TemporaryObjectHolder<int> numElements;
  implP|numElements;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  int *sharedIdxls=(int *)(impl_buf+impl_off_sharedIdxls);
  adaptAdj *elements=(adaptAdj *)(impl_buf+impl_off_elements);
  impl_obj->lockRegionForRemote(std::move(regionID.t), sharedIdxls, std::move(numSharedIdxls.t), elements, std::move(numElements.t));
  return implP.size();
}
void CkIndex_ParFUMShadowArray::_marshallmessagepup_lockRegionForRemote_marshall3(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const RegionID &regionID, const int *sharedIdxls, int numSharedIdxls, const adaptAdj *elements, int numElements*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<RegionID> regionID;
  implP|regionID;
  int impl_off_sharedIdxls, impl_cnt_sharedIdxls;
  implP|impl_off_sharedIdxls;
  implP|impl_cnt_sharedIdxls;
  PUP::detail::TemporaryObjectHolder<int> numSharedIdxls;
  implP|numSharedIdxls;
  int impl_off_elements, impl_cnt_elements;
  implP|impl_off_elements;
  implP|impl_cnt_elements;
  PUP::detail::TemporaryObjectHolder<int> numElements;
  implP|numElements;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  int *sharedIdxls=(int *)(impl_buf+impl_off_sharedIdxls);
  adaptAdj *elements=(adaptAdj *)(impl_buf+impl_off_elements);
  if (implDestP.hasComments()) implDestP.comment("regionID");
  implDestP|regionID;
  if (implDestP.hasComments()) implDestP.comment("sharedIdxls");
  implDestP.synchronize(PUP::sync_begin_array);
  for (int impl_i=0;impl_i*(sizeof(*sharedIdxls))<impl_cnt_sharedIdxls;impl_i++) {
    implDestP.synchronize(PUP::sync_item);
    implDestP|sharedIdxls[impl_i];
  }
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("numSharedIdxls");
  implDestP|numSharedIdxls;
  if (implDestP.hasComments()) implDestP.comment("elements");
  implDestP.synchronize(PUP::sync_begin_array);
  for (int impl_i=0;impl_i*(sizeof(*elements))<impl_cnt_elements;impl_i++) {
    implDestP.synchronize(PUP::sync_item);
    implDestP|elements[impl_i];
  }
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("numElements");
  implDestP|numElements;
}
PUPable_def(SINGLE_ARG(Closure_ParFUMShadowArray::lockRegionForRemote_3_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void lockReply(int remoteChunk, const RegionID &regionID, const bool &success, int tag, int otherSuccess);
 */
void CProxy_ParFUMShadowArray::lockReply(int remoteChunk, const RegionID &regionID, const bool &success, int tag, int otherSuccess, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int remoteChunk, const RegionID &regionID, const bool &success, int tag, int otherSuccess
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|remoteChunk;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<RegionID>::type>::type &)regionID;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)success;
    implP|tag;
    implP|otherSuccess;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|remoteChunk;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<RegionID>::type>::type &)regionID;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)success;
    implP|tag;
    implP|otherSuccess;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_ParFUMShadowArray::idx_lockReply_marshall4(),0);
}

// Entry point registration function
int CkIndex_ParFUMShadowArray::reg_lockReply_marshall4() {
  int epidx = CkRegisterEp("lockReply(int remoteChunk, const RegionID &regionID, const bool &success, int tag, int otherSuccess)",
      reinterpret_cast<CkCallFnPtr>(_call_lockReply_marshall4), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_lockReply_marshall4);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_lockReply_marshall4);

  return epidx;
}

void CkIndex_ParFUMShadowArray::_call_lockReply_marshall4(void* impl_msg, void* impl_obj_void)
{
  ParFUMShadowArray* impl_obj = static_cast<ParFUMShadowArray*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int remoteChunk, const RegionID &regionID, const bool &success, int tag, int otherSuccess*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> remoteChunk;
  implP|remoteChunk;
  PUP::detail::TemporaryObjectHolder<RegionID> regionID;
  implP|regionID;
  PUP::detail::TemporaryObjectHolder<bool> success;
  implP|success;
  PUP::detail::TemporaryObjectHolder<int> tag;
  implP|tag;
  PUP::detail::TemporaryObjectHolder<int> otherSuccess;
  implP|otherSuccess;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->lockReply(std::move(remoteChunk.t), std::move(regionID.t), std::move(success.t), std::move(tag.t), std::move(otherSuccess.t));
}
int CkIndex_ParFUMShadowArray::_callmarshall_lockReply_marshall4(char* impl_buf, void* impl_obj_void) {
  ParFUMShadowArray* impl_obj = static_cast<ParFUMShadowArray*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int remoteChunk, const RegionID &regionID, const bool &success, int tag, int otherSuccess*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> remoteChunk;
  implP|remoteChunk;
  PUP::detail::TemporaryObjectHolder<RegionID> regionID;
  implP|regionID;
  PUP::detail::TemporaryObjectHolder<bool> success;
  implP|success;
  PUP::detail::TemporaryObjectHolder<int> tag;
  implP|tag;
  PUP::detail::TemporaryObjectHolder<int> otherSuccess;
  implP|otherSuccess;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->lockReply(std::move(remoteChunk.t), std::move(regionID.t), std::move(success.t), std::move(tag.t), std::move(otherSuccess.t));
  return implP.size();
}
void CkIndex_ParFUMShadowArray::_marshallmessagepup_lockReply_marshall4(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int remoteChunk, const RegionID &regionID, const bool &success, int tag, int otherSuccess*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> remoteChunk;
  implP|remoteChunk;
  PUP::detail::TemporaryObjectHolder<RegionID> regionID;
  implP|regionID;
  PUP::detail::TemporaryObjectHolder<bool> success;
  implP|success;
  PUP::detail::TemporaryObjectHolder<int> tag;
  implP|tag;
  PUP::detail::TemporaryObjectHolder<int> otherSuccess;
  implP|otherSuccess;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("remoteChunk");
  implDestP|remoteChunk;
  if (implDestP.hasComments()) implDestP.comment("regionID");
  implDestP|regionID;
  if (implDestP.hasComments()) implDestP.comment("success");
  implDestP|success;
  if (implDestP.hasComments()) implDestP.comment("tag");
  implDestP|tag;
  if (implDestP.hasComments()) implDestP.comment("otherSuccess");
  implDestP|otherSuccess;
}
PUPable_def(SINGLE_ARG(Closure_ParFUMShadowArray::lockReply_4_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void unlockForRemote(const RegionID &regionID);
 */
void CProxy_ParFUMShadowArray::unlockForRemote(const RegionID &regionID, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const RegionID &regionID
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<RegionID>::type>::type &)regionID;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<RegionID>::type>::type &)regionID;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_ParFUMShadowArray::idx_unlockForRemote_marshall5(),0);
}

// Entry point registration function
int CkIndex_ParFUMShadowArray::reg_unlockForRemote_marshall5() {
  int epidx = CkRegisterEp("unlockForRemote(const RegionID &regionID)",
      reinterpret_cast<CkCallFnPtr>(_call_unlockForRemote_marshall5), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_unlockForRemote_marshall5);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_unlockForRemote_marshall5);

  return epidx;
}

void CkIndex_ParFUMShadowArray::_call_unlockForRemote_marshall5(void* impl_msg, void* impl_obj_void)
{
  ParFUMShadowArray* impl_obj = static_cast<ParFUMShadowArray*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const RegionID &regionID*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<RegionID> regionID;
  implP|regionID;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->unlockForRemote(std::move(regionID.t));
}
int CkIndex_ParFUMShadowArray::_callmarshall_unlockForRemote_marshall5(char* impl_buf, void* impl_obj_void) {
  ParFUMShadowArray* impl_obj = static_cast<ParFUMShadowArray*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const RegionID &regionID*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<RegionID> regionID;
  implP|regionID;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->unlockForRemote(std::move(regionID.t));
  return implP.size();
}
void CkIndex_ParFUMShadowArray::_marshallmessagepup_unlockForRemote_marshall5(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const RegionID &regionID*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<RegionID> regionID;
  implP|regionID;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("regionID");
  implDestP|regionID;
}
PUPable_def(SINGLE_ARG(Closure_ParFUMShadowArray::unlockForRemote_5_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void unpendForRemote(const RegionID &regionID);
 */
void CProxy_ParFUMShadowArray::unpendForRemote(const RegionID &regionID, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const RegionID &regionID
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<RegionID>::type>::type &)regionID;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<RegionID>::type>::type &)regionID;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_ParFUMShadowArray::idx_unpendForRemote_marshall6(),0);
}

// Entry point registration function
int CkIndex_ParFUMShadowArray::reg_unpendForRemote_marshall6() {
  int epidx = CkRegisterEp("unpendForRemote(const RegionID &regionID)",
      reinterpret_cast<CkCallFnPtr>(_call_unpendForRemote_marshall6), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_unpendForRemote_marshall6);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_unpendForRemote_marshall6);

  return epidx;
}

void CkIndex_ParFUMShadowArray::_call_unpendForRemote_marshall6(void* impl_msg, void* impl_obj_void)
{
  ParFUMShadowArray* impl_obj = static_cast<ParFUMShadowArray*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const RegionID &regionID*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<RegionID> regionID;
  implP|regionID;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->unpendForRemote(std::move(regionID.t));
}
int CkIndex_ParFUMShadowArray::_callmarshall_unpendForRemote_marshall6(char* impl_buf, void* impl_obj_void) {
  ParFUMShadowArray* impl_obj = static_cast<ParFUMShadowArray*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const RegionID &regionID*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<RegionID> regionID;
  implP|regionID;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->unpendForRemote(std::move(regionID.t));
  return implP.size();
}
void CkIndex_ParFUMShadowArray::_marshallmessagepup_unpendForRemote_marshall6(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const RegionID &regionID*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<RegionID> regionID;
  implP|regionID;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("regionID");
  implDestP|regionID;
}
PUPable_def(SINGLE_ARG(Closure_ParFUMShadowArray::unpendForRemote_6_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void unlockReply(int remoteChunk, const RegionID &regionID);
 */
void CProxy_ParFUMShadowArray::unlockReply(int remoteChunk, const RegionID &regionID, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int remoteChunk, const RegionID &regionID
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|remoteChunk;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<RegionID>::type>::type &)regionID;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|remoteChunk;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<RegionID>::type>::type &)regionID;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_ParFUMShadowArray::idx_unlockReply_marshall7(),0);
}

// Entry point registration function
int CkIndex_ParFUMShadowArray::reg_unlockReply_marshall7() {
  int epidx = CkRegisterEp("unlockReply(int remoteChunk, const RegionID &regionID)",
      reinterpret_cast<CkCallFnPtr>(_call_unlockReply_marshall7), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_unlockReply_marshall7);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_unlockReply_marshall7);

  return epidx;
}

void CkIndex_ParFUMShadowArray::_call_unlockReply_marshall7(void* impl_msg, void* impl_obj_void)
{
  ParFUMShadowArray* impl_obj = static_cast<ParFUMShadowArray*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int remoteChunk, const RegionID &regionID*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> remoteChunk;
  implP|remoteChunk;
  PUP::detail::TemporaryObjectHolder<RegionID> regionID;
  implP|regionID;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->unlockReply(std::move(remoteChunk.t), std::move(regionID.t));
}
int CkIndex_ParFUMShadowArray::_callmarshall_unlockReply_marshall7(char* impl_buf, void* impl_obj_void) {
  ParFUMShadowArray* impl_obj = static_cast<ParFUMShadowArray*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int remoteChunk, const RegionID &regionID*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> remoteChunk;
  implP|remoteChunk;
  PUP::detail::TemporaryObjectHolder<RegionID> regionID;
  implP|regionID;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->unlockReply(std::move(remoteChunk.t), std::move(regionID.t));
  return implP.size();
}
void CkIndex_ParFUMShadowArray::_marshallmessagepup_unlockReply_marshall7(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int remoteChunk, const RegionID &regionID*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> remoteChunk;
  implP|remoteChunk;
  PUP::detail::TemporaryObjectHolder<RegionID> regionID;
  implP|regionID;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("remoteChunk");
  implDestP|remoteChunk;
  if (implDestP.hasComments()) implDestP.comment("regionID");
  implDestP|regionID;
}
PUPable_def(SINGLE_ARG(Closure_ParFUMShadowArray::unlockReply_7_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync adaptAdjMsg* remote_bulk_edge_bisect_2D(const adaptAdj &nbrElem, const adaptAdj &splitElem, int new_idxl, int n1_idxl, int n2_idxl, int partitionID);
 */

// Entry point registration function
int CkIndex_ParFUMShadowArray::reg_remote_bulk_edge_bisect_2D_marshall8() {
  int epidx = CkRegisterEp("remote_bulk_edge_bisect_2D(const adaptAdj &nbrElem, const adaptAdj &splitElem, int new_idxl, int n1_idxl, int n2_idxl, int partitionID)",
      reinterpret_cast<CkCallFnPtr>(_call_remote_bulk_edge_bisect_2D_marshall8), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_remote_bulk_edge_bisect_2D_marshall8);

  return epidx;
}

void CkIndex_ParFUMShadowArray::_call_remote_bulk_edge_bisect_2D_marshall8(void* impl_msg, void* impl_obj_void)
{
  ParFUMShadowArray* impl_obj = static_cast<ParFUMShadowArray*>(impl_obj_void);
  int impl_ref = CkGetRefNum(impl_msg), impl_src = CkGetSrcPe(impl_msg);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const adaptAdj &nbrElem, const adaptAdj &splitElem, int new_idxl, int n1_idxl, int n2_idxl, int partitionID*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<adaptAdj> nbrElem;
  implP|nbrElem;
  PUP::detail::TemporaryObjectHolder<adaptAdj> splitElem;
  implP|splitElem;
  PUP::detail::TemporaryObjectHolder<int> new_idxl;
  implP|new_idxl;
  PUP::detail::TemporaryObjectHolder<int> n1_idxl;
  implP|n1_idxl;
  PUP::detail::TemporaryObjectHolder<int> n2_idxl;
  implP|n2_idxl;
  PUP::detail::TemporaryObjectHolder<int> partitionID;
  implP|partitionID;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  void *impl_retMsg=(void *)   impl_obj->remote_bulk_edge_bisect_2D(std::move(nbrElem.t), std::move(splitElem.t), std::move(new_idxl.t), std::move(n1_idxl.t), std::move(n2_idxl.t), std::move(partitionID.t));
  CkSendToFutureID(impl_ref, impl_retMsg, impl_src);
}
void CkIndex_ParFUMShadowArray::_marshallmessagepup_remote_bulk_edge_bisect_2D_marshall8(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const adaptAdj &nbrElem, const adaptAdj &splitElem, int new_idxl, int n1_idxl, int n2_idxl, int partitionID*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<adaptAdj> nbrElem;
  implP|nbrElem;
  PUP::detail::TemporaryObjectHolder<adaptAdj> splitElem;
  implP|splitElem;
  PUP::detail::TemporaryObjectHolder<int> new_idxl;
  implP|new_idxl;
  PUP::detail::TemporaryObjectHolder<int> n1_idxl;
  implP|n1_idxl;
  PUP::detail::TemporaryObjectHolder<int> n2_idxl;
  implP|n2_idxl;
  PUP::detail::TemporaryObjectHolder<int> partitionID;
  implP|partitionID;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("nbrElem");
  implDestP|nbrElem;
  if (implDestP.hasComments()) implDestP.comment("splitElem");
  implDestP|splitElem;
  if (implDestP.hasComments()) implDestP.comment("new_idxl");
  implDestP|new_idxl;
  if (implDestP.hasComments()) implDestP.comment("n1_idxl");
  implDestP|n1_idxl;
  if (implDestP.hasComments()) implDestP.comment("n2_idxl");
  implDestP|n2_idxl;
  if (implDestP.hasComments()) implDestP.comment("partitionID");
  implDestP|partitionID;
}
PUPable_def(SINGLE_ARG(Closure_ParFUMShadowArray::remote_bulk_edge_bisect_2D_8_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync void remote_adaptAdj_replace(const adaptAdj &elem, const adaptAdj &oldElem, const adaptAdj &newElem);
 */

// Entry point registration function
int CkIndex_ParFUMShadowArray::reg_remote_adaptAdj_replace_marshall9() {
  int epidx = CkRegisterEp("remote_adaptAdj_replace(const adaptAdj &elem, const adaptAdj &oldElem, const adaptAdj &newElem)",
      reinterpret_cast<CkCallFnPtr>(_call_remote_adaptAdj_replace_marshall9), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_remote_adaptAdj_replace_marshall9);

  return epidx;
}

void CkIndex_ParFUMShadowArray::_call_remote_adaptAdj_replace_marshall9(void* impl_msg, void* impl_obj_void)
{
  ParFUMShadowArray* impl_obj = static_cast<ParFUMShadowArray*>(impl_obj_void);
  int impl_ref = CkGetRefNum(impl_msg), impl_src = CkGetSrcPe(impl_msg);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const adaptAdj &elem, const adaptAdj &oldElem, const adaptAdj &newElem*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<adaptAdj> elem;
  implP|elem;
  PUP::detail::TemporaryObjectHolder<adaptAdj> oldElem;
  implP|oldElem;
  PUP::detail::TemporaryObjectHolder<adaptAdj> newElem;
  implP|newElem;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  void *impl_retMsg=CkAllocSysMsg();
    impl_obj->remote_adaptAdj_replace(std::move(elem.t), std::move(oldElem.t), std::move(newElem.t));
  CkSendToFutureID(impl_ref, impl_retMsg, impl_src);
}
void CkIndex_ParFUMShadowArray::_marshallmessagepup_remote_adaptAdj_replace_marshall9(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const adaptAdj &elem, const adaptAdj &oldElem, const adaptAdj &newElem*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<adaptAdj> elem;
  implP|elem;
  PUP::detail::TemporaryObjectHolder<adaptAdj> oldElem;
  implP|oldElem;
  PUP::detail::TemporaryObjectHolder<adaptAdj> newElem;
  implP|newElem;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("elem");
  implDestP|elem;
  if (implDestP.hasComments()) implDestP.comment("oldElem");
  implDestP|oldElem;
  if (implDestP.hasComments()) implDestP.comment("newElem");
  implDestP|newElem;
}
PUPable_def(SINGLE_ARG(Closure_ParFUMShadowArray::remote_adaptAdj_replace_9_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync void remote_edgeAdj_replace(int remotePartID, const adaptAdj &adj, const adaptAdj &elem, const adaptAdj &splitElem, int n1_idxl, int n2_idxl);
 */

// Entry point registration function
int CkIndex_ParFUMShadowArray::reg_remote_edgeAdj_replace_marshall10() {
  int epidx = CkRegisterEp("remote_edgeAdj_replace(int remotePartID, const adaptAdj &adj, const adaptAdj &elem, const adaptAdj &splitElem, int n1_idxl, int n2_idxl)",
      reinterpret_cast<CkCallFnPtr>(_call_remote_edgeAdj_replace_marshall10), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_remote_edgeAdj_replace_marshall10);

  return epidx;
}

void CkIndex_ParFUMShadowArray::_call_remote_edgeAdj_replace_marshall10(void* impl_msg, void* impl_obj_void)
{
  ParFUMShadowArray* impl_obj = static_cast<ParFUMShadowArray*>(impl_obj_void);
  int impl_ref = CkGetRefNum(impl_msg), impl_src = CkGetSrcPe(impl_msg);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int remotePartID, const adaptAdj &adj, const adaptAdj &elem, const adaptAdj &splitElem, int n1_idxl, int n2_idxl*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> remotePartID;
  implP|remotePartID;
  PUP::detail::TemporaryObjectHolder<adaptAdj> adj;
  implP|adj;
  PUP::detail::TemporaryObjectHolder<adaptAdj> elem;
  implP|elem;
  PUP::detail::TemporaryObjectHolder<adaptAdj> splitElem;
  implP|splitElem;
  PUP::detail::TemporaryObjectHolder<int> n1_idxl;
  implP|n1_idxl;
  PUP::detail::TemporaryObjectHolder<int> n2_idxl;
  implP|n2_idxl;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  void *impl_retMsg=CkAllocSysMsg();
    impl_obj->remote_edgeAdj_replace(std::move(remotePartID.t), std::move(adj.t), std::move(elem.t), std::move(splitElem.t), std::move(n1_idxl.t), std::move(n2_idxl.t));
  CkSendToFutureID(impl_ref, impl_retMsg, impl_src);
}
void CkIndex_ParFUMShadowArray::_marshallmessagepup_remote_edgeAdj_replace_marshall10(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int remotePartID, const adaptAdj &adj, const adaptAdj &elem, const adaptAdj &splitElem, int n1_idxl, int n2_idxl*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> remotePartID;
  implP|remotePartID;
  PUP::detail::TemporaryObjectHolder<adaptAdj> adj;
  implP|adj;
  PUP::detail::TemporaryObjectHolder<adaptAdj> elem;
  implP|elem;
  PUP::detail::TemporaryObjectHolder<adaptAdj> splitElem;
  implP|splitElem;
  PUP::detail::TemporaryObjectHolder<int> n1_idxl;
  implP|n1_idxl;
  PUP::detail::TemporaryObjectHolder<int> n2_idxl;
  implP|n2_idxl;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("remotePartID");
  implDestP|remotePartID;
  if (implDestP.hasComments()) implDestP.comment("adj");
  implDestP|adj;
  if (implDestP.hasComments()) implDestP.comment("elem");
  implDestP|elem;
  if (implDestP.hasComments()) implDestP.comment("splitElem");
  implDestP|splitElem;
  if (implDestP.hasComments()) implDestP.comment("n1_idxl");
  implDestP|n1_idxl;
  if (implDestP.hasComments()) implDestP.comment("n2_idxl");
  implDestP|n2_idxl;
}
PUPable_def(SINGLE_ARG(Closure_ParFUMShadowArray::remote_edgeAdj_replace_10_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync void remote_edgeAdj_add(int remotePartID, const adaptAdj &elem, const adaptAdj &splitElem, int n1_idxl, int n2_idxl);
 */

// Entry point registration function
int CkIndex_ParFUMShadowArray::reg_remote_edgeAdj_add_marshall11() {
  int epidx = CkRegisterEp("remote_edgeAdj_add(int remotePartID, const adaptAdj &elem, const adaptAdj &splitElem, int n1_idxl, int n2_idxl)",
      reinterpret_cast<CkCallFnPtr>(_call_remote_edgeAdj_add_marshall11), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_remote_edgeAdj_add_marshall11);

  return epidx;
}

void CkIndex_ParFUMShadowArray::_call_remote_edgeAdj_add_marshall11(void* impl_msg, void* impl_obj_void)
{
  ParFUMShadowArray* impl_obj = static_cast<ParFUMShadowArray*>(impl_obj_void);
  int impl_ref = CkGetRefNum(impl_msg), impl_src = CkGetSrcPe(impl_msg);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int remotePartID, const adaptAdj &elem, const adaptAdj &splitElem, int n1_idxl, int n2_idxl*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> remotePartID;
  implP|remotePartID;
  PUP::detail::TemporaryObjectHolder<adaptAdj> elem;
  implP|elem;
  PUP::detail::TemporaryObjectHolder<adaptAdj> splitElem;
  implP|splitElem;
  PUP::detail::TemporaryObjectHolder<int> n1_idxl;
  implP|n1_idxl;
  PUP::detail::TemporaryObjectHolder<int> n2_idxl;
  implP|n2_idxl;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  void *impl_retMsg=CkAllocSysMsg();
    impl_obj->remote_edgeAdj_add(std::move(remotePartID.t), std::move(elem.t), std::move(splitElem.t), std::move(n1_idxl.t), std::move(n2_idxl.t));
  CkSendToFutureID(impl_ref, impl_retMsg, impl_src);
}
void CkIndex_ParFUMShadowArray::_marshallmessagepup_remote_edgeAdj_add_marshall11(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int remotePartID, const adaptAdj &elem, const adaptAdj &splitElem, int n1_idxl, int n2_idxl*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> remotePartID;
  implP|remotePartID;
  PUP::detail::TemporaryObjectHolder<adaptAdj> elem;
  implP|elem;
  PUP::detail::TemporaryObjectHolder<adaptAdj> splitElem;
  implP|splitElem;
  PUP::detail::TemporaryObjectHolder<int> n1_idxl;
  implP|n1_idxl;
  PUP::detail::TemporaryObjectHolder<int> n2_idxl;
  implP|n2_idxl;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("remotePartID");
  implDestP|remotePartID;
  if (implDestP.hasComments()) implDestP.comment("elem");
  implDestP|elem;
  if (implDestP.hasComments()) implDestP.comment("splitElem");
  implDestP|splitElem;
  if (implDestP.hasComments()) implDestP.comment("n1_idxl");
  implDestP|n1_idxl;
  if (implDestP.hasComments()) implDestP.comment("n2_idxl");
  implDestP|n2_idxl;
}
PUPable_def(SINGLE_ARG(Closure_ParFUMShadowArray::remote_edgeAdj_add_11_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recv_split_3D(int pos, int tableID, const adaptAdj &elem, const adaptAdj &splitElem);
 */
void CProxy_ParFUMShadowArray::recv_split_3D(int pos, int tableID, const adaptAdj &elem, const adaptAdj &splitElem, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int pos, int tableID, const adaptAdj &elem, const adaptAdj &splitElem
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|pos;
    implP|tableID;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<adaptAdj>::type>::type &)elem;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<adaptAdj>::type>::type &)splitElem;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|pos;
    implP|tableID;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<adaptAdj>::type>::type &)elem;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<adaptAdj>::type>::type &)splitElem;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_ParFUMShadowArray::idx_recv_split_3D_marshall12(),0);
}

// Entry point registration function
int CkIndex_ParFUMShadowArray::reg_recv_split_3D_marshall12() {
  int epidx = CkRegisterEp("recv_split_3D(int pos, int tableID, const adaptAdj &elem, const adaptAdj &splitElem)",
      reinterpret_cast<CkCallFnPtr>(_call_recv_split_3D_marshall12), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_recv_split_3D_marshall12);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_recv_split_3D_marshall12);

  return epidx;
}

void CkIndex_ParFUMShadowArray::_call_recv_split_3D_marshall12(void* impl_msg, void* impl_obj_void)
{
  ParFUMShadowArray* impl_obj = static_cast<ParFUMShadowArray*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int pos, int tableID, const adaptAdj &elem, const adaptAdj &splitElem*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> pos;
  implP|pos;
  PUP::detail::TemporaryObjectHolder<int> tableID;
  implP|tableID;
  PUP::detail::TemporaryObjectHolder<adaptAdj> elem;
  implP|elem;
  PUP::detail::TemporaryObjectHolder<adaptAdj> splitElem;
  implP|splitElem;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->recv_split_3D(std::move(pos.t), std::move(tableID.t), std::move(elem.t), std::move(splitElem.t));
}
int CkIndex_ParFUMShadowArray::_callmarshall_recv_split_3D_marshall12(char* impl_buf, void* impl_obj_void) {
  ParFUMShadowArray* impl_obj = static_cast<ParFUMShadowArray*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int pos, int tableID, const adaptAdj &elem, const adaptAdj &splitElem*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> pos;
  implP|pos;
  PUP::detail::TemporaryObjectHolder<int> tableID;
  implP|tableID;
  PUP::detail::TemporaryObjectHolder<adaptAdj> elem;
  implP|elem;
  PUP::detail::TemporaryObjectHolder<adaptAdj> splitElem;
  implP|splitElem;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->recv_split_3D(std::move(pos.t), std::move(tableID.t), std::move(elem.t), std::move(splitElem.t));
  return implP.size();
}
void CkIndex_ParFUMShadowArray::_marshallmessagepup_recv_split_3D_marshall12(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int pos, int tableID, const adaptAdj &elem, const adaptAdj &splitElem*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> pos;
  implP|pos;
  PUP::detail::TemporaryObjectHolder<int> tableID;
  implP|tableID;
  PUP::detail::TemporaryObjectHolder<adaptAdj> elem;
  implP|elem;
  PUP::detail::TemporaryObjectHolder<adaptAdj> splitElem;
  implP|splitElem;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("pos");
  implDestP|pos;
  if (implDestP.hasComments()) implDestP.comment("tableID");
  implDestP|tableID;
  if (implDestP.hasComments()) implDestP.comment("elem");
  implDestP|elem;
  if (implDestP.hasComments()) implDestP.comment("splitElem");
  implDestP|splitElem;
}
PUPable_def(SINGLE_ARG(Closure_ParFUMShadowArray::recv_split_3D_12_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void handle_split_3D(int remotePartID, int pos, int tableID, const adaptAdj &elem, const RegionID &lockRegionID, int n1_idxl, int n2_idxl, int n5_idxl);
 */
void CProxy_ParFUMShadowArray::handle_split_3D(int remotePartID, int pos, int tableID, const adaptAdj &elem, const RegionID &lockRegionID, int n1_idxl, int n2_idxl, int n5_idxl, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int remotePartID, int pos, int tableID, const adaptAdj &elem, const RegionID &lockRegionID, int n1_idxl, int n2_idxl, int n5_idxl
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|remotePartID;
    implP|pos;
    implP|tableID;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<adaptAdj>::type>::type &)elem;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<RegionID>::type>::type &)lockRegionID;
    implP|n1_idxl;
    implP|n2_idxl;
    implP|n5_idxl;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|remotePartID;
    implP|pos;
    implP|tableID;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<adaptAdj>::type>::type &)elem;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<RegionID>::type>::type &)lockRegionID;
    implP|n1_idxl;
    implP|n2_idxl;
    implP|n5_idxl;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_ParFUMShadowArray::idx_handle_split_3D_marshall13(),0);
}

// Entry point registration function
int CkIndex_ParFUMShadowArray::reg_handle_split_3D_marshall13() {
  int epidx = CkRegisterEp("handle_split_3D(int remotePartID, int pos, int tableID, const adaptAdj &elem, const RegionID &lockRegionID, int n1_idxl, int n2_idxl, int n5_idxl)",
      reinterpret_cast<CkCallFnPtr>(_call_handle_split_3D_marshall13), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_handle_split_3D_marshall13);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_handle_split_3D_marshall13);

  return epidx;
}

void CkIndex_ParFUMShadowArray::_call_handle_split_3D_marshall13(void* impl_msg, void* impl_obj_void)
{
  ParFUMShadowArray* impl_obj = static_cast<ParFUMShadowArray*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int remotePartID, int pos, int tableID, const adaptAdj &elem, const RegionID &lockRegionID, int n1_idxl, int n2_idxl, int n5_idxl*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> remotePartID;
  implP|remotePartID;
  PUP::detail::TemporaryObjectHolder<int> pos;
  implP|pos;
  PUP::detail::TemporaryObjectHolder<int> tableID;
  implP|tableID;
  PUP::detail::TemporaryObjectHolder<adaptAdj> elem;
  implP|elem;
  PUP::detail::TemporaryObjectHolder<RegionID> lockRegionID;
  implP|lockRegionID;
  PUP::detail::TemporaryObjectHolder<int> n1_idxl;
  implP|n1_idxl;
  PUP::detail::TemporaryObjectHolder<int> n2_idxl;
  implP|n2_idxl;
  PUP::detail::TemporaryObjectHolder<int> n5_idxl;
  implP|n5_idxl;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->handle_split_3D(std::move(remotePartID.t), std::move(pos.t), std::move(tableID.t), std::move(elem.t), std::move(lockRegionID.t), std::move(n1_idxl.t), std::move(n2_idxl.t), std::move(n5_idxl.t));
}
int CkIndex_ParFUMShadowArray::_callmarshall_handle_split_3D_marshall13(char* impl_buf, void* impl_obj_void) {
  ParFUMShadowArray* impl_obj = static_cast<ParFUMShadowArray*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int remotePartID, int pos, int tableID, const adaptAdj &elem, const RegionID &lockRegionID, int n1_idxl, int n2_idxl, int n5_idxl*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> remotePartID;
  implP|remotePartID;
  PUP::detail::TemporaryObjectHolder<int> pos;
  implP|pos;
  PUP::detail::TemporaryObjectHolder<int> tableID;
  implP|tableID;
  PUP::detail::TemporaryObjectHolder<adaptAdj> elem;
  implP|elem;
  PUP::detail::TemporaryObjectHolder<RegionID> lockRegionID;
  implP|lockRegionID;
  PUP::detail::TemporaryObjectHolder<int> n1_idxl;
  implP|n1_idxl;
  PUP::detail::TemporaryObjectHolder<int> n2_idxl;
  implP|n2_idxl;
  PUP::detail::TemporaryObjectHolder<int> n5_idxl;
  implP|n5_idxl;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->handle_split_3D(std::move(remotePartID.t), std::move(pos.t), std::move(tableID.t), std::move(elem.t), std::move(lockRegionID.t), std::move(n1_idxl.t), std::move(n2_idxl.t), std::move(n5_idxl.t));
  return implP.size();
}
void CkIndex_ParFUMShadowArray::_marshallmessagepup_handle_split_3D_marshall13(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int remotePartID, int pos, int tableID, const adaptAdj &elem, const RegionID &lockRegionID, int n1_idxl, int n2_idxl, int n5_idxl*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> remotePartID;
  implP|remotePartID;
  PUP::detail::TemporaryObjectHolder<int> pos;
  implP|pos;
  PUP::detail::TemporaryObjectHolder<int> tableID;
  implP|tableID;
  PUP::detail::TemporaryObjectHolder<adaptAdj> elem;
  implP|elem;
  PUP::detail::TemporaryObjectHolder<RegionID> lockRegionID;
  implP|lockRegionID;
  PUP::detail::TemporaryObjectHolder<int> n1_idxl;
  implP|n1_idxl;
  PUP::detail::TemporaryObjectHolder<int> n2_idxl;
  implP|n2_idxl;
  PUP::detail::TemporaryObjectHolder<int> n5_idxl;
  implP|n5_idxl;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("remotePartID");
  implDestP|remotePartID;
  if (implDestP.hasComments()) implDestP.comment("pos");
  implDestP|pos;
  if (implDestP.hasComments()) implDestP.comment("tableID");
  implDestP|tableID;
  if (implDestP.hasComments()) implDestP.comment("elem");
  implDestP|elem;
  if (implDestP.hasComments()) implDestP.comment("lockRegionID");
  implDestP|lockRegionID;
  if (implDestP.hasComments()) implDestP.comment("n1_idxl");
  implDestP|n1_idxl;
  if (implDestP.hasComments()) implDestP.comment("n2_idxl");
  implDestP|n2_idxl;
  if (implDestP.hasComments()) implDestP.comment("n5_idxl");
  implDestP|n5_idxl;
}
PUPable_def(SINGLE_ARG(Closure_ParFUMShadowArray::handle_split_3D_13_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded sync void recv_splits(int tableID, int expectedSplits);
 */

// Entry point registration function
int CkIndex_ParFUMShadowArray::reg_recv_splits_marshall14() {
  int epidx = CkRegisterEp("recv_splits(int tableID, int expectedSplits)",
      reinterpret_cast<CkCallFnPtr>(_call_recv_splits_marshall14), CkMarshallMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_recv_splits_marshall14);

  return epidx;
}

void CkIndex_ParFUMShadowArray::_call_recv_splits_marshall14(void* impl_msg, void* impl_obj_void)
{
  ParFUMShadowArray* impl_obj = static_cast<ParFUMShadowArray*>(impl_obj_void);
  CthThread tid = CthCreate((CthVoidFn)_callthr_recv_splits_marshall14, new CkThrCallArg(impl_msg,impl_obj), 0);
  ((Chare *)impl_obj)->CkAddThreadListeners(tid,impl_msg);
  CthTraceResume(tid);
  CthResume(tid);
}
void CkIndex_ParFUMShadowArray::_callthr_recv_splits_marshall14(CkThrCallArg *impl_arg)
{
  void *impl_msg = impl_arg->msg;
  void *impl_obj_void = impl_arg->obj;
  ParFUMShadowArray *impl_obj = static_cast<ParFUMShadowArray *>(impl_obj_void);
  delete impl_arg;
  int impl_ref = CkGetRefNum(impl_msg), impl_src = CkGetSrcPe(impl_msg);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int tableID, int expectedSplits*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> tableID;
  implP|tableID;
  PUP::detail::TemporaryObjectHolder<int> expectedSplits;
  implP|expectedSplits;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  void *impl_retMsg=CkAllocSysMsg();
    impl_obj->recv_splits(std::move(tableID.t), std::move(expectedSplits.t));
  CkSendToFutureID(impl_ref, impl_retMsg, impl_src);
  delete impl_msg_typed;
}
void CkIndex_ParFUMShadowArray::_marshallmessagepup_recv_splits_marshall14(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int tableID, int expectedSplits*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> tableID;
  implP|tableID;
  PUP::detail::TemporaryObjectHolder<int> expectedSplits;
  implP|expectedSplits;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("tableID");
  implDestP|tableID;
  if (implDestP.hasComments()) implDestP.comment("expectedSplits");
  implDestP|expectedSplits;
}
PUPable_def(SINGLE_ARG(Closure_ParFUMShadowArray::recv_splits_14_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync longestMsg* isLongest(int elem, int elemType, double len);
 */

// Entry point registration function
int CkIndex_ParFUMShadowArray::reg_isLongest_marshall15() {
  int epidx = CkRegisterEp("isLongest(int elem, int elemType, double len)",
      reinterpret_cast<CkCallFnPtr>(_call_isLongest_marshall15), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_isLongest_marshall15);

  return epidx;
}

void CkIndex_ParFUMShadowArray::_call_isLongest_marshall15(void* impl_msg, void* impl_obj_void)
{
  ParFUMShadowArray* impl_obj = static_cast<ParFUMShadowArray*>(impl_obj_void);
  int impl_ref = CkGetRefNum(impl_msg), impl_src = CkGetSrcPe(impl_msg);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int elem, int elemType, double len*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> elem;
  implP|elem;
  PUP::detail::TemporaryObjectHolder<int> elemType;
  implP|elemType;
  PUP::detail::TemporaryObjectHolder<double> len;
  implP|len;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  void *impl_retMsg=(void *)   impl_obj->isLongest(std::move(elem.t), std::move(elemType.t), std::move(len.t));
  CkSendToFutureID(impl_ref, impl_retMsg, impl_src);
}
void CkIndex_ParFUMShadowArray::_marshallmessagepup_isLongest_marshall15(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int elem, int elemType, double len*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> elem;
  implP|elem;
  PUP::detail::TemporaryObjectHolder<int> elemType;
  implP|elemType;
  PUP::detail::TemporaryObjectHolder<double> len;
  implP|len;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("elem");
  implDestP|elem;
  if (implDestP.hasComments()) implDestP.comment("elemType");
  implDestP|elemType;
  if (implDestP.hasComments()) implDestP.comment("len");
  implDestP|len;
}
PUPable_def(SINGLE_ARG(Closure_ParFUMShadowArray::isLongest_15_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void update_asterisk_3D(int remotePartID, int i, const adaptAdj &elem, int numElemPairs, const adaptAdj *elemPairs, const RegionID &lockRegionID, int n1_idxl, int n2_idxl, int n5_idxl);
 */
void CProxy_ParFUMShadowArray::update_asterisk_3D(int remotePartID, int i, const adaptAdj &elem, int numElemPairs, const adaptAdj *elemPairs, const RegionID &lockRegionID, int n1_idxl, int n2_idxl, int n5_idxl, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int remotePartID, int i, const adaptAdj &elem, int numElemPairs, const adaptAdj *elemPairs, const RegionID &lockRegionID, int n1_idxl, int n2_idxl, int n5_idxl
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_elemPairs, impl_cnt_elemPairs;
  impl_off_elemPairs=impl_off=CK_ALIGN(impl_off,sizeof(adaptAdj));
  impl_off+=(impl_cnt_elemPairs=sizeof(adaptAdj)*(2*numElemPairs));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|remotePartID;
    implP|i;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<adaptAdj>::type>::type &)elem;
    implP|numElemPairs;
    implP|impl_off_elemPairs;
    implP|impl_cnt_elemPairs;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<RegionID>::type>::type &)lockRegionID;
    implP|n1_idxl;
    implP|n2_idxl;
    implP|n5_idxl;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|remotePartID;
    implP|i;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<adaptAdj>::type>::type &)elem;
    implP|numElemPairs;
    implP|impl_off_elemPairs;
    implP|impl_cnt_elemPairs;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<RegionID>::type>::type &)lockRegionID;
    implP|n1_idxl;
    implP|n2_idxl;
    implP|n5_idxl;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_elemPairs,elemPairs,impl_cnt_elemPairs);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_ParFUMShadowArray::idx_update_asterisk_3D_marshall16(),0);
}

// Entry point registration function
int CkIndex_ParFUMShadowArray::reg_update_asterisk_3D_marshall16() {
  int epidx = CkRegisterEp("update_asterisk_3D(int remotePartID, int i, const adaptAdj &elem, int numElemPairs, const adaptAdj *elemPairs, const RegionID &lockRegionID, int n1_idxl, int n2_idxl, int n5_idxl)",
      reinterpret_cast<CkCallFnPtr>(_call_update_asterisk_3D_marshall16), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_update_asterisk_3D_marshall16);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_update_asterisk_3D_marshall16);

  return epidx;
}

void CkIndex_ParFUMShadowArray::_call_update_asterisk_3D_marshall16(void* impl_msg, void* impl_obj_void)
{
  ParFUMShadowArray* impl_obj = static_cast<ParFUMShadowArray*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int remotePartID, int i, const adaptAdj &elem, int numElemPairs, const adaptAdj *elemPairs, const RegionID &lockRegionID, int n1_idxl, int n2_idxl, int n5_idxl*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> remotePartID;
  implP|remotePartID;
  PUP::detail::TemporaryObjectHolder<int> i;
  implP|i;
  PUP::detail::TemporaryObjectHolder<adaptAdj> elem;
  implP|elem;
  PUP::detail::TemporaryObjectHolder<int> numElemPairs;
  implP|numElemPairs;
  int impl_off_elemPairs, impl_cnt_elemPairs;
  implP|impl_off_elemPairs;
  implP|impl_cnt_elemPairs;
  PUP::detail::TemporaryObjectHolder<RegionID> lockRegionID;
  implP|lockRegionID;
  PUP::detail::TemporaryObjectHolder<int> n1_idxl;
  implP|n1_idxl;
  PUP::detail::TemporaryObjectHolder<int> n2_idxl;
  implP|n2_idxl;
  PUP::detail::TemporaryObjectHolder<int> n5_idxl;
  implP|n5_idxl;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  adaptAdj *elemPairs=(adaptAdj *)(impl_buf+impl_off_elemPairs);
  impl_obj->update_asterisk_3D(std::move(remotePartID.t), std::move(i.t), std::move(elem.t), std::move(numElemPairs.t), elemPairs, std::move(lockRegionID.t), std::move(n1_idxl.t), std::move(n2_idxl.t), std::move(n5_idxl.t));
}
int CkIndex_ParFUMShadowArray::_callmarshall_update_asterisk_3D_marshall16(char* impl_buf, void* impl_obj_void) {
  ParFUMShadowArray* impl_obj = static_cast<ParFUMShadowArray*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int remotePartID, int i, const adaptAdj &elem, int numElemPairs, const adaptAdj *elemPairs, const RegionID &lockRegionID, int n1_idxl, int n2_idxl, int n5_idxl*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> remotePartID;
  implP|remotePartID;
  PUP::detail::TemporaryObjectHolder<int> i;
  implP|i;
  PUP::detail::TemporaryObjectHolder<adaptAdj> elem;
  implP|elem;
  PUP::detail::TemporaryObjectHolder<int> numElemPairs;
  implP|numElemPairs;
  int impl_off_elemPairs, impl_cnt_elemPairs;
  implP|impl_off_elemPairs;
  implP|impl_cnt_elemPairs;
  PUP::detail::TemporaryObjectHolder<RegionID> lockRegionID;
  implP|lockRegionID;
  PUP::detail::TemporaryObjectHolder<int> n1_idxl;
  implP|n1_idxl;
  PUP::detail::TemporaryObjectHolder<int> n2_idxl;
  implP|n2_idxl;
  PUP::detail::TemporaryObjectHolder<int> n5_idxl;
  implP|n5_idxl;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  adaptAdj *elemPairs=(adaptAdj *)(impl_buf+impl_off_elemPairs);
  impl_obj->update_asterisk_3D(std::move(remotePartID.t), std::move(i.t), std::move(elem.t), std::move(numElemPairs.t), elemPairs, std::move(lockRegionID.t), std::move(n1_idxl.t), std::move(n2_idxl.t), std::move(n5_idxl.t));
  return implP.size();
}
void CkIndex_ParFUMShadowArray::_marshallmessagepup_update_asterisk_3D_marshall16(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int remotePartID, int i, const adaptAdj &elem, int numElemPairs, const adaptAdj *elemPairs, const RegionID &lockRegionID, int n1_idxl, int n2_idxl, int n5_idxl*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> remotePartID;
  implP|remotePartID;
  PUP::detail::TemporaryObjectHolder<int> i;
  implP|i;
  PUP::detail::TemporaryObjectHolder<adaptAdj> elem;
  implP|elem;
  PUP::detail::TemporaryObjectHolder<int> numElemPairs;
  implP|numElemPairs;
  int impl_off_elemPairs, impl_cnt_elemPairs;
  implP|impl_off_elemPairs;
  implP|impl_cnt_elemPairs;
  PUP::detail::TemporaryObjectHolder<RegionID> lockRegionID;
  implP|lockRegionID;
  PUP::detail::TemporaryObjectHolder<int> n1_idxl;
  implP|n1_idxl;
  PUP::detail::TemporaryObjectHolder<int> n2_idxl;
  implP|n2_idxl;
  PUP::detail::TemporaryObjectHolder<int> n5_idxl;
  implP|n5_idxl;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  adaptAdj *elemPairs=(adaptAdj *)(impl_buf+impl_off_elemPairs);
  if (implDestP.hasComments()) implDestP.comment("remotePartID");
  implDestP|remotePartID;
  if (implDestP.hasComments()) implDestP.comment("i");
  implDestP|i;
  if (implDestP.hasComments()) implDestP.comment("elem");
  implDestP|elem;
  if (implDestP.hasComments()) implDestP.comment("numElemPairs");
  implDestP|numElemPairs;
  if (implDestP.hasComments()) implDestP.comment("elemPairs");
  implDestP.synchronize(PUP::sync_begin_array);
  for (int impl_i=0;impl_i*(sizeof(*elemPairs))<impl_cnt_elemPairs;impl_i++) {
    implDestP.synchronize(PUP::sync_item);
    implDestP|elemPairs[impl_i];
  }
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("lockRegionID");
  implDestP|lockRegionID;
  if (implDestP.hasComments()) implDestP.comment("n1_idxl");
  implDestP|n1_idxl;
  if (implDestP.hasComments()) implDestP.comment("n2_idxl");
  implDestP|n2_idxl;
  if (implDestP.hasComments()) implDestP.comment("n5_idxl");
  implDestP|n5_idxl;
}
PUPable_def(SINGLE_ARG(Closure_ParFUMShadowArray::update_asterisk_3D_16_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ParFUMShadowArray(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_ParFUMShadowArray::reg_ParFUMShadowArray_CkMigrateMessage() {
  int epidx = CkRegisterEp("ParFUMShadowArray(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_ParFUMShadowArray_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_ParFUMShadowArray::_call_ParFUMShadowArray_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  call_migration_constructor<ParFUMShadowArray> c = impl_obj_void;
  c((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ParFUMShadowArray(int s, int i);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setFemMesh(FEMMeshMsg* impl_msg);
 */
void CProxySection_ParFUMShadowArray::setFemMesh(FEMMeshMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ParFUMShadowArray::idx_setFemMesh_FEMMeshMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void lockRegionForRemote(const RegionID &regionID, const int *sharedIdxls, int numSharedIdxls, const adaptAdj *elements, int numElements);
 */
void CProxySection_ParFUMShadowArray::lockRegionForRemote(const RegionID &regionID, const int *sharedIdxls, int numSharedIdxls, const adaptAdj *elements, int numElements, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const RegionID &regionID, const int *sharedIdxls, int numSharedIdxls, const adaptAdj *elements, int numElements
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_sharedIdxls, impl_cnt_sharedIdxls;
  impl_off_sharedIdxls=impl_off=CK_ALIGN(impl_off,sizeof(int));
  impl_off+=(impl_cnt_sharedIdxls=sizeof(int)*(numSharedIdxls));
  int impl_off_elements, impl_cnt_elements;
  impl_off_elements=impl_off=CK_ALIGN(impl_off,sizeof(adaptAdj));
  impl_off+=(impl_cnt_elements=sizeof(adaptAdj)*(numElements));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<RegionID>::type>::type &)regionID;
    implP|impl_off_sharedIdxls;
    implP|impl_cnt_sharedIdxls;
    implP|numSharedIdxls;
    implP|impl_off_elements;
    implP|impl_cnt_elements;
    implP|numElements;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<RegionID>::type>::type &)regionID;
    implP|impl_off_sharedIdxls;
    implP|impl_cnt_sharedIdxls;
    implP|numSharedIdxls;
    implP|impl_off_elements;
    implP|impl_cnt_elements;
    implP|numElements;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_sharedIdxls,sharedIdxls,impl_cnt_sharedIdxls);
  memcpy(impl_buf+impl_off_elements,elements,impl_cnt_elements);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ParFUMShadowArray::idx_lockRegionForRemote_marshall3(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void lockReply(int remoteChunk, const RegionID &regionID, const bool &success, int tag, int otherSuccess);
 */
void CProxySection_ParFUMShadowArray::lockReply(int remoteChunk, const RegionID &regionID, const bool &success, int tag, int otherSuccess, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int remoteChunk, const RegionID &regionID, const bool &success, int tag, int otherSuccess
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|remoteChunk;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<RegionID>::type>::type &)regionID;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)success;
    implP|tag;
    implP|otherSuccess;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|remoteChunk;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<RegionID>::type>::type &)regionID;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)success;
    implP|tag;
    implP|otherSuccess;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ParFUMShadowArray::idx_lockReply_marshall4(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void unlockForRemote(const RegionID &regionID);
 */
void CProxySection_ParFUMShadowArray::unlockForRemote(const RegionID &regionID, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const RegionID &regionID
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<RegionID>::type>::type &)regionID;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<RegionID>::type>::type &)regionID;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ParFUMShadowArray::idx_unlockForRemote_marshall5(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void unpendForRemote(const RegionID &regionID);
 */
void CProxySection_ParFUMShadowArray::unpendForRemote(const RegionID &regionID, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const RegionID &regionID
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<RegionID>::type>::type &)regionID;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<RegionID>::type>::type &)regionID;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ParFUMShadowArray::idx_unpendForRemote_marshall6(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void unlockReply(int remoteChunk, const RegionID &regionID);
 */
void CProxySection_ParFUMShadowArray::unlockReply(int remoteChunk, const RegionID &regionID, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int remoteChunk, const RegionID &regionID
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|remoteChunk;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<RegionID>::type>::type &)regionID;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|remoteChunk;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<RegionID>::type>::type &)regionID;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ParFUMShadowArray::idx_unlockReply_marshall7(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync adaptAdjMsg* remote_bulk_edge_bisect_2D(const adaptAdj &nbrElem, const adaptAdj &splitElem, int new_idxl, int n1_idxl, int n2_idxl, int partitionID);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync void remote_adaptAdj_replace(const adaptAdj &elem, const adaptAdj &oldElem, const adaptAdj &newElem);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync void remote_edgeAdj_replace(int remotePartID, const adaptAdj &adj, const adaptAdj &elem, const adaptAdj &splitElem, int n1_idxl, int n2_idxl);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync void remote_edgeAdj_add(int remotePartID, const adaptAdj &elem, const adaptAdj &splitElem, int n1_idxl, int n2_idxl);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recv_split_3D(int pos, int tableID, const adaptAdj &elem, const adaptAdj &splitElem);
 */
void CProxySection_ParFUMShadowArray::recv_split_3D(int pos, int tableID, const adaptAdj &elem, const adaptAdj &splitElem, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int pos, int tableID, const adaptAdj &elem, const adaptAdj &splitElem
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|pos;
    implP|tableID;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<adaptAdj>::type>::type &)elem;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<adaptAdj>::type>::type &)splitElem;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|pos;
    implP|tableID;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<adaptAdj>::type>::type &)elem;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<adaptAdj>::type>::type &)splitElem;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ParFUMShadowArray::idx_recv_split_3D_marshall12(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void handle_split_3D(int remotePartID, int pos, int tableID, const adaptAdj &elem, const RegionID &lockRegionID, int n1_idxl, int n2_idxl, int n5_idxl);
 */
void CProxySection_ParFUMShadowArray::handle_split_3D(int remotePartID, int pos, int tableID, const adaptAdj &elem, const RegionID &lockRegionID, int n1_idxl, int n2_idxl, int n5_idxl, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int remotePartID, int pos, int tableID, const adaptAdj &elem, const RegionID &lockRegionID, int n1_idxl, int n2_idxl, int n5_idxl
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|remotePartID;
    implP|pos;
    implP|tableID;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<adaptAdj>::type>::type &)elem;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<RegionID>::type>::type &)lockRegionID;
    implP|n1_idxl;
    implP|n2_idxl;
    implP|n5_idxl;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|remotePartID;
    implP|pos;
    implP|tableID;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<adaptAdj>::type>::type &)elem;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<RegionID>::type>::type &)lockRegionID;
    implP|n1_idxl;
    implP|n2_idxl;
    implP|n5_idxl;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ParFUMShadowArray::idx_handle_split_3D_marshall13(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded sync void recv_splits(int tableID, int expectedSplits);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync longestMsg* isLongest(int elem, int elemType, double len);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void update_asterisk_3D(int remotePartID, int i, const adaptAdj &elem, int numElemPairs, const adaptAdj *elemPairs, const RegionID &lockRegionID, int n1_idxl, int n2_idxl, int n5_idxl);
 */
void CProxySection_ParFUMShadowArray::update_asterisk_3D(int remotePartID, int i, const adaptAdj &elem, int numElemPairs, const adaptAdj *elemPairs, const RegionID &lockRegionID, int n1_idxl, int n2_idxl, int n5_idxl, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int remotePartID, int i, const adaptAdj &elem, int numElemPairs, const adaptAdj *elemPairs, const RegionID &lockRegionID, int n1_idxl, int n2_idxl, int n5_idxl
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_elemPairs, impl_cnt_elemPairs;
  impl_off_elemPairs=impl_off=CK_ALIGN(impl_off,sizeof(adaptAdj));
  impl_off+=(impl_cnt_elemPairs=sizeof(adaptAdj)*(2*numElemPairs));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|remotePartID;
    implP|i;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<adaptAdj>::type>::type &)elem;
    implP|numElemPairs;
    implP|impl_off_elemPairs;
    implP|impl_cnt_elemPairs;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<RegionID>::type>::type &)lockRegionID;
    implP|n1_idxl;
    implP|n2_idxl;
    implP|n5_idxl;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|remotePartID;
    implP|i;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<adaptAdj>::type>::type &)elem;
    implP|numElemPairs;
    implP|impl_off_elemPairs;
    implP|impl_cnt_elemPairs;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<RegionID>::type>::type &)lockRegionID;
    implP|n1_idxl;
    implP|n2_idxl;
    implP|n5_idxl;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_elemPairs,elemPairs,impl_cnt_elemPairs);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_ParFUMShadowArray::idx_update_asterisk_3D_marshall16(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: ParFUMShadowArray(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_ParFUMShadowArray::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeArray);
  CkRegisterArrayDimensions(__idx, 1);
  CkRegisterBase(__idx, CkIndex_ArrayElement::__idx);
  // REG: ParFUMShadowArray(int s, int i);
  idx_ParFUMShadowArray_marshall1();

  // REG: void setFemMesh(FEMMeshMsg* impl_msg);
  idx_setFemMesh_FEMMeshMsg();

  // REG: void lockRegionForRemote(const RegionID &regionID, const int *sharedIdxls, int numSharedIdxls, const adaptAdj *elements, int numElements);
  idx_lockRegionForRemote_marshall3();

  // REG: void lockReply(int remoteChunk, const RegionID &regionID, const bool &success, int tag, int otherSuccess);
  idx_lockReply_marshall4();

  // REG: void unlockForRemote(const RegionID &regionID);
  idx_unlockForRemote_marshall5();

  // REG: void unpendForRemote(const RegionID &regionID);
  idx_unpendForRemote_marshall6();

  // REG: void unlockReply(int remoteChunk, const RegionID &regionID);
  idx_unlockReply_marshall7();

  // REG: sync adaptAdjMsg* remote_bulk_edge_bisect_2D(const adaptAdj &nbrElem, const adaptAdj &splitElem, int new_idxl, int n1_idxl, int n2_idxl, int partitionID);
  idx_remote_bulk_edge_bisect_2D_marshall8();

  // REG: sync void remote_adaptAdj_replace(const adaptAdj &elem, const adaptAdj &oldElem, const adaptAdj &newElem);
  idx_remote_adaptAdj_replace_marshall9();

  // REG: sync void remote_edgeAdj_replace(int remotePartID, const adaptAdj &adj, const adaptAdj &elem, const adaptAdj &splitElem, int n1_idxl, int n2_idxl);
  idx_remote_edgeAdj_replace_marshall10();

  // REG: sync void remote_edgeAdj_add(int remotePartID, const adaptAdj &elem, const adaptAdj &splitElem, int n1_idxl, int n2_idxl);
  idx_remote_edgeAdj_add_marshall11();

  // REG: void recv_split_3D(int pos, int tableID, const adaptAdj &elem, const adaptAdj &splitElem);
  idx_recv_split_3D_marshall12();

  // REG: void handle_split_3D(int remotePartID, int pos, int tableID, const adaptAdj &elem, const RegionID &lockRegionID, int n1_idxl, int n2_idxl, int n5_idxl);
  idx_handle_split_3D_marshall13();

  // REG: threaded sync void recv_splits(int tableID, int expectedSplits);
  idx_recv_splits_marshall14();

  // REG: sync longestMsg* isLongest(int elem, int elemType, double len);
  idx_isLongest_marshall15();

  // REG: void update_asterisk_3D(int remotePartID, int i, const adaptAdj &elem, int numElemPairs, const adaptAdj *elemPairs, const RegionID &lockRegionID, int n1_idxl, int n2_idxl, int n5_idxl);
  idx_update_asterisk_3D_marshall16();

  // REG: ParFUMShadowArray(CkMigrateMessage* impl_msg);
  idx_ParFUMShadowArray_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_ParFUMShadowArray_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerParFUM_SA(void)
{
  static int _done = 0; if(_done) return; _done = 1;
  CkRegisterReadonly("meshSA","CProxy_ParFUMShadowArray",sizeof(meshSA),(void *) &meshSA,__xlater_roPup_meshSA);

/* REG: message lockChunksMsg{
int chkList[];
}
;
*/
CMessage_lockChunksMsg::__register("lockChunksMsg", sizeof(lockChunksMsg),(CkPackFnPtr) lockChunksMsg::pack,(CkUnpackFnPtr) lockChunksMsg::unpack);

/* REG: message adaptAdjMsg;
*/
CMessage_adaptAdjMsg::__register("adaptAdjMsg", sizeof(adaptAdjMsg),(CkPackFnPtr) adaptAdjMsg::pack,(CkUnpackFnPtr) adaptAdjMsg::unpack);

/* REG: message longestMsg;
*/
CMessage_longestMsg::__register("longestMsg", sizeof(longestMsg),(CkPackFnPtr) longestMsg::pack,(CkUnpackFnPtr) longestMsg::unpack);

/* REG: array ParFUMShadowArray: ArrayElement{
ParFUMShadowArray(int s, int i);
void setFemMesh(FEMMeshMsg* impl_msg);
void lockRegionForRemote(const RegionID &regionID, const int *sharedIdxls, int numSharedIdxls, const adaptAdj *elements, int numElements);
void lockReply(int remoteChunk, const RegionID &regionID, const bool &success, int tag, int otherSuccess);
void unlockForRemote(const RegionID &regionID);
void unpendForRemote(const RegionID &regionID);
void unlockReply(int remoteChunk, const RegionID &regionID);
sync adaptAdjMsg* remote_bulk_edge_bisect_2D(const adaptAdj &nbrElem, const adaptAdj &splitElem, int new_idxl, int n1_idxl, int n2_idxl, int partitionID);
sync void remote_adaptAdj_replace(const adaptAdj &elem, const adaptAdj &oldElem, const adaptAdj &newElem);
sync void remote_edgeAdj_replace(int remotePartID, const adaptAdj &adj, const adaptAdj &elem, const adaptAdj &splitElem, int n1_idxl, int n2_idxl);
sync void remote_edgeAdj_add(int remotePartID, const adaptAdj &elem, const adaptAdj &splitElem, int n1_idxl, int n2_idxl);
void recv_split_3D(int pos, int tableID, const adaptAdj &elem, const adaptAdj &splitElem);
void handle_split_3D(int remotePartID, int pos, int tableID, const adaptAdj &elem, const RegionID &lockRegionID, int n1_idxl, int n2_idxl, int n5_idxl);
threaded sync void recv_splits(int tableID, int expectedSplits);
sync longestMsg* isLongest(int elem, int elemType, double len);
void update_asterisk_3D(int remotePartID, int i, const adaptAdj &elem, int numElemPairs, const adaptAdj *elemPairs, const RegionID &lockRegionID, int n1_idxl, int n2_idxl, int n5_idxl);
ParFUMShadowArray(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_ParFUMShadowArray::__register("ParFUMShadowArray", sizeof(ParFUMShadowArray));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_ParFUMShadowArray::virtual_pup(PUP::er &p) {
    recursive_pup<ParFUMShadowArray>(dynamic_cast<ParFUMShadowArray*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
