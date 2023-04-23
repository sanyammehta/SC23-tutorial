#ifndef _DECL_ParFUM_SA_H_
#define _DECL_ParFUM_SA_H_
#include "charm++.h"
#include "envelope.h"
#include <memory>
#include "sdag.h"
/* DECLS: readonly CProxy_ParFUMShadowArray meshSA;
 */

#ifndef GROUPDEPNUM_DECLARED
# define GROUPDEPNUM_DECLARED
struct GroupDepNum
{
  int groupDepNum;
  explicit GroupDepNum(int g = 0) : groupDepNum{g} { }
  operator int() const { return groupDepNum; }
};
#endif
/* DECLS: message lockChunksMsg{
int chkList[];
}
;
 */
class lockChunksMsg;
class CMessage_lockChunksMsg:public CkMessage{
  public:
    static int __idx;
    void* operator new(size_t, void*p) { return p; }
    void* operator new(size_t);
    void* operator new(size_t, int*, const int);
    void* operator new(size_t, int*, const int, const GroupDepNum);
    void* operator new(size_t, int*);
#if CMK_MULTIPLE_DELETE
    void operator delete(void*p, void*){dealloc(p);}
    void operator delete(void*p){dealloc(p);}
    void operator delete(void*p, int*, const int){dealloc(p);}
    void operator delete(void*p, int*, const int, const GroupDepNum){dealloc(p);}
    void operator delete(void*p, int*){dealloc(p);}
#endif
    void operator delete(void*p, size_t){dealloc(p);}
    static void* alloc(int,size_t, int*, int, GroupDepNum);
    static void dealloc(void *p);
    CMessage_lockChunksMsg();
    static void *pack(lockChunksMsg *p);
    static lockChunksMsg* unpack(void* p);
    void *operator new(size_t, int);
    void *operator new(size_t, int, const int);
    void *operator new(size_t, int, const int, const GroupDepNum);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, int){dealloc(p);}
    void operator delete(void *p, int, const int){dealloc(p);}
    void operator delete(void *p, int, const int, const GroupDepNum){dealloc(p);}
#endif
    static void __register(const char *s, size_t size, CkPackFnPtr pack, CkUnpackFnPtr unpack) {
      __idx = CkRegisterMsg(s, pack, unpack, dealloc, size);
    }
};

#ifndef GROUPDEPNUM_DECLARED
# define GROUPDEPNUM_DECLARED
struct GroupDepNum
{
  int groupDepNum;
  explicit GroupDepNum(int g = 0) : groupDepNum{g} { }
  operator int() const { return groupDepNum; }
};
#endif
/* DECLS: message adaptAdjMsg;
 */
class adaptAdjMsg;
class CMessage_adaptAdjMsg:public CkMessage{
  public:
    static int __idx;
    void* operator new(size_t, void*p) { return p; }
    void* operator new(size_t);
    void* operator new(size_t, int*, const int);
    void* operator new(size_t, int*, const int, const GroupDepNum);
    void* operator new(size_t, int*);
#if CMK_MULTIPLE_DELETE
    void operator delete(void*p, void*){dealloc(p);}
    void operator delete(void*p){dealloc(p);}
    void operator delete(void*p, int*, const int){dealloc(p);}
    void operator delete(void*p, int*, const int, const GroupDepNum){dealloc(p);}
    void operator delete(void*p, int*){dealloc(p);}
#endif
    void operator delete(void*p, size_t){dealloc(p);}
    static void* alloc(int,size_t, int*, int, GroupDepNum);
    static void dealloc(void *p);
    CMessage_adaptAdjMsg();
    static void *pack(adaptAdjMsg *p);
    static adaptAdjMsg* unpack(void* p);
    void *operator new(size_t, const int);
    void *operator new(size_t, const int, const GroupDepNum);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, const int){dealloc(p);}
    void operator delete(void *p, const int, const GroupDepNum){dealloc(p);}
#endif
    static void __register(const char *s, size_t size, CkPackFnPtr pack, CkUnpackFnPtr unpack) {
      __idx = CkRegisterMsg(s, pack, unpack, dealloc, size);
    }
};

#ifndef GROUPDEPNUM_DECLARED
# define GROUPDEPNUM_DECLARED
struct GroupDepNum
{
  int groupDepNum;
  explicit GroupDepNum(int g = 0) : groupDepNum{g} { }
  operator int() const { return groupDepNum; }
};
#endif
/* DECLS: message longestMsg;
 */
class longestMsg;
class CMessage_longestMsg:public CkMessage{
  public:
    static int __idx;
    void* operator new(size_t, void*p) { return p; }
    void* operator new(size_t);
    void* operator new(size_t, int*, const int);
    void* operator new(size_t, int*, const int, const GroupDepNum);
    void* operator new(size_t, int*);
#if CMK_MULTIPLE_DELETE
    void operator delete(void*p, void*){dealloc(p);}
    void operator delete(void*p){dealloc(p);}
    void operator delete(void*p, int*, const int){dealloc(p);}
    void operator delete(void*p, int*, const int, const GroupDepNum){dealloc(p);}
    void operator delete(void*p, int*){dealloc(p);}
#endif
    void operator delete(void*p, size_t){dealloc(p);}
    static void* alloc(int,size_t, int*, int, GroupDepNum);
    static void dealloc(void *p);
    CMessage_longestMsg();
    static void *pack(longestMsg *p);
    static longestMsg* unpack(void* p);
    void *operator new(size_t, const int);
    void *operator new(size_t, const int, const GroupDepNum);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, const int){dealloc(p);}
    void operator delete(void *p, const int, const GroupDepNum){dealloc(p);}
#endif
    static void __register(const char *s, size_t size, CkPackFnPtr pack, CkUnpackFnPtr unpack) {
      __idx = CkRegisterMsg(s, pack, unpack, dealloc, size);
    }
};

/* DECLS: array ParFUMShadowArray: ArrayElement{
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
 class ParFUMShadowArray;
 class CkIndex_ParFUMShadowArray;
 class CProxy_ParFUMShadowArray;
 class CProxyElement_ParFUMShadowArray;
 class CProxySection_ParFUMShadowArray;
/* --------------- index object ------------------ */
class CkIndex_ParFUMShadowArray:public CkIndex_ArrayElement{
  public:
    typedef ParFUMShadowArray local_t;
    typedef CkIndex_ParFUMShadowArray index_t;
    typedef CProxy_ParFUMShadowArray proxy_t;
    typedef CProxyElement_ParFUMShadowArray element_t;
    typedef CProxySection_ParFUMShadowArray section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: ParFUMShadowArray(int s, int i);
     */
    // Entry point registration at startup
    
    static int reg_ParFUMShadowArray_marshall1();
    // Entry point index lookup
    
    inline static int idx_ParFUMShadowArray_marshall1() {
      static int epidx = reg_ParFUMShadowArray_marshall1();
      return epidx;
    }

    
    static int ckNew(int s, int i) { return idx_ParFUMShadowArray_marshall1(); }
    
    static void _call_ParFUMShadowArray_marshall1(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ParFUMShadowArray_marshall1(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_ParFUMShadowArray_marshall1(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_ParFUMShadowArray_marshall1(PUP::er &p,void *msg);
    /* DECLS: void setFemMesh(FEMMeshMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_setFemMesh_FEMMeshMsg();
    // Entry point index lookup
    
    inline static int idx_setFemMesh_FEMMeshMsg() {
      static int epidx = reg_setFemMesh_FEMMeshMsg();
      return epidx;
    }

    
    inline static int idx_setFemMesh(void (ParFUMShadowArray::*)(FEMMeshMsg* impl_msg) ) {
      return idx_setFemMesh_FEMMeshMsg();
    }


    
    static int setFemMesh(FEMMeshMsg* impl_msg) { return idx_setFemMesh_FEMMeshMsg(); }
    
    static void _call_setFemMesh_FEMMeshMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_setFemMesh_FEMMeshMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void lockRegionForRemote(const RegionID &regionID, const int *sharedIdxls, int numSharedIdxls, const adaptAdj *elements, int numElements);
     */
    // Entry point registration at startup
    
    static int reg_lockRegionForRemote_marshall3();
    // Entry point index lookup
    
    inline static int idx_lockRegionForRemote_marshall3() {
      static int epidx = reg_lockRegionForRemote_marshall3();
      return epidx;
    }

    
    inline static int idx_lockRegionForRemote(void (ParFUMShadowArray::*)(const RegionID &regionID, const int *sharedIdxls, int numSharedIdxls, const adaptAdj *elements, int numElements) ) {
      return idx_lockRegionForRemote_marshall3();
    }


    
    static int lockRegionForRemote(const RegionID &regionID, const int *sharedIdxls, int numSharedIdxls, const adaptAdj *elements, int numElements) { return idx_lockRegionForRemote_marshall3(); }
    
    static void _call_lockRegionForRemote_marshall3(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_lockRegionForRemote_marshall3(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_lockRegionForRemote_marshall3(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_lockRegionForRemote_marshall3(PUP::er &p,void *msg);
    /* DECLS: void lockReply(int remoteChunk, const RegionID &regionID, const bool &success, int tag, int otherSuccess);
     */
    // Entry point registration at startup
    
    static int reg_lockReply_marshall4();
    // Entry point index lookup
    
    inline static int idx_lockReply_marshall4() {
      static int epidx = reg_lockReply_marshall4();
      return epidx;
    }

    
    inline static int idx_lockReply(void (ParFUMShadowArray::*)(int remoteChunk, const RegionID &regionID, const bool &success, int tag, int otherSuccess) ) {
      return idx_lockReply_marshall4();
    }


    
    static int lockReply(int remoteChunk, const RegionID &regionID, const bool &success, int tag, int otherSuccess) { return idx_lockReply_marshall4(); }
    
    static void _call_lockReply_marshall4(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_lockReply_marshall4(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_lockReply_marshall4(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_lockReply_marshall4(PUP::er &p,void *msg);
    /* DECLS: void unlockForRemote(const RegionID &regionID);
     */
    // Entry point registration at startup
    
    static int reg_unlockForRemote_marshall5();
    // Entry point index lookup
    
    inline static int idx_unlockForRemote_marshall5() {
      static int epidx = reg_unlockForRemote_marshall5();
      return epidx;
    }

    
    inline static int idx_unlockForRemote(void (ParFUMShadowArray::*)(const RegionID &regionID) ) {
      return idx_unlockForRemote_marshall5();
    }


    
    static int unlockForRemote(const RegionID &regionID) { return idx_unlockForRemote_marshall5(); }
    
    static void _call_unlockForRemote_marshall5(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_unlockForRemote_marshall5(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_unlockForRemote_marshall5(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_unlockForRemote_marshall5(PUP::er &p,void *msg);
    /* DECLS: void unpendForRemote(const RegionID &regionID);
     */
    // Entry point registration at startup
    
    static int reg_unpendForRemote_marshall6();
    // Entry point index lookup
    
    inline static int idx_unpendForRemote_marshall6() {
      static int epidx = reg_unpendForRemote_marshall6();
      return epidx;
    }

    
    inline static int idx_unpendForRemote(void (ParFUMShadowArray::*)(const RegionID &regionID) ) {
      return idx_unpendForRemote_marshall6();
    }


    
    static int unpendForRemote(const RegionID &regionID) { return idx_unpendForRemote_marshall6(); }
    
    static void _call_unpendForRemote_marshall6(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_unpendForRemote_marshall6(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_unpendForRemote_marshall6(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_unpendForRemote_marshall6(PUP::er &p,void *msg);
    /* DECLS: void unlockReply(int remoteChunk, const RegionID &regionID);
     */
    // Entry point registration at startup
    
    static int reg_unlockReply_marshall7();
    // Entry point index lookup
    
    inline static int idx_unlockReply_marshall7() {
      static int epidx = reg_unlockReply_marshall7();
      return epidx;
    }

    
    inline static int idx_unlockReply(void (ParFUMShadowArray::*)(int remoteChunk, const RegionID &regionID) ) {
      return idx_unlockReply_marshall7();
    }


    
    static int unlockReply(int remoteChunk, const RegionID &regionID) { return idx_unlockReply_marshall7(); }
    
    static void _call_unlockReply_marshall7(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_unlockReply_marshall7(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_unlockReply_marshall7(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_unlockReply_marshall7(PUP::er &p,void *msg);
    /* DECLS: sync adaptAdjMsg* remote_bulk_edge_bisect_2D(const adaptAdj &nbrElem, const adaptAdj &splitElem, int new_idxl, int n1_idxl, int n2_idxl, int partitionID);
     */
    // Entry point registration at startup
    
    static int reg_remote_bulk_edge_bisect_2D_marshall8();
    // Entry point index lookup
    
    inline static int idx_remote_bulk_edge_bisect_2D_marshall8() {
      static int epidx = reg_remote_bulk_edge_bisect_2D_marshall8();
      return epidx;
    }

    
    inline static int idx_remote_bulk_edge_bisect_2D(adaptAdjMsg* (ParFUMShadowArray::*)(const adaptAdj &nbrElem, const adaptAdj &splitElem, int new_idxl, int n1_idxl, int n2_idxl, int partitionID) ) {
      return idx_remote_bulk_edge_bisect_2D_marshall8();
    }


    
    static int remote_bulk_edge_bisect_2D(const adaptAdj &nbrElem, const adaptAdj &splitElem, int new_idxl, int n1_idxl, int n2_idxl, int partitionID) { return idx_remote_bulk_edge_bisect_2D_marshall8(); }
    
    static void _call_remote_bulk_edge_bisect_2D_marshall8(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_remote_bulk_edge_bisect_2D_marshall8(void* impl_msg, void* impl_obj);
    
    static void _marshallmessagepup_remote_bulk_edge_bisect_2D_marshall8(PUP::er &p,void *msg);
    /* DECLS: sync void remote_adaptAdj_replace(const adaptAdj &elem, const adaptAdj &oldElem, const adaptAdj &newElem);
     */
    // Entry point registration at startup
    
    static int reg_remote_adaptAdj_replace_marshall9();
    // Entry point index lookup
    
    inline static int idx_remote_adaptAdj_replace_marshall9() {
      static int epidx = reg_remote_adaptAdj_replace_marshall9();
      return epidx;
    }

    
    inline static int idx_remote_adaptAdj_replace(void (ParFUMShadowArray::*)(const adaptAdj &elem, const adaptAdj &oldElem, const adaptAdj &newElem) ) {
      return idx_remote_adaptAdj_replace_marshall9();
    }


    
    static int remote_adaptAdj_replace(const adaptAdj &elem, const adaptAdj &oldElem, const adaptAdj &newElem) { return idx_remote_adaptAdj_replace_marshall9(); }
    
    static void _call_remote_adaptAdj_replace_marshall9(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_remote_adaptAdj_replace_marshall9(void* impl_msg, void* impl_obj);
    
    static void _marshallmessagepup_remote_adaptAdj_replace_marshall9(PUP::er &p,void *msg);
    /* DECLS: sync void remote_edgeAdj_replace(int remotePartID, const adaptAdj &adj, const adaptAdj &elem, const adaptAdj &splitElem, int n1_idxl, int n2_idxl);
     */
    // Entry point registration at startup
    
    static int reg_remote_edgeAdj_replace_marshall10();
    // Entry point index lookup
    
    inline static int idx_remote_edgeAdj_replace_marshall10() {
      static int epidx = reg_remote_edgeAdj_replace_marshall10();
      return epidx;
    }

    
    inline static int idx_remote_edgeAdj_replace(void (ParFUMShadowArray::*)(int remotePartID, const adaptAdj &adj, const adaptAdj &elem, const adaptAdj &splitElem, int n1_idxl, int n2_idxl) ) {
      return idx_remote_edgeAdj_replace_marshall10();
    }


    
    static int remote_edgeAdj_replace(int remotePartID, const adaptAdj &adj, const adaptAdj &elem, const adaptAdj &splitElem, int n1_idxl, int n2_idxl) { return idx_remote_edgeAdj_replace_marshall10(); }
    
    static void _call_remote_edgeAdj_replace_marshall10(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_remote_edgeAdj_replace_marshall10(void* impl_msg, void* impl_obj);
    
    static void _marshallmessagepup_remote_edgeAdj_replace_marshall10(PUP::er &p,void *msg);
    /* DECLS: sync void remote_edgeAdj_add(int remotePartID, const adaptAdj &elem, const adaptAdj &splitElem, int n1_idxl, int n2_idxl);
     */
    // Entry point registration at startup
    
    static int reg_remote_edgeAdj_add_marshall11();
    // Entry point index lookup
    
    inline static int idx_remote_edgeAdj_add_marshall11() {
      static int epidx = reg_remote_edgeAdj_add_marshall11();
      return epidx;
    }

    
    inline static int idx_remote_edgeAdj_add(void (ParFUMShadowArray::*)(int remotePartID, const adaptAdj &elem, const adaptAdj &splitElem, int n1_idxl, int n2_idxl) ) {
      return idx_remote_edgeAdj_add_marshall11();
    }


    
    static int remote_edgeAdj_add(int remotePartID, const adaptAdj &elem, const adaptAdj &splitElem, int n1_idxl, int n2_idxl) { return idx_remote_edgeAdj_add_marshall11(); }
    
    static void _call_remote_edgeAdj_add_marshall11(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_remote_edgeAdj_add_marshall11(void* impl_msg, void* impl_obj);
    
    static void _marshallmessagepup_remote_edgeAdj_add_marshall11(PUP::er &p,void *msg);
    /* DECLS: void recv_split_3D(int pos, int tableID, const adaptAdj &elem, const adaptAdj &splitElem);
     */
    // Entry point registration at startup
    
    static int reg_recv_split_3D_marshall12();
    // Entry point index lookup
    
    inline static int idx_recv_split_3D_marshall12() {
      static int epidx = reg_recv_split_3D_marshall12();
      return epidx;
    }

    
    inline static int idx_recv_split_3D(void (ParFUMShadowArray::*)(int pos, int tableID, const adaptAdj &elem, const adaptAdj &splitElem) ) {
      return idx_recv_split_3D_marshall12();
    }


    
    static int recv_split_3D(int pos, int tableID, const adaptAdj &elem, const adaptAdj &splitElem) { return idx_recv_split_3D_marshall12(); }
    
    static void _call_recv_split_3D_marshall12(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recv_split_3D_marshall12(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_recv_split_3D_marshall12(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_recv_split_3D_marshall12(PUP::er &p,void *msg);
    /* DECLS: void handle_split_3D(int remotePartID, int pos, int tableID, const adaptAdj &elem, const RegionID &lockRegionID, int n1_idxl, int n2_idxl, int n5_idxl);
     */
    // Entry point registration at startup
    
    static int reg_handle_split_3D_marshall13();
    // Entry point index lookup
    
    inline static int idx_handle_split_3D_marshall13() {
      static int epidx = reg_handle_split_3D_marshall13();
      return epidx;
    }

    
    inline static int idx_handle_split_3D(void (ParFUMShadowArray::*)(int remotePartID, int pos, int tableID, const adaptAdj &elem, const RegionID &lockRegionID, int n1_idxl, int n2_idxl, int n5_idxl) ) {
      return idx_handle_split_3D_marshall13();
    }


    
    static int handle_split_3D(int remotePartID, int pos, int tableID, const adaptAdj &elem, const RegionID &lockRegionID, int n1_idxl, int n2_idxl, int n5_idxl) { return idx_handle_split_3D_marshall13(); }
    
    static void _call_handle_split_3D_marshall13(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_handle_split_3D_marshall13(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_handle_split_3D_marshall13(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_handle_split_3D_marshall13(PUP::er &p,void *msg);
    /* DECLS: threaded sync void recv_splits(int tableID, int expectedSplits);
     */
    // Entry point registration at startup
    
    static int reg_recv_splits_marshall14();
    // Entry point index lookup
    
    inline static int idx_recv_splits_marshall14() {
      static int epidx = reg_recv_splits_marshall14();
      return epidx;
    }

    
    inline static int idx_recv_splits(void (ParFUMShadowArray::*)(int tableID, int expectedSplits) ) {
      return idx_recv_splits_marshall14();
    }


    
    static int recv_splits(int tableID, int expectedSplits) { return idx_recv_splits_marshall14(); }
    
    static void _call_recv_splits_marshall14(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recv_splits_marshall14(void* impl_msg, void* impl_obj);
    
    static void _callthr_recv_splits_marshall14(CkThrCallArg *);
    
    static void _marshallmessagepup_recv_splits_marshall14(PUP::er &p,void *msg);
    /* DECLS: sync longestMsg* isLongest(int elem, int elemType, double len);
     */
    // Entry point registration at startup
    
    static int reg_isLongest_marshall15();
    // Entry point index lookup
    
    inline static int idx_isLongest_marshall15() {
      static int epidx = reg_isLongest_marshall15();
      return epidx;
    }

    
    inline static int idx_isLongest(longestMsg* (ParFUMShadowArray::*)(int elem, int elemType, double len) ) {
      return idx_isLongest_marshall15();
    }


    
    static int isLongest(int elem, int elemType, double len) { return idx_isLongest_marshall15(); }
    
    static void _call_isLongest_marshall15(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_isLongest_marshall15(void* impl_msg, void* impl_obj);
    
    static void _marshallmessagepup_isLongest_marshall15(PUP::er &p,void *msg);
    /* DECLS: void update_asterisk_3D(int remotePartID, int i, const adaptAdj &elem, int numElemPairs, const adaptAdj *elemPairs, const RegionID &lockRegionID, int n1_idxl, int n2_idxl, int n5_idxl);
     */
    // Entry point registration at startup
    
    static int reg_update_asterisk_3D_marshall16();
    // Entry point index lookup
    
    inline static int idx_update_asterisk_3D_marshall16() {
      static int epidx = reg_update_asterisk_3D_marshall16();
      return epidx;
    }

    
    inline static int idx_update_asterisk_3D(void (ParFUMShadowArray::*)(int remotePartID, int i, const adaptAdj &elem, int numElemPairs, const adaptAdj *elemPairs, const RegionID &lockRegionID, int n1_idxl, int n2_idxl, int n5_idxl) ) {
      return idx_update_asterisk_3D_marshall16();
    }


    
    static int update_asterisk_3D(int remotePartID, int i, const adaptAdj &elem, int numElemPairs, const adaptAdj *elemPairs, const RegionID &lockRegionID, int n1_idxl, int n2_idxl, int n5_idxl) { return idx_update_asterisk_3D_marshall16(); }
    
    static void _call_update_asterisk_3D_marshall16(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_update_asterisk_3D_marshall16(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_update_asterisk_3D_marshall16(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_update_asterisk_3D_marshall16(PUP::er &p,void *msg);
    /* DECLS: ParFUMShadowArray(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_ParFUMShadowArray_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_ParFUMShadowArray_CkMigrateMessage() {
      static int epidx = reg_ParFUMShadowArray_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_ParFUMShadowArray_CkMigrateMessage(); }
    
    static void _call_ParFUMShadowArray_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ParFUMShadowArray_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
 class CProxyElement_ParFUMShadowArray : public CProxyElement_ArrayElement{
  public:
    typedef ParFUMShadowArray local_t;
    typedef CkIndex_ParFUMShadowArray index_t;
    typedef CProxy_ParFUMShadowArray proxy_t;
    typedef CProxyElement_ParFUMShadowArray element_t;
    typedef CProxySection_ParFUMShadowArray section_t;

    using array_index_t = CkArrayIndex1D;

    /* TRAM aggregators */

    CProxyElement_ParFUMShadowArray(void) {
    }
    CProxyElement_ParFUMShadowArray(const ArrayElement *e) : CProxyElement_ArrayElement(e){
    }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxyElement_ArrayElement::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxyElement_ArrayElement::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxyElement_ArrayElement::pup(p);
    }

    int ckIsDelegated(void) const
    { return CProxyElement_ArrayElement::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxyElement_ArrayElement::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxyElement_ArrayElement::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxyElement_ArrayElement::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxyElement_ArrayElement::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxyElement_ArrayElement::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxyElement_ArrayElement::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxyElement_ArrayElement::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(CkArrayOptions opts = CkArrayOptions())
    { return CProxyElement_ArrayElement::ckCreateEmptyArray(opts); }
    inline static void ckCreateEmptyArrayAsync(CkCallback cb, CkArrayOptions opts = CkArrayOptions())
    { CProxyElement_ArrayElement::ckCreateEmptyArrayAsync(cb, opts); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxyElement_ArrayElement::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxyElement_ArrayElement::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxyElement_ArrayElement::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxyElement_ArrayElement::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_ArrayElement::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_ArrayElement::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxyElement_ArrayElement::ckSetReductionClient(cb); }

    inline void ckInsert(CkArrayMessage *m,int ctor,int onPe)
    { CProxyElement_ArrayElement::ckInsert(m,ctor,onPe); }
    inline void ckSend(CkArrayMessage *m, int ep, int opts = 0) const
    { CProxyElement_ArrayElement::ckSend(m,ep,opts); }
    inline void *ckSendSync(CkArrayMessage *m, int ep) const
    { return CProxyElement_ArrayElement::ckSendSync(m,ep); }
    inline const CkArrayIndex &ckGetIndex() const
    { return CProxyElement_ArrayElement::ckGetIndex(); }

    ParFUMShadowArray *ckLocal(void) const
    { return (ParFUMShadowArray *)CProxyElement_ArrayElement::ckLocal(); }

    CProxyElement_ParFUMShadowArray(const CkArrayID &aid,const CkArrayIndex1D &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_ParFUMShadowArray(const CkArrayID &aid,const CkArrayIndex1D &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}

    CProxyElement_ParFUMShadowArray(const CkArrayID &aid,const CkArrayIndex &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_ParFUMShadowArray(const CkArrayID &aid,const CkArrayIndex &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}
/* DECLS: ParFUMShadowArray(int s, int i);
 */
    
    void insert(int s, int i, int onPE=-1, const CkEntryOptions *impl_e_opts=NULL);
/* DECLS: void setFemMesh(FEMMeshMsg* impl_msg);
 */
    
    void setFemMesh(FEMMeshMsg* impl_msg) ;

/* DECLS: void lockRegionForRemote(const RegionID &regionID, const int *sharedIdxls, int numSharedIdxls, const adaptAdj *elements, int numElements);
 */
    
    void lockRegionForRemote(const RegionID &regionID, const int *sharedIdxls, int numSharedIdxls, const adaptAdj *elements, int numElements, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void lockReply(int remoteChunk, const RegionID &regionID, const bool &success, int tag, int otherSuccess);
 */
    
    void lockReply(int remoteChunk, const RegionID &regionID, const bool &success, int tag, int otherSuccess, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void unlockForRemote(const RegionID &regionID);
 */
    
    void unlockForRemote(const RegionID &regionID, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void unpendForRemote(const RegionID &regionID);
 */
    
    void unpendForRemote(const RegionID &regionID, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void unlockReply(int remoteChunk, const RegionID &regionID);
 */
    
    void unlockReply(int remoteChunk, const RegionID &regionID, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: sync adaptAdjMsg* remote_bulk_edge_bisect_2D(const adaptAdj &nbrElem, const adaptAdj &splitElem, int new_idxl, int n1_idxl, int n2_idxl, int partitionID);
 */
    
    adaptAdjMsg* remote_bulk_edge_bisect_2D(const adaptAdj &nbrElem, const adaptAdj &splitElem, int new_idxl, int n1_idxl, int n2_idxl, int partitionID, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: sync void remote_adaptAdj_replace(const adaptAdj &elem, const adaptAdj &oldElem, const adaptAdj &newElem);
 */
    
    void remote_adaptAdj_replace(const adaptAdj &elem, const adaptAdj &oldElem, const adaptAdj &newElem, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: sync void remote_edgeAdj_replace(int remotePartID, const adaptAdj &adj, const adaptAdj &elem, const adaptAdj &splitElem, int n1_idxl, int n2_idxl);
 */
    
    void remote_edgeAdj_replace(int remotePartID, const adaptAdj &adj, const adaptAdj &elem, const adaptAdj &splitElem, int n1_idxl, int n2_idxl, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: sync void remote_edgeAdj_add(int remotePartID, const adaptAdj &elem, const adaptAdj &splitElem, int n1_idxl, int n2_idxl);
 */
    
    void remote_edgeAdj_add(int remotePartID, const adaptAdj &elem, const adaptAdj &splitElem, int n1_idxl, int n2_idxl, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void recv_split_3D(int pos, int tableID, const adaptAdj &elem, const adaptAdj &splitElem);
 */
    
    void recv_split_3D(int pos, int tableID, const adaptAdj &elem, const adaptAdj &splitElem, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void handle_split_3D(int remotePartID, int pos, int tableID, const adaptAdj &elem, const RegionID &lockRegionID, int n1_idxl, int n2_idxl, int n5_idxl);
 */
    
    void handle_split_3D(int remotePartID, int pos, int tableID, const adaptAdj &elem, const RegionID &lockRegionID, int n1_idxl, int n2_idxl, int n5_idxl, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: threaded sync void recv_splits(int tableID, int expectedSplits);
 */
    
    void recv_splits(int tableID, int expectedSplits, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: sync longestMsg* isLongest(int elem, int elemType, double len);
 */
    
    longestMsg* isLongest(int elem, int elemType, double len, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void update_asterisk_3D(int remotePartID, int i, const adaptAdj &elem, int numElemPairs, const adaptAdj *elemPairs, const RegionID &lockRegionID, int n1_idxl, int n2_idxl, int n5_idxl);
 */
    
    void update_asterisk_3D(int remotePartID, int i, const adaptAdj &elem, int numElemPairs, const adaptAdj *elemPairs, const RegionID &lockRegionID, int n1_idxl, int n2_idxl, int n5_idxl, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: ParFUMShadowArray(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- collective proxy -------------- */
 class CProxy_ParFUMShadowArray : public CProxy_ArrayElement{
  public:
    typedef ParFUMShadowArray local_t;
    typedef CkIndex_ParFUMShadowArray index_t;
    typedef CProxy_ParFUMShadowArray proxy_t;
    typedef CProxyElement_ParFUMShadowArray element_t;
    typedef CProxySection_ParFUMShadowArray section_t;

    using array_index_t = CkArrayIndex1D;
    CProxy_ParFUMShadowArray(void) {
    }
    CProxy_ParFUMShadowArray(const ArrayElement *e) : CProxy_ArrayElement(e){
    }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_ArrayElement::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_ArrayElement::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_ArrayElement::pup(p);
    }

    int ckIsDelegated(void) const
    { return CProxy_ArrayElement::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_ArrayElement::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_ArrayElement::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_ArrayElement::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxy_ArrayElement::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxy_ArrayElement::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxy_ArrayElement::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxy_ArrayElement::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(CkArrayOptions opts = CkArrayOptions())
    { return CProxy_ArrayElement::ckCreateEmptyArray(opts); }
    inline static void ckCreateEmptyArrayAsync(CkCallback cb, CkArrayOptions opts = CkArrayOptions())
    { CProxy_ArrayElement::ckCreateEmptyArrayAsync(cb, opts); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxy_ArrayElement::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxy_ArrayElement::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxy_ArrayElement::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxy_ArrayElement::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_ArrayElement::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_ArrayElement::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxy_ArrayElement::ckSetReductionClient(cb); }

    // Empty array construction
    static CkArrayID ckNew(CkArrayOptions opts = CkArrayOptions()) { return ckCreateEmptyArray(opts); }
    static void      ckNew(CkCallback cb, CkArrayOptions opts = CkArrayOptions()) { ckCreateEmptyArrayAsync(cb, opts); }

    // Generalized array indexing:
    CProxyElement_ParFUMShadowArray operator [] (const CkArrayIndex1D &idx) const
    { return CProxyElement_ParFUMShadowArray(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_ParFUMShadowArray operator() (const CkArrayIndex1D &idx) const
    { return CProxyElement_ParFUMShadowArray(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_ParFUMShadowArray operator [] (int idx) const 
        {return CProxyElement_ParFUMShadowArray(ckGetArrayID(), CkArrayIndex1D(idx), CK_DELCTOR_CALL);}
    CProxyElement_ParFUMShadowArray operator () (int idx) const 
        {return CProxyElement_ParFUMShadowArray(ckGetArrayID(), CkArrayIndex1D(idx), CK_DELCTOR_CALL);}
    CProxy_ParFUMShadowArray(const CkArrayID &aid,CK_DELCTOR_PARAM) 
        :CProxy_ArrayElement(aid,CK_DELCTOR_ARGS) {}
    CProxy_ParFUMShadowArray(const CkArrayID &aid) 
        :CProxy_ArrayElement(aid) {}
/* DECLS: ParFUMShadowArray(int s, int i);
 */
    
    static CkArrayID ckNew(int s, int i, const CkArrayOptions &opts = CkArrayOptions(), const CkEntryOptions *impl_e_opts=NULL);
    static void      ckNew(int s, int i, const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);
    static CkArrayID ckNew(int s, int i, const int s1, const CkEntryOptions *impl_e_opts=NULL);
    static void ckNew(int s, int i, const int s1, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void setFemMesh(FEMMeshMsg* impl_msg);
 */
    
    void setFemMesh(FEMMeshMsg* impl_msg) ;

/* DECLS: void lockRegionForRemote(const RegionID &regionID, const int *sharedIdxls, int numSharedIdxls, const adaptAdj *elements, int numElements);
 */
    
    void lockRegionForRemote(const RegionID &regionID, const int *sharedIdxls, int numSharedIdxls, const adaptAdj *elements, int numElements, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void lockReply(int remoteChunk, const RegionID &regionID, const bool &success, int tag, int otherSuccess);
 */
    
    void lockReply(int remoteChunk, const RegionID &regionID, const bool &success, int tag, int otherSuccess, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void unlockForRemote(const RegionID &regionID);
 */
    
    void unlockForRemote(const RegionID &regionID, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void unpendForRemote(const RegionID &regionID);
 */
    
    void unpendForRemote(const RegionID &regionID, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void unlockReply(int remoteChunk, const RegionID &regionID);
 */
    
    void unlockReply(int remoteChunk, const RegionID &regionID, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: sync adaptAdjMsg* remote_bulk_edge_bisect_2D(const adaptAdj &nbrElem, const adaptAdj &splitElem, int new_idxl, int n1_idxl, int n2_idxl, int partitionID);
 */

/* DECLS: sync void remote_adaptAdj_replace(const adaptAdj &elem, const adaptAdj &oldElem, const adaptAdj &newElem);
 */

/* DECLS: sync void remote_edgeAdj_replace(int remotePartID, const adaptAdj &adj, const adaptAdj &elem, const adaptAdj &splitElem, int n1_idxl, int n2_idxl);
 */

/* DECLS: sync void remote_edgeAdj_add(int remotePartID, const adaptAdj &elem, const adaptAdj &splitElem, int n1_idxl, int n2_idxl);
 */

/* DECLS: void recv_split_3D(int pos, int tableID, const adaptAdj &elem, const adaptAdj &splitElem);
 */
    
    void recv_split_3D(int pos, int tableID, const adaptAdj &elem, const adaptAdj &splitElem, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void handle_split_3D(int remotePartID, int pos, int tableID, const adaptAdj &elem, const RegionID &lockRegionID, int n1_idxl, int n2_idxl, int n5_idxl);
 */
    
    void handle_split_3D(int remotePartID, int pos, int tableID, const adaptAdj &elem, const RegionID &lockRegionID, int n1_idxl, int n2_idxl, int n5_idxl, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: threaded sync void recv_splits(int tableID, int expectedSplits);
 */

/* DECLS: sync longestMsg* isLongest(int elem, int elemType, double len);
 */

/* DECLS: void update_asterisk_3D(int remotePartID, int i, const adaptAdj &elem, int numElemPairs, const adaptAdj *elemPairs, const RegionID &lockRegionID, int n1_idxl, int n2_idxl, int n5_idxl);
 */
    
    void update_asterisk_3D(int remotePartID, int i, const adaptAdj &elem, int numElemPairs, const adaptAdj *elemPairs, const RegionID &lockRegionID, int n1_idxl, int n2_idxl, int n5_idxl, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: ParFUMShadowArray(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- section proxy -------------- */
 class CProxySection_ParFUMShadowArray : public CProxySection_ArrayElement{
  public:
    typedef ParFUMShadowArray local_t;
    typedef CkIndex_ParFUMShadowArray index_t;
    typedef CProxy_ParFUMShadowArray proxy_t;
    typedef CProxyElement_ParFUMShadowArray element_t;
    typedef CProxySection_ParFUMShadowArray section_t;

    using array_index_t = CkArrayIndex1D;
    CProxySection_ParFUMShadowArray(void) {
    }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxySection_ArrayElement::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxySection_ArrayElement::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxySection_ArrayElement::pup(p);
    }

    int ckIsDelegated(void) const
    { return CProxySection_ArrayElement::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxySection_ArrayElement::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxySection_ArrayElement::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxySection_ArrayElement::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxySection_ArrayElement::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxySection_ArrayElement::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxySection_ArrayElement::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxySection_ArrayElement::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(CkArrayOptions opts = CkArrayOptions())
    { return CProxySection_ArrayElement::ckCreateEmptyArray(opts); }
    inline static void ckCreateEmptyArrayAsync(CkCallback cb, CkArrayOptions opts = CkArrayOptions())
    { CProxySection_ArrayElement::ckCreateEmptyArrayAsync(cb, opts); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxySection_ArrayElement::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxySection_ArrayElement::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxySection_ArrayElement::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxySection_ArrayElement::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_ArrayElement::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_ArrayElement::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxySection_ArrayElement::ckSetReductionClient(cb); }

    inline void ckSend(CkArrayMessage *m, int ep, int opts = 0)
    { CProxySection_ArrayElement::ckSend(m,ep,opts); }
    inline CkSectionInfo &ckGetSectionInfo()
    { return CProxySection_ArrayElement::ckGetSectionInfo(); }
    inline CkSectionID *ckGetSectionIDs()
    { return CProxySection_ArrayElement::ckGetSectionIDs(); }
    inline CkSectionID &ckGetSectionID()
    { return CProxySection_ArrayElement::ckGetSectionID(); }
    inline CkSectionID &ckGetSectionID(int i)
    { return CProxySection_ArrayElement::ckGetSectionID(i); }
    inline CkArrayID ckGetArrayIDn(int i) const
    { return CProxySection_ArrayElement::ckGetArrayIDn(i); } 
    inline CkArrayIndex *ckGetArrayElements() const
    { return CProxySection_ArrayElement::ckGetArrayElements(); }
    inline CkArrayIndex *ckGetArrayElements(int i) const
    { return CProxySection_ArrayElement::ckGetArrayElements(i); }
    inline int ckGetNumElements() const
    { return CProxySection_ArrayElement::ckGetNumElements(); } 
    inline int ckGetNumElements(int i) const
    { return CProxySection_ArrayElement::ckGetNumElements(i); }    // Generalized array indexing:
    CProxyElement_ParFUMShadowArray operator [] (const CkArrayIndex1D &idx) const
        {return CProxyElement_ParFUMShadowArray(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_ParFUMShadowArray operator() (const CkArrayIndex1D &idx) const
        {return CProxyElement_ParFUMShadowArray(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_ParFUMShadowArray operator [] (int idx) const 
        {return CProxyElement_ParFUMShadowArray(ckGetArrayID(), *(CkArrayIndex1D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
    CProxyElement_ParFUMShadowArray operator () (int idx) const 
        {return CProxyElement_ParFUMShadowArray(ckGetArrayID(), *(CkArrayIndex1D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex1D *elems, int nElems, int factor=USE_DEFAULT_BRANCH_FACTOR) {
      return CkSectionID(aid, elems, nElems, factor);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, const std::vector<CkArrayIndex1D> &elems, int factor=USE_DEFAULT_BRANCH_FACTOR) {
      return CkSectionID(aid, elems, factor);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, int l, int u, int s, int factor=USE_DEFAULT_BRANCH_FACTOR) {
      std::vector<CkArrayIndex1D> al;
      for (int i=l; i<=u; i+=s) al.emplace_back(i);
      return CkSectionID(aid, al, factor);
    } 
    CProxySection_ParFUMShadowArray(const CkArrayID &aid, CkArrayIndex *elems, int nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_ParFUMShadowArray(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_ParFUMShadowArray(const CkArrayID &aid, CkArrayIndex *elems, int nElems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_ArrayElement(aid,elems,nElems, factor) {}
    CProxySection_ParFUMShadowArray(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_ArrayElement(aid,elems, factor) { ckAutoDelegate(); }
    CProxySection_ParFUMShadowArray(const CkSectionID &sid)  
        :CProxySection_ArrayElement(sid) { ckAutoDelegate(); }
    CProxySection_ParFUMShadowArray(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(n,aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_ParFUMShadowArray(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_ParFUMShadowArray(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems) 
        :CProxySection_ArrayElement(n,aid,elems,nElems) { ckAutoDelegate(); }
    CProxySection_ParFUMShadowArray(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems) 
        :CProxySection_ArrayElement(aid,elems) { ckAutoDelegate(); }
    CProxySection_ParFUMShadowArray(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, int factor) 
        :CProxySection_ArrayElement(n,aid,elems,nElems, factor) { ckAutoDelegate(); }
    CProxySection_ParFUMShadowArray(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, int factor) 
        :CProxySection_ArrayElement(aid,elems, factor) { ckAutoDelegate(); }
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex *elems, int nElems) {
      return CkSectionID(aid, elems, nElems);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems) {
       return CkSectionID(aid, elems);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex *elems, int nElems, int factor) {
      return CkSectionID(aid, elems, nElems, factor);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, int factor) {
      return CkSectionID(aid, elems, factor);
    } 
    void ckAutoDelegate(int opts=1) {
      if(ckIsDelegated()) return;
      CProxySection_ArrayElement::ckAutoDelegate(opts);
    } 
    void setReductionClient(CkCallback *cb) {
      CProxySection_ArrayElement::setReductionClient(cb);
    } 
    void resetSection() {
      CProxySection_ArrayElement::resetSection();
    } 
    static void contribute(CkSectionInfo &sid, int userData=-1, int fragSize=-1);
    static void contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, int userData=-1, int fragSize=-1);
    template <typename T>
    static void contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, int userData=-1, int fragSize=-1);
    static void contribute(CkSectionInfo &sid, const CkCallback &cb, int userData=-1, int fragSize=-1);
    static void contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData=-1, int fragSize=-1);
    template <typename T>
    static void contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData=-1, int fragSize=-1);
/* DECLS: ParFUMShadowArray(int s, int i);
 */
    

/* DECLS: void setFemMesh(FEMMeshMsg* impl_msg);
 */
    
    void setFemMesh(FEMMeshMsg* impl_msg) ;

/* DECLS: void lockRegionForRemote(const RegionID &regionID, const int *sharedIdxls, int numSharedIdxls, const adaptAdj *elements, int numElements);
 */
    
    void lockRegionForRemote(const RegionID &regionID, const int *sharedIdxls, int numSharedIdxls, const adaptAdj *elements, int numElements, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void lockReply(int remoteChunk, const RegionID &regionID, const bool &success, int tag, int otherSuccess);
 */
    
    void lockReply(int remoteChunk, const RegionID &regionID, const bool &success, int tag, int otherSuccess, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void unlockForRemote(const RegionID &regionID);
 */
    
    void unlockForRemote(const RegionID &regionID, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void unpendForRemote(const RegionID &regionID);
 */
    
    void unpendForRemote(const RegionID &regionID, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void unlockReply(int remoteChunk, const RegionID &regionID);
 */
    
    void unlockReply(int remoteChunk, const RegionID &regionID, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: sync adaptAdjMsg* remote_bulk_edge_bisect_2D(const adaptAdj &nbrElem, const adaptAdj &splitElem, int new_idxl, int n1_idxl, int n2_idxl, int partitionID);
 */

/* DECLS: sync void remote_adaptAdj_replace(const adaptAdj &elem, const adaptAdj &oldElem, const adaptAdj &newElem);
 */

/* DECLS: sync void remote_edgeAdj_replace(int remotePartID, const adaptAdj &adj, const adaptAdj &elem, const adaptAdj &splitElem, int n1_idxl, int n2_idxl);
 */

/* DECLS: sync void remote_edgeAdj_add(int remotePartID, const adaptAdj &elem, const adaptAdj &splitElem, int n1_idxl, int n2_idxl);
 */

/* DECLS: void recv_split_3D(int pos, int tableID, const adaptAdj &elem, const adaptAdj &splitElem);
 */
    
    void recv_split_3D(int pos, int tableID, const adaptAdj &elem, const adaptAdj &splitElem, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void handle_split_3D(int remotePartID, int pos, int tableID, const adaptAdj &elem, const RegionID &lockRegionID, int n1_idxl, int n2_idxl, int n5_idxl);
 */
    
    void handle_split_3D(int remotePartID, int pos, int tableID, const adaptAdj &elem, const RegionID &lockRegionID, int n1_idxl, int n2_idxl, int n5_idxl, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: threaded sync void recv_splits(int tableID, int expectedSplits);
 */

/* DECLS: sync longestMsg* isLongest(int elem, int elemType, double len);
 */

/* DECLS: void update_asterisk_3D(int remotePartID, int i, const adaptAdj &elem, int numElemPairs, const adaptAdj *elemPairs, const RegionID &lockRegionID, int n1_idxl, int n2_idxl, int n5_idxl);
 */
    
    void update_asterisk_3D(int remotePartID, int i, const adaptAdj &elem, int numElemPairs, const adaptAdj *elemPairs, const RegionID &lockRegionID, int n1_idxl, int n2_idxl, int n5_idxl, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: ParFUMShadowArray(CkMigrateMessage* impl_msg);
 */

};
#define ParFUMShadowArray_SDAG_CODE 
typedef CBaseT1<ArrayElementT<CkIndex1D>, CProxy_ParFUMShadowArray>CBase_ParFUMShadowArray;





/* ---------------- method closures -------------- */
class Closure_ParFUMShadowArray {
  public:



    struct lockRegionForRemote_3_closure;


    struct lockReply_4_closure;


    struct unlockForRemote_5_closure;


    struct unpendForRemote_6_closure;


    struct unlockReply_7_closure;


    struct remote_bulk_edge_bisect_2D_8_closure;


    struct remote_adaptAdj_replace_9_closure;


    struct remote_edgeAdj_replace_10_closure;


    struct remote_edgeAdj_add_11_closure;


    struct recv_split_3D_12_closure;


    struct handle_split_3D_13_closure;


    struct recv_splits_14_closure;


    struct isLongest_15_closure;


    struct update_asterisk_3D_16_closure;


};

extern void _registerParFUM_SA(void);
#endif
