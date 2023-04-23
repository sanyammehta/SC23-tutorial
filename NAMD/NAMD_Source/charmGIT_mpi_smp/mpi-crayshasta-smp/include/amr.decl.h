#ifndef _DECL_amr_H_
#define _DECL_amr_H_
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
/* DECLS: message NeighborMsg;
 */
class NeighborMsg;
class CMessage_NeighborMsg:public CkMessage{
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
    CMessage_NeighborMsg();
    static void *pack(NeighborMsg *p);
    static NeighborMsg* unpack(void* p);
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
/* DECLS: message _DMsg;
 */
class _DMsg;
class CMessage__DMsg:public CkMessage{
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
    CMessage__DMsg();
    static void *pack(_DMsg *p);
    static _DMsg* unpack(void* p);
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
/* DECLS: message _ArrInitMsg;
 */
class _ArrInitMsg;
class CMessage__ArrInitMsg:public CkMessage{
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
    CMessage__ArrInitMsg();
    static void *pack(_ArrInitMsg *p);
    static _ArrInitMsg* unpack(void* p);
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
/* DECLS: message ChildInitMsg;
 */
class ChildInitMsg;
class CMessage_ChildInitMsg:public CkMessage{
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
    CMessage_ChildInitMsg();
    static void *pack(ChildInitMsg *p);
    static ChildInitMsg* unpack(void* p);
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
/* DECLS: message _RefineChkMsg;
 */
class _RefineChkMsg;
class CMessage__RefineChkMsg:public CkMessage{
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
    CMessage__RefineChkMsg();
    static void *pack(_RefineChkMsg *p);
    static _RefineChkMsg* unpack(void* p);
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
/* DECLS: message _RefineMsg;
 */
class _RefineMsg;
class CMessage__RefineMsg:public CkMessage{
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
    CMessage__RefineMsg();
    static void *pack(_RefineMsg *p);
    static _RefineMsg* unpack(void* p);
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
/* DECLS: message _RedMsg;
 */
class _RedMsg;
class CMessage__RedMsg:public CkMessage{
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
    CMessage__RedMsg();
    static void *pack(_RedMsg *p);
    static _RedMsg* unpack(void* p);
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
/* DECLS: message StartUpMsg;
 */
class StartUpMsg;
class CMessage_StartUpMsg:public CkMessage{
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
    CMessage_StartUpMsg();
    static void *pack(StartUpMsg *p);
    static StartUpMsg* unpack(void* p);
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
/* DECLS: message _DummyMsg;
 */
class _DummyMsg;
class CMessage__DummyMsg:public CkMessage{
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
    CMessage__DummyMsg();
    static void *pack(_DummyMsg *p);
    static _DummyMsg* unpack(void* p);
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
/* DECLS: message _StatCollMsg;
 */
class _StatCollMsg;
class CMessage__StatCollMsg:public CkMessage{
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
    CMessage__StatCollMsg();
    static void *pack(_StatCollMsg *p);
    static _StatCollMsg* unpack(void* p);
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
/* DECLS: message _CreateStatCollMsg;
 */
class _CreateStatCollMsg;
class CMessage__CreateStatCollMsg:public CkMessage{
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
    CMessage__CreateStatCollMsg();
    static void *pack(_CreateStatCollMsg *p);
    static _CreateStatCollMsg* unpack(void* p);
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

/* DECLS: chare AmrCoordinator: Chare{
AmrCoordinator(_DMsg* impl_msg);
AmrCoordinator(StartUpMsg* impl_msg);
void synchronise(_RedMsg* impl_msg);
void reportStats(_StatCollMsg* impl_msg);
};
 */
 class AmrCoordinator;
 class CkIndex_AmrCoordinator;
 class CProxy_AmrCoordinator;
/* --------------- index object ------------------ */
class CkIndex_AmrCoordinator:public CkIndex_Chare{
  public:
    typedef AmrCoordinator local_t;
    typedef CkIndex_AmrCoordinator index_t;
    typedef CProxy_AmrCoordinator proxy_t;
    typedef CProxy_AmrCoordinator element_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: AmrCoordinator(_DMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_AmrCoordinator__DMsg();
    // Entry point index lookup
    
    inline static int idx_AmrCoordinator__DMsg() {
      static int epidx = reg_AmrCoordinator__DMsg();
      return epidx;
    }

    
    static int ckNew(_DMsg* impl_msg) { return idx_AmrCoordinator__DMsg(); }
    
    static void _call_AmrCoordinator__DMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_AmrCoordinator__DMsg(void* impl_msg, void* impl_obj);
    /* DECLS: AmrCoordinator(StartUpMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_AmrCoordinator_StartUpMsg();
    // Entry point index lookup
    
    inline static int idx_AmrCoordinator_StartUpMsg() {
      static int epidx = reg_AmrCoordinator_StartUpMsg();
      return epidx;
    }

    
    static int ckNew(StartUpMsg* impl_msg) { return idx_AmrCoordinator_StartUpMsg(); }
    
    static void _call_AmrCoordinator_StartUpMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_AmrCoordinator_StartUpMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void synchronise(_RedMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_synchronise__RedMsg();
    // Entry point index lookup
    
    inline static int idx_synchronise__RedMsg() {
      static int epidx = reg_synchronise__RedMsg();
      return epidx;
    }

    
    inline static int idx_synchronise(void (AmrCoordinator::*)(_RedMsg* impl_msg) ) {
      return idx_synchronise__RedMsg();
    }


    
    static int synchronise(_RedMsg* impl_msg) { return idx_synchronise__RedMsg(); }
    
    static void _call_synchronise__RedMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_synchronise__RedMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void reportStats(_StatCollMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_reportStats__StatCollMsg();
    // Entry point index lookup
    
    inline static int idx_reportStats__StatCollMsg() {
      static int epidx = reg_reportStats__StatCollMsg();
      return epidx;
    }

    
    inline static int idx_reportStats(void (AmrCoordinator::*)(_StatCollMsg* impl_msg) ) {
      return idx_reportStats__StatCollMsg();
    }


    
    static int reportStats(_StatCollMsg* impl_msg) { return idx_reportStats__StatCollMsg(); }
    
    static void _call_reportStats__StatCollMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_reportStats__StatCollMsg(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxy_AmrCoordinator:public CProxy_Chare{
  public:
    typedef AmrCoordinator local_t;
    typedef CkIndex_AmrCoordinator index_t;
    typedef CProxy_AmrCoordinator proxy_t;
    typedef CProxy_AmrCoordinator element_t;

    CProxy_AmrCoordinator(void) {};
    CProxy_AmrCoordinator(CkChareID __cid) : CProxy_Chare(__cid){  }
    CProxy_AmrCoordinator(const Chare *c) : CProxy_Chare(c){  }

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
    AmrCoordinator *ckLocal(void) const
    { return (AmrCoordinator *)CkLocalChare(&ckGetChareID()); }
/* DECLS: AmrCoordinator(_DMsg* impl_msg);
 */
    static CkChareID ckNew(_DMsg* impl_msg, int onPE=CK_PE_ANY);
    static void ckNew(_DMsg* impl_msg, CkChareID* pcid, int onPE=CK_PE_ANY);

/* DECLS: AmrCoordinator(StartUpMsg* impl_msg);
 */
    static CkChareID ckNew(StartUpMsg* impl_msg, int onPE=CK_PE_ANY);
    static void ckNew(StartUpMsg* impl_msg, CkChareID* pcid, int onPE=CK_PE_ANY);

/* DECLS: void synchronise(_RedMsg* impl_msg);
 */
    
    void synchronise(_RedMsg* impl_msg);

/* DECLS: void reportStats(_StatCollMsg* impl_msg);
 */
    
    void reportStats(_StatCollMsg* impl_msg);

};
#define AmrCoordinator_SDAG_CODE 
typedef CBaseT1<Chare, CProxy_AmrCoordinator>CBase_AmrCoordinator;

/* DECLS: array Cell: ArrayElement{
void neighbor_data(NeighborMsg* impl_msg);
void refine(_RefineMsg* impl_msg);
void change_to_leaf(ChildInitMsg* impl_msg);
void refine_confirmed(_DMsg* impl_msg);
void resume(_DMsg* impl_msg);
void synchronise(_RedMsg* impl_msg);
void refineExec(_DMsg* impl_msg);
void checkRefine(_RefineChkMsg* impl_msg);
void goToAtSync(_DMsg* impl_msg);
Cell(CkMigrateMessage* impl_msg);
};
 */
 class Cell;
 class CkIndex_Cell;
 class CProxy_Cell;
 class CProxyElement_Cell;
 class CProxySection_Cell;
/* --------------- index object ------------------ */
class CkIndex_Cell:public CkIndex_ArrayElement{
  public:
    typedef Cell local_t;
    typedef CkIndex_Cell index_t;
    typedef CProxy_Cell proxy_t;
    typedef CProxyElement_Cell element_t;
    typedef CProxySection_Cell section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: void neighbor_data(NeighborMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_neighbor_data_NeighborMsg();
    // Entry point index lookup
    
    inline static int idx_neighbor_data_NeighborMsg() {
      static int epidx = reg_neighbor_data_NeighborMsg();
      return epidx;
    }

    
    inline static int idx_neighbor_data(void (Cell::*)(NeighborMsg* impl_msg) ) {
      return idx_neighbor_data_NeighborMsg();
    }


    
    static int neighbor_data(NeighborMsg* impl_msg) { return idx_neighbor_data_NeighborMsg(); }
    
    static void _call_neighbor_data_NeighborMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_neighbor_data_NeighborMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void refine(_RefineMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_refine__RefineMsg();
    // Entry point index lookup
    
    inline static int idx_refine__RefineMsg() {
      static int epidx = reg_refine__RefineMsg();
      return epidx;
    }

    
    inline static int idx_refine(void (Cell::*)(_RefineMsg* impl_msg) ) {
      return idx_refine__RefineMsg();
    }


    
    static int refine(_RefineMsg* impl_msg) { return idx_refine__RefineMsg(); }
    
    static void _call_refine__RefineMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_refine__RefineMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void change_to_leaf(ChildInitMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_change_to_leaf_ChildInitMsg();
    // Entry point index lookup
    
    inline static int idx_change_to_leaf_ChildInitMsg() {
      static int epidx = reg_change_to_leaf_ChildInitMsg();
      return epidx;
    }

    
    inline static int idx_change_to_leaf(void (Cell::*)(ChildInitMsg* impl_msg) ) {
      return idx_change_to_leaf_ChildInitMsg();
    }


    
    static int change_to_leaf(ChildInitMsg* impl_msg) { return idx_change_to_leaf_ChildInitMsg(); }
    
    static void _call_change_to_leaf_ChildInitMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_change_to_leaf_ChildInitMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void refine_confirmed(_DMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_refine_confirmed__DMsg();
    // Entry point index lookup
    
    inline static int idx_refine_confirmed__DMsg() {
      static int epidx = reg_refine_confirmed__DMsg();
      return epidx;
    }

    
    inline static int idx_refine_confirmed(void (Cell::*)(_DMsg* impl_msg) ) {
      return idx_refine_confirmed__DMsg();
    }


    
    static int refine_confirmed(_DMsg* impl_msg) { return idx_refine_confirmed__DMsg(); }
    
    static void _call_refine_confirmed__DMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_refine_confirmed__DMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void resume(_DMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_resume__DMsg();
    // Entry point index lookup
    
    inline static int idx_resume__DMsg() {
      static int epidx = reg_resume__DMsg();
      return epidx;
    }

    
    inline static int idx_resume(void (Cell::*)(_DMsg* impl_msg) ) {
      return idx_resume__DMsg();
    }


    
    static int resume(_DMsg* impl_msg) { return idx_resume__DMsg(); }
    
    static void _call_resume__DMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_resume__DMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void synchronise(_RedMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_synchronise__RedMsg();
    // Entry point index lookup
    
    inline static int idx_synchronise__RedMsg() {
      static int epidx = reg_synchronise__RedMsg();
      return epidx;
    }

    
    inline static int idx_synchronise(void (Cell::*)(_RedMsg* impl_msg) ) {
      return idx_synchronise__RedMsg();
    }


    
    static int synchronise(_RedMsg* impl_msg) { return idx_synchronise__RedMsg(); }
    
    static void _call_synchronise__RedMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_synchronise__RedMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void refineExec(_DMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_refineExec__DMsg();
    // Entry point index lookup
    
    inline static int idx_refineExec__DMsg() {
      static int epidx = reg_refineExec__DMsg();
      return epidx;
    }

    
    inline static int idx_refineExec(void (Cell::*)(_DMsg* impl_msg) ) {
      return idx_refineExec__DMsg();
    }


    
    static int refineExec(_DMsg* impl_msg) { return idx_refineExec__DMsg(); }
    
    static void _call_refineExec__DMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_refineExec__DMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void checkRefine(_RefineChkMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_checkRefine__RefineChkMsg();
    // Entry point index lookup
    
    inline static int idx_checkRefine__RefineChkMsg() {
      static int epidx = reg_checkRefine__RefineChkMsg();
      return epidx;
    }

    
    inline static int idx_checkRefine(void (Cell::*)(_RefineChkMsg* impl_msg) ) {
      return idx_checkRefine__RefineChkMsg();
    }


    
    static int checkRefine(_RefineChkMsg* impl_msg) { return idx_checkRefine__RefineChkMsg(); }
    
    static void _call_checkRefine__RefineChkMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_checkRefine__RefineChkMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void goToAtSync(_DMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_goToAtSync__DMsg();
    // Entry point index lookup
    
    inline static int idx_goToAtSync__DMsg() {
      static int epidx = reg_goToAtSync__DMsg();
      return epidx;
    }

    
    inline static int idx_goToAtSync(void (Cell::*)(_DMsg* impl_msg) ) {
      return idx_goToAtSync__DMsg();
    }


    
    static int goToAtSync(_DMsg* impl_msg) { return idx_goToAtSync__DMsg(); }
    
    static void _call_goToAtSync__DMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_goToAtSync__DMsg(void* impl_msg, void* impl_obj);
    /* DECLS: Cell(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_Cell_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_Cell_CkMigrateMessage() {
      static int epidx = reg_Cell_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_Cell_CkMigrateMessage(); }
    
    static void _call_Cell_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_Cell_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
 class CProxyElement_Cell : public CProxyElement_ArrayElement{
  public:
    typedef Cell local_t;
    typedef CkIndex_Cell index_t;
    typedef CProxy_Cell proxy_t;
    typedef CProxyElement_Cell element_t;
    typedef CProxySection_Cell section_t;

    using array_index_t = CkArrayIndexBitVec;

    /* TRAM aggregators */

    CProxyElement_Cell(void) {
    }
    CProxyElement_Cell(const ArrayElement *e) : CProxyElement_ArrayElement(e){
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

    Cell *ckLocal(void) const
    { return (Cell *)CProxyElement_ArrayElement::ckLocal(); }

    CProxyElement_Cell(const CkArrayID &aid,const CkArrayIndexBitVec &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_Cell(const CkArrayID &aid,const CkArrayIndexBitVec &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}

    CProxyElement_Cell(const CkArrayID &aid,const CkArrayIndex &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_Cell(const CkArrayID &aid,const CkArrayIndex &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}
/* DECLS: void neighbor_data(NeighborMsg* impl_msg);
 */
    
    void neighbor_data(NeighborMsg* impl_msg) ;

/* DECLS: void refine(_RefineMsg* impl_msg);
 */
    
    void refine(_RefineMsg* impl_msg) ;

/* DECLS: void change_to_leaf(ChildInitMsg* impl_msg);
 */
    
    void change_to_leaf(ChildInitMsg* impl_msg) ;

/* DECLS: void refine_confirmed(_DMsg* impl_msg);
 */
    
    void refine_confirmed(_DMsg* impl_msg) ;

/* DECLS: void resume(_DMsg* impl_msg);
 */
    
    void resume(_DMsg* impl_msg) ;

/* DECLS: void synchronise(_RedMsg* impl_msg);
 */
    
    void synchronise(_RedMsg* impl_msg) ;

/* DECLS: void refineExec(_DMsg* impl_msg);
 */
    
    void refineExec(_DMsg* impl_msg) ;

/* DECLS: void checkRefine(_RefineChkMsg* impl_msg);
 */
    
    void checkRefine(_RefineChkMsg* impl_msg) ;

/* DECLS: void goToAtSync(_DMsg* impl_msg);
 */
    
    void goToAtSync(_DMsg* impl_msg) ;

/* DECLS: Cell(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- collective proxy -------------- */
 class CProxy_Cell : public CProxy_ArrayElement{
  public:
    typedef Cell local_t;
    typedef CkIndex_Cell index_t;
    typedef CProxy_Cell proxy_t;
    typedef CProxyElement_Cell element_t;
    typedef CProxySection_Cell section_t;

    using array_index_t = CkArrayIndexBitVec;
    CProxy_Cell(void) {
    }
    CProxy_Cell(const ArrayElement *e) : CProxy_ArrayElement(e){
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
    CProxyElement_Cell operator [] (const CkArrayIndexBitVec &idx) const
    { return CProxyElement_Cell(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_Cell operator() (const CkArrayIndexBitVec &idx) const
    { return CProxyElement_Cell(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxy_Cell(const CkArrayID &aid,CK_DELCTOR_PARAM) 
        :CProxy_ArrayElement(aid,CK_DELCTOR_ARGS) {}
    CProxy_Cell(const CkArrayID &aid) 
        :CProxy_ArrayElement(aid) {}
/* DECLS: void neighbor_data(NeighborMsg* impl_msg);
 */
    
    void neighbor_data(NeighborMsg* impl_msg) ;

/* DECLS: void refine(_RefineMsg* impl_msg);
 */
    
    void refine(_RefineMsg* impl_msg) ;

/* DECLS: void change_to_leaf(ChildInitMsg* impl_msg);
 */
    
    void change_to_leaf(ChildInitMsg* impl_msg) ;

/* DECLS: void refine_confirmed(_DMsg* impl_msg);
 */
    
    void refine_confirmed(_DMsg* impl_msg) ;

/* DECLS: void resume(_DMsg* impl_msg);
 */
    
    void resume(_DMsg* impl_msg) ;

/* DECLS: void synchronise(_RedMsg* impl_msg);
 */
    
    void synchronise(_RedMsg* impl_msg) ;

/* DECLS: void refineExec(_DMsg* impl_msg);
 */
    
    void refineExec(_DMsg* impl_msg) ;

/* DECLS: void checkRefine(_RefineChkMsg* impl_msg);
 */
    
    void checkRefine(_RefineChkMsg* impl_msg) ;

/* DECLS: void goToAtSync(_DMsg* impl_msg);
 */
    
    void goToAtSync(_DMsg* impl_msg) ;

/* DECLS: Cell(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- section proxy -------------- */
 class CProxySection_Cell : public CProxySection_ArrayElement{
  public:
    typedef Cell local_t;
    typedef CkIndex_Cell index_t;
    typedef CProxy_Cell proxy_t;
    typedef CProxyElement_Cell element_t;
    typedef CProxySection_Cell section_t;

    using array_index_t = CkArrayIndexBitVec;
    CProxySection_Cell(void) {
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
    CProxyElement_Cell operator [] (const CkArrayIndexBitVec &idx) const
        {return CProxyElement_Cell(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_Cell operator() (const CkArrayIndexBitVec &idx) const
        {return CProxyElement_Cell(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxySection_Cell(const CkArrayID &aid, CkArrayIndex *elems, int nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_Cell(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_Cell(const CkArrayID &aid, CkArrayIndex *elems, int nElems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_ArrayElement(aid,elems,nElems, factor) {}
    CProxySection_Cell(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_ArrayElement(aid,elems, factor) { ckAutoDelegate(); }
    CProxySection_Cell(const CkSectionID &sid)  
        :CProxySection_ArrayElement(sid) { ckAutoDelegate(); }
    CProxySection_Cell(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(n,aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_Cell(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_Cell(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems) 
        :CProxySection_ArrayElement(n,aid,elems,nElems) { ckAutoDelegate(); }
    CProxySection_Cell(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems) 
        :CProxySection_ArrayElement(aid,elems) { ckAutoDelegate(); }
    CProxySection_Cell(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, int factor) 
        :CProxySection_ArrayElement(n,aid,elems,nElems, factor) { ckAutoDelegate(); }
    CProxySection_Cell(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, int factor) 
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
/* DECLS: void neighbor_data(NeighborMsg* impl_msg);
 */
    
    void neighbor_data(NeighborMsg* impl_msg) ;

/* DECLS: void refine(_RefineMsg* impl_msg);
 */
    
    void refine(_RefineMsg* impl_msg) ;

/* DECLS: void change_to_leaf(ChildInitMsg* impl_msg);
 */
    
    void change_to_leaf(ChildInitMsg* impl_msg) ;

/* DECLS: void refine_confirmed(_DMsg* impl_msg);
 */
    
    void refine_confirmed(_DMsg* impl_msg) ;

/* DECLS: void resume(_DMsg* impl_msg);
 */
    
    void resume(_DMsg* impl_msg) ;

/* DECLS: void synchronise(_RedMsg* impl_msg);
 */
    
    void synchronise(_RedMsg* impl_msg) ;

/* DECLS: void refineExec(_DMsg* impl_msg);
 */
    
    void refineExec(_DMsg* impl_msg) ;

/* DECLS: void checkRefine(_RefineChkMsg* impl_msg);
 */
    
    void checkRefine(_RefineChkMsg* impl_msg) ;

/* DECLS: void goToAtSync(_DMsg* impl_msg);
 */
    
    void goToAtSync(_DMsg* impl_msg) ;

/* DECLS: Cell(CkMigrateMessage* impl_msg);
 */

};
#define Cell_SDAG_CODE 
typedef CBaseT1<ArrayElementT<BitVec>, CProxy_Cell>CBase_Cell;

/* DECLS: array Cell1D: Cell{
Cell1D(_ArrInitMsg* impl_msg);
Cell1D(CkMigrateMessage* impl_msg);
};
 */
 class Cell1D;
 class CkIndex_Cell1D;
 class CProxy_Cell1D;
 class CProxyElement_Cell1D;
 class CProxySection_Cell1D;
/* --------------- index object ------------------ */
class CkIndex_Cell1D:public CkIndex_Cell{
  public:
    typedef Cell1D local_t;
    typedef CkIndex_Cell1D index_t;
    typedef CProxy_Cell1D proxy_t;
    typedef CProxyElement_Cell1D element_t;
    typedef CProxySection_Cell1D section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: Cell1D(_ArrInitMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_Cell1D__ArrInitMsg();
    // Entry point index lookup
    
    inline static int idx_Cell1D__ArrInitMsg() {
      static int epidx = reg_Cell1D__ArrInitMsg();
      return epidx;
    }

    
    static int ckNew(_ArrInitMsg* impl_msg) { return idx_Cell1D__ArrInitMsg(); }
    
    static void _call_Cell1D__ArrInitMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_Cell1D__ArrInitMsg(void* impl_msg, void* impl_obj);
    /* DECLS: Cell1D(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_Cell1D_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_Cell1D_CkMigrateMessage() {
      static int epidx = reg_Cell1D_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_Cell1D_CkMigrateMessage(); }
    
    static void _call_Cell1D_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_Cell1D_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
 class CProxyElement_Cell1D : public CProxyElement_Cell{
  public:
    typedef Cell1D local_t;
    typedef CkIndex_Cell1D index_t;
    typedef CProxy_Cell1D proxy_t;
    typedef CProxyElement_Cell1D element_t;
    typedef CProxySection_Cell1D section_t;

    using array_index_t = CkArrayIndexBitVec;

    /* TRAM aggregators */

    CProxyElement_Cell1D(void) {
    }
    CProxyElement_Cell1D(const ArrayElement *e) : CProxyElement_Cell(e){
    }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxyElement_Cell::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxyElement_Cell::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxyElement_Cell::pup(p);
    }

    int ckIsDelegated(void) const
    { return CProxyElement_Cell::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxyElement_Cell::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxyElement_Cell::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxyElement_Cell::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxyElement_Cell::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxyElement_Cell::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxyElement_Cell::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxyElement_Cell::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(CkArrayOptions opts = CkArrayOptions())
    { return CProxyElement_Cell::ckCreateEmptyArray(opts); }
    inline static void ckCreateEmptyArrayAsync(CkCallback cb, CkArrayOptions opts = CkArrayOptions())
    { CProxyElement_Cell::ckCreateEmptyArrayAsync(cb, opts); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxyElement_Cell::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxyElement_Cell::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxyElement_Cell::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxyElement_Cell::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_Cell::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_Cell::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxyElement_Cell::ckSetReductionClient(cb); }

    inline void ckInsert(CkArrayMessage *m,int ctor,int onPe)
    { CProxyElement_Cell::ckInsert(m,ctor,onPe); }
    inline void ckSend(CkArrayMessage *m, int ep, int opts = 0) const
    { CProxyElement_Cell::ckSend(m,ep,opts); }
    inline void *ckSendSync(CkArrayMessage *m, int ep) const
    { return CProxyElement_Cell::ckSendSync(m,ep); }
    inline const CkArrayIndex &ckGetIndex() const
    { return CProxyElement_Cell::ckGetIndex(); }

    Cell1D *ckLocal(void) const
    { return (Cell1D *)CProxyElement_Cell::ckLocal(); }

    CProxyElement_Cell1D(const CkArrayID &aid,const CkArrayIndexBitVec &idx,CK_DELCTOR_PARAM)
        :CProxyElement_Cell(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_Cell1D(const CkArrayID &aid,const CkArrayIndexBitVec &idx)
        :CProxyElement_Cell(aid,idx)
    {
}

    CProxyElement_Cell1D(const CkArrayID &aid,const CkArrayIndex &idx,CK_DELCTOR_PARAM)
        :CProxyElement_Cell(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_Cell1D(const CkArrayID &aid,const CkArrayIndex &idx)
        :CProxyElement_Cell(aid,idx)
    {
}
/* DECLS: Cell1D(_ArrInitMsg* impl_msg);
 */
    
    void insert(_ArrInitMsg* impl_msg, int onPE=-1);
/* DECLS: Cell1D(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- collective proxy -------------- */
 class CProxy_Cell1D : public CProxy_Cell{
  public:
    typedef Cell1D local_t;
    typedef CkIndex_Cell1D index_t;
    typedef CProxy_Cell1D proxy_t;
    typedef CProxyElement_Cell1D element_t;
    typedef CProxySection_Cell1D section_t;

    using array_index_t = CkArrayIndexBitVec;
    CProxy_Cell1D(void) {
    }
    CProxy_Cell1D(const ArrayElement *e) : CProxy_Cell(e){
    }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_Cell::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_Cell::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_Cell::pup(p);
    }

    int ckIsDelegated(void) const
    { return CProxy_Cell::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_Cell::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_Cell::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_Cell::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxy_Cell::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxy_Cell::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxy_Cell::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxy_Cell::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(CkArrayOptions opts = CkArrayOptions())
    { return CProxy_Cell::ckCreateEmptyArray(opts); }
    inline static void ckCreateEmptyArrayAsync(CkCallback cb, CkArrayOptions opts = CkArrayOptions())
    { CProxy_Cell::ckCreateEmptyArrayAsync(cb, opts); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxy_Cell::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxy_Cell::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxy_Cell::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxy_Cell::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_Cell::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_Cell::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxy_Cell::ckSetReductionClient(cb); }

    // Empty array construction
    static CkArrayID ckNew(CkArrayOptions opts = CkArrayOptions()) { return ckCreateEmptyArray(opts); }
    static void      ckNew(CkCallback cb, CkArrayOptions opts = CkArrayOptions()) { ckCreateEmptyArrayAsync(cb, opts); }

    // Generalized array indexing:
    CProxyElement_Cell1D operator [] (const CkArrayIndexBitVec &idx) const
    { return CProxyElement_Cell1D(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_Cell1D operator() (const CkArrayIndexBitVec &idx) const
    { return CProxyElement_Cell1D(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxy_Cell1D(const CkArrayID &aid,CK_DELCTOR_PARAM) 
        :CProxy_Cell(aid,CK_DELCTOR_ARGS) {}
    CProxy_Cell1D(const CkArrayID &aid) 
        :CProxy_Cell(aid) {}
/* DECLS: Cell1D(_ArrInitMsg* impl_msg);
 */
    
    static CkArrayID ckNew(_ArrInitMsg* impl_msg, const CkArrayOptions &opts = CkArrayOptions());
    static void      ckNew(_ArrInitMsg* impl_msg, const CkArrayOptions &opts, CkCallback _ck_array_creation_cb);

/* DECLS: Cell1D(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- section proxy -------------- */
 class CProxySection_Cell1D : public CProxySection_Cell{
  public:
    typedef Cell1D local_t;
    typedef CkIndex_Cell1D index_t;
    typedef CProxy_Cell1D proxy_t;
    typedef CProxyElement_Cell1D element_t;
    typedef CProxySection_Cell1D section_t;

    using array_index_t = CkArrayIndexBitVec;
    CProxySection_Cell1D(void) {
    }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxySection_Cell::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxySection_Cell::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxySection_Cell::pup(p);
    }

    int ckIsDelegated(void) const
    { return CProxySection_Cell::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxySection_Cell::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxySection_Cell::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxySection_Cell::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxySection_Cell::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxySection_Cell::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxySection_Cell::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxySection_Cell::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(CkArrayOptions opts = CkArrayOptions())
    { return CProxySection_Cell::ckCreateEmptyArray(opts); }
    inline static void ckCreateEmptyArrayAsync(CkCallback cb, CkArrayOptions opts = CkArrayOptions())
    { CProxySection_Cell::ckCreateEmptyArrayAsync(cb, opts); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxySection_Cell::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxySection_Cell::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxySection_Cell::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxySection_Cell::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_Cell::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_Cell::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxySection_Cell::ckSetReductionClient(cb); }

    inline void ckSend(CkArrayMessage *m, int ep, int opts = 0)
    { CProxySection_Cell::ckSend(m,ep,opts); }
    inline CkSectionInfo &ckGetSectionInfo()
    { return CProxySection_Cell::ckGetSectionInfo(); }
    inline CkSectionID *ckGetSectionIDs()
    { return CProxySection_Cell::ckGetSectionIDs(); }
    inline CkSectionID &ckGetSectionID()
    { return CProxySection_Cell::ckGetSectionID(); }
    inline CkSectionID &ckGetSectionID(int i)
    { return CProxySection_Cell::ckGetSectionID(i); }
    inline CkArrayID ckGetArrayIDn(int i) const
    { return CProxySection_Cell::ckGetArrayIDn(i); } 
    inline CkArrayIndex *ckGetArrayElements() const
    { return CProxySection_Cell::ckGetArrayElements(); }
    inline CkArrayIndex *ckGetArrayElements(int i) const
    { return CProxySection_Cell::ckGetArrayElements(i); }
    inline int ckGetNumElements() const
    { return CProxySection_Cell::ckGetNumElements(); } 
    inline int ckGetNumElements(int i) const
    { return CProxySection_Cell::ckGetNumElements(i); }    // Generalized array indexing:
    CProxyElement_Cell1D operator [] (const CkArrayIndexBitVec &idx) const
        {return CProxyElement_Cell1D(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_Cell1D operator() (const CkArrayIndexBitVec &idx) const
        {return CProxyElement_Cell1D(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxySection_Cell1D(const CkArrayID &aid, CkArrayIndex *elems, int nElems, CK_DELCTOR_PARAM) 
        :CProxySection_Cell(aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_Cell1D(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, CK_DELCTOR_PARAM) 
        :CProxySection_Cell(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_Cell1D(const CkArrayID &aid, CkArrayIndex *elems, int nElems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_Cell(aid,elems,nElems, factor) {}
    CProxySection_Cell1D(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_Cell(aid,elems, factor) { ckAutoDelegate(); }
    CProxySection_Cell1D(const CkSectionID &sid)  
        :CProxySection_Cell(sid) { ckAutoDelegate(); }
    CProxySection_Cell1D(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, CK_DELCTOR_PARAM) 
        :CProxySection_Cell(n,aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_Cell1D(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, CK_DELCTOR_PARAM) 
        :CProxySection_Cell(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_Cell1D(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems) 
        :CProxySection_Cell(n,aid,elems,nElems) { ckAutoDelegate(); }
    CProxySection_Cell1D(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems) 
        :CProxySection_Cell(aid,elems) { ckAutoDelegate(); }
    CProxySection_Cell1D(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, int factor) 
        :CProxySection_Cell(n,aid,elems,nElems, factor) { ckAutoDelegate(); }
    CProxySection_Cell1D(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, int factor) 
        :CProxySection_Cell(aid,elems, factor) { ckAutoDelegate(); }
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
      CProxySection_Cell::ckAutoDelegate(opts);
    } 
    void setReductionClient(CkCallback *cb) {
      CProxySection_Cell::setReductionClient(cb);
    } 
    void resetSection() {
      CProxySection_Cell::resetSection();
    } 
    static void contribute(CkSectionInfo &sid, int userData=-1, int fragSize=-1);
    static void contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, int userData=-1, int fragSize=-1);
    template <typename T>
    static void contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, int userData=-1, int fragSize=-1);
    static void contribute(CkSectionInfo &sid, const CkCallback &cb, int userData=-1, int fragSize=-1);
    static void contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData=-1, int fragSize=-1);
    template <typename T>
    static void contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData=-1, int fragSize=-1);
/* DECLS: Cell1D(_ArrInitMsg* impl_msg);
 */
    

/* DECLS: Cell1D(CkMigrateMessage* impl_msg);
 */

};
#define Cell1D_SDAG_CODE 
typedef CBaseT1<Cell, CProxy_Cell1D>CBase_Cell1D;

/* DECLS: array Cell2D: Cell{
Cell2D(_ArrInitMsg* impl_msg);
Cell2D(CkMigrateMessage* impl_msg);
};
 */
 class Cell2D;
 class CkIndex_Cell2D;
 class CProxy_Cell2D;
 class CProxyElement_Cell2D;
 class CProxySection_Cell2D;
/* --------------- index object ------------------ */
class CkIndex_Cell2D:public CkIndex_Cell{
  public:
    typedef Cell2D local_t;
    typedef CkIndex_Cell2D index_t;
    typedef CProxy_Cell2D proxy_t;
    typedef CProxyElement_Cell2D element_t;
    typedef CProxySection_Cell2D section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: Cell2D(_ArrInitMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_Cell2D__ArrInitMsg();
    // Entry point index lookup
    
    inline static int idx_Cell2D__ArrInitMsg() {
      static int epidx = reg_Cell2D__ArrInitMsg();
      return epidx;
    }

    
    static int ckNew(_ArrInitMsg* impl_msg) { return idx_Cell2D__ArrInitMsg(); }
    
    static void _call_Cell2D__ArrInitMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_Cell2D__ArrInitMsg(void* impl_msg, void* impl_obj);
    /* DECLS: Cell2D(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_Cell2D_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_Cell2D_CkMigrateMessage() {
      static int epidx = reg_Cell2D_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_Cell2D_CkMigrateMessage(); }
    
    static void _call_Cell2D_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_Cell2D_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
 class CProxyElement_Cell2D : public CProxyElement_Cell{
  public:
    typedef Cell2D local_t;
    typedef CkIndex_Cell2D index_t;
    typedef CProxy_Cell2D proxy_t;
    typedef CProxyElement_Cell2D element_t;
    typedef CProxySection_Cell2D section_t;

    using array_index_t = CkArrayIndexBitVec;

    /* TRAM aggregators */

    CProxyElement_Cell2D(void) {
    }
    CProxyElement_Cell2D(const ArrayElement *e) : CProxyElement_Cell(e){
    }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxyElement_Cell::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxyElement_Cell::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxyElement_Cell::pup(p);
    }

    int ckIsDelegated(void) const
    { return CProxyElement_Cell::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxyElement_Cell::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxyElement_Cell::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxyElement_Cell::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxyElement_Cell::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxyElement_Cell::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxyElement_Cell::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxyElement_Cell::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(CkArrayOptions opts = CkArrayOptions())
    { return CProxyElement_Cell::ckCreateEmptyArray(opts); }
    inline static void ckCreateEmptyArrayAsync(CkCallback cb, CkArrayOptions opts = CkArrayOptions())
    { CProxyElement_Cell::ckCreateEmptyArrayAsync(cb, opts); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxyElement_Cell::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxyElement_Cell::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxyElement_Cell::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxyElement_Cell::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_Cell::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_Cell::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxyElement_Cell::ckSetReductionClient(cb); }

    inline void ckInsert(CkArrayMessage *m,int ctor,int onPe)
    { CProxyElement_Cell::ckInsert(m,ctor,onPe); }
    inline void ckSend(CkArrayMessage *m, int ep, int opts = 0) const
    { CProxyElement_Cell::ckSend(m,ep,opts); }
    inline void *ckSendSync(CkArrayMessage *m, int ep) const
    { return CProxyElement_Cell::ckSendSync(m,ep); }
    inline const CkArrayIndex &ckGetIndex() const
    { return CProxyElement_Cell::ckGetIndex(); }

    Cell2D *ckLocal(void) const
    { return (Cell2D *)CProxyElement_Cell::ckLocal(); }

    CProxyElement_Cell2D(const CkArrayID &aid,const CkArrayIndexBitVec &idx,CK_DELCTOR_PARAM)
        :CProxyElement_Cell(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_Cell2D(const CkArrayID &aid,const CkArrayIndexBitVec &idx)
        :CProxyElement_Cell(aid,idx)
    {
}

    CProxyElement_Cell2D(const CkArrayID &aid,const CkArrayIndex &idx,CK_DELCTOR_PARAM)
        :CProxyElement_Cell(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_Cell2D(const CkArrayID &aid,const CkArrayIndex &idx)
        :CProxyElement_Cell(aid,idx)
    {
}
/* DECLS: Cell2D(_ArrInitMsg* impl_msg);
 */
    
    void insert(_ArrInitMsg* impl_msg, int onPE=-1);
/* DECLS: Cell2D(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- collective proxy -------------- */
 class CProxy_Cell2D : public CProxy_Cell{
  public:
    typedef Cell2D local_t;
    typedef CkIndex_Cell2D index_t;
    typedef CProxy_Cell2D proxy_t;
    typedef CProxyElement_Cell2D element_t;
    typedef CProxySection_Cell2D section_t;

    using array_index_t = CkArrayIndexBitVec;
    CProxy_Cell2D(void) {
    }
    CProxy_Cell2D(const ArrayElement *e) : CProxy_Cell(e){
    }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_Cell::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_Cell::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_Cell::pup(p);
    }

    int ckIsDelegated(void) const
    { return CProxy_Cell::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_Cell::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_Cell::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_Cell::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxy_Cell::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxy_Cell::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxy_Cell::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxy_Cell::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(CkArrayOptions opts = CkArrayOptions())
    { return CProxy_Cell::ckCreateEmptyArray(opts); }
    inline static void ckCreateEmptyArrayAsync(CkCallback cb, CkArrayOptions opts = CkArrayOptions())
    { CProxy_Cell::ckCreateEmptyArrayAsync(cb, opts); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxy_Cell::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxy_Cell::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxy_Cell::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxy_Cell::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_Cell::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_Cell::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxy_Cell::ckSetReductionClient(cb); }

    // Empty array construction
    static CkArrayID ckNew(CkArrayOptions opts = CkArrayOptions()) { return ckCreateEmptyArray(opts); }
    static void      ckNew(CkCallback cb, CkArrayOptions opts = CkArrayOptions()) { ckCreateEmptyArrayAsync(cb, opts); }

    // Generalized array indexing:
    CProxyElement_Cell2D operator [] (const CkArrayIndexBitVec &idx) const
    { return CProxyElement_Cell2D(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_Cell2D operator() (const CkArrayIndexBitVec &idx) const
    { return CProxyElement_Cell2D(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxy_Cell2D(const CkArrayID &aid,CK_DELCTOR_PARAM) 
        :CProxy_Cell(aid,CK_DELCTOR_ARGS) {}
    CProxy_Cell2D(const CkArrayID &aid) 
        :CProxy_Cell(aid) {}
/* DECLS: Cell2D(_ArrInitMsg* impl_msg);
 */
    
    static CkArrayID ckNew(_ArrInitMsg* impl_msg, const CkArrayOptions &opts = CkArrayOptions());
    static void      ckNew(_ArrInitMsg* impl_msg, const CkArrayOptions &opts, CkCallback _ck_array_creation_cb);

/* DECLS: Cell2D(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- section proxy -------------- */
 class CProxySection_Cell2D : public CProxySection_Cell{
  public:
    typedef Cell2D local_t;
    typedef CkIndex_Cell2D index_t;
    typedef CProxy_Cell2D proxy_t;
    typedef CProxyElement_Cell2D element_t;
    typedef CProxySection_Cell2D section_t;

    using array_index_t = CkArrayIndexBitVec;
    CProxySection_Cell2D(void) {
    }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxySection_Cell::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxySection_Cell::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxySection_Cell::pup(p);
    }

    int ckIsDelegated(void) const
    { return CProxySection_Cell::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxySection_Cell::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxySection_Cell::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxySection_Cell::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxySection_Cell::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxySection_Cell::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxySection_Cell::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxySection_Cell::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(CkArrayOptions opts = CkArrayOptions())
    { return CProxySection_Cell::ckCreateEmptyArray(opts); }
    inline static void ckCreateEmptyArrayAsync(CkCallback cb, CkArrayOptions opts = CkArrayOptions())
    { CProxySection_Cell::ckCreateEmptyArrayAsync(cb, opts); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxySection_Cell::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxySection_Cell::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxySection_Cell::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxySection_Cell::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_Cell::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_Cell::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxySection_Cell::ckSetReductionClient(cb); }

    inline void ckSend(CkArrayMessage *m, int ep, int opts = 0)
    { CProxySection_Cell::ckSend(m,ep,opts); }
    inline CkSectionInfo &ckGetSectionInfo()
    { return CProxySection_Cell::ckGetSectionInfo(); }
    inline CkSectionID *ckGetSectionIDs()
    { return CProxySection_Cell::ckGetSectionIDs(); }
    inline CkSectionID &ckGetSectionID()
    { return CProxySection_Cell::ckGetSectionID(); }
    inline CkSectionID &ckGetSectionID(int i)
    { return CProxySection_Cell::ckGetSectionID(i); }
    inline CkArrayID ckGetArrayIDn(int i) const
    { return CProxySection_Cell::ckGetArrayIDn(i); } 
    inline CkArrayIndex *ckGetArrayElements() const
    { return CProxySection_Cell::ckGetArrayElements(); }
    inline CkArrayIndex *ckGetArrayElements(int i) const
    { return CProxySection_Cell::ckGetArrayElements(i); }
    inline int ckGetNumElements() const
    { return CProxySection_Cell::ckGetNumElements(); } 
    inline int ckGetNumElements(int i) const
    { return CProxySection_Cell::ckGetNumElements(i); }    // Generalized array indexing:
    CProxyElement_Cell2D operator [] (const CkArrayIndexBitVec &idx) const
        {return CProxyElement_Cell2D(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_Cell2D operator() (const CkArrayIndexBitVec &idx) const
        {return CProxyElement_Cell2D(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxySection_Cell2D(const CkArrayID &aid, CkArrayIndex *elems, int nElems, CK_DELCTOR_PARAM) 
        :CProxySection_Cell(aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_Cell2D(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, CK_DELCTOR_PARAM) 
        :CProxySection_Cell(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_Cell2D(const CkArrayID &aid, CkArrayIndex *elems, int nElems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_Cell(aid,elems,nElems, factor) {}
    CProxySection_Cell2D(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_Cell(aid,elems, factor) { ckAutoDelegate(); }
    CProxySection_Cell2D(const CkSectionID &sid)  
        :CProxySection_Cell(sid) { ckAutoDelegate(); }
    CProxySection_Cell2D(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, CK_DELCTOR_PARAM) 
        :CProxySection_Cell(n,aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_Cell2D(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, CK_DELCTOR_PARAM) 
        :CProxySection_Cell(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_Cell2D(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems) 
        :CProxySection_Cell(n,aid,elems,nElems) { ckAutoDelegate(); }
    CProxySection_Cell2D(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems) 
        :CProxySection_Cell(aid,elems) { ckAutoDelegate(); }
    CProxySection_Cell2D(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, int factor) 
        :CProxySection_Cell(n,aid,elems,nElems, factor) { ckAutoDelegate(); }
    CProxySection_Cell2D(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, int factor) 
        :CProxySection_Cell(aid,elems, factor) { ckAutoDelegate(); }
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
      CProxySection_Cell::ckAutoDelegate(opts);
    } 
    void setReductionClient(CkCallback *cb) {
      CProxySection_Cell::setReductionClient(cb);
    } 
    void resetSection() {
      CProxySection_Cell::resetSection();
    } 
    static void contribute(CkSectionInfo &sid, int userData=-1, int fragSize=-1);
    static void contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, int userData=-1, int fragSize=-1);
    template <typename T>
    static void contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, int userData=-1, int fragSize=-1);
    static void contribute(CkSectionInfo &sid, const CkCallback &cb, int userData=-1, int fragSize=-1);
    static void contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData=-1, int fragSize=-1);
    template <typename T>
    static void contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData=-1, int fragSize=-1);
/* DECLS: Cell2D(_ArrInitMsg* impl_msg);
 */
    

/* DECLS: Cell2D(CkMigrateMessage* impl_msg);
 */

};
#define Cell2D_SDAG_CODE 
typedef CBaseT1<Cell, CProxy_Cell2D>CBase_Cell2D;

/* DECLS: array Cell3D: Cell{
Cell3D(_ArrInitMsg* impl_msg);
Cell3D(CkMigrateMessage* impl_msg);
};
 */
 class Cell3D;
 class CkIndex_Cell3D;
 class CProxy_Cell3D;
 class CProxyElement_Cell3D;
 class CProxySection_Cell3D;
/* --------------- index object ------------------ */
class CkIndex_Cell3D:public CkIndex_Cell{
  public:
    typedef Cell3D local_t;
    typedef CkIndex_Cell3D index_t;
    typedef CProxy_Cell3D proxy_t;
    typedef CProxyElement_Cell3D element_t;
    typedef CProxySection_Cell3D section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: Cell3D(_ArrInitMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_Cell3D__ArrInitMsg();
    // Entry point index lookup
    
    inline static int idx_Cell3D__ArrInitMsg() {
      static int epidx = reg_Cell3D__ArrInitMsg();
      return epidx;
    }

    
    static int ckNew(_ArrInitMsg* impl_msg) { return idx_Cell3D__ArrInitMsg(); }
    
    static void _call_Cell3D__ArrInitMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_Cell3D__ArrInitMsg(void* impl_msg, void* impl_obj);
    /* DECLS: Cell3D(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_Cell3D_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_Cell3D_CkMigrateMessage() {
      static int epidx = reg_Cell3D_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_Cell3D_CkMigrateMessage(); }
    
    static void _call_Cell3D_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_Cell3D_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
 class CProxyElement_Cell3D : public CProxyElement_Cell{
  public:
    typedef Cell3D local_t;
    typedef CkIndex_Cell3D index_t;
    typedef CProxy_Cell3D proxy_t;
    typedef CProxyElement_Cell3D element_t;
    typedef CProxySection_Cell3D section_t;

    using array_index_t = CkArrayIndexBitVec;

    /* TRAM aggregators */

    CProxyElement_Cell3D(void) {
    }
    CProxyElement_Cell3D(const ArrayElement *e) : CProxyElement_Cell(e){
    }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxyElement_Cell::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxyElement_Cell::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxyElement_Cell::pup(p);
    }

    int ckIsDelegated(void) const
    { return CProxyElement_Cell::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxyElement_Cell::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxyElement_Cell::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxyElement_Cell::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxyElement_Cell::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxyElement_Cell::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxyElement_Cell::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxyElement_Cell::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(CkArrayOptions opts = CkArrayOptions())
    { return CProxyElement_Cell::ckCreateEmptyArray(opts); }
    inline static void ckCreateEmptyArrayAsync(CkCallback cb, CkArrayOptions opts = CkArrayOptions())
    { CProxyElement_Cell::ckCreateEmptyArrayAsync(cb, opts); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxyElement_Cell::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxyElement_Cell::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxyElement_Cell::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxyElement_Cell::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_Cell::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_Cell::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxyElement_Cell::ckSetReductionClient(cb); }

    inline void ckInsert(CkArrayMessage *m,int ctor,int onPe)
    { CProxyElement_Cell::ckInsert(m,ctor,onPe); }
    inline void ckSend(CkArrayMessage *m, int ep, int opts = 0) const
    { CProxyElement_Cell::ckSend(m,ep,opts); }
    inline void *ckSendSync(CkArrayMessage *m, int ep) const
    { return CProxyElement_Cell::ckSendSync(m,ep); }
    inline const CkArrayIndex &ckGetIndex() const
    { return CProxyElement_Cell::ckGetIndex(); }

    Cell3D *ckLocal(void) const
    { return (Cell3D *)CProxyElement_Cell::ckLocal(); }

    CProxyElement_Cell3D(const CkArrayID &aid,const CkArrayIndexBitVec &idx,CK_DELCTOR_PARAM)
        :CProxyElement_Cell(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_Cell3D(const CkArrayID &aid,const CkArrayIndexBitVec &idx)
        :CProxyElement_Cell(aid,idx)
    {
}

    CProxyElement_Cell3D(const CkArrayID &aid,const CkArrayIndex &idx,CK_DELCTOR_PARAM)
        :CProxyElement_Cell(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_Cell3D(const CkArrayID &aid,const CkArrayIndex &idx)
        :CProxyElement_Cell(aid,idx)
    {
}
/* DECLS: Cell3D(_ArrInitMsg* impl_msg);
 */
    
    void insert(_ArrInitMsg* impl_msg, int onPE=-1);
/* DECLS: Cell3D(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- collective proxy -------------- */
 class CProxy_Cell3D : public CProxy_Cell{
  public:
    typedef Cell3D local_t;
    typedef CkIndex_Cell3D index_t;
    typedef CProxy_Cell3D proxy_t;
    typedef CProxyElement_Cell3D element_t;
    typedef CProxySection_Cell3D section_t;

    using array_index_t = CkArrayIndexBitVec;
    CProxy_Cell3D(void) {
    }
    CProxy_Cell3D(const ArrayElement *e) : CProxy_Cell(e){
    }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_Cell::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_Cell::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_Cell::pup(p);
    }

    int ckIsDelegated(void) const
    { return CProxy_Cell::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_Cell::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_Cell::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_Cell::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxy_Cell::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxy_Cell::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxy_Cell::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxy_Cell::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(CkArrayOptions opts = CkArrayOptions())
    { return CProxy_Cell::ckCreateEmptyArray(opts); }
    inline static void ckCreateEmptyArrayAsync(CkCallback cb, CkArrayOptions opts = CkArrayOptions())
    { CProxy_Cell::ckCreateEmptyArrayAsync(cb, opts); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxy_Cell::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxy_Cell::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxy_Cell::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxy_Cell::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_Cell::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_Cell::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxy_Cell::ckSetReductionClient(cb); }

    // Empty array construction
    static CkArrayID ckNew(CkArrayOptions opts = CkArrayOptions()) { return ckCreateEmptyArray(opts); }
    static void      ckNew(CkCallback cb, CkArrayOptions opts = CkArrayOptions()) { ckCreateEmptyArrayAsync(cb, opts); }

    // Generalized array indexing:
    CProxyElement_Cell3D operator [] (const CkArrayIndexBitVec &idx) const
    { return CProxyElement_Cell3D(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_Cell3D operator() (const CkArrayIndexBitVec &idx) const
    { return CProxyElement_Cell3D(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxy_Cell3D(const CkArrayID &aid,CK_DELCTOR_PARAM) 
        :CProxy_Cell(aid,CK_DELCTOR_ARGS) {}
    CProxy_Cell3D(const CkArrayID &aid) 
        :CProxy_Cell(aid) {}
/* DECLS: Cell3D(_ArrInitMsg* impl_msg);
 */
    
    static CkArrayID ckNew(_ArrInitMsg* impl_msg, const CkArrayOptions &opts = CkArrayOptions());
    static void      ckNew(_ArrInitMsg* impl_msg, const CkArrayOptions &opts, CkCallback _ck_array_creation_cb);

/* DECLS: Cell3D(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- section proxy -------------- */
 class CProxySection_Cell3D : public CProxySection_Cell{
  public:
    typedef Cell3D local_t;
    typedef CkIndex_Cell3D index_t;
    typedef CProxy_Cell3D proxy_t;
    typedef CProxyElement_Cell3D element_t;
    typedef CProxySection_Cell3D section_t;

    using array_index_t = CkArrayIndexBitVec;
    CProxySection_Cell3D(void) {
    }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxySection_Cell::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxySection_Cell::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxySection_Cell::pup(p);
    }

    int ckIsDelegated(void) const
    { return CProxySection_Cell::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxySection_Cell::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxySection_Cell::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxySection_Cell::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxySection_Cell::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxySection_Cell::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxySection_Cell::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxySection_Cell::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(CkArrayOptions opts = CkArrayOptions())
    { return CProxySection_Cell::ckCreateEmptyArray(opts); }
    inline static void ckCreateEmptyArrayAsync(CkCallback cb, CkArrayOptions opts = CkArrayOptions())
    { CProxySection_Cell::ckCreateEmptyArrayAsync(cb, opts); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxySection_Cell::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxySection_Cell::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxySection_Cell::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxySection_Cell::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_Cell::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_Cell::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxySection_Cell::ckSetReductionClient(cb); }

    inline void ckSend(CkArrayMessage *m, int ep, int opts = 0)
    { CProxySection_Cell::ckSend(m,ep,opts); }
    inline CkSectionInfo &ckGetSectionInfo()
    { return CProxySection_Cell::ckGetSectionInfo(); }
    inline CkSectionID *ckGetSectionIDs()
    { return CProxySection_Cell::ckGetSectionIDs(); }
    inline CkSectionID &ckGetSectionID()
    { return CProxySection_Cell::ckGetSectionID(); }
    inline CkSectionID &ckGetSectionID(int i)
    { return CProxySection_Cell::ckGetSectionID(i); }
    inline CkArrayID ckGetArrayIDn(int i) const
    { return CProxySection_Cell::ckGetArrayIDn(i); } 
    inline CkArrayIndex *ckGetArrayElements() const
    { return CProxySection_Cell::ckGetArrayElements(); }
    inline CkArrayIndex *ckGetArrayElements(int i) const
    { return CProxySection_Cell::ckGetArrayElements(i); }
    inline int ckGetNumElements() const
    { return CProxySection_Cell::ckGetNumElements(); } 
    inline int ckGetNumElements(int i) const
    { return CProxySection_Cell::ckGetNumElements(i); }    // Generalized array indexing:
    CProxyElement_Cell3D operator [] (const CkArrayIndexBitVec &idx) const
        {return CProxyElement_Cell3D(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_Cell3D operator() (const CkArrayIndexBitVec &idx) const
        {return CProxyElement_Cell3D(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxySection_Cell3D(const CkArrayID &aid, CkArrayIndex *elems, int nElems, CK_DELCTOR_PARAM) 
        :CProxySection_Cell(aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_Cell3D(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, CK_DELCTOR_PARAM) 
        :CProxySection_Cell(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_Cell3D(const CkArrayID &aid, CkArrayIndex *elems, int nElems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_Cell(aid,elems,nElems, factor) {}
    CProxySection_Cell3D(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_Cell(aid,elems, factor) { ckAutoDelegate(); }
    CProxySection_Cell3D(const CkSectionID &sid)  
        :CProxySection_Cell(sid) { ckAutoDelegate(); }
    CProxySection_Cell3D(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, CK_DELCTOR_PARAM) 
        :CProxySection_Cell(n,aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_Cell3D(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, CK_DELCTOR_PARAM) 
        :CProxySection_Cell(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_Cell3D(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems) 
        :CProxySection_Cell(n,aid,elems,nElems) { ckAutoDelegate(); }
    CProxySection_Cell3D(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems) 
        :CProxySection_Cell(aid,elems) { ckAutoDelegate(); }
    CProxySection_Cell3D(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, int factor) 
        :CProxySection_Cell(n,aid,elems,nElems, factor) { ckAutoDelegate(); }
    CProxySection_Cell3D(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, int factor) 
        :CProxySection_Cell(aid,elems, factor) { ckAutoDelegate(); }
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
      CProxySection_Cell::ckAutoDelegate(opts);
    } 
    void setReductionClient(CkCallback *cb) {
      CProxySection_Cell::setReductionClient(cb);
    } 
    void resetSection() {
      CProxySection_Cell::resetSection();
    } 
    static void contribute(CkSectionInfo &sid, int userData=-1, int fragSize=-1);
    static void contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, int userData=-1, int fragSize=-1);
    template <typename T>
    static void contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, int userData=-1, int fragSize=-1);
    static void contribute(CkSectionInfo &sid, const CkCallback &cb, int userData=-1, int fragSize=-1);
    static void contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData=-1, int fragSize=-1);
    template <typename T>
    static void contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData=-1, int fragSize=-1);
/* DECLS: Cell3D(_ArrInitMsg* impl_msg);
 */
    

/* DECLS: Cell3D(CkMigrateMessage* impl_msg);
 */

};
#define Cell3D_SDAG_CODE 
typedef CBaseT1<Cell, CProxy_Cell3D>CBase_Cell3D;

/* DECLS: group StatCollector: IrrGroup{
StatCollector(_CreateStatCollMsg* impl_msg);
void sendStat(_DummyMsg* impl_msg);
};
 */
 class StatCollector;
 class CkIndex_StatCollector;
 class CProxy_StatCollector;
 class CProxyElement_StatCollector;
 class CProxySection_StatCollector;
/* --------------- index object ------------------ */
class CkIndex_StatCollector:public CkIndex_IrrGroup{
  public:
    typedef StatCollector local_t;
    typedef CkIndex_StatCollector index_t;
    typedef CProxy_StatCollector proxy_t;
    typedef CProxyElement_StatCollector element_t;
    typedef CProxySection_StatCollector section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: StatCollector(_CreateStatCollMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_StatCollector__CreateStatCollMsg();
    // Entry point index lookup
    
    inline static int idx_StatCollector__CreateStatCollMsg() {
      static int epidx = reg_StatCollector__CreateStatCollMsg();
      return epidx;
    }

    
    static int ckNew(_CreateStatCollMsg* impl_msg) { return idx_StatCollector__CreateStatCollMsg(); }
    
    static void _call_StatCollector__CreateStatCollMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_StatCollector__CreateStatCollMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void sendStat(_DummyMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_sendStat__DummyMsg();
    // Entry point index lookup
    
    inline static int idx_sendStat__DummyMsg() {
      static int epidx = reg_sendStat__DummyMsg();
      return epidx;
    }

    
    inline static int idx_sendStat(void (StatCollector::*)(_DummyMsg* impl_msg) ) {
      return idx_sendStat__DummyMsg();
    }


    
    static int sendStat(_DummyMsg* impl_msg) { return idx_sendStat__DummyMsg(); }
    
    static void _call_sendStat__DummyMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_sendStat__DummyMsg(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_StatCollector: public CProxyElement_IrrGroup{
  public:
    typedef StatCollector local_t;
    typedef CkIndex_StatCollector index_t;
    typedef CProxy_StatCollector proxy_t;
    typedef CProxyElement_StatCollector element_t;
    typedef CProxySection_StatCollector section_t;


    /* TRAM aggregators */

    CProxyElement_StatCollector(void) {
    }
    CProxyElement_StatCollector(const IrrGroup *g) : CProxyElement_IrrGroup(g){
    }
    CProxyElement_StatCollector(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_IrrGroup(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_StatCollector(CkGroupID _gid,int _onPE) : CProxyElement_IrrGroup(_gid,_onPE){
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
    StatCollector* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static StatCollector* ckLocalBranch(CkGroupID gID) {
      return (StatCollector*)CkLocalBranch(gID);
    }
/* DECLS: StatCollector(_CreateStatCollMsg* impl_msg);
 */
    

/* DECLS: void sendStat(_DummyMsg* impl_msg);
 */
    
    void sendStat(_DummyMsg* impl_msg);

};
/* ---------------- collective proxy -------------- */
class CProxy_StatCollector: public CProxy_IrrGroup{
  public:
    typedef StatCollector local_t;
    typedef CkIndex_StatCollector index_t;
    typedef CProxy_StatCollector proxy_t;
    typedef CProxyElement_StatCollector element_t;
    typedef CProxySection_StatCollector section_t;

    CProxy_StatCollector(void) {
    }
    CProxy_StatCollector(const IrrGroup *g) : CProxy_IrrGroup(g){
    }
    CProxy_StatCollector(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_IrrGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_StatCollector(CkGroupID _gid) : CProxy_IrrGroup(_gid){  }
    CProxyElement_StatCollector operator[](int onPE) const
      {return CProxyElement_StatCollector(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

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
    StatCollector* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static StatCollector* ckLocalBranch(CkGroupID gID) {
      return (StatCollector*)CkLocalBranch(gID);
    }
/* DECLS: StatCollector(_CreateStatCollMsg* impl_msg);
 */
    
    static CkGroupID ckNew(_CreateStatCollMsg* impl_msg);
    CProxy_StatCollector(_CreateStatCollMsg* impl_msg);

/* DECLS: void sendStat(_DummyMsg* impl_msg);
 */
    
    void sendStat(_DummyMsg* impl_msg);
    
    void sendStat(_DummyMsg* impl_msg, int npes, int *pes);
    
    void sendStat(_DummyMsg* impl_msg, CmiGroup &grp);

};
/* ---------------- section proxy -------------- */
class CProxySection_StatCollector: public CProxySection_IrrGroup{
  public:
    typedef StatCollector local_t;
    typedef CkIndex_StatCollector index_t;
    typedef CProxy_StatCollector proxy_t;
    typedef CProxyElement_StatCollector element_t;
    typedef CProxySection_StatCollector section_t;

    CProxySection_StatCollector(void) {
    }
    CProxySection_StatCollector(const IrrGroup *g) : CProxySection_IrrGroup(g){
    }
    CProxySection_StatCollector(const CkGroupID &_gid,const int *_pelist,int _npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_StatCollector(const CkGroupID &_gid,const int *_pelist,int _npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(_gid,_pelist,_npes,factor){  }
    CProxySection_StatCollector(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,factor){  }
    CProxySection_StatCollector(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

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
    StatCollector* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static StatCollector* ckLocalBranch(CkGroupID gID) {
      return (StatCollector*)CkLocalBranch(gID);
    }
/* DECLS: StatCollector(_CreateStatCollMsg* impl_msg);
 */
    

/* DECLS: void sendStat(_DummyMsg* impl_msg);
 */
    
    void sendStat(_DummyMsg* impl_msg);

};
#define StatCollector_SDAG_CODE 
typedef CBaseT1<Group, CProxy_StatCollector>CBase_StatCollector;












/* ---------------- method closures -------------- */
class Closure_AmrCoordinator {
  public:




};

/* ---------------- method closures -------------- */
class Closure_Cell {
  public:










};

/* ---------------- method closures -------------- */
class Closure_Cell1D {
  public:


};

/* ---------------- method closures -------------- */
class Closure_Cell2D {
  public:


};

/* ---------------- method closures -------------- */
class Closure_Cell3D {
  public:


};

/* ---------------- method closures -------------- */
class Closure_StatCollector {
  public:


};

extern void _registeramr(void);
#endif
