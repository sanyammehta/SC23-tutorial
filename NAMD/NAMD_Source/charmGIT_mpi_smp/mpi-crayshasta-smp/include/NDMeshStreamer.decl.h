#ifndef _DECL_NDMeshStreamer_H_
#define _DECL_NDMeshStreamer_H_
#include "charm++.h"
#include "envelope.h"
#include <memory>
#include "sdag.h"
#include "completion.decl.h"

#include "DataItemTypes.h"

#ifndef GROUPDEPNUM_DECLARED
# define GROUPDEPNUM_DECLARED
struct GroupDepNum
{
  int groupDepNum;
  explicit GroupDepNum(int g = 0) : groupDepNum{g} { }
  operator int() const { return groupDepNum; }
};
#endif
/* DECLS: message MeshStreamerMessageV{
int destinationPes[];
int sourcePes[];
std::uint16_t offsets[];
CkArrayIndex destObjects[];
char dataItems[];
}
;
 */
class MeshStreamerMessageV;
class CMessage_MeshStreamerMessageV:public CkMessage{
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
    CMessage_MeshStreamerMessageV();
    static void *pack(MeshStreamerMessageV *p);
    static MeshStreamerMessageV* unpack(void* p);
    void *operator new(size_t, int, int, int, int, int);
    void *operator new(size_t, int, int, int, int, int, const int);
    void *operator new(size_t, int, int, int, int, int, const int, const GroupDepNum);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, int, int, int, int, int){dealloc(p);}
    void operator delete(void *p, int, int, int, int, int, const int){dealloc(p);}
    void operator delete(void *p, int, int, int, int, int, const int, const GroupDepNum){dealloc(p);}
#endif
    static void __register(const char *s, size_t size, CkPackFnPtr pack, CkUnpackFnPtr unpack) {
      __idx = CkRegisterMsg(s, pack, unpack, dealloc, size);
    }
};

/* DECLS: template <class dtype, class RouterType> group MeshStreamer: IrrGroup{
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
template <class dtype, class RouterType>  class MeshStreamer;
template <class dtype, class RouterType>  class CkIndex_MeshStreamer;
template <class dtype, class RouterType>  class CProxy_MeshStreamer;
template <class dtype, class RouterType>  class CProxyElement_MeshStreamer;
template <class dtype, class RouterType>  class CProxySection_MeshStreamer;
/* --------------- index object ------------------ */
template <class dtype, class RouterType> class CkIndex_MeshStreamer:public CkIndex_IrrGroup{
  public:
    typedef MeshStreamer <dtype, RouterType>  local_t;
    typedef CkIndex_MeshStreamer <dtype, RouterType>  index_t;
    typedef CProxy_MeshStreamer <dtype, RouterType>  proxy_t;
    typedef CProxyElement_MeshStreamer <dtype, RouterType>  element_t;
    typedef CProxySection_MeshStreamer <dtype, RouterType>  section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: void receiveAlongRoute(MeshStreamerMessageV* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_receiveAlongRoute_MeshStreamerMessageV();
    // Entry point index lookup
    
    inline static int idx_receiveAlongRoute_MeshStreamerMessageV() {
      static int epidx = reg_receiveAlongRoute_MeshStreamerMessageV();
      return epidx;
    }

    
    inline static int idx_receiveAlongRoute(void (MeshStreamer <dtype, RouterType> ::*)(MeshStreamerMessageV* impl_msg) ) {
      return idx_receiveAlongRoute_MeshStreamerMessageV();
    }


    
    static int receiveAlongRoute(MeshStreamerMessageV* impl_msg) { return idx_receiveAlongRoute_MeshStreamerMessageV(); }
    
    static void _call_receiveAlongRoute_MeshStreamerMessageV(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_receiveAlongRoute_MeshStreamerMessageV(void* impl_msg, void* impl_obj);
    /* DECLS: void enablePeriodicFlushing();
     */
    // Entry point registration at startup
    
    static int reg_enablePeriodicFlushing_void();
    // Entry point index lookup
    
    inline static int idx_enablePeriodicFlushing_void() {
      static int epidx = reg_enablePeriodicFlushing_void();
      return epidx;
    }

    
    inline static int idx_enablePeriodicFlushing(void (MeshStreamer <dtype, RouterType> ::*)() ) {
      return idx_enablePeriodicFlushing_void();
    }


    
    static int enablePeriodicFlushing() { return idx_enablePeriodicFlushing_void(); }
    
    static void _call_enablePeriodicFlushing_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_enablePeriodicFlushing_void(void* impl_msg, void* impl_obj);
    /* DECLS: void finish();
     */
    // Entry point registration at startup
    
    static int reg_finish_void();
    // Entry point index lookup
    
    inline static int idx_finish_void() {
      static int epidx = reg_finish_void();
      return epidx;
    }

    
    inline static int idx_finish(void (MeshStreamer <dtype, RouterType> ::*)() ) {
      return idx_finish_void();
    }


    
    static int finish() { return idx_finish_void(); }
    
    static void _call_finish_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_finish_void(void* impl_msg, void* impl_obj);
    /* DECLS: void init(int numLocalContributors, const CkCallback &startCb, const CkCallback &endCb, int prio, const bool &usePeriodicFlushing);
     */
    // Entry point registration at startup
    
    static int reg_init_marshall4();
    // Entry point index lookup
    
    inline static int idx_init_marshall4() {
      static int epidx = reg_init_marshall4();
      return epidx;
    }

    
    inline static int idx_init(void (MeshStreamer <dtype, RouterType> ::*)(int numLocalContributors, const CkCallback &startCb, const CkCallback &endCb, int prio, const bool &usePeriodicFlushing) ) {
      return idx_init_marshall4();
    }


    
    static int init(int numLocalContributors, const CkCallback &startCb, const CkCallback &endCb, int prio, const bool &usePeriodicFlushing) { return idx_init_marshall4(); }
    
    static void _call_init_marshall4(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_init_marshall4(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_init_marshall4(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_init_marshall4(PUP::er &p,void *msg);
    /* DECLS: void init(int numContributors, const CkCallback &startCb, const CkCallback &endCb, const CProxy_CompletionDetector &detector, int prio, const bool &usePeriodicFlushing);
     */
    // Entry point registration at startup
    
    static int reg_init_marshall5();
    // Entry point index lookup
    
    inline static int idx_init_marshall5() {
      static int epidx = reg_init_marshall5();
      return epidx;
    }

    
    inline static int idx_init(void (MeshStreamer <dtype, RouterType> ::*)(int numContributors, const CkCallback &startCb, const CkCallback &endCb, const CProxy_CompletionDetector &detector, int prio, const bool &usePeriodicFlushing) ) {
      return idx_init_marshall5();
    }


    
    static int init(int numContributors, const CkCallback &startCb, const CkCallback &endCb, const CProxy_CompletionDetector &detector, int prio, const bool &usePeriodicFlushing) { return idx_init_marshall5(); }
    
    static void _call_init_marshall5(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_init_marshall5(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_init_marshall5(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_init_marshall5(PUP::er &p,void *msg);
    /* DECLS: void init(const CkArrayID &senderArrayID, const CkCallback &startCb, const CkCallback &endCb, int prio, const bool &usePeriodicFlushing);
     */
    // Entry point registration at startup
    
    static int reg_init_marshall6();
    // Entry point index lookup
    
    inline static int idx_init_marshall6() {
      static int epidx = reg_init_marshall6();
      return epidx;
    }

    
    inline static int idx_init(void (MeshStreamer <dtype, RouterType> ::*)(const CkArrayID &senderArrayID, const CkCallback &startCb, const CkCallback &endCb, int prio, const bool &usePeriodicFlushing) ) {
      return idx_init_marshall6();
    }


    
    static int init(const CkArrayID &senderArrayID, const CkCallback &startCb, const CkCallback &endCb, int prio, const bool &usePeriodicFlushing) { return idx_init_marshall6(); }
    
    static void _call_init_marshall6(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_init_marshall6(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_init_marshall6(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_init_marshall6(PUP::er &p,void *msg);
    /* DECLS: void init(const CkCallback &endCb, int prio);
     */
    // Entry point registration at startup
    
    static int reg_init_marshall7();
    // Entry point index lookup
    
    inline static int idx_init_marshall7() {
      static int epidx = reg_init_marshall7();
      return epidx;
    }

    
    inline static int idx_init(void (MeshStreamer <dtype, RouterType> ::*)(const CkCallback &endCb, int prio) ) {
      return idx_init_marshall7();
    }


    
    static int init(const CkCallback &endCb, int prio) { return idx_init_marshall7(); }
    
    static void _call_init_marshall7(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_init_marshall7(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_init_marshall7(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_init_marshall7(PUP::er &p,void *msg);
    /* DECLS: void syncInit();
     */
    // Entry point registration at startup
    
    static int reg_syncInit_void();
    // Entry point index lookup
    
    inline static int idx_syncInit_void() {
      static int epidx = reg_syncInit_void();
      return epidx;
    }

    
    inline static int idx_syncInit(void (MeshStreamer <dtype, RouterType> ::*)() ) {
      return idx_syncInit_void();
    }


    
    static int syncInit() { return idx_syncInit_void(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_syncInit_void();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_syncInit_void() {
      static int epidx = reg_redn_wrapper_syncInit_void();
      return epidx;
    }
    
    static int redn_wrapper_syncInit(CkReductionMsg* impl_msg) { return idx_redn_wrapper_syncInit_void(); }
    
    static void _call_redn_wrapper_syncInit_void(void* impl_msg, void* impl_obj_void);
    
    static void _call_syncInit_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_syncInit_void(void* impl_msg, void* impl_obj);
    /* DECLS: void receiveAtDestination(MeshStreamerMessageV* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_receiveAtDestination_MeshStreamerMessageV();
    // Entry point index lookup
    
    inline static int idx_receiveAtDestination_MeshStreamerMessageV() {
      static int epidx = reg_receiveAtDestination_MeshStreamerMessageV();
      return epidx;
    }

    
    inline static int idx_receiveAtDestination(void (MeshStreamer <dtype, RouterType> ::*)(MeshStreamerMessageV* impl_msg) ) {
      return idx_receiveAtDestination_MeshStreamerMessageV();
    }


    
    static int receiveAtDestination(MeshStreamerMessageV* impl_msg) { return idx_receiveAtDestination_MeshStreamerMessageV(); }
    
    static void _call_receiveAtDestination_MeshStreamerMessageV(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_receiveAtDestination_MeshStreamerMessageV(void* impl_msg, void* impl_obj);
    /* DECLS: MeshStreamer(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_MeshStreamer_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_MeshStreamer_CkMigrateMessage() {
      static int epidx = reg_MeshStreamer_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_MeshStreamer_CkMigrateMessage(); }
    
    static void _call_MeshStreamer_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_MeshStreamer_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
template <class dtype, class RouterType> class CProxyElement_MeshStreamer: public CProxyElement_IrrGroup{
  public:
    typedef MeshStreamer <dtype, RouterType>  local_t;
    typedef CkIndex_MeshStreamer <dtype, RouterType>  index_t;
    typedef CProxy_MeshStreamer <dtype, RouterType>  proxy_t;
    typedef CProxyElement_MeshStreamer <dtype, RouterType>  element_t;
    typedef CProxySection_MeshStreamer <dtype, RouterType>  section_t;


    /* TRAM aggregators */

    CProxyElement_MeshStreamer(void) {
    }
    CProxyElement_MeshStreamer(const IrrGroup *g) : CProxyElement_IrrGroup(g){
    }
    CProxyElement_MeshStreamer(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_IrrGroup(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_MeshStreamer(CkGroupID _gid,int _onPE) : CProxyElement_IrrGroup(_gid,_onPE){
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
    MeshStreamer <dtype, RouterType> * ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static MeshStreamer <dtype, RouterType> * ckLocalBranch(CkGroupID gID) {
      return (MeshStreamer <dtype, RouterType> *)CkLocalBranch(gID);
    }
/* DECLS: void receiveAlongRoute(MeshStreamerMessageV* impl_msg);
 */
    
    void receiveAlongRoute(MeshStreamerMessageV* impl_msg);

/* DECLS: void enablePeriodicFlushing();
 */
    
    void enablePeriodicFlushing(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void finish();
 */
    
    void finish(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void init(int numLocalContributors, const CkCallback &startCb, const CkCallback &endCb, int prio, const bool &usePeriodicFlushing);
 */
    
    void init(int numLocalContributors, const CkCallback &startCb, const CkCallback &endCb, int prio, const bool &usePeriodicFlushing, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void init(int numContributors, const CkCallback &startCb, const CkCallback &endCb, const CProxy_CompletionDetector &detector, int prio, const bool &usePeriodicFlushing);
 */
    
    void init(int numContributors, const CkCallback &startCb, const CkCallback &endCb, const CProxy_CompletionDetector &detector, int prio, const bool &usePeriodicFlushing, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void init(const CkArrayID &senderArrayID, const CkCallback &startCb, const CkCallback &endCb, int prio, const bool &usePeriodicFlushing);
 */
    
    void init(const CkArrayID &senderArrayID, const CkCallback &startCb, const CkCallback &endCb, int prio, const bool &usePeriodicFlushing, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void init(const CkCallback &endCb, int prio);
 */
    
    void init(const CkCallback &endCb, int prio, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void syncInit();
 */
    
    void syncInit(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void receiveAtDestination(MeshStreamerMessageV* impl_msg);
 */
    
    void receiveAtDestination(MeshStreamerMessageV* impl_msg);

/* DECLS: MeshStreamer(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- collective proxy -------------- */
template <class dtype, class RouterType> class CProxy_MeshStreamer: public CProxy_IrrGroup{
  public:
    typedef MeshStreamer <dtype, RouterType>  local_t;
    typedef CkIndex_MeshStreamer <dtype, RouterType>  index_t;
    typedef CProxy_MeshStreamer <dtype, RouterType>  proxy_t;
    typedef CProxyElement_MeshStreamer <dtype, RouterType>  element_t;
    typedef CProxySection_MeshStreamer <dtype, RouterType>  section_t;

    CProxy_MeshStreamer(void) {
    }
    CProxy_MeshStreamer(const IrrGroup *g) : CProxy_IrrGroup(g){
    }
    CProxy_MeshStreamer(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_IrrGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_MeshStreamer(CkGroupID _gid) : CProxy_IrrGroup(_gid){  }
    CProxyElement_MeshStreamer <dtype, RouterType>  operator[](int onPE) const
      {return CProxyElement_MeshStreamer <dtype, RouterType> (ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

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
    MeshStreamer <dtype, RouterType> * ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static MeshStreamer <dtype, RouterType> * ckLocalBranch(CkGroupID gID) {
      return (MeshStreamer <dtype, RouterType> *)CkLocalBranch(gID);
    }
/* DECLS: void receiveAlongRoute(MeshStreamerMessageV* impl_msg);
 */
    
    void receiveAlongRoute(MeshStreamerMessageV* impl_msg);
    
    void receiveAlongRoute(MeshStreamerMessageV* impl_msg, int npes, int *pes);
    
    void receiveAlongRoute(MeshStreamerMessageV* impl_msg, CmiGroup &grp);

/* DECLS: void enablePeriodicFlushing();
 */
    
    void enablePeriodicFlushing(const CkEntryOptions *impl_e_opts=NULL);
    
    void enablePeriodicFlushing(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void enablePeriodicFlushing(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void finish();
 */
    
    void finish(const CkEntryOptions *impl_e_opts=NULL);
    
    void finish(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void finish(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void init(int numLocalContributors, const CkCallback &startCb, const CkCallback &endCb, int prio, const bool &usePeriodicFlushing);
 */
    
    void init(int numLocalContributors, const CkCallback &startCb, const CkCallback &endCb, int prio, const bool &usePeriodicFlushing, const CkEntryOptions *impl_e_opts=NULL);
    
    void init(int numLocalContributors, const CkCallback &startCb, const CkCallback &endCb, int prio, const bool &usePeriodicFlushing, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void init(int numLocalContributors, const CkCallback &startCb, const CkCallback &endCb, int prio, const bool &usePeriodicFlushing, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void init(int numContributors, const CkCallback &startCb, const CkCallback &endCb, const CProxy_CompletionDetector &detector, int prio, const bool &usePeriodicFlushing);
 */
    
    void init(int numContributors, const CkCallback &startCb, const CkCallback &endCb, const CProxy_CompletionDetector &detector, int prio, const bool &usePeriodicFlushing, const CkEntryOptions *impl_e_opts=NULL);
    
    void init(int numContributors, const CkCallback &startCb, const CkCallback &endCb, const CProxy_CompletionDetector &detector, int prio, const bool &usePeriodicFlushing, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void init(int numContributors, const CkCallback &startCb, const CkCallback &endCb, const CProxy_CompletionDetector &detector, int prio, const bool &usePeriodicFlushing, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void init(const CkArrayID &senderArrayID, const CkCallback &startCb, const CkCallback &endCb, int prio, const bool &usePeriodicFlushing);
 */
    
    void init(const CkArrayID &senderArrayID, const CkCallback &startCb, const CkCallback &endCb, int prio, const bool &usePeriodicFlushing, const CkEntryOptions *impl_e_opts=NULL);
    
    void init(const CkArrayID &senderArrayID, const CkCallback &startCb, const CkCallback &endCb, int prio, const bool &usePeriodicFlushing, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void init(const CkArrayID &senderArrayID, const CkCallback &startCb, const CkCallback &endCb, int prio, const bool &usePeriodicFlushing, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void init(const CkCallback &endCb, int prio);
 */
    
    void init(const CkCallback &endCb, int prio, const CkEntryOptions *impl_e_opts=NULL);
    
    void init(const CkCallback &endCb, int prio, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void init(const CkCallback &endCb, int prio, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void syncInit();
 */
    
    void syncInit(const CkEntryOptions *impl_e_opts=NULL);
    
    void syncInit(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void syncInit(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void receiveAtDestination(MeshStreamerMessageV* impl_msg);
 */
    
    void receiveAtDestination(MeshStreamerMessageV* impl_msg);
    
    void receiveAtDestination(MeshStreamerMessageV* impl_msg, int npes, int *pes);
    
    void receiveAtDestination(MeshStreamerMessageV* impl_msg, CmiGroup &grp);

/* DECLS: MeshStreamer(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- section proxy -------------- */
template <class dtype, class RouterType> class CProxySection_MeshStreamer: public CProxySection_IrrGroup{
  public:
    typedef MeshStreamer <dtype, RouterType>  local_t;
    typedef CkIndex_MeshStreamer <dtype, RouterType>  index_t;
    typedef CProxy_MeshStreamer <dtype, RouterType>  proxy_t;
    typedef CProxyElement_MeshStreamer <dtype, RouterType>  element_t;
    typedef CProxySection_MeshStreamer <dtype, RouterType>  section_t;

    CProxySection_MeshStreamer(void) {
    }
    CProxySection_MeshStreamer(const IrrGroup *g) : CProxySection_IrrGroup(g){
    }
    CProxySection_MeshStreamer(const CkGroupID &_gid,const int *_pelist,int _npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_MeshStreamer(const CkGroupID &_gid,const int *_pelist,int _npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(_gid,_pelist,_npes,factor){  }
    CProxySection_MeshStreamer(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,factor){  }
    CProxySection_MeshStreamer(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

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
    MeshStreamer <dtype, RouterType> * ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static MeshStreamer <dtype, RouterType> * ckLocalBranch(CkGroupID gID) {
      return (MeshStreamer <dtype, RouterType> *)CkLocalBranch(gID);
    }
/* DECLS: void receiveAlongRoute(MeshStreamerMessageV* impl_msg);
 */
    
    void receiveAlongRoute(MeshStreamerMessageV* impl_msg);

/* DECLS: void enablePeriodicFlushing();
 */
    
    void enablePeriodicFlushing(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void finish();
 */
    
    void finish(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void init(int numLocalContributors, const CkCallback &startCb, const CkCallback &endCb, int prio, const bool &usePeriodicFlushing);
 */
    
    void init(int numLocalContributors, const CkCallback &startCb, const CkCallback &endCb, int prio, const bool &usePeriodicFlushing, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void init(int numContributors, const CkCallback &startCb, const CkCallback &endCb, const CProxy_CompletionDetector &detector, int prio, const bool &usePeriodicFlushing);
 */
    
    void init(int numContributors, const CkCallback &startCb, const CkCallback &endCb, const CProxy_CompletionDetector &detector, int prio, const bool &usePeriodicFlushing, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void init(const CkArrayID &senderArrayID, const CkCallback &startCb, const CkCallback &endCb, int prio, const bool &usePeriodicFlushing);
 */
    
    void init(const CkArrayID &senderArrayID, const CkCallback &startCb, const CkCallback &endCb, int prio, const bool &usePeriodicFlushing, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void init(const CkCallback &endCb, int prio);
 */
    
    void init(const CkCallback &endCb, int prio, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void syncInit();
 */
    
    void syncInit(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void receiveAtDestination(MeshStreamerMessageV* impl_msg);
 */
    
    void receiveAtDestination(MeshStreamerMessageV* impl_msg);

/* DECLS: MeshStreamer(CkMigrateMessage* impl_msg);
 */

};
#define MeshStreamer_SDAG_CODE 
template <class dtype, class RouterType> 
struct CBase_MeshStreamer;

/* DECLS: template <class dtype, class ClientType, class RouterType, int(*EntryMethod)(char* impl_noname_0, void* impl_noname_1)=defaultMeshStreamerDeliver<dtype,ClientType>> group GroupMeshStreamer: MeshStreamer<dtype,RouterType>{
GroupMeshStreamer(int numDimensions, const int *dimensionSizes, const CkGroupID &clientGID, int bufferSize, const bool &yieldFlag, double progressPeriodInMs, int maxItemsBuffered, int _thresholdFractionNum, int _thresholdFractionDen, int _cutoffFractionNum, int _cutoffFractionDen);
GroupMeshStreamer(CkMigrateMessage* impl_msg);
};
 */
template <class dtype, class ClientType, class RouterType, int(*EntryMethod)(char* impl_noname_0, void* impl_noname_1)>  class GroupMeshStreamer;
template <class dtype, class ClientType, class RouterType, int(*EntryMethod)(char* impl_noname_0, void* impl_noname_1)>  class CkIndex_GroupMeshStreamer;
template <class dtype, class ClientType, class RouterType, int(*EntryMethod)(char* impl_noname_0, void* impl_noname_1)>  class CProxy_GroupMeshStreamer;
template <class dtype, class ClientType, class RouterType, int(*EntryMethod)(char* impl_noname_0, void* impl_noname_1)>  class CProxyElement_GroupMeshStreamer;
template <class dtype, class ClientType, class RouterType, int(*EntryMethod)(char* impl_noname_0, void* impl_noname_1)>  class CProxySection_GroupMeshStreamer;
/* --------------- index object ------------------ */
template <class dtype, class ClientType, class RouterType, int(*EntryMethod)(char* impl_noname_0, void* impl_noname_1)=defaultMeshStreamerDeliver<dtype,ClientType>> class CkIndex_GroupMeshStreamer:public CkIndex_MeshStreamer<dtype,RouterType>{
  public:
    typedef GroupMeshStreamer <dtype, ClientType, RouterType, EntryMethod>  local_t;
    typedef CkIndex_GroupMeshStreamer <dtype, ClientType, RouterType, EntryMethod>  index_t;
    typedef CProxy_GroupMeshStreamer <dtype, ClientType, RouterType, EntryMethod>  proxy_t;
    typedef CProxyElement_GroupMeshStreamer <dtype, ClientType, RouterType, EntryMethod>  element_t;
    typedef CProxySection_GroupMeshStreamer <dtype, ClientType, RouterType, EntryMethod>  section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: GroupMeshStreamer(int numDimensions, const int *dimensionSizes, const CkGroupID &clientGID, int bufferSize, const bool &yieldFlag, double progressPeriodInMs, int maxItemsBuffered, int _thresholdFractionNum, int _thresholdFractionDen, int _cutoffFractionNum, int _cutoffFractionDen);
     */
    // Entry point registration at startup
    
    static int reg_GroupMeshStreamer_marshall1();
    // Entry point index lookup
    
    inline static int idx_GroupMeshStreamer_marshall1() {
      static int epidx = reg_GroupMeshStreamer_marshall1();
      return epidx;
    }

    
    static int ckNew(int numDimensions, const int *dimensionSizes, const CkGroupID &clientGID, int bufferSize, const bool &yieldFlag, double progressPeriodInMs, int maxItemsBuffered, int _thresholdFractionNum, int _thresholdFractionDen, int _cutoffFractionNum, int _cutoffFractionDen) { return idx_GroupMeshStreamer_marshall1(); }
    
    static void _call_GroupMeshStreamer_marshall1(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_GroupMeshStreamer_marshall1(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_GroupMeshStreamer_marshall1(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_GroupMeshStreamer_marshall1(PUP::er &p,void *msg);
    /* DECLS: GroupMeshStreamer(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_GroupMeshStreamer_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_GroupMeshStreamer_CkMigrateMessage() {
      static int epidx = reg_GroupMeshStreamer_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_GroupMeshStreamer_CkMigrateMessage(); }
    
    static void _call_GroupMeshStreamer_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_GroupMeshStreamer_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
template <class dtype, class ClientType, class RouterType, int(*EntryMethod)(char* impl_noname_0, void* impl_noname_1)=defaultMeshStreamerDeliver<dtype,ClientType>> class CProxyElement_GroupMeshStreamer: public CProxyElement_MeshStreamer<dtype,RouterType>{
  public:
    typedef GroupMeshStreamer <dtype, ClientType, RouterType, EntryMethod>  local_t;
    typedef CkIndex_GroupMeshStreamer <dtype, ClientType, RouterType, EntryMethod>  index_t;
    typedef CProxy_GroupMeshStreamer <dtype, ClientType, RouterType, EntryMethod>  proxy_t;
    typedef CProxyElement_GroupMeshStreamer <dtype, ClientType, RouterType, EntryMethod>  element_t;
    typedef CProxySection_GroupMeshStreamer <dtype, ClientType, RouterType, EntryMethod>  section_t;


    /* TRAM aggregators */

    CProxyElement_GroupMeshStreamer(void) {
    }
    CProxyElement_GroupMeshStreamer(const IrrGroup *g) : CProxyElement_MeshStreamer<dtype,RouterType>(g){
    }
    CProxyElement_GroupMeshStreamer(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_MeshStreamer<dtype,RouterType>(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_GroupMeshStreamer(CkGroupID _gid,int _onPE) : CProxyElement_MeshStreamer<dtype,RouterType>(_gid,_onPE){
    }

    int ckIsDelegated(void) const
    { return CProxyElement_MeshStreamer<dtype,RouterType>::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxyElement_MeshStreamer<dtype,RouterType>::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxyElement_MeshStreamer<dtype,RouterType>::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxyElement_MeshStreamer<dtype,RouterType>::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxyElement_MeshStreamer<dtype,RouterType>::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxyElement_MeshStreamer<dtype,RouterType>::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxyElement_MeshStreamer<dtype,RouterType>::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_MeshStreamer<dtype,RouterType>::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_MeshStreamer<dtype,RouterType>::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxyElement_MeshStreamer<dtype,RouterType>::ckSetReductionClient(cb); }
int ckGetGroupPe(void) const
{return CProxyElement_MeshStreamer<dtype,RouterType>::ckGetGroupPe();}

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxyElement_MeshStreamer<dtype,RouterType>::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxyElement_MeshStreamer<dtype,RouterType>::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxyElement_MeshStreamer<dtype,RouterType>::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxyElement_MeshStreamer<dtype,RouterType>::ckSetGroupID(g);
    }
    GroupMeshStreamer <dtype, ClientType, RouterType, EntryMethod> * ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static GroupMeshStreamer <dtype, ClientType, RouterType, EntryMethod> * ckLocalBranch(CkGroupID gID) {
      return (GroupMeshStreamer <dtype, ClientType, RouterType, EntryMethod> *)CkLocalBranch(gID);
    }
/* DECLS: GroupMeshStreamer(int numDimensions, const int *dimensionSizes, const CkGroupID &clientGID, int bufferSize, const bool &yieldFlag, double progressPeriodInMs, int maxItemsBuffered, int _thresholdFractionNum, int _thresholdFractionDen, int _cutoffFractionNum, int _cutoffFractionDen);
 */
    

/* DECLS: GroupMeshStreamer(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- collective proxy -------------- */
template <class dtype, class ClientType, class RouterType, int(*EntryMethod)(char* impl_noname_0, void* impl_noname_1)=defaultMeshStreamerDeliver<dtype,ClientType>> class CProxy_GroupMeshStreamer: public CProxy_MeshStreamer<dtype,RouterType>{
  public:
    typedef GroupMeshStreamer <dtype, ClientType, RouterType, EntryMethod>  local_t;
    typedef CkIndex_GroupMeshStreamer <dtype, ClientType, RouterType, EntryMethod>  index_t;
    typedef CProxy_GroupMeshStreamer <dtype, ClientType, RouterType, EntryMethod>  proxy_t;
    typedef CProxyElement_GroupMeshStreamer <dtype, ClientType, RouterType, EntryMethod>  element_t;
    typedef CProxySection_GroupMeshStreamer <dtype, ClientType, RouterType, EntryMethod>  section_t;

    CProxy_GroupMeshStreamer(void) {
    }
    CProxy_GroupMeshStreamer(const IrrGroup *g) : CProxy_MeshStreamer<dtype,RouterType>(g){
    }
    CProxy_GroupMeshStreamer(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_MeshStreamer<dtype,RouterType>(_gid,CK_DELCTOR_ARGS){  }
    CProxy_GroupMeshStreamer(CkGroupID _gid) : CProxy_MeshStreamer<dtype,RouterType>(_gid){  }
    CProxyElement_GroupMeshStreamer <dtype, ClientType, RouterType, EntryMethod>  operator[](int onPE) const
      {return CProxyElement_GroupMeshStreamer <dtype, ClientType, RouterType, EntryMethod> (ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

    int ckIsDelegated(void) const
    { return CProxy_MeshStreamer<dtype,RouterType>::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_MeshStreamer<dtype,RouterType>::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_MeshStreamer<dtype,RouterType>::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_MeshStreamer<dtype,RouterType>::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxy_MeshStreamer<dtype,RouterType>::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxy_MeshStreamer<dtype,RouterType>::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxy_MeshStreamer<dtype,RouterType>::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_MeshStreamer<dtype,RouterType>::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_MeshStreamer<dtype,RouterType>::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxy_MeshStreamer<dtype,RouterType>::ckSetReductionClient(cb); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_MeshStreamer<dtype,RouterType>::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_MeshStreamer<dtype,RouterType>::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_MeshStreamer<dtype,RouterType>::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxy_MeshStreamer<dtype,RouterType>::ckSetGroupID(g);
    }
    GroupMeshStreamer <dtype, ClientType, RouterType, EntryMethod> * ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static GroupMeshStreamer <dtype, ClientType, RouterType, EntryMethod> * ckLocalBranch(CkGroupID gID) {
      return (GroupMeshStreamer <dtype, ClientType, RouterType, EntryMethod> *)CkLocalBranch(gID);
    }
/* DECLS: GroupMeshStreamer(int numDimensions, const int *dimensionSizes, const CkGroupID &clientGID, int bufferSize, const bool &yieldFlag, double progressPeriodInMs, int maxItemsBuffered, int _thresholdFractionNum, int _thresholdFractionDen, int _cutoffFractionNum, int _cutoffFractionDen);
 */
    
    static CkGroupID ckNew(int numDimensions, const int *dimensionSizes, const CkGroupID &clientGID, int bufferSize, const bool &yieldFlag, double progressPeriodInMs, int maxItemsBuffered, int _thresholdFractionNum, int _thresholdFractionDen, int _cutoffFractionNum, int _cutoffFractionDen, const CkEntryOptions *impl_e_opts=NULL);
    CProxy_GroupMeshStreamer(int numDimensions, const int *dimensionSizes, const CkGroupID &clientGID, int bufferSize, const bool &yieldFlag, double progressPeriodInMs, int maxItemsBuffered, int _thresholdFractionNum, int _thresholdFractionDen, int _cutoffFractionNum, int _cutoffFractionDen, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: GroupMeshStreamer(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- section proxy -------------- */
template <class dtype, class ClientType, class RouterType, int(*EntryMethod)(char* impl_noname_0, void* impl_noname_1)=defaultMeshStreamerDeliver<dtype,ClientType>> class CProxySection_GroupMeshStreamer: public CProxySection_MeshStreamer<dtype,RouterType>{
  public:
    typedef GroupMeshStreamer <dtype, ClientType, RouterType, EntryMethod>  local_t;
    typedef CkIndex_GroupMeshStreamer <dtype, ClientType, RouterType, EntryMethod>  index_t;
    typedef CProxy_GroupMeshStreamer <dtype, ClientType, RouterType, EntryMethod>  proxy_t;
    typedef CProxyElement_GroupMeshStreamer <dtype, ClientType, RouterType, EntryMethod>  element_t;
    typedef CProxySection_GroupMeshStreamer <dtype, ClientType, RouterType, EntryMethod>  section_t;

    CProxySection_GroupMeshStreamer(void) {
    }
    CProxySection_GroupMeshStreamer(const IrrGroup *g) : CProxySection_MeshStreamer<dtype,RouterType>(g){
    }
    CProxySection_GroupMeshStreamer(const CkGroupID &_gid,const int *_pelist,int _npes, CK_DELCTOR_PARAM) : CProxySection_MeshStreamer<dtype,RouterType>(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_GroupMeshStreamer(const CkGroupID &_gid,const int *_pelist,int _npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_MeshStreamer<dtype,RouterType>(_gid,_pelist,_npes,factor){  }
    CProxySection_GroupMeshStreamer(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_MeshStreamer<dtype,RouterType>(n,_gid,_pelist,_npes,factor){  }
    CProxySection_GroupMeshStreamer(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, CK_DELCTOR_PARAM) : CProxySection_MeshStreamer<dtype,RouterType>(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

    int ckIsDelegated(void) const
    { return CProxySection_MeshStreamer<dtype,RouterType>::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxySection_MeshStreamer<dtype,RouterType>::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxySection_MeshStreamer<dtype,RouterType>::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxySection_MeshStreamer<dtype,RouterType>::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxySection_MeshStreamer<dtype,RouterType>::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxySection_MeshStreamer<dtype,RouterType>::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxySection_MeshStreamer<dtype,RouterType>::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_MeshStreamer<dtype,RouterType>::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_MeshStreamer<dtype,RouterType>::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxySection_MeshStreamer<dtype,RouterType>::ckSetReductionClient(cb); }
inline int ckGetNumSections() const
{ return CProxySection_MeshStreamer<dtype,RouterType>::ckGetNumSections(); }
inline CkSectionInfo &ckGetSectionInfo()
{ return CProxySection_MeshStreamer<dtype,RouterType>::ckGetSectionInfo(); }
inline CkSectionID *ckGetSectionIDs()
{ return CProxySection_MeshStreamer<dtype,RouterType>::ckGetSectionIDs(); }
inline CkSectionID &ckGetSectionID()
{ return CProxySection_MeshStreamer<dtype,RouterType>::ckGetSectionID(); }
inline CkSectionID &ckGetSectionID(int i)
{ return CProxySection_MeshStreamer<dtype,RouterType>::ckGetSectionID(i); }
inline CkGroupID ckGetGroupIDn(int i) const
{ return CProxySection_MeshStreamer<dtype,RouterType>::ckGetGroupIDn(i); }
inline const int *ckGetElements() const
{ return CProxySection_MeshStreamer<dtype,RouterType>::ckGetElements(); }
inline const int *ckGetElements(int i) const
{ return CProxySection_MeshStreamer<dtype,RouterType>::ckGetElements(i); }
inline int ckGetNumElements() const
{ return CProxySection_MeshStreamer<dtype,RouterType>::ckGetNumElements(); } 
inline int ckGetNumElements(int i) const
{ return CProxySection_MeshStreamer<dtype,RouterType>::ckGetNumElements(i); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxySection_MeshStreamer<dtype,RouterType>::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxySection_MeshStreamer<dtype,RouterType>::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxySection_MeshStreamer<dtype,RouterType>::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxySection_MeshStreamer<dtype,RouterType>::ckSetGroupID(g);
    }
    GroupMeshStreamer <dtype, ClientType, RouterType, EntryMethod> * ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static GroupMeshStreamer <dtype, ClientType, RouterType, EntryMethod> * ckLocalBranch(CkGroupID gID) {
      return (GroupMeshStreamer <dtype, ClientType, RouterType, EntryMethod> *)CkLocalBranch(gID);
    }
/* DECLS: GroupMeshStreamer(int numDimensions, const int *dimensionSizes, const CkGroupID &clientGID, int bufferSize, const bool &yieldFlag, double progressPeriodInMs, int maxItemsBuffered, int _thresholdFractionNum, int _thresholdFractionDen, int _cutoffFractionNum, int _cutoffFractionDen);
 */
    

/* DECLS: GroupMeshStreamer(CkMigrateMessage* impl_msg);
 */

};
#define GroupMeshStreamer_SDAG_CODE 
template <class dtype, class ClientType, class RouterType, int(*EntryMethod)(char* impl_noname_0, void* impl_noname_1)=defaultMeshStreamerDeliver<dtype,ClientType>> 
struct CBase_GroupMeshStreamer;

/* DECLS: template <class dtype, class ClientType, class RouterType, int(*EntryMethod)(char* impl_noname_2, void* impl_noname_3)=defaultMeshStreamerDeliver<dtype,ClientType>> group ArrayMeshStreamer: MeshStreamer<dtype,RouterType>{
ArrayMeshStreamer(int numDimensions, const int *dimensionSizes, const CkArrayID &clientAID, int bufferSize, const bool &yieldFlag, double progressPeriodInMs, int maxItemsBuffered, int _thresholdFractionNum, int _thresholdFractionDen, int _cutoffFractionNum, int _cutoffFractionDen);
void processLocationRequest(const CkArrayIndex &arrayId, int deliveredToPe, int sourcePe);
void resendMisdeliveredItems(const CkArrayIndex &arrayId, int destinationPe);
void updateLocationAtSource(const CkArrayIndex &arrayId, int destinationPe);
ArrayMeshStreamer(CkMigrateMessage* impl_msg);
};
 */
template <class dtype, class ClientType, class RouterType, int(*EntryMethod)(char* impl_noname_2, void* impl_noname_3)>  class ArrayMeshStreamer;
template <class dtype, class ClientType, class RouterType, int(*EntryMethod)(char* impl_noname_2, void* impl_noname_3)>  class CkIndex_ArrayMeshStreamer;
template <class dtype, class ClientType, class RouterType, int(*EntryMethod)(char* impl_noname_2, void* impl_noname_3)>  class CProxy_ArrayMeshStreamer;
template <class dtype, class ClientType, class RouterType, int(*EntryMethod)(char* impl_noname_2, void* impl_noname_3)>  class CProxyElement_ArrayMeshStreamer;
template <class dtype, class ClientType, class RouterType, int(*EntryMethod)(char* impl_noname_2, void* impl_noname_3)>  class CProxySection_ArrayMeshStreamer;
/* --------------- index object ------------------ */
template <class dtype, class ClientType, class RouterType, int(*EntryMethod)(char* impl_noname_2, void* impl_noname_3)=defaultMeshStreamerDeliver<dtype,ClientType>> class CkIndex_ArrayMeshStreamer:public CkIndex_MeshStreamer<dtype,RouterType>{
  public:
    typedef ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod>  local_t;
    typedef CkIndex_ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod>  index_t;
    typedef CProxy_ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod>  proxy_t;
    typedef CProxyElement_ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod>  element_t;
    typedef CProxySection_ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod>  section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: ArrayMeshStreamer(int numDimensions, const int *dimensionSizes, const CkArrayID &clientAID, int bufferSize, const bool &yieldFlag, double progressPeriodInMs, int maxItemsBuffered, int _thresholdFractionNum, int _thresholdFractionDen, int _cutoffFractionNum, int _cutoffFractionDen);
     */
    // Entry point registration at startup
    
    static int reg_ArrayMeshStreamer_marshall1();
    // Entry point index lookup
    
    inline static int idx_ArrayMeshStreamer_marshall1() {
      static int epidx = reg_ArrayMeshStreamer_marshall1();
      return epidx;
    }

    
    static int ckNew(int numDimensions, const int *dimensionSizes, const CkArrayID &clientAID, int bufferSize, const bool &yieldFlag, double progressPeriodInMs, int maxItemsBuffered, int _thresholdFractionNum, int _thresholdFractionDen, int _cutoffFractionNum, int _cutoffFractionDen) { return idx_ArrayMeshStreamer_marshall1(); }
    
    static void _call_ArrayMeshStreamer_marshall1(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ArrayMeshStreamer_marshall1(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_ArrayMeshStreamer_marshall1(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_ArrayMeshStreamer_marshall1(PUP::er &p,void *msg);
    /* DECLS: void processLocationRequest(const CkArrayIndex &arrayId, int deliveredToPe, int sourcePe);
     */
    // Entry point registration at startup
    
    static int reg_processLocationRequest_marshall2();
    // Entry point index lookup
    
    inline static int idx_processLocationRequest_marshall2() {
      static int epidx = reg_processLocationRequest_marshall2();
      return epidx;
    }

    
    inline static int idx_processLocationRequest(void (ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ::*)(const CkArrayIndex &arrayId, int deliveredToPe, int sourcePe) ) {
      return idx_processLocationRequest_marshall2();
    }


    
    static int processLocationRequest(const CkArrayIndex &arrayId, int deliveredToPe, int sourcePe) { return idx_processLocationRequest_marshall2(); }
    
    static void _call_processLocationRequest_marshall2(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_processLocationRequest_marshall2(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_processLocationRequest_marshall2(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_processLocationRequest_marshall2(PUP::er &p,void *msg);
    /* DECLS: void resendMisdeliveredItems(const CkArrayIndex &arrayId, int destinationPe);
     */
    // Entry point registration at startup
    
    static int reg_resendMisdeliveredItems_marshall3();
    // Entry point index lookup
    
    inline static int idx_resendMisdeliveredItems_marshall3() {
      static int epidx = reg_resendMisdeliveredItems_marshall3();
      return epidx;
    }

    
    inline static int idx_resendMisdeliveredItems(void (ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ::*)(const CkArrayIndex &arrayId, int destinationPe) ) {
      return idx_resendMisdeliveredItems_marshall3();
    }


    
    static int resendMisdeliveredItems(const CkArrayIndex &arrayId, int destinationPe) { return idx_resendMisdeliveredItems_marshall3(); }
    
    static void _call_resendMisdeliveredItems_marshall3(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_resendMisdeliveredItems_marshall3(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_resendMisdeliveredItems_marshall3(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_resendMisdeliveredItems_marshall3(PUP::er &p,void *msg);
    /* DECLS: void updateLocationAtSource(const CkArrayIndex &arrayId, int destinationPe);
     */
    // Entry point registration at startup
    
    static int reg_updateLocationAtSource_marshall4();
    // Entry point index lookup
    
    inline static int idx_updateLocationAtSource_marshall4() {
      static int epidx = reg_updateLocationAtSource_marshall4();
      return epidx;
    }

    
    inline static int idx_updateLocationAtSource(void (ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> ::*)(const CkArrayIndex &arrayId, int destinationPe) ) {
      return idx_updateLocationAtSource_marshall4();
    }


    
    static int updateLocationAtSource(const CkArrayIndex &arrayId, int destinationPe) { return idx_updateLocationAtSource_marshall4(); }
    
    static void _call_updateLocationAtSource_marshall4(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_updateLocationAtSource_marshall4(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_updateLocationAtSource_marshall4(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_updateLocationAtSource_marshall4(PUP::er &p,void *msg);
    /* DECLS: ArrayMeshStreamer(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_ArrayMeshStreamer_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_ArrayMeshStreamer_CkMigrateMessage() {
      static int epidx = reg_ArrayMeshStreamer_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_ArrayMeshStreamer_CkMigrateMessage(); }
    
    static void _call_ArrayMeshStreamer_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ArrayMeshStreamer_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
template <class dtype, class ClientType, class RouterType, int(*EntryMethod)(char* impl_noname_2, void* impl_noname_3)=defaultMeshStreamerDeliver<dtype,ClientType>> class CProxyElement_ArrayMeshStreamer: public CProxyElement_MeshStreamer<dtype,RouterType>{
  public:
    typedef ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod>  local_t;
    typedef CkIndex_ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod>  index_t;
    typedef CProxy_ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod>  proxy_t;
    typedef CProxyElement_ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod>  element_t;
    typedef CProxySection_ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod>  section_t;


    /* TRAM aggregators */

    CProxyElement_ArrayMeshStreamer(void) {
    }
    CProxyElement_ArrayMeshStreamer(const IrrGroup *g) : CProxyElement_MeshStreamer<dtype,RouterType>(g){
    }
    CProxyElement_ArrayMeshStreamer(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_MeshStreamer<dtype,RouterType>(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_ArrayMeshStreamer(CkGroupID _gid,int _onPE) : CProxyElement_MeshStreamer<dtype,RouterType>(_gid,_onPE){
    }

    int ckIsDelegated(void) const
    { return CProxyElement_MeshStreamer<dtype,RouterType>::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxyElement_MeshStreamer<dtype,RouterType>::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxyElement_MeshStreamer<dtype,RouterType>::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxyElement_MeshStreamer<dtype,RouterType>::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxyElement_MeshStreamer<dtype,RouterType>::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxyElement_MeshStreamer<dtype,RouterType>::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxyElement_MeshStreamer<dtype,RouterType>::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_MeshStreamer<dtype,RouterType>::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_MeshStreamer<dtype,RouterType>::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxyElement_MeshStreamer<dtype,RouterType>::ckSetReductionClient(cb); }
int ckGetGroupPe(void) const
{return CProxyElement_MeshStreamer<dtype,RouterType>::ckGetGroupPe();}

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxyElement_MeshStreamer<dtype,RouterType>::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxyElement_MeshStreamer<dtype,RouterType>::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxyElement_MeshStreamer<dtype,RouterType>::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxyElement_MeshStreamer<dtype,RouterType>::ckSetGroupID(g);
    }
    ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> * ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> * ckLocalBranch(CkGroupID gID) {
      return (ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> *)CkLocalBranch(gID);
    }
/* DECLS: ArrayMeshStreamer(int numDimensions, const int *dimensionSizes, const CkArrayID &clientAID, int bufferSize, const bool &yieldFlag, double progressPeriodInMs, int maxItemsBuffered, int _thresholdFractionNum, int _thresholdFractionDen, int _cutoffFractionNum, int _cutoffFractionDen);
 */
    

/* DECLS: void processLocationRequest(const CkArrayIndex &arrayId, int deliveredToPe, int sourcePe);
 */
    
    void processLocationRequest(const CkArrayIndex &arrayId, int deliveredToPe, int sourcePe, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void resendMisdeliveredItems(const CkArrayIndex &arrayId, int destinationPe);
 */
    
    void resendMisdeliveredItems(const CkArrayIndex &arrayId, int destinationPe, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void updateLocationAtSource(const CkArrayIndex &arrayId, int destinationPe);
 */
    
    void updateLocationAtSource(const CkArrayIndex &arrayId, int destinationPe, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: ArrayMeshStreamer(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- collective proxy -------------- */
template <class dtype, class ClientType, class RouterType, int(*EntryMethod)(char* impl_noname_2, void* impl_noname_3)=defaultMeshStreamerDeliver<dtype,ClientType>> class CProxy_ArrayMeshStreamer: public CProxy_MeshStreamer<dtype,RouterType>{
  public:
    typedef ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod>  local_t;
    typedef CkIndex_ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod>  index_t;
    typedef CProxy_ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod>  proxy_t;
    typedef CProxyElement_ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod>  element_t;
    typedef CProxySection_ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod>  section_t;

    CProxy_ArrayMeshStreamer(void) {
    }
    CProxy_ArrayMeshStreamer(const IrrGroup *g) : CProxy_MeshStreamer<dtype,RouterType>(g){
    }
    CProxy_ArrayMeshStreamer(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_MeshStreamer<dtype,RouterType>(_gid,CK_DELCTOR_ARGS){  }
    CProxy_ArrayMeshStreamer(CkGroupID _gid) : CProxy_MeshStreamer<dtype,RouterType>(_gid){  }
    CProxyElement_ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod>  operator[](int onPE) const
      {return CProxyElement_ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> (ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

    int ckIsDelegated(void) const
    { return CProxy_MeshStreamer<dtype,RouterType>::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_MeshStreamer<dtype,RouterType>::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_MeshStreamer<dtype,RouterType>::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_MeshStreamer<dtype,RouterType>::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxy_MeshStreamer<dtype,RouterType>::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxy_MeshStreamer<dtype,RouterType>::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxy_MeshStreamer<dtype,RouterType>::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_MeshStreamer<dtype,RouterType>::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_MeshStreamer<dtype,RouterType>::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxy_MeshStreamer<dtype,RouterType>::ckSetReductionClient(cb); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_MeshStreamer<dtype,RouterType>::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_MeshStreamer<dtype,RouterType>::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_MeshStreamer<dtype,RouterType>::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxy_MeshStreamer<dtype,RouterType>::ckSetGroupID(g);
    }
    ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> * ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> * ckLocalBranch(CkGroupID gID) {
      return (ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> *)CkLocalBranch(gID);
    }
/* DECLS: ArrayMeshStreamer(int numDimensions, const int *dimensionSizes, const CkArrayID &clientAID, int bufferSize, const bool &yieldFlag, double progressPeriodInMs, int maxItemsBuffered, int _thresholdFractionNum, int _thresholdFractionDen, int _cutoffFractionNum, int _cutoffFractionDen);
 */
    
    static CkGroupID ckNew(int numDimensions, const int *dimensionSizes, const CkArrayID &clientAID, int bufferSize, const bool &yieldFlag, double progressPeriodInMs, int maxItemsBuffered, int _thresholdFractionNum, int _thresholdFractionDen, int _cutoffFractionNum, int _cutoffFractionDen, const CkEntryOptions *impl_e_opts=NULL);
    CProxy_ArrayMeshStreamer(int numDimensions, const int *dimensionSizes, const CkArrayID &clientAID, int bufferSize, const bool &yieldFlag, double progressPeriodInMs, int maxItemsBuffered, int _thresholdFractionNum, int _thresholdFractionDen, int _cutoffFractionNum, int _cutoffFractionDen, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void processLocationRequest(const CkArrayIndex &arrayId, int deliveredToPe, int sourcePe);
 */
    
    void processLocationRequest(const CkArrayIndex &arrayId, int deliveredToPe, int sourcePe, const CkEntryOptions *impl_e_opts=NULL);
    
    void processLocationRequest(const CkArrayIndex &arrayId, int deliveredToPe, int sourcePe, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void processLocationRequest(const CkArrayIndex &arrayId, int deliveredToPe, int sourcePe, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void resendMisdeliveredItems(const CkArrayIndex &arrayId, int destinationPe);
 */
    
    void resendMisdeliveredItems(const CkArrayIndex &arrayId, int destinationPe, const CkEntryOptions *impl_e_opts=NULL);
    
    void resendMisdeliveredItems(const CkArrayIndex &arrayId, int destinationPe, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void resendMisdeliveredItems(const CkArrayIndex &arrayId, int destinationPe, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void updateLocationAtSource(const CkArrayIndex &arrayId, int destinationPe);
 */
    
    void updateLocationAtSource(const CkArrayIndex &arrayId, int destinationPe, const CkEntryOptions *impl_e_opts=NULL);
    
    void updateLocationAtSource(const CkArrayIndex &arrayId, int destinationPe, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void updateLocationAtSource(const CkArrayIndex &arrayId, int destinationPe, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: ArrayMeshStreamer(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- section proxy -------------- */
template <class dtype, class ClientType, class RouterType, int(*EntryMethod)(char* impl_noname_2, void* impl_noname_3)=defaultMeshStreamerDeliver<dtype,ClientType>> class CProxySection_ArrayMeshStreamer: public CProxySection_MeshStreamer<dtype,RouterType>{
  public:
    typedef ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod>  local_t;
    typedef CkIndex_ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod>  index_t;
    typedef CProxy_ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod>  proxy_t;
    typedef CProxyElement_ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod>  element_t;
    typedef CProxySection_ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod>  section_t;

    CProxySection_ArrayMeshStreamer(void) {
    }
    CProxySection_ArrayMeshStreamer(const IrrGroup *g) : CProxySection_MeshStreamer<dtype,RouterType>(g){
    }
    CProxySection_ArrayMeshStreamer(const CkGroupID &_gid,const int *_pelist,int _npes, CK_DELCTOR_PARAM) : CProxySection_MeshStreamer<dtype,RouterType>(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_ArrayMeshStreamer(const CkGroupID &_gid,const int *_pelist,int _npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_MeshStreamer<dtype,RouterType>(_gid,_pelist,_npes,factor){  }
    CProxySection_ArrayMeshStreamer(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_MeshStreamer<dtype,RouterType>(n,_gid,_pelist,_npes,factor){  }
    CProxySection_ArrayMeshStreamer(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, CK_DELCTOR_PARAM) : CProxySection_MeshStreamer<dtype,RouterType>(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

    int ckIsDelegated(void) const
    { return CProxySection_MeshStreamer<dtype,RouterType>::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxySection_MeshStreamer<dtype,RouterType>::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxySection_MeshStreamer<dtype,RouterType>::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxySection_MeshStreamer<dtype,RouterType>::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxySection_MeshStreamer<dtype,RouterType>::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxySection_MeshStreamer<dtype,RouterType>::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxySection_MeshStreamer<dtype,RouterType>::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_MeshStreamer<dtype,RouterType>::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_MeshStreamer<dtype,RouterType>::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxySection_MeshStreamer<dtype,RouterType>::ckSetReductionClient(cb); }
inline int ckGetNumSections() const
{ return CProxySection_MeshStreamer<dtype,RouterType>::ckGetNumSections(); }
inline CkSectionInfo &ckGetSectionInfo()
{ return CProxySection_MeshStreamer<dtype,RouterType>::ckGetSectionInfo(); }
inline CkSectionID *ckGetSectionIDs()
{ return CProxySection_MeshStreamer<dtype,RouterType>::ckGetSectionIDs(); }
inline CkSectionID &ckGetSectionID()
{ return CProxySection_MeshStreamer<dtype,RouterType>::ckGetSectionID(); }
inline CkSectionID &ckGetSectionID(int i)
{ return CProxySection_MeshStreamer<dtype,RouterType>::ckGetSectionID(i); }
inline CkGroupID ckGetGroupIDn(int i) const
{ return CProxySection_MeshStreamer<dtype,RouterType>::ckGetGroupIDn(i); }
inline const int *ckGetElements() const
{ return CProxySection_MeshStreamer<dtype,RouterType>::ckGetElements(); }
inline const int *ckGetElements(int i) const
{ return CProxySection_MeshStreamer<dtype,RouterType>::ckGetElements(i); }
inline int ckGetNumElements() const
{ return CProxySection_MeshStreamer<dtype,RouterType>::ckGetNumElements(); } 
inline int ckGetNumElements(int i) const
{ return CProxySection_MeshStreamer<dtype,RouterType>::ckGetNumElements(i); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxySection_MeshStreamer<dtype,RouterType>::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxySection_MeshStreamer<dtype,RouterType>::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxySection_MeshStreamer<dtype,RouterType>::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxySection_MeshStreamer<dtype,RouterType>::ckSetGroupID(g);
    }
    ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> * ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> * ckLocalBranch(CkGroupID gID) {
      return (ArrayMeshStreamer <dtype, ClientType, RouterType, EntryMethod> *)CkLocalBranch(gID);
    }
/* DECLS: ArrayMeshStreamer(int numDimensions, const int *dimensionSizes, const CkArrayID &clientAID, int bufferSize, const bool &yieldFlag, double progressPeriodInMs, int maxItemsBuffered, int _thresholdFractionNum, int _thresholdFractionDen, int _cutoffFractionNum, int _cutoffFractionDen);
 */
    

/* DECLS: void processLocationRequest(const CkArrayIndex &arrayId, int deliveredToPe, int sourcePe);
 */
    
    void processLocationRequest(const CkArrayIndex &arrayId, int deliveredToPe, int sourcePe, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void resendMisdeliveredItems(const CkArrayIndex &arrayId, int destinationPe);
 */
    
    void resendMisdeliveredItems(const CkArrayIndex &arrayId, int destinationPe, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void updateLocationAtSource(const CkArrayIndex &arrayId, int destinationPe);
 */
    
    void updateLocationAtSource(const CkArrayIndex &arrayId, int destinationPe, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: ArrayMeshStreamer(CkMigrateMessage* impl_msg);
 */

};
#define ArrayMeshStreamer_SDAG_CODE 
template <class dtype, class ClientType, class RouterType, int(*EntryMethod)(char* impl_noname_2, void* impl_noname_3)=defaultMeshStreamerDeliver<dtype,ClientType>> 
struct CBase_ArrayMeshStreamer;




/* ---------------- method closures -------------- */
template <class dtype, class RouterType> class Closure_MeshStreamer {
  public:


    struct enablePeriodicFlushing_2_closure;


    struct finish_3_closure;


    struct init_4_closure;


    struct init_5_closure;


    struct init_6_closure;


    struct init_7_closure;


    struct syncInit_8_closure;



};

/* ---------------- method closures -------------- */
template <class dtype, class ClientType, class RouterType, int(*EntryMethod)(char* impl_noname_0, void* impl_noname_1)=defaultMeshStreamerDeliver<dtype,ClientType>> class Closure_GroupMeshStreamer {
  public:


};

/* ---------------- method closures -------------- */
template <class dtype, class ClientType, class RouterType, int(*EntryMethod)(char* impl_noname_2, void* impl_noname_3)=defaultMeshStreamerDeliver<dtype,ClientType>> class Closure_ArrayMeshStreamer {
  public:


    struct processLocationRequest_2_closure;


    struct resendMisdeliveredItems_3_closure;


    struct updateLocationAtSource_4_closure;


};

extern void _registerNDMeshStreamer(void);
#endif
