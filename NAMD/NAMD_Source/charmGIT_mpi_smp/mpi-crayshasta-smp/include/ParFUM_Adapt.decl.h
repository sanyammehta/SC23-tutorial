#ifndef _DECL_ParFUM_Adapt_H_
#define _DECL_ParFUM_Adapt_H_
#include "charm++.h"
#include "envelope.h"
#include <memory>
#include "sdag.h"
/* DECLS: readonly CProxy_femMeshModify meshMod;
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
/* DECLS: message femMeshModMsg;
 */
class femMeshModMsg;
class CMessage_femMeshModMsg:public CkMessage{
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
    CMessage_femMeshModMsg();
    static void *pack(femMeshModMsg *p);
    static femMeshModMsg* unpack(void* p);
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
/* DECLS: message FEMMeshMsg;
 */
class FEMMeshMsg;
class CMessage_FEMMeshMsg:public CkMessage{
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
    CMessage_FEMMeshMsg();
    static void *pack(FEMMeshMsg *p);
    static FEMMeshMsg* unpack(void* p);
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
/* DECLS: message boolMsg;
 */
class boolMsg;
class CMessage_boolMsg:public CkMessage{
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
    CMessage_boolMsg();
    static void *pack(boolMsg *p);
    static boolMsg* unpack(void* p);
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
/* DECLS: message int2Msg;
 */
class int2Msg;
class CMessage_int2Msg:public CkMessage{
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
    CMessage_int2Msg();
    static void *pack(int2Msg *p);
    static int2Msg* unpack(void* p);
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
/* DECLS: message double2Msg;
 */
class double2Msg;
class CMessage_double2Msg:public CkMessage{
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
    CMessage_double2Msg();
    static void *pack(double2Msg *p);
    static double2Msg* unpack(void* p);
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
/* DECLS: message sharedNodeMsg{
int between[];
}
;
 */
class sharedNodeMsg;
class CMessage_sharedNodeMsg:public CkMessage{
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
    CMessage_sharedNodeMsg();
    static void *pack(sharedNodeMsg *p);
    static sharedNodeMsg* unpack(void* p);
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
/* DECLS: message removeSharedNodeMsg;
 */
class removeSharedNodeMsg;
class CMessage_removeSharedNodeMsg:public CkMessage{
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
    CMessage_removeSharedNodeMsg();
    static void *pack(removeSharedNodeMsg *p);
    static removeSharedNodeMsg* unpack(void* p);
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
/* DECLS: message addNodeMsg{
int between[];
int chunks[];
}
;
 */
class addNodeMsg;
class CMessage_addNodeMsg:public CkMessage{
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
    CMessage_addNodeMsg();
    static void *pack(addNodeMsg *p);
    static addNodeMsg* unpack(void* p);
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
/* DECLS: message addGhostElemMsg{
int indices[];
int typeOfIndex[];
}
;
 */
class addGhostElemMsg;
class CMessage_addGhostElemMsg:public CkMessage{
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
    CMessage_addGhostElemMsg();
    static void *pack(addGhostElemMsg *p);
    static addGhostElemMsg* unpack(void* p);
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
/* DECLS: message chunkListMsg{
int chunkList[];
int indexList[];
}
;
 */
class chunkListMsg;
class CMessage_chunkListMsg:public CkMessage{
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
    CMessage_chunkListMsg();
    static void *pack(chunkListMsg *p);
    static chunkListMsg* unpack(void* p);
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
/* DECLS: message addElemMsg{
int conn[];
int ghostIndices[];
}
;
 */
class addElemMsg;
class CMessage_addElemMsg:public CkMessage{
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
    CMessage_addElemMsg();
    static void *pack(addElemMsg *p);
    static addElemMsg* unpack(void* p);
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
/* DECLS: message removeGhostElemMsg{
int ghostIndices[];
int ghostRNIndices[];
int ghostREIndices[];
int sharedIndices[];
}
;
 */
class removeGhostElemMsg;
class CMessage_removeGhostElemMsg:public CkMessage{
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
    CMessage_removeGhostElemMsg();
    static void *pack(removeGhostElemMsg *p);
    static removeGhostElemMsg* unpack(void* p);
    void *operator new(size_t, int, int, int, int);
    void *operator new(size_t, int, int, int, int, const int);
    void *operator new(size_t, int, int, int, int, const int, const GroupDepNum);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, int, int, int, int){dealloc(p);}
    void operator delete(void *p, int, int, int, int, const int){dealloc(p);}
    void operator delete(void *p, int, int, int, int, const int, const GroupDepNum){dealloc(p);}
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
/* DECLS: message removeElemMsg;
 */
class removeElemMsg;
class CMessage_removeElemMsg:public CkMessage{
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
    CMessage_removeElemMsg();
    static void *pack(removeElemMsg *p);
    static removeElemMsg* unpack(void* p);
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
/* DECLS: message verifyghostsendMsg{
int chunks[];
}
;
 */
class verifyghostsendMsg;
class CMessage_verifyghostsendMsg:public CkMessage{
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
    CMessage_verifyghostsendMsg();
    static void *pack(verifyghostsendMsg *p);
    static verifyghostsendMsg* unpack(void* p);
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
/* DECLS: message findgsMsg{
int chunks[];
}
;
 */
class findgsMsg;
class CMessage_findgsMsg:public CkMessage{
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
    CMessage_findgsMsg();
    static void *pack(findgsMsg *p);
    static findgsMsg* unpack(void* p);
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
/* DECLS: message entDataMsg{
char data[];
}
;
 */
class entDataMsg;
class CMessage_entDataMsg:public CkMessage{
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
    CMessage_entDataMsg();
    static void *pack(entDataMsg *p);
    static entDataMsg* unpack(void* p);
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
/* DECLS: message updateAttrsMsg{
char data[];
}
;
 */
class updateAttrsMsg;
class CMessage_updateAttrsMsg:public CkMessage{
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
    CMessage_updateAttrsMsg();
    static void *pack(updateAttrsMsg *p);
    static updateAttrsMsg* unpack(void* p);
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

/* DECLS: array femMeshModify: ArrayElement{
femMeshModify(femMeshModMsg* impl_msg);
threaded sync void setFemMesh(FEMMeshMsg* impl_msg);
threaded sync intMsg* lockRemoteChunk(int2Msg* impl_msg);
threaded sync intMsg* unlockRemoteChunk(int2Msg* impl_msg);
threaded sync intMsg* lockRemoteNode(int impl_noname_0, int impl_noname_1, int impl_noname_2, int impl_noname_3);
threaded sync intMsg* unlockRemoteNode(int impl_noname_4, int impl_noname_5, int impl_noname_6, int impl_noname_7);
threaded sync intMsg* addNodeRemote(addNodeMsg* impl_msg);
threaded sync void addSharedNodeRemote(sharedNodeMsg* impl_msg);
threaded sync void removeSharedNodeRemote(removeSharedNodeMsg* impl_msg);
threaded sync void addGhostElem(addGhostElemMsg* impl_msg);
threaded sync chunkListMsg* getChunksSharingGhostNode(int2Msg* impl_msg);
threaded sync intMsg* addElementRemote(addElemMsg* impl_msg);
threaded sync void removeGhostElem(removeGhostElemMsg* impl_msg);
threaded sync void removeElementRemote(removeElemMsg* impl_msg);
threaded sync void removeGhostNode(int fromChk, int sharedIdx);
threaded sync void refine_flip_element_leb(int impl_noname_8, int impl_noname_9, int impl_noname_a, int impl_noname_b, int impl_noname_c, int impl_noname_d, double impl_noname_e);
threaded sync void addToSharedList(int impl_noname_f, int impl_noname_10);
threaded sync void updateAttrs(updateAttrsMsg* impl_msg);
threaded sync double2Msg* getRemoteCoord(int impl_noname_11, int impl_noname_12);
threaded sync intMsg* getRemoteBound(int impl_noname_13, int impl_noname_14);
threaded sync intMsg* getIdxGhostSend(int impl_noname_15, int impl_noname_16, int impl_noname_17);
threaded sync void updateIdxlList(int impl_noname_18, int impl_noname_19, int impl_noname_1a);
threaded sync void removeIDXLRemote(int impl_noname_1b, int impl_noname_1c, int impl_noname_1d);
threaded sync void addTransIDXLRemote(int impl_noname_1e, int impl_noname_1f, int impl_noname_20);
threaded sync void verifyIdxlList(int impl_noname_21, int impl_noname_22, int impl_noname_23);
threaded sync void idxllockRemote(int impl_noname_24, int impl_noname_25);
threaded sync void idxlunlockRemote(int impl_noname_26, int impl_noname_27);
threaded sync intMsg* eatIntoElement(int impl_noname_28, int impl_noname_29);
threaded sync intMsg* getLockOwner(int impl_noname_2a, int impl_noname_2b);
threaded sync boolMsg* knowsAbtNode(int impl_noname_2c, int impl_noname_2d, int impl_noname_2e);
threaded sync intMsg* hasLockRemoteNode(int impl_noname_2f, int impl_noname_30, int impl_noname_31);
threaded sync void modifyLockAll(int impl_noname_32, int impl_noname_33);
threaded sync boolMsg* verifyLock(int impl_noname_34, int impl_noname_35, int impl_noname_36);
threaded sync void updateghostsend(verifyghostsendMsg* impl_msg);
threaded sync void verifyghostsend(verifyghostsendMsg* impl_msg);
threaded sync findgsMsg* findghostsend(int impl_noname_37, int impl_noname_38);
threaded sync boolMsg* shouldLoseGhost(int impl_noname_39, int impl_noname_3a, int impl_noname_3b);
threaded sync void addghostsendl(int impl_noname_3c, int impl_noname_3d, int impl_noname_3e, int impl_noname_3f);
threaded sync void addghostsendl1(int impl_noname_40, int impl_noname_41, int impl_noname_42);
threaded sync void addghostsendr(int impl_noname_43, int impl_noname_44, int impl_noname_45, int impl_noname_46);
threaded sync void addghostsendr1(int impl_noname_47, int impl_noname_48, int impl_noname_49);
threaded sync boolMsg* willItLose(int impl_noname_4a, int impl_noname_4b);
threaded sync void interpolateElemCopy(int impl_noname_4c, int impl_noname_4d, int impl_noname_4e);
threaded sync void cleanupIDXL(int impl_noname_4f, int impl_noname_50);
threaded sync void purgeElement(int impl_noname_51, int impl_noname_52);
threaded sync entDataMsg* packEntData(int impl_noname_53, int impl_noname_54, const bool &impl_noname_55, int impl_noname_56);
threaded sync boolMsg* isFixedNodeRemote(int impl_noname_57, int impl_noname_58);
threaded sync void finish();
femMeshModify(CkMigrateMessage* impl_msg);
};
 */
 class femMeshModify;
 class CkIndex_femMeshModify;
 class CProxy_femMeshModify;
 class CProxyElement_femMeshModify;
 class CProxySection_femMeshModify;
/* --------------- index object ------------------ */
class CkIndex_femMeshModify:public CkIndex_ArrayElement{
  public:
    typedef femMeshModify local_t;
    typedef CkIndex_femMeshModify index_t;
    typedef CProxy_femMeshModify proxy_t;
    typedef CProxyElement_femMeshModify element_t;
    typedef CProxySection_femMeshModify section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: femMeshModify(femMeshModMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_femMeshModify_femMeshModMsg();
    // Entry point index lookup
    
    inline static int idx_femMeshModify_femMeshModMsg() {
      static int epidx = reg_femMeshModify_femMeshModMsg();
      return epidx;
    }

    
    static int ckNew(femMeshModMsg* impl_msg) { return idx_femMeshModify_femMeshModMsg(); }
    
    static void _call_femMeshModify_femMeshModMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_femMeshModify_femMeshModMsg(void* impl_msg, void* impl_obj);
    /* DECLS: threaded sync void setFemMesh(FEMMeshMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_setFemMesh_FEMMeshMsg();
    // Entry point index lookup
    
    inline static int idx_setFemMesh_FEMMeshMsg() {
      static int epidx = reg_setFemMesh_FEMMeshMsg();
      return epidx;
    }

    
    inline static int idx_setFemMesh(void (femMeshModify::*)(FEMMeshMsg* impl_msg) ) {
      return idx_setFemMesh_FEMMeshMsg();
    }


    
    static int setFemMesh(FEMMeshMsg* impl_msg) { return idx_setFemMesh_FEMMeshMsg(); }
    
    static void _call_setFemMesh_FEMMeshMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_setFemMesh_FEMMeshMsg(void* impl_msg, void* impl_obj);
    
    static void _callthr_setFemMesh_FEMMeshMsg(CkThrCallArg *);
    /* DECLS: threaded sync intMsg* lockRemoteChunk(int2Msg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_lockRemoteChunk_int2Msg();
    // Entry point index lookup
    
    inline static int idx_lockRemoteChunk_int2Msg() {
      static int epidx = reg_lockRemoteChunk_int2Msg();
      return epidx;
    }

    
    inline static int idx_lockRemoteChunk(intMsg* (femMeshModify::*)(int2Msg* impl_msg) ) {
      return idx_lockRemoteChunk_int2Msg();
    }


    
    static int lockRemoteChunk(int2Msg* impl_msg) { return idx_lockRemoteChunk_int2Msg(); }
    
    static void _call_lockRemoteChunk_int2Msg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_lockRemoteChunk_int2Msg(void* impl_msg, void* impl_obj);
    
    static void _callthr_lockRemoteChunk_int2Msg(CkThrCallArg *);
    /* DECLS: threaded sync intMsg* unlockRemoteChunk(int2Msg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_unlockRemoteChunk_int2Msg();
    // Entry point index lookup
    
    inline static int idx_unlockRemoteChunk_int2Msg() {
      static int epidx = reg_unlockRemoteChunk_int2Msg();
      return epidx;
    }

    
    inline static int idx_unlockRemoteChunk(intMsg* (femMeshModify::*)(int2Msg* impl_msg) ) {
      return idx_unlockRemoteChunk_int2Msg();
    }


    
    static int unlockRemoteChunk(int2Msg* impl_msg) { return idx_unlockRemoteChunk_int2Msg(); }
    
    static void _call_unlockRemoteChunk_int2Msg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_unlockRemoteChunk_int2Msg(void* impl_msg, void* impl_obj);
    
    static void _callthr_unlockRemoteChunk_int2Msg(CkThrCallArg *);
    /* DECLS: threaded sync intMsg* lockRemoteNode(int impl_noname_0, int impl_noname_1, int impl_noname_2, int impl_noname_3);
     */
    // Entry point registration at startup
    
    static int reg_lockRemoteNode_marshall5();
    // Entry point index lookup
    
    inline static int idx_lockRemoteNode_marshall5() {
      static int epidx = reg_lockRemoteNode_marshall5();
      return epidx;
    }

    
    inline static int idx_lockRemoteNode(intMsg* (femMeshModify::*)(int impl_noname_0, int impl_noname_1, int impl_noname_2, int impl_noname_3) ) {
      return idx_lockRemoteNode_marshall5();
    }


    
    static int lockRemoteNode(int impl_noname_0, int impl_noname_1, int impl_noname_2, int impl_noname_3) { return idx_lockRemoteNode_marshall5(); }
    
    static void _call_lockRemoteNode_marshall5(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_lockRemoteNode_marshall5(void* impl_msg, void* impl_obj);
    
    static void _callthr_lockRemoteNode_marshall5(CkThrCallArg *);
    
    static void _marshallmessagepup_lockRemoteNode_marshall5(PUP::er &p,void *msg);
    /* DECLS: threaded sync intMsg* unlockRemoteNode(int impl_noname_4, int impl_noname_5, int impl_noname_6, int impl_noname_7);
     */
    // Entry point registration at startup
    
    static int reg_unlockRemoteNode_marshall6();
    // Entry point index lookup
    
    inline static int idx_unlockRemoteNode_marshall6() {
      static int epidx = reg_unlockRemoteNode_marshall6();
      return epidx;
    }

    
    inline static int idx_unlockRemoteNode(intMsg* (femMeshModify::*)(int impl_noname_4, int impl_noname_5, int impl_noname_6, int impl_noname_7) ) {
      return idx_unlockRemoteNode_marshall6();
    }


    
    static int unlockRemoteNode(int impl_noname_4, int impl_noname_5, int impl_noname_6, int impl_noname_7) { return idx_unlockRemoteNode_marshall6(); }
    
    static void _call_unlockRemoteNode_marshall6(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_unlockRemoteNode_marshall6(void* impl_msg, void* impl_obj);
    
    static void _callthr_unlockRemoteNode_marshall6(CkThrCallArg *);
    
    static void _marshallmessagepup_unlockRemoteNode_marshall6(PUP::er &p,void *msg);
    /* DECLS: threaded sync intMsg* addNodeRemote(addNodeMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_addNodeRemote_addNodeMsg();
    // Entry point index lookup
    
    inline static int idx_addNodeRemote_addNodeMsg() {
      static int epidx = reg_addNodeRemote_addNodeMsg();
      return epidx;
    }

    
    inline static int idx_addNodeRemote(intMsg* (femMeshModify::*)(addNodeMsg* impl_msg) ) {
      return idx_addNodeRemote_addNodeMsg();
    }


    
    static int addNodeRemote(addNodeMsg* impl_msg) { return idx_addNodeRemote_addNodeMsg(); }
    
    static void _call_addNodeRemote_addNodeMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_addNodeRemote_addNodeMsg(void* impl_msg, void* impl_obj);
    
    static void _callthr_addNodeRemote_addNodeMsg(CkThrCallArg *);
    /* DECLS: threaded sync void addSharedNodeRemote(sharedNodeMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_addSharedNodeRemote_sharedNodeMsg();
    // Entry point index lookup
    
    inline static int idx_addSharedNodeRemote_sharedNodeMsg() {
      static int epidx = reg_addSharedNodeRemote_sharedNodeMsg();
      return epidx;
    }

    
    inline static int idx_addSharedNodeRemote(void (femMeshModify::*)(sharedNodeMsg* impl_msg) ) {
      return idx_addSharedNodeRemote_sharedNodeMsg();
    }


    
    static int addSharedNodeRemote(sharedNodeMsg* impl_msg) { return idx_addSharedNodeRemote_sharedNodeMsg(); }
    
    static void _call_addSharedNodeRemote_sharedNodeMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_addSharedNodeRemote_sharedNodeMsg(void* impl_msg, void* impl_obj);
    
    static void _callthr_addSharedNodeRemote_sharedNodeMsg(CkThrCallArg *);
    /* DECLS: threaded sync void removeSharedNodeRemote(removeSharedNodeMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_removeSharedNodeRemote_removeSharedNodeMsg();
    // Entry point index lookup
    
    inline static int idx_removeSharedNodeRemote_removeSharedNodeMsg() {
      static int epidx = reg_removeSharedNodeRemote_removeSharedNodeMsg();
      return epidx;
    }

    
    inline static int idx_removeSharedNodeRemote(void (femMeshModify::*)(removeSharedNodeMsg* impl_msg) ) {
      return idx_removeSharedNodeRemote_removeSharedNodeMsg();
    }


    
    static int removeSharedNodeRemote(removeSharedNodeMsg* impl_msg) { return idx_removeSharedNodeRemote_removeSharedNodeMsg(); }
    
    static void _call_removeSharedNodeRemote_removeSharedNodeMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_removeSharedNodeRemote_removeSharedNodeMsg(void* impl_msg, void* impl_obj);
    
    static void _callthr_removeSharedNodeRemote_removeSharedNodeMsg(CkThrCallArg *);
    /* DECLS: threaded sync void addGhostElem(addGhostElemMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_addGhostElem_addGhostElemMsg();
    // Entry point index lookup
    
    inline static int idx_addGhostElem_addGhostElemMsg() {
      static int epidx = reg_addGhostElem_addGhostElemMsg();
      return epidx;
    }

    
    inline static int idx_addGhostElem(void (femMeshModify::*)(addGhostElemMsg* impl_msg) ) {
      return idx_addGhostElem_addGhostElemMsg();
    }


    
    static int addGhostElem(addGhostElemMsg* impl_msg) { return idx_addGhostElem_addGhostElemMsg(); }
    
    static void _call_addGhostElem_addGhostElemMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_addGhostElem_addGhostElemMsg(void* impl_msg, void* impl_obj);
    
    static void _callthr_addGhostElem_addGhostElemMsg(CkThrCallArg *);
    /* DECLS: threaded sync chunkListMsg* getChunksSharingGhostNode(int2Msg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_getChunksSharingGhostNode_int2Msg();
    // Entry point index lookup
    
    inline static int idx_getChunksSharingGhostNode_int2Msg() {
      static int epidx = reg_getChunksSharingGhostNode_int2Msg();
      return epidx;
    }

    
    inline static int idx_getChunksSharingGhostNode(chunkListMsg* (femMeshModify::*)(int2Msg* impl_msg) ) {
      return idx_getChunksSharingGhostNode_int2Msg();
    }


    
    static int getChunksSharingGhostNode(int2Msg* impl_msg) { return idx_getChunksSharingGhostNode_int2Msg(); }
    
    static void _call_getChunksSharingGhostNode_int2Msg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_getChunksSharingGhostNode_int2Msg(void* impl_msg, void* impl_obj);
    
    static void _callthr_getChunksSharingGhostNode_int2Msg(CkThrCallArg *);
    /* DECLS: threaded sync intMsg* addElementRemote(addElemMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_addElementRemote_addElemMsg();
    // Entry point index lookup
    
    inline static int idx_addElementRemote_addElemMsg() {
      static int epidx = reg_addElementRemote_addElemMsg();
      return epidx;
    }

    
    inline static int idx_addElementRemote(intMsg* (femMeshModify::*)(addElemMsg* impl_msg) ) {
      return idx_addElementRemote_addElemMsg();
    }


    
    static int addElementRemote(addElemMsg* impl_msg) { return idx_addElementRemote_addElemMsg(); }
    
    static void _call_addElementRemote_addElemMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_addElementRemote_addElemMsg(void* impl_msg, void* impl_obj);
    
    static void _callthr_addElementRemote_addElemMsg(CkThrCallArg *);
    /* DECLS: threaded sync void removeGhostElem(removeGhostElemMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_removeGhostElem_removeGhostElemMsg();
    // Entry point index lookup
    
    inline static int idx_removeGhostElem_removeGhostElemMsg() {
      static int epidx = reg_removeGhostElem_removeGhostElemMsg();
      return epidx;
    }

    
    inline static int idx_removeGhostElem(void (femMeshModify::*)(removeGhostElemMsg* impl_msg) ) {
      return idx_removeGhostElem_removeGhostElemMsg();
    }


    
    static int removeGhostElem(removeGhostElemMsg* impl_msg) { return idx_removeGhostElem_removeGhostElemMsg(); }
    
    static void _call_removeGhostElem_removeGhostElemMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_removeGhostElem_removeGhostElemMsg(void* impl_msg, void* impl_obj);
    
    static void _callthr_removeGhostElem_removeGhostElemMsg(CkThrCallArg *);
    /* DECLS: threaded sync void removeElementRemote(removeElemMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_removeElementRemote_removeElemMsg();
    // Entry point index lookup
    
    inline static int idx_removeElementRemote_removeElemMsg() {
      static int epidx = reg_removeElementRemote_removeElemMsg();
      return epidx;
    }

    
    inline static int idx_removeElementRemote(void (femMeshModify::*)(removeElemMsg* impl_msg) ) {
      return idx_removeElementRemote_removeElemMsg();
    }


    
    static int removeElementRemote(removeElemMsg* impl_msg) { return idx_removeElementRemote_removeElemMsg(); }
    
    static void _call_removeElementRemote_removeElemMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_removeElementRemote_removeElemMsg(void* impl_msg, void* impl_obj);
    
    static void _callthr_removeElementRemote_removeElemMsg(CkThrCallArg *);
    /* DECLS: threaded sync void removeGhostNode(int fromChk, int sharedIdx);
     */
    // Entry point registration at startup
    
    static int reg_removeGhostNode_marshall15();
    // Entry point index lookup
    
    inline static int idx_removeGhostNode_marshall15() {
      static int epidx = reg_removeGhostNode_marshall15();
      return epidx;
    }

    
    inline static int idx_removeGhostNode(void (femMeshModify::*)(int fromChk, int sharedIdx) ) {
      return idx_removeGhostNode_marshall15();
    }


    
    static int removeGhostNode(int fromChk, int sharedIdx) { return idx_removeGhostNode_marshall15(); }
    
    static void _call_removeGhostNode_marshall15(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_removeGhostNode_marshall15(void* impl_msg, void* impl_obj);
    
    static void _callthr_removeGhostNode_marshall15(CkThrCallArg *);
    
    static void _marshallmessagepup_removeGhostNode_marshall15(PUP::er &p,void *msg);
    /* DECLS: threaded sync void refine_flip_element_leb(int impl_noname_8, int impl_noname_9, int impl_noname_a, int impl_noname_b, int impl_noname_c, int impl_noname_d, double impl_noname_e);
     */
    // Entry point registration at startup
    
    static int reg_refine_flip_element_leb_marshall16();
    // Entry point index lookup
    
    inline static int idx_refine_flip_element_leb_marshall16() {
      static int epidx = reg_refine_flip_element_leb_marshall16();
      return epidx;
    }

    
    inline static int idx_refine_flip_element_leb(void (femMeshModify::*)(int impl_noname_8, int impl_noname_9, int impl_noname_a, int impl_noname_b, int impl_noname_c, int impl_noname_d, double impl_noname_e) ) {
      return idx_refine_flip_element_leb_marshall16();
    }


    
    static int refine_flip_element_leb(int impl_noname_8, int impl_noname_9, int impl_noname_a, int impl_noname_b, int impl_noname_c, int impl_noname_d, double impl_noname_e) { return idx_refine_flip_element_leb_marshall16(); }
    
    static void _call_refine_flip_element_leb_marshall16(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_refine_flip_element_leb_marshall16(void* impl_msg, void* impl_obj);
    
    static void _callthr_refine_flip_element_leb_marshall16(CkThrCallArg *);
    
    static void _marshallmessagepup_refine_flip_element_leb_marshall16(PUP::er &p,void *msg);
    /* DECLS: threaded sync void addToSharedList(int impl_noname_f, int impl_noname_10);
     */
    // Entry point registration at startup
    
    static int reg_addToSharedList_marshall17();
    // Entry point index lookup
    
    inline static int idx_addToSharedList_marshall17() {
      static int epidx = reg_addToSharedList_marshall17();
      return epidx;
    }

    
    inline static int idx_addToSharedList(void (femMeshModify::*)(int impl_noname_f, int impl_noname_10) ) {
      return idx_addToSharedList_marshall17();
    }


    
    static int addToSharedList(int impl_noname_f, int impl_noname_10) { return idx_addToSharedList_marshall17(); }
    
    static void _call_addToSharedList_marshall17(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_addToSharedList_marshall17(void* impl_msg, void* impl_obj);
    
    static void _callthr_addToSharedList_marshall17(CkThrCallArg *);
    
    static void _marshallmessagepup_addToSharedList_marshall17(PUP::er &p,void *msg);
    /* DECLS: threaded sync void updateAttrs(updateAttrsMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_updateAttrs_updateAttrsMsg();
    // Entry point index lookup
    
    inline static int idx_updateAttrs_updateAttrsMsg() {
      static int epidx = reg_updateAttrs_updateAttrsMsg();
      return epidx;
    }

    
    inline static int idx_updateAttrs(void (femMeshModify::*)(updateAttrsMsg* impl_msg) ) {
      return idx_updateAttrs_updateAttrsMsg();
    }


    
    static int updateAttrs(updateAttrsMsg* impl_msg) { return idx_updateAttrs_updateAttrsMsg(); }
    
    static void _call_updateAttrs_updateAttrsMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_updateAttrs_updateAttrsMsg(void* impl_msg, void* impl_obj);
    
    static void _callthr_updateAttrs_updateAttrsMsg(CkThrCallArg *);
    /* DECLS: threaded sync double2Msg* getRemoteCoord(int impl_noname_11, int impl_noname_12);
     */
    // Entry point registration at startup
    
    static int reg_getRemoteCoord_marshall19();
    // Entry point index lookup
    
    inline static int idx_getRemoteCoord_marshall19() {
      static int epidx = reg_getRemoteCoord_marshall19();
      return epidx;
    }

    
    inline static int idx_getRemoteCoord(double2Msg* (femMeshModify::*)(int impl_noname_11, int impl_noname_12) ) {
      return idx_getRemoteCoord_marshall19();
    }


    
    static int getRemoteCoord(int impl_noname_11, int impl_noname_12) { return idx_getRemoteCoord_marshall19(); }
    
    static void _call_getRemoteCoord_marshall19(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_getRemoteCoord_marshall19(void* impl_msg, void* impl_obj);
    
    static void _callthr_getRemoteCoord_marshall19(CkThrCallArg *);
    
    static void _marshallmessagepup_getRemoteCoord_marshall19(PUP::er &p,void *msg);
    /* DECLS: threaded sync intMsg* getRemoteBound(int impl_noname_13, int impl_noname_14);
     */
    // Entry point registration at startup
    
    static int reg_getRemoteBound_marshall20();
    // Entry point index lookup
    
    inline static int idx_getRemoteBound_marshall20() {
      static int epidx = reg_getRemoteBound_marshall20();
      return epidx;
    }

    
    inline static int idx_getRemoteBound(intMsg* (femMeshModify::*)(int impl_noname_13, int impl_noname_14) ) {
      return idx_getRemoteBound_marshall20();
    }


    
    static int getRemoteBound(int impl_noname_13, int impl_noname_14) { return idx_getRemoteBound_marshall20(); }
    
    static void _call_getRemoteBound_marshall20(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_getRemoteBound_marshall20(void* impl_msg, void* impl_obj);
    
    static void _callthr_getRemoteBound_marshall20(CkThrCallArg *);
    
    static void _marshallmessagepup_getRemoteBound_marshall20(PUP::er &p,void *msg);
    /* DECLS: threaded sync intMsg* getIdxGhostSend(int impl_noname_15, int impl_noname_16, int impl_noname_17);
     */
    // Entry point registration at startup
    
    static int reg_getIdxGhostSend_marshall21();
    // Entry point index lookup
    
    inline static int idx_getIdxGhostSend_marshall21() {
      static int epidx = reg_getIdxGhostSend_marshall21();
      return epidx;
    }

    
    inline static int idx_getIdxGhostSend(intMsg* (femMeshModify::*)(int impl_noname_15, int impl_noname_16, int impl_noname_17) ) {
      return idx_getIdxGhostSend_marshall21();
    }


    
    static int getIdxGhostSend(int impl_noname_15, int impl_noname_16, int impl_noname_17) { return idx_getIdxGhostSend_marshall21(); }
    
    static void _call_getIdxGhostSend_marshall21(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_getIdxGhostSend_marshall21(void* impl_msg, void* impl_obj);
    
    static void _callthr_getIdxGhostSend_marshall21(CkThrCallArg *);
    
    static void _marshallmessagepup_getIdxGhostSend_marshall21(PUP::er &p,void *msg);
    /* DECLS: threaded sync void updateIdxlList(int impl_noname_18, int impl_noname_19, int impl_noname_1a);
     */
    // Entry point registration at startup
    
    static int reg_updateIdxlList_marshall22();
    // Entry point index lookup
    
    inline static int idx_updateIdxlList_marshall22() {
      static int epidx = reg_updateIdxlList_marshall22();
      return epidx;
    }

    
    inline static int idx_updateIdxlList(void (femMeshModify::*)(int impl_noname_18, int impl_noname_19, int impl_noname_1a) ) {
      return idx_updateIdxlList_marshall22();
    }


    
    static int updateIdxlList(int impl_noname_18, int impl_noname_19, int impl_noname_1a) { return idx_updateIdxlList_marshall22(); }
    
    static void _call_updateIdxlList_marshall22(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_updateIdxlList_marshall22(void* impl_msg, void* impl_obj);
    
    static void _callthr_updateIdxlList_marshall22(CkThrCallArg *);
    
    static void _marshallmessagepup_updateIdxlList_marshall22(PUP::er &p,void *msg);
    /* DECLS: threaded sync void removeIDXLRemote(int impl_noname_1b, int impl_noname_1c, int impl_noname_1d);
     */
    // Entry point registration at startup
    
    static int reg_removeIDXLRemote_marshall23();
    // Entry point index lookup
    
    inline static int idx_removeIDXLRemote_marshall23() {
      static int epidx = reg_removeIDXLRemote_marshall23();
      return epidx;
    }

    
    inline static int idx_removeIDXLRemote(void (femMeshModify::*)(int impl_noname_1b, int impl_noname_1c, int impl_noname_1d) ) {
      return idx_removeIDXLRemote_marshall23();
    }


    
    static int removeIDXLRemote(int impl_noname_1b, int impl_noname_1c, int impl_noname_1d) { return idx_removeIDXLRemote_marshall23(); }
    
    static void _call_removeIDXLRemote_marshall23(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_removeIDXLRemote_marshall23(void* impl_msg, void* impl_obj);
    
    static void _callthr_removeIDXLRemote_marshall23(CkThrCallArg *);
    
    static void _marshallmessagepup_removeIDXLRemote_marshall23(PUP::er &p,void *msg);
    /* DECLS: threaded sync void addTransIDXLRemote(int impl_noname_1e, int impl_noname_1f, int impl_noname_20);
     */
    // Entry point registration at startup
    
    static int reg_addTransIDXLRemote_marshall24();
    // Entry point index lookup
    
    inline static int idx_addTransIDXLRemote_marshall24() {
      static int epidx = reg_addTransIDXLRemote_marshall24();
      return epidx;
    }

    
    inline static int idx_addTransIDXLRemote(void (femMeshModify::*)(int impl_noname_1e, int impl_noname_1f, int impl_noname_20) ) {
      return idx_addTransIDXLRemote_marshall24();
    }


    
    static int addTransIDXLRemote(int impl_noname_1e, int impl_noname_1f, int impl_noname_20) { return idx_addTransIDXLRemote_marshall24(); }
    
    static void _call_addTransIDXLRemote_marshall24(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_addTransIDXLRemote_marshall24(void* impl_msg, void* impl_obj);
    
    static void _callthr_addTransIDXLRemote_marshall24(CkThrCallArg *);
    
    static void _marshallmessagepup_addTransIDXLRemote_marshall24(PUP::er &p,void *msg);
    /* DECLS: threaded sync void verifyIdxlList(int impl_noname_21, int impl_noname_22, int impl_noname_23);
     */
    // Entry point registration at startup
    
    static int reg_verifyIdxlList_marshall25();
    // Entry point index lookup
    
    inline static int idx_verifyIdxlList_marshall25() {
      static int epidx = reg_verifyIdxlList_marshall25();
      return epidx;
    }

    
    inline static int idx_verifyIdxlList(void (femMeshModify::*)(int impl_noname_21, int impl_noname_22, int impl_noname_23) ) {
      return idx_verifyIdxlList_marshall25();
    }


    
    static int verifyIdxlList(int impl_noname_21, int impl_noname_22, int impl_noname_23) { return idx_verifyIdxlList_marshall25(); }
    
    static void _call_verifyIdxlList_marshall25(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_verifyIdxlList_marshall25(void* impl_msg, void* impl_obj);
    
    static void _callthr_verifyIdxlList_marshall25(CkThrCallArg *);
    
    static void _marshallmessagepup_verifyIdxlList_marshall25(PUP::er &p,void *msg);
    /* DECLS: threaded sync void idxllockRemote(int impl_noname_24, int impl_noname_25);
     */
    // Entry point registration at startup
    
    static int reg_idxllockRemote_marshall26();
    // Entry point index lookup
    
    inline static int idx_idxllockRemote_marshall26() {
      static int epidx = reg_idxllockRemote_marshall26();
      return epidx;
    }

    
    inline static int idx_idxllockRemote(void (femMeshModify::*)(int impl_noname_24, int impl_noname_25) ) {
      return idx_idxllockRemote_marshall26();
    }


    
    static int idxllockRemote(int impl_noname_24, int impl_noname_25) { return idx_idxllockRemote_marshall26(); }
    
    static void _call_idxllockRemote_marshall26(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_idxllockRemote_marshall26(void* impl_msg, void* impl_obj);
    
    static void _callthr_idxllockRemote_marshall26(CkThrCallArg *);
    
    static void _marshallmessagepup_idxllockRemote_marshall26(PUP::er &p,void *msg);
    /* DECLS: threaded sync void idxlunlockRemote(int impl_noname_26, int impl_noname_27);
     */
    // Entry point registration at startup
    
    static int reg_idxlunlockRemote_marshall27();
    // Entry point index lookup
    
    inline static int idx_idxlunlockRemote_marshall27() {
      static int epidx = reg_idxlunlockRemote_marshall27();
      return epidx;
    }

    
    inline static int idx_idxlunlockRemote(void (femMeshModify::*)(int impl_noname_26, int impl_noname_27) ) {
      return idx_idxlunlockRemote_marshall27();
    }


    
    static int idxlunlockRemote(int impl_noname_26, int impl_noname_27) { return idx_idxlunlockRemote_marshall27(); }
    
    static void _call_idxlunlockRemote_marshall27(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_idxlunlockRemote_marshall27(void* impl_msg, void* impl_obj);
    
    static void _callthr_idxlunlockRemote_marshall27(CkThrCallArg *);
    
    static void _marshallmessagepup_idxlunlockRemote_marshall27(PUP::er &p,void *msg);
    /* DECLS: threaded sync intMsg* eatIntoElement(int impl_noname_28, int impl_noname_29);
     */
    // Entry point registration at startup
    
    static int reg_eatIntoElement_marshall28();
    // Entry point index lookup
    
    inline static int idx_eatIntoElement_marshall28() {
      static int epidx = reg_eatIntoElement_marshall28();
      return epidx;
    }

    
    inline static int idx_eatIntoElement(intMsg* (femMeshModify::*)(int impl_noname_28, int impl_noname_29) ) {
      return idx_eatIntoElement_marshall28();
    }


    
    static int eatIntoElement(int impl_noname_28, int impl_noname_29) { return idx_eatIntoElement_marshall28(); }
    
    static void _call_eatIntoElement_marshall28(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_eatIntoElement_marshall28(void* impl_msg, void* impl_obj);
    
    static void _callthr_eatIntoElement_marshall28(CkThrCallArg *);
    
    static void _marshallmessagepup_eatIntoElement_marshall28(PUP::er &p,void *msg);
    /* DECLS: threaded sync intMsg* getLockOwner(int impl_noname_2a, int impl_noname_2b);
     */
    // Entry point registration at startup
    
    static int reg_getLockOwner_marshall29();
    // Entry point index lookup
    
    inline static int idx_getLockOwner_marshall29() {
      static int epidx = reg_getLockOwner_marshall29();
      return epidx;
    }

    
    inline static int idx_getLockOwner(intMsg* (femMeshModify::*)(int impl_noname_2a, int impl_noname_2b) ) {
      return idx_getLockOwner_marshall29();
    }


    
    static int getLockOwner(int impl_noname_2a, int impl_noname_2b) { return idx_getLockOwner_marshall29(); }
    
    static void _call_getLockOwner_marshall29(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_getLockOwner_marshall29(void* impl_msg, void* impl_obj);
    
    static void _callthr_getLockOwner_marshall29(CkThrCallArg *);
    
    static void _marshallmessagepup_getLockOwner_marshall29(PUP::er &p,void *msg);
    /* DECLS: threaded sync boolMsg* knowsAbtNode(int impl_noname_2c, int impl_noname_2d, int impl_noname_2e);
     */
    // Entry point registration at startup
    
    static int reg_knowsAbtNode_marshall30();
    // Entry point index lookup
    
    inline static int idx_knowsAbtNode_marshall30() {
      static int epidx = reg_knowsAbtNode_marshall30();
      return epidx;
    }

    
    inline static int idx_knowsAbtNode(boolMsg* (femMeshModify::*)(int impl_noname_2c, int impl_noname_2d, int impl_noname_2e) ) {
      return idx_knowsAbtNode_marshall30();
    }


    
    static int knowsAbtNode(int impl_noname_2c, int impl_noname_2d, int impl_noname_2e) { return idx_knowsAbtNode_marshall30(); }
    
    static void _call_knowsAbtNode_marshall30(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_knowsAbtNode_marshall30(void* impl_msg, void* impl_obj);
    
    static void _callthr_knowsAbtNode_marshall30(CkThrCallArg *);
    
    static void _marshallmessagepup_knowsAbtNode_marshall30(PUP::er &p,void *msg);
    /* DECLS: threaded sync intMsg* hasLockRemoteNode(int impl_noname_2f, int impl_noname_30, int impl_noname_31);
     */
    // Entry point registration at startup
    
    static int reg_hasLockRemoteNode_marshall31();
    // Entry point index lookup
    
    inline static int idx_hasLockRemoteNode_marshall31() {
      static int epidx = reg_hasLockRemoteNode_marshall31();
      return epidx;
    }

    
    inline static int idx_hasLockRemoteNode(intMsg* (femMeshModify::*)(int impl_noname_2f, int impl_noname_30, int impl_noname_31) ) {
      return idx_hasLockRemoteNode_marshall31();
    }


    
    static int hasLockRemoteNode(int impl_noname_2f, int impl_noname_30, int impl_noname_31) { return idx_hasLockRemoteNode_marshall31(); }
    
    static void _call_hasLockRemoteNode_marshall31(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_hasLockRemoteNode_marshall31(void* impl_msg, void* impl_obj);
    
    static void _callthr_hasLockRemoteNode_marshall31(CkThrCallArg *);
    
    static void _marshallmessagepup_hasLockRemoteNode_marshall31(PUP::er &p,void *msg);
    /* DECLS: threaded sync void modifyLockAll(int impl_noname_32, int impl_noname_33);
     */
    // Entry point registration at startup
    
    static int reg_modifyLockAll_marshall32();
    // Entry point index lookup
    
    inline static int idx_modifyLockAll_marshall32() {
      static int epidx = reg_modifyLockAll_marshall32();
      return epidx;
    }

    
    inline static int idx_modifyLockAll(void (femMeshModify::*)(int impl_noname_32, int impl_noname_33) ) {
      return idx_modifyLockAll_marshall32();
    }


    
    static int modifyLockAll(int impl_noname_32, int impl_noname_33) { return idx_modifyLockAll_marshall32(); }
    
    static void _call_modifyLockAll_marshall32(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_modifyLockAll_marshall32(void* impl_msg, void* impl_obj);
    
    static void _callthr_modifyLockAll_marshall32(CkThrCallArg *);
    
    static void _marshallmessagepup_modifyLockAll_marshall32(PUP::er &p,void *msg);
    /* DECLS: threaded sync boolMsg* verifyLock(int impl_noname_34, int impl_noname_35, int impl_noname_36);
     */
    // Entry point registration at startup
    
    static int reg_verifyLock_marshall33();
    // Entry point index lookup
    
    inline static int idx_verifyLock_marshall33() {
      static int epidx = reg_verifyLock_marshall33();
      return epidx;
    }

    
    inline static int idx_verifyLock(boolMsg* (femMeshModify::*)(int impl_noname_34, int impl_noname_35, int impl_noname_36) ) {
      return idx_verifyLock_marshall33();
    }


    
    static int verifyLock(int impl_noname_34, int impl_noname_35, int impl_noname_36) { return idx_verifyLock_marshall33(); }
    
    static void _call_verifyLock_marshall33(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_verifyLock_marshall33(void* impl_msg, void* impl_obj);
    
    static void _callthr_verifyLock_marshall33(CkThrCallArg *);
    
    static void _marshallmessagepup_verifyLock_marshall33(PUP::er &p,void *msg);
    /* DECLS: threaded sync void updateghostsend(verifyghostsendMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_updateghostsend_verifyghostsendMsg();
    // Entry point index lookup
    
    inline static int idx_updateghostsend_verifyghostsendMsg() {
      static int epidx = reg_updateghostsend_verifyghostsendMsg();
      return epidx;
    }

    
    inline static int idx_updateghostsend(void (femMeshModify::*)(verifyghostsendMsg* impl_msg) ) {
      return idx_updateghostsend_verifyghostsendMsg();
    }


    
    static int updateghostsend(verifyghostsendMsg* impl_msg) { return idx_updateghostsend_verifyghostsendMsg(); }
    
    static void _call_updateghostsend_verifyghostsendMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_updateghostsend_verifyghostsendMsg(void* impl_msg, void* impl_obj);
    
    static void _callthr_updateghostsend_verifyghostsendMsg(CkThrCallArg *);
    /* DECLS: threaded sync void verifyghostsend(verifyghostsendMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_verifyghostsend_verifyghostsendMsg();
    // Entry point index lookup
    
    inline static int idx_verifyghostsend_verifyghostsendMsg() {
      static int epidx = reg_verifyghostsend_verifyghostsendMsg();
      return epidx;
    }

    
    inline static int idx_verifyghostsend(void (femMeshModify::*)(verifyghostsendMsg* impl_msg) ) {
      return idx_verifyghostsend_verifyghostsendMsg();
    }


    
    static int verifyghostsend(verifyghostsendMsg* impl_msg) { return idx_verifyghostsend_verifyghostsendMsg(); }
    
    static void _call_verifyghostsend_verifyghostsendMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_verifyghostsend_verifyghostsendMsg(void* impl_msg, void* impl_obj);
    
    static void _callthr_verifyghostsend_verifyghostsendMsg(CkThrCallArg *);
    /* DECLS: threaded sync findgsMsg* findghostsend(int impl_noname_37, int impl_noname_38);
     */
    // Entry point registration at startup
    
    static int reg_findghostsend_marshall36();
    // Entry point index lookup
    
    inline static int idx_findghostsend_marshall36() {
      static int epidx = reg_findghostsend_marshall36();
      return epidx;
    }

    
    inline static int idx_findghostsend(findgsMsg* (femMeshModify::*)(int impl_noname_37, int impl_noname_38) ) {
      return idx_findghostsend_marshall36();
    }


    
    static int findghostsend(int impl_noname_37, int impl_noname_38) { return idx_findghostsend_marshall36(); }
    
    static void _call_findghostsend_marshall36(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_findghostsend_marshall36(void* impl_msg, void* impl_obj);
    
    static void _callthr_findghostsend_marshall36(CkThrCallArg *);
    
    static void _marshallmessagepup_findghostsend_marshall36(PUP::er &p,void *msg);
    /* DECLS: threaded sync boolMsg* shouldLoseGhost(int impl_noname_39, int impl_noname_3a, int impl_noname_3b);
     */
    // Entry point registration at startup
    
    static int reg_shouldLoseGhost_marshall37();
    // Entry point index lookup
    
    inline static int idx_shouldLoseGhost_marshall37() {
      static int epidx = reg_shouldLoseGhost_marshall37();
      return epidx;
    }

    
    inline static int idx_shouldLoseGhost(boolMsg* (femMeshModify::*)(int impl_noname_39, int impl_noname_3a, int impl_noname_3b) ) {
      return idx_shouldLoseGhost_marshall37();
    }


    
    static int shouldLoseGhost(int impl_noname_39, int impl_noname_3a, int impl_noname_3b) { return idx_shouldLoseGhost_marshall37(); }
    
    static void _call_shouldLoseGhost_marshall37(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_shouldLoseGhost_marshall37(void* impl_msg, void* impl_obj);
    
    static void _callthr_shouldLoseGhost_marshall37(CkThrCallArg *);
    
    static void _marshallmessagepup_shouldLoseGhost_marshall37(PUP::er &p,void *msg);
    /* DECLS: threaded sync void addghostsendl(int impl_noname_3c, int impl_noname_3d, int impl_noname_3e, int impl_noname_3f);
     */
    // Entry point registration at startup
    
    static int reg_addghostsendl_marshall38();
    // Entry point index lookup
    
    inline static int idx_addghostsendl_marshall38() {
      static int epidx = reg_addghostsendl_marshall38();
      return epidx;
    }

    
    inline static int idx_addghostsendl(void (femMeshModify::*)(int impl_noname_3c, int impl_noname_3d, int impl_noname_3e, int impl_noname_3f) ) {
      return idx_addghostsendl_marshall38();
    }


    
    static int addghostsendl(int impl_noname_3c, int impl_noname_3d, int impl_noname_3e, int impl_noname_3f) { return idx_addghostsendl_marshall38(); }
    
    static void _call_addghostsendl_marshall38(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_addghostsendl_marshall38(void* impl_msg, void* impl_obj);
    
    static void _callthr_addghostsendl_marshall38(CkThrCallArg *);
    
    static void _marshallmessagepup_addghostsendl_marshall38(PUP::er &p,void *msg);
    /* DECLS: threaded sync void addghostsendl1(int impl_noname_40, int impl_noname_41, int impl_noname_42);
     */
    // Entry point registration at startup
    
    static int reg_addghostsendl1_marshall39();
    // Entry point index lookup
    
    inline static int idx_addghostsendl1_marshall39() {
      static int epidx = reg_addghostsendl1_marshall39();
      return epidx;
    }

    
    inline static int idx_addghostsendl1(void (femMeshModify::*)(int impl_noname_40, int impl_noname_41, int impl_noname_42) ) {
      return idx_addghostsendl1_marshall39();
    }


    
    static int addghostsendl1(int impl_noname_40, int impl_noname_41, int impl_noname_42) { return idx_addghostsendl1_marshall39(); }
    
    static void _call_addghostsendl1_marshall39(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_addghostsendl1_marshall39(void* impl_msg, void* impl_obj);
    
    static void _callthr_addghostsendl1_marshall39(CkThrCallArg *);
    
    static void _marshallmessagepup_addghostsendl1_marshall39(PUP::er &p,void *msg);
    /* DECLS: threaded sync void addghostsendr(int impl_noname_43, int impl_noname_44, int impl_noname_45, int impl_noname_46);
     */
    // Entry point registration at startup
    
    static int reg_addghostsendr_marshall40();
    // Entry point index lookup
    
    inline static int idx_addghostsendr_marshall40() {
      static int epidx = reg_addghostsendr_marshall40();
      return epidx;
    }

    
    inline static int idx_addghostsendr(void (femMeshModify::*)(int impl_noname_43, int impl_noname_44, int impl_noname_45, int impl_noname_46) ) {
      return idx_addghostsendr_marshall40();
    }


    
    static int addghostsendr(int impl_noname_43, int impl_noname_44, int impl_noname_45, int impl_noname_46) { return idx_addghostsendr_marshall40(); }
    
    static void _call_addghostsendr_marshall40(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_addghostsendr_marshall40(void* impl_msg, void* impl_obj);
    
    static void _callthr_addghostsendr_marshall40(CkThrCallArg *);
    
    static void _marshallmessagepup_addghostsendr_marshall40(PUP::er &p,void *msg);
    /* DECLS: threaded sync void addghostsendr1(int impl_noname_47, int impl_noname_48, int impl_noname_49);
     */
    // Entry point registration at startup
    
    static int reg_addghostsendr1_marshall41();
    // Entry point index lookup
    
    inline static int idx_addghostsendr1_marshall41() {
      static int epidx = reg_addghostsendr1_marshall41();
      return epidx;
    }

    
    inline static int idx_addghostsendr1(void (femMeshModify::*)(int impl_noname_47, int impl_noname_48, int impl_noname_49) ) {
      return idx_addghostsendr1_marshall41();
    }


    
    static int addghostsendr1(int impl_noname_47, int impl_noname_48, int impl_noname_49) { return idx_addghostsendr1_marshall41(); }
    
    static void _call_addghostsendr1_marshall41(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_addghostsendr1_marshall41(void* impl_msg, void* impl_obj);
    
    static void _callthr_addghostsendr1_marshall41(CkThrCallArg *);
    
    static void _marshallmessagepup_addghostsendr1_marshall41(PUP::er &p,void *msg);
    /* DECLS: threaded sync boolMsg* willItLose(int impl_noname_4a, int impl_noname_4b);
     */
    // Entry point registration at startup
    
    static int reg_willItLose_marshall42();
    // Entry point index lookup
    
    inline static int idx_willItLose_marshall42() {
      static int epidx = reg_willItLose_marshall42();
      return epidx;
    }

    
    inline static int idx_willItLose(boolMsg* (femMeshModify::*)(int impl_noname_4a, int impl_noname_4b) ) {
      return idx_willItLose_marshall42();
    }


    
    static int willItLose(int impl_noname_4a, int impl_noname_4b) { return idx_willItLose_marshall42(); }
    
    static void _call_willItLose_marshall42(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_willItLose_marshall42(void* impl_msg, void* impl_obj);
    
    static void _callthr_willItLose_marshall42(CkThrCallArg *);
    
    static void _marshallmessagepup_willItLose_marshall42(PUP::er &p,void *msg);
    /* DECLS: threaded sync void interpolateElemCopy(int impl_noname_4c, int impl_noname_4d, int impl_noname_4e);
     */
    // Entry point registration at startup
    
    static int reg_interpolateElemCopy_marshall43();
    // Entry point index lookup
    
    inline static int idx_interpolateElemCopy_marshall43() {
      static int epidx = reg_interpolateElemCopy_marshall43();
      return epidx;
    }

    
    inline static int idx_interpolateElemCopy(void (femMeshModify::*)(int impl_noname_4c, int impl_noname_4d, int impl_noname_4e) ) {
      return idx_interpolateElemCopy_marshall43();
    }


    
    static int interpolateElemCopy(int impl_noname_4c, int impl_noname_4d, int impl_noname_4e) { return idx_interpolateElemCopy_marshall43(); }
    
    static void _call_interpolateElemCopy_marshall43(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_interpolateElemCopy_marshall43(void* impl_msg, void* impl_obj);
    
    static void _callthr_interpolateElemCopy_marshall43(CkThrCallArg *);
    
    static void _marshallmessagepup_interpolateElemCopy_marshall43(PUP::er &p,void *msg);
    /* DECLS: threaded sync void cleanupIDXL(int impl_noname_4f, int impl_noname_50);
     */
    // Entry point registration at startup
    
    static int reg_cleanupIDXL_marshall44();
    // Entry point index lookup
    
    inline static int idx_cleanupIDXL_marshall44() {
      static int epidx = reg_cleanupIDXL_marshall44();
      return epidx;
    }

    
    inline static int idx_cleanupIDXL(void (femMeshModify::*)(int impl_noname_4f, int impl_noname_50) ) {
      return idx_cleanupIDXL_marshall44();
    }


    
    static int cleanupIDXL(int impl_noname_4f, int impl_noname_50) { return idx_cleanupIDXL_marshall44(); }
    
    static void _call_cleanupIDXL_marshall44(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_cleanupIDXL_marshall44(void* impl_msg, void* impl_obj);
    
    static void _callthr_cleanupIDXL_marshall44(CkThrCallArg *);
    
    static void _marshallmessagepup_cleanupIDXL_marshall44(PUP::er &p,void *msg);
    /* DECLS: threaded sync void purgeElement(int impl_noname_51, int impl_noname_52);
     */
    // Entry point registration at startup
    
    static int reg_purgeElement_marshall45();
    // Entry point index lookup
    
    inline static int idx_purgeElement_marshall45() {
      static int epidx = reg_purgeElement_marshall45();
      return epidx;
    }

    
    inline static int idx_purgeElement(void (femMeshModify::*)(int impl_noname_51, int impl_noname_52) ) {
      return idx_purgeElement_marshall45();
    }


    
    static int purgeElement(int impl_noname_51, int impl_noname_52) { return idx_purgeElement_marshall45(); }
    
    static void _call_purgeElement_marshall45(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_purgeElement_marshall45(void* impl_msg, void* impl_obj);
    
    static void _callthr_purgeElement_marshall45(CkThrCallArg *);
    
    static void _marshallmessagepup_purgeElement_marshall45(PUP::er &p,void *msg);
    /* DECLS: threaded sync entDataMsg* packEntData(int impl_noname_53, int impl_noname_54, const bool &impl_noname_55, int impl_noname_56);
     */
    // Entry point registration at startup
    
    static int reg_packEntData_marshall46();
    // Entry point index lookup
    
    inline static int idx_packEntData_marshall46() {
      static int epidx = reg_packEntData_marshall46();
      return epidx;
    }

    
    inline static int idx_packEntData(entDataMsg* (femMeshModify::*)(int impl_noname_53, int impl_noname_54, const bool &impl_noname_55, int impl_noname_56) ) {
      return idx_packEntData_marshall46();
    }


    
    static int packEntData(int impl_noname_53, int impl_noname_54, const bool &impl_noname_55, int impl_noname_56) { return idx_packEntData_marshall46(); }
    
    static void _call_packEntData_marshall46(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_packEntData_marshall46(void* impl_msg, void* impl_obj);
    
    static void _callthr_packEntData_marshall46(CkThrCallArg *);
    
    static void _marshallmessagepup_packEntData_marshall46(PUP::er &p,void *msg);
    /* DECLS: threaded sync boolMsg* isFixedNodeRemote(int impl_noname_57, int impl_noname_58);
     */
    // Entry point registration at startup
    
    static int reg_isFixedNodeRemote_marshall47();
    // Entry point index lookup
    
    inline static int idx_isFixedNodeRemote_marshall47() {
      static int epidx = reg_isFixedNodeRemote_marshall47();
      return epidx;
    }

    
    inline static int idx_isFixedNodeRemote(boolMsg* (femMeshModify::*)(int impl_noname_57, int impl_noname_58) ) {
      return idx_isFixedNodeRemote_marshall47();
    }


    
    static int isFixedNodeRemote(int impl_noname_57, int impl_noname_58) { return idx_isFixedNodeRemote_marshall47(); }
    
    static void _call_isFixedNodeRemote_marshall47(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_isFixedNodeRemote_marshall47(void* impl_msg, void* impl_obj);
    
    static void _callthr_isFixedNodeRemote_marshall47(CkThrCallArg *);
    
    static void _marshallmessagepup_isFixedNodeRemote_marshall47(PUP::er &p,void *msg);
    /* DECLS: threaded sync void finish();
     */
    // Entry point registration at startup
    
    static int reg_finish_void();
    // Entry point index lookup
    
    inline static int idx_finish_void() {
      static int epidx = reg_finish_void();
      return epidx;
    }

    
    inline static int idx_finish(void (femMeshModify::*)() ) {
      return idx_finish_void();
    }


    
    static int finish() { return idx_finish_void(); }
    
    static void _call_finish_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_finish_void(void* impl_msg, void* impl_obj);
    
    static void _callthr_finish_void(CkThrCallArg *);
    /* DECLS: femMeshModify(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_femMeshModify_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_femMeshModify_CkMigrateMessage() {
      static int epidx = reg_femMeshModify_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_femMeshModify_CkMigrateMessage(); }
    
    static void _call_femMeshModify_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_femMeshModify_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
 class CProxyElement_femMeshModify : public CProxyElement_ArrayElement{
  public:
    typedef femMeshModify local_t;
    typedef CkIndex_femMeshModify index_t;
    typedef CProxy_femMeshModify proxy_t;
    typedef CProxyElement_femMeshModify element_t;
    typedef CProxySection_femMeshModify section_t;

    using array_index_t = CkArrayIndex1D;

    /* TRAM aggregators */

    CProxyElement_femMeshModify(void) {
    }
    CProxyElement_femMeshModify(const ArrayElement *e) : CProxyElement_ArrayElement(e){
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

    femMeshModify *ckLocal(void) const
    { return (femMeshModify *)CProxyElement_ArrayElement::ckLocal(); }

    CProxyElement_femMeshModify(const CkArrayID &aid,const CkArrayIndex1D &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_femMeshModify(const CkArrayID &aid,const CkArrayIndex1D &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}

    CProxyElement_femMeshModify(const CkArrayID &aid,const CkArrayIndex &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_femMeshModify(const CkArrayID &aid,const CkArrayIndex &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}
/* DECLS: femMeshModify(femMeshModMsg* impl_msg);
 */
    
    void insert(femMeshModMsg* impl_msg, int onPE=-1);
/* DECLS: threaded sync void setFemMesh(FEMMeshMsg* impl_msg);
 */
    
    void setFemMesh(FEMMeshMsg* impl_msg) ;

/* DECLS: threaded sync intMsg* lockRemoteChunk(int2Msg* impl_msg);
 */
    
    intMsg* lockRemoteChunk(int2Msg* impl_msg) ;

/* DECLS: threaded sync intMsg* unlockRemoteChunk(int2Msg* impl_msg);
 */
    
    intMsg* unlockRemoteChunk(int2Msg* impl_msg) ;

/* DECLS: threaded sync intMsg* lockRemoteNode(int impl_noname_0, int impl_noname_1, int impl_noname_2, int impl_noname_3);
 */
    
    intMsg* lockRemoteNode(int impl_noname_0, int impl_noname_1, int impl_noname_2, int impl_noname_3, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: threaded sync intMsg* unlockRemoteNode(int impl_noname_4, int impl_noname_5, int impl_noname_6, int impl_noname_7);
 */
    
    intMsg* unlockRemoteNode(int impl_noname_4, int impl_noname_5, int impl_noname_6, int impl_noname_7, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: threaded sync intMsg* addNodeRemote(addNodeMsg* impl_msg);
 */
    
    intMsg* addNodeRemote(addNodeMsg* impl_msg) ;

/* DECLS: threaded sync void addSharedNodeRemote(sharedNodeMsg* impl_msg);
 */
    
    void addSharedNodeRemote(sharedNodeMsg* impl_msg) ;

/* DECLS: threaded sync void removeSharedNodeRemote(removeSharedNodeMsg* impl_msg);
 */
    
    void removeSharedNodeRemote(removeSharedNodeMsg* impl_msg) ;

/* DECLS: threaded sync void addGhostElem(addGhostElemMsg* impl_msg);
 */
    
    void addGhostElem(addGhostElemMsg* impl_msg) ;

/* DECLS: threaded sync chunkListMsg* getChunksSharingGhostNode(int2Msg* impl_msg);
 */
    
    chunkListMsg* getChunksSharingGhostNode(int2Msg* impl_msg) ;

/* DECLS: threaded sync intMsg* addElementRemote(addElemMsg* impl_msg);
 */
    
    intMsg* addElementRemote(addElemMsg* impl_msg) ;

/* DECLS: threaded sync void removeGhostElem(removeGhostElemMsg* impl_msg);
 */
    
    void removeGhostElem(removeGhostElemMsg* impl_msg) ;

/* DECLS: threaded sync void removeElementRemote(removeElemMsg* impl_msg);
 */
    
    void removeElementRemote(removeElemMsg* impl_msg) ;

/* DECLS: threaded sync void removeGhostNode(int fromChk, int sharedIdx);
 */
    
    void removeGhostNode(int fromChk, int sharedIdx, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: threaded sync void refine_flip_element_leb(int impl_noname_8, int impl_noname_9, int impl_noname_a, int impl_noname_b, int impl_noname_c, int impl_noname_d, double impl_noname_e);
 */
    
    void refine_flip_element_leb(int impl_noname_8, int impl_noname_9, int impl_noname_a, int impl_noname_b, int impl_noname_c, int impl_noname_d, double impl_noname_e, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: threaded sync void addToSharedList(int impl_noname_f, int impl_noname_10);
 */
    
    void addToSharedList(int impl_noname_f, int impl_noname_10, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: threaded sync void updateAttrs(updateAttrsMsg* impl_msg);
 */
    
    void updateAttrs(updateAttrsMsg* impl_msg) ;

/* DECLS: threaded sync double2Msg* getRemoteCoord(int impl_noname_11, int impl_noname_12);
 */
    
    double2Msg* getRemoteCoord(int impl_noname_11, int impl_noname_12, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: threaded sync intMsg* getRemoteBound(int impl_noname_13, int impl_noname_14);
 */
    
    intMsg* getRemoteBound(int impl_noname_13, int impl_noname_14, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: threaded sync intMsg* getIdxGhostSend(int impl_noname_15, int impl_noname_16, int impl_noname_17);
 */
    
    intMsg* getIdxGhostSend(int impl_noname_15, int impl_noname_16, int impl_noname_17, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: threaded sync void updateIdxlList(int impl_noname_18, int impl_noname_19, int impl_noname_1a);
 */
    
    void updateIdxlList(int impl_noname_18, int impl_noname_19, int impl_noname_1a, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: threaded sync void removeIDXLRemote(int impl_noname_1b, int impl_noname_1c, int impl_noname_1d);
 */
    
    void removeIDXLRemote(int impl_noname_1b, int impl_noname_1c, int impl_noname_1d, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: threaded sync void addTransIDXLRemote(int impl_noname_1e, int impl_noname_1f, int impl_noname_20);
 */
    
    void addTransIDXLRemote(int impl_noname_1e, int impl_noname_1f, int impl_noname_20, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: threaded sync void verifyIdxlList(int impl_noname_21, int impl_noname_22, int impl_noname_23);
 */
    
    void verifyIdxlList(int impl_noname_21, int impl_noname_22, int impl_noname_23, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: threaded sync void idxllockRemote(int impl_noname_24, int impl_noname_25);
 */
    
    void idxllockRemote(int impl_noname_24, int impl_noname_25, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: threaded sync void idxlunlockRemote(int impl_noname_26, int impl_noname_27);
 */
    
    void idxlunlockRemote(int impl_noname_26, int impl_noname_27, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: threaded sync intMsg* eatIntoElement(int impl_noname_28, int impl_noname_29);
 */
    
    intMsg* eatIntoElement(int impl_noname_28, int impl_noname_29, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: threaded sync intMsg* getLockOwner(int impl_noname_2a, int impl_noname_2b);
 */
    
    intMsg* getLockOwner(int impl_noname_2a, int impl_noname_2b, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: threaded sync boolMsg* knowsAbtNode(int impl_noname_2c, int impl_noname_2d, int impl_noname_2e);
 */
    
    boolMsg* knowsAbtNode(int impl_noname_2c, int impl_noname_2d, int impl_noname_2e, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: threaded sync intMsg* hasLockRemoteNode(int impl_noname_2f, int impl_noname_30, int impl_noname_31);
 */
    
    intMsg* hasLockRemoteNode(int impl_noname_2f, int impl_noname_30, int impl_noname_31, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: threaded sync void modifyLockAll(int impl_noname_32, int impl_noname_33);
 */
    
    void modifyLockAll(int impl_noname_32, int impl_noname_33, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: threaded sync boolMsg* verifyLock(int impl_noname_34, int impl_noname_35, int impl_noname_36);
 */
    
    boolMsg* verifyLock(int impl_noname_34, int impl_noname_35, int impl_noname_36, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: threaded sync void updateghostsend(verifyghostsendMsg* impl_msg);
 */
    
    void updateghostsend(verifyghostsendMsg* impl_msg) ;

/* DECLS: threaded sync void verifyghostsend(verifyghostsendMsg* impl_msg);
 */
    
    void verifyghostsend(verifyghostsendMsg* impl_msg) ;

/* DECLS: threaded sync findgsMsg* findghostsend(int impl_noname_37, int impl_noname_38);
 */
    
    findgsMsg* findghostsend(int impl_noname_37, int impl_noname_38, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: threaded sync boolMsg* shouldLoseGhost(int impl_noname_39, int impl_noname_3a, int impl_noname_3b);
 */
    
    boolMsg* shouldLoseGhost(int impl_noname_39, int impl_noname_3a, int impl_noname_3b, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: threaded sync void addghostsendl(int impl_noname_3c, int impl_noname_3d, int impl_noname_3e, int impl_noname_3f);
 */
    
    void addghostsendl(int impl_noname_3c, int impl_noname_3d, int impl_noname_3e, int impl_noname_3f, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: threaded sync void addghostsendl1(int impl_noname_40, int impl_noname_41, int impl_noname_42);
 */
    
    void addghostsendl1(int impl_noname_40, int impl_noname_41, int impl_noname_42, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: threaded sync void addghostsendr(int impl_noname_43, int impl_noname_44, int impl_noname_45, int impl_noname_46);
 */
    
    void addghostsendr(int impl_noname_43, int impl_noname_44, int impl_noname_45, int impl_noname_46, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: threaded sync void addghostsendr1(int impl_noname_47, int impl_noname_48, int impl_noname_49);
 */
    
    void addghostsendr1(int impl_noname_47, int impl_noname_48, int impl_noname_49, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: threaded sync boolMsg* willItLose(int impl_noname_4a, int impl_noname_4b);
 */
    
    boolMsg* willItLose(int impl_noname_4a, int impl_noname_4b, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: threaded sync void interpolateElemCopy(int impl_noname_4c, int impl_noname_4d, int impl_noname_4e);
 */
    
    void interpolateElemCopy(int impl_noname_4c, int impl_noname_4d, int impl_noname_4e, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: threaded sync void cleanupIDXL(int impl_noname_4f, int impl_noname_50);
 */
    
    void cleanupIDXL(int impl_noname_4f, int impl_noname_50, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: threaded sync void purgeElement(int impl_noname_51, int impl_noname_52);
 */
    
    void purgeElement(int impl_noname_51, int impl_noname_52, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: threaded sync entDataMsg* packEntData(int impl_noname_53, int impl_noname_54, const bool &impl_noname_55, int impl_noname_56);
 */
    
    entDataMsg* packEntData(int impl_noname_53, int impl_noname_54, const bool &impl_noname_55, int impl_noname_56, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: threaded sync boolMsg* isFixedNodeRemote(int impl_noname_57, int impl_noname_58);
 */
    
    boolMsg* isFixedNodeRemote(int impl_noname_57, int impl_noname_58, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: threaded sync void finish();
 */
    
    void finish(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: femMeshModify(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- collective proxy -------------- */
 class CProxy_femMeshModify : public CProxy_ArrayElement{
  public:
    typedef femMeshModify local_t;
    typedef CkIndex_femMeshModify index_t;
    typedef CProxy_femMeshModify proxy_t;
    typedef CProxyElement_femMeshModify element_t;
    typedef CProxySection_femMeshModify section_t;

    using array_index_t = CkArrayIndex1D;
    CProxy_femMeshModify(void) {
    }
    CProxy_femMeshModify(const ArrayElement *e) : CProxy_ArrayElement(e){
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
    CProxyElement_femMeshModify operator [] (const CkArrayIndex1D &idx) const
    { return CProxyElement_femMeshModify(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_femMeshModify operator() (const CkArrayIndex1D &idx) const
    { return CProxyElement_femMeshModify(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_femMeshModify operator [] (int idx) const 
        {return CProxyElement_femMeshModify(ckGetArrayID(), CkArrayIndex1D(idx), CK_DELCTOR_CALL);}
    CProxyElement_femMeshModify operator () (int idx) const 
        {return CProxyElement_femMeshModify(ckGetArrayID(), CkArrayIndex1D(idx), CK_DELCTOR_CALL);}
    CProxy_femMeshModify(const CkArrayID &aid,CK_DELCTOR_PARAM) 
        :CProxy_ArrayElement(aid,CK_DELCTOR_ARGS) {}
    CProxy_femMeshModify(const CkArrayID &aid) 
        :CProxy_ArrayElement(aid) {}
/* DECLS: femMeshModify(femMeshModMsg* impl_msg);
 */
    
    static CkArrayID ckNew(femMeshModMsg* impl_msg, const CkArrayOptions &opts = CkArrayOptions());
    static void      ckNew(femMeshModMsg* impl_msg, const CkArrayOptions &opts, CkCallback _ck_array_creation_cb);
    static CkArrayID ckNew(femMeshModMsg* impl_msg, const int s1);
    static void ckNew(femMeshModMsg* impl_msg, const int s1, CkCallback _ck_array_creation_cb);

/* DECLS: threaded sync void setFemMesh(FEMMeshMsg* impl_msg);
 */

/* DECLS: threaded sync intMsg* lockRemoteChunk(int2Msg* impl_msg);
 */

/* DECLS: threaded sync intMsg* unlockRemoteChunk(int2Msg* impl_msg);
 */

/* DECLS: threaded sync intMsg* lockRemoteNode(int impl_noname_0, int impl_noname_1, int impl_noname_2, int impl_noname_3);
 */

/* DECLS: threaded sync intMsg* unlockRemoteNode(int impl_noname_4, int impl_noname_5, int impl_noname_6, int impl_noname_7);
 */

/* DECLS: threaded sync intMsg* addNodeRemote(addNodeMsg* impl_msg);
 */

/* DECLS: threaded sync void addSharedNodeRemote(sharedNodeMsg* impl_msg);
 */

/* DECLS: threaded sync void removeSharedNodeRemote(removeSharedNodeMsg* impl_msg);
 */

/* DECLS: threaded sync void addGhostElem(addGhostElemMsg* impl_msg);
 */

/* DECLS: threaded sync chunkListMsg* getChunksSharingGhostNode(int2Msg* impl_msg);
 */

/* DECLS: threaded sync intMsg* addElementRemote(addElemMsg* impl_msg);
 */

/* DECLS: threaded sync void removeGhostElem(removeGhostElemMsg* impl_msg);
 */

/* DECLS: threaded sync void removeElementRemote(removeElemMsg* impl_msg);
 */

/* DECLS: threaded sync void removeGhostNode(int fromChk, int sharedIdx);
 */

/* DECLS: threaded sync void refine_flip_element_leb(int impl_noname_8, int impl_noname_9, int impl_noname_a, int impl_noname_b, int impl_noname_c, int impl_noname_d, double impl_noname_e);
 */

/* DECLS: threaded sync void addToSharedList(int impl_noname_f, int impl_noname_10);
 */

/* DECLS: threaded sync void updateAttrs(updateAttrsMsg* impl_msg);
 */

/* DECLS: threaded sync double2Msg* getRemoteCoord(int impl_noname_11, int impl_noname_12);
 */

/* DECLS: threaded sync intMsg* getRemoteBound(int impl_noname_13, int impl_noname_14);
 */

/* DECLS: threaded sync intMsg* getIdxGhostSend(int impl_noname_15, int impl_noname_16, int impl_noname_17);
 */

/* DECLS: threaded sync void updateIdxlList(int impl_noname_18, int impl_noname_19, int impl_noname_1a);
 */

/* DECLS: threaded sync void removeIDXLRemote(int impl_noname_1b, int impl_noname_1c, int impl_noname_1d);
 */

/* DECLS: threaded sync void addTransIDXLRemote(int impl_noname_1e, int impl_noname_1f, int impl_noname_20);
 */

/* DECLS: threaded sync void verifyIdxlList(int impl_noname_21, int impl_noname_22, int impl_noname_23);
 */

/* DECLS: threaded sync void idxllockRemote(int impl_noname_24, int impl_noname_25);
 */

/* DECLS: threaded sync void idxlunlockRemote(int impl_noname_26, int impl_noname_27);
 */

/* DECLS: threaded sync intMsg* eatIntoElement(int impl_noname_28, int impl_noname_29);
 */

/* DECLS: threaded sync intMsg* getLockOwner(int impl_noname_2a, int impl_noname_2b);
 */

/* DECLS: threaded sync boolMsg* knowsAbtNode(int impl_noname_2c, int impl_noname_2d, int impl_noname_2e);
 */

/* DECLS: threaded sync intMsg* hasLockRemoteNode(int impl_noname_2f, int impl_noname_30, int impl_noname_31);
 */

/* DECLS: threaded sync void modifyLockAll(int impl_noname_32, int impl_noname_33);
 */

/* DECLS: threaded sync boolMsg* verifyLock(int impl_noname_34, int impl_noname_35, int impl_noname_36);
 */

/* DECLS: threaded sync void updateghostsend(verifyghostsendMsg* impl_msg);
 */

/* DECLS: threaded sync void verifyghostsend(verifyghostsendMsg* impl_msg);
 */

/* DECLS: threaded sync findgsMsg* findghostsend(int impl_noname_37, int impl_noname_38);
 */

/* DECLS: threaded sync boolMsg* shouldLoseGhost(int impl_noname_39, int impl_noname_3a, int impl_noname_3b);
 */

/* DECLS: threaded sync void addghostsendl(int impl_noname_3c, int impl_noname_3d, int impl_noname_3e, int impl_noname_3f);
 */

/* DECLS: threaded sync void addghostsendl1(int impl_noname_40, int impl_noname_41, int impl_noname_42);
 */

/* DECLS: threaded sync void addghostsendr(int impl_noname_43, int impl_noname_44, int impl_noname_45, int impl_noname_46);
 */

/* DECLS: threaded sync void addghostsendr1(int impl_noname_47, int impl_noname_48, int impl_noname_49);
 */

/* DECLS: threaded sync boolMsg* willItLose(int impl_noname_4a, int impl_noname_4b);
 */

/* DECLS: threaded sync void interpolateElemCopy(int impl_noname_4c, int impl_noname_4d, int impl_noname_4e);
 */

/* DECLS: threaded sync void cleanupIDXL(int impl_noname_4f, int impl_noname_50);
 */

/* DECLS: threaded sync void purgeElement(int impl_noname_51, int impl_noname_52);
 */

/* DECLS: threaded sync entDataMsg* packEntData(int impl_noname_53, int impl_noname_54, const bool &impl_noname_55, int impl_noname_56);
 */

/* DECLS: threaded sync boolMsg* isFixedNodeRemote(int impl_noname_57, int impl_noname_58);
 */

/* DECLS: threaded sync void finish();
 */

/* DECLS: femMeshModify(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- section proxy -------------- */
 class CProxySection_femMeshModify : public CProxySection_ArrayElement{
  public:
    typedef femMeshModify local_t;
    typedef CkIndex_femMeshModify index_t;
    typedef CProxy_femMeshModify proxy_t;
    typedef CProxyElement_femMeshModify element_t;
    typedef CProxySection_femMeshModify section_t;

    using array_index_t = CkArrayIndex1D;
    CProxySection_femMeshModify(void) {
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
    CProxyElement_femMeshModify operator [] (const CkArrayIndex1D &idx) const
        {return CProxyElement_femMeshModify(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_femMeshModify operator() (const CkArrayIndex1D &idx) const
        {return CProxyElement_femMeshModify(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_femMeshModify operator [] (int idx) const 
        {return CProxyElement_femMeshModify(ckGetArrayID(), *(CkArrayIndex1D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
    CProxyElement_femMeshModify operator () (int idx) const 
        {return CProxyElement_femMeshModify(ckGetArrayID(), *(CkArrayIndex1D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
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
    CProxySection_femMeshModify(const CkArrayID &aid, CkArrayIndex *elems, int nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_femMeshModify(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_femMeshModify(const CkArrayID &aid, CkArrayIndex *elems, int nElems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_ArrayElement(aid,elems,nElems, factor) {}
    CProxySection_femMeshModify(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_ArrayElement(aid,elems, factor) { ckAutoDelegate(); }
    CProxySection_femMeshModify(const CkSectionID &sid)  
        :CProxySection_ArrayElement(sid) { ckAutoDelegate(); }
    CProxySection_femMeshModify(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(n,aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_femMeshModify(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_femMeshModify(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems) 
        :CProxySection_ArrayElement(n,aid,elems,nElems) { ckAutoDelegate(); }
    CProxySection_femMeshModify(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems) 
        :CProxySection_ArrayElement(aid,elems) { ckAutoDelegate(); }
    CProxySection_femMeshModify(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, int factor) 
        :CProxySection_ArrayElement(n,aid,elems,nElems, factor) { ckAutoDelegate(); }
    CProxySection_femMeshModify(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, int factor) 
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
/* DECLS: femMeshModify(femMeshModMsg* impl_msg);
 */
    

/* DECLS: threaded sync void setFemMesh(FEMMeshMsg* impl_msg);
 */

/* DECLS: threaded sync intMsg* lockRemoteChunk(int2Msg* impl_msg);
 */

/* DECLS: threaded sync intMsg* unlockRemoteChunk(int2Msg* impl_msg);
 */

/* DECLS: threaded sync intMsg* lockRemoteNode(int impl_noname_0, int impl_noname_1, int impl_noname_2, int impl_noname_3);
 */

/* DECLS: threaded sync intMsg* unlockRemoteNode(int impl_noname_4, int impl_noname_5, int impl_noname_6, int impl_noname_7);
 */

/* DECLS: threaded sync intMsg* addNodeRemote(addNodeMsg* impl_msg);
 */

/* DECLS: threaded sync void addSharedNodeRemote(sharedNodeMsg* impl_msg);
 */

/* DECLS: threaded sync void removeSharedNodeRemote(removeSharedNodeMsg* impl_msg);
 */

/* DECLS: threaded sync void addGhostElem(addGhostElemMsg* impl_msg);
 */

/* DECLS: threaded sync chunkListMsg* getChunksSharingGhostNode(int2Msg* impl_msg);
 */

/* DECLS: threaded sync intMsg* addElementRemote(addElemMsg* impl_msg);
 */

/* DECLS: threaded sync void removeGhostElem(removeGhostElemMsg* impl_msg);
 */

/* DECLS: threaded sync void removeElementRemote(removeElemMsg* impl_msg);
 */

/* DECLS: threaded sync void removeGhostNode(int fromChk, int sharedIdx);
 */

/* DECLS: threaded sync void refine_flip_element_leb(int impl_noname_8, int impl_noname_9, int impl_noname_a, int impl_noname_b, int impl_noname_c, int impl_noname_d, double impl_noname_e);
 */

/* DECLS: threaded sync void addToSharedList(int impl_noname_f, int impl_noname_10);
 */

/* DECLS: threaded sync void updateAttrs(updateAttrsMsg* impl_msg);
 */

/* DECLS: threaded sync double2Msg* getRemoteCoord(int impl_noname_11, int impl_noname_12);
 */

/* DECLS: threaded sync intMsg* getRemoteBound(int impl_noname_13, int impl_noname_14);
 */

/* DECLS: threaded sync intMsg* getIdxGhostSend(int impl_noname_15, int impl_noname_16, int impl_noname_17);
 */

/* DECLS: threaded sync void updateIdxlList(int impl_noname_18, int impl_noname_19, int impl_noname_1a);
 */

/* DECLS: threaded sync void removeIDXLRemote(int impl_noname_1b, int impl_noname_1c, int impl_noname_1d);
 */

/* DECLS: threaded sync void addTransIDXLRemote(int impl_noname_1e, int impl_noname_1f, int impl_noname_20);
 */

/* DECLS: threaded sync void verifyIdxlList(int impl_noname_21, int impl_noname_22, int impl_noname_23);
 */

/* DECLS: threaded sync void idxllockRemote(int impl_noname_24, int impl_noname_25);
 */

/* DECLS: threaded sync void idxlunlockRemote(int impl_noname_26, int impl_noname_27);
 */

/* DECLS: threaded sync intMsg* eatIntoElement(int impl_noname_28, int impl_noname_29);
 */

/* DECLS: threaded sync intMsg* getLockOwner(int impl_noname_2a, int impl_noname_2b);
 */

/* DECLS: threaded sync boolMsg* knowsAbtNode(int impl_noname_2c, int impl_noname_2d, int impl_noname_2e);
 */

/* DECLS: threaded sync intMsg* hasLockRemoteNode(int impl_noname_2f, int impl_noname_30, int impl_noname_31);
 */

/* DECLS: threaded sync void modifyLockAll(int impl_noname_32, int impl_noname_33);
 */

/* DECLS: threaded sync boolMsg* verifyLock(int impl_noname_34, int impl_noname_35, int impl_noname_36);
 */

/* DECLS: threaded sync void updateghostsend(verifyghostsendMsg* impl_msg);
 */

/* DECLS: threaded sync void verifyghostsend(verifyghostsendMsg* impl_msg);
 */

/* DECLS: threaded sync findgsMsg* findghostsend(int impl_noname_37, int impl_noname_38);
 */

/* DECLS: threaded sync boolMsg* shouldLoseGhost(int impl_noname_39, int impl_noname_3a, int impl_noname_3b);
 */

/* DECLS: threaded sync void addghostsendl(int impl_noname_3c, int impl_noname_3d, int impl_noname_3e, int impl_noname_3f);
 */

/* DECLS: threaded sync void addghostsendl1(int impl_noname_40, int impl_noname_41, int impl_noname_42);
 */

/* DECLS: threaded sync void addghostsendr(int impl_noname_43, int impl_noname_44, int impl_noname_45, int impl_noname_46);
 */

/* DECLS: threaded sync void addghostsendr1(int impl_noname_47, int impl_noname_48, int impl_noname_49);
 */

/* DECLS: threaded sync boolMsg* willItLose(int impl_noname_4a, int impl_noname_4b);
 */

/* DECLS: threaded sync void interpolateElemCopy(int impl_noname_4c, int impl_noname_4d, int impl_noname_4e);
 */

/* DECLS: threaded sync void cleanupIDXL(int impl_noname_4f, int impl_noname_50);
 */

/* DECLS: threaded sync void purgeElement(int impl_noname_51, int impl_noname_52);
 */

/* DECLS: threaded sync entDataMsg* packEntData(int impl_noname_53, int impl_noname_54, const bool &impl_noname_55, int impl_noname_56);
 */

/* DECLS: threaded sync boolMsg* isFixedNodeRemote(int impl_noname_57, int impl_noname_58);
 */

/* DECLS: threaded sync void finish();
 */

/* DECLS: femMeshModify(CkMigrateMessage* impl_msg);
 */

};
#define femMeshModify_SDAG_CODE 
typedef CBaseT1<ArrayElementT<CkIndex1D>, CProxy_femMeshModify>CBase_femMeshModify;




















/* ---------------- method closures -------------- */
class Closure_femMeshModify {
  public:





    struct lockRemoteNode_5_closure;


    struct unlockRemoteNode_6_closure;










    struct removeGhostNode_15_closure;


    struct refine_flip_element_leb_16_closure;


    struct addToSharedList_17_closure;



    struct getRemoteCoord_19_closure;


    struct getRemoteBound_20_closure;


    struct getIdxGhostSend_21_closure;


    struct updateIdxlList_22_closure;


    struct removeIDXLRemote_23_closure;


    struct addTransIDXLRemote_24_closure;


    struct verifyIdxlList_25_closure;


    struct idxllockRemote_26_closure;


    struct idxlunlockRemote_27_closure;


    struct eatIntoElement_28_closure;


    struct getLockOwner_29_closure;


    struct knowsAbtNode_30_closure;


    struct hasLockRemoteNode_31_closure;


    struct modifyLockAll_32_closure;


    struct verifyLock_33_closure;




    struct findghostsend_36_closure;


    struct shouldLoseGhost_37_closure;


    struct addghostsendl_38_closure;


    struct addghostsendl1_39_closure;


    struct addghostsendr_40_closure;


    struct addghostsendr1_41_closure;


    struct willItLose_42_closure;


    struct interpolateElemCopy_43_closure;


    struct cleanupIDXL_44_closure;


    struct purgeElement_45_closure;


    struct packEntData_46_closure;


    struct isFixedNodeRemote_47_closure;


    struct finish_48_closure;


};

extern void _registerParFUM_Adapt(void);
#endif
