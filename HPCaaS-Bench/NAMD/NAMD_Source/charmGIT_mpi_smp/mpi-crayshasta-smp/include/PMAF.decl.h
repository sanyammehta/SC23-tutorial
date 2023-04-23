#ifndef _DECL_PMAF_H_
#define _DECL_PMAF_H_
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
/* DECLS: message nodeMsg;
 */
class nodeMsg;
class CMessage_nodeMsg:public CkMessage{
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
    CMessage_nodeMsg();
    static void *pack(nodeMsg *p);
    static nodeMsg* unpack(void* p);
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
/* DECLS: message nodeVoteMsg;
 */
class nodeVoteMsg;
class CMessage_nodeVoteMsg:public CkMessage{
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
    CMessage_nodeVoteMsg();
    static void *pack(nodeVoteMsg *p);
    static nodeVoteMsg* unpack(void* p);
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
/* DECLS: message faceMsg;
 */
class faceMsg;
class CMessage_faceMsg:public CkMessage{
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
    CMessage_faceMsg();
    static void *pack(faceMsg *p);
    static faceMsg* unpack(void* p);
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
/* DECLS: message updateMsg;
 */
class updateMsg;
class CMessage_updateMsg:public CkMessage{
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
    CMessage_updateMsg();
    static void *pack(updateMsg *p);
    static updateMsg* unpack(void* p);
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
/* DECLS: message refMsg;
 */
class refMsg;
class CMessage_refMsg:public CkMessage{
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
    CMessage_refMsg();
    static void *pack(refMsg *p);
    static refMsg* unpack(void* p);
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
/* DECLS: message intMsg;
 */
class intMsg;
class CMessage_intMsg:public CkMessage{
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
    CMessage_intMsg();
    static void *pack(intMsg *p);
    static intMsg* unpack(void* p);
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
/* DECLS: message doubleMsg;
 */
class doubleMsg;
class CMessage_doubleMsg:public CkMessage{
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
    CMessage_doubleMsg();
    static void *pack(doubleMsg *p);
    static doubleMsg* unpack(void* p);
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
/* DECLS: message meshMsg{
int conn[];
int gid[];
int surface[];
}
;
 */
class meshMsg;
class CMessage_meshMsg:public CkMessage{
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
    CMessage_meshMsg();
    static void *pack(meshMsg *p);
    static meshMsg* unpack(void* p);
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
/* DECLS: message coordMsg{
double coords[];
int fixedNodes[];
}
;
 */
class coordMsg;
class CMessage_coordMsg:public CkMessage{
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
    CMessage_coordMsg();
    static void *pack(coordMsg *p);
    static coordMsg* unpack(void* p);
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

#ifndef GROUPDEPNUM_DECLARED
# define GROUPDEPNUM_DECLARED
struct GroupDepNum
{
  int groupDepNum;
  explicit GroupDepNum(int g = 0) : groupDepNum{g} { }
  operator int() const { return groupDepNum; }
};
#endif
/* DECLS: message threeNodeMsg;
 */
class threeNodeMsg;
class CMessage_threeNodeMsg:public CkMessage{
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
    CMessage_threeNodeMsg();
    static void *pack(threeNodeMsg *p);
    static threeNodeMsg* unpack(void* p);
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
/* DECLS: message splitResponse;
 */
class splitResponse;
class CMessage_splitResponse:public CkMessage{
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
    CMessage_splitResponse();
    static void *pack(splitResponse *p);
    static splitResponse* unpack(void* p);
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
/* DECLS: message flip23request;
 */
class flip23request;
class CMessage_flip23request:public CkMessage{
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
    CMessage_flip23request();
    static void *pack(flip23request *p);
    static flip23request* unpack(void* p);
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
/* DECLS: message flip23response;
 */
class flip23response;
class CMessage_flip23response:public CkMessage{
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
    CMessage_flip23response();
    static void *pack(flip23response *p);
    static flip23response* unpack(void* p);
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
/* DECLS: message flip32request;
 */
class flip32request;
class CMessage_flip32request:public CkMessage{
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
    CMessage_flip32request();
    static void *pack(flip32request *p);
    static flip32request* unpack(void* p);
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
/* DECLS: message flip32response;
 */
class flip32response;
class CMessage_flip32response:public CkMessage{
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
    CMessage_flip32response();
    static void *pack(flip32response *p);
    static flip32response* unpack(void* p);
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
/* DECLS: message LEsplitMsg;
 */
class LEsplitMsg;
class CMessage_LEsplitMsg:public CkMessage{
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
    CMessage_LEsplitMsg();
    static void *pack(LEsplitMsg *p);
    static LEsplitMsg* unpack(void* p);
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
/* DECLS: message LEsplitResult;
 */
class LEsplitResult;
class CMessage_LEsplitResult:public CkMessage{
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
    CMessage_LEsplitResult();
    static void *pack(LEsplitResult *p);
    static LEsplitResult* unpack(void* p);
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
/* DECLS: message lockMsg;
 */
class lockMsg;
class CMessage_lockMsg:public CkMessage{
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
    CMessage_lockMsg();
    static void *pack(lockMsg *p);
    static lockMsg* unpack(void* p);
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
/* DECLS: message lockResult;
 */
class lockResult;
class CMessage_lockResult:public CkMessage{
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
    CMessage_lockResult();
    static void *pack(lockResult *p);
    static lockResult* unpack(void* p);
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
/* DECLS: message lockArcMsg;
 */
class lockArcMsg;
class CMessage_lockArcMsg:public CkMessage{
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
    CMessage_lockArcMsg();
    static void *pack(lockArcMsg *p);
    static lockArcMsg* unpack(void* p);
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

/* DECLS: readonly CProxy_chunk mesh;
 */


/* DECLS: array chunk: ArrayElement{
chunk(int nChunks);
void refineElement(int idx, double volume);
void refineElement(int idx);
threaded void refiningElements();
void coarsenElement(int idx, double volume);
threaded void coarseningElements();
threaded void improveMesh();
threaded void relocatePoints();
threaded void flippingElements();
sync intMsg* lockChunk(int lh, double prio);
sync void unlockChunk(int lh);
threaded sync void print();
threaded sync void out_print();
sync nodeMsg* getNode(int n);
sync void updateNodeCoord(nodeMsg* impl_msg);
void relocationVote(nodeVoteMsg* impl_msg);
sync void newMesh(meshMsg* impl_msg);
sync void updateNodeCoords(coordMsg* impl_msg);
sync void refine();
void start();
sync void improve();
sync void finalizeImprovements();
void deriveFaces();
threaded sync doubleMsg* getVolume(intMsg* impl_msg);
sync void setTargetVolume(doubleMsg* impl_msg);
sync void resetTargetVolume(doubleMsg* impl_msg);
sync refMsg* findRemoteNeighbor(threeNodeMsg* impl_msg);
sync intMsg* checkFace(int idx, const elemRef &face);
sync intMsg* checkFace(int idx, const node &n1, const node &n2, const node &n3, const elemRef &nbr);
sync intMsg* lockLF(int idx, const node &n1, const node &n2, const node &n3, const node &n4, const elemRef &myRef, double prio);
sync splitResponse* splitLF(int idx, const node &in1, const node &in2, const node &in3, const node &in4, const elemRef &requester);
sync LEsplitResult* LEsplit(LEsplitMsg* impl_msg);
threaded sync lockResult* lockArc(lockArcMsg* impl_msg);
sync void unlockArc1(int idx, int prio, const elemRef &parentRef, const elemRef &destRef, const node &aNode, const node &bNode);
sync void unlockArc2(int idx, int prio, const elemRef &parentRef, const elemRef &destRef, const node &aNode, const node &bNode);
sync void updateFace(int idx, int rcid, int ridx);
void updateFace(int idx, const elemRef &oldElem, const elemRef &newElem);
sync flip23response* flip23remote(flip23request* impl_msg);
sync flip32response* flip32remote(flip32request* impl_msg);
sync flip32response* remove32element(flip32request* impl_msg);
void checkRefine();
chunk(CkMigrateMessage* impl_msg);
};
 */
 class chunk;
 class CkIndex_chunk;
 class CProxy_chunk;
 class CProxyElement_chunk;
 class CProxySection_chunk;
/* --------------- index object ------------------ */
class CkIndex_chunk:public CkIndex_ArrayElement{
  public:
    typedef chunk local_t;
    typedef CkIndex_chunk index_t;
    typedef CProxy_chunk proxy_t;
    typedef CProxyElement_chunk element_t;
    typedef CProxySection_chunk section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: chunk(int nChunks);
     */
    // Entry point registration at startup
    
    static int reg_chunk_marshall1();
    // Entry point index lookup
    
    inline static int idx_chunk_marshall1() {
      static int epidx = reg_chunk_marshall1();
      return epidx;
    }

    
    static int ckNew(int nChunks) { return idx_chunk_marshall1(); }
    
    static void _call_chunk_marshall1(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_chunk_marshall1(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_chunk_marshall1(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_chunk_marshall1(PUP::er &p,void *msg);
    /* DECLS: void refineElement(int idx, double volume);
     */
    // Entry point registration at startup
    
    static int reg_refineElement_marshall2();
    // Entry point index lookup
    
    inline static int idx_refineElement_marshall2() {
      static int epidx = reg_refineElement_marshall2();
      return epidx;
    }

    
    inline static int idx_refineElement(void (chunk::*)(int idx, double volume) ) {
      return idx_refineElement_marshall2();
    }


    
    static int refineElement(int idx, double volume) { return idx_refineElement_marshall2(); }
    
    static void _call_refineElement_marshall2(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_refineElement_marshall2(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_refineElement_marshall2(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_refineElement_marshall2(PUP::er &p,void *msg);
    /* DECLS: void refineElement(int idx);
     */
    // Entry point registration at startup
    
    static int reg_refineElement_marshall3();
    // Entry point index lookup
    
    inline static int idx_refineElement_marshall3() {
      static int epidx = reg_refineElement_marshall3();
      return epidx;
    }

    
    inline static int idx_refineElement(void (chunk::*)(int idx) ) {
      return idx_refineElement_marshall3();
    }


    
    static int refineElement(int idx) { return idx_refineElement_marshall3(); }
    
    static void _call_refineElement_marshall3(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_refineElement_marshall3(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_refineElement_marshall3(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_refineElement_marshall3(PUP::er &p,void *msg);
    /* DECLS: threaded void refiningElements();
     */
    // Entry point registration at startup
    
    static int reg_refiningElements_void();
    // Entry point index lookup
    
    inline static int idx_refiningElements_void() {
      static int epidx = reg_refiningElements_void();
      return epidx;
    }

    
    inline static int idx_refiningElements(void (chunk::*)() ) {
      return idx_refiningElements_void();
    }


    
    static int refiningElements() { return idx_refiningElements_void(); }
    
    static void _call_refiningElements_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_refiningElements_void(void* impl_msg, void* impl_obj);
    
    static void _callthr_refiningElements_void(CkThrCallArg *);
    /* DECLS: void coarsenElement(int idx, double volume);
     */
    // Entry point registration at startup
    
    static int reg_coarsenElement_marshall5();
    // Entry point index lookup
    
    inline static int idx_coarsenElement_marshall5() {
      static int epidx = reg_coarsenElement_marshall5();
      return epidx;
    }

    
    inline static int idx_coarsenElement(void (chunk::*)(int idx, double volume) ) {
      return idx_coarsenElement_marshall5();
    }


    
    static int coarsenElement(int idx, double volume) { return idx_coarsenElement_marshall5(); }
    
    static void _call_coarsenElement_marshall5(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_coarsenElement_marshall5(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_coarsenElement_marshall5(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_coarsenElement_marshall5(PUP::er &p,void *msg);
    /* DECLS: threaded void coarseningElements();
     */
    // Entry point registration at startup
    
    static int reg_coarseningElements_void();
    // Entry point index lookup
    
    inline static int idx_coarseningElements_void() {
      static int epidx = reg_coarseningElements_void();
      return epidx;
    }

    
    inline static int idx_coarseningElements(void (chunk::*)() ) {
      return idx_coarseningElements_void();
    }


    
    static int coarseningElements() { return idx_coarseningElements_void(); }
    
    static void _call_coarseningElements_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_coarseningElements_void(void* impl_msg, void* impl_obj);
    
    static void _callthr_coarseningElements_void(CkThrCallArg *);
    /* DECLS: threaded void improveMesh();
     */
    // Entry point registration at startup
    
    static int reg_improveMesh_void();
    // Entry point index lookup
    
    inline static int idx_improveMesh_void() {
      static int epidx = reg_improveMesh_void();
      return epidx;
    }

    
    inline static int idx_improveMesh(void (chunk::*)() ) {
      return idx_improveMesh_void();
    }


    
    static int improveMesh() { return idx_improveMesh_void(); }
    
    static void _call_improveMesh_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_improveMesh_void(void* impl_msg, void* impl_obj);
    
    static void _callthr_improveMesh_void(CkThrCallArg *);
    /* DECLS: threaded void relocatePoints();
     */
    // Entry point registration at startup
    
    static int reg_relocatePoints_void();
    // Entry point index lookup
    
    inline static int idx_relocatePoints_void() {
      static int epidx = reg_relocatePoints_void();
      return epidx;
    }

    
    inline static int idx_relocatePoints(void (chunk::*)() ) {
      return idx_relocatePoints_void();
    }


    
    static int relocatePoints() { return idx_relocatePoints_void(); }
    
    static void _call_relocatePoints_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_relocatePoints_void(void* impl_msg, void* impl_obj);
    
    static void _callthr_relocatePoints_void(CkThrCallArg *);
    /* DECLS: threaded void flippingElements();
     */
    // Entry point registration at startup
    
    static int reg_flippingElements_void();
    // Entry point index lookup
    
    inline static int idx_flippingElements_void() {
      static int epidx = reg_flippingElements_void();
      return epidx;
    }

    
    inline static int idx_flippingElements(void (chunk::*)() ) {
      return idx_flippingElements_void();
    }


    
    static int flippingElements() { return idx_flippingElements_void(); }
    
    static void _call_flippingElements_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_flippingElements_void(void* impl_msg, void* impl_obj);
    
    static void _callthr_flippingElements_void(CkThrCallArg *);
    /* DECLS: sync intMsg* lockChunk(int lh, double prio);
     */
    // Entry point registration at startup
    
    static int reg_lockChunk_marshall10();
    // Entry point index lookup
    
    inline static int idx_lockChunk_marshall10() {
      static int epidx = reg_lockChunk_marshall10();
      return epidx;
    }

    
    inline static int idx_lockChunk(intMsg* (chunk::*)(int lh, double prio) ) {
      return idx_lockChunk_marshall10();
    }


    
    static int lockChunk(int lh, double prio) { return idx_lockChunk_marshall10(); }
    
    static void _call_lockChunk_marshall10(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_lockChunk_marshall10(void* impl_msg, void* impl_obj);
    
    static void _marshallmessagepup_lockChunk_marshall10(PUP::er &p,void *msg);
    /* DECLS: sync void unlockChunk(int lh);
     */
    // Entry point registration at startup
    
    static int reg_unlockChunk_marshall11();
    // Entry point index lookup
    
    inline static int idx_unlockChunk_marshall11() {
      static int epidx = reg_unlockChunk_marshall11();
      return epidx;
    }

    
    inline static int idx_unlockChunk(void (chunk::*)(int lh) ) {
      return idx_unlockChunk_marshall11();
    }


    
    static int unlockChunk(int lh) { return idx_unlockChunk_marshall11(); }
    
    static void _call_unlockChunk_marshall11(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_unlockChunk_marshall11(void* impl_msg, void* impl_obj);
    
    static void _marshallmessagepup_unlockChunk_marshall11(PUP::er &p,void *msg);
    /* DECLS: threaded sync void print();
     */
    // Entry point registration at startup
    
    static int reg_print_void();
    // Entry point index lookup
    
    inline static int idx_print_void() {
      static int epidx = reg_print_void();
      return epidx;
    }

    
    inline static int idx_print(void (chunk::*)() ) {
      return idx_print_void();
    }


    
    static int print() { return idx_print_void(); }
    
    static void _call_print_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_print_void(void* impl_msg, void* impl_obj);
    
    static void _callthr_print_void(CkThrCallArg *);
    /* DECLS: threaded sync void out_print();
     */
    // Entry point registration at startup
    
    static int reg_out_print_void();
    // Entry point index lookup
    
    inline static int idx_out_print_void() {
      static int epidx = reg_out_print_void();
      return epidx;
    }

    
    inline static int idx_out_print(void (chunk::*)() ) {
      return idx_out_print_void();
    }


    
    static int out_print() { return idx_out_print_void(); }
    
    static void _call_out_print_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_out_print_void(void* impl_msg, void* impl_obj);
    
    static void _callthr_out_print_void(CkThrCallArg *);
    /* DECLS: sync nodeMsg* getNode(int n);
     */
    // Entry point registration at startup
    
    static int reg_getNode_marshall14();
    // Entry point index lookup
    
    inline static int idx_getNode_marshall14() {
      static int epidx = reg_getNode_marshall14();
      return epidx;
    }

    
    inline static int idx_getNode(nodeMsg* (chunk::*)(int n) ) {
      return idx_getNode_marshall14();
    }


    
    static int getNode(int n) { return idx_getNode_marshall14(); }
    
    static void _call_getNode_marshall14(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_getNode_marshall14(void* impl_msg, void* impl_obj);
    
    static void _marshallmessagepup_getNode_marshall14(PUP::er &p,void *msg);
    /* DECLS: sync void updateNodeCoord(nodeMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_updateNodeCoord_nodeMsg();
    // Entry point index lookup
    
    inline static int idx_updateNodeCoord_nodeMsg() {
      static int epidx = reg_updateNodeCoord_nodeMsg();
      return epidx;
    }

    
    inline static int idx_updateNodeCoord(void (chunk::*)(nodeMsg* impl_msg) ) {
      return idx_updateNodeCoord_nodeMsg();
    }


    
    static int updateNodeCoord(nodeMsg* impl_msg) { return idx_updateNodeCoord_nodeMsg(); }
    
    static void _call_updateNodeCoord_nodeMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_updateNodeCoord_nodeMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void relocationVote(nodeVoteMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_relocationVote_nodeVoteMsg();
    // Entry point index lookup
    
    inline static int idx_relocationVote_nodeVoteMsg() {
      static int epidx = reg_relocationVote_nodeVoteMsg();
      return epidx;
    }

    
    inline static int idx_relocationVote(void (chunk::*)(nodeVoteMsg* impl_msg) ) {
      return idx_relocationVote_nodeVoteMsg();
    }


    
    static int relocationVote(nodeVoteMsg* impl_msg) { return idx_relocationVote_nodeVoteMsg(); }
    
    static void _call_relocationVote_nodeVoteMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_relocationVote_nodeVoteMsg(void* impl_msg, void* impl_obj);
    /* DECLS: sync void newMesh(meshMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_newMesh_meshMsg();
    // Entry point index lookup
    
    inline static int idx_newMesh_meshMsg() {
      static int epidx = reg_newMesh_meshMsg();
      return epidx;
    }

    
    inline static int idx_newMesh(void (chunk::*)(meshMsg* impl_msg) ) {
      return idx_newMesh_meshMsg();
    }


    
    static int newMesh(meshMsg* impl_msg) { return idx_newMesh_meshMsg(); }
    
    static void _call_newMesh_meshMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_newMesh_meshMsg(void* impl_msg, void* impl_obj);
    /* DECLS: sync void updateNodeCoords(coordMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_updateNodeCoords_coordMsg();
    // Entry point index lookup
    
    inline static int idx_updateNodeCoords_coordMsg() {
      static int epidx = reg_updateNodeCoords_coordMsg();
      return epidx;
    }

    
    inline static int idx_updateNodeCoords(void (chunk::*)(coordMsg* impl_msg) ) {
      return idx_updateNodeCoords_coordMsg();
    }


    
    static int updateNodeCoords(coordMsg* impl_msg) { return idx_updateNodeCoords_coordMsg(); }
    
    static void _call_updateNodeCoords_coordMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_updateNodeCoords_coordMsg(void* impl_msg, void* impl_obj);
    /* DECLS: sync void refine();
     */
    // Entry point registration at startup
    
    static int reg_refine_void();
    // Entry point index lookup
    
    inline static int idx_refine_void() {
      static int epidx = reg_refine_void();
      return epidx;
    }

    
    inline static int idx_refine(void (chunk::*)() ) {
      return idx_refine_void();
    }


    
    static int refine() { return idx_refine_void(); }
    
    static void _call_refine_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_refine_void(void* impl_msg, void* impl_obj);
    /* DECLS: void start();
     */
    // Entry point registration at startup
    
    static int reg_start_void();
    // Entry point index lookup
    
    inline static int idx_start_void() {
      static int epidx = reg_start_void();
      return epidx;
    }

    
    inline static int idx_start(void (chunk::*)() ) {
      return idx_start_void();
    }


    
    static int start() { return idx_start_void(); }
    
    static void _call_start_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_start_void(void* impl_msg, void* impl_obj);
    /* DECLS: sync void improve();
     */
    // Entry point registration at startup
    
    static int reg_improve_void();
    // Entry point index lookup
    
    inline static int idx_improve_void() {
      static int epidx = reg_improve_void();
      return epidx;
    }

    
    inline static int idx_improve(void (chunk::*)() ) {
      return idx_improve_void();
    }


    
    static int improve() { return idx_improve_void(); }
    
    static void _call_improve_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_improve_void(void* impl_msg, void* impl_obj);
    /* DECLS: sync void finalizeImprovements();
     */
    // Entry point registration at startup
    
    static int reg_finalizeImprovements_void();
    // Entry point index lookup
    
    inline static int idx_finalizeImprovements_void() {
      static int epidx = reg_finalizeImprovements_void();
      return epidx;
    }

    
    inline static int idx_finalizeImprovements(void (chunk::*)() ) {
      return idx_finalizeImprovements_void();
    }


    
    static int finalizeImprovements() { return idx_finalizeImprovements_void(); }
    
    static void _call_finalizeImprovements_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_finalizeImprovements_void(void* impl_msg, void* impl_obj);
    /* DECLS: void deriveFaces();
     */
    // Entry point registration at startup
    
    static int reg_deriveFaces_void();
    // Entry point index lookup
    
    inline static int idx_deriveFaces_void() {
      static int epidx = reg_deriveFaces_void();
      return epidx;
    }

    
    inline static int idx_deriveFaces(void (chunk::*)() ) {
      return idx_deriveFaces_void();
    }


    
    static int deriveFaces() { return idx_deriveFaces_void(); }
    
    static void _call_deriveFaces_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_deriveFaces_void(void* impl_msg, void* impl_obj);
    /* DECLS: threaded sync doubleMsg* getVolume(intMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_getVolume_intMsg();
    // Entry point index lookup
    
    inline static int idx_getVolume_intMsg() {
      static int epidx = reg_getVolume_intMsg();
      return epidx;
    }

    
    inline static int idx_getVolume(doubleMsg* (chunk::*)(intMsg* impl_msg) ) {
      return idx_getVolume_intMsg();
    }


    
    static int getVolume(intMsg* impl_msg) { return idx_getVolume_intMsg(); }
    
    static void _call_getVolume_intMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_getVolume_intMsg(void* impl_msg, void* impl_obj);
    
    static void _callthr_getVolume_intMsg(CkThrCallArg *);
    /* DECLS: sync void setTargetVolume(doubleMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_setTargetVolume_doubleMsg();
    // Entry point index lookup
    
    inline static int idx_setTargetVolume_doubleMsg() {
      static int epidx = reg_setTargetVolume_doubleMsg();
      return epidx;
    }

    
    inline static int idx_setTargetVolume(void (chunk::*)(doubleMsg* impl_msg) ) {
      return idx_setTargetVolume_doubleMsg();
    }


    
    static int setTargetVolume(doubleMsg* impl_msg) { return idx_setTargetVolume_doubleMsg(); }
    
    static void _call_setTargetVolume_doubleMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_setTargetVolume_doubleMsg(void* impl_msg, void* impl_obj);
    /* DECLS: sync void resetTargetVolume(doubleMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_resetTargetVolume_doubleMsg();
    // Entry point index lookup
    
    inline static int idx_resetTargetVolume_doubleMsg() {
      static int epidx = reg_resetTargetVolume_doubleMsg();
      return epidx;
    }

    
    inline static int idx_resetTargetVolume(void (chunk::*)(doubleMsg* impl_msg) ) {
      return idx_resetTargetVolume_doubleMsg();
    }


    
    static int resetTargetVolume(doubleMsg* impl_msg) { return idx_resetTargetVolume_doubleMsg(); }
    
    static void _call_resetTargetVolume_doubleMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_resetTargetVolume_doubleMsg(void* impl_msg, void* impl_obj);
    /* DECLS: sync refMsg* findRemoteNeighbor(threeNodeMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_findRemoteNeighbor_threeNodeMsg();
    // Entry point index lookup
    
    inline static int idx_findRemoteNeighbor_threeNodeMsg() {
      static int epidx = reg_findRemoteNeighbor_threeNodeMsg();
      return epidx;
    }

    
    inline static int idx_findRemoteNeighbor(refMsg* (chunk::*)(threeNodeMsg* impl_msg) ) {
      return idx_findRemoteNeighbor_threeNodeMsg();
    }


    
    static int findRemoteNeighbor(threeNodeMsg* impl_msg) { return idx_findRemoteNeighbor_threeNodeMsg(); }
    
    static void _call_findRemoteNeighbor_threeNodeMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_findRemoteNeighbor_threeNodeMsg(void* impl_msg, void* impl_obj);
    /* DECLS: sync intMsg* checkFace(int idx, const elemRef &face);
     */
    // Entry point registration at startup
    
    static int reg_checkFace_marshall28();
    // Entry point index lookup
    
    inline static int idx_checkFace_marshall28() {
      static int epidx = reg_checkFace_marshall28();
      return epidx;
    }

    
    inline static int idx_checkFace(intMsg* (chunk::*)(int idx, const elemRef &face) ) {
      return idx_checkFace_marshall28();
    }


    
    static int checkFace(int idx, const elemRef &face) { return idx_checkFace_marshall28(); }
    
    static void _call_checkFace_marshall28(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_checkFace_marshall28(void* impl_msg, void* impl_obj);
    
    static void _marshallmessagepup_checkFace_marshall28(PUP::er &p,void *msg);
    /* DECLS: sync intMsg* checkFace(int idx, const node &n1, const node &n2, const node &n3, const elemRef &nbr);
     */
    // Entry point registration at startup
    
    static int reg_checkFace_marshall29();
    // Entry point index lookup
    
    inline static int idx_checkFace_marshall29() {
      static int epidx = reg_checkFace_marshall29();
      return epidx;
    }

    
    inline static int idx_checkFace(intMsg* (chunk::*)(int idx, const node &n1, const node &n2, const node &n3, const elemRef &nbr) ) {
      return idx_checkFace_marshall29();
    }


    
    static int checkFace(int idx, const node &n1, const node &n2, const node &n3, const elemRef &nbr) { return idx_checkFace_marshall29(); }
    
    static void _call_checkFace_marshall29(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_checkFace_marshall29(void* impl_msg, void* impl_obj);
    
    static void _marshallmessagepup_checkFace_marshall29(PUP::er &p,void *msg);
    /* DECLS: sync intMsg* lockLF(int idx, const node &n1, const node &n2, const node &n3, const node &n4, const elemRef &myRef, double prio);
     */
    // Entry point registration at startup
    
    static int reg_lockLF_marshall30();
    // Entry point index lookup
    
    inline static int idx_lockLF_marshall30() {
      static int epidx = reg_lockLF_marshall30();
      return epidx;
    }

    
    inline static int idx_lockLF(intMsg* (chunk::*)(int idx, const node &n1, const node &n2, const node &n3, const node &n4, const elemRef &myRef, double prio) ) {
      return idx_lockLF_marshall30();
    }


    
    static int lockLF(int idx, const node &n1, const node &n2, const node &n3, const node &n4, const elemRef &myRef, double prio) { return idx_lockLF_marshall30(); }
    
    static void _call_lockLF_marshall30(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_lockLF_marshall30(void* impl_msg, void* impl_obj);
    
    static void _marshallmessagepup_lockLF_marshall30(PUP::er &p,void *msg);
    /* DECLS: sync splitResponse* splitLF(int idx, const node &in1, const node &in2, const node &in3, const node &in4, const elemRef &requester);
     */
    // Entry point registration at startup
    
    static int reg_splitLF_marshall31();
    // Entry point index lookup
    
    inline static int idx_splitLF_marshall31() {
      static int epidx = reg_splitLF_marshall31();
      return epidx;
    }

    
    inline static int idx_splitLF(splitResponse* (chunk::*)(int idx, const node &in1, const node &in2, const node &in3, const node &in4, const elemRef &requester) ) {
      return idx_splitLF_marshall31();
    }


    
    static int splitLF(int idx, const node &in1, const node &in2, const node &in3, const node &in4, const elemRef &requester) { return idx_splitLF_marshall31(); }
    
    static void _call_splitLF_marshall31(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_splitLF_marshall31(void* impl_msg, void* impl_obj);
    
    static void _marshallmessagepup_splitLF_marshall31(PUP::er &p,void *msg);
    /* DECLS: sync LEsplitResult* LEsplit(LEsplitMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_LEsplit_LEsplitMsg();
    // Entry point index lookup
    
    inline static int idx_LEsplit_LEsplitMsg() {
      static int epidx = reg_LEsplit_LEsplitMsg();
      return epidx;
    }

    
    inline static int idx_LEsplit(LEsplitResult* (chunk::*)(LEsplitMsg* impl_msg) ) {
      return idx_LEsplit_LEsplitMsg();
    }


    
    static int LEsplit(LEsplitMsg* impl_msg) { return idx_LEsplit_LEsplitMsg(); }
    
    static void _call_LEsplit_LEsplitMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_LEsplit_LEsplitMsg(void* impl_msg, void* impl_obj);
    /* DECLS: threaded sync lockResult* lockArc(lockArcMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_lockArc_lockArcMsg();
    // Entry point index lookup
    
    inline static int idx_lockArc_lockArcMsg() {
      static int epidx = reg_lockArc_lockArcMsg();
      return epidx;
    }

    
    inline static int idx_lockArc(lockResult* (chunk::*)(lockArcMsg* impl_msg) ) {
      return idx_lockArc_lockArcMsg();
    }


    
    static int lockArc(lockArcMsg* impl_msg) { return idx_lockArc_lockArcMsg(); }
    
    static void _call_lockArc_lockArcMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_lockArc_lockArcMsg(void* impl_msg, void* impl_obj);
    
    static void _callthr_lockArc_lockArcMsg(CkThrCallArg *);
    /* DECLS: sync void unlockArc1(int idx, int prio, const elemRef &parentRef, const elemRef &destRef, const node &aNode, const node &bNode);
     */
    // Entry point registration at startup
    
    static int reg_unlockArc1_marshall34();
    // Entry point index lookup
    
    inline static int idx_unlockArc1_marshall34() {
      static int epidx = reg_unlockArc1_marshall34();
      return epidx;
    }

    
    inline static int idx_unlockArc1(void (chunk::*)(int idx, int prio, const elemRef &parentRef, const elemRef &destRef, const node &aNode, const node &bNode) ) {
      return idx_unlockArc1_marshall34();
    }


    
    static int unlockArc1(int idx, int prio, const elemRef &parentRef, const elemRef &destRef, const node &aNode, const node &bNode) { return idx_unlockArc1_marshall34(); }
    
    static void _call_unlockArc1_marshall34(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_unlockArc1_marshall34(void* impl_msg, void* impl_obj);
    
    static void _marshallmessagepup_unlockArc1_marshall34(PUP::er &p,void *msg);
    /* DECLS: sync void unlockArc2(int idx, int prio, const elemRef &parentRef, const elemRef &destRef, const node &aNode, const node &bNode);
     */
    // Entry point registration at startup
    
    static int reg_unlockArc2_marshall35();
    // Entry point index lookup
    
    inline static int idx_unlockArc2_marshall35() {
      static int epidx = reg_unlockArc2_marshall35();
      return epidx;
    }

    
    inline static int idx_unlockArc2(void (chunk::*)(int idx, int prio, const elemRef &parentRef, const elemRef &destRef, const node &aNode, const node &bNode) ) {
      return idx_unlockArc2_marshall35();
    }


    
    static int unlockArc2(int idx, int prio, const elemRef &parentRef, const elemRef &destRef, const node &aNode, const node &bNode) { return idx_unlockArc2_marshall35(); }
    
    static void _call_unlockArc2_marshall35(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_unlockArc2_marshall35(void* impl_msg, void* impl_obj);
    
    static void _marshallmessagepup_unlockArc2_marshall35(PUP::er &p,void *msg);
    /* DECLS: sync void updateFace(int idx, int rcid, int ridx);
     */
    // Entry point registration at startup
    
    static int reg_updateFace_marshall36();
    // Entry point index lookup
    
    inline static int idx_updateFace_marshall36() {
      static int epidx = reg_updateFace_marshall36();
      return epidx;
    }

    
    inline static int idx_updateFace(void (chunk::*)(int idx, int rcid, int ridx) ) {
      return idx_updateFace_marshall36();
    }


    
    static int updateFace(int idx, int rcid, int ridx) { return idx_updateFace_marshall36(); }
    
    static void _call_updateFace_marshall36(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_updateFace_marshall36(void* impl_msg, void* impl_obj);
    
    static void _marshallmessagepup_updateFace_marshall36(PUP::er &p,void *msg);
    /* DECLS: void updateFace(int idx, const elemRef &oldElem, const elemRef &newElem);
     */
    // Entry point registration at startup
    
    static int reg_updateFace_marshall37();
    // Entry point index lookup
    
    inline static int idx_updateFace_marshall37() {
      static int epidx = reg_updateFace_marshall37();
      return epidx;
    }

    
    inline static int idx_updateFace(void (chunk::*)(int idx, const elemRef &oldElem, const elemRef &newElem) ) {
      return idx_updateFace_marshall37();
    }


    
    static int updateFace(int idx, const elemRef &oldElem, const elemRef &newElem) { return idx_updateFace_marshall37(); }
    
    static void _call_updateFace_marshall37(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_updateFace_marshall37(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_updateFace_marshall37(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_updateFace_marshall37(PUP::er &p,void *msg);
    /* DECLS: sync flip23response* flip23remote(flip23request* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_flip23remote_flip23request();
    // Entry point index lookup
    
    inline static int idx_flip23remote_flip23request() {
      static int epidx = reg_flip23remote_flip23request();
      return epidx;
    }

    
    inline static int idx_flip23remote(flip23response* (chunk::*)(flip23request* impl_msg) ) {
      return idx_flip23remote_flip23request();
    }


    
    static int flip23remote(flip23request* impl_msg) { return idx_flip23remote_flip23request(); }
    
    static void _call_flip23remote_flip23request(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_flip23remote_flip23request(void* impl_msg, void* impl_obj);
    /* DECLS: sync flip32response* flip32remote(flip32request* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_flip32remote_flip32request();
    // Entry point index lookup
    
    inline static int idx_flip32remote_flip32request() {
      static int epidx = reg_flip32remote_flip32request();
      return epidx;
    }

    
    inline static int idx_flip32remote(flip32response* (chunk::*)(flip32request* impl_msg) ) {
      return idx_flip32remote_flip32request();
    }


    
    static int flip32remote(flip32request* impl_msg) { return idx_flip32remote_flip32request(); }
    
    static void _call_flip32remote_flip32request(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_flip32remote_flip32request(void* impl_msg, void* impl_obj);
    /* DECLS: sync flip32response* remove32element(flip32request* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_remove32element_flip32request();
    // Entry point index lookup
    
    inline static int idx_remove32element_flip32request() {
      static int epidx = reg_remove32element_flip32request();
      return epidx;
    }

    
    inline static int idx_remove32element(flip32response* (chunk::*)(flip32request* impl_msg) ) {
      return idx_remove32element_flip32request();
    }


    
    static int remove32element(flip32request* impl_msg) { return idx_remove32element_flip32request(); }
    
    static void _call_remove32element_flip32request(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_remove32element_flip32request(void* impl_msg, void* impl_obj);
    /* DECLS: void checkRefine();
     */
    // Entry point registration at startup
    
    static int reg_checkRefine_void();
    // Entry point index lookup
    
    inline static int idx_checkRefine_void() {
      static int epidx = reg_checkRefine_void();
      return epidx;
    }

    
    inline static int idx_checkRefine(void (chunk::*)() ) {
      return idx_checkRefine_void();
    }


    
    static int checkRefine() { return idx_checkRefine_void(); }
    
    static void _call_checkRefine_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_checkRefine_void(void* impl_msg, void* impl_obj);
    /* DECLS: chunk(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_chunk_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_chunk_CkMigrateMessage() {
      static int epidx = reg_chunk_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_chunk_CkMigrateMessage(); }
    
    static void _call_chunk_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_chunk_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
 class CProxyElement_chunk : public CProxyElement_ArrayElement{
  public:
    typedef chunk local_t;
    typedef CkIndex_chunk index_t;
    typedef CProxy_chunk proxy_t;
    typedef CProxyElement_chunk element_t;
    typedef CProxySection_chunk section_t;

    using array_index_t = CkArrayIndex1D;

    /* TRAM aggregators */

    CProxyElement_chunk(void) {
    }
    CProxyElement_chunk(const ArrayElement *e) : CProxyElement_ArrayElement(e){
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

    chunk *ckLocal(void) const
    { return (chunk *)CProxyElement_ArrayElement::ckLocal(); }

    CProxyElement_chunk(const CkArrayID &aid,const CkArrayIndex1D &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_chunk(const CkArrayID &aid,const CkArrayIndex1D &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}

    CProxyElement_chunk(const CkArrayID &aid,const CkArrayIndex &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_chunk(const CkArrayID &aid,const CkArrayIndex &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}
/* DECLS: chunk(int nChunks);
 */
    
    void insert(int nChunks, int onPE=-1, const CkEntryOptions *impl_e_opts=NULL);
/* DECLS: void refineElement(int idx, double volume);
 */
    
    void refineElement(int idx, double volume, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void refineElement(int idx);
 */
    
    void refineElement(int idx, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: threaded void refiningElements();
 */
    
    void refiningElements(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void coarsenElement(int idx, double volume);
 */
    
    void coarsenElement(int idx, double volume, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: threaded void coarseningElements();
 */
    
    void coarseningElements(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: threaded void improveMesh();
 */
    
    void improveMesh(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: threaded void relocatePoints();
 */
    
    void relocatePoints(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: threaded void flippingElements();
 */
    
    void flippingElements(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: sync intMsg* lockChunk(int lh, double prio);
 */
    
    intMsg* lockChunk(int lh, double prio, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: sync void unlockChunk(int lh);
 */
    
    void unlockChunk(int lh, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: threaded sync void print();
 */
    
    void print(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: threaded sync void out_print();
 */
    
    void out_print(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: sync nodeMsg* getNode(int n);
 */
    
    nodeMsg* getNode(int n, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: sync void updateNodeCoord(nodeMsg* impl_msg);
 */
    
    void updateNodeCoord(nodeMsg* impl_msg) ;

/* DECLS: void relocationVote(nodeVoteMsg* impl_msg);
 */
    
    void relocationVote(nodeVoteMsg* impl_msg) ;

/* DECLS: sync void newMesh(meshMsg* impl_msg);
 */
    
    void newMesh(meshMsg* impl_msg) ;

/* DECLS: sync void updateNodeCoords(coordMsg* impl_msg);
 */
    
    void updateNodeCoords(coordMsg* impl_msg) ;

/* DECLS: sync void refine();
 */
    
    void refine(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void start();
 */
    
    void start(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: sync void improve();
 */
    
    void improve(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: sync void finalizeImprovements();
 */
    
    void finalizeImprovements(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void deriveFaces();
 */
    
    void deriveFaces(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: threaded sync doubleMsg* getVolume(intMsg* impl_msg);
 */
    
    doubleMsg* getVolume(intMsg* impl_msg) ;

/* DECLS: sync void setTargetVolume(doubleMsg* impl_msg);
 */
    
    void setTargetVolume(doubleMsg* impl_msg) ;

/* DECLS: sync void resetTargetVolume(doubleMsg* impl_msg);
 */
    
    void resetTargetVolume(doubleMsg* impl_msg) ;

/* DECLS: sync refMsg* findRemoteNeighbor(threeNodeMsg* impl_msg);
 */
    
    refMsg* findRemoteNeighbor(threeNodeMsg* impl_msg) ;

/* DECLS: sync intMsg* checkFace(int idx, const elemRef &face);
 */
    
    intMsg* checkFace(int idx, const elemRef &face, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: sync intMsg* checkFace(int idx, const node &n1, const node &n2, const node &n3, const elemRef &nbr);
 */
    
    intMsg* checkFace(int idx, const node &n1, const node &n2, const node &n3, const elemRef &nbr, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: sync intMsg* lockLF(int idx, const node &n1, const node &n2, const node &n3, const node &n4, const elemRef &myRef, double prio);
 */
    
    intMsg* lockLF(int idx, const node &n1, const node &n2, const node &n3, const node &n4, const elemRef &myRef, double prio, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: sync splitResponse* splitLF(int idx, const node &in1, const node &in2, const node &in3, const node &in4, const elemRef &requester);
 */
    
    splitResponse* splitLF(int idx, const node &in1, const node &in2, const node &in3, const node &in4, const elemRef &requester, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: sync LEsplitResult* LEsplit(LEsplitMsg* impl_msg);
 */
    
    LEsplitResult* LEsplit(LEsplitMsg* impl_msg) ;

/* DECLS: threaded sync lockResult* lockArc(lockArcMsg* impl_msg);
 */
    
    lockResult* lockArc(lockArcMsg* impl_msg) ;

/* DECLS: sync void unlockArc1(int idx, int prio, const elemRef &parentRef, const elemRef &destRef, const node &aNode, const node &bNode);
 */
    
    void unlockArc1(int idx, int prio, const elemRef &parentRef, const elemRef &destRef, const node &aNode, const node &bNode, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: sync void unlockArc2(int idx, int prio, const elemRef &parentRef, const elemRef &destRef, const node &aNode, const node &bNode);
 */
    
    void unlockArc2(int idx, int prio, const elemRef &parentRef, const elemRef &destRef, const node &aNode, const node &bNode, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: sync void updateFace(int idx, int rcid, int ridx);
 */
    
    void updateFace(int idx, int rcid, int ridx, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void updateFace(int idx, const elemRef &oldElem, const elemRef &newElem);
 */
    
    void updateFace(int idx, const elemRef &oldElem, const elemRef &newElem, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: sync flip23response* flip23remote(flip23request* impl_msg);
 */
    
    flip23response* flip23remote(flip23request* impl_msg) ;

/* DECLS: sync flip32response* flip32remote(flip32request* impl_msg);
 */
    
    flip32response* flip32remote(flip32request* impl_msg) ;

/* DECLS: sync flip32response* remove32element(flip32request* impl_msg);
 */
    
    flip32response* remove32element(flip32request* impl_msg) ;

/* DECLS: void checkRefine();
 */
    
    void checkRefine(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: chunk(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- collective proxy -------------- */
 class CProxy_chunk : public CProxy_ArrayElement{
  public:
    typedef chunk local_t;
    typedef CkIndex_chunk index_t;
    typedef CProxy_chunk proxy_t;
    typedef CProxyElement_chunk element_t;
    typedef CProxySection_chunk section_t;

    using array_index_t = CkArrayIndex1D;
    CProxy_chunk(void) {
    }
    CProxy_chunk(const ArrayElement *e) : CProxy_ArrayElement(e){
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
    CProxyElement_chunk operator [] (const CkArrayIndex1D &idx) const
    { return CProxyElement_chunk(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_chunk operator() (const CkArrayIndex1D &idx) const
    { return CProxyElement_chunk(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_chunk operator [] (int idx) const 
        {return CProxyElement_chunk(ckGetArrayID(), CkArrayIndex1D(idx), CK_DELCTOR_CALL);}
    CProxyElement_chunk operator () (int idx) const 
        {return CProxyElement_chunk(ckGetArrayID(), CkArrayIndex1D(idx), CK_DELCTOR_CALL);}
    CProxy_chunk(const CkArrayID &aid,CK_DELCTOR_PARAM) 
        :CProxy_ArrayElement(aid,CK_DELCTOR_ARGS) {}
    CProxy_chunk(const CkArrayID &aid) 
        :CProxy_ArrayElement(aid) {}
/* DECLS: chunk(int nChunks);
 */
    
    static CkArrayID ckNew(int nChunks, const CkArrayOptions &opts = CkArrayOptions(), const CkEntryOptions *impl_e_opts=NULL);
    static void      ckNew(int nChunks, const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);
    static CkArrayID ckNew(int nChunks, const int s1, const CkEntryOptions *impl_e_opts=NULL);
    static void ckNew(int nChunks, const int s1, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void refineElement(int idx, double volume);
 */
    
    void refineElement(int idx, double volume, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void refineElement(int idx);
 */
    
    void refineElement(int idx, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: threaded void refiningElements();
 */
    
    void refiningElements(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void coarsenElement(int idx, double volume);
 */
    
    void coarsenElement(int idx, double volume, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: threaded void coarseningElements();
 */
    
    void coarseningElements(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: threaded void improveMesh();
 */
    
    void improveMesh(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: threaded void relocatePoints();
 */
    
    void relocatePoints(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: threaded void flippingElements();
 */
    
    void flippingElements(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: sync intMsg* lockChunk(int lh, double prio);
 */

/* DECLS: sync void unlockChunk(int lh);
 */

/* DECLS: threaded sync void print();
 */

/* DECLS: threaded sync void out_print();
 */

/* DECLS: sync nodeMsg* getNode(int n);
 */

/* DECLS: sync void updateNodeCoord(nodeMsg* impl_msg);
 */

/* DECLS: void relocationVote(nodeVoteMsg* impl_msg);
 */
    
    void relocationVote(nodeVoteMsg* impl_msg) ;

/* DECLS: sync void newMesh(meshMsg* impl_msg);
 */

/* DECLS: sync void updateNodeCoords(coordMsg* impl_msg);
 */

/* DECLS: sync void refine();
 */

/* DECLS: void start();
 */
    
    void start(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: sync void improve();
 */

/* DECLS: sync void finalizeImprovements();
 */

/* DECLS: void deriveFaces();
 */
    
    void deriveFaces(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: threaded sync doubleMsg* getVolume(intMsg* impl_msg);
 */

/* DECLS: sync void setTargetVolume(doubleMsg* impl_msg);
 */

/* DECLS: sync void resetTargetVolume(doubleMsg* impl_msg);
 */

/* DECLS: sync refMsg* findRemoteNeighbor(threeNodeMsg* impl_msg);
 */

/* DECLS: sync intMsg* checkFace(int idx, const elemRef &face);
 */

/* DECLS: sync intMsg* checkFace(int idx, const node &n1, const node &n2, const node &n3, const elemRef &nbr);
 */

/* DECLS: sync intMsg* lockLF(int idx, const node &n1, const node &n2, const node &n3, const node &n4, const elemRef &myRef, double prio);
 */

/* DECLS: sync splitResponse* splitLF(int idx, const node &in1, const node &in2, const node &in3, const node &in4, const elemRef &requester);
 */

/* DECLS: sync LEsplitResult* LEsplit(LEsplitMsg* impl_msg);
 */

/* DECLS: threaded sync lockResult* lockArc(lockArcMsg* impl_msg);
 */

/* DECLS: sync void unlockArc1(int idx, int prio, const elemRef &parentRef, const elemRef &destRef, const node &aNode, const node &bNode);
 */

/* DECLS: sync void unlockArc2(int idx, int prio, const elemRef &parentRef, const elemRef &destRef, const node &aNode, const node &bNode);
 */

/* DECLS: sync void updateFace(int idx, int rcid, int ridx);
 */

/* DECLS: void updateFace(int idx, const elemRef &oldElem, const elemRef &newElem);
 */
    
    void updateFace(int idx, const elemRef &oldElem, const elemRef &newElem, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: sync flip23response* flip23remote(flip23request* impl_msg);
 */

/* DECLS: sync flip32response* flip32remote(flip32request* impl_msg);
 */

/* DECLS: sync flip32response* remove32element(flip32request* impl_msg);
 */

/* DECLS: void checkRefine();
 */
    
    void checkRefine(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: chunk(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- section proxy -------------- */
 class CProxySection_chunk : public CProxySection_ArrayElement{
  public:
    typedef chunk local_t;
    typedef CkIndex_chunk index_t;
    typedef CProxy_chunk proxy_t;
    typedef CProxyElement_chunk element_t;
    typedef CProxySection_chunk section_t;

    using array_index_t = CkArrayIndex1D;
    CProxySection_chunk(void) {
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
    CProxyElement_chunk operator [] (const CkArrayIndex1D &idx) const
        {return CProxyElement_chunk(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_chunk operator() (const CkArrayIndex1D &idx) const
        {return CProxyElement_chunk(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_chunk operator [] (int idx) const 
        {return CProxyElement_chunk(ckGetArrayID(), *(CkArrayIndex1D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
    CProxyElement_chunk operator () (int idx) const 
        {return CProxyElement_chunk(ckGetArrayID(), *(CkArrayIndex1D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
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
    CProxySection_chunk(const CkArrayID &aid, CkArrayIndex *elems, int nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_chunk(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_chunk(const CkArrayID &aid, CkArrayIndex *elems, int nElems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_ArrayElement(aid,elems,nElems, factor) {}
    CProxySection_chunk(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_ArrayElement(aid,elems, factor) { ckAutoDelegate(); }
    CProxySection_chunk(const CkSectionID &sid)  
        :CProxySection_ArrayElement(sid) { ckAutoDelegate(); }
    CProxySection_chunk(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(n,aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_chunk(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_chunk(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems) 
        :CProxySection_ArrayElement(n,aid,elems,nElems) { ckAutoDelegate(); }
    CProxySection_chunk(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems) 
        :CProxySection_ArrayElement(aid,elems) { ckAutoDelegate(); }
    CProxySection_chunk(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, int factor) 
        :CProxySection_ArrayElement(n,aid,elems,nElems, factor) { ckAutoDelegate(); }
    CProxySection_chunk(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, int factor) 
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
/* DECLS: chunk(int nChunks);
 */
    

/* DECLS: void refineElement(int idx, double volume);
 */
    
    void refineElement(int idx, double volume, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void refineElement(int idx);
 */
    
    void refineElement(int idx, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: threaded void refiningElements();
 */
    
    void refiningElements(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void coarsenElement(int idx, double volume);
 */
    
    void coarsenElement(int idx, double volume, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: threaded void coarseningElements();
 */
    
    void coarseningElements(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: threaded void improveMesh();
 */
    
    void improveMesh(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: threaded void relocatePoints();
 */
    
    void relocatePoints(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: threaded void flippingElements();
 */
    
    void flippingElements(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: sync intMsg* lockChunk(int lh, double prio);
 */

/* DECLS: sync void unlockChunk(int lh);
 */

/* DECLS: threaded sync void print();
 */

/* DECLS: threaded sync void out_print();
 */

/* DECLS: sync nodeMsg* getNode(int n);
 */

/* DECLS: sync void updateNodeCoord(nodeMsg* impl_msg);
 */

/* DECLS: void relocationVote(nodeVoteMsg* impl_msg);
 */
    
    void relocationVote(nodeVoteMsg* impl_msg) ;

/* DECLS: sync void newMesh(meshMsg* impl_msg);
 */

/* DECLS: sync void updateNodeCoords(coordMsg* impl_msg);
 */

/* DECLS: sync void refine();
 */

/* DECLS: void start();
 */
    
    void start(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: sync void improve();
 */

/* DECLS: sync void finalizeImprovements();
 */

/* DECLS: void deriveFaces();
 */
    
    void deriveFaces(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: threaded sync doubleMsg* getVolume(intMsg* impl_msg);
 */

/* DECLS: sync void setTargetVolume(doubleMsg* impl_msg);
 */

/* DECLS: sync void resetTargetVolume(doubleMsg* impl_msg);
 */

/* DECLS: sync refMsg* findRemoteNeighbor(threeNodeMsg* impl_msg);
 */

/* DECLS: sync intMsg* checkFace(int idx, const elemRef &face);
 */

/* DECLS: sync intMsg* checkFace(int idx, const node &n1, const node &n2, const node &n3, const elemRef &nbr);
 */

/* DECLS: sync intMsg* lockLF(int idx, const node &n1, const node &n2, const node &n3, const node &n4, const elemRef &myRef, double prio);
 */

/* DECLS: sync splitResponse* splitLF(int idx, const node &in1, const node &in2, const node &in3, const node &in4, const elemRef &requester);
 */

/* DECLS: sync LEsplitResult* LEsplit(LEsplitMsg* impl_msg);
 */

/* DECLS: threaded sync lockResult* lockArc(lockArcMsg* impl_msg);
 */

/* DECLS: sync void unlockArc1(int idx, int prio, const elemRef &parentRef, const elemRef &destRef, const node &aNode, const node &bNode);
 */

/* DECLS: sync void unlockArc2(int idx, int prio, const elemRef &parentRef, const elemRef &destRef, const node &aNode, const node &bNode);
 */

/* DECLS: sync void updateFace(int idx, int rcid, int ridx);
 */

/* DECLS: void updateFace(int idx, const elemRef &oldElem, const elemRef &newElem);
 */
    
    void updateFace(int idx, const elemRef &oldElem, const elemRef &newElem, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: sync flip23response* flip23remote(flip23request* impl_msg);
 */

/* DECLS: sync flip32response* flip32remote(flip32request* impl_msg);
 */

/* DECLS: sync flip32response* remove32element(flip32request* impl_msg);
 */

/* DECLS: void checkRefine();
 */
    
    void checkRefine(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: chunk(CkMigrateMessage* impl_msg);
 */

};
#define chunk_SDAG_CODE 
typedef CBaseT1<ArrayElementT<CkIndex1D>, CProxy_chunk>CBase_chunk;























/* ---------------- method closures -------------- */
class Closure_chunk {
  public:


    struct refineElement_2_closure;


    struct refineElement_3_closure;


    struct refiningElements_4_closure;


    struct coarsenElement_5_closure;


    struct coarseningElements_6_closure;


    struct improveMesh_7_closure;


    struct relocatePoints_8_closure;


    struct flippingElements_9_closure;


    struct lockChunk_10_closure;


    struct unlockChunk_11_closure;


    struct print_12_closure;


    struct out_print_13_closure;


    struct getNode_14_closure;






    struct refine_19_closure;


    struct start_20_closure;


    struct improve_21_closure;


    struct finalizeImprovements_22_closure;


    struct deriveFaces_23_closure;






    struct checkFace_28_closure;


    struct checkFace_29_closure;


    struct lockLF_30_closure;


    struct splitLF_31_closure;




    struct unlockArc1_34_closure;


    struct unlockArc2_35_closure;


    struct updateFace_36_closure;


    struct updateFace_37_closure;





    struct checkRefine_41_closure;


};

extern void _registerPMAF(void);
#endif
