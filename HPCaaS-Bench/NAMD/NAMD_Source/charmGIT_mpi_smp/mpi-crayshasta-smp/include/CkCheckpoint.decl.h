#ifndef _DECL_CkCheckpoint_H_
#define _DECL_CkCheckpoint_H_
#include "charm++.h"
#include "envelope.h"
#include <memory>
#include "sdag.h"
/* DECLS: readonly CkGroupID _sysChkptWriteMgr;
 */

/* DECLS: readonly CkGroupID _sysChkptMgr;
 */

#include "CkCheckpointStatus.decl.h"

/* DECLS: nodegroup CkCheckpointWriteMgr: NodeGroup{
CkCheckpointWriteMgr();
void Checkpoint(const char *dirname, const CkCallback &cb, const bool &requestStatus, int writersPerNode);
void FinishedCheckpoint();
CkCheckpointWriteMgr(CkMigrateMessage* impl_msg);
};
 */
 class CkCheckpointWriteMgr;
 class CkIndex_CkCheckpointWriteMgr;
 class CProxy_CkCheckpointWriteMgr;
 class CProxyElement_CkCheckpointWriteMgr;
 class CProxySection_CkCheckpointWriteMgr;
/* --------------- index object ------------------ */
class CkIndex_CkCheckpointWriteMgr:public CkIndex_NodeGroup{
  public:
    typedef CkCheckpointWriteMgr local_t;
    typedef CkIndex_CkCheckpointWriteMgr index_t;
    typedef CProxy_CkCheckpointWriteMgr proxy_t;
    typedef CProxyElement_CkCheckpointWriteMgr element_t;
    typedef CProxySection_CkCheckpointWriteMgr section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: CkCheckpointWriteMgr();
     */
    // Entry point registration at startup
    
    static int reg_CkCheckpointWriteMgr_void();
    // Entry point index lookup
    
    inline static int idx_CkCheckpointWriteMgr_void() {
      static int epidx = reg_CkCheckpointWriteMgr_void();
      return epidx;
    }

    
    static int ckNew() { return idx_CkCheckpointWriteMgr_void(); }
    
    static void _call_CkCheckpointWriteMgr_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_CkCheckpointWriteMgr_void(void* impl_msg, void* impl_obj);
    /* DECLS: void Checkpoint(const char *dirname, const CkCallback &cb, const bool &requestStatus, int writersPerNode);
     */
    // Entry point registration at startup
    
    static int reg_Checkpoint_marshall2();
    // Entry point index lookup
    
    inline static int idx_Checkpoint_marshall2() {
      static int epidx = reg_Checkpoint_marshall2();
      return epidx;
    }

    
    inline static int idx_Checkpoint(void (CkCheckpointWriteMgr::*)(const char *dirname, const CkCallback &cb, const bool &requestStatus, int writersPerNode) ) {
      return idx_Checkpoint_marshall2();
    }


    
    static int Checkpoint(const char *dirname, const CkCallback &cb, const bool &requestStatus, int writersPerNode) { return idx_Checkpoint_marshall2(); }
    
    static void _call_Checkpoint_marshall2(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_Checkpoint_marshall2(void* impl_msg, void* impl_obj);
    
    static void _marshallmessagepup_Checkpoint_marshall2(PUP::er &p,void *msg);
    /* DECLS: void FinishedCheckpoint();
     */
    // Entry point registration at startup
    
    static int reg_FinishedCheckpoint_void();
    // Entry point index lookup
    
    inline static int idx_FinishedCheckpoint_void() {
      static int epidx = reg_FinishedCheckpoint_void();
      return epidx;
    }

    
    inline static int idx_FinishedCheckpoint(void (CkCheckpointWriteMgr::*)() ) {
      return idx_FinishedCheckpoint_void();
    }


    
    static int FinishedCheckpoint() { return idx_FinishedCheckpoint_void(); }
    
    static void _call_FinishedCheckpoint_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_FinishedCheckpoint_void(void* impl_msg, void* impl_obj);
    /* DECLS: CkCheckpointWriteMgr(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_CkCheckpointWriteMgr_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_CkCheckpointWriteMgr_CkMigrateMessage() {
      static int epidx = reg_CkCheckpointWriteMgr_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_CkCheckpointWriteMgr_CkMigrateMessage(); }
    
    static void _call_CkCheckpointWriteMgr_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_CkCheckpointWriteMgr_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_CkCheckpointWriteMgr: public CProxyElement_NodeGroup{
  public:
    typedef CkCheckpointWriteMgr local_t;
    typedef CkIndex_CkCheckpointWriteMgr index_t;
    typedef CProxy_CkCheckpointWriteMgr proxy_t;
    typedef CProxyElement_CkCheckpointWriteMgr element_t;
    typedef CProxySection_CkCheckpointWriteMgr section_t;


    /* TRAM aggregators */

    CProxyElement_CkCheckpointWriteMgr(void) {
    }
    CProxyElement_CkCheckpointWriteMgr(const IrrGroup *g) : CProxyElement_NodeGroup(g){
    }
    CProxyElement_CkCheckpointWriteMgr(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_NodeGroup(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_CkCheckpointWriteMgr(CkGroupID _gid,int _onPE) : CProxyElement_NodeGroup(_gid,_onPE){
    }

    int ckIsDelegated(void) const
    { return CProxyElement_NodeGroup::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxyElement_NodeGroup::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxyElement_NodeGroup::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxyElement_NodeGroup::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxyElement_NodeGroup::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxyElement_NodeGroup::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxyElement_NodeGroup::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_NodeGroup::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_NodeGroup::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxyElement_NodeGroup::ckSetReductionClient(cb); }
int ckGetGroupPe(void) const
{return CProxyElement_NodeGroup::ckGetGroupPe();}

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxyElement_NodeGroup::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxyElement_NodeGroup::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxyElement_NodeGroup::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxyElement_NodeGroup::ckSetGroupID(g);
    }
    CkCheckpointWriteMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static CkCheckpointWriteMgr* ckLocalBranch(CkGroupID gID) {
      return (CkCheckpointWriteMgr*)CkLocalNodeBranch(gID);
    }
/* DECLS: CkCheckpointWriteMgr();
 */
    

/* DECLS: void Checkpoint(const char *dirname, const CkCallback &cb, const bool &requestStatus, int writersPerNode);
 */
    
    void Checkpoint(const char *dirname, const CkCallback &cb, const bool &requestStatus, int writersPerNode, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void FinishedCheckpoint();
 */
    
    void FinishedCheckpoint(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: CkCheckpointWriteMgr(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- collective proxy -------------- */
class CProxy_CkCheckpointWriteMgr: public CProxy_NodeGroup{
  public:
    typedef CkCheckpointWriteMgr local_t;
    typedef CkIndex_CkCheckpointWriteMgr index_t;
    typedef CProxy_CkCheckpointWriteMgr proxy_t;
    typedef CProxyElement_CkCheckpointWriteMgr element_t;
    typedef CProxySection_CkCheckpointWriteMgr section_t;

    CProxy_CkCheckpointWriteMgr(void) {
    }
    CProxy_CkCheckpointWriteMgr(const IrrGroup *g) : CProxy_NodeGroup(g){
    }
    CProxy_CkCheckpointWriteMgr(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_NodeGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_CkCheckpointWriteMgr(CkGroupID _gid) : CProxy_NodeGroup(_gid){  }
    CProxyElement_CkCheckpointWriteMgr operator[](int onPE) const
      {return CProxyElement_CkCheckpointWriteMgr(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

    int ckIsDelegated(void) const
    { return CProxy_NodeGroup::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_NodeGroup::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_NodeGroup::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_NodeGroup::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxy_NodeGroup::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxy_NodeGroup::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxy_NodeGroup::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_NodeGroup::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_NodeGroup::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxy_NodeGroup::ckSetReductionClient(cb); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_NodeGroup::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_NodeGroup::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_NodeGroup::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxy_NodeGroup::ckSetGroupID(g);
    }
    CkCheckpointWriteMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static CkCheckpointWriteMgr* ckLocalBranch(CkGroupID gID) {
      return (CkCheckpointWriteMgr*)CkLocalNodeBranch(gID);
    }
/* DECLS: CkCheckpointWriteMgr();
 */
    
    static CkGroupID ckNew(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void Checkpoint(const char *dirname, const CkCallback &cb, const bool &requestStatus, int writersPerNode);
 */
    
    void Checkpoint(const char *dirname, const CkCallback &cb, const bool &requestStatus, int writersPerNode, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void FinishedCheckpoint();
 */
    
    void FinishedCheckpoint(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: CkCheckpointWriteMgr(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- section proxy -------------- */
class CProxySection_CkCheckpointWriteMgr: public CProxySection_NodeGroup{
  public:
    typedef CkCheckpointWriteMgr local_t;
    typedef CkIndex_CkCheckpointWriteMgr index_t;
    typedef CProxy_CkCheckpointWriteMgr proxy_t;
    typedef CProxyElement_CkCheckpointWriteMgr element_t;
    typedef CProxySection_CkCheckpointWriteMgr section_t;

    CProxySection_CkCheckpointWriteMgr(void) {
    }
    CProxySection_CkCheckpointWriteMgr(const IrrGroup *g) : CProxySection_NodeGroup(g){
    }
    CProxySection_CkCheckpointWriteMgr(const CkGroupID &_gid,const int *_pelist,int _npes, CK_DELCTOR_PARAM) : CProxySection_NodeGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_CkCheckpointWriteMgr(const CkGroupID &_gid,const int *_pelist,int _npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_NodeGroup(_gid,_pelist,_npes,factor){  }
    CProxySection_CkCheckpointWriteMgr(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_NodeGroup(n,_gid,_pelist,_npes,factor){  }
    CProxySection_CkCheckpointWriteMgr(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, CK_DELCTOR_PARAM) : CProxySection_NodeGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

    int ckIsDelegated(void) const
    { return CProxySection_NodeGroup::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxySection_NodeGroup::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxySection_NodeGroup::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxySection_NodeGroup::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxySection_NodeGroup::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxySection_NodeGroup::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxySection_NodeGroup::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_NodeGroup::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_NodeGroup::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxySection_NodeGroup::ckSetReductionClient(cb); }
inline int ckGetNumSections() const
{ return CProxySection_NodeGroup::ckGetNumSections(); }
inline CkSectionInfo &ckGetSectionInfo()
{ return CProxySection_NodeGroup::ckGetSectionInfo(); }
inline CkSectionID *ckGetSectionIDs()
{ return CProxySection_NodeGroup::ckGetSectionIDs(); }
inline CkSectionID &ckGetSectionID()
{ return CProxySection_NodeGroup::ckGetSectionID(); }
inline CkSectionID &ckGetSectionID(int i)
{ return CProxySection_NodeGroup::ckGetSectionID(i); }
inline CkGroupID ckGetGroupIDn(int i) const
{ return CProxySection_NodeGroup::ckGetGroupIDn(i); }
inline const int *ckGetElements() const
{ return CProxySection_NodeGroup::ckGetElements(); }
inline const int *ckGetElements(int i) const
{ return CProxySection_NodeGroup::ckGetElements(i); }
inline int ckGetNumElements() const
{ return CProxySection_NodeGroup::ckGetNumElements(); } 
inline int ckGetNumElements(int i) const
{ return CProxySection_NodeGroup::ckGetNumElements(i); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxySection_NodeGroup::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxySection_NodeGroup::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxySection_NodeGroup::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxySection_NodeGroup::ckSetGroupID(g);
    }
    CkCheckpointWriteMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static CkCheckpointWriteMgr* ckLocalBranch(CkGroupID gID) {
      return (CkCheckpointWriteMgr*)CkLocalNodeBranch(gID);
    }
/* DECLS: CkCheckpointWriteMgr();
 */
    

/* DECLS: void Checkpoint(const char *dirname, const CkCallback &cb, const bool &requestStatus, int writersPerNode);
 */
    
    void Checkpoint(const char *dirname, const CkCallback &cb, const bool &requestStatus, int writersPerNode, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void FinishedCheckpoint();
 */
    
    void FinishedCheckpoint(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: CkCheckpointWriteMgr(CkMigrateMessage* impl_msg);
 */

};
#define CkCheckpointWriteMgr_SDAG_CODE 
typedef CBaseT1<NodeGroup, CProxy_CkCheckpointWriteMgr>CBase_CkCheckpointWriteMgr;

/* DECLS: group CkCheckpointMgr: IrrGroup{
CkCheckpointMgr();
void Checkpoint(const char *dirname, const CkCallback &cb, const bool &requestStatus);
void SendRestartCB();
CkCheckpointMgr(CkMigrateMessage* impl_msg);
};
 */
 class CkCheckpointMgr;
 class CkIndex_CkCheckpointMgr;
 class CProxy_CkCheckpointMgr;
 class CProxyElement_CkCheckpointMgr;
 class CProxySection_CkCheckpointMgr;
/* --------------- index object ------------------ */
class CkIndex_CkCheckpointMgr:public CkIndex_IrrGroup{
  public:
    typedef CkCheckpointMgr local_t;
    typedef CkIndex_CkCheckpointMgr index_t;
    typedef CProxy_CkCheckpointMgr proxy_t;
    typedef CProxyElement_CkCheckpointMgr element_t;
    typedef CProxySection_CkCheckpointMgr section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: CkCheckpointMgr();
     */
    // Entry point registration at startup
    
    static int reg_CkCheckpointMgr_void();
    // Entry point index lookup
    
    inline static int idx_CkCheckpointMgr_void() {
      static int epidx = reg_CkCheckpointMgr_void();
      return epidx;
    }

    
    static int ckNew() { return idx_CkCheckpointMgr_void(); }
    
    static void _call_CkCheckpointMgr_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_CkCheckpointMgr_void(void* impl_msg, void* impl_obj);
    /* DECLS: void Checkpoint(const char *dirname, const CkCallback &cb, const bool &requestStatus);
     */
    // Entry point registration at startup
    
    static int reg_Checkpoint_marshall2();
    // Entry point index lookup
    
    inline static int idx_Checkpoint_marshall2() {
      static int epidx = reg_Checkpoint_marshall2();
      return epidx;
    }

    
    inline static int idx_Checkpoint(void (CkCheckpointMgr::*)(const char *dirname, const CkCallback &cb, const bool &requestStatus) ) {
      return idx_Checkpoint_marshall2();
    }


    
    static int Checkpoint(const char *dirname, const CkCallback &cb, const bool &requestStatus) { return idx_Checkpoint_marshall2(); }
    
    static void _call_Checkpoint_marshall2(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_Checkpoint_marshall2(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_Checkpoint_marshall2(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_Checkpoint_marshall2(PUP::er &p,void *msg);
    /* DECLS: void SendRestartCB();
     */
    // Entry point registration at startup
    
    static int reg_SendRestartCB_void();
    // Entry point index lookup
    
    inline static int idx_SendRestartCB_void() {
      static int epidx = reg_SendRestartCB_void();
      return epidx;
    }

    
    inline static int idx_SendRestartCB(void (CkCheckpointMgr::*)() ) {
      return idx_SendRestartCB_void();
    }


    
    static int SendRestartCB() { return idx_SendRestartCB_void(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_SendRestartCB_void();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_SendRestartCB_void() {
      static int epidx = reg_redn_wrapper_SendRestartCB_void();
      return epidx;
    }
    
    static int redn_wrapper_SendRestartCB(CkReductionMsg* impl_msg) { return idx_redn_wrapper_SendRestartCB_void(); }
    
    static void _call_redn_wrapper_SendRestartCB_void(void* impl_msg, void* impl_obj_void);
    
    static void _call_SendRestartCB_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_SendRestartCB_void(void* impl_msg, void* impl_obj);
    /* DECLS: CkCheckpointMgr(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_CkCheckpointMgr_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_CkCheckpointMgr_CkMigrateMessage() {
      static int epidx = reg_CkCheckpointMgr_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_CkCheckpointMgr_CkMigrateMessage(); }
    
    static void _call_CkCheckpointMgr_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_CkCheckpointMgr_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_CkCheckpointMgr: public CProxyElement_IrrGroup{
  public:
    typedef CkCheckpointMgr local_t;
    typedef CkIndex_CkCheckpointMgr index_t;
    typedef CProxy_CkCheckpointMgr proxy_t;
    typedef CProxyElement_CkCheckpointMgr element_t;
    typedef CProxySection_CkCheckpointMgr section_t;


    /* TRAM aggregators */

    CProxyElement_CkCheckpointMgr(void) {
    }
    CProxyElement_CkCheckpointMgr(const IrrGroup *g) : CProxyElement_IrrGroup(g){
    }
    CProxyElement_CkCheckpointMgr(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_IrrGroup(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_CkCheckpointMgr(CkGroupID _gid,int _onPE) : CProxyElement_IrrGroup(_gid,_onPE){
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
    CkCheckpointMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static CkCheckpointMgr* ckLocalBranch(CkGroupID gID) {
      return (CkCheckpointMgr*)CkLocalBranch(gID);
    }
/* DECLS: CkCheckpointMgr();
 */
    

/* DECLS: void Checkpoint(const char *dirname, const CkCallback &cb, const bool &requestStatus);
 */
    
    void Checkpoint(const char *dirname, const CkCallback &cb, const bool &requestStatus, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void SendRestartCB();
 */
    
    void SendRestartCB(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: CkCheckpointMgr(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- collective proxy -------------- */
class CProxy_CkCheckpointMgr: public CProxy_IrrGroup{
  public:
    typedef CkCheckpointMgr local_t;
    typedef CkIndex_CkCheckpointMgr index_t;
    typedef CProxy_CkCheckpointMgr proxy_t;
    typedef CProxyElement_CkCheckpointMgr element_t;
    typedef CProxySection_CkCheckpointMgr section_t;

    CProxy_CkCheckpointMgr(void) {
    }
    CProxy_CkCheckpointMgr(const IrrGroup *g) : CProxy_IrrGroup(g){
    }
    CProxy_CkCheckpointMgr(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_IrrGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_CkCheckpointMgr(CkGroupID _gid) : CProxy_IrrGroup(_gid){  }
    CProxyElement_CkCheckpointMgr operator[](int onPE) const
      {return CProxyElement_CkCheckpointMgr(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

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
    CkCheckpointMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static CkCheckpointMgr* ckLocalBranch(CkGroupID gID) {
      return (CkCheckpointMgr*)CkLocalBranch(gID);
    }
/* DECLS: CkCheckpointMgr();
 */
    
    static CkGroupID ckNew(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void Checkpoint(const char *dirname, const CkCallback &cb, const bool &requestStatus);
 */
    
    void Checkpoint(const char *dirname, const CkCallback &cb, const bool &requestStatus, const CkEntryOptions *impl_e_opts=NULL);
    
    void Checkpoint(const char *dirname, const CkCallback &cb, const bool &requestStatus, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void Checkpoint(const char *dirname, const CkCallback &cb, const bool &requestStatus, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void SendRestartCB();
 */
    
    void SendRestartCB(const CkEntryOptions *impl_e_opts=NULL);
    
    void SendRestartCB(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void SendRestartCB(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: CkCheckpointMgr(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- section proxy -------------- */
class CProxySection_CkCheckpointMgr: public CProxySection_IrrGroup{
  public:
    typedef CkCheckpointMgr local_t;
    typedef CkIndex_CkCheckpointMgr index_t;
    typedef CProxy_CkCheckpointMgr proxy_t;
    typedef CProxyElement_CkCheckpointMgr element_t;
    typedef CProxySection_CkCheckpointMgr section_t;

    CProxySection_CkCheckpointMgr(void) {
    }
    CProxySection_CkCheckpointMgr(const IrrGroup *g) : CProxySection_IrrGroup(g){
    }
    CProxySection_CkCheckpointMgr(const CkGroupID &_gid,const int *_pelist,int _npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_CkCheckpointMgr(const CkGroupID &_gid,const int *_pelist,int _npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(_gid,_pelist,_npes,factor){  }
    CProxySection_CkCheckpointMgr(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,factor){  }
    CProxySection_CkCheckpointMgr(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

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
    CkCheckpointMgr* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static CkCheckpointMgr* ckLocalBranch(CkGroupID gID) {
      return (CkCheckpointMgr*)CkLocalBranch(gID);
    }
/* DECLS: CkCheckpointMgr();
 */
    

/* DECLS: void Checkpoint(const char *dirname, const CkCallback &cb, const bool &requestStatus);
 */
    
    void Checkpoint(const char *dirname, const CkCallback &cb, const bool &requestStatus, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void SendRestartCB();
 */
    
    void SendRestartCB(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: CkCheckpointMgr(CkMigrateMessage* impl_msg);
 */

};
#define CkCheckpointMgr_SDAG_CODE 
typedef CBaseT1<Group, CProxy_CkCheckpointMgr>CBase_CkCheckpointMgr;

/* DECLS: mainchare CkCheckpointInit: Chare{
CkCheckpointInit(CkArgMsg* impl_msg);
};
 */
 class CkCheckpointInit;
 class CkIndex_CkCheckpointInit;
 class CProxy_CkCheckpointInit;
/* --------------- index object ------------------ */
class CkIndex_CkCheckpointInit:public CkIndex_Chare{
  public:
    typedef CkCheckpointInit local_t;
    typedef CkIndex_CkCheckpointInit index_t;
    typedef CProxy_CkCheckpointInit proxy_t;
    typedef CProxy_CkCheckpointInit element_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: CkCheckpointInit(CkArgMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_CkCheckpointInit_CkArgMsg();
    // Entry point index lookup
    
    inline static int idx_CkCheckpointInit_CkArgMsg() {
      static int epidx = reg_CkCheckpointInit_CkArgMsg();
      return epidx;
    }

    
    static int ckNew(CkArgMsg* impl_msg) { return idx_CkCheckpointInit_CkArgMsg(); }
    
    static void _call_CkCheckpointInit_CkArgMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_CkCheckpointInit_CkArgMsg(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxy_CkCheckpointInit:public CProxy_Chare{
  public:
    typedef CkCheckpointInit local_t;
    typedef CkIndex_CkCheckpointInit index_t;
    typedef CProxy_CkCheckpointInit proxy_t;
    typedef CProxy_CkCheckpointInit element_t;

    CProxy_CkCheckpointInit(void) {};
    CProxy_CkCheckpointInit(CkChareID __cid) : CProxy_Chare(__cid){  }
    CProxy_CkCheckpointInit(const Chare *c) : CProxy_Chare(c){  }

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
    CkCheckpointInit *ckLocal(void) const
    { return (CkCheckpointInit *)CkLocalChare(&ckGetChareID()); }
/* DECLS: CkCheckpointInit(CkArgMsg* impl_msg);
 */
    static CkChareID ckNew(CkArgMsg* impl_msg, int onPE=CK_PE_ANY);
    static void ckNew(CkArgMsg* impl_msg, CkChareID* pcid, int onPE=CK_PE_ANY);

};
#define CkCheckpointInit_SDAG_CODE 
typedef CBaseT1<Chare, CProxy_CkCheckpointInit>CBase_CkCheckpointInit;




/* ---------------- method closures -------------- */
class Closure_CkCheckpointWriteMgr {
  public:


    struct Checkpoint_2_closure;


    struct FinishedCheckpoint_3_closure;


};

/* ---------------- method closures -------------- */
class Closure_CkCheckpointMgr {
  public:


    struct Checkpoint_2_closure;


    struct SendRestartCB_3_closure;


};

/* ---------------- method closures -------------- */
class Closure_CkCheckpointInit {
  public:

};

extern void _registerCkCheckpoint(void);
#endif
