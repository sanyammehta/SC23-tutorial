#ifndef _DECL_TraceProjections_H_
#define _DECL_TraceProjections_H_
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
/* DECLS: message KMeansStatsMessage{
bool filter[];
double kSeedsPos[];
double stats[];
}
;
 */
class KMeansStatsMessage;
class CMessage_KMeansStatsMessage:public CkMessage{
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
    CMessage_KMeansStatsMessage();
    static void *pack(KMeansStatsMessage *p);
    static KMeansStatsMessage* unpack(void* p);
    void *operator new(size_t, int, int, int);
    void *operator new(size_t, int, int, int, const int);
    void *operator new(size_t, int, int, int, const int, const GroupDepNum);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, int, int, int){dealloc(p);}
    void operator delete(void *p, int, int, int, const int){dealloc(p);}
    void operator delete(void *p, int, int, int, const int, const GroupDepNum){dealloc(p);}
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
/* DECLS: message KSeedsMessage{
double kSeedsPos[];
}
;
 */
class KSeedsMessage;
class CMessage_KSeedsMessage:public CkMessage{
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
    CMessage_KSeedsMessage();
    static void *pack(KSeedsMessage *p);
    static KSeedsMessage* unpack(void* p);
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
/* DECLS: message KSelectionMessage{
int minIDs[];
int maxIDs[];
}
;
 */
class KSelectionMessage;
class CMessage_KSelectionMessage:public CkMessage{
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
    CMessage_KSelectionMessage();
    static void *pack(KSelectionMessage *p);
    static KSelectionMessage* unpack(void* p);
    void *operator new(size_t, int, int);
    void *operator new(size_t, int, int, const int);
    void *operator new(size_t, int, int, const int, const GroupDepNum);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, int, int){dealloc(p);}
    void operator delete(void *p, int, int, const int){dealloc(p);}
    void operator delete(void *p, int, int, const int, const GroupDepNum){dealloc(p);}
#endif
    static void __register(const char *s, size_t size, CkPackFnPtr pack, CkUnpackFnPtr unpack) {
      __idx = CkRegisterMsg(s, pack, unpack, dealloc, size);
    }
};

/* DECLS: mainchare TraceProjectionsInit: Chare{
TraceProjectionsInit(CkArgMsg* impl_msg);
};
 */
 class TraceProjectionsInit;
 class CkIndex_TraceProjectionsInit;
 class CProxy_TraceProjectionsInit;
/* --------------- index object ------------------ */
class CkIndex_TraceProjectionsInit:public CkIndex_Chare{
  public:
    typedef TraceProjectionsInit local_t;
    typedef CkIndex_TraceProjectionsInit index_t;
    typedef CProxy_TraceProjectionsInit proxy_t;
    typedef CProxy_TraceProjectionsInit element_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: TraceProjectionsInit(CkArgMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_TraceProjectionsInit_CkArgMsg();
    // Entry point index lookup
    
    inline static int idx_TraceProjectionsInit_CkArgMsg() {
      static int epidx = reg_TraceProjectionsInit_CkArgMsg();
      return epidx;
    }

    
    static int ckNew(CkArgMsg* impl_msg) { return idx_TraceProjectionsInit_CkArgMsg(); }
    
    static void _call_TraceProjectionsInit_CkArgMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_TraceProjectionsInit_CkArgMsg(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxy_TraceProjectionsInit:public CProxy_Chare{
  public:
    typedef TraceProjectionsInit local_t;
    typedef CkIndex_TraceProjectionsInit index_t;
    typedef CProxy_TraceProjectionsInit proxy_t;
    typedef CProxy_TraceProjectionsInit element_t;

    CProxy_TraceProjectionsInit(void) {};
    CProxy_TraceProjectionsInit(CkChareID __cid) : CProxy_Chare(__cid){  }
    CProxy_TraceProjectionsInit(const Chare *c) : CProxy_Chare(c){  }

    int ckIsDelegated(void) const
    { return CProxy_Chare::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_Chare::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_Chare::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_Chare::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxy_Chare::ckCheck(); }
    const CkChareID &ckGetChareID(void) const
    { return CProxy_Chare::ckGetChareID(); }
    operator const CkChareID &(void) const
    { return ckGetChareID(); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_Chare::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_Chare::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_Chare::pup(p);
    }

    void ckSetChareID(const CkChareID &c)
    {      CProxy_Chare::ckSetChareID(c); }
    TraceProjectionsInit *ckLocal(void) const
    { return (TraceProjectionsInit *)CkLocalChare(&ckGetChareID()); }
/* DECLS: TraceProjectionsInit(CkArgMsg* impl_msg);
 */
    static CkChareID ckNew(CkArgMsg* impl_msg, int onPE=CK_PE_ANY);
    static void ckNew(CkArgMsg* impl_msg, CkChareID* pcid, int onPE=CK_PE_ANY);

};
#define TraceProjectionsInit_SDAG_CODE 
typedef CBaseT1<Chare, CProxy_TraceProjectionsInit>CBase_TraceProjectionsInit;



/* DECLS: readonly CkGroupID traceProjectionsGID;
 */

/* DECLS: readonly CkGroupID kMeansGID;
 */

/* DECLS: group KMeansBOC: IrrGroup{
KMeansBOC(const bool &impl_noname_0, int impl_noname_1, int impl_noname_2, double impl_noname_3, const bool &impl_noname_4);
void startKMeansAnalysis();
void flushCheck(const bool &impl_noname_5);
void flushCheckDone();
void getNextPhaseMetrics();
void globalMetricRefinement(CkReductionMsg* impl_msg);
void findInitialClusters(KMeansStatsMessage* impl_msg);
void updateKSeeds(const double *result, int n);
void updateSeedMembership(KSeedsMessage* impl_msg);
void collectDistances(KSelectionMessage* impl_msg);
void findNextMinMax(CkReductionMsg* impl_msg);
void phaseDone();
KMeansBOC(CkMigrateMessage* impl_msg);
};
 */
 class KMeansBOC;
 class CkIndex_KMeansBOC;
 class CProxy_KMeansBOC;
 class CProxyElement_KMeansBOC;
 class CProxySection_KMeansBOC;
/* --------------- index object ------------------ */
class CkIndex_KMeansBOC:public CkIndex_IrrGroup{
  public:
    typedef KMeansBOC local_t;
    typedef CkIndex_KMeansBOC index_t;
    typedef CProxy_KMeansBOC proxy_t;
    typedef CProxyElement_KMeansBOC element_t;
    typedef CProxySection_KMeansBOC section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: KMeansBOC(const bool &impl_noname_0, int impl_noname_1, int impl_noname_2, double impl_noname_3, const bool &impl_noname_4);
     */
    // Entry point registration at startup
    
    static int reg_KMeansBOC_marshall1();
    // Entry point index lookup
    
    inline static int idx_KMeansBOC_marshall1() {
      static int epidx = reg_KMeansBOC_marshall1();
      return epidx;
    }

    
    static int ckNew(const bool &impl_noname_0, int impl_noname_1, int impl_noname_2, double impl_noname_3, const bool &impl_noname_4) { return idx_KMeansBOC_marshall1(); }
    
    static void _call_KMeansBOC_marshall1(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_KMeansBOC_marshall1(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_KMeansBOC_marshall1(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_KMeansBOC_marshall1(PUP::er &p,void *msg);
    /* DECLS: void startKMeansAnalysis();
     */
    // Entry point registration at startup
    
    static int reg_startKMeansAnalysis_void();
    // Entry point index lookup
    
    inline static int idx_startKMeansAnalysis_void() {
      static int epidx = reg_startKMeansAnalysis_void();
      return epidx;
    }

    
    inline static int idx_startKMeansAnalysis(void (KMeansBOC::*)() ) {
      return idx_startKMeansAnalysis_void();
    }


    
    static int startKMeansAnalysis() { return idx_startKMeansAnalysis_void(); }
    
    static void _call_startKMeansAnalysis_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_startKMeansAnalysis_void(void* impl_msg, void* impl_obj);
    /* DECLS: void flushCheck(const bool &impl_noname_5);
     */
    // Entry point registration at startup
    
    static int reg_flushCheck_marshall3();
    // Entry point index lookup
    
    inline static int idx_flushCheck_marshall3() {
      static int epidx = reg_flushCheck_marshall3();
      return epidx;
    }

    
    inline static int idx_flushCheck(void (KMeansBOC::*)(const bool &impl_noname_5) ) {
      return idx_flushCheck_marshall3();
    }


    
    static int flushCheck(const bool &impl_noname_5) { return idx_flushCheck_marshall3(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_flushCheck_marshall3();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_flushCheck_marshall3() {
      static int epidx = reg_redn_wrapper_flushCheck_marshall3();
      return epidx;
    }
    
    static int redn_wrapper_flushCheck(CkReductionMsg* impl_msg) { return idx_redn_wrapper_flushCheck_marshall3(); }
    
    static void _call_redn_wrapper_flushCheck_marshall3(void* impl_msg, void* impl_obj_void);
    
    static void _call_flushCheck_marshall3(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_flushCheck_marshall3(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_flushCheck_marshall3(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_flushCheck_marshall3(PUP::er &p,void *msg);
    /* DECLS: void flushCheckDone();
     */
    // Entry point registration at startup
    
    static int reg_flushCheckDone_void();
    // Entry point index lookup
    
    inline static int idx_flushCheckDone_void() {
      static int epidx = reg_flushCheckDone_void();
      return epidx;
    }

    
    inline static int idx_flushCheckDone(void (KMeansBOC::*)() ) {
      return idx_flushCheckDone_void();
    }


    
    static int flushCheckDone() { return idx_flushCheckDone_void(); }
    
    static void _call_flushCheckDone_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_flushCheckDone_void(void* impl_msg, void* impl_obj);
    /* DECLS: void getNextPhaseMetrics();
     */
    // Entry point registration at startup
    
    static int reg_getNextPhaseMetrics_void();
    // Entry point index lookup
    
    inline static int idx_getNextPhaseMetrics_void() {
      static int epidx = reg_getNextPhaseMetrics_void();
      return epidx;
    }

    
    inline static int idx_getNextPhaseMetrics(void (KMeansBOC::*)() ) {
      return idx_getNextPhaseMetrics_void();
    }


    
    static int getNextPhaseMetrics() { return idx_getNextPhaseMetrics_void(); }
    
    static void _call_getNextPhaseMetrics_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_getNextPhaseMetrics_void(void* impl_msg, void* impl_obj);
    /* DECLS: void globalMetricRefinement(CkReductionMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_globalMetricRefinement_CkReductionMsg();
    // Entry point index lookup
    
    inline static int idx_globalMetricRefinement_CkReductionMsg() {
      static int epidx = reg_globalMetricRefinement_CkReductionMsg();
      return epidx;
    }

    
    inline static int idx_globalMetricRefinement(void (KMeansBOC::*)(CkReductionMsg* impl_msg) ) {
      return idx_globalMetricRefinement_CkReductionMsg();
    }


    
    static int globalMetricRefinement(CkReductionMsg* impl_msg) { return idx_globalMetricRefinement_CkReductionMsg(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_globalMetricRefinement_CkReductionMsg();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_globalMetricRefinement_CkReductionMsg() {
      static int epidx = reg_redn_wrapper_globalMetricRefinement_CkReductionMsg();
      return epidx;
    }
    
    static int redn_wrapper_globalMetricRefinement(CkReductionMsg* impl_msg) { return idx_redn_wrapper_globalMetricRefinement_CkReductionMsg(); }
    
    static void _call_redn_wrapper_globalMetricRefinement_CkReductionMsg(void* impl_msg, void* impl_obj_void);
    
    static void _call_globalMetricRefinement_CkReductionMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_globalMetricRefinement_CkReductionMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void findInitialClusters(KMeansStatsMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_findInitialClusters_KMeansStatsMessage();
    // Entry point index lookup
    
    inline static int idx_findInitialClusters_KMeansStatsMessage() {
      static int epidx = reg_findInitialClusters_KMeansStatsMessage();
      return epidx;
    }

    
    inline static int idx_findInitialClusters(void (KMeansBOC::*)(KMeansStatsMessage* impl_msg) ) {
      return idx_findInitialClusters_KMeansStatsMessage();
    }


    
    static int findInitialClusters(KMeansStatsMessage* impl_msg) { return idx_findInitialClusters_KMeansStatsMessage(); }
    
    static void _call_findInitialClusters_KMeansStatsMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_findInitialClusters_KMeansStatsMessage(void* impl_msg, void* impl_obj);
    /* DECLS: void updateKSeeds(const double *result, int n);
     */
    // Entry point registration at startup
    
    static int reg_updateKSeeds_marshall8();
    // Entry point index lookup
    
    inline static int idx_updateKSeeds_marshall8() {
      static int epidx = reg_updateKSeeds_marshall8();
      return epidx;
    }

    
    inline static int idx_updateKSeeds(void (KMeansBOC::*)(const double *result, int n) ) {
      return idx_updateKSeeds_marshall8();
    }


    
    static int updateKSeeds(const double *result, int n) { return idx_updateKSeeds_marshall8(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_updateKSeeds_marshall8();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_updateKSeeds_marshall8() {
      static int epidx = reg_redn_wrapper_updateKSeeds_marshall8();
      return epidx;
    }
    
    static int redn_wrapper_updateKSeeds(CkReductionMsg* impl_msg) { return idx_redn_wrapper_updateKSeeds_marshall8(); }
    
    static void _call_redn_wrapper_updateKSeeds_marshall8(void* impl_msg, void* impl_obj_void);
    
    static void _call_updateKSeeds_marshall8(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_updateKSeeds_marshall8(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_updateKSeeds_marshall8(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_updateKSeeds_marshall8(PUP::er &p,void *msg);
    /* DECLS: void updateSeedMembership(KSeedsMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_updateSeedMembership_KSeedsMessage();
    // Entry point index lookup
    
    inline static int idx_updateSeedMembership_KSeedsMessage() {
      static int epidx = reg_updateSeedMembership_KSeedsMessage();
      return epidx;
    }

    
    inline static int idx_updateSeedMembership(void (KMeansBOC::*)(KSeedsMessage* impl_msg) ) {
      return idx_updateSeedMembership_KSeedsMessage();
    }


    
    static int updateSeedMembership(KSeedsMessage* impl_msg) { return idx_updateSeedMembership_KSeedsMessage(); }
    
    static void _call_updateSeedMembership_KSeedsMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_updateSeedMembership_KSeedsMessage(void* impl_msg, void* impl_obj);
    /* DECLS: void collectDistances(KSelectionMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_collectDistances_KSelectionMessage();
    // Entry point index lookup
    
    inline static int idx_collectDistances_KSelectionMessage() {
      static int epidx = reg_collectDistances_KSelectionMessage();
      return epidx;
    }

    
    inline static int idx_collectDistances(void (KMeansBOC::*)(KSelectionMessage* impl_msg) ) {
      return idx_collectDistances_KSelectionMessage();
    }


    
    static int collectDistances(KSelectionMessage* impl_msg) { return idx_collectDistances_KSelectionMessage(); }
    
    static void _call_collectDistances_KSelectionMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_collectDistances_KSelectionMessage(void* impl_msg, void* impl_obj);
    /* DECLS: void findNextMinMax(CkReductionMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_findNextMinMax_CkReductionMsg();
    // Entry point index lookup
    
    inline static int idx_findNextMinMax_CkReductionMsg() {
      static int epidx = reg_findNextMinMax_CkReductionMsg();
      return epidx;
    }

    
    inline static int idx_findNextMinMax(void (KMeansBOC::*)(CkReductionMsg* impl_msg) ) {
      return idx_findNextMinMax_CkReductionMsg();
    }


    
    static int findNextMinMax(CkReductionMsg* impl_msg) { return idx_findNextMinMax_CkReductionMsg(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_findNextMinMax_CkReductionMsg();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_findNextMinMax_CkReductionMsg() {
      static int epidx = reg_redn_wrapper_findNextMinMax_CkReductionMsg();
      return epidx;
    }
    
    static int redn_wrapper_findNextMinMax(CkReductionMsg* impl_msg) { return idx_redn_wrapper_findNextMinMax_CkReductionMsg(); }
    
    static void _call_redn_wrapper_findNextMinMax_CkReductionMsg(void* impl_msg, void* impl_obj_void);
    
    static void _call_findNextMinMax_CkReductionMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_findNextMinMax_CkReductionMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void phaseDone();
     */
    // Entry point registration at startup
    
    static int reg_phaseDone_void();
    // Entry point index lookup
    
    inline static int idx_phaseDone_void() {
      static int epidx = reg_phaseDone_void();
      return epidx;
    }

    
    inline static int idx_phaseDone(void (KMeansBOC::*)() ) {
      return idx_phaseDone_void();
    }


    
    static int phaseDone() { return idx_phaseDone_void(); }
    
    static void _call_phaseDone_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_phaseDone_void(void* impl_msg, void* impl_obj);
    /* DECLS: KMeansBOC(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_KMeansBOC_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_KMeansBOC_CkMigrateMessage() {
      static int epidx = reg_KMeansBOC_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_KMeansBOC_CkMigrateMessage(); }
    
    static void _call_KMeansBOC_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_KMeansBOC_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_KMeansBOC: public CProxyElement_IrrGroup{
  public:
    typedef KMeansBOC local_t;
    typedef CkIndex_KMeansBOC index_t;
    typedef CProxy_KMeansBOC proxy_t;
    typedef CProxyElement_KMeansBOC element_t;
    typedef CProxySection_KMeansBOC section_t;


    /* TRAM aggregators */

    CProxyElement_KMeansBOC(void) {
    }
    CProxyElement_KMeansBOC(const IrrGroup *g) : CProxyElement_IrrGroup(g){
    }
    CProxyElement_KMeansBOC(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_IrrGroup(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_KMeansBOC(CkGroupID _gid,int _onPE) : CProxyElement_IrrGroup(_gid,_onPE){
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
    KMeansBOC* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static KMeansBOC* ckLocalBranch(CkGroupID gID) {
      return (KMeansBOC*)CkLocalBranch(gID);
    }
/* DECLS: KMeansBOC(const bool &impl_noname_0, int impl_noname_1, int impl_noname_2, double impl_noname_3, const bool &impl_noname_4);
 */
    

/* DECLS: void startKMeansAnalysis();
 */
    
    void startKMeansAnalysis(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void flushCheck(const bool &impl_noname_5);
 */
    
    void flushCheck(const bool &impl_noname_5, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void flushCheckDone();
 */
    
    void flushCheckDone(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void getNextPhaseMetrics();
 */
    
    void getNextPhaseMetrics(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void globalMetricRefinement(CkReductionMsg* impl_msg);
 */
    
    void globalMetricRefinement(CkReductionMsg* impl_msg);

/* DECLS: void findInitialClusters(KMeansStatsMessage* impl_msg);
 */
    
    void findInitialClusters(KMeansStatsMessage* impl_msg);

/* DECLS: void updateKSeeds(const double *result, int n);
 */
    
    void updateKSeeds(const double *result, int n, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void updateSeedMembership(KSeedsMessage* impl_msg);
 */
    
    void updateSeedMembership(KSeedsMessage* impl_msg);

/* DECLS: void collectDistances(KSelectionMessage* impl_msg);
 */
    
    void collectDistances(KSelectionMessage* impl_msg);

/* DECLS: void findNextMinMax(CkReductionMsg* impl_msg);
 */
    
    void findNextMinMax(CkReductionMsg* impl_msg);

/* DECLS: void phaseDone();
 */
    
    void phaseDone(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: KMeansBOC(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- collective proxy -------------- */
class CProxy_KMeansBOC: public CProxy_IrrGroup{
  public:
    typedef KMeansBOC local_t;
    typedef CkIndex_KMeansBOC index_t;
    typedef CProxy_KMeansBOC proxy_t;
    typedef CProxyElement_KMeansBOC element_t;
    typedef CProxySection_KMeansBOC section_t;

    CProxy_KMeansBOC(void) {
    }
    CProxy_KMeansBOC(const IrrGroup *g) : CProxy_IrrGroup(g){
    }
    CProxy_KMeansBOC(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_IrrGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_KMeansBOC(CkGroupID _gid) : CProxy_IrrGroup(_gid){  }
    CProxyElement_KMeansBOC operator[](int onPE) const
      {return CProxyElement_KMeansBOC(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

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
    KMeansBOC* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static KMeansBOC* ckLocalBranch(CkGroupID gID) {
      return (KMeansBOC*)CkLocalBranch(gID);
    }
/* DECLS: KMeansBOC(const bool &impl_noname_0, int impl_noname_1, int impl_noname_2, double impl_noname_3, const bool &impl_noname_4);
 */
    
    static CkGroupID ckNew(const bool &impl_noname_0, int impl_noname_1, int impl_noname_2, double impl_noname_3, const bool &impl_noname_4, const CkEntryOptions *impl_e_opts=NULL);
    CProxy_KMeansBOC(const bool &impl_noname_0, int impl_noname_1, int impl_noname_2, double impl_noname_3, const bool &impl_noname_4, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void startKMeansAnalysis();
 */
    
    void startKMeansAnalysis(const CkEntryOptions *impl_e_opts=NULL);
    
    void startKMeansAnalysis(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void startKMeansAnalysis(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void flushCheck(const bool &impl_noname_5);
 */
    
    void flushCheck(const bool &impl_noname_5, const CkEntryOptions *impl_e_opts=NULL);
    
    void flushCheck(const bool &impl_noname_5, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void flushCheck(const bool &impl_noname_5, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void flushCheckDone();
 */
    
    void flushCheckDone(const CkEntryOptions *impl_e_opts=NULL);
    
    void flushCheckDone(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void flushCheckDone(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void getNextPhaseMetrics();
 */
    
    void getNextPhaseMetrics(const CkEntryOptions *impl_e_opts=NULL);
    
    void getNextPhaseMetrics(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void getNextPhaseMetrics(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void globalMetricRefinement(CkReductionMsg* impl_msg);
 */
    
    void globalMetricRefinement(CkReductionMsg* impl_msg);
    
    void globalMetricRefinement(CkReductionMsg* impl_msg, int npes, int *pes);
    
    void globalMetricRefinement(CkReductionMsg* impl_msg, CmiGroup &grp);

/* DECLS: void findInitialClusters(KMeansStatsMessage* impl_msg);
 */
    
    void findInitialClusters(KMeansStatsMessage* impl_msg);
    
    void findInitialClusters(KMeansStatsMessage* impl_msg, int npes, int *pes);
    
    void findInitialClusters(KMeansStatsMessage* impl_msg, CmiGroup &grp);

/* DECLS: void updateKSeeds(const double *result, int n);
 */
    
    void updateKSeeds(const double *result, int n, const CkEntryOptions *impl_e_opts=NULL);
    
    void updateKSeeds(const double *result, int n, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void updateKSeeds(const double *result, int n, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void updateSeedMembership(KSeedsMessage* impl_msg);
 */
    
    void updateSeedMembership(KSeedsMessage* impl_msg);
    
    void updateSeedMembership(KSeedsMessage* impl_msg, int npes, int *pes);
    
    void updateSeedMembership(KSeedsMessage* impl_msg, CmiGroup &grp);

/* DECLS: void collectDistances(KSelectionMessage* impl_msg);
 */
    
    void collectDistances(KSelectionMessage* impl_msg);
    
    void collectDistances(KSelectionMessage* impl_msg, int npes, int *pes);
    
    void collectDistances(KSelectionMessage* impl_msg, CmiGroup &grp);

/* DECLS: void findNextMinMax(CkReductionMsg* impl_msg);
 */
    
    void findNextMinMax(CkReductionMsg* impl_msg);
    
    void findNextMinMax(CkReductionMsg* impl_msg, int npes, int *pes);
    
    void findNextMinMax(CkReductionMsg* impl_msg, CmiGroup &grp);

/* DECLS: void phaseDone();
 */
    
    void phaseDone(const CkEntryOptions *impl_e_opts=NULL);
    
    void phaseDone(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void phaseDone(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: KMeansBOC(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- section proxy -------------- */
class CProxySection_KMeansBOC: public CProxySection_IrrGroup{
  public:
    typedef KMeansBOC local_t;
    typedef CkIndex_KMeansBOC index_t;
    typedef CProxy_KMeansBOC proxy_t;
    typedef CProxyElement_KMeansBOC element_t;
    typedef CProxySection_KMeansBOC section_t;

    CProxySection_KMeansBOC(void) {
    }
    CProxySection_KMeansBOC(const IrrGroup *g) : CProxySection_IrrGroup(g){
    }
    CProxySection_KMeansBOC(const CkGroupID &_gid,const int *_pelist,int _npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_KMeansBOC(const CkGroupID &_gid,const int *_pelist,int _npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(_gid,_pelist,_npes,factor){  }
    CProxySection_KMeansBOC(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,factor){  }
    CProxySection_KMeansBOC(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

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
    KMeansBOC* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static KMeansBOC* ckLocalBranch(CkGroupID gID) {
      return (KMeansBOC*)CkLocalBranch(gID);
    }
/* DECLS: KMeansBOC(const bool &impl_noname_0, int impl_noname_1, int impl_noname_2, double impl_noname_3, const bool &impl_noname_4);
 */
    

/* DECLS: void startKMeansAnalysis();
 */
    
    void startKMeansAnalysis(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void flushCheck(const bool &impl_noname_5);
 */
    
    void flushCheck(const bool &impl_noname_5, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void flushCheckDone();
 */
    
    void flushCheckDone(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void getNextPhaseMetrics();
 */
    
    void getNextPhaseMetrics(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void globalMetricRefinement(CkReductionMsg* impl_msg);
 */
    
    void globalMetricRefinement(CkReductionMsg* impl_msg);

/* DECLS: void findInitialClusters(KMeansStatsMessage* impl_msg);
 */
    
    void findInitialClusters(KMeansStatsMessage* impl_msg);

/* DECLS: void updateKSeeds(const double *result, int n);
 */
    
    void updateKSeeds(const double *result, int n, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void updateSeedMembership(KSeedsMessage* impl_msg);
 */
    
    void updateSeedMembership(KSeedsMessage* impl_msg);

/* DECLS: void collectDistances(KSelectionMessage* impl_msg);
 */
    
    void collectDistances(KSelectionMessage* impl_msg);

/* DECLS: void findNextMinMax(CkReductionMsg* impl_msg);
 */
    
    void findNextMinMax(CkReductionMsg* impl_msg);

/* DECLS: void phaseDone();
 */
    
    void phaseDone(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: KMeansBOC(CkMigrateMessage* impl_msg);
 */

};
#define KMeansBOC_SDAG_CODE 
typedef CBaseT1<Group, CProxy_KMeansBOC>CBase_KMeansBOC;

/* DECLS: group TraceProjectionsBOC: IrrGroup{
TraceProjectionsBOC(const bool &impl_noname_6, const bool &impl_noname_7);
void traceProjectionsParallelShutdown(int impl_noname_8);
void startTimeAnalysis();
void startTimeDone(double impl_noname_9);
void startEndTimeAnalysis();
void endTimeDone(double impl_noname_a);
void kMeansDone();
void kMeansDoneFlushed();
void finalize();
void closingTraces();
void closeParallelShutdown();
void flush_warning(int pe);
TraceProjectionsBOC(CkMigrateMessage* impl_msg);
};
 */
 class TraceProjectionsBOC;
 class CkIndex_TraceProjectionsBOC;
 class CProxy_TraceProjectionsBOC;
 class CProxyElement_TraceProjectionsBOC;
 class CProxySection_TraceProjectionsBOC;
/* --------------- index object ------------------ */
class CkIndex_TraceProjectionsBOC:public CkIndex_IrrGroup{
  public:
    typedef TraceProjectionsBOC local_t;
    typedef CkIndex_TraceProjectionsBOC index_t;
    typedef CProxy_TraceProjectionsBOC proxy_t;
    typedef CProxyElement_TraceProjectionsBOC element_t;
    typedef CProxySection_TraceProjectionsBOC section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: TraceProjectionsBOC(const bool &impl_noname_6, const bool &impl_noname_7);
     */
    // Entry point registration at startup
    
    static int reg_TraceProjectionsBOC_marshall1();
    // Entry point index lookup
    
    inline static int idx_TraceProjectionsBOC_marshall1() {
      static int epidx = reg_TraceProjectionsBOC_marshall1();
      return epidx;
    }

    
    static int ckNew(const bool &impl_noname_6, const bool &impl_noname_7) { return idx_TraceProjectionsBOC_marshall1(); }
    
    static void _call_TraceProjectionsBOC_marshall1(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_TraceProjectionsBOC_marshall1(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_TraceProjectionsBOC_marshall1(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_TraceProjectionsBOC_marshall1(PUP::er &p,void *msg);
    /* DECLS: void traceProjectionsParallelShutdown(int impl_noname_8);
     */
    // Entry point registration at startup
    
    static int reg_traceProjectionsParallelShutdown_marshall2();
    // Entry point index lookup
    
    inline static int idx_traceProjectionsParallelShutdown_marshall2() {
      static int epidx = reg_traceProjectionsParallelShutdown_marshall2();
      return epidx;
    }

    
    inline static int idx_traceProjectionsParallelShutdown(void (TraceProjectionsBOC::*)(int impl_noname_8) ) {
      return idx_traceProjectionsParallelShutdown_marshall2();
    }


    
    static int traceProjectionsParallelShutdown(int impl_noname_8) { return idx_traceProjectionsParallelShutdown_marshall2(); }
    
    static void _call_traceProjectionsParallelShutdown_marshall2(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_traceProjectionsParallelShutdown_marshall2(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_traceProjectionsParallelShutdown_marshall2(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_traceProjectionsParallelShutdown_marshall2(PUP::er &p,void *msg);
    /* DECLS: void startTimeAnalysis();
     */
    // Entry point registration at startup
    
    static int reg_startTimeAnalysis_void();
    // Entry point index lookup
    
    inline static int idx_startTimeAnalysis_void() {
      static int epidx = reg_startTimeAnalysis_void();
      return epidx;
    }

    
    inline static int idx_startTimeAnalysis(void (TraceProjectionsBOC::*)() ) {
      return idx_startTimeAnalysis_void();
    }


    
    static int startTimeAnalysis() { return idx_startTimeAnalysis_void(); }
    
    static void _call_startTimeAnalysis_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_startTimeAnalysis_void(void* impl_msg, void* impl_obj);
    /* DECLS: void startTimeDone(double impl_noname_9);
     */
    // Entry point registration at startup
    
    static int reg_startTimeDone_marshall4();
    // Entry point index lookup
    
    inline static int idx_startTimeDone_marshall4() {
      static int epidx = reg_startTimeDone_marshall4();
      return epidx;
    }

    
    inline static int idx_startTimeDone(void (TraceProjectionsBOC::*)(double impl_noname_9) ) {
      return idx_startTimeDone_marshall4();
    }


    
    static int startTimeDone(double impl_noname_9) { return idx_startTimeDone_marshall4(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_startTimeDone_marshall4();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_startTimeDone_marshall4() {
      static int epidx = reg_redn_wrapper_startTimeDone_marshall4();
      return epidx;
    }
    
    static int redn_wrapper_startTimeDone(CkReductionMsg* impl_msg) { return idx_redn_wrapper_startTimeDone_marshall4(); }
    
    static void _call_redn_wrapper_startTimeDone_marshall4(void* impl_msg, void* impl_obj_void);
    
    static void _call_startTimeDone_marshall4(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_startTimeDone_marshall4(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_startTimeDone_marshall4(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_startTimeDone_marshall4(PUP::er &p,void *msg);
    /* DECLS: void startEndTimeAnalysis();
     */
    // Entry point registration at startup
    
    static int reg_startEndTimeAnalysis_void();
    // Entry point index lookup
    
    inline static int idx_startEndTimeAnalysis_void() {
      static int epidx = reg_startEndTimeAnalysis_void();
      return epidx;
    }

    
    inline static int idx_startEndTimeAnalysis(void (TraceProjectionsBOC::*)() ) {
      return idx_startEndTimeAnalysis_void();
    }


    
    static int startEndTimeAnalysis() { return idx_startEndTimeAnalysis_void(); }
    
    static void _call_startEndTimeAnalysis_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_startEndTimeAnalysis_void(void* impl_msg, void* impl_obj);
    /* DECLS: void endTimeDone(double impl_noname_a);
     */
    // Entry point registration at startup
    
    static int reg_endTimeDone_marshall6();
    // Entry point index lookup
    
    inline static int idx_endTimeDone_marshall6() {
      static int epidx = reg_endTimeDone_marshall6();
      return epidx;
    }

    
    inline static int idx_endTimeDone(void (TraceProjectionsBOC::*)(double impl_noname_a) ) {
      return idx_endTimeDone_marshall6();
    }


    
    static int endTimeDone(double impl_noname_a) { return idx_endTimeDone_marshall6(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_endTimeDone_marshall6();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_endTimeDone_marshall6() {
      static int epidx = reg_redn_wrapper_endTimeDone_marshall6();
      return epidx;
    }
    
    static int redn_wrapper_endTimeDone(CkReductionMsg* impl_msg) { return idx_redn_wrapper_endTimeDone_marshall6(); }
    
    static void _call_redn_wrapper_endTimeDone_marshall6(void* impl_msg, void* impl_obj_void);
    
    static void _call_endTimeDone_marshall6(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_endTimeDone_marshall6(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_endTimeDone_marshall6(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_endTimeDone_marshall6(PUP::er &p,void *msg);
    /* DECLS: void kMeansDone();
     */
    // Entry point registration at startup
    
    static int reg_kMeansDone_void();
    // Entry point index lookup
    
    inline static int idx_kMeansDone_void() {
      static int epidx = reg_kMeansDone_void();
      return epidx;
    }

    
    inline static int idx_kMeansDone(void (TraceProjectionsBOC::*)() ) {
      return idx_kMeansDone_void();
    }


    
    static int kMeansDone() { return idx_kMeansDone_void(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_kMeansDone_void();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_kMeansDone_void() {
      static int epidx = reg_redn_wrapper_kMeansDone_void();
      return epidx;
    }
    
    static int redn_wrapper_kMeansDone(CkReductionMsg* impl_msg) { return idx_redn_wrapper_kMeansDone_void(); }
    
    static void _call_redn_wrapper_kMeansDone_void(void* impl_msg, void* impl_obj_void);
    
    static void _call_kMeansDone_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_kMeansDone_void(void* impl_msg, void* impl_obj);
    /* DECLS: void kMeansDoneFlushed();
     */
    // Entry point registration at startup
    
    static int reg_kMeansDoneFlushed_void();
    // Entry point index lookup
    
    inline static int idx_kMeansDoneFlushed_void() {
      static int epidx = reg_kMeansDoneFlushed_void();
      return epidx;
    }

    
    inline static int idx_kMeansDoneFlushed(void (TraceProjectionsBOC::*)() ) {
      return idx_kMeansDoneFlushed_void();
    }


    
    static int kMeansDoneFlushed() { return idx_kMeansDoneFlushed_void(); }
    
    static void _call_kMeansDoneFlushed_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_kMeansDoneFlushed_void(void* impl_msg, void* impl_obj);
    /* DECLS: void finalize();
     */
    // Entry point registration at startup
    
    static int reg_finalize_void();
    // Entry point index lookup
    
    inline static int idx_finalize_void() {
      static int epidx = reg_finalize_void();
      return epidx;
    }

    
    inline static int idx_finalize(void (TraceProjectionsBOC::*)() ) {
      return idx_finalize_void();
    }


    
    static int finalize() { return idx_finalize_void(); }
    
    static void _call_finalize_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_finalize_void(void* impl_msg, void* impl_obj);
    /* DECLS: void closingTraces();
     */
    // Entry point registration at startup
    
    static int reg_closingTraces_void();
    // Entry point index lookup
    
    inline static int idx_closingTraces_void() {
      static int epidx = reg_closingTraces_void();
      return epidx;
    }

    
    inline static int idx_closingTraces(void (TraceProjectionsBOC::*)() ) {
      return idx_closingTraces_void();
    }


    
    static int closingTraces() { return idx_closingTraces_void(); }
    
    static void _call_closingTraces_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_closingTraces_void(void* impl_msg, void* impl_obj);
    /* DECLS: void closeParallelShutdown();
     */
    // Entry point registration at startup
    
    static int reg_closeParallelShutdown_void();
    // Entry point index lookup
    
    inline static int idx_closeParallelShutdown_void() {
      static int epidx = reg_closeParallelShutdown_void();
      return epidx;
    }

    
    inline static int idx_closeParallelShutdown(void (TraceProjectionsBOC::*)() ) {
      return idx_closeParallelShutdown_void();
    }


    
    static int closeParallelShutdown() { return idx_closeParallelShutdown_void(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_closeParallelShutdown_void();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_closeParallelShutdown_void() {
      static int epidx = reg_redn_wrapper_closeParallelShutdown_void();
      return epidx;
    }
    
    static int redn_wrapper_closeParallelShutdown(CkReductionMsg* impl_msg) { return idx_redn_wrapper_closeParallelShutdown_void(); }
    
    static void _call_redn_wrapper_closeParallelShutdown_void(void* impl_msg, void* impl_obj_void);
    
    static void _call_closeParallelShutdown_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_closeParallelShutdown_void(void* impl_msg, void* impl_obj);
    /* DECLS: void flush_warning(int pe);
     */
    // Entry point registration at startup
    
    static int reg_flush_warning_marshall12();
    // Entry point index lookup
    
    inline static int idx_flush_warning_marshall12() {
      static int epidx = reg_flush_warning_marshall12();
      return epidx;
    }

    
    inline static int idx_flush_warning(void (TraceProjectionsBOC::*)(int pe) ) {
      return idx_flush_warning_marshall12();
    }


    
    static int flush_warning(int pe) { return idx_flush_warning_marshall12(); }
    
    static void _call_flush_warning_marshall12(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_flush_warning_marshall12(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_flush_warning_marshall12(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_flush_warning_marshall12(PUP::er &p,void *msg);
    /* DECLS: TraceProjectionsBOC(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_TraceProjectionsBOC_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_TraceProjectionsBOC_CkMigrateMessage() {
      static int epidx = reg_TraceProjectionsBOC_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_TraceProjectionsBOC_CkMigrateMessage(); }
    
    static void _call_TraceProjectionsBOC_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_TraceProjectionsBOC_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_TraceProjectionsBOC: public CProxyElement_IrrGroup{
  public:
    typedef TraceProjectionsBOC local_t;
    typedef CkIndex_TraceProjectionsBOC index_t;
    typedef CProxy_TraceProjectionsBOC proxy_t;
    typedef CProxyElement_TraceProjectionsBOC element_t;
    typedef CProxySection_TraceProjectionsBOC section_t;


    /* TRAM aggregators */

    CProxyElement_TraceProjectionsBOC(void) {
    }
    CProxyElement_TraceProjectionsBOC(const IrrGroup *g) : CProxyElement_IrrGroup(g){
    }
    CProxyElement_TraceProjectionsBOC(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_IrrGroup(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_TraceProjectionsBOC(CkGroupID _gid,int _onPE) : CProxyElement_IrrGroup(_gid,_onPE){
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
    TraceProjectionsBOC* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static TraceProjectionsBOC* ckLocalBranch(CkGroupID gID) {
      return (TraceProjectionsBOC*)CkLocalBranch(gID);
    }
/* DECLS: TraceProjectionsBOC(const bool &impl_noname_6, const bool &impl_noname_7);
 */
    

/* DECLS: void traceProjectionsParallelShutdown(int impl_noname_8);
 */
    
    void traceProjectionsParallelShutdown(int impl_noname_8, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void startTimeAnalysis();
 */
    
    void startTimeAnalysis(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void startTimeDone(double impl_noname_9);
 */
    
    void startTimeDone(double impl_noname_9, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void startEndTimeAnalysis();
 */
    
    void startEndTimeAnalysis(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void endTimeDone(double impl_noname_a);
 */
    
    void endTimeDone(double impl_noname_a, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void kMeansDone();
 */
    
    void kMeansDone(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void kMeansDoneFlushed();
 */
    
    void kMeansDoneFlushed(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void finalize();
 */
    
    void finalize(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void closingTraces();
 */
    
    void closingTraces(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void closeParallelShutdown();
 */
    
    void closeParallelShutdown(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void flush_warning(int pe);
 */
    
    void flush_warning(int pe, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: TraceProjectionsBOC(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- collective proxy -------------- */
class CProxy_TraceProjectionsBOC: public CProxy_IrrGroup{
  public:
    typedef TraceProjectionsBOC local_t;
    typedef CkIndex_TraceProjectionsBOC index_t;
    typedef CProxy_TraceProjectionsBOC proxy_t;
    typedef CProxyElement_TraceProjectionsBOC element_t;
    typedef CProxySection_TraceProjectionsBOC section_t;

    CProxy_TraceProjectionsBOC(void) {
    }
    CProxy_TraceProjectionsBOC(const IrrGroup *g) : CProxy_IrrGroup(g){
    }
    CProxy_TraceProjectionsBOC(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_IrrGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_TraceProjectionsBOC(CkGroupID _gid) : CProxy_IrrGroup(_gid){  }
    CProxyElement_TraceProjectionsBOC operator[](int onPE) const
      {return CProxyElement_TraceProjectionsBOC(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

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
    TraceProjectionsBOC* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static TraceProjectionsBOC* ckLocalBranch(CkGroupID gID) {
      return (TraceProjectionsBOC*)CkLocalBranch(gID);
    }
/* DECLS: TraceProjectionsBOC(const bool &impl_noname_6, const bool &impl_noname_7);
 */
    
    static CkGroupID ckNew(const bool &impl_noname_6, const bool &impl_noname_7, const CkEntryOptions *impl_e_opts=NULL);
    CProxy_TraceProjectionsBOC(const bool &impl_noname_6, const bool &impl_noname_7, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void traceProjectionsParallelShutdown(int impl_noname_8);
 */
    
    void traceProjectionsParallelShutdown(int impl_noname_8, const CkEntryOptions *impl_e_opts=NULL);
    
    void traceProjectionsParallelShutdown(int impl_noname_8, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void traceProjectionsParallelShutdown(int impl_noname_8, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void startTimeAnalysis();
 */
    
    void startTimeAnalysis(const CkEntryOptions *impl_e_opts=NULL);
    
    void startTimeAnalysis(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void startTimeAnalysis(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void startTimeDone(double impl_noname_9);
 */
    
    void startTimeDone(double impl_noname_9, const CkEntryOptions *impl_e_opts=NULL);
    
    void startTimeDone(double impl_noname_9, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void startTimeDone(double impl_noname_9, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void startEndTimeAnalysis();
 */
    
    void startEndTimeAnalysis(const CkEntryOptions *impl_e_opts=NULL);
    
    void startEndTimeAnalysis(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void startEndTimeAnalysis(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void endTimeDone(double impl_noname_a);
 */
    
    void endTimeDone(double impl_noname_a, const CkEntryOptions *impl_e_opts=NULL);
    
    void endTimeDone(double impl_noname_a, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void endTimeDone(double impl_noname_a, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void kMeansDone();
 */
    
    void kMeansDone(const CkEntryOptions *impl_e_opts=NULL);
    
    void kMeansDone(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void kMeansDone(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void kMeansDoneFlushed();
 */
    
    void kMeansDoneFlushed(const CkEntryOptions *impl_e_opts=NULL);
    
    void kMeansDoneFlushed(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void kMeansDoneFlushed(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void finalize();
 */
    
    void finalize(const CkEntryOptions *impl_e_opts=NULL);
    
    void finalize(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void finalize(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void closingTraces();
 */
    
    void closingTraces(const CkEntryOptions *impl_e_opts=NULL);
    
    void closingTraces(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void closingTraces(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void closeParallelShutdown();
 */
    
    void closeParallelShutdown(const CkEntryOptions *impl_e_opts=NULL);
    
    void closeParallelShutdown(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void closeParallelShutdown(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void flush_warning(int pe);
 */
    
    void flush_warning(int pe, const CkEntryOptions *impl_e_opts=NULL);
    
    void flush_warning(int pe, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void flush_warning(int pe, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: TraceProjectionsBOC(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- section proxy -------------- */
class CProxySection_TraceProjectionsBOC: public CProxySection_IrrGroup{
  public:
    typedef TraceProjectionsBOC local_t;
    typedef CkIndex_TraceProjectionsBOC index_t;
    typedef CProxy_TraceProjectionsBOC proxy_t;
    typedef CProxyElement_TraceProjectionsBOC element_t;
    typedef CProxySection_TraceProjectionsBOC section_t;

    CProxySection_TraceProjectionsBOC(void) {
    }
    CProxySection_TraceProjectionsBOC(const IrrGroup *g) : CProxySection_IrrGroup(g){
    }
    CProxySection_TraceProjectionsBOC(const CkGroupID &_gid,const int *_pelist,int _npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_TraceProjectionsBOC(const CkGroupID &_gid,const int *_pelist,int _npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(_gid,_pelist,_npes,factor){  }
    CProxySection_TraceProjectionsBOC(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,factor){  }
    CProxySection_TraceProjectionsBOC(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

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
    TraceProjectionsBOC* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static TraceProjectionsBOC* ckLocalBranch(CkGroupID gID) {
      return (TraceProjectionsBOC*)CkLocalBranch(gID);
    }
/* DECLS: TraceProjectionsBOC(const bool &impl_noname_6, const bool &impl_noname_7);
 */
    

/* DECLS: void traceProjectionsParallelShutdown(int impl_noname_8);
 */
    
    void traceProjectionsParallelShutdown(int impl_noname_8, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void startTimeAnalysis();
 */
    
    void startTimeAnalysis(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void startTimeDone(double impl_noname_9);
 */
    
    void startTimeDone(double impl_noname_9, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void startEndTimeAnalysis();
 */
    
    void startEndTimeAnalysis(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void endTimeDone(double impl_noname_a);
 */
    
    void endTimeDone(double impl_noname_a, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void kMeansDone();
 */
    
    void kMeansDone(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void kMeansDoneFlushed();
 */
    
    void kMeansDoneFlushed(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void finalize();
 */
    
    void finalize(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void closingTraces();
 */
    
    void closingTraces(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void closeParallelShutdown();
 */
    
    void closeParallelShutdown(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void flush_warning(int pe);
 */
    
    void flush_warning(int pe, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: TraceProjectionsBOC(CkMigrateMessage* impl_msg);
 */

};
#define TraceProjectionsBOC_SDAG_CODE 
typedef CBaseT1<Group, CProxy_TraceProjectionsBOC>CBase_TraceProjectionsBOC;




/* ---------------- method closures -------------- */
class Closure_TraceProjectionsInit {
  public:

};





/* ---------------- method closures -------------- */
class Closure_KMeansBOC {
  public:


    struct startKMeansAnalysis_2_closure;


    struct flushCheck_3_closure;


    struct flushCheckDone_4_closure;


    struct getNextPhaseMetrics_5_closure;




    struct updateKSeeds_8_closure;





    struct phaseDone_12_closure;


};

/* ---------------- method closures -------------- */
class Closure_TraceProjectionsBOC {
  public:


    struct traceProjectionsParallelShutdown_2_closure;


    struct startTimeAnalysis_3_closure;


    struct startTimeDone_4_closure;


    struct startEndTimeAnalysis_5_closure;


    struct endTimeDone_6_closure;


    struct kMeansDone_7_closure;


    struct kMeansDoneFlushed_8_closure;


    struct finalize_9_closure;


    struct closingTraces_10_closure;


    struct closeParallelShutdown_11_closure;


    struct flush_warning_12_closure;


};

extern void _registerTraceProjections(void);
#endif
