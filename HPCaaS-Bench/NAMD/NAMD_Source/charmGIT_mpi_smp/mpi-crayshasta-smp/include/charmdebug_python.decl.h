#ifndef _DECL_charmdebug_python_H_
#define _DECL_charmdebug_python_H_
#include "charm++.h"
#include "envelope.h"
#include <memory>
#include "sdag.h"
/* DECLS: mainchare CpdPython: Chare{
CpdPython(CkArgMsg* impl_msg);
};
 */
 class CpdPython;
 class CkIndex_CpdPython;
 class CProxy_CpdPython;
/* --------------- index object ------------------ */
class CkIndex_CpdPython:public CkIndex_Chare{
  public:
    typedef CpdPython local_t;
    typedef CkIndex_CpdPython index_t;
    typedef CProxy_CpdPython proxy_t;
    typedef CProxy_CpdPython element_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: CpdPython(CkArgMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_CpdPython_CkArgMsg();
    // Entry point index lookup
    
    inline static int idx_CpdPython_CkArgMsg() {
      static int epidx = reg_CpdPython_CkArgMsg();
      return epidx;
    }

    
    static int ckNew(CkArgMsg* impl_msg) { return idx_CpdPython_CkArgMsg(); }
    
    static void _call_CpdPython_CkArgMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_CpdPython_CkArgMsg(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxy_CpdPython:public CProxy_Chare{
  public:
    typedef CpdPython local_t;
    typedef CkIndex_CpdPython index_t;
    typedef CProxy_CpdPython proxy_t;
    typedef CProxy_CpdPython element_t;

    CProxy_CpdPython(void) {};
    CProxy_CpdPython(CkChareID __cid) : CProxy_Chare(__cid){  }
    CProxy_CpdPython(const Chare *c) : CProxy_Chare(c){  }

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
    CpdPython *ckLocal(void) const
    { return (CpdPython *)CkLocalChare(&ckGetChareID()); }
/* DECLS: CpdPython(CkArgMsg* impl_msg);
 */
    static CkChareID ckNew(CkArgMsg* impl_msg, int onPE=CK_PE_ANY);
    static void ckNew(CkArgMsg* impl_msg, CkChareID* pcid, int onPE=CK_PE_ANY);

};
#define CpdPython_SDAG_CODE 
typedef CBaseT1<Chare, CProxy_CpdPython>CBase_CpdPython;

/* DECLS: group CpdPythonGroup: IrrGroup{
CpdPythonGroup();
void getArray(int impl_noname_0);
void getValue(int impl_noname_1);
void getCast(int impl_noname_2);
void getStatic(int impl_noname_3);
void getMessage(int impl_noname_4);
void registerPersistent(CkCcsRequestMsg* impl_msg);
};
 */
#include "PythonCCS.h"
 class CpdPythonGroup;
 class CkIndex_CpdPythonGroup;
 class CProxy_CpdPythonGroup;
 class CProxyElement_CpdPythonGroup;
 class CProxySection_CpdPythonGroup;
 class CkPython_CpdPythonGroup;
/* --------------- index object ------------------ */
class CkIndex_CpdPythonGroup:public CkIndex_IrrGroup{
  public:
    typedef CpdPythonGroup local_t;
    typedef CkIndex_CpdPythonGroup index_t;
    typedef CProxy_CpdPythonGroup proxy_t;
    typedef CProxyElement_CpdPythonGroup element_t;
    typedef CProxySection_CpdPythonGroup section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: CpdPythonGroup();
     */
    // Entry point registration at startup
    
    static int reg_CpdPythonGroup_void();
    // Entry point index lookup
    
    inline static int idx_CpdPythonGroup_void() {
      static int epidx = reg_CpdPythonGroup_void();
      return epidx;
    }

    
    static int ckNew() { return idx_CpdPythonGroup_void(); }
    
    static void _call_CpdPythonGroup_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_CpdPythonGroup_void(void* impl_msg, void* impl_obj);
    /* DECLS: void getArray(int impl_noname_0);
     */
    // Entry point registration at startup
    
    static int reg_getArray_marshall2();
    // Entry point index lookup
    
    inline static int idx_getArray_marshall2() {
      static int epidx = reg_getArray_marshall2();
      return epidx;
    }

    
    inline static int idx_getArray(void (CpdPythonGroup::*)(int impl_noname_0) ) {
      return idx_getArray_marshall2();
    }


    
    static int getArray(int impl_noname_0) { return idx_getArray_marshall2(); }
    
    static void _call_getArray_marshall2(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_getArray_marshall2(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_getArray_marshall2(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_getArray_marshall2(PUP::er &p,void *msg);
    /* DECLS: void getValue(int impl_noname_1);
     */
    // Entry point registration at startup
    
    static int reg_getValue_marshall3();
    // Entry point index lookup
    
    inline static int idx_getValue_marshall3() {
      static int epidx = reg_getValue_marshall3();
      return epidx;
    }

    
    inline static int idx_getValue(void (CpdPythonGroup::*)(int impl_noname_1) ) {
      return idx_getValue_marshall3();
    }


    
    static int getValue(int impl_noname_1) { return idx_getValue_marshall3(); }
    
    static void _call_getValue_marshall3(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_getValue_marshall3(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_getValue_marshall3(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_getValue_marshall3(PUP::er &p,void *msg);
    /* DECLS: void getCast(int impl_noname_2);
     */
    // Entry point registration at startup
    
    static int reg_getCast_marshall4();
    // Entry point index lookup
    
    inline static int idx_getCast_marshall4() {
      static int epidx = reg_getCast_marshall4();
      return epidx;
    }

    
    inline static int idx_getCast(void (CpdPythonGroup::*)(int impl_noname_2) ) {
      return idx_getCast_marshall4();
    }


    
    static int getCast(int impl_noname_2) { return idx_getCast_marshall4(); }
    
    static void _call_getCast_marshall4(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_getCast_marshall4(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_getCast_marshall4(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_getCast_marshall4(PUP::er &p,void *msg);
    /* DECLS: void getStatic(int impl_noname_3);
     */
    // Entry point registration at startup
    
    static int reg_getStatic_marshall5();
    // Entry point index lookup
    
    inline static int idx_getStatic_marshall5() {
      static int epidx = reg_getStatic_marshall5();
      return epidx;
    }

    
    inline static int idx_getStatic(void (CpdPythonGroup::*)(int impl_noname_3) ) {
      return idx_getStatic_marshall5();
    }


    
    static int getStatic(int impl_noname_3) { return idx_getStatic_marshall5(); }
    
    static void _call_getStatic_marshall5(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_getStatic_marshall5(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_getStatic_marshall5(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_getStatic_marshall5(PUP::er &p,void *msg);
    /* DECLS: void getMessage(int impl_noname_4);
     */
    // Entry point registration at startup
    
    static int reg_getMessage_marshall6();
    // Entry point index lookup
    
    inline static int idx_getMessage_marshall6() {
      static int epidx = reg_getMessage_marshall6();
      return epidx;
    }

    
    inline static int idx_getMessage(void (CpdPythonGroup::*)(int impl_noname_4) ) {
      return idx_getMessage_marshall6();
    }


    
    static int getMessage(int impl_noname_4) { return idx_getMessage_marshall6(); }
    
    static void _call_getMessage_marshall6(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_getMessage_marshall6(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_getMessage_marshall6(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_getMessage_marshall6(PUP::er &p,void *msg);
    /* DECLS: void registerPersistent(CkCcsRequestMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_registerPersistent_CkCcsRequestMsg();
    // Entry point index lookup
    
    inline static int idx_registerPersistent_CkCcsRequestMsg() {
      static int epidx = reg_registerPersistent_CkCcsRequestMsg();
      return epidx;
    }

    
    inline static int idx_registerPersistent(void (CpdPythonGroup::*)(CkCcsRequestMsg* impl_msg) ) {
      return idx_registerPersistent_CkCcsRequestMsg();
    }


    
    static int registerPersistent(CkCcsRequestMsg* impl_msg) { return idx_registerPersistent_CkCcsRequestMsg(); }
    
    static void _call_registerPersistent_CkCcsRequestMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_registerPersistent_CkCcsRequestMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void pyRequest(CkCcsRequestMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_pyRequest_CkCcsRequestMsg();
    // Entry point index lookup
    
    inline static int idx_pyRequest_CkCcsRequestMsg() {
      static int epidx = reg_pyRequest_CkCcsRequestMsg();
      return epidx;
    }

    
    inline static int idx_pyRequest(void (CpdPythonGroup::*)(CkCcsRequestMsg* impl_msg) ) {
      return idx_pyRequest_CkCcsRequestMsg();
    }


    
    static int pyRequest(CkCcsRequestMsg* impl_msg) { return idx_pyRequest_CkCcsRequestMsg(); }
    
    static void _call_pyRequest_CkCcsRequestMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_pyRequest_CkCcsRequestMsg(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_CpdPythonGroup: public CProxyElement_IrrGroup{
  public:
    typedef CpdPythonGroup local_t;
    typedef CkIndex_CpdPythonGroup index_t;
    typedef CProxy_CpdPythonGroup proxy_t;
    typedef CProxyElement_CpdPythonGroup element_t;
    typedef CProxySection_CpdPythonGroup section_t;


    /* TRAM aggregators */

    CProxyElement_CpdPythonGroup(void) {
    }
    CProxyElement_CpdPythonGroup(const IrrGroup *g) : CProxyElement_IrrGroup(g){
    }
    CProxyElement_CpdPythonGroup(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_IrrGroup(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_CpdPythonGroup(CkGroupID _gid,int _onPE) : CProxyElement_IrrGroup(_gid,_onPE){
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
    void registerPython(const char *str)
    { CcsRegisterHandler(str, CkCallback(CkIndex_CpdPythonGroup::pyRequest(0), *this)); }
    void ckSetGroupID(CkGroupID g) {
      CProxyElement_IrrGroup::ckSetGroupID(g);
    }
    CpdPythonGroup* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static CpdPythonGroup* ckLocalBranch(CkGroupID gID) {
      return (CpdPythonGroup*)CkLocalBranch(gID);
    }
/* DECLS: CpdPythonGroup();
 */
    

/* DECLS: void getArray(int impl_noname_0);
 */
    
    void getArray(int impl_noname_0, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void getValue(int impl_noname_1);
 */
    
    void getValue(int impl_noname_1, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void getCast(int impl_noname_2);
 */
    
    void getCast(int impl_noname_2, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void getStatic(int impl_noname_3);
 */
    
    void getStatic(int impl_noname_3, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void getMessage(int impl_noname_4);
 */
    
    void getMessage(int impl_noname_4, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void registerPersistent(CkCcsRequestMsg* impl_msg);
 */
    
    void registerPersistent(CkCcsRequestMsg* impl_msg);

/* DECLS: void pyRequest(CkCcsRequestMsg* impl_msg);
 */
    
    void pyRequest(CkCcsRequestMsg* impl_msg);

};
/* ---------------- collective proxy -------------- */
class CProxy_CpdPythonGroup: public CProxy_IrrGroup{
  public:
    typedef CpdPythonGroup local_t;
    typedef CkIndex_CpdPythonGroup index_t;
    typedef CProxy_CpdPythonGroup proxy_t;
    typedef CProxyElement_CpdPythonGroup element_t;
    typedef CProxySection_CpdPythonGroup section_t;

    CProxy_CpdPythonGroup(void) {
    }
    CProxy_CpdPythonGroup(const IrrGroup *g) : CProxy_IrrGroup(g){
    }
    CProxy_CpdPythonGroup(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_IrrGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_CpdPythonGroup(CkGroupID _gid) : CProxy_IrrGroup(_gid){  }
    CProxyElement_CpdPythonGroup operator[](int onPE) const
      {return CProxyElement_CpdPythonGroup(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

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
    void registerPython(const char *str)
    { CcsRegisterHandler(str, CkCallback(CkIndex_CpdPythonGroup::pyRequest(0), *this)); }
    void ckSetGroupID(CkGroupID g) {
      CProxy_IrrGroup::ckSetGroupID(g);
    }
    CpdPythonGroup* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static CpdPythonGroup* ckLocalBranch(CkGroupID gID) {
      return (CpdPythonGroup*)CkLocalBranch(gID);
    }
/* DECLS: CpdPythonGroup();
 */
    
    static CkGroupID ckNew(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void getArray(int impl_noname_0);
 */
    
    void getArray(int impl_noname_0, const CkEntryOptions *impl_e_opts=NULL);
    
    void getArray(int impl_noname_0, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void getArray(int impl_noname_0, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void getValue(int impl_noname_1);
 */
    
    void getValue(int impl_noname_1, const CkEntryOptions *impl_e_opts=NULL);
    
    void getValue(int impl_noname_1, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void getValue(int impl_noname_1, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void getCast(int impl_noname_2);
 */
    
    void getCast(int impl_noname_2, const CkEntryOptions *impl_e_opts=NULL);
    
    void getCast(int impl_noname_2, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void getCast(int impl_noname_2, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void getStatic(int impl_noname_3);
 */
    
    void getStatic(int impl_noname_3, const CkEntryOptions *impl_e_opts=NULL);
    
    void getStatic(int impl_noname_3, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void getStatic(int impl_noname_3, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void getMessage(int impl_noname_4);
 */
    
    void getMessage(int impl_noname_4, const CkEntryOptions *impl_e_opts=NULL);
    
    void getMessage(int impl_noname_4, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void getMessage(int impl_noname_4, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void registerPersistent(CkCcsRequestMsg* impl_msg);
 */
    
    void registerPersistent(CkCcsRequestMsg* impl_msg);
    
    void registerPersistent(CkCcsRequestMsg* impl_msg, int npes, int *pes);
    
    void registerPersistent(CkCcsRequestMsg* impl_msg, CmiGroup &grp);

/* DECLS: void pyRequest(CkCcsRequestMsg* impl_msg);
 */
    
    void pyRequest(CkCcsRequestMsg* impl_msg);
    
    void pyRequest(CkCcsRequestMsg* impl_msg, int npes, int *pes);
    
    void pyRequest(CkCcsRequestMsg* impl_msg, CmiGroup &grp);

};
/* ---------------- section proxy -------------- */
class CProxySection_CpdPythonGroup: public CProxySection_IrrGroup{
  public:
    typedef CpdPythonGroup local_t;
    typedef CkIndex_CpdPythonGroup index_t;
    typedef CProxy_CpdPythonGroup proxy_t;
    typedef CProxyElement_CpdPythonGroup element_t;
    typedef CProxySection_CpdPythonGroup section_t;

    CProxySection_CpdPythonGroup(void) {
    }
    CProxySection_CpdPythonGroup(const IrrGroup *g) : CProxySection_IrrGroup(g){
    }
    CProxySection_CpdPythonGroup(const CkGroupID &_gid,const int *_pelist,int _npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_CpdPythonGroup(const CkGroupID &_gid,const int *_pelist,int _npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(_gid,_pelist,_npes,factor){  }
    CProxySection_CpdPythonGroup(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,factor){  }
    CProxySection_CpdPythonGroup(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

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
    void registerPython(const char *str)
    { CcsRegisterHandler(str, CkCallback(CkIndex_CpdPythonGroup::pyRequest(0), *this)); }
    void ckSetGroupID(CkGroupID g) {
      CProxySection_IrrGroup::ckSetGroupID(g);
    }
    CpdPythonGroup* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static CpdPythonGroup* ckLocalBranch(CkGroupID gID) {
      return (CpdPythonGroup*)CkLocalBranch(gID);
    }
/* DECLS: CpdPythonGroup();
 */
    

/* DECLS: void getArray(int impl_noname_0);
 */
    
    void getArray(int impl_noname_0, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void getValue(int impl_noname_1);
 */
    
    void getValue(int impl_noname_1, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void getCast(int impl_noname_2);
 */
    
    void getCast(int impl_noname_2, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void getStatic(int impl_noname_3);
 */
    
    void getStatic(int impl_noname_3, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void getMessage(int impl_noname_4);
 */
    
    void getMessage(int impl_noname_4, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void registerPersistent(CkCcsRequestMsg* impl_msg);
 */
    
    void registerPersistent(CkCcsRequestMsg* impl_msg);

/* DECLS: void pyRequest(CkCcsRequestMsg* impl_msg);
 */
    
    void pyRequest(CkCcsRequestMsg* impl_msg);

};
/* ---------------- python wrapper -------------- */
class CkPython_CpdPythonGroup:public Group, public PythonObject {
  public:
    CkPython_CpdPythonGroup(void) {}
    CkPython_CpdPythonGroup(CkMigrateMessage *msg): Group(msg) {}
    void pup(PUP::er &p) {
      Group::pup(p);
    }
    static PyMethodDef CkPy_MethodsCustom[];
    PyMethodDef *getMethods(void) {return CkPy_MethodsCustom;}
    static const char *CkPy_MethodsCustomDoc;
    const char *getMethodsDoc(void) {return CkPy_MethodsCustomDoc;}
};
/* STATIC DECLS: CpdPythonGroup();
 */
/* STATIC DECLS: void getArray(int impl_noname_0);
 */
PyObject *_Python_CpdPythonGroup_getArray(PyObject *self, PyObject *arg);
/* STATIC DECLS: void getValue(int impl_noname_1);
 */
PyObject *_Python_CpdPythonGroup_getValue(PyObject *self, PyObject *arg);
/* STATIC DECLS: void getCast(int impl_noname_2);
 */
PyObject *_Python_CpdPythonGroup_getCast(PyObject *self, PyObject *arg);
/* STATIC DECLS: void getStatic(int impl_noname_3);
 */
PyObject *_Python_CpdPythonGroup_getStatic(PyObject *self, PyObject *arg);
/* STATIC DECLS: void getMessage(int impl_noname_4);
 */
PyObject *_Python_CpdPythonGroup_getMessage(PyObject *self, PyObject *arg);
/* STATIC DECLS: void registerPersistent(CkCcsRequestMsg* impl_msg);
 */
/* STATIC DECLS: void pyRequest(CkCcsRequestMsg* impl_msg);
 */

#define CpdPythonGroup_SDAG_CODE 
typedef CBaseT1<CkPython_CpdPythonGroup, CProxy_CpdPythonGroup>CBase_CpdPythonGroup;

/* ---------------- method closures -------------- */
class Closure_CpdPython {
  public:

};

/* ---------------- method closures -------------- */
class Closure_CpdPythonGroup {
  public:


    struct getArray_2_closure;


    struct getValue_3_closure;


    struct getCast_4_closure;


    struct getStatic_5_closure;


    struct getMessage_6_closure;



};

extern void _registercharmdebug_python(void);
#endif
