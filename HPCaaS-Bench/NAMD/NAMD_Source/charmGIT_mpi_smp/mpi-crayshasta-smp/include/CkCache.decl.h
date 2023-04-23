#ifndef _DECL_CkCache_H_
#define _DECL_CkCache_H_
#include "charm++.h"
#include "envelope.h"
#include <memory>
#include "sdag.h"
#ifndef GROUPDEPNUM_DECLARED
# define GROUPDEPNUM_DECLARED
struct GroupDepNum
{
  int groupDepNum;
  explicit GroupDepNum(int g = 0) : groupDepNum{g} { }
  operator int() const { return groupDepNum; }
};
#endif
/* DECLS: template <class CkCacheKey> message CkCacheRequestMsg;
 */
template <class CkCacheKey> class CkCacheRequestMsg;
template <class CkCacheKey> class CMessage_CkCacheRequestMsg:public CkMessage{
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
    CMessage_CkCacheRequestMsg <CkCacheKey> ();
    static void *pack(CkCacheRequestMsg <CkCacheKey>  *p);
    static CkCacheRequestMsg <CkCacheKey> * unpack(void* p);
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
/* DECLS: template <class CkCacheKey> message CkCacheFillMsg{
char data[];
}
;
 */
template <class CkCacheKey> class CkCacheFillMsg;
template <class CkCacheKey> class CMessage_CkCacheFillMsg:public CkMessage{
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
    CMessage_CkCacheFillMsg <CkCacheKey> ();
    static void *pack(CkCacheFillMsg <CkCacheKey>  *p);
    static CkCacheFillMsg <CkCacheKey> * unpack(void* p);
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

/* DECLS: template <class CkCacheKey> group CkCacheManager: IrrGroup{
CkCacheManager(int size, const CkGroupID &gid);
CkCacheManager(int size, int n, const CkGroupID *gid);
CkCacheManager(int size, int n, const CkGroupID *gid, int nWB, const CkGroupID *gidWB);
void cacheSync(const int &numChunks, const CkArrayIndex &chareIdx, const int &localIdx);
void recvData(CkCacheFillMsg<CkCacheKey>* impl_msg);
void writebackChunk(int num);
void finishedChunk(int num, const CmiUInt8 &weight);
void collectStatistics(const CkCallback &cb);
CkCacheManager(CkMigrateMessage* impl_msg);
};
 */
template <class CkCacheKey>  class CkCacheManager;
template <class CkCacheKey>  class CkIndex_CkCacheManager;
template <class CkCacheKey>  class CProxy_CkCacheManager;
template <class CkCacheKey>  class CProxyElement_CkCacheManager;
template <class CkCacheKey>  class CProxySection_CkCacheManager;
/* --------------- index object ------------------ */
template <class CkCacheKey> class CkIndex_CkCacheManager:public CkIndex_IrrGroup{
  public:
    typedef CkCacheManager <CkCacheKey>  local_t;
    typedef CkIndex_CkCacheManager <CkCacheKey>  index_t;
    typedef CProxy_CkCacheManager <CkCacheKey>  proxy_t;
    typedef CProxyElement_CkCacheManager <CkCacheKey>  element_t;
    typedef CProxySection_CkCacheManager <CkCacheKey>  section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: CkCacheManager(int size, const CkGroupID &gid);
     */
    // Entry point registration at startup
    
    static int reg_CkCacheManager_marshall1();
    // Entry point index lookup
    
    inline static int idx_CkCacheManager_marshall1() {
      static int epidx = reg_CkCacheManager_marshall1();
      return epidx;
    }

    
    static int ckNew(int size, const CkGroupID &gid) { return idx_CkCacheManager_marshall1(); }
    
    static void _call_CkCacheManager_marshall1(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_CkCacheManager_marshall1(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_CkCacheManager_marshall1(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_CkCacheManager_marshall1(PUP::er &p,void *msg);
    /* DECLS: CkCacheManager(int size, int n, const CkGroupID *gid);
     */
    // Entry point registration at startup
    
    static int reg_CkCacheManager_marshall2();
    // Entry point index lookup
    
    inline static int idx_CkCacheManager_marshall2() {
      static int epidx = reg_CkCacheManager_marshall2();
      return epidx;
    }

    
    static int ckNew(int size, int n, const CkGroupID *gid) { return idx_CkCacheManager_marshall2(); }
    
    static void _call_CkCacheManager_marshall2(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_CkCacheManager_marshall2(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_CkCacheManager_marshall2(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_CkCacheManager_marshall2(PUP::er &p,void *msg);
    /* DECLS: CkCacheManager(int size, int n, const CkGroupID *gid, int nWB, const CkGroupID *gidWB);
     */
    // Entry point registration at startup
    
    static int reg_CkCacheManager_marshall3();
    // Entry point index lookup
    
    inline static int idx_CkCacheManager_marshall3() {
      static int epidx = reg_CkCacheManager_marshall3();
      return epidx;
    }

    
    static int ckNew(int size, int n, const CkGroupID *gid, int nWB, const CkGroupID *gidWB) { return idx_CkCacheManager_marshall3(); }
    
    static void _call_CkCacheManager_marshall3(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_CkCacheManager_marshall3(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_CkCacheManager_marshall3(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_CkCacheManager_marshall3(PUP::er &p,void *msg);
    /* DECLS: void cacheSync(const int &numChunks, const CkArrayIndex &chareIdx, const int &localIdx);
     */
    // Entry point registration at startup
    
    static int reg_cacheSync_marshall4();
    // Entry point index lookup
    
    inline static int idx_cacheSync_marshall4() {
      static int epidx = reg_cacheSync_marshall4();
      return epidx;
    }

    
    inline static int idx_cacheSync(void (CkCacheManager <CkCacheKey> ::*)(const int &numChunks, const CkArrayIndex &chareIdx, const int &localIdx) ) {
      return idx_cacheSync_marshall4();
    }


    
    static int cacheSync(const int &numChunks, const CkArrayIndex &chareIdx, const int &localIdx) { return idx_cacheSync_marshall4(); }
    
    static void _call_cacheSync_marshall4(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_cacheSync_marshall4(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_cacheSync_marshall4(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_cacheSync_marshall4(PUP::er &p,void *msg);
    /* DECLS: void recvData(CkCacheFillMsg<CkCacheKey>* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvData_CkCacheFillMsg();
    // Entry point index lookup
    
    inline static int idx_recvData_CkCacheFillMsg() {
      static int epidx = reg_recvData_CkCacheFillMsg();
      return epidx;
    }

    
    inline static int idx_recvData(void (CkCacheManager <CkCacheKey> ::*)(CkCacheFillMsg<CkCacheKey>* impl_msg) ) {
      return idx_recvData_CkCacheFillMsg();
    }


    
    static int recvData(CkCacheFillMsg<CkCacheKey>* impl_msg) { return idx_recvData_CkCacheFillMsg(); }
    
    static void _call_recvData_CkCacheFillMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvData_CkCacheFillMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void writebackChunk(int num);
     */
    // Entry point registration at startup
    
    static int reg_writebackChunk_marshall6();
    // Entry point index lookup
    
    inline static int idx_writebackChunk_marshall6() {
      static int epidx = reg_writebackChunk_marshall6();
      return epidx;
    }

    
    inline static int idx_writebackChunk(void (CkCacheManager <CkCacheKey> ::*)(int num) ) {
      return idx_writebackChunk_marshall6();
    }


    
    static int writebackChunk(int num) { return idx_writebackChunk_marshall6(); }
    
    static void _call_writebackChunk_marshall6(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_writebackChunk_marshall6(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_writebackChunk_marshall6(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_writebackChunk_marshall6(PUP::er &p,void *msg);
    /* DECLS: void finishedChunk(int num, const CmiUInt8 &weight);
     */
    // Entry point registration at startup
    
    static int reg_finishedChunk_marshall7();
    // Entry point index lookup
    
    inline static int idx_finishedChunk_marshall7() {
      static int epidx = reg_finishedChunk_marshall7();
      return epidx;
    }

    
    inline static int idx_finishedChunk(void (CkCacheManager <CkCacheKey> ::*)(int num, const CmiUInt8 &weight) ) {
      return idx_finishedChunk_marshall7();
    }


    
    static int finishedChunk(int num, const CmiUInt8 &weight) { return idx_finishedChunk_marshall7(); }
    
    static void _call_finishedChunk_marshall7(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_finishedChunk_marshall7(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_finishedChunk_marshall7(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_finishedChunk_marshall7(PUP::er &p,void *msg);
    /* DECLS: void collectStatistics(const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_collectStatistics_marshall8();
    // Entry point index lookup
    
    inline static int idx_collectStatistics_marshall8() {
      static int epidx = reg_collectStatistics_marshall8();
      return epidx;
    }

    
    inline static int idx_collectStatistics(void (CkCacheManager <CkCacheKey> ::*)(const CkCallback &cb) ) {
      return idx_collectStatistics_marshall8();
    }


    
    static int collectStatistics(const CkCallback &cb) { return idx_collectStatistics_marshall8(); }
    
    static void _call_collectStatistics_marshall8(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_collectStatistics_marshall8(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_collectStatistics_marshall8(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_collectStatistics_marshall8(PUP::er &p,void *msg);
    /* DECLS: CkCacheManager(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_CkCacheManager_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_CkCacheManager_CkMigrateMessage() {
      static int epidx = reg_CkCacheManager_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_CkCacheManager_CkMigrateMessage(); }
    
    static void _call_CkCacheManager_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_CkCacheManager_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
template <class CkCacheKey> class CProxyElement_CkCacheManager: public CProxyElement_IrrGroup{
  public:
    typedef CkCacheManager <CkCacheKey>  local_t;
    typedef CkIndex_CkCacheManager <CkCacheKey>  index_t;
    typedef CProxy_CkCacheManager <CkCacheKey>  proxy_t;
    typedef CProxyElement_CkCacheManager <CkCacheKey>  element_t;
    typedef CProxySection_CkCacheManager <CkCacheKey>  section_t;


    /* TRAM aggregators */

    CProxyElement_CkCacheManager(void) {
    }
    CProxyElement_CkCacheManager(const IrrGroup *g) : CProxyElement_IrrGroup(g){
    }
    CProxyElement_CkCacheManager(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_IrrGroup(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_CkCacheManager(CkGroupID _gid,int _onPE) : CProxyElement_IrrGroup(_gid,_onPE){
    }

    int ckIsDelegated(void) const
    { return CProxyElement_IrrGroup::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxyElement_IrrGroup::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxyElement_IrrGroup::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxyElement_IrrGroup::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxyElement_IrrGroup::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxyElement_IrrGroup::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxyElement_IrrGroup::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_IrrGroup::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_IrrGroup::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxyElement_IrrGroup::ckSetReductionClient(cb); }
int ckGetGroupPe(void) const
{return CProxyElement_IrrGroup::ckGetGroupPe();}

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxyElement_IrrGroup::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxyElement_IrrGroup::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxyElement_IrrGroup::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxyElement_IrrGroup::ckSetGroupID(g);
    }
    CkCacheManager <CkCacheKey> * ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static CkCacheManager <CkCacheKey> * ckLocalBranch(CkGroupID gID) {
      return (CkCacheManager <CkCacheKey> *)CkLocalBranch(gID);
    }
/* DECLS: CkCacheManager(int size, const CkGroupID &gid);
 */
    

/* DECLS: CkCacheManager(int size, int n, const CkGroupID *gid);
 */
    

/* DECLS: CkCacheManager(int size, int n, const CkGroupID *gid, int nWB, const CkGroupID *gidWB);
 */
    

/* DECLS: void cacheSync(const int &numChunks, const CkArrayIndex &chareIdx, const int &localIdx);
 */
    
    void cacheSync(int &numChunks, CkArrayIndex &chareIdx, int &localIdx, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvData(CkCacheFillMsg<CkCacheKey>* impl_msg);
 */
    
    void recvData(CkCacheFillMsg<CkCacheKey>* impl_msg);

/* DECLS: void writebackChunk(int num);
 */
    
    void writebackChunk(int num, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void finishedChunk(int num, const CmiUInt8 &weight);
 */
    
    void finishedChunk(int num, const CmiUInt8 &weight, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void collectStatistics(const CkCallback &cb);
 */
    
    void collectStatistics(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: CkCacheManager(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- collective proxy -------------- */
template <class CkCacheKey> class CProxy_CkCacheManager: public CProxy_IrrGroup{
  public:
    typedef CkCacheManager <CkCacheKey>  local_t;
    typedef CkIndex_CkCacheManager <CkCacheKey>  index_t;
    typedef CProxy_CkCacheManager <CkCacheKey>  proxy_t;
    typedef CProxyElement_CkCacheManager <CkCacheKey>  element_t;
    typedef CProxySection_CkCacheManager <CkCacheKey>  section_t;

    CProxy_CkCacheManager(void) {
    }
    CProxy_CkCacheManager(const IrrGroup *g) : CProxy_IrrGroup(g){
    }
    CProxy_CkCacheManager(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_IrrGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_CkCacheManager(CkGroupID _gid) : CProxy_IrrGroup(_gid){  }
    CProxyElement_CkCacheManager <CkCacheKey>  operator[](int onPE) const
      {return CProxyElement_CkCacheManager <CkCacheKey> (ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

    int ckIsDelegated(void) const
    { return CProxy_IrrGroup::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_IrrGroup::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_IrrGroup::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_IrrGroup::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxy_IrrGroup::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxy_IrrGroup::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxy_IrrGroup::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_IrrGroup::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_IrrGroup::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxy_IrrGroup::ckSetReductionClient(cb); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_IrrGroup::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_IrrGroup::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_IrrGroup::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxy_IrrGroup::ckSetGroupID(g);
    }
    CkCacheManager <CkCacheKey> * ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static CkCacheManager <CkCacheKey> * ckLocalBranch(CkGroupID gID) {
      return (CkCacheManager <CkCacheKey> *)CkLocalBranch(gID);
    }
/* DECLS: CkCacheManager(int size, const CkGroupID &gid);
 */
    
    static CkGroupID ckNew(int size, const CkGroupID &gid, const CkEntryOptions *impl_e_opts=NULL);
    CProxy_CkCacheManager(int size, const CkGroupID &gid, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: CkCacheManager(int size, int n, const CkGroupID *gid);
 */
    
    static CkGroupID ckNew(int size, int n, const CkGroupID *gid, const CkEntryOptions *impl_e_opts=NULL);
    CProxy_CkCacheManager(int size, int n, const CkGroupID *gid, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: CkCacheManager(int size, int n, const CkGroupID *gid, int nWB, const CkGroupID *gidWB);
 */
    
    static CkGroupID ckNew(int size, int n, const CkGroupID *gid, int nWB, const CkGroupID *gidWB, const CkEntryOptions *impl_e_opts=NULL);
    CProxy_CkCacheManager(int size, int n, const CkGroupID *gid, int nWB, const CkGroupID *gidWB, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void cacheSync(const int &numChunks, const CkArrayIndex &chareIdx, const int &localIdx);
 */

/* DECLS: void recvData(CkCacheFillMsg<CkCacheKey>* impl_msg);
 */
    
    void recvData(CkCacheFillMsg<CkCacheKey>* impl_msg);
    
    void recvData(CkCacheFillMsg<CkCacheKey>* impl_msg, int npes, int *pes);
    
    void recvData(CkCacheFillMsg<CkCacheKey>* impl_msg, CmiGroup &grp);

/* DECLS: void writebackChunk(int num);
 */
    
    void writebackChunk(int num, const CkEntryOptions *impl_e_opts=NULL);
    
    void writebackChunk(int num, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void writebackChunk(int num, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void finishedChunk(int num, const CmiUInt8 &weight);
 */
    
    void finishedChunk(int num, const CmiUInt8 &weight, const CkEntryOptions *impl_e_opts=NULL);
    
    void finishedChunk(int num, const CmiUInt8 &weight, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void finishedChunk(int num, const CmiUInt8 &weight, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void collectStatistics(const CkCallback &cb);
 */
    
    void collectStatistics(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL);
    
    void collectStatistics(const CkCallback &cb, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void collectStatistics(const CkCallback &cb, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: CkCacheManager(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- section proxy -------------- */
template <class CkCacheKey> class CProxySection_CkCacheManager: public CProxySection_IrrGroup{
  public:
    typedef CkCacheManager <CkCacheKey>  local_t;
    typedef CkIndex_CkCacheManager <CkCacheKey>  index_t;
    typedef CProxy_CkCacheManager <CkCacheKey>  proxy_t;
    typedef CProxyElement_CkCacheManager <CkCacheKey>  element_t;
    typedef CProxySection_CkCacheManager <CkCacheKey>  section_t;

    CProxySection_CkCacheManager(void) {
    }
    CProxySection_CkCacheManager(const IrrGroup *g) : CProxySection_IrrGroup(g){
    }
    CProxySection_CkCacheManager(const CkGroupID &_gid,const int *_pelist,int _npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_CkCacheManager(const CkGroupID &_gid,const int *_pelist,int _npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(_gid,_pelist,_npes,factor){  }
    CProxySection_CkCacheManager(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,factor){  }
    CProxySection_CkCacheManager(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

    int ckIsDelegated(void) const
    { return CProxySection_IrrGroup::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxySection_IrrGroup::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxySection_IrrGroup::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxySection_IrrGroup::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxySection_IrrGroup::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxySection_IrrGroup::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxySection_IrrGroup::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_IrrGroup::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_IrrGroup::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxySection_IrrGroup::ckSetReductionClient(cb); }
inline int ckGetNumSections() const
{ return CProxySection_IrrGroup::ckGetNumSections(); }
inline CkSectionInfo &ckGetSectionInfo()
{ return CProxySection_IrrGroup::ckGetSectionInfo(); }
inline CkSectionID *ckGetSectionIDs()
{ return CProxySection_IrrGroup::ckGetSectionIDs(); }
inline CkSectionID &ckGetSectionID()
{ return CProxySection_IrrGroup::ckGetSectionID(); }
inline CkSectionID &ckGetSectionID(int i)
{ return CProxySection_IrrGroup::ckGetSectionID(i); }
inline CkGroupID ckGetGroupIDn(int i) const
{ return CProxySection_IrrGroup::ckGetGroupIDn(i); }
inline const int *ckGetElements() const
{ return CProxySection_IrrGroup::ckGetElements(); }
inline const int *ckGetElements(int i) const
{ return CProxySection_IrrGroup::ckGetElements(i); }
inline int ckGetNumElements() const
{ return CProxySection_IrrGroup::ckGetNumElements(); } 
inline int ckGetNumElements(int i) const
{ return CProxySection_IrrGroup::ckGetNumElements(i); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxySection_IrrGroup::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxySection_IrrGroup::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxySection_IrrGroup::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxySection_IrrGroup::ckSetGroupID(g);
    }
    CkCacheManager <CkCacheKey> * ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static CkCacheManager <CkCacheKey> * ckLocalBranch(CkGroupID gID) {
      return (CkCacheManager <CkCacheKey> *)CkLocalBranch(gID);
    }
/* DECLS: CkCacheManager(int size, const CkGroupID &gid);
 */
    

/* DECLS: CkCacheManager(int size, int n, const CkGroupID *gid);
 */
    

/* DECLS: CkCacheManager(int size, int n, const CkGroupID *gid, int nWB, const CkGroupID *gidWB);
 */
    

/* DECLS: void cacheSync(const int &numChunks, const CkArrayIndex &chareIdx, const int &localIdx);
 */

/* DECLS: void recvData(CkCacheFillMsg<CkCacheKey>* impl_msg);
 */
    
    void recvData(CkCacheFillMsg<CkCacheKey>* impl_msg);

/* DECLS: void writebackChunk(int num);
 */
    
    void writebackChunk(int num, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void finishedChunk(int num, const CmiUInt8 &weight);
 */
    
    void finishedChunk(int num, const CmiUInt8 &weight, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void collectStatistics(const CkCallback &cb);
 */
    
    void collectStatistics(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: CkCacheManager(CkMigrateMessage* impl_msg);
 */

};
#define CkCacheManager_SDAG_CODE 
template <class CkCacheKey> 
struct CBase_CkCacheManager;









/* ---------------- method closures -------------- */
template <class CkCacheKey> class Closure_CkCacheManager {
  public:






    struct writebackChunk_6_closure;


    struct finishedChunk_7_closure;


    struct collectStatistics_8_closure;


};







extern void _registerCkCache(void);
#endif
