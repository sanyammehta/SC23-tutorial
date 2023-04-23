





















/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_chunk::refineElement_2_closure : public SDAG::Closure {
            int idx;
            double volume;


      refineElement_2_closure() {
        init();
      }
      refineElement_2_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return idx;}
            double & getP1() { return volume;}
      void pup(PUP::er& __p) {
        __p | idx;
        __p | volume;
        packClosure(__p);
      }
      virtual ~refineElement_2_closure() {
      }
      PUPable_decl(SINGLE_ARG(refineElement_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_chunk::refineElement_3_closure : public SDAG::Closure {
            int idx;


      refineElement_3_closure() {
        init();
      }
      refineElement_3_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return idx;}
      void pup(PUP::er& __p) {
        __p | idx;
        packClosure(__p);
      }
      virtual ~refineElement_3_closure() {
      }
      PUPable_decl(SINGLE_ARG(refineElement_3_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_chunk::refiningElements_4_closure : public SDAG::Closure {
      

      refiningElements_4_closure() {
        init();
      }
      refiningElements_4_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~refiningElements_4_closure() {
      }
      PUPable_decl(SINGLE_ARG(refiningElements_4_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_chunk::coarsenElement_5_closure : public SDAG::Closure {
            int idx;
            double volume;


      coarsenElement_5_closure() {
        init();
      }
      coarsenElement_5_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return idx;}
            double & getP1() { return volume;}
      void pup(PUP::er& __p) {
        __p | idx;
        __p | volume;
        packClosure(__p);
      }
      virtual ~coarsenElement_5_closure() {
      }
      PUPable_decl(SINGLE_ARG(coarsenElement_5_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_chunk::coarseningElements_6_closure : public SDAG::Closure {
      

      coarseningElements_6_closure() {
        init();
      }
      coarseningElements_6_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~coarseningElements_6_closure() {
      }
      PUPable_decl(SINGLE_ARG(coarseningElements_6_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_chunk::improveMesh_7_closure : public SDAG::Closure {
      

      improveMesh_7_closure() {
        init();
      }
      improveMesh_7_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~improveMesh_7_closure() {
      }
      PUPable_decl(SINGLE_ARG(improveMesh_7_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_chunk::relocatePoints_8_closure : public SDAG::Closure {
      

      relocatePoints_8_closure() {
        init();
      }
      relocatePoints_8_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~relocatePoints_8_closure() {
      }
      PUPable_decl(SINGLE_ARG(relocatePoints_8_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_chunk::flippingElements_9_closure : public SDAG::Closure {
      

      flippingElements_9_closure() {
        init();
      }
      flippingElements_9_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~flippingElements_9_closure() {
      }
      PUPable_decl(SINGLE_ARG(flippingElements_9_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_chunk::lockChunk_10_closure : public SDAG::Closure {
            int lh;
            double prio;


      lockChunk_10_closure() {
        init();
      }
      lockChunk_10_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return lh;}
            double & getP1() { return prio;}
      void pup(PUP::er& __p) {
        __p | lh;
        __p | prio;
        packClosure(__p);
      }
      virtual ~lockChunk_10_closure() {
      }
      PUPable_decl(SINGLE_ARG(lockChunk_10_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_chunk::unlockChunk_11_closure : public SDAG::Closure {
            int lh;


      unlockChunk_11_closure() {
        init();
      }
      unlockChunk_11_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return lh;}
      void pup(PUP::er& __p) {
        __p | lh;
        packClosure(__p);
      }
      virtual ~unlockChunk_11_closure() {
      }
      PUPable_decl(SINGLE_ARG(unlockChunk_11_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_chunk::print_12_closure : public SDAG::Closure {
      

      print_12_closure() {
        init();
      }
      print_12_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~print_12_closure() {
      }
      PUPable_decl(SINGLE_ARG(print_12_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_chunk::out_print_13_closure : public SDAG::Closure {
      

      out_print_13_closure() {
        init();
      }
      out_print_13_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~out_print_13_closure() {
      }
      PUPable_decl(SINGLE_ARG(out_print_13_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_chunk::getNode_14_closure : public SDAG::Closure {
            int n;


      getNode_14_closure() {
        init();
      }
      getNode_14_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return n;}
      void pup(PUP::er& __p) {
        __p | n;
        packClosure(__p);
      }
      virtual ~getNode_14_closure() {
      }
      PUPable_decl(SINGLE_ARG(getNode_14_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_chunk::refine_19_closure : public SDAG::Closure {
      

      refine_19_closure() {
        init();
      }
      refine_19_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~refine_19_closure() {
      }
      PUPable_decl(SINGLE_ARG(refine_19_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_chunk::start_20_closure : public SDAG::Closure {
      

      start_20_closure() {
        init();
      }
      start_20_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~start_20_closure() {
      }
      PUPable_decl(SINGLE_ARG(start_20_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_chunk::improve_21_closure : public SDAG::Closure {
      

      improve_21_closure() {
        init();
      }
      improve_21_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~improve_21_closure() {
      }
      PUPable_decl(SINGLE_ARG(improve_21_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_chunk::finalizeImprovements_22_closure : public SDAG::Closure {
      

      finalizeImprovements_22_closure() {
        init();
      }
      finalizeImprovements_22_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~finalizeImprovements_22_closure() {
      }
      PUPable_decl(SINGLE_ARG(finalizeImprovements_22_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_chunk::deriveFaces_23_closure : public SDAG::Closure {
      

      deriveFaces_23_closure() {
        init();
      }
      deriveFaces_23_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~deriveFaces_23_closure() {
      }
      PUPable_decl(SINGLE_ARG(deriveFaces_23_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_chunk::checkFace_28_closure : public SDAG::Closure {
            int idx;
            elemRef face;


      checkFace_28_closure() {
        init();
      }
      checkFace_28_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return idx;}
            elemRef & getP1() { return face;}
      void pup(PUP::er& __p) {
        __p | idx;
        __p | face;
        packClosure(__p);
      }
      virtual ~checkFace_28_closure() {
      }
      PUPable_decl(SINGLE_ARG(checkFace_28_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_chunk::checkFace_29_closure : public SDAG::Closure {
            int idx;
            node n1;
            node n2;
            node n3;
            elemRef nbr;


      checkFace_29_closure() {
        init();
      }
      checkFace_29_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return idx;}
            node & getP1() { return n1;}
            node & getP2() { return n2;}
            node & getP3() { return n3;}
            elemRef & getP4() { return nbr;}
      void pup(PUP::er& __p) {
        __p | idx;
        __p | n1;
        __p | n2;
        __p | n3;
        __p | nbr;
        packClosure(__p);
      }
      virtual ~checkFace_29_closure() {
      }
      PUPable_decl(SINGLE_ARG(checkFace_29_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_chunk::lockLF_30_closure : public SDAG::Closure {
            int idx;
            node n1;
            node n2;
            node n3;
            node n4;
            elemRef myRef;
            double prio;


      lockLF_30_closure() {
        init();
      }
      lockLF_30_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return idx;}
            node & getP1() { return n1;}
            node & getP2() { return n2;}
            node & getP3() { return n3;}
            node & getP4() { return n4;}
            elemRef & getP5() { return myRef;}
            double & getP6() { return prio;}
      void pup(PUP::er& __p) {
        __p | idx;
        __p | n1;
        __p | n2;
        __p | n3;
        __p | n4;
        __p | myRef;
        __p | prio;
        packClosure(__p);
      }
      virtual ~lockLF_30_closure() {
      }
      PUPable_decl(SINGLE_ARG(lockLF_30_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_chunk::splitLF_31_closure : public SDAG::Closure {
            int idx;
            node in1;
            node in2;
            node in3;
            node in4;
            elemRef requester;


      splitLF_31_closure() {
        init();
      }
      splitLF_31_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return idx;}
            node & getP1() { return in1;}
            node & getP2() { return in2;}
            node & getP3() { return in3;}
            node & getP4() { return in4;}
            elemRef & getP5() { return requester;}
      void pup(PUP::er& __p) {
        __p | idx;
        __p | in1;
        __p | in2;
        __p | in3;
        __p | in4;
        __p | requester;
        packClosure(__p);
      }
      virtual ~splitLF_31_closure() {
      }
      PUPable_decl(SINGLE_ARG(splitLF_31_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_chunk::unlockArc1_34_closure : public SDAG::Closure {
            int idx;
            int prio;
            elemRef parentRef;
            elemRef destRef;
            node aNode;
            node bNode;


      unlockArc1_34_closure() {
        init();
      }
      unlockArc1_34_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return idx;}
            int & getP1() { return prio;}
            elemRef & getP2() { return parentRef;}
            elemRef & getP3() { return destRef;}
            node & getP4() { return aNode;}
            node & getP5() { return bNode;}
      void pup(PUP::er& __p) {
        __p | idx;
        __p | prio;
        __p | parentRef;
        __p | destRef;
        __p | aNode;
        __p | bNode;
        packClosure(__p);
      }
      virtual ~unlockArc1_34_closure() {
      }
      PUPable_decl(SINGLE_ARG(unlockArc1_34_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_chunk::unlockArc2_35_closure : public SDAG::Closure {
            int idx;
            int prio;
            elemRef parentRef;
            elemRef destRef;
            node aNode;
            node bNode;


      unlockArc2_35_closure() {
        init();
      }
      unlockArc2_35_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return idx;}
            int & getP1() { return prio;}
            elemRef & getP2() { return parentRef;}
            elemRef & getP3() { return destRef;}
            node & getP4() { return aNode;}
            node & getP5() { return bNode;}
      void pup(PUP::er& __p) {
        __p | idx;
        __p | prio;
        __p | parentRef;
        __p | destRef;
        __p | aNode;
        __p | bNode;
        packClosure(__p);
      }
      virtual ~unlockArc2_35_closure() {
      }
      PUPable_decl(SINGLE_ARG(unlockArc2_35_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_chunk::updateFace_36_closure : public SDAG::Closure {
            int idx;
            int rcid;
            int ridx;


      updateFace_36_closure() {
        init();
      }
      updateFace_36_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return idx;}
            int & getP1() { return rcid;}
            int & getP2() { return ridx;}
      void pup(PUP::er& __p) {
        __p | idx;
        __p | rcid;
        __p | ridx;
        packClosure(__p);
      }
      virtual ~updateFace_36_closure() {
      }
      PUPable_decl(SINGLE_ARG(updateFace_36_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_chunk::updateFace_37_closure : public SDAG::Closure {
            int idx;
            elemRef oldElem;
            elemRef newElem;


      updateFace_37_closure() {
        init();
      }
      updateFace_37_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return idx;}
            elemRef & getP1() { return oldElem;}
            elemRef & getP2() { return newElem;}
      void pup(PUP::er& __p) {
        __p | idx;
        __p | oldElem;
        __p | newElem;
        packClosure(__p);
      }
      virtual ~updateFace_37_closure() {
      }
      PUPable_decl(SINGLE_ARG(updateFace_37_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_chunk::checkRefine_41_closure : public SDAG::Closure {
      

      checkRefine_41_closure() {
        init();
      }
      checkRefine_41_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~checkRefine_41_closure() {
      }
      PUPable_decl(SINGLE_ARG(checkRefine_41_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: message nodeMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_nodeMsg::operator new(size_t s){
  return nodeMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_nodeMsg::operator new(size_t s, int* sz){
  return nodeMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_nodeMsg::operator new(size_t s, int* sz,const int pb){
  return nodeMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_nodeMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return nodeMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_nodeMsg::operator new(size_t s, const int p) {
  return nodeMsg::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_nodeMsg::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return nodeMsg::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_nodeMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_nodeMsg::CMessage_nodeMsg() {
nodeMsg *newmsg = (nodeMsg *)this;
}
void CMessage_nodeMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_nodeMsg::pack(nodeMsg *msg) {
  return (void *) msg;
}
nodeMsg* CMessage_nodeMsg::unpack(void* buf) {
  nodeMsg *msg = (nodeMsg *) buf;
  return msg;
}
int CMessage_nodeMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message nodeVoteMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_nodeVoteMsg::operator new(size_t s){
  return nodeVoteMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_nodeVoteMsg::operator new(size_t s, int* sz){
  return nodeVoteMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_nodeVoteMsg::operator new(size_t s, int* sz,const int pb){
  return nodeVoteMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_nodeVoteMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return nodeVoteMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_nodeVoteMsg::operator new(size_t s, const int p) {
  return nodeVoteMsg::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_nodeVoteMsg::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return nodeVoteMsg::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_nodeVoteMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_nodeVoteMsg::CMessage_nodeVoteMsg() {
nodeVoteMsg *newmsg = (nodeVoteMsg *)this;
}
void CMessage_nodeVoteMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_nodeVoteMsg::pack(nodeVoteMsg *msg) {
  return (void *) msg;
}
nodeVoteMsg* CMessage_nodeVoteMsg::unpack(void* buf) {
  nodeVoteMsg *msg = (nodeVoteMsg *) buf;
  return msg;
}
int CMessage_nodeVoteMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message faceMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_faceMsg::operator new(size_t s){
  return faceMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_faceMsg::operator new(size_t s, int* sz){
  return faceMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_faceMsg::operator new(size_t s, int* sz,const int pb){
  return faceMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_faceMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return faceMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_faceMsg::operator new(size_t s, const int p) {
  return faceMsg::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_faceMsg::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return faceMsg::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_faceMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_faceMsg::CMessage_faceMsg() {
faceMsg *newmsg = (faceMsg *)this;
}
void CMessage_faceMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_faceMsg::pack(faceMsg *msg) {
  return (void *) msg;
}
faceMsg* CMessage_faceMsg::unpack(void* buf) {
  faceMsg *msg = (faceMsg *) buf;
  return msg;
}
int CMessage_faceMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message updateMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_updateMsg::operator new(size_t s){
  return updateMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_updateMsg::operator new(size_t s, int* sz){
  return updateMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_updateMsg::operator new(size_t s, int* sz,const int pb){
  return updateMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_updateMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return updateMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_updateMsg::operator new(size_t s, const int p) {
  return updateMsg::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_updateMsg::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return updateMsg::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_updateMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_updateMsg::CMessage_updateMsg() {
updateMsg *newmsg = (updateMsg *)this;
}
void CMessage_updateMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_updateMsg::pack(updateMsg *msg) {
  return (void *) msg;
}
updateMsg* CMessage_updateMsg::unpack(void* buf) {
  updateMsg *msg = (updateMsg *) buf;
  return msg;
}
int CMessage_updateMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message refMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_refMsg::operator new(size_t s){
  return refMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_refMsg::operator new(size_t s, int* sz){
  return refMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_refMsg::operator new(size_t s, int* sz,const int pb){
  return refMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_refMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return refMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_refMsg::operator new(size_t s, const int p) {
  return refMsg::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_refMsg::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return refMsg::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_refMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_refMsg::CMessage_refMsg() {
refMsg *newmsg = (refMsg *)this;
}
void CMessage_refMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_refMsg::pack(refMsg *msg) {
  return (void *) msg;
}
refMsg* CMessage_refMsg::unpack(void* buf) {
  refMsg *msg = (refMsg *) buf;
  return msg;
}
int CMessage_refMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message intMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_intMsg::operator new(size_t s){
  return intMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_intMsg::operator new(size_t s, int* sz){
  return intMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_intMsg::operator new(size_t s, int* sz,const int pb){
  return intMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_intMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return intMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_intMsg::operator new(size_t s, const int p) {
  return intMsg::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_intMsg::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return intMsg::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_intMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_intMsg::CMessage_intMsg() {
intMsg *newmsg = (intMsg *)this;
}
void CMessage_intMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_intMsg::pack(intMsg *msg) {
  return (void *) msg;
}
intMsg* CMessage_intMsg::unpack(void* buf) {
  intMsg *msg = (intMsg *) buf;
  return msg;
}
int CMessage_intMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message doubleMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_doubleMsg::operator new(size_t s){
  return doubleMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_doubleMsg::operator new(size_t s, int* sz){
  return doubleMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_doubleMsg::operator new(size_t s, int* sz,const int pb){
  return doubleMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_doubleMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return doubleMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_doubleMsg::operator new(size_t s, const int p) {
  return doubleMsg::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_doubleMsg::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return doubleMsg::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_doubleMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_doubleMsg::CMessage_doubleMsg() {
doubleMsg *newmsg = (doubleMsg *)this;
}
void CMessage_doubleMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_doubleMsg::pack(doubleMsg *msg) {
  return (void *) msg;
}
doubleMsg* CMessage_doubleMsg::unpack(void* buf) {
  doubleMsg *msg = (doubleMsg *) buf;
  return msg;
}
int CMessage_doubleMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message meshMsg{
int conn[];
int gid[];
int surface[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_meshMsg::operator new(size_t s){
  return meshMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_meshMsg::operator new(size_t s, int* sz){
  return meshMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_meshMsg::operator new(size_t s, int* sz,const int pb){
  return meshMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_meshMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return meshMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_meshMsg::operator new(size_t s, int sz0, int sz1, int sz2) {
  int sizes[3];
  sizes[0] = sz0;
  sizes[1] = sz1;
  sizes[2] = sz2;
  return meshMsg::alloc(__idx, s, sizes, 0, GroupDepNum{});
}
void *CMessage_meshMsg::operator new(size_t s, int sz0, int sz1, int sz2, const int p) {
  int sizes[3];
  sizes[0] = sz0;
  sizes[1] = sz1;
  sizes[2] = sz2;
  return meshMsg::alloc(__idx, s, sizes, p, GroupDepNum{});
}
void *CMessage_meshMsg::operator new(size_t s, int sz0, int sz1, int sz2, const int p, const GroupDepNum groupDepNum) {
  int sizes[3];
  sizes[0] = sz0;
  sizes[1] = sz1;
  sizes[2] = sz2;
  return meshMsg::alloc(__idx, s, sizes, p, groupDepNum);
}
void* CMessage_meshMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN_DEFAULT(sizeof(int)*sizes[0]);
  if(sizes==0)
    CkpvAccess(_offsets)[2] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[2] = CkpvAccess(_offsets)[1] + ALIGN_DEFAULT(sizeof(int)*sizes[1]);
  if(sizes==0)
    CkpvAccess(_offsets)[3] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[3] = CkpvAccess(_offsets)[2] + ALIGN_DEFAULT(sizeof(int)*sizes[2]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[3], pb, groupDepNum);
}
CMessage_meshMsg::CMessage_meshMsg() {
meshMsg *newmsg = (meshMsg *)this;
  newmsg->conn = (int *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
  newmsg->gid = (int *) ((char *)newmsg + CkpvAccess(_offsets)[1]);
  newmsg->surface = (int *) ((char *)newmsg + CkpvAccess(_offsets)[2]);
}
void CMessage_meshMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_meshMsg::pack(meshMsg *msg) {
  msg->conn = (int *) ((char *)msg->conn - (char *)msg);
  msg->gid = (int *) ((char *)msg->gid - (char *)msg);
  msg->surface = (int *) ((char *)msg->surface - (char *)msg);
  return (void *) msg;
}
meshMsg* CMessage_meshMsg::unpack(void* buf) {
  meshMsg *msg = (meshMsg *) buf;
  msg->conn = (int *) ((size_t)msg->conn + (char *)msg);
  msg->gid = (int *) ((size_t)msg->gid + (char *)msg);
  msg->surface = (int *) ((size_t)msg->surface + (char *)msg);
  return msg;
}
int CMessage_meshMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message coordMsg{
double coords[];
int fixedNodes[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_coordMsg::operator new(size_t s){
  return coordMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_coordMsg::operator new(size_t s, int* sz){
  return coordMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_coordMsg::operator new(size_t s, int* sz,const int pb){
  return coordMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_coordMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return coordMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_coordMsg::operator new(size_t s, int sz0, int sz1) {
  int sizes[2];
  sizes[0] = sz0;
  sizes[1] = sz1;
  return coordMsg::alloc(__idx, s, sizes, 0, GroupDepNum{});
}
void *CMessage_coordMsg::operator new(size_t s, int sz0, int sz1, const int p) {
  int sizes[2];
  sizes[0] = sz0;
  sizes[1] = sz1;
  return coordMsg::alloc(__idx, s, sizes, p, GroupDepNum{});
}
void *CMessage_coordMsg::operator new(size_t s, int sz0, int sz1, const int p, const GroupDepNum groupDepNum) {
  int sizes[2];
  sizes[0] = sz0;
  sizes[1] = sz1;
  return coordMsg::alloc(__idx, s, sizes, p, groupDepNum);
}
void* CMessage_coordMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN_DEFAULT(sizeof(double)*sizes[0]);
  if(sizes==0)
    CkpvAccess(_offsets)[2] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[2] = CkpvAccess(_offsets)[1] + ALIGN_DEFAULT(sizeof(int)*sizes[1]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[2], pb, groupDepNum);
}
CMessage_coordMsg::CMessage_coordMsg() {
coordMsg *newmsg = (coordMsg *)this;
  newmsg->coords = (double *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
  newmsg->fixedNodes = (int *) ((char *)newmsg + CkpvAccess(_offsets)[1]);
}
void CMessage_coordMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_coordMsg::pack(coordMsg *msg) {
  msg->coords = (double *) ((char *)msg->coords - (char *)msg);
  msg->fixedNodes = (int *) ((char *)msg->fixedNodes - (char *)msg);
  return (void *) msg;
}
coordMsg* CMessage_coordMsg::unpack(void* buf) {
  coordMsg *msg = (coordMsg *) buf;
  msg->coords = (double *) ((size_t)msg->coords + (char *)msg);
  msg->fixedNodes = (int *) ((size_t)msg->fixedNodes + (char *)msg);
  return msg;
}
int CMessage_coordMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message threeNodeMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_threeNodeMsg::operator new(size_t s){
  return threeNodeMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_threeNodeMsg::operator new(size_t s, int* sz){
  return threeNodeMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_threeNodeMsg::operator new(size_t s, int* sz,const int pb){
  return threeNodeMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_threeNodeMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return threeNodeMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_threeNodeMsg::operator new(size_t s, const int p) {
  return threeNodeMsg::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_threeNodeMsg::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return threeNodeMsg::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_threeNodeMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_threeNodeMsg::CMessage_threeNodeMsg() {
threeNodeMsg *newmsg = (threeNodeMsg *)this;
}
void CMessage_threeNodeMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_threeNodeMsg::pack(threeNodeMsg *msg) {
  return (void *) msg;
}
threeNodeMsg* CMessage_threeNodeMsg::unpack(void* buf) {
  threeNodeMsg *msg = (threeNodeMsg *) buf;
  return msg;
}
int CMessage_threeNodeMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message splitResponse;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_splitResponse::operator new(size_t s){
  return splitResponse::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_splitResponse::operator new(size_t s, int* sz){
  return splitResponse::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_splitResponse::operator new(size_t s, int* sz,const int pb){
  return splitResponse::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_splitResponse::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return splitResponse::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_splitResponse::operator new(size_t s, const int p) {
  return splitResponse::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_splitResponse::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return splitResponse::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_splitResponse::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_splitResponse::CMessage_splitResponse() {
splitResponse *newmsg = (splitResponse *)this;
}
void CMessage_splitResponse::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_splitResponse::pack(splitResponse *msg) {
  return (void *) msg;
}
splitResponse* CMessage_splitResponse::unpack(void* buf) {
  splitResponse *msg = (splitResponse *) buf;
  return msg;
}
int CMessage_splitResponse::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message flip23request;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_flip23request::operator new(size_t s){
  return flip23request::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_flip23request::operator new(size_t s, int* sz){
  return flip23request::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_flip23request::operator new(size_t s, int* sz,const int pb){
  return flip23request::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_flip23request::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return flip23request::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_flip23request::operator new(size_t s, const int p) {
  return flip23request::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_flip23request::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return flip23request::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_flip23request::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_flip23request::CMessage_flip23request() {
flip23request *newmsg = (flip23request *)this;
}
void CMessage_flip23request::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_flip23request::pack(flip23request *msg) {
  return (void *) msg;
}
flip23request* CMessage_flip23request::unpack(void* buf) {
  flip23request *msg = (flip23request *) buf;
  return msg;
}
int CMessage_flip23request::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message flip23response;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_flip23response::operator new(size_t s){
  return flip23response::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_flip23response::operator new(size_t s, int* sz){
  return flip23response::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_flip23response::operator new(size_t s, int* sz,const int pb){
  return flip23response::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_flip23response::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return flip23response::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_flip23response::operator new(size_t s, const int p) {
  return flip23response::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_flip23response::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return flip23response::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_flip23response::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_flip23response::CMessage_flip23response() {
flip23response *newmsg = (flip23response *)this;
}
void CMessage_flip23response::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_flip23response::pack(flip23response *msg) {
  return (void *) msg;
}
flip23response* CMessage_flip23response::unpack(void* buf) {
  flip23response *msg = (flip23response *) buf;
  return msg;
}
int CMessage_flip23response::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message flip32request;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_flip32request::operator new(size_t s){
  return flip32request::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_flip32request::operator new(size_t s, int* sz){
  return flip32request::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_flip32request::operator new(size_t s, int* sz,const int pb){
  return flip32request::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_flip32request::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return flip32request::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_flip32request::operator new(size_t s, const int p) {
  return flip32request::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_flip32request::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return flip32request::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_flip32request::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_flip32request::CMessage_flip32request() {
flip32request *newmsg = (flip32request *)this;
}
void CMessage_flip32request::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_flip32request::pack(flip32request *msg) {
  return (void *) msg;
}
flip32request* CMessage_flip32request::unpack(void* buf) {
  flip32request *msg = (flip32request *) buf;
  return msg;
}
int CMessage_flip32request::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message flip32response;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_flip32response::operator new(size_t s){
  return flip32response::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_flip32response::operator new(size_t s, int* sz){
  return flip32response::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_flip32response::operator new(size_t s, int* sz,const int pb){
  return flip32response::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_flip32response::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return flip32response::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_flip32response::operator new(size_t s, const int p) {
  return flip32response::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_flip32response::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return flip32response::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_flip32response::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_flip32response::CMessage_flip32response() {
flip32response *newmsg = (flip32response *)this;
}
void CMessage_flip32response::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_flip32response::pack(flip32response *msg) {
  return (void *) msg;
}
flip32response* CMessage_flip32response::unpack(void* buf) {
  flip32response *msg = (flip32response *) buf;
  return msg;
}
int CMessage_flip32response::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message LEsplitMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_LEsplitMsg::operator new(size_t s){
  return LEsplitMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_LEsplitMsg::operator new(size_t s, int* sz){
  return LEsplitMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_LEsplitMsg::operator new(size_t s, int* sz,const int pb){
  return LEsplitMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_LEsplitMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return LEsplitMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_LEsplitMsg::operator new(size_t s, const int p) {
  return LEsplitMsg::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_LEsplitMsg::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return LEsplitMsg::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_LEsplitMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_LEsplitMsg::CMessage_LEsplitMsg() {
LEsplitMsg *newmsg = (LEsplitMsg *)this;
}
void CMessage_LEsplitMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_LEsplitMsg::pack(LEsplitMsg *msg) {
  return (void *) msg;
}
LEsplitMsg* CMessage_LEsplitMsg::unpack(void* buf) {
  LEsplitMsg *msg = (LEsplitMsg *) buf;
  return msg;
}
int CMessage_LEsplitMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message LEsplitResult;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_LEsplitResult::operator new(size_t s){
  return LEsplitResult::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_LEsplitResult::operator new(size_t s, int* sz){
  return LEsplitResult::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_LEsplitResult::operator new(size_t s, int* sz,const int pb){
  return LEsplitResult::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_LEsplitResult::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return LEsplitResult::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_LEsplitResult::operator new(size_t s, const int p) {
  return LEsplitResult::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_LEsplitResult::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return LEsplitResult::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_LEsplitResult::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_LEsplitResult::CMessage_LEsplitResult() {
LEsplitResult *newmsg = (LEsplitResult *)this;
}
void CMessage_LEsplitResult::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_LEsplitResult::pack(LEsplitResult *msg) {
  return (void *) msg;
}
LEsplitResult* CMessage_LEsplitResult::unpack(void* buf) {
  LEsplitResult *msg = (LEsplitResult *) buf;
  return msg;
}
int CMessage_LEsplitResult::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message lockMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_lockMsg::operator new(size_t s){
  return lockMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_lockMsg::operator new(size_t s, int* sz){
  return lockMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_lockMsg::operator new(size_t s, int* sz,const int pb){
  return lockMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_lockMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return lockMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_lockMsg::operator new(size_t s, const int p) {
  return lockMsg::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_lockMsg::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return lockMsg::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_lockMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_lockMsg::CMessage_lockMsg() {
lockMsg *newmsg = (lockMsg *)this;
}
void CMessage_lockMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_lockMsg::pack(lockMsg *msg) {
  return (void *) msg;
}
lockMsg* CMessage_lockMsg::unpack(void* buf) {
  lockMsg *msg = (lockMsg *) buf;
  return msg;
}
int CMessage_lockMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message lockResult;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_lockResult::operator new(size_t s){
  return lockResult::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_lockResult::operator new(size_t s, int* sz){
  return lockResult::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_lockResult::operator new(size_t s, int* sz,const int pb){
  return lockResult::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_lockResult::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return lockResult::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_lockResult::operator new(size_t s, const int p) {
  return lockResult::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_lockResult::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return lockResult::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_lockResult::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_lockResult::CMessage_lockResult() {
lockResult *newmsg = (lockResult *)this;
}
void CMessage_lockResult::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_lockResult::pack(lockResult *msg) {
  return (void *) msg;
}
lockResult* CMessage_lockResult::unpack(void* buf) {
  lockResult *msg = (lockResult *) buf;
  return msg;
}
int CMessage_lockResult::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message lockArcMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_lockArcMsg::operator new(size_t s){
  return lockArcMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_lockArcMsg::operator new(size_t s, int* sz){
  return lockArcMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_lockArcMsg::operator new(size_t s, int* sz,const int pb){
  return lockArcMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_lockArcMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return lockArcMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_lockArcMsg::operator new(size_t s, const int p) {
  return lockArcMsg::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_lockArcMsg::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return lockArcMsg::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_lockArcMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_lockArcMsg::CMessage_lockArcMsg() {
lockArcMsg *newmsg = (lockArcMsg *)this;
}
void CMessage_lockArcMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_lockArcMsg::pack(lockArcMsg *msg) {
  return (void *) msg;
}
lockArcMsg* CMessage_lockArcMsg::unpack(void* buf) {
  lockArcMsg *msg = (lockArcMsg *) buf;
  return msg;
}
int CMessage_lockArcMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly CProxy_chunk mesh;
 */
extern CProxy_chunk mesh;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_mesh(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|mesh;
}
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: array chunk: ArrayElement{
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
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_chunk::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CProxySection_chunk::contribute(CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(sid, userData, fragSize);
}

void CProxySection_chunk::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, userData, fragSize);
}

template <typename T>
void CProxySection_chunk::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, userData, fragSize);
}

void CProxySection_chunk::contribute(CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(sid, cb, userData, fragSize);
}

void CProxySection_chunk::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, cb, userData, fragSize);
}

template <typename T>
void CProxySection_chunk::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, cb, userData, fragSize);
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: chunk(int nChunks);
 */
void CProxyElement_chunk::insert(int nChunks, int onPE, const CkEntryOptions *impl_e_opts)
{ 
   //Marshall: int nChunks
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|nChunks;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|nChunks;
  }
   UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
   ckInsert((CkArrayMessage *)impl_msg,CkIndex_chunk::idx_chunk_marshall1(),onPE);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void refineElement(int idx, double volume);
 */
void CProxyElement_chunk::refineElement(int idx, double volume, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int idx, double volume
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|idx;
    implP|volume;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|idx;
    implP|volume;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_chunk::idx_refineElement_marshall2(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void refineElement(int idx);
 */
void CProxyElement_chunk::refineElement(int idx, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int idx
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|idx;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|idx;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_chunk::idx_refineElement_marshall3(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded void refiningElements();
 */
void CProxyElement_chunk::refiningElements(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_chunk::idx_refiningElements_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void coarsenElement(int idx, double volume);
 */
void CProxyElement_chunk::coarsenElement(int idx, double volume, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int idx, double volume
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|idx;
    implP|volume;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|idx;
    implP|volume;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_chunk::idx_coarsenElement_marshall5(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded void coarseningElements();
 */
void CProxyElement_chunk::coarseningElements(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_chunk::idx_coarseningElements_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded void improveMesh();
 */
void CProxyElement_chunk::improveMesh(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_chunk::idx_improveMesh_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded void relocatePoints();
 */
void CProxyElement_chunk::relocatePoints(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_chunk::idx_relocatePoints_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded void flippingElements();
 */
void CProxyElement_chunk::flippingElements(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_chunk::idx_flippingElements_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync intMsg* lockChunk(int lh, double prio);
 */
intMsg* CProxyElement_chunk::lockChunk(int lh, double prio, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int lh, double prio
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|lh;
    implP|prio;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|lh;
    implP|prio;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  intMsg* impl_msg_typed_ret = (intMsg*)ckSendSync(impl_amsg, CkIndex_chunk::idx_lockChunk_marshall10());
  return impl_msg_typed_ret;
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync void unlockChunk(int lh);
 */
void CProxyElement_chunk::unlockChunk(int lh, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int lh
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|lh;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|lh;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  void *impl_msg_typed_ret = ckSendSync(impl_amsg, CkIndex_chunk::idx_unlockChunk_marshall11());
  CkFreeSysMsg(impl_msg_typed_ret); 
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded sync void print();
 */
void CProxyElement_chunk::print(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  void *impl_msg_typed_ret = ckSendSync(impl_amsg, CkIndex_chunk::idx_print_void());
  CkFreeSysMsg(impl_msg_typed_ret); 
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded sync void out_print();
 */
void CProxyElement_chunk::out_print(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  void *impl_msg_typed_ret = ckSendSync(impl_amsg, CkIndex_chunk::idx_out_print_void());
  CkFreeSysMsg(impl_msg_typed_ret); 
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync nodeMsg* getNode(int n);
 */
nodeMsg* CProxyElement_chunk::getNode(int n, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int n
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|n;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|n;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  nodeMsg* impl_msg_typed_ret = (nodeMsg*)ckSendSync(impl_amsg, CkIndex_chunk::idx_getNode_marshall14());
  return impl_msg_typed_ret;
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync void updateNodeCoord(nodeMsg* impl_msg);
 */
void CProxyElement_chunk::updateNodeCoord(nodeMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  void *impl_msg_typed_ret = ckSendSync(impl_amsg, CkIndex_chunk::idx_updateNodeCoord_nodeMsg());
  CkFreeSysMsg(impl_msg_typed_ret); 
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void relocationVote(nodeVoteMsg* impl_msg);
 */
void CProxyElement_chunk::relocationVote(nodeVoteMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_chunk::idx_relocationVote_nodeVoteMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync void newMesh(meshMsg* impl_msg);
 */
void CProxyElement_chunk::newMesh(meshMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  void *impl_msg_typed_ret = ckSendSync(impl_amsg, CkIndex_chunk::idx_newMesh_meshMsg());
  CkFreeSysMsg(impl_msg_typed_ret); 
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync void updateNodeCoords(coordMsg* impl_msg);
 */
void CProxyElement_chunk::updateNodeCoords(coordMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  void *impl_msg_typed_ret = ckSendSync(impl_amsg, CkIndex_chunk::idx_updateNodeCoords_coordMsg());
  CkFreeSysMsg(impl_msg_typed_ret); 
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync void refine();
 */
void CProxyElement_chunk::refine(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  void *impl_msg_typed_ret = ckSendSync(impl_amsg, CkIndex_chunk::idx_refine_void());
  CkFreeSysMsg(impl_msg_typed_ret); 
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void start();
 */
void CProxyElement_chunk::start(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_chunk::idx_start_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync void improve();
 */
void CProxyElement_chunk::improve(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  void *impl_msg_typed_ret = ckSendSync(impl_amsg, CkIndex_chunk::idx_improve_void());
  CkFreeSysMsg(impl_msg_typed_ret); 
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync void finalizeImprovements();
 */
void CProxyElement_chunk::finalizeImprovements(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  void *impl_msg_typed_ret = ckSendSync(impl_amsg, CkIndex_chunk::idx_finalizeImprovements_void());
  CkFreeSysMsg(impl_msg_typed_ret); 
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void deriveFaces();
 */
void CProxyElement_chunk::deriveFaces(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_chunk::idx_deriveFaces_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded sync doubleMsg* getVolume(intMsg* impl_msg);
 */
doubleMsg* CProxyElement_chunk::getVolume(intMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  doubleMsg* impl_msg_typed_ret = (doubleMsg*)ckSendSync(impl_amsg, CkIndex_chunk::idx_getVolume_intMsg());
  return impl_msg_typed_ret;
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync void setTargetVolume(doubleMsg* impl_msg);
 */
void CProxyElement_chunk::setTargetVolume(doubleMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  void *impl_msg_typed_ret = ckSendSync(impl_amsg, CkIndex_chunk::idx_setTargetVolume_doubleMsg());
  CkFreeSysMsg(impl_msg_typed_ret); 
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync void resetTargetVolume(doubleMsg* impl_msg);
 */
void CProxyElement_chunk::resetTargetVolume(doubleMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  void *impl_msg_typed_ret = ckSendSync(impl_amsg, CkIndex_chunk::idx_resetTargetVolume_doubleMsg());
  CkFreeSysMsg(impl_msg_typed_ret); 
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync refMsg* findRemoteNeighbor(threeNodeMsg* impl_msg);
 */
refMsg* CProxyElement_chunk::findRemoteNeighbor(threeNodeMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  refMsg* impl_msg_typed_ret = (refMsg*)ckSendSync(impl_amsg, CkIndex_chunk::idx_findRemoteNeighbor_threeNodeMsg());
  return impl_msg_typed_ret;
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync intMsg* checkFace(int idx, const elemRef &face);
 */
intMsg* CProxyElement_chunk::checkFace(int idx, const elemRef &face, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int idx, const elemRef &face
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|idx;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<elemRef>::type>::type &)face;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|idx;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<elemRef>::type>::type &)face;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  intMsg* impl_msg_typed_ret = (intMsg*)ckSendSync(impl_amsg, CkIndex_chunk::idx_checkFace_marshall28());
  return impl_msg_typed_ret;
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync intMsg* checkFace(int idx, const node &n1, const node &n2, const node &n3, const elemRef &nbr);
 */
intMsg* CProxyElement_chunk::checkFace(int idx, const node &n1, const node &n2, const node &n3, const elemRef &nbr, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int idx, const node &n1, const node &n2, const node &n3, const elemRef &nbr
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|idx;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<node>::type>::type &)n1;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<node>::type>::type &)n2;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<node>::type>::type &)n3;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<elemRef>::type>::type &)nbr;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|idx;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<node>::type>::type &)n1;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<node>::type>::type &)n2;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<node>::type>::type &)n3;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<elemRef>::type>::type &)nbr;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  intMsg* impl_msg_typed_ret = (intMsg*)ckSendSync(impl_amsg, CkIndex_chunk::idx_checkFace_marshall29());
  return impl_msg_typed_ret;
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync intMsg* lockLF(int idx, const node &n1, const node &n2, const node &n3, const node &n4, const elemRef &myRef, double prio);
 */
intMsg* CProxyElement_chunk::lockLF(int idx, const node &n1, const node &n2, const node &n3, const node &n4, const elemRef &myRef, double prio, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int idx, const node &n1, const node &n2, const node &n3, const node &n4, const elemRef &myRef, double prio
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|idx;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<node>::type>::type &)n1;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<node>::type>::type &)n2;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<node>::type>::type &)n3;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<node>::type>::type &)n4;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<elemRef>::type>::type &)myRef;
    implP|prio;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|idx;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<node>::type>::type &)n1;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<node>::type>::type &)n2;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<node>::type>::type &)n3;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<node>::type>::type &)n4;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<elemRef>::type>::type &)myRef;
    implP|prio;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  intMsg* impl_msg_typed_ret = (intMsg*)ckSendSync(impl_amsg, CkIndex_chunk::idx_lockLF_marshall30());
  return impl_msg_typed_ret;
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync splitResponse* splitLF(int idx, const node &in1, const node &in2, const node &in3, const node &in4, const elemRef &requester);
 */
splitResponse* CProxyElement_chunk::splitLF(int idx, const node &in1, const node &in2, const node &in3, const node &in4, const elemRef &requester, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int idx, const node &in1, const node &in2, const node &in3, const node &in4, const elemRef &requester
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|idx;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<node>::type>::type &)in1;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<node>::type>::type &)in2;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<node>::type>::type &)in3;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<node>::type>::type &)in4;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<elemRef>::type>::type &)requester;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|idx;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<node>::type>::type &)in1;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<node>::type>::type &)in2;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<node>::type>::type &)in3;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<node>::type>::type &)in4;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<elemRef>::type>::type &)requester;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  splitResponse* impl_msg_typed_ret = (splitResponse*)ckSendSync(impl_amsg, CkIndex_chunk::idx_splitLF_marshall31());
  return impl_msg_typed_ret;
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync LEsplitResult* LEsplit(LEsplitMsg* impl_msg);
 */
LEsplitResult* CProxyElement_chunk::LEsplit(LEsplitMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  LEsplitResult* impl_msg_typed_ret = (LEsplitResult*)ckSendSync(impl_amsg, CkIndex_chunk::idx_LEsplit_LEsplitMsg());
  return impl_msg_typed_ret;
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded sync lockResult* lockArc(lockArcMsg* impl_msg);
 */
lockResult* CProxyElement_chunk::lockArc(lockArcMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  lockResult* impl_msg_typed_ret = (lockResult*)ckSendSync(impl_amsg, CkIndex_chunk::idx_lockArc_lockArcMsg());
  return impl_msg_typed_ret;
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync void unlockArc1(int idx, int prio, const elemRef &parentRef, const elemRef &destRef, const node &aNode, const node &bNode);
 */
void CProxyElement_chunk::unlockArc1(int idx, int prio, const elemRef &parentRef, const elemRef &destRef, const node &aNode, const node &bNode, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int idx, int prio, const elemRef &parentRef, const elemRef &destRef, const node &aNode, const node &bNode
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|idx;
    implP|prio;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<elemRef>::type>::type &)parentRef;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<elemRef>::type>::type &)destRef;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<node>::type>::type &)aNode;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<node>::type>::type &)bNode;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|idx;
    implP|prio;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<elemRef>::type>::type &)parentRef;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<elemRef>::type>::type &)destRef;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<node>::type>::type &)aNode;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<node>::type>::type &)bNode;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  void *impl_msg_typed_ret = ckSendSync(impl_amsg, CkIndex_chunk::idx_unlockArc1_marshall34());
  CkFreeSysMsg(impl_msg_typed_ret); 
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync void unlockArc2(int idx, int prio, const elemRef &parentRef, const elemRef &destRef, const node &aNode, const node &bNode);
 */
void CProxyElement_chunk::unlockArc2(int idx, int prio, const elemRef &parentRef, const elemRef &destRef, const node &aNode, const node &bNode, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int idx, int prio, const elemRef &parentRef, const elemRef &destRef, const node &aNode, const node &bNode
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|idx;
    implP|prio;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<elemRef>::type>::type &)parentRef;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<elemRef>::type>::type &)destRef;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<node>::type>::type &)aNode;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<node>::type>::type &)bNode;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|idx;
    implP|prio;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<elemRef>::type>::type &)parentRef;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<elemRef>::type>::type &)destRef;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<node>::type>::type &)aNode;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<node>::type>::type &)bNode;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  void *impl_msg_typed_ret = ckSendSync(impl_amsg, CkIndex_chunk::idx_unlockArc2_marshall35());
  CkFreeSysMsg(impl_msg_typed_ret); 
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync void updateFace(int idx, int rcid, int ridx);
 */
void CProxyElement_chunk::updateFace(int idx, int rcid, int ridx, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int idx, int rcid, int ridx
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|idx;
    implP|rcid;
    implP|ridx;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|idx;
    implP|rcid;
    implP|ridx;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  void *impl_msg_typed_ret = ckSendSync(impl_amsg, CkIndex_chunk::idx_updateFace_marshall36());
  CkFreeSysMsg(impl_msg_typed_ret); 
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void updateFace(int idx, const elemRef &oldElem, const elemRef &newElem);
 */
void CProxyElement_chunk::updateFace(int idx, const elemRef &oldElem, const elemRef &newElem, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int idx, const elemRef &oldElem, const elemRef &newElem
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|idx;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<elemRef>::type>::type &)oldElem;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<elemRef>::type>::type &)newElem;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|idx;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<elemRef>::type>::type &)oldElem;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<elemRef>::type>::type &)newElem;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_chunk::idx_updateFace_marshall37(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync flip23response* flip23remote(flip23request* impl_msg);
 */
flip23response* CProxyElement_chunk::flip23remote(flip23request* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  flip23response* impl_msg_typed_ret = (flip23response*)ckSendSync(impl_amsg, CkIndex_chunk::idx_flip23remote_flip23request());
  return impl_msg_typed_ret;
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync flip32response* flip32remote(flip32request* impl_msg);
 */
flip32response* CProxyElement_chunk::flip32remote(flip32request* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  flip32response* impl_msg_typed_ret = (flip32response*)ckSendSync(impl_amsg, CkIndex_chunk::idx_flip32remote_flip32request());
  return impl_msg_typed_ret;
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync flip32response* remove32element(flip32request* impl_msg);
 */
flip32response* CProxyElement_chunk::remove32element(flip32request* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  flip32response* impl_msg_typed_ret = (flip32response*)ckSendSync(impl_amsg, CkIndex_chunk::idx_remove32element_flip32request());
  return impl_msg_typed_ret;
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void checkRefine();
 */
void CProxyElement_chunk::checkRefine(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_chunk::idx_checkRefine_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: chunk(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: chunk(int nChunks);
 */
CkArrayID CProxy_chunk::ckNew(int nChunks, const CkArrayOptions &opts, const CkEntryOptions *impl_e_opts)
{
  //Marshall: int nChunks
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|nChunks;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|nChunks;
  }
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_chunk::idx_chunk_marshall1(), opts);
  return gId;
}
void CProxy_chunk::ckNew(int nChunks, const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts)
{
  //Marshall: int nChunks
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|nChunks;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|nChunks;
  }
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_chunk::idx_chunk_marshall1(), _ck_array_creation_cb, opts, impl_msg);
}
CkArrayID CProxy_chunk::ckNew(int nChunks, const int s1, const CkEntryOptions *impl_e_opts)
{
  //Marshall: int nChunks
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|nChunks;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|nChunks;
  }
  CkArrayOptions opts(s1);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_chunk::idx_chunk_marshall1(), opts);
  return gId;
}
void CProxy_chunk::ckNew(int nChunks, const int s1, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts)
{
  //Marshall: int nChunks
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|nChunks;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|nChunks;
  }
  CkArrayOptions opts(s1);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_chunk::idx_chunk_marshall1(), _ck_array_creation_cb, opts, impl_msg);
}

// Entry point registration function
int CkIndex_chunk::reg_chunk_marshall1() {
  int epidx = CkRegisterEp("chunk(int nChunks)",
      reinterpret_cast<CkCallFnPtr>(_call_chunk_marshall1), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_chunk_marshall1);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_chunk_marshall1);

  return epidx;
}

void CkIndex_chunk::_call_chunk_marshall1(void* impl_msg, void* impl_obj_void)
{
  chunk* impl_obj = static_cast<chunk*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int nChunks*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> nChunks;
  implP|nChunks;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) chunk(std::move(nChunks.t));
}
int CkIndex_chunk::_callmarshall_chunk_marshall1(char* impl_buf, void* impl_obj_void) {
  chunk* impl_obj = static_cast<chunk*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int nChunks*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> nChunks;
  implP|nChunks;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) chunk(std::move(nChunks.t));
  return implP.size();
}
void CkIndex_chunk::_marshallmessagepup_chunk_marshall1(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int nChunks*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> nChunks;
  implP|nChunks;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("nChunks");
  implDestP|nChunks;
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void refineElement(int idx, double volume);
 */
void CProxy_chunk::refineElement(int idx, double volume, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int idx, double volume
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|idx;
    implP|volume;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|idx;
    implP|volume;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_chunk::idx_refineElement_marshall2(),0);
}

// Entry point registration function
int CkIndex_chunk::reg_refineElement_marshall2() {
  int epidx = CkRegisterEp("refineElement(int idx, double volume)",
      reinterpret_cast<CkCallFnPtr>(_call_refineElement_marshall2), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_refineElement_marshall2);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_refineElement_marshall2);

  return epidx;
}

void CkIndex_chunk::_call_refineElement_marshall2(void* impl_msg, void* impl_obj_void)
{
  chunk* impl_obj = static_cast<chunk*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int idx, double volume*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> idx;
  implP|idx;
  PUP::detail::TemporaryObjectHolder<double> volume;
  implP|volume;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->refineElement(std::move(idx.t), std::move(volume.t));
}
int CkIndex_chunk::_callmarshall_refineElement_marshall2(char* impl_buf, void* impl_obj_void) {
  chunk* impl_obj = static_cast<chunk*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int idx, double volume*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> idx;
  implP|idx;
  PUP::detail::TemporaryObjectHolder<double> volume;
  implP|volume;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->refineElement(std::move(idx.t), std::move(volume.t));
  return implP.size();
}
void CkIndex_chunk::_marshallmessagepup_refineElement_marshall2(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int idx, double volume*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> idx;
  implP|idx;
  PUP::detail::TemporaryObjectHolder<double> volume;
  implP|volume;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("idx");
  implDestP|idx;
  if (implDestP.hasComments()) implDestP.comment("volume");
  implDestP|volume;
}
PUPable_def(SINGLE_ARG(Closure_chunk::refineElement_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void refineElement(int idx);
 */
void CProxy_chunk::refineElement(int idx, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int idx
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|idx;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|idx;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_chunk::idx_refineElement_marshall3(),0);
}

// Entry point registration function
int CkIndex_chunk::reg_refineElement_marshall3() {
  int epidx = CkRegisterEp("refineElement(int idx)",
      reinterpret_cast<CkCallFnPtr>(_call_refineElement_marshall3), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_refineElement_marshall3);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_refineElement_marshall3);

  return epidx;
}

void CkIndex_chunk::_call_refineElement_marshall3(void* impl_msg, void* impl_obj_void)
{
  chunk* impl_obj = static_cast<chunk*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int idx*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> idx;
  implP|idx;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->refineElement(std::move(idx.t));
}
int CkIndex_chunk::_callmarshall_refineElement_marshall3(char* impl_buf, void* impl_obj_void) {
  chunk* impl_obj = static_cast<chunk*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int idx*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> idx;
  implP|idx;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->refineElement(std::move(idx.t));
  return implP.size();
}
void CkIndex_chunk::_marshallmessagepup_refineElement_marshall3(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int idx*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> idx;
  implP|idx;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("idx");
  implDestP|idx;
}
PUPable_def(SINGLE_ARG(Closure_chunk::refineElement_3_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded void refiningElements();
 */
void CProxy_chunk::refiningElements(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_chunk::idx_refiningElements_void(),0);
}

// Entry point registration function
int CkIndex_chunk::reg_refiningElements_void() {
  int epidx = CkRegisterEp("refiningElements()",
      reinterpret_cast<CkCallFnPtr>(_call_refiningElements_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_chunk::_call_refiningElements_void(void* impl_msg, void* impl_obj_void)
{
  chunk* impl_obj = static_cast<chunk*>(impl_obj_void);
  CthThread tid = CthCreate((CthVoidFn)_callthr_refiningElements_void, new CkThrCallArg(impl_msg,impl_obj), 0);
  ((Chare *)impl_obj)->CkAddThreadListeners(tid,impl_msg);
  CthTraceResume(tid);
  CthResume(tid);
}
void CkIndex_chunk::_callthr_refiningElements_void(CkThrCallArg *impl_arg)
{
  void *impl_msg = impl_arg->msg;
  void *impl_obj_void = impl_arg->obj;
  chunk *impl_obj = static_cast<chunk *>(impl_obj_void);
  delete impl_arg;
  impl_obj->refiningElements();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_chunk::refiningElements_4_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void coarsenElement(int idx, double volume);
 */
void CProxy_chunk::coarsenElement(int idx, double volume, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int idx, double volume
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|idx;
    implP|volume;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|idx;
    implP|volume;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_chunk::idx_coarsenElement_marshall5(),0);
}

// Entry point registration function
int CkIndex_chunk::reg_coarsenElement_marshall5() {
  int epidx = CkRegisterEp("coarsenElement(int idx, double volume)",
      reinterpret_cast<CkCallFnPtr>(_call_coarsenElement_marshall5), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_coarsenElement_marshall5);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_coarsenElement_marshall5);

  return epidx;
}

void CkIndex_chunk::_call_coarsenElement_marshall5(void* impl_msg, void* impl_obj_void)
{
  chunk* impl_obj = static_cast<chunk*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int idx, double volume*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> idx;
  implP|idx;
  PUP::detail::TemporaryObjectHolder<double> volume;
  implP|volume;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->coarsenElement(std::move(idx.t), std::move(volume.t));
}
int CkIndex_chunk::_callmarshall_coarsenElement_marshall5(char* impl_buf, void* impl_obj_void) {
  chunk* impl_obj = static_cast<chunk*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int idx, double volume*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> idx;
  implP|idx;
  PUP::detail::TemporaryObjectHolder<double> volume;
  implP|volume;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->coarsenElement(std::move(idx.t), std::move(volume.t));
  return implP.size();
}
void CkIndex_chunk::_marshallmessagepup_coarsenElement_marshall5(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int idx, double volume*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> idx;
  implP|idx;
  PUP::detail::TemporaryObjectHolder<double> volume;
  implP|volume;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("idx");
  implDestP|idx;
  if (implDestP.hasComments()) implDestP.comment("volume");
  implDestP|volume;
}
PUPable_def(SINGLE_ARG(Closure_chunk::coarsenElement_5_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded void coarseningElements();
 */
void CProxy_chunk::coarseningElements(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_chunk::idx_coarseningElements_void(),0);
}

// Entry point registration function
int CkIndex_chunk::reg_coarseningElements_void() {
  int epidx = CkRegisterEp("coarseningElements()",
      reinterpret_cast<CkCallFnPtr>(_call_coarseningElements_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_chunk::_call_coarseningElements_void(void* impl_msg, void* impl_obj_void)
{
  chunk* impl_obj = static_cast<chunk*>(impl_obj_void);
  CthThread tid = CthCreate((CthVoidFn)_callthr_coarseningElements_void, new CkThrCallArg(impl_msg,impl_obj), 0);
  ((Chare *)impl_obj)->CkAddThreadListeners(tid,impl_msg);
  CthTraceResume(tid);
  CthResume(tid);
}
void CkIndex_chunk::_callthr_coarseningElements_void(CkThrCallArg *impl_arg)
{
  void *impl_msg = impl_arg->msg;
  void *impl_obj_void = impl_arg->obj;
  chunk *impl_obj = static_cast<chunk *>(impl_obj_void);
  delete impl_arg;
  impl_obj->coarseningElements();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_chunk::coarseningElements_6_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded void improveMesh();
 */
void CProxy_chunk::improveMesh(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_chunk::idx_improveMesh_void(),0);
}

// Entry point registration function
int CkIndex_chunk::reg_improveMesh_void() {
  int epidx = CkRegisterEp("improveMesh()",
      reinterpret_cast<CkCallFnPtr>(_call_improveMesh_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_chunk::_call_improveMesh_void(void* impl_msg, void* impl_obj_void)
{
  chunk* impl_obj = static_cast<chunk*>(impl_obj_void);
  CthThread tid = CthCreate((CthVoidFn)_callthr_improveMesh_void, new CkThrCallArg(impl_msg,impl_obj), 0);
  ((Chare *)impl_obj)->CkAddThreadListeners(tid,impl_msg);
  CthTraceResume(tid);
  CthResume(tid);
}
void CkIndex_chunk::_callthr_improveMesh_void(CkThrCallArg *impl_arg)
{
  void *impl_msg = impl_arg->msg;
  void *impl_obj_void = impl_arg->obj;
  chunk *impl_obj = static_cast<chunk *>(impl_obj_void);
  delete impl_arg;
  impl_obj->improveMesh();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_chunk::improveMesh_7_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded void relocatePoints();
 */
void CProxy_chunk::relocatePoints(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_chunk::idx_relocatePoints_void(),0);
}

// Entry point registration function
int CkIndex_chunk::reg_relocatePoints_void() {
  int epidx = CkRegisterEp("relocatePoints()",
      reinterpret_cast<CkCallFnPtr>(_call_relocatePoints_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_chunk::_call_relocatePoints_void(void* impl_msg, void* impl_obj_void)
{
  chunk* impl_obj = static_cast<chunk*>(impl_obj_void);
  CthThread tid = CthCreate((CthVoidFn)_callthr_relocatePoints_void, new CkThrCallArg(impl_msg,impl_obj), 0);
  ((Chare *)impl_obj)->CkAddThreadListeners(tid,impl_msg);
  CthTraceResume(tid);
  CthResume(tid);
}
void CkIndex_chunk::_callthr_relocatePoints_void(CkThrCallArg *impl_arg)
{
  void *impl_msg = impl_arg->msg;
  void *impl_obj_void = impl_arg->obj;
  chunk *impl_obj = static_cast<chunk *>(impl_obj_void);
  delete impl_arg;
  impl_obj->relocatePoints();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_chunk::relocatePoints_8_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded void flippingElements();
 */
void CProxy_chunk::flippingElements(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_chunk::idx_flippingElements_void(),0);
}

// Entry point registration function
int CkIndex_chunk::reg_flippingElements_void() {
  int epidx = CkRegisterEp("flippingElements()",
      reinterpret_cast<CkCallFnPtr>(_call_flippingElements_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_chunk::_call_flippingElements_void(void* impl_msg, void* impl_obj_void)
{
  chunk* impl_obj = static_cast<chunk*>(impl_obj_void);
  CthThread tid = CthCreate((CthVoidFn)_callthr_flippingElements_void, new CkThrCallArg(impl_msg,impl_obj), 0);
  ((Chare *)impl_obj)->CkAddThreadListeners(tid,impl_msg);
  CthTraceResume(tid);
  CthResume(tid);
}
void CkIndex_chunk::_callthr_flippingElements_void(CkThrCallArg *impl_arg)
{
  void *impl_msg = impl_arg->msg;
  void *impl_obj_void = impl_arg->obj;
  chunk *impl_obj = static_cast<chunk *>(impl_obj_void);
  delete impl_arg;
  impl_obj->flippingElements();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_chunk::flippingElements_9_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync intMsg* lockChunk(int lh, double prio);
 */

// Entry point registration function
int CkIndex_chunk::reg_lockChunk_marshall10() {
  int epidx = CkRegisterEp("lockChunk(int lh, double prio)",
      reinterpret_cast<CkCallFnPtr>(_call_lockChunk_marshall10), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_lockChunk_marshall10);

  return epidx;
}

void CkIndex_chunk::_call_lockChunk_marshall10(void* impl_msg, void* impl_obj_void)
{
  chunk* impl_obj = static_cast<chunk*>(impl_obj_void);
  int impl_ref = CkGetRefNum(impl_msg), impl_src = CkGetSrcPe(impl_msg);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int lh, double prio*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> lh;
  implP|lh;
  PUP::detail::TemporaryObjectHolder<double> prio;
  implP|prio;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  void *impl_retMsg=(void *)   impl_obj->lockChunk(std::move(lh.t), std::move(prio.t));
  CkSendToFutureID(impl_ref, impl_retMsg, impl_src);
}
void CkIndex_chunk::_marshallmessagepup_lockChunk_marshall10(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int lh, double prio*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> lh;
  implP|lh;
  PUP::detail::TemporaryObjectHolder<double> prio;
  implP|prio;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("lh");
  implDestP|lh;
  if (implDestP.hasComments()) implDestP.comment("prio");
  implDestP|prio;
}
PUPable_def(SINGLE_ARG(Closure_chunk::lockChunk_10_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync void unlockChunk(int lh);
 */

// Entry point registration function
int CkIndex_chunk::reg_unlockChunk_marshall11() {
  int epidx = CkRegisterEp("unlockChunk(int lh)",
      reinterpret_cast<CkCallFnPtr>(_call_unlockChunk_marshall11), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_unlockChunk_marshall11);

  return epidx;
}

void CkIndex_chunk::_call_unlockChunk_marshall11(void* impl_msg, void* impl_obj_void)
{
  chunk* impl_obj = static_cast<chunk*>(impl_obj_void);
  int impl_ref = CkGetRefNum(impl_msg), impl_src = CkGetSrcPe(impl_msg);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int lh*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> lh;
  implP|lh;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  void *impl_retMsg=CkAllocSysMsg();
    impl_obj->unlockChunk(std::move(lh.t));
  CkSendToFutureID(impl_ref, impl_retMsg, impl_src);
}
void CkIndex_chunk::_marshallmessagepup_unlockChunk_marshall11(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int lh*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> lh;
  implP|lh;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("lh");
  implDestP|lh;
}
PUPable_def(SINGLE_ARG(Closure_chunk::unlockChunk_11_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded sync void print();
 */

// Entry point registration function
int CkIndex_chunk::reg_print_void() {
  int epidx = CkRegisterEp("print()",
      reinterpret_cast<CkCallFnPtr>(_call_print_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_chunk::_call_print_void(void* impl_msg, void* impl_obj_void)
{
  chunk* impl_obj = static_cast<chunk*>(impl_obj_void);
  CthThread tid = CthCreate((CthVoidFn)_callthr_print_void, new CkThrCallArg(impl_msg,impl_obj), 0);
  ((Chare *)impl_obj)->CkAddThreadListeners(tid,impl_msg);
  CthTraceResume(tid);
  CthResume(tid);
}
void CkIndex_chunk::_callthr_print_void(CkThrCallArg *impl_arg)
{
  void *impl_msg = impl_arg->msg;
  void *impl_obj_void = impl_arg->obj;
  chunk *impl_obj = static_cast<chunk *>(impl_obj_void);
  delete impl_arg;
  int impl_ref = CkGetRefNum(impl_msg), impl_src = CkGetSrcPe(impl_msg);
  void *impl_retMsg=CkAllocSysMsg();
    impl_obj->print();
  CkSendToFutureID(impl_ref, impl_retMsg, impl_src);
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_chunk::print_12_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded sync void out_print();
 */

// Entry point registration function
int CkIndex_chunk::reg_out_print_void() {
  int epidx = CkRegisterEp("out_print()",
      reinterpret_cast<CkCallFnPtr>(_call_out_print_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_chunk::_call_out_print_void(void* impl_msg, void* impl_obj_void)
{
  chunk* impl_obj = static_cast<chunk*>(impl_obj_void);
  CthThread tid = CthCreate((CthVoidFn)_callthr_out_print_void, new CkThrCallArg(impl_msg,impl_obj), 0);
  ((Chare *)impl_obj)->CkAddThreadListeners(tid,impl_msg);
  CthTraceResume(tid);
  CthResume(tid);
}
void CkIndex_chunk::_callthr_out_print_void(CkThrCallArg *impl_arg)
{
  void *impl_msg = impl_arg->msg;
  void *impl_obj_void = impl_arg->obj;
  chunk *impl_obj = static_cast<chunk *>(impl_obj_void);
  delete impl_arg;
  int impl_ref = CkGetRefNum(impl_msg), impl_src = CkGetSrcPe(impl_msg);
  void *impl_retMsg=CkAllocSysMsg();
    impl_obj->out_print();
  CkSendToFutureID(impl_ref, impl_retMsg, impl_src);
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_chunk::out_print_13_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync nodeMsg* getNode(int n);
 */

// Entry point registration function
int CkIndex_chunk::reg_getNode_marshall14() {
  int epidx = CkRegisterEp("getNode(int n)",
      reinterpret_cast<CkCallFnPtr>(_call_getNode_marshall14), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_getNode_marshall14);

  return epidx;
}

void CkIndex_chunk::_call_getNode_marshall14(void* impl_msg, void* impl_obj_void)
{
  chunk* impl_obj = static_cast<chunk*>(impl_obj_void);
  int impl_ref = CkGetRefNum(impl_msg), impl_src = CkGetSrcPe(impl_msg);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int n*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> n;
  implP|n;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  void *impl_retMsg=(void *)   impl_obj->getNode(std::move(n.t));
  CkSendToFutureID(impl_ref, impl_retMsg, impl_src);
}
void CkIndex_chunk::_marshallmessagepup_getNode_marshall14(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int n*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> n;
  implP|n;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("n");
  implDestP|n;
}
PUPable_def(SINGLE_ARG(Closure_chunk::getNode_14_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync void updateNodeCoord(nodeMsg* impl_msg);
 */

// Entry point registration function
int CkIndex_chunk::reg_updateNodeCoord_nodeMsg() {
  int epidx = CkRegisterEp("updateNodeCoord(nodeMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_updateNodeCoord_nodeMsg), CMessage_nodeMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)nodeMsg::ckDebugPup);
  return epidx;
}

void CkIndex_chunk::_call_updateNodeCoord_nodeMsg(void* impl_msg, void* impl_obj_void)
{
  chunk* impl_obj = static_cast<chunk*>(impl_obj_void);
  int impl_ref = CkGetRefNum(impl_msg), impl_src = CkGetSrcPe(impl_msg);
  void *impl_retMsg=CkAllocSysMsg();
    impl_obj->updateNodeCoord((nodeMsg*)impl_msg);
  CkSendToFutureID(impl_ref, impl_retMsg, impl_src);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void relocationVote(nodeVoteMsg* impl_msg);
 */
void CProxy_chunk::relocationVote(nodeVoteMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_chunk::idx_relocationVote_nodeVoteMsg(),0);
}

// Entry point registration function
int CkIndex_chunk::reg_relocationVote_nodeVoteMsg() {
  int epidx = CkRegisterEp("relocationVote(nodeVoteMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_relocationVote_nodeVoteMsg), CMessage_nodeVoteMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)nodeVoteMsg::ckDebugPup);
  return epidx;
}

void CkIndex_chunk::_call_relocationVote_nodeVoteMsg(void* impl_msg, void* impl_obj_void)
{
  chunk* impl_obj = static_cast<chunk*>(impl_obj_void);
  impl_obj->relocationVote((nodeVoteMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync void newMesh(meshMsg* impl_msg);
 */

// Entry point registration function
int CkIndex_chunk::reg_newMesh_meshMsg() {
  int epidx = CkRegisterEp("newMesh(meshMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_newMesh_meshMsg), CMessage_meshMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)meshMsg::ckDebugPup);
  return epidx;
}

void CkIndex_chunk::_call_newMesh_meshMsg(void* impl_msg, void* impl_obj_void)
{
  chunk* impl_obj = static_cast<chunk*>(impl_obj_void);
  int impl_ref = CkGetRefNum(impl_msg), impl_src = CkGetSrcPe(impl_msg);
  void *impl_retMsg=CkAllocSysMsg();
    impl_obj->newMesh((meshMsg*)impl_msg);
  CkSendToFutureID(impl_ref, impl_retMsg, impl_src);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync void updateNodeCoords(coordMsg* impl_msg);
 */

// Entry point registration function
int CkIndex_chunk::reg_updateNodeCoords_coordMsg() {
  int epidx = CkRegisterEp("updateNodeCoords(coordMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_updateNodeCoords_coordMsg), CMessage_coordMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)coordMsg::ckDebugPup);
  return epidx;
}

void CkIndex_chunk::_call_updateNodeCoords_coordMsg(void* impl_msg, void* impl_obj_void)
{
  chunk* impl_obj = static_cast<chunk*>(impl_obj_void);
  int impl_ref = CkGetRefNum(impl_msg), impl_src = CkGetSrcPe(impl_msg);
  void *impl_retMsg=CkAllocSysMsg();
    impl_obj->updateNodeCoords((coordMsg*)impl_msg);
  CkSendToFutureID(impl_ref, impl_retMsg, impl_src);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync void refine();
 */

// Entry point registration function
int CkIndex_chunk::reg_refine_void() {
  int epidx = CkRegisterEp("refine()",
      reinterpret_cast<CkCallFnPtr>(_call_refine_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_chunk::_call_refine_void(void* impl_msg, void* impl_obj_void)
{
  chunk* impl_obj = static_cast<chunk*>(impl_obj_void);
  int impl_ref = CkGetRefNum(impl_msg), impl_src = CkGetSrcPe(impl_msg);
  void *impl_retMsg=CkAllocSysMsg();
    impl_obj->refine();
  CkSendToFutureID(impl_ref, impl_retMsg, impl_src);
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_chunk::refine_19_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void start();
 */
void CProxy_chunk::start(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_chunk::idx_start_void(),0);
}

// Entry point registration function
int CkIndex_chunk::reg_start_void() {
  int epidx = CkRegisterEp("start()",
      reinterpret_cast<CkCallFnPtr>(_call_start_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_chunk::_call_start_void(void* impl_msg, void* impl_obj_void)
{
  chunk* impl_obj = static_cast<chunk*>(impl_obj_void);
  impl_obj->start();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_chunk::start_20_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync void improve();
 */

// Entry point registration function
int CkIndex_chunk::reg_improve_void() {
  int epidx = CkRegisterEp("improve()",
      reinterpret_cast<CkCallFnPtr>(_call_improve_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_chunk::_call_improve_void(void* impl_msg, void* impl_obj_void)
{
  chunk* impl_obj = static_cast<chunk*>(impl_obj_void);
  int impl_ref = CkGetRefNum(impl_msg), impl_src = CkGetSrcPe(impl_msg);
  void *impl_retMsg=CkAllocSysMsg();
    impl_obj->improve();
  CkSendToFutureID(impl_ref, impl_retMsg, impl_src);
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_chunk::improve_21_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync void finalizeImprovements();
 */

// Entry point registration function
int CkIndex_chunk::reg_finalizeImprovements_void() {
  int epidx = CkRegisterEp("finalizeImprovements()",
      reinterpret_cast<CkCallFnPtr>(_call_finalizeImprovements_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_chunk::_call_finalizeImprovements_void(void* impl_msg, void* impl_obj_void)
{
  chunk* impl_obj = static_cast<chunk*>(impl_obj_void);
  int impl_ref = CkGetRefNum(impl_msg), impl_src = CkGetSrcPe(impl_msg);
  void *impl_retMsg=CkAllocSysMsg();
    impl_obj->finalizeImprovements();
  CkSendToFutureID(impl_ref, impl_retMsg, impl_src);
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_chunk::finalizeImprovements_22_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void deriveFaces();
 */
void CProxy_chunk::deriveFaces(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_chunk::idx_deriveFaces_void(),0);
}

// Entry point registration function
int CkIndex_chunk::reg_deriveFaces_void() {
  int epidx = CkRegisterEp("deriveFaces()",
      reinterpret_cast<CkCallFnPtr>(_call_deriveFaces_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_chunk::_call_deriveFaces_void(void* impl_msg, void* impl_obj_void)
{
  chunk* impl_obj = static_cast<chunk*>(impl_obj_void);
  impl_obj->deriveFaces();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_chunk::deriveFaces_23_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded sync doubleMsg* getVolume(intMsg* impl_msg);
 */

// Entry point registration function
int CkIndex_chunk::reg_getVolume_intMsg() {
  int epidx = CkRegisterEp("getVolume(intMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_getVolume_intMsg), CMessage_intMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)intMsg::ckDebugPup);
  return epidx;
}

void CkIndex_chunk::_call_getVolume_intMsg(void* impl_msg, void* impl_obj_void)
{
  chunk* impl_obj = static_cast<chunk*>(impl_obj_void);
  CthThread tid = CthCreate((CthVoidFn)_callthr_getVolume_intMsg, new CkThrCallArg(impl_msg,impl_obj), 0);
  ((Chare *)impl_obj)->CkAddThreadListeners(tid,impl_msg);
  CthTraceResume(tid);
  CthResume(tid);
}
void CkIndex_chunk::_callthr_getVolume_intMsg(CkThrCallArg *impl_arg)
{
  void *impl_msg = impl_arg->msg;
  void *impl_obj_void = impl_arg->obj;
  chunk *impl_obj = static_cast<chunk *>(impl_obj_void);
  delete impl_arg;
  int impl_ref = CkGetRefNum(impl_msg), impl_src = CkGetSrcPe(impl_msg);
  void *impl_retMsg=(void *)   impl_obj->getVolume((intMsg*)impl_msg);
  CkSendToFutureID(impl_ref, impl_retMsg, impl_src);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync void setTargetVolume(doubleMsg* impl_msg);
 */

// Entry point registration function
int CkIndex_chunk::reg_setTargetVolume_doubleMsg() {
  int epidx = CkRegisterEp("setTargetVolume(doubleMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_setTargetVolume_doubleMsg), CMessage_doubleMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)doubleMsg::ckDebugPup);
  return epidx;
}

void CkIndex_chunk::_call_setTargetVolume_doubleMsg(void* impl_msg, void* impl_obj_void)
{
  chunk* impl_obj = static_cast<chunk*>(impl_obj_void);
  int impl_ref = CkGetRefNum(impl_msg), impl_src = CkGetSrcPe(impl_msg);
  void *impl_retMsg=CkAllocSysMsg();
    impl_obj->setTargetVolume((doubleMsg*)impl_msg);
  CkSendToFutureID(impl_ref, impl_retMsg, impl_src);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync void resetTargetVolume(doubleMsg* impl_msg);
 */

// Entry point registration function
int CkIndex_chunk::reg_resetTargetVolume_doubleMsg() {
  int epidx = CkRegisterEp("resetTargetVolume(doubleMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_resetTargetVolume_doubleMsg), CMessage_doubleMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)doubleMsg::ckDebugPup);
  return epidx;
}

void CkIndex_chunk::_call_resetTargetVolume_doubleMsg(void* impl_msg, void* impl_obj_void)
{
  chunk* impl_obj = static_cast<chunk*>(impl_obj_void);
  int impl_ref = CkGetRefNum(impl_msg), impl_src = CkGetSrcPe(impl_msg);
  void *impl_retMsg=CkAllocSysMsg();
    impl_obj->resetTargetVolume((doubleMsg*)impl_msg);
  CkSendToFutureID(impl_ref, impl_retMsg, impl_src);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync refMsg* findRemoteNeighbor(threeNodeMsg* impl_msg);
 */

// Entry point registration function
int CkIndex_chunk::reg_findRemoteNeighbor_threeNodeMsg() {
  int epidx = CkRegisterEp("findRemoteNeighbor(threeNodeMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_findRemoteNeighbor_threeNodeMsg), CMessage_threeNodeMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)threeNodeMsg::ckDebugPup);
  return epidx;
}

void CkIndex_chunk::_call_findRemoteNeighbor_threeNodeMsg(void* impl_msg, void* impl_obj_void)
{
  chunk* impl_obj = static_cast<chunk*>(impl_obj_void);
  int impl_ref = CkGetRefNum(impl_msg), impl_src = CkGetSrcPe(impl_msg);
  void *impl_retMsg=(void *)   impl_obj->findRemoteNeighbor((threeNodeMsg*)impl_msg);
  CkSendToFutureID(impl_ref, impl_retMsg, impl_src);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync intMsg* checkFace(int idx, const elemRef &face);
 */

// Entry point registration function
int CkIndex_chunk::reg_checkFace_marshall28() {
  int epidx = CkRegisterEp("checkFace(int idx, const elemRef &face)",
      reinterpret_cast<CkCallFnPtr>(_call_checkFace_marshall28), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_checkFace_marshall28);

  return epidx;
}

void CkIndex_chunk::_call_checkFace_marshall28(void* impl_msg, void* impl_obj_void)
{
  chunk* impl_obj = static_cast<chunk*>(impl_obj_void);
  int impl_ref = CkGetRefNum(impl_msg), impl_src = CkGetSrcPe(impl_msg);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int idx, const elemRef &face*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> idx;
  implP|idx;
  PUP::detail::TemporaryObjectHolder<elemRef> face;
  implP|face;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  void *impl_retMsg=(void *)   impl_obj->checkFace(std::move(idx.t), std::move(face.t));
  CkSendToFutureID(impl_ref, impl_retMsg, impl_src);
}
void CkIndex_chunk::_marshallmessagepup_checkFace_marshall28(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int idx, const elemRef &face*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> idx;
  implP|idx;
  PUP::detail::TemporaryObjectHolder<elemRef> face;
  implP|face;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("idx");
  implDestP|idx;
  if (implDestP.hasComments()) implDestP.comment("face");
  implDestP|face;
}
PUPable_def(SINGLE_ARG(Closure_chunk::checkFace_28_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync intMsg* checkFace(int idx, const node &n1, const node &n2, const node &n3, const elemRef &nbr);
 */

// Entry point registration function
int CkIndex_chunk::reg_checkFace_marshall29() {
  int epidx = CkRegisterEp("checkFace(int idx, const node &n1, const node &n2, const node &n3, const elemRef &nbr)",
      reinterpret_cast<CkCallFnPtr>(_call_checkFace_marshall29), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_checkFace_marshall29);

  return epidx;
}

void CkIndex_chunk::_call_checkFace_marshall29(void* impl_msg, void* impl_obj_void)
{
  chunk* impl_obj = static_cast<chunk*>(impl_obj_void);
  int impl_ref = CkGetRefNum(impl_msg), impl_src = CkGetSrcPe(impl_msg);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int idx, const node &n1, const node &n2, const node &n3, const elemRef &nbr*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> idx;
  implP|idx;
  PUP::detail::TemporaryObjectHolder<node> n1;
  implP|n1;
  PUP::detail::TemporaryObjectHolder<node> n2;
  implP|n2;
  PUP::detail::TemporaryObjectHolder<node> n3;
  implP|n3;
  PUP::detail::TemporaryObjectHolder<elemRef> nbr;
  implP|nbr;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  void *impl_retMsg=(void *)   impl_obj->checkFace(std::move(idx.t), std::move(n1.t), std::move(n2.t), std::move(n3.t), std::move(nbr.t));
  CkSendToFutureID(impl_ref, impl_retMsg, impl_src);
}
void CkIndex_chunk::_marshallmessagepup_checkFace_marshall29(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int idx, const node &n1, const node &n2, const node &n3, const elemRef &nbr*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> idx;
  implP|idx;
  PUP::detail::TemporaryObjectHolder<node> n1;
  implP|n1;
  PUP::detail::TemporaryObjectHolder<node> n2;
  implP|n2;
  PUP::detail::TemporaryObjectHolder<node> n3;
  implP|n3;
  PUP::detail::TemporaryObjectHolder<elemRef> nbr;
  implP|nbr;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("idx");
  implDestP|idx;
  if (implDestP.hasComments()) implDestP.comment("n1");
  implDestP|n1;
  if (implDestP.hasComments()) implDestP.comment("n2");
  implDestP|n2;
  if (implDestP.hasComments()) implDestP.comment("n3");
  implDestP|n3;
  if (implDestP.hasComments()) implDestP.comment("nbr");
  implDestP|nbr;
}
PUPable_def(SINGLE_ARG(Closure_chunk::checkFace_29_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync intMsg* lockLF(int idx, const node &n1, const node &n2, const node &n3, const node &n4, const elemRef &myRef, double prio);
 */

// Entry point registration function
int CkIndex_chunk::reg_lockLF_marshall30() {
  int epidx = CkRegisterEp("lockLF(int idx, const node &n1, const node &n2, const node &n3, const node &n4, const elemRef &myRef, double prio)",
      reinterpret_cast<CkCallFnPtr>(_call_lockLF_marshall30), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_lockLF_marshall30);

  return epidx;
}

void CkIndex_chunk::_call_lockLF_marshall30(void* impl_msg, void* impl_obj_void)
{
  chunk* impl_obj = static_cast<chunk*>(impl_obj_void);
  int impl_ref = CkGetRefNum(impl_msg), impl_src = CkGetSrcPe(impl_msg);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int idx, const node &n1, const node &n2, const node &n3, const node &n4, const elemRef &myRef, double prio*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> idx;
  implP|idx;
  PUP::detail::TemporaryObjectHolder<node> n1;
  implP|n1;
  PUP::detail::TemporaryObjectHolder<node> n2;
  implP|n2;
  PUP::detail::TemporaryObjectHolder<node> n3;
  implP|n3;
  PUP::detail::TemporaryObjectHolder<node> n4;
  implP|n4;
  PUP::detail::TemporaryObjectHolder<elemRef> myRef;
  implP|myRef;
  PUP::detail::TemporaryObjectHolder<double> prio;
  implP|prio;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  void *impl_retMsg=(void *)   impl_obj->lockLF(std::move(idx.t), std::move(n1.t), std::move(n2.t), std::move(n3.t), std::move(n4.t), std::move(myRef.t), std::move(prio.t));
  CkSendToFutureID(impl_ref, impl_retMsg, impl_src);
}
void CkIndex_chunk::_marshallmessagepup_lockLF_marshall30(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int idx, const node &n1, const node &n2, const node &n3, const node &n4, const elemRef &myRef, double prio*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> idx;
  implP|idx;
  PUP::detail::TemporaryObjectHolder<node> n1;
  implP|n1;
  PUP::detail::TemporaryObjectHolder<node> n2;
  implP|n2;
  PUP::detail::TemporaryObjectHolder<node> n3;
  implP|n3;
  PUP::detail::TemporaryObjectHolder<node> n4;
  implP|n4;
  PUP::detail::TemporaryObjectHolder<elemRef> myRef;
  implP|myRef;
  PUP::detail::TemporaryObjectHolder<double> prio;
  implP|prio;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("idx");
  implDestP|idx;
  if (implDestP.hasComments()) implDestP.comment("n1");
  implDestP|n1;
  if (implDestP.hasComments()) implDestP.comment("n2");
  implDestP|n2;
  if (implDestP.hasComments()) implDestP.comment("n3");
  implDestP|n3;
  if (implDestP.hasComments()) implDestP.comment("n4");
  implDestP|n4;
  if (implDestP.hasComments()) implDestP.comment("myRef");
  implDestP|myRef;
  if (implDestP.hasComments()) implDestP.comment("prio");
  implDestP|prio;
}
PUPable_def(SINGLE_ARG(Closure_chunk::lockLF_30_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync splitResponse* splitLF(int idx, const node &in1, const node &in2, const node &in3, const node &in4, const elemRef &requester);
 */

// Entry point registration function
int CkIndex_chunk::reg_splitLF_marshall31() {
  int epidx = CkRegisterEp("splitLF(int idx, const node &in1, const node &in2, const node &in3, const node &in4, const elemRef &requester)",
      reinterpret_cast<CkCallFnPtr>(_call_splitLF_marshall31), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_splitLF_marshall31);

  return epidx;
}

void CkIndex_chunk::_call_splitLF_marshall31(void* impl_msg, void* impl_obj_void)
{
  chunk* impl_obj = static_cast<chunk*>(impl_obj_void);
  int impl_ref = CkGetRefNum(impl_msg), impl_src = CkGetSrcPe(impl_msg);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int idx, const node &in1, const node &in2, const node &in3, const node &in4, const elemRef &requester*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> idx;
  implP|idx;
  PUP::detail::TemporaryObjectHolder<node> in1;
  implP|in1;
  PUP::detail::TemporaryObjectHolder<node> in2;
  implP|in2;
  PUP::detail::TemporaryObjectHolder<node> in3;
  implP|in3;
  PUP::detail::TemporaryObjectHolder<node> in4;
  implP|in4;
  PUP::detail::TemporaryObjectHolder<elemRef> requester;
  implP|requester;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  void *impl_retMsg=(void *)   impl_obj->splitLF(std::move(idx.t), std::move(in1.t), std::move(in2.t), std::move(in3.t), std::move(in4.t), std::move(requester.t));
  CkSendToFutureID(impl_ref, impl_retMsg, impl_src);
}
void CkIndex_chunk::_marshallmessagepup_splitLF_marshall31(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int idx, const node &in1, const node &in2, const node &in3, const node &in4, const elemRef &requester*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> idx;
  implP|idx;
  PUP::detail::TemporaryObjectHolder<node> in1;
  implP|in1;
  PUP::detail::TemporaryObjectHolder<node> in2;
  implP|in2;
  PUP::detail::TemporaryObjectHolder<node> in3;
  implP|in3;
  PUP::detail::TemporaryObjectHolder<node> in4;
  implP|in4;
  PUP::detail::TemporaryObjectHolder<elemRef> requester;
  implP|requester;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("idx");
  implDestP|idx;
  if (implDestP.hasComments()) implDestP.comment("in1");
  implDestP|in1;
  if (implDestP.hasComments()) implDestP.comment("in2");
  implDestP|in2;
  if (implDestP.hasComments()) implDestP.comment("in3");
  implDestP|in3;
  if (implDestP.hasComments()) implDestP.comment("in4");
  implDestP|in4;
  if (implDestP.hasComments()) implDestP.comment("requester");
  implDestP|requester;
}
PUPable_def(SINGLE_ARG(Closure_chunk::splitLF_31_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync LEsplitResult* LEsplit(LEsplitMsg* impl_msg);
 */

// Entry point registration function
int CkIndex_chunk::reg_LEsplit_LEsplitMsg() {
  int epidx = CkRegisterEp("LEsplit(LEsplitMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_LEsplit_LEsplitMsg), CMessage_LEsplitMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)LEsplitMsg::ckDebugPup);
  return epidx;
}

void CkIndex_chunk::_call_LEsplit_LEsplitMsg(void* impl_msg, void* impl_obj_void)
{
  chunk* impl_obj = static_cast<chunk*>(impl_obj_void);
  int impl_ref = CkGetRefNum(impl_msg), impl_src = CkGetSrcPe(impl_msg);
  void *impl_retMsg=(void *)   impl_obj->LEsplit((LEsplitMsg*)impl_msg);
  CkSendToFutureID(impl_ref, impl_retMsg, impl_src);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded sync lockResult* lockArc(lockArcMsg* impl_msg);
 */

// Entry point registration function
int CkIndex_chunk::reg_lockArc_lockArcMsg() {
  int epidx = CkRegisterEp("lockArc(lockArcMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_lockArc_lockArcMsg), CMessage_lockArcMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)lockArcMsg::ckDebugPup);
  return epidx;
}

void CkIndex_chunk::_call_lockArc_lockArcMsg(void* impl_msg, void* impl_obj_void)
{
  chunk* impl_obj = static_cast<chunk*>(impl_obj_void);
  CthThread tid = CthCreate((CthVoidFn)_callthr_lockArc_lockArcMsg, new CkThrCallArg(impl_msg,impl_obj), 0);
  ((Chare *)impl_obj)->CkAddThreadListeners(tid,impl_msg);
  CthTraceResume(tid);
  CthResume(tid);
}
void CkIndex_chunk::_callthr_lockArc_lockArcMsg(CkThrCallArg *impl_arg)
{
  void *impl_msg = impl_arg->msg;
  void *impl_obj_void = impl_arg->obj;
  chunk *impl_obj = static_cast<chunk *>(impl_obj_void);
  delete impl_arg;
  int impl_ref = CkGetRefNum(impl_msg), impl_src = CkGetSrcPe(impl_msg);
  void *impl_retMsg=(void *)   impl_obj->lockArc((lockArcMsg*)impl_msg);
  CkSendToFutureID(impl_ref, impl_retMsg, impl_src);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync void unlockArc1(int idx, int prio, const elemRef &parentRef, const elemRef &destRef, const node &aNode, const node &bNode);
 */

// Entry point registration function
int CkIndex_chunk::reg_unlockArc1_marshall34() {
  int epidx = CkRegisterEp("unlockArc1(int idx, int prio, const elemRef &parentRef, const elemRef &destRef, const node &aNode, const node &bNode)",
      reinterpret_cast<CkCallFnPtr>(_call_unlockArc1_marshall34), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_unlockArc1_marshall34);

  return epidx;
}

void CkIndex_chunk::_call_unlockArc1_marshall34(void* impl_msg, void* impl_obj_void)
{
  chunk* impl_obj = static_cast<chunk*>(impl_obj_void);
  int impl_ref = CkGetRefNum(impl_msg), impl_src = CkGetSrcPe(impl_msg);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int idx, int prio, const elemRef &parentRef, const elemRef &destRef, const node &aNode, const node &bNode*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> idx;
  implP|idx;
  PUP::detail::TemporaryObjectHolder<int> prio;
  implP|prio;
  PUP::detail::TemporaryObjectHolder<elemRef> parentRef;
  implP|parentRef;
  PUP::detail::TemporaryObjectHolder<elemRef> destRef;
  implP|destRef;
  PUP::detail::TemporaryObjectHolder<node> aNode;
  implP|aNode;
  PUP::detail::TemporaryObjectHolder<node> bNode;
  implP|bNode;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  void *impl_retMsg=CkAllocSysMsg();
    impl_obj->unlockArc1(std::move(idx.t), std::move(prio.t), std::move(parentRef.t), std::move(destRef.t), std::move(aNode.t), std::move(bNode.t));
  CkSendToFutureID(impl_ref, impl_retMsg, impl_src);
}
void CkIndex_chunk::_marshallmessagepup_unlockArc1_marshall34(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int idx, int prio, const elemRef &parentRef, const elemRef &destRef, const node &aNode, const node &bNode*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> idx;
  implP|idx;
  PUP::detail::TemporaryObjectHolder<int> prio;
  implP|prio;
  PUP::detail::TemporaryObjectHolder<elemRef> parentRef;
  implP|parentRef;
  PUP::detail::TemporaryObjectHolder<elemRef> destRef;
  implP|destRef;
  PUP::detail::TemporaryObjectHolder<node> aNode;
  implP|aNode;
  PUP::detail::TemporaryObjectHolder<node> bNode;
  implP|bNode;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("idx");
  implDestP|idx;
  if (implDestP.hasComments()) implDestP.comment("prio");
  implDestP|prio;
  if (implDestP.hasComments()) implDestP.comment("parentRef");
  implDestP|parentRef;
  if (implDestP.hasComments()) implDestP.comment("destRef");
  implDestP|destRef;
  if (implDestP.hasComments()) implDestP.comment("aNode");
  implDestP|aNode;
  if (implDestP.hasComments()) implDestP.comment("bNode");
  implDestP|bNode;
}
PUPable_def(SINGLE_ARG(Closure_chunk::unlockArc1_34_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync void unlockArc2(int idx, int prio, const elemRef &parentRef, const elemRef &destRef, const node &aNode, const node &bNode);
 */

// Entry point registration function
int CkIndex_chunk::reg_unlockArc2_marshall35() {
  int epidx = CkRegisterEp("unlockArc2(int idx, int prio, const elemRef &parentRef, const elemRef &destRef, const node &aNode, const node &bNode)",
      reinterpret_cast<CkCallFnPtr>(_call_unlockArc2_marshall35), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_unlockArc2_marshall35);

  return epidx;
}

void CkIndex_chunk::_call_unlockArc2_marshall35(void* impl_msg, void* impl_obj_void)
{
  chunk* impl_obj = static_cast<chunk*>(impl_obj_void);
  int impl_ref = CkGetRefNum(impl_msg), impl_src = CkGetSrcPe(impl_msg);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int idx, int prio, const elemRef &parentRef, const elemRef &destRef, const node &aNode, const node &bNode*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> idx;
  implP|idx;
  PUP::detail::TemporaryObjectHolder<int> prio;
  implP|prio;
  PUP::detail::TemporaryObjectHolder<elemRef> parentRef;
  implP|parentRef;
  PUP::detail::TemporaryObjectHolder<elemRef> destRef;
  implP|destRef;
  PUP::detail::TemporaryObjectHolder<node> aNode;
  implP|aNode;
  PUP::detail::TemporaryObjectHolder<node> bNode;
  implP|bNode;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  void *impl_retMsg=CkAllocSysMsg();
    impl_obj->unlockArc2(std::move(idx.t), std::move(prio.t), std::move(parentRef.t), std::move(destRef.t), std::move(aNode.t), std::move(bNode.t));
  CkSendToFutureID(impl_ref, impl_retMsg, impl_src);
}
void CkIndex_chunk::_marshallmessagepup_unlockArc2_marshall35(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int idx, int prio, const elemRef &parentRef, const elemRef &destRef, const node &aNode, const node &bNode*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> idx;
  implP|idx;
  PUP::detail::TemporaryObjectHolder<int> prio;
  implP|prio;
  PUP::detail::TemporaryObjectHolder<elemRef> parentRef;
  implP|parentRef;
  PUP::detail::TemporaryObjectHolder<elemRef> destRef;
  implP|destRef;
  PUP::detail::TemporaryObjectHolder<node> aNode;
  implP|aNode;
  PUP::detail::TemporaryObjectHolder<node> bNode;
  implP|bNode;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("idx");
  implDestP|idx;
  if (implDestP.hasComments()) implDestP.comment("prio");
  implDestP|prio;
  if (implDestP.hasComments()) implDestP.comment("parentRef");
  implDestP|parentRef;
  if (implDestP.hasComments()) implDestP.comment("destRef");
  implDestP|destRef;
  if (implDestP.hasComments()) implDestP.comment("aNode");
  implDestP|aNode;
  if (implDestP.hasComments()) implDestP.comment("bNode");
  implDestP|bNode;
}
PUPable_def(SINGLE_ARG(Closure_chunk::unlockArc2_35_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync void updateFace(int idx, int rcid, int ridx);
 */

// Entry point registration function
int CkIndex_chunk::reg_updateFace_marshall36() {
  int epidx = CkRegisterEp("updateFace(int idx, int rcid, int ridx)",
      reinterpret_cast<CkCallFnPtr>(_call_updateFace_marshall36), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_updateFace_marshall36);

  return epidx;
}

void CkIndex_chunk::_call_updateFace_marshall36(void* impl_msg, void* impl_obj_void)
{
  chunk* impl_obj = static_cast<chunk*>(impl_obj_void);
  int impl_ref = CkGetRefNum(impl_msg), impl_src = CkGetSrcPe(impl_msg);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int idx, int rcid, int ridx*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> idx;
  implP|idx;
  PUP::detail::TemporaryObjectHolder<int> rcid;
  implP|rcid;
  PUP::detail::TemporaryObjectHolder<int> ridx;
  implP|ridx;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  void *impl_retMsg=CkAllocSysMsg();
    impl_obj->updateFace(std::move(idx.t), std::move(rcid.t), std::move(ridx.t));
  CkSendToFutureID(impl_ref, impl_retMsg, impl_src);
}
void CkIndex_chunk::_marshallmessagepup_updateFace_marshall36(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int idx, int rcid, int ridx*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> idx;
  implP|idx;
  PUP::detail::TemporaryObjectHolder<int> rcid;
  implP|rcid;
  PUP::detail::TemporaryObjectHolder<int> ridx;
  implP|ridx;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("idx");
  implDestP|idx;
  if (implDestP.hasComments()) implDestP.comment("rcid");
  implDestP|rcid;
  if (implDestP.hasComments()) implDestP.comment("ridx");
  implDestP|ridx;
}
PUPable_def(SINGLE_ARG(Closure_chunk::updateFace_36_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void updateFace(int idx, const elemRef &oldElem, const elemRef &newElem);
 */
void CProxy_chunk::updateFace(int idx, const elemRef &oldElem, const elemRef &newElem, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int idx, const elemRef &oldElem, const elemRef &newElem
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|idx;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<elemRef>::type>::type &)oldElem;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<elemRef>::type>::type &)newElem;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|idx;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<elemRef>::type>::type &)oldElem;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<elemRef>::type>::type &)newElem;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_chunk::idx_updateFace_marshall37(),0);
}

// Entry point registration function
int CkIndex_chunk::reg_updateFace_marshall37() {
  int epidx = CkRegisterEp("updateFace(int idx, const elemRef &oldElem, const elemRef &newElem)",
      reinterpret_cast<CkCallFnPtr>(_call_updateFace_marshall37), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_updateFace_marshall37);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_updateFace_marshall37);

  return epidx;
}

void CkIndex_chunk::_call_updateFace_marshall37(void* impl_msg, void* impl_obj_void)
{
  chunk* impl_obj = static_cast<chunk*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int idx, const elemRef &oldElem, const elemRef &newElem*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> idx;
  implP|idx;
  PUP::detail::TemporaryObjectHolder<elemRef> oldElem;
  implP|oldElem;
  PUP::detail::TemporaryObjectHolder<elemRef> newElem;
  implP|newElem;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->updateFace(std::move(idx.t), std::move(oldElem.t), std::move(newElem.t));
}
int CkIndex_chunk::_callmarshall_updateFace_marshall37(char* impl_buf, void* impl_obj_void) {
  chunk* impl_obj = static_cast<chunk*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int idx, const elemRef &oldElem, const elemRef &newElem*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> idx;
  implP|idx;
  PUP::detail::TemporaryObjectHolder<elemRef> oldElem;
  implP|oldElem;
  PUP::detail::TemporaryObjectHolder<elemRef> newElem;
  implP|newElem;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->updateFace(std::move(idx.t), std::move(oldElem.t), std::move(newElem.t));
  return implP.size();
}
void CkIndex_chunk::_marshallmessagepup_updateFace_marshall37(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int idx, const elemRef &oldElem, const elemRef &newElem*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> idx;
  implP|idx;
  PUP::detail::TemporaryObjectHolder<elemRef> oldElem;
  implP|oldElem;
  PUP::detail::TemporaryObjectHolder<elemRef> newElem;
  implP|newElem;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("idx");
  implDestP|idx;
  if (implDestP.hasComments()) implDestP.comment("oldElem");
  implDestP|oldElem;
  if (implDestP.hasComments()) implDestP.comment("newElem");
  implDestP|newElem;
}
PUPable_def(SINGLE_ARG(Closure_chunk::updateFace_37_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync flip23response* flip23remote(flip23request* impl_msg);
 */

// Entry point registration function
int CkIndex_chunk::reg_flip23remote_flip23request() {
  int epidx = CkRegisterEp("flip23remote(flip23request* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_flip23remote_flip23request), CMessage_flip23request::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)flip23request::ckDebugPup);
  return epidx;
}

void CkIndex_chunk::_call_flip23remote_flip23request(void* impl_msg, void* impl_obj_void)
{
  chunk* impl_obj = static_cast<chunk*>(impl_obj_void);
  int impl_ref = CkGetRefNum(impl_msg), impl_src = CkGetSrcPe(impl_msg);
  void *impl_retMsg=(void *)   impl_obj->flip23remote((flip23request*)impl_msg);
  CkSendToFutureID(impl_ref, impl_retMsg, impl_src);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync flip32response* flip32remote(flip32request* impl_msg);
 */

// Entry point registration function
int CkIndex_chunk::reg_flip32remote_flip32request() {
  int epidx = CkRegisterEp("flip32remote(flip32request* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_flip32remote_flip32request), CMessage_flip32request::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)flip32request::ckDebugPup);
  return epidx;
}

void CkIndex_chunk::_call_flip32remote_flip32request(void* impl_msg, void* impl_obj_void)
{
  chunk* impl_obj = static_cast<chunk*>(impl_obj_void);
  int impl_ref = CkGetRefNum(impl_msg), impl_src = CkGetSrcPe(impl_msg);
  void *impl_retMsg=(void *)   impl_obj->flip32remote((flip32request*)impl_msg);
  CkSendToFutureID(impl_ref, impl_retMsg, impl_src);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync flip32response* remove32element(flip32request* impl_msg);
 */

// Entry point registration function
int CkIndex_chunk::reg_remove32element_flip32request() {
  int epidx = CkRegisterEp("remove32element(flip32request* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_remove32element_flip32request), CMessage_flip32request::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)flip32request::ckDebugPup);
  return epidx;
}

void CkIndex_chunk::_call_remove32element_flip32request(void* impl_msg, void* impl_obj_void)
{
  chunk* impl_obj = static_cast<chunk*>(impl_obj_void);
  int impl_ref = CkGetRefNum(impl_msg), impl_src = CkGetSrcPe(impl_msg);
  void *impl_retMsg=(void *)   impl_obj->remove32element((flip32request*)impl_msg);
  CkSendToFutureID(impl_ref, impl_retMsg, impl_src);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void checkRefine();
 */
void CProxy_chunk::checkRefine(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_chunk::idx_checkRefine_void(),0);
}

// Entry point registration function
int CkIndex_chunk::reg_checkRefine_void() {
  int epidx = CkRegisterEp("checkRefine()",
      reinterpret_cast<CkCallFnPtr>(_call_checkRefine_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_chunk::_call_checkRefine_void(void* impl_msg, void* impl_obj_void)
{
  chunk* impl_obj = static_cast<chunk*>(impl_obj_void);
  impl_obj->checkRefine();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_chunk::checkRefine_41_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: chunk(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_chunk::reg_chunk_CkMigrateMessage() {
  int epidx = CkRegisterEp("chunk(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_chunk_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_chunk::_call_chunk_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  call_migration_constructor<chunk> c = impl_obj_void;
  c((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: chunk(int nChunks);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void refineElement(int idx, double volume);
 */
void CProxySection_chunk::refineElement(int idx, double volume, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int idx, double volume
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|idx;
    implP|volume;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|idx;
    implP|volume;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_chunk::idx_refineElement_marshall2(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void refineElement(int idx);
 */
void CProxySection_chunk::refineElement(int idx, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int idx
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|idx;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|idx;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_chunk::idx_refineElement_marshall3(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded void refiningElements();
 */
void CProxySection_chunk::refiningElements(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_chunk::idx_refiningElements_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void coarsenElement(int idx, double volume);
 */
void CProxySection_chunk::coarsenElement(int idx, double volume, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int idx, double volume
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|idx;
    implP|volume;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|idx;
    implP|volume;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_chunk::idx_coarsenElement_marshall5(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded void coarseningElements();
 */
void CProxySection_chunk::coarseningElements(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_chunk::idx_coarseningElements_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded void improveMesh();
 */
void CProxySection_chunk::improveMesh(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_chunk::idx_improveMesh_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded void relocatePoints();
 */
void CProxySection_chunk::relocatePoints(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_chunk::idx_relocatePoints_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded void flippingElements();
 */
void CProxySection_chunk::flippingElements(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_chunk::idx_flippingElements_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync intMsg* lockChunk(int lh, double prio);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync void unlockChunk(int lh);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded sync void print();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded sync void out_print();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync nodeMsg* getNode(int n);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync void updateNodeCoord(nodeMsg* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void relocationVote(nodeVoteMsg* impl_msg);
 */
void CProxySection_chunk::relocationVote(nodeVoteMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_chunk::idx_relocationVote_nodeVoteMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync void newMesh(meshMsg* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync void updateNodeCoords(coordMsg* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync void refine();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void start();
 */
void CProxySection_chunk::start(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_chunk::idx_start_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync void improve();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync void finalizeImprovements();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void deriveFaces();
 */
void CProxySection_chunk::deriveFaces(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_chunk::idx_deriveFaces_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded sync doubleMsg* getVolume(intMsg* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync void setTargetVolume(doubleMsg* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync void resetTargetVolume(doubleMsg* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync refMsg* findRemoteNeighbor(threeNodeMsg* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync intMsg* checkFace(int idx, const elemRef &face);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync intMsg* checkFace(int idx, const node &n1, const node &n2, const node &n3, const elemRef &nbr);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync intMsg* lockLF(int idx, const node &n1, const node &n2, const node &n3, const node &n4, const elemRef &myRef, double prio);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync splitResponse* splitLF(int idx, const node &in1, const node &in2, const node &in3, const node &in4, const elemRef &requester);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync LEsplitResult* LEsplit(LEsplitMsg* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded sync lockResult* lockArc(lockArcMsg* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync void unlockArc1(int idx, int prio, const elemRef &parentRef, const elemRef &destRef, const node &aNode, const node &bNode);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync void unlockArc2(int idx, int prio, const elemRef &parentRef, const elemRef &destRef, const node &aNode, const node &bNode);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync void updateFace(int idx, int rcid, int ridx);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void updateFace(int idx, const elemRef &oldElem, const elemRef &newElem);
 */
void CProxySection_chunk::updateFace(int idx, const elemRef &oldElem, const elemRef &newElem, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int idx, const elemRef &oldElem, const elemRef &newElem
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|idx;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<elemRef>::type>::type &)oldElem;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<elemRef>::type>::type &)newElem;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|idx;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<elemRef>::type>::type &)oldElem;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<elemRef>::type>::type &)newElem;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_chunk::idx_updateFace_marshall37(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync flip23response* flip23remote(flip23request* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync flip32response* flip32remote(flip32request* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: sync flip32response* remove32element(flip32request* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void checkRefine();
 */
void CProxySection_chunk::checkRefine(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_chunk::idx_checkRefine_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: chunk(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_chunk::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeArray);
  CkRegisterArrayDimensions(__idx, 1);
  CkRegisterBase(__idx, CkIndex_ArrayElement::__idx);
  // REG: chunk(int nChunks);
  idx_chunk_marshall1();

  // REG: void refineElement(int idx, double volume);
  idx_refineElement_marshall2();

  // REG: void refineElement(int idx);
  idx_refineElement_marshall3();

  // REG: threaded void refiningElements();
  idx_refiningElements_void();

  // REG: void coarsenElement(int idx, double volume);
  idx_coarsenElement_marshall5();

  // REG: threaded void coarseningElements();
  idx_coarseningElements_void();

  // REG: threaded void improveMesh();
  idx_improveMesh_void();

  // REG: threaded void relocatePoints();
  idx_relocatePoints_void();

  // REG: threaded void flippingElements();
  idx_flippingElements_void();

  // REG: sync intMsg* lockChunk(int lh, double prio);
  idx_lockChunk_marshall10();

  // REG: sync void unlockChunk(int lh);
  idx_unlockChunk_marshall11();

  // REG: threaded sync void print();
  idx_print_void();

  // REG: threaded sync void out_print();
  idx_out_print_void();

  // REG: sync nodeMsg* getNode(int n);
  idx_getNode_marshall14();

  // REG: sync void updateNodeCoord(nodeMsg* impl_msg);
  idx_updateNodeCoord_nodeMsg();

  // REG: void relocationVote(nodeVoteMsg* impl_msg);
  idx_relocationVote_nodeVoteMsg();

  // REG: sync void newMesh(meshMsg* impl_msg);
  idx_newMesh_meshMsg();

  // REG: sync void updateNodeCoords(coordMsg* impl_msg);
  idx_updateNodeCoords_coordMsg();

  // REG: sync void refine();
  idx_refine_void();

  // REG: void start();
  idx_start_void();

  // REG: sync void improve();
  idx_improve_void();

  // REG: sync void finalizeImprovements();
  idx_finalizeImprovements_void();

  // REG: void deriveFaces();
  idx_deriveFaces_void();

  // REG: threaded sync doubleMsg* getVolume(intMsg* impl_msg);
  idx_getVolume_intMsg();

  // REG: sync void setTargetVolume(doubleMsg* impl_msg);
  idx_setTargetVolume_doubleMsg();

  // REG: sync void resetTargetVolume(doubleMsg* impl_msg);
  idx_resetTargetVolume_doubleMsg();

  // REG: sync refMsg* findRemoteNeighbor(threeNodeMsg* impl_msg);
  idx_findRemoteNeighbor_threeNodeMsg();

  // REG: sync intMsg* checkFace(int idx, const elemRef &face);
  idx_checkFace_marshall28();

  // REG: sync intMsg* checkFace(int idx, const node &n1, const node &n2, const node &n3, const elemRef &nbr);
  idx_checkFace_marshall29();

  // REG: sync intMsg* lockLF(int idx, const node &n1, const node &n2, const node &n3, const node &n4, const elemRef &myRef, double prio);
  idx_lockLF_marshall30();

  // REG: sync splitResponse* splitLF(int idx, const node &in1, const node &in2, const node &in3, const node &in4, const elemRef &requester);
  idx_splitLF_marshall31();

  // REG: sync LEsplitResult* LEsplit(LEsplitMsg* impl_msg);
  idx_LEsplit_LEsplitMsg();

  // REG: threaded sync lockResult* lockArc(lockArcMsg* impl_msg);
  idx_lockArc_lockArcMsg();

  // REG: sync void unlockArc1(int idx, int prio, const elemRef &parentRef, const elemRef &destRef, const node &aNode, const node &bNode);
  idx_unlockArc1_marshall34();

  // REG: sync void unlockArc2(int idx, int prio, const elemRef &parentRef, const elemRef &destRef, const node &aNode, const node &bNode);
  idx_unlockArc2_marshall35();

  // REG: sync void updateFace(int idx, int rcid, int ridx);
  idx_updateFace_marshall36();

  // REG: void updateFace(int idx, const elemRef &oldElem, const elemRef &newElem);
  idx_updateFace_marshall37();

  // REG: sync flip23response* flip23remote(flip23request* impl_msg);
  idx_flip23remote_flip23request();

  // REG: sync flip32response* flip32remote(flip32request* impl_msg);
  idx_flip32remote_flip32request();

  // REG: sync flip32response* remove32element(flip32request* impl_msg);
  idx_remove32element_flip32request();

  // REG: void checkRefine();
  idx_checkRefine_void();

  // REG: chunk(CkMigrateMessage* impl_msg);
  idx_chunk_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_chunk_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerPMAF(void)
{
  static int _done = 0; if(_done) return; _done = 1;
/* REG: message nodeMsg;
*/
CMessage_nodeMsg::__register("nodeMsg", sizeof(nodeMsg),(CkPackFnPtr) nodeMsg::pack,(CkUnpackFnPtr) nodeMsg::unpack);

/* REG: message nodeVoteMsg;
*/
CMessage_nodeVoteMsg::__register("nodeVoteMsg", sizeof(nodeVoteMsg),(CkPackFnPtr) nodeVoteMsg::pack,(CkUnpackFnPtr) nodeVoteMsg::unpack);

/* REG: message faceMsg;
*/
CMessage_faceMsg::__register("faceMsg", sizeof(faceMsg),(CkPackFnPtr) faceMsg::pack,(CkUnpackFnPtr) faceMsg::unpack);

/* REG: message updateMsg;
*/
CMessage_updateMsg::__register("updateMsg", sizeof(updateMsg),(CkPackFnPtr) updateMsg::pack,(CkUnpackFnPtr) updateMsg::unpack);

/* REG: message refMsg;
*/
CMessage_refMsg::__register("refMsg", sizeof(refMsg),(CkPackFnPtr) refMsg::pack,(CkUnpackFnPtr) refMsg::unpack);

/* REG: message intMsg;
*/
CMessage_intMsg::__register("intMsg", sizeof(intMsg),(CkPackFnPtr) intMsg::pack,(CkUnpackFnPtr) intMsg::unpack);

/* REG: message doubleMsg;
*/
CMessage_doubleMsg::__register("doubleMsg", sizeof(doubleMsg),(CkPackFnPtr) doubleMsg::pack,(CkUnpackFnPtr) doubleMsg::unpack);

/* REG: message meshMsg{
int conn[];
int gid[];
int surface[];
}
;
*/
CMessage_meshMsg::__register("meshMsg", sizeof(meshMsg),(CkPackFnPtr) meshMsg::pack,(CkUnpackFnPtr) meshMsg::unpack);

/* REG: message coordMsg{
double coords[];
int fixedNodes[];
}
;
*/
CMessage_coordMsg::__register("coordMsg", sizeof(coordMsg),(CkPackFnPtr) coordMsg::pack,(CkUnpackFnPtr) coordMsg::unpack);

/* REG: message threeNodeMsg;
*/
CMessage_threeNodeMsg::__register("threeNodeMsg", sizeof(threeNodeMsg),(CkPackFnPtr) threeNodeMsg::pack,(CkUnpackFnPtr) threeNodeMsg::unpack);

/* REG: message splitResponse;
*/
CMessage_splitResponse::__register("splitResponse", sizeof(splitResponse),(CkPackFnPtr) splitResponse::pack,(CkUnpackFnPtr) splitResponse::unpack);

/* REG: message flip23request;
*/
CMessage_flip23request::__register("flip23request", sizeof(flip23request),(CkPackFnPtr) flip23request::pack,(CkUnpackFnPtr) flip23request::unpack);

/* REG: message flip23response;
*/
CMessage_flip23response::__register("flip23response", sizeof(flip23response),(CkPackFnPtr) flip23response::pack,(CkUnpackFnPtr) flip23response::unpack);

/* REG: message flip32request;
*/
CMessage_flip32request::__register("flip32request", sizeof(flip32request),(CkPackFnPtr) flip32request::pack,(CkUnpackFnPtr) flip32request::unpack);

/* REG: message flip32response;
*/
CMessage_flip32response::__register("flip32response", sizeof(flip32response),(CkPackFnPtr) flip32response::pack,(CkUnpackFnPtr) flip32response::unpack);

/* REG: message LEsplitMsg;
*/
CMessage_LEsplitMsg::__register("LEsplitMsg", sizeof(LEsplitMsg),(CkPackFnPtr) LEsplitMsg::pack,(CkUnpackFnPtr) LEsplitMsg::unpack);

/* REG: message LEsplitResult;
*/
CMessage_LEsplitResult::__register("LEsplitResult", sizeof(LEsplitResult),(CkPackFnPtr) LEsplitResult::pack,(CkUnpackFnPtr) LEsplitResult::unpack);

/* REG: message lockMsg;
*/
CMessage_lockMsg::__register("lockMsg", sizeof(lockMsg),(CkPackFnPtr) lockMsg::pack,(CkUnpackFnPtr) lockMsg::unpack);

/* REG: message lockResult;
*/
CMessage_lockResult::__register("lockResult", sizeof(lockResult),(CkPackFnPtr) lockResult::pack,(CkUnpackFnPtr) lockResult::unpack);

/* REG: message lockArcMsg;
*/
CMessage_lockArcMsg::__register("lockArcMsg", sizeof(lockArcMsg),(CkPackFnPtr) lockArcMsg::pack,(CkUnpackFnPtr) lockArcMsg::unpack);

  CkRegisterReadonly("mesh","CProxy_chunk",sizeof(mesh),(void *) &mesh,__xlater_roPup_mesh);

  _registerInitCall(refineChunkInit,1);

/* REG: array chunk: ArrayElement{
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
  CkIndex_chunk::__register("chunk", sizeof(chunk));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_chunk::virtual_pup(PUP::er &p) {
    recursive_pup<chunk>(dynamic_cast<chunk*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
