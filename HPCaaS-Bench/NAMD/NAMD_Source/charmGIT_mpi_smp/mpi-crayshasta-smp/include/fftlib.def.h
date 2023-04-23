
/* ---------------- method closures -------------- */

/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_NormalSlabArray::acceptDataForFFT_2_closure : public SDAG::Closure {
            int numPoints;
            complex *points;
            int posn;
            int info_id;

      CkMarshallMsg* _impl_marshall;
      char* _impl_buf_in;
      int _impl_buf_size;

      acceptDataForFFT_2_closure() {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      acceptDataForFFT_2_closure(CkMigrateMessage*) {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
            int & getP0() { return numPoints;}
            complex *& getP1() { return points;}
            int & getP2() { return posn;}
            int & getP3() { return info_id;}
      void pup(PUP::er& __p) {
        __p | numPoints;
        __p | posn;
        __p | info_id;
        packClosure(__p);
        __p | _impl_buf_size;
        bool hasMsg = (_impl_marshall != 0); __p | hasMsg;
        if (hasMsg) CkPupMessage(__p, (void**)&_impl_marshall);
        else PUParray(__p, _impl_buf_in, _impl_buf_size);
        if (__p.isUnpacking()) {
          char *impl_buf = _impl_marshall ? _impl_marshall->msgBuf : _impl_buf_in;
          PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> numPoints;
  implP|numPoints;
  int impl_off_points, impl_cnt_points;
  implP|impl_off_points;
  implP|impl_cnt_points;
  PUP::detail::TemporaryObjectHolder<int> posn;
  implP|posn;
  PUP::detail::TemporaryObjectHolder<int> info_id;
  implP|info_id;
          impl_buf+=CK_ALIGN(implP.size(),16);
          points = (complex *)(impl_buf+impl_off_points);
        }
      }
      virtual ~acceptDataForFFT_2_closure() {
        if (_impl_marshall) CmiFree(UsrToEnv(_impl_marshall));
      }
      PUPable_decl(SINGLE_ARG(acceptDataForFFT_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_NormalSlabArray::acceptDataForIFFT_3_closure : public SDAG::Closure {
            int numPoints;
            complex *points;
            int posn;
            int info_id;

      CkMarshallMsg* _impl_marshall;
      char* _impl_buf_in;
      int _impl_buf_size;

      acceptDataForIFFT_3_closure() {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      acceptDataForIFFT_3_closure(CkMigrateMessage*) {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
            int & getP0() { return numPoints;}
            complex *& getP1() { return points;}
            int & getP2() { return posn;}
            int & getP3() { return info_id;}
      void pup(PUP::er& __p) {
        __p | numPoints;
        __p | posn;
        __p | info_id;
        packClosure(__p);
        __p | _impl_buf_size;
        bool hasMsg = (_impl_marshall != 0); __p | hasMsg;
        if (hasMsg) CkPupMessage(__p, (void**)&_impl_marshall);
        else PUParray(__p, _impl_buf_in, _impl_buf_size);
        if (__p.isUnpacking()) {
          char *impl_buf = _impl_marshall ? _impl_marshall->msgBuf : _impl_buf_in;
          PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> numPoints;
  implP|numPoints;
  int impl_off_points, impl_cnt_points;
  implP|impl_off_points;
  implP|impl_cnt_points;
  PUP::detail::TemporaryObjectHolder<int> posn;
  implP|posn;
  PUP::detail::TemporaryObjectHolder<int> info_id;
  implP|info_id;
          impl_buf+=CK_ALIGN(implP.size(),16);
          points = (complex *)(impl_buf+impl_off_points);
        }
      }
      virtual ~acceptDataForIFFT_3_closure() {
        if (_impl_marshall) CmiFree(UsrToEnv(_impl_marshall));
      }
      PUPable_decl(SINGLE_ARG(acceptDataForIFFT_3_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY

    struct Closure_NormalRealSlabArray::acceptDataForFFT_1_closure : public SDAG::Closure {
            int numPoints;
            complex *points;
            int posn;
            int info_id;

      CkMarshallMsg* _impl_marshall;
      char* _impl_buf_in;
      int _impl_buf_size;

      acceptDataForFFT_1_closure() {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      acceptDataForFFT_1_closure(CkMigrateMessage*) {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
            int & getP0() { return numPoints;}
            complex *& getP1() { return points;}
            int & getP2() { return posn;}
            int & getP3() { return info_id;}
      void pup(PUP::er& __p) {
        __p | numPoints;
        __p | posn;
        __p | info_id;
        packClosure(__p);
        __p | _impl_buf_size;
        bool hasMsg = (_impl_marshall != 0); __p | hasMsg;
        if (hasMsg) CkPupMessage(__p, (void**)&_impl_marshall);
        else PUParray(__p, _impl_buf_in, _impl_buf_size);
        if (__p.isUnpacking()) {
          char *impl_buf = _impl_marshall ? _impl_marshall->msgBuf : _impl_buf_in;
          PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> numPoints;
  implP|numPoints;
  int impl_off_points, impl_cnt_points;
  implP|impl_off_points;
  implP|impl_cnt_points;
  PUP::detail::TemporaryObjectHolder<int> posn;
  implP|posn;
  PUP::detail::TemporaryObjectHolder<int> info_id;
  implP|info_id;
          impl_buf+=CK_ALIGN(implP.size(),16);
          points = (complex *)(impl_buf+impl_off_points);
        }
      }
      virtual ~acceptDataForFFT_1_closure() {
        if (_impl_marshall) CmiFree(UsrToEnv(_impl_marshall));
      }
      PUPable_decl(SINGLE_ARG(acceptDataForFFT_1_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_NormalRealSlabArray::acceptDataForIFFT_2_closure : public SDAG::Closure {
            int numPoints;
            complex *points;
            int posn;
            int info_id;

      CkMarshallMsg* _impl_marshall;
      char* _impl_buf_in;
      int _impl_buf_size;

      acceptDataForIFFT_2_closure() {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      acceptDataForIFFT_2_closure(CkMigrateMessage*) {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
            int & getP0() { return numPoints;}
            complex *& getP1() { return points;}
            int & getP2() { return posn;}
            int & getP3() { return info_id;}
      void pup(PUP::er& __p) {
        __p | numPoints;
        __p | posn;
        __p | info_id;
        packClosure(__p);
        __p | _impl_buf_size;
        bool hasMsg = (_impl_marshall != 0); __p | hasMsg;
        if (hasMsg) CkPupMessage(__p, (void**)&_impl_marshall);
        else PUParray(__p, _impl_buf_in, _impl_buf_size);
        if (__p.isUnpacking()) {
          char *impl_buf = _impl_marshall ? _impl_marshall->msgBuf : _impl_buf_in;
          PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> numPoints;
  implP|numPoints;
  int impl_off_points, impl_cnt_points;
  implP|impl_off_points;
  implP|impl_cnt_points;
  PUP::detail::TemporaryObjectHolder<int> posn;
  implP|posn;
  PUP::detail::TemporaryObjectHolder<int> info_id;
  implP|info_id;
          impl_buf+=CK_ALIGN(implP.size(),16);
          points = (complex *)(impl_buf+impl_off_points);
        }
      }
      virtual ~acceptDataForIFFT_2_closure() {
        if (_impl_marshall) CmiFree(UsrToEnv(_impl_marshall));
      }
      PUPable_decl(SINGLE_ARG(acceptDataForIFFT_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_NormalLineArray::doFirstFFT_2_closure : public SDAG::Closure {
            int id;
            int direction;


      doFirstFFT_2_closure() {
        init();
      }
      doFirstFFT_2_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return id;}
            int & getP1() { return direction;}
      void pup(PUP::er& __p) {
        __p | id;
        __p | direction;
        packClosure(__p);
      }
      virtual ~doFirstFFT_2_closure() {
      }
      PUPable_decl(SINGLE_ARG(doFirstFFT_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: message SendFFTMsg{
complex data[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_SendFFTMsg::operator new(size_t s){
  return SendFFTMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_SendFFTMsg::operator new(size_t s, int* sz){
  return SendFFTMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_SendFFTMsg::operator new(size_t s, int* sz,const int pb){
  return SendFFTMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_SendFFTMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return SendFFTMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_SendFFTMsg::operator new(size_t s, int sz0) {
  int sizes[1];
  sizes[0] = sz0;
  return SendFFTMsg::alloc(__idx, s, sizes, 0, GroupDepNum{});
}
void *CMessage_SendFFTMsg::operator new(size_t s, int sz0, const int p) {
  int sizes[1];
  sizes[0] = sz0;
  return SendFFTMsg::alloc(__idx, s, sizes, p, GroupDepNum{});
}
void *CMessage_SendFFTMsg::operator new(size_t s, int sz0, const int p, const GroupDepNum groupDepNum) {
  int sizes[1];
  sizes[0] = sz0;
  return SendFFTMsg::alloc(__idx, s, sizes, p, groupDepNum);
}
void* CMessage_SendFFTMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN_DEFAULT(sizeof(complex)*sizes[0]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[1], pb, groupDepNum);
}
CMessage_SendFFTMsg::CMessage_SendFFTMsg() {
SendFFTMsg *newmsg = (SendFFTMsg *)this;
  newmsg->data = (complex *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
}
void CMessage_SendFFTMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_SendFFTMsg::pack(SendFFTMsg *msg) {
  msg->data = (complex *) ((char *)msg->data - (char *)msg);
  return (void *) msg;
}
SendFFTMsg* CMessage_SendFFTMsg::unpack(void* buf) {
  SendFFTMsg *msg = (SendFFTMsg *) buf;
  msg->data = (complex *) ((size_t)msg->data + (char *)msg);
  return msg;
}
int CMessage_SendFFTMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: array SlabArray: ArrayElement;
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_SlabArray::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CProxySection_SlabArray::contribute(CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(sid, userData, fragSize);
}

void CProxySection_SlabArray::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, userData, fragSize);
}

template <typename T>
void CProxySection_SlabArray::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, userData, fragSize);
}

void CProxySection_SlabArray::contribute(CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(sid, cb, userData, fragSize);
}

void CProxySection_SlabArray::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, cb, userData, fragSize);
}

template <typename T>
void CProxySection_SlabArray::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, cb, userData, fragSize);
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_SlabArray::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeArray);
  CkRegisterArrayDimensions(__idx, 1);
  CkRegisterBase(__idx, CkIndex_ArrayElement::__idx);
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: array NormalSlabArray: SlabArray{
NormalSlabArray(const NormalFFTinfo &info, const CProxy_NormalSlabArray &src, const CProxy_NormalSlabArray &dest);
void acceptDataForFFT(int numPoints, const complex *points, int posn, int info_id);
void acceptDataForIFFT(int numPoints, const complex *points, int posn, int info_id);
NormalSlabArray(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_NormalSlabArray::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CProxySection_NormalSlabArray::contribute(CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(sid, userData, fragSize);
}

void CProxySection_NormalSlabArray::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, userData, fragSize);
}

template <typename T>
void CProxySection_NormalSlabArray::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, userData, fragSize);
}

void CProxySection_NormalSlabArray::contribute(CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(sid, cb, userData, fragSize);
}

void CProxySection_NormalSlabArray::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, cb, userData, fragSize);
}

template <typename T>
void CProxySection_NormalSlabArray::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, cb, userData, fragSize);
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: NormalSlabArray(const NormalFFTinfo &info, const CProxy_NormalSlabArray &src, const CProxy_NormalSlabArray &dest);
 */
void CProxyElement_NormalSlabArray::insert(const NormalFFTinfo &info, const CProxy_NormalSlabArray &src, const CProxy_NormalSlabArray &dest, int onPE, const CkEntryOptions *impl_e_opts)
{ 
   //Marshall: const NormalFFTinfo &info, const CProxy_NormalSlabArray &src, const CProxy_NormalSlabArray &dest
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<NormalFFTinfo>::type>::type &)info;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_NormalSlabArray>::type>::type &)src;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_NormalSlabArray>::type>::type &)dest;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<NormalFFTinfo>::type>::type &)info;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_NormalSlabArray>::type>::type &)src;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_NormalSlabArray>::type>::type &)dest;
  }
   UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
   ckInsert((CkArrayMessage *)impl_msg,CkIndex_NormalSlabArray::idx_NormalSlabArray_marshall1(),onPE);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void acceptDataForFFT(int numPoints, const complex *points, int posn, int info_id);
 */
void CProxyElement_NormalSlabArray::acceptDataForFFT(int numPoints, const complex *points, int posn, int info_id, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int numPoints, const complex *points, int posn, int info_id
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_points, impl_cnt_points;
  impl_off_points=impl_off=CK_ALIGN(impl_off,sizeof(complex));
  impl_off+=(impl_cnt_points=sizeof(complex)*(numPoints));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|numPoints;
    implP|impl_off_points;
    implP|impl_cnt_points;
    implP|posn;
    implP|info_id;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|numPoints;
    implP|impl_off_points;
    implP|impl_cnt_points;
    implP|posn;
    implP|info_id;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_points,points,impl_cnt_points);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_NormalSlabArray::idx_acceptDataForFFT_marshall2(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void acceptDataForIFFT(int numPoints, const complex *points, int posn, int info_id);
 */
void CProxyElement_NormalSlabArray::acceptDataForIFFT(int numPoints, const complex *points, int posn, int info_id, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int numPoints, const complex *points, int posn, int info_id
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_points, impl_cnt_points;
  impl_off_points=impl_off=CK_ALIGN(impl_off,sizeof(complex));
  impl_off+=(impl_cnt_points=sizeof(complex)*(numPoints));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|numPoints;
    implP|impl_off_points;
    implP|impl_cnt_points;
    implP|posn;
    implP|info_id;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|numPoints;
    implP|impl_off_points;
    implP|impl_cnt_points;
    implP|posn;
    implP|info_id;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_points,points,impl_cnt_points);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_NormalSlabArray::idx_acceptDataForIFFT_marshall3(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: NormalSlabArray(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: NormalSlabArray(const NormalFFTinfo &info, const CProxy_NormalSlabArray &src, const CProxy_NormalSlabArray &dest);
 */
CkArrayID CProxy_NormalSlabArray::ckNew(const NormalFFTinfo &info, const CProxy_NormalSlabArray &src, const CProxy_NormalSlabArray &dest, const CkArrayOptions &opts, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const NormalFFTinfo &info, const CProxy_NormalSlabArray &src, const CProxy_NormalSlabArray &dest
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<NormalFFTinfo>::type>::type &)info;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_NormalSlabArray>::type>::type &)src;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_NormalSlabArray>::type>::type &)dest;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<NormalFFTinfo>::type>::type &)info;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_NormalSlabArray>::type>::type &)src;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_NormalSlabArray>::type>::type &)dest;
  }
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_NormalSlabArray::idx_NormalSlabArray_marshall1(), opts);
  return gId;
}
void CProxy_NormalSlabArray::ckNew(const NormalFFTinfo &info, const CProxy_NormalSlabArray &src, const CProxy_NormalSlabArray &dest, const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const NormalFFTinfo &info, const CProxy_NormalSlabArray &src, const CProxy_NormalSlabArray &dest
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<NormalFFTinfo>::type>::type &)info;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_NormalSlabArray>::type>::type &)src;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_NormalSlabArray>::type>::type &)dest;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<NormalFFTinfo>::type>::type &)info;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_NormalSlabArray>::type>::type &)src;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_NormalSlabArray>::type>::type &)dest;
  }
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_NormalSlabArray::idx_NormalSlabArray_marshall1(), _ck_array_creation_cb, opts, impl_msg);
}
CkArrayID CProxy_NormalSlabArray::ckNew(const NormalFFTinfo &info, const CProxy_NormalSlabArray &src, const CProxy_NormalSlabArray &dest, const int s1, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const NormalFFTinfo &info, const CProxy_NormalSlabArray &src, const CProxy_NormalSlabArray &dest
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<NormalFFTinfo>::type>::type &)info;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_NormalSlabArray>::type>::type &)src;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_NormalSlabArray>::type>::type &)dest;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<NormalFFTinfo>::type>::type &)info;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_NormalSlabArray>::type>::type &)src;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_NormalSlabArray>::type>::type &)dest;
  }
  CkArrayOptions opts(s1);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_NormalSlabArray::idx_NormalSlabArray_marshall1(), opts);
  return gId;
}
void CProxy_NormalSlabArray::ckNew(const NormalFFTinfo &info, const CProxy_NormalSlabArray &src, const CProxy_NormalSlabArray &dest, const int s1, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const NormalFFTinfo &info, const CProxy_NormalSlabArray &src, const CProxy_NormalSlabArray &dest
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<NormalFFTinfo>::type>::type &)info;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_NormalSlabArray>::type>::type &)src;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_NormalSlabArray>::type>::type &)dest;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<NormalFFTinfo>::type>::type &)info;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_NormalSlabArray>::type>::type &)src;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_NormalSlabArray>::type>::type &)dest;
  }
  CkArrayOptions opts(s1);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_NormalSlabArray::idx_NormalSlabArray_marshall1(), _ck_array_creation_cb, opts, impl_msg);
}

// Entry point registration function
int CkIndex_NormalSlabArray::reg_NormalSlabArray_marshall1() {
  int epidx = CkRegisterEp("NormalSlabArray(const NormalFFTinfo &info, const CProxy_NormalSlabArray &src, const CProxy_NormalSlabArray &dest)",
      reinterpret_cast<CkCallFnPtr>(_call_NormalSlabArray_marshall1), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_NormalSlabArray_marshall1);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_NormalSlabArray_marshall1);

  return epidx;
}

void CkIndex_NormalSlabArray::_call_NormalSlabArray_marshall1(void* impl_msg, void* impl_obj_void)
{
  NormalSlabArray* impl_obj = static_cast<NormalSlabArray*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const NormalFFTinfo &info, const CProxy_NormalSlabArray &src, const CProxy_NormalSlabArray &dest*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<NormalFFTinfo> info;
  implP|info;
  PUP::detail::TemporaryObjectHolder<CProxy_NormalSlabArray> src;
  implP|src;
  PUP::detail::TemporaryObjectHolder<CProxy_NormalSlabArray> dest;
  implP|dest;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) NormalSlabArray(std::move(info.t), std::move(src.t), std::move(dest.t));
}
int CkIndex_NormalSlabArray::_callmarshall_NormalSlabArray_marshall1(char* impl_buf, void* impl_obj_void) {
  NormalSlabArray* impl_obj = static_cast<NormalSlabArray*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const NormalFFTinfo &info, const CProxy_NormalSlabArray &src, const CProxy_NormalSlabArray &dest*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<NormalFFTinfo> info;
  implP|info;
  PUP::detail::TemporaryObjectHolder<CProxy_NormalSlabArray> src;
  implP|src;
  PUP::detail::TemporaryObjectHolder<CProxy_NormalSlabArray> dest;
  implP|dest;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) NormalSlabArray(std::move(info.t), std::move(src.t), std::move(dest.t));
  return implP.size();
}
void CkIndex_NormalSlabArray::_marshallmessagepup_NormalSlabArray_marshall1(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const NormalFFTinfo &info, const CProxy_NormalSlabArray &src, const CProxy_NormalSlabArray &dest*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<NormalFFTinfo> info;
  implP|info;
  PUP::detail::TemporaryObjectHolder<CProxy_NormalSlabArray> src;
  implP|src;
  PUP::detail::TemporaryObjectHolder<CProxy_NormalSlabArray> dest;
  implP|dest;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("info");
  implDestP|info;
  if (implDestP.hasComments()) implDestP.comment("src");
  implDestP|src;
  if (implDestP.hasComments()) implDestP.comment("dest");
  implDestP|dest;
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void acceptDataForFFT(int numPoints, const complex *points, int posn, int info_id);
 */
void CProxy_NormalSlabArray::acceptDataForFFT(int numPoints, const complex *points, int posn, int info_id, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int numPoints, const complex *points, int posn, int info_id
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_points, impl_cnt_points;
  impl_off_points=impl_off=CK_ALIGN(impl_off,sizeof(complex));
  impl_off+=(impl_cnt_points=sizeof(complex)*(numPoints));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|numPoints;
    implP|impl_off_points;
    implP|impl_cnt_points;
    implP|posn;
    implP|info_id;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|numPoints;
    implP|impl_off_points;
    implP|impl_cnt_points;
    implP|posn;
    implP|info_id;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_points,points,impl_cnt_points);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_NormalSlabArray::idx_acceptDataForFFT_marshall2(),0);
}

// Entry point registration function
int CkIndex_NormalSlabArray::reg_acceptDataForFFT_marshall2() {
  int epidx = CkRegisterEp("acceptDataForFFT(int numPoints, const complex *points, int posn, int info_id)",
      reinterpret_cast<CkCallFnPtr>(_call_acceptDataForFFT_marshall2), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_acceptDataForFFT_marshall2);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_acceptDataForFFT_marshall2);

  return epidx;
}

void CkIndex_NormalSlabArray::_call_acceptDataForFFT_marshall2(void* impl_msg, void* impl_obj_void)
{
  NormalSlabArray* impl_obj = static_cast<NormalSlabArray*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int numPoints, const complex *points, int posn, int info_id*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> numPoints;
  implP|numPoints;
  int impl_off_points, impl_cnt_points;
  implP|impl_off_points;
  implP|impl_cnt_points;
  PUP::detail::TemporaryObjectHolder<int> posn;
  implP|posn;
  PUP::detail::TemporaryObjectHolder<int> info_id;
  implP|info_id;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  complex *points=(complex *)(impl_buf+impl_off_points);
  impl_obj->acceptDataForFFT(std::move(numPoints.t), points, std::move(posn.t), std::move(info_id.t));
}
int CkIndex_NormalSlabArray::_callmarshall_acceptDataForFFT_marshall2(char* impl_buf, void* impl_obj_void) {
  NormalSlabArray* impl_obj = static_cast<NormalSlabArray*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int numPoints, const complex *points, int posn, int info_id*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> numPoints;
  implP|numPoints;
  int impl_off_points, impl_cnt_points;
  implP|impl_off_points;
  implP|impl_cnt_points;
  PUP::detail::TemporaryObjectHolder<int> posn;
  implP|posn;
  PUP::detail::TemporaryObjectHolder<int> info_id;
  implP|info_id;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  complex *points=(complex *)(impl_buf+impl_off_points);
  impl_obj->acceptDataForFFT(std::move(numPoints.t), points, std::move(posn.t), std::move(info_id.t));
  return implP.size();
}
void CkIndex_NormalSlabArray::_marshallmessagepup_acceptDataForFFT_marshall2(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int numPoints, const complex *points, int posn, int info_id*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> numPoints;
  implP|numPoints;
  int impl_off_points, impl_cnt_points;
  implP|impl_off_points;
  implP|impl_cnt_points;
  PUP::detail::TemporaryObjectHolder<int> posn;
  implP|posn;
  PUP::detail::TemporaryObjectHolder<int> info_id;
  implP|info_id;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  complex *points=(complex *)(impl_buf+impl_off_points);
  if (implDestP.hasComments()) implDestP.comment("numPoints");
  implDestP|numPoints;
  if (implDestP.hasComments()) implDestP.comment("points");
  implDestP.synchronize(PUP::sync_begin_array);
  for (int impl_i=0;impl_i*(sizeof(*points))<impl_cnt_points;impl_i++) {
    implDestP.synchronize(PUP::sync_item);
    implDestP|points[impl_i];
  }
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("posn");
  implDestP|posn;
  if (implDestP.hasComments()) implDestP.comment("info_id");
  implDestP|info_id;
}
PUPable_def(SINGLE_ARG(Closure_NormalSlabArray::acceptDataForFFT_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void acceptDataForIFFT(int numPoints, const complex *points, int posn, int info_id);
 */
void CProxy_NormalSlabArray::acceptDataForIFFT(int numPoints, const complex *points, int posn, int info_id, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int numPoints, const complex *points, int posn, int info_id
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_points, impl_cnt_points;
  impl_off_points=impl_off=CK_ALIGN(impl_off,sizeof(complex));
  impl_off+=(impl_cnt_points=sizeof(complex)*(numPoints));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|numPoints;
    implP|impl_off_points;
    implP|impl_cnt_points;
    implP|posn;
    implP|info_id;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|numPoints;
    implP|impl_off_points;
    implP|impl_cnt_points;
    implP|posn;
    implP|info_id;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_points,points,impl_cnt_points);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_NormalSlabArray::idx_acceptDataForIFFT_marshall3(),0);
}

// Entry point registration function
int CkIndex_NormalSlabArray::reg_acceptDataForIFFT_marshall3() {
  int epidx = CkRegisterEp("acceptDataForIFFT(int numPoints, const complex *points, int posn, int info_id)",
      reinterpret_cast<CkCallFnPtr>(_call_acceptDataForIFFT_marshall3), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_acceptDataForIFFT_marshall3);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_acceptDataForIFFT_marshall3);

  return epidx;
}

void CkIndex_NormalSlabArray::_call_acceptDataForIFFT_marshall3(void* impl_msg, void* impl_obj_void)
{
  NormalSlabArray* impl_obj = static_cast<NormalSlabArray*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int numPoints, const complex *points, int posn, int info_id*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> numPoints;
  implP|numPoints;
  int impl_off_points, impl_cnt_points;
  implP|impl_off_points;
  implP|impl_cnt_points;
  PUP::detail::TemporaryObjectHolder<int> posn;
  implP|posn;
  PUP::detail::TemporaryObjectHolder<int> info_id;
  implP|info_id;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  complex *points=(complex *)(impl_buf+impl_off_points);
  impl_obj->acceptDataForIFFT(std::move(numPoints.t), points, std::move(posn.t), std::move(info_id.t));
}
int CkIndex_NormalSlabArray::_callmarshall_acceptDataForIFFT_marshall3(char* impl_buf, void* impl_obj_void) {
  NormalSlabArray* impl_obj = static_cast<NormalSlabArray*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int numPoints, const complex *points, int posn, int info_id*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> numPoints;
  implP|numPoints;
  int impl_off_points, impl_cnt_points;
  implP|impl_off_points;
  implP|impl_cnt_points;
  PUP::detail::TemporaryObjectHolder<int> posn;
  implP|posn;
  PUP::detail::TemporaryObjectHolder<int> info_id;
  implP|info_id;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  complex *points=(complex *)(impl_buf+impl_off_points);
  impl_obj->acceptDataForIFFT(std::move(numPoints.t), points, std::move(posn.t), std::move(info_id.t));
  return implP.size();
}
void CkIndex_NormalSlabArray::_marshallmessagepup_acceptDataForIFFT_marshall3(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int numPoints, const complex *points, int posn, int info_id*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> numPoints;
  implP|numPoints;
  int impl_off_points, impl_cnt_points;
  implP|impl_off_points;
  implP|impl_cnt_points;
  PUP::detail::TemporaryObjectHolder<int> posn;
  implP|posn;
  PUP::detail::TemporaryObjectHolder<int> info_id;
  implP|info_id;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  complex *points=(complex *)(impl_buf+impl_off_points);
  if (implDestP.hasComments()) implDestP.comment("numPoints");
  implDestP|numPoints;
  if (implDestP.hasComments()) implDestP.comment("points");
  implDestP.synchronize(PUP::sync_begin_array);
  for (int impl_i=0;impl_i*(sizeof(*points))<impl_cnt_points;impl_i++) {
    implDestP.synchronize(PUP::sync_item);
    implDestP|points[impl_i];
  }
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("posn");
  implDestP|posn;
  if (implDestP.hasComments()) implDestP.comment("info_id");
  implDestP|info_id;
}
PUPable_def(SINGLE_ARG(Closure_NormalSlabArray::acceptDataForIFFT_3_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: NormalSlabArray(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_NormalSlabArray::reg_NormalSlabArray_CkMigrateMessage() {
  int epidx = CkRegisterEp("NormalSlabArray(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_NormalSlabArray_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_NormalSlabArray::_call_NormalSlabArray_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  call_migration_constructor<NormalSlabArray> c = impl_obj_void;
  c((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: NormalSlabArray(const NormalFFTinfo &info, const CProxy_NormalSlabArray &src, const CProxy_NormalSlabArray &dest);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void acceptDataForFFT(int numPoints, const complex *points, int posn, int info_id);
 */
void CProxySection_NormalSlabArray::acceptDataForFFT(int numPoints, const complex *points, int posn, int info_id, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int numPoints, const complex *points, int posn, int info_id
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_points, impl_cnt_points;
  impl_off_points=impl_off=CK_ALIGN(impl_off,sizeof(complex));
  impl_off+=(impl_cnt_points=sizeof(complex)*(numPoints));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|numPoints;
    implP|impl_off_points;
    implP|impl_cnt_points;
    implP|posn;
    implP|info_id;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|numPoints;
    implP|impl_off_points;
    implP|impl_cnt_points;
    implP|posn;
    implP|info_id;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_points,points,impl_cnt_points);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_NormalSlabArray::idx_acceptDataForFFT_marshall2(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void acceptDataForIFFT(int numPoints, const complex *points, int posn, int info_id);
 */
void CProxySection_NormalSlabArray::acceptDataForIFFT(int numPoints, const complex *points, int posn, int info_id, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int numPoints, const complex *points, int posn, int info_id
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_points, impl_cnt_points;
  impl_off_points=impl_off=CK_ALIGN(impl_off,sizeof(complex));
  impl_off+=(impl_cnt_points=sizeof(complex)*(numPoints));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|numPoints;
    implP|impl_off_points;
    implP|impl_cnt_points;
    implP|posn;
    implP|info_id;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|numPoints;
    implP|impl_off_points;
    implP|impl_cnt_points;
    implP|posn;
    implP|info_id;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_points,points,impl_cnt_points);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_NormalSlabArray::idx_acceptDataForIFFT_marshall3(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: NormalSlabArray(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_NormalSlabArray::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeArray);
  CkRegisterArrayDimensions(__idx, 1);
  CkRegisterBase(__idx, CkIndex_SlabArray::__idx);
  // REG: NormalSlabArray(const NormalFFTinfo &info, const CProxy_NormalSlabArray &src, const CProxy_NormalSlabArray &dest);
  idx_NormalSlabArray_marshall1();

  // REG: void acceptDataForFFT(int numPoints, const complex *points, int posn, int info_id);
  idx_acceptDataForFFT_marshall2();

  // REG: void acceptDataForIFFT(int numPoints, const complex *points, int posn, int info_id);
  idx_acceptDataForIFFT_marshall3();

  // REG: NormalSlabArray(CkMigrateMessage* impl_msg);
  idx_NormalSlabArray_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_NormalSlabArray_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: array NormalRealSlabArray: SlabArray{
void acceptDataForFFT(int numPoints, const complex *points, int posn, int info_id);
void acceptDataForIFFT(int numPoints, const complex *points, int posn, int info_id);
NormalRealSlabArray(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_NormalRealSlabArray::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CProxySection_NormalRealSlabArray::contribute(CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(sid, userData, fragSize);
}

void CProxySection_NormalRealSlabArray::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, userData, fragSize);
}

template <typename T>
void CProxySection_NormalRealSlabArray::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, userData, fragSize);
}

void CProxySection_NormalRealSlabArray::contribute(CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(sid, cb, userData, fragSize);
}

void CProxySection_NormalRealSlabArray::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, cb, userData, fragSize);
}

template <typename T>
void CProxySection_NormalRealSlabArray::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, cb, userData, fragSize);
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: void acceptDataForFFT(int numPoints, const complex *points, int posn, int info_id);
 */
void CProxyElement_NormalRealSlabArray::acceptDataForFFT(int numPoints, const complex *points, int posn, int info_id, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int numPoints, const complex *points, int posn, int info_id
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_points, impl_cnt_points;
  impl_off_points=impl_off=CK_ALIGN(impl_off,sizeof(complex));
  impl_off+=(impl_cnt_points=sizeof(complex)*(numPoints));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|numPoints;
    implP|impl_off_points;
    implP|impl_cnt_points;
    implP|posn;
    implP|info_id;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|numPoints;
    implP|impl_off_points;
    implP|impl_cnt_points;
    implP|posn;
    implP|info_id;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_points,points,impl_cnt_points);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_NormalRealSlabArray::idx_acceptDataForFFT_marshall1(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void acceptDataForIFFT(int numPoints, const complex *points, int posn, int info_id);
 */
void CProxyElement_NormalRealSlabArray::acceptDataForIFFT(int numPoints, const complex *points, int posn, int info_id, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int numPoints, const complex *points, int posn, int info_id
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_points, impl_cnt_points;
  impl_off_points=impl_off=CK_ALIGN(impl_off,sizeof(complex));
  impl_off+=(impl_cnt_points=sizeof(complex)*(numPoints));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|numPoints;
    implP|impl_off_points;
    implP|impl_cnt_points;
    implP|posn;
    implP|info_id;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|numPoints;
    implP|impl_off_points;
    implP|impl_cnt_points;
    implP|posn;
    implP|info_id;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_points,points,impl_cnt_points);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_NormalRealSlabArray::idx_acceptDataForIFFT_marshall2(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: NormalRealSlabArray(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void acceptDataForFFT(int numPoints, const complex *points, int posn, int info_id);
 */
void CProxy_NormalRealSlabArray::acceptDataForFFT(int numPoints, const complex *points, int posn, int info_id, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int numPoints, const complex *points, int posn, int info_id
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_points, impl_cnt_points;
  impl_off_points=impl_off=CK_ALIGN(impl_off,sizeof(complex));
  impl_off+=(impl_cnt_points=sizeof(complex)*(numPoints));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|numPoints;
    implP|impl_off_points;
    implP|impl_cnt_points;
    implP|posn;
    implP|info_id;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|numPoints;
    implP|impl_off_points;
    implP|impl_cnt_points;
    implP|posn;
    implP|info_id;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_points,points,impl_cnt_points);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_NormalRealSlabArray::idx_acceptDataForFFT_marshall1(),0);
}

// Entry point registration function
int CkIndex_NormalRealSlabArray::reg_acceptDataForFFT_marshall1() {
  int epidx = CkRegisterEp("acceptDataForFFT(int numPoints, const complex *points, int posn, int info_id)",
      reinterpret_cast<CkCallFnPtr>(_call_acceptDataForFFT_marshall1), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_acceptDataForFFT_marshall1);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_acceptDataForFFT_marshall1);

  return epidx;
}

void CkIndex_NormalRealSlabArray::_call_acceptDataForFFT_marshall1(void* impl_msg, void* impl_obj_void)
{
  NormalRealSlabArray* impl_obj = static_cast<NormalRealSlabArray*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int numPoints, const complex *points, int posn, int info_id*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> numPoints;
  implP|numPoints;
  int impl_off_points, impl_cnt_points;
  implP|impl_off_points;
  implP|impl_cnt_points;
  PUP::detail::TemporaryObjectHolder<int> posn;
  implP|posn;
  PUP::detail::TemporaryObjectHolder<int> info_id;
  implP|info_id;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  complex *points=(complex *)(impl_buf+impl_off_points);
  impl_obj->acceptDataForFFT(std::move(numPoints.t), points, std::move(posn.t), std::move(info_id.t));
}
int CkIndex_NormalRealSlabArray::_callmarshall_acceptDataForFFT_marshall1(char* impl_buf, void* impl_obj_void) {
  NormalRealSlabArray* impl_obj = static_cast<NormalRealSlabArray*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int numPoints, const complex *points, int posn, int info_id*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> numPoints;
  implP|numPoints;
  int impl_off_points, impl_cnt_points;
  implP|impl_off_points;
  implP|impl_cnt_points;
  PUP::detail::TemporaryObjectHolder<int> posn;
  implP|posn;
  PUP::detail::TemporaryObjectHolder<int> info_id;
  implP|info_id;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  complex *points=(complex *)(impl_buf+impl_off_points);
  impl_obj->acceptDataForFFT(std::move(numPoints.t), points, std::move(posn.t), std::move(info_id.t));
  return implP.size();
}
void CkIndex_NormalRealSlabArray::_marshallmessagepup_acceptDataForFFT_marshall1(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int numPoints, const complex *points, int posn, int info_id*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> numPoints;
  implP|numPoints;
  int impl_off_points, impl_cnt_points;
  implP|impl_off_points;
  implP|impl_cnt_points;
  PUP::detail::TemporaryObjectHolder<int> posn;
  implP|posn;
  PUP::detail::TemporaryObjectHolder<int> info_id;
  implP|info_id;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  complex *points=(complex *)(impl_buf+impl_off_points);
  if (implDestP.hasComments()) implDestP.comment("numPoints");
  implDestP|numPoints;
  if (implDestP.hasComments()) implDestP.comment("points");
  implDestP.synchronize(PUP::sync_begin_array);
  for (int impl_i=0;impl_i*(sizeof(*points))<impl_cnt_points;impl_i++) {
    implDestP.synchronize(PUP::sync_item);
    implDestP|points[impl_i];
  }
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("posn");
  implDestP|posn;
  if (implDestP.hasComments()) implDestP.comment("info_id");
  implDestP|info_id;
}
PUPable_def(SINGLE_ARG(Closure_NormalRealSlabArray::acceptDataForFFT_1_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void acceptDataForIFFT(int numPoints, const complex *points, int posn, int info_id);
 */
void CProxy_NormalRealSlabArray::acceptDataForIFFT(int numPoints, const complex *points, int posn, int info_id, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int numPoints, const complex *points, int posn, int info_id
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_points, impl_cnt_points;
  impl_off_points=impl_off=CK_ALIGN(impl_off,sizeof(complex));
  impl_off+=(impl_cnt_points=sizeof(complex)*(numPoints));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|numPoints;
    implP|impl_off_points;
    implP|impl_cnt_points;
    implP|posn;
    implP|info_id;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|numPoints;
    implP|impl_off_points;
    implP|impl_cnt_points;
    implP|posn;
    implP|info_id;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_points,points,impl_cnt_points);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_NormalRealSlabArray::idx_acceptDataForIFFT_marshall2(),0);
}

// Entry point registration function
int CkIndex_NormalRealSlabArray::reg_acceptDataForIFFT_marshall2() {
  int epidx = CkRegisterEp("acceptDataForIFFT(int numPoints, const complex *points, int posn, int info_id)",
      reinterpret_cast<CkCallFnPtr>(_call_acceptDataForIFFT_marshall2), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_acceptDataForIFFT_marshall2);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_acceptDataForIFFT_marshall2);

  return epidx;
}

void CkIndex_NormalRealSlabArray::_call_acceptDataForIFFT_marshall2(void* impl_msg, void* impl_obj_void)
{
  NormalRealSlabArray* impl_obj = static_cast<NormalRealSlabArray*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int numPoints, const complex *points, int posn, int info_id*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> numPoints;
  implP|numPoints;
  int impl_off_points, impl_cnt_points;
  implP|impl_off_points;
  implP|impl_cnt_points;
  PUP::detail::TemporaryObjectHolder<int> posn;
  implP|posn;
  PUP::detail::TemporaryObjectHolder<int> info_id;
  implP|info_id;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  complex *points=(complex *)(impl_buf+impl_off_points);
  impl_obj->acceptDataForIFFT(std::move(numPoints.t), points, std::move(posn.t), std::move(info_id.t));
}
int CkIndex_NormalRealSlabArray::_callmarshall_acceptDataForIFFT_marshall2(char* impl_buf, void* impl_obj_void) {
  NormalRealSlabArray* impl_obj = static_cast<NormalRealSlabArray*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int numPoints, const complex *points, int posn, int info_id*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> numPoints;
  implP|numPoints;
  int impl_off_points, impl_cnt_points;
  implP|impl_off_points;
  implP|impl_cnt_points;
  PUP::detail::TemporaryObjectHolder<int> posn;
  implP|posn;
  PUP::detail::TemporaryObjectHolder<int> info_id;
  implP|info_id;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  complex *points=(complex *)(impl_buf+impl_off_points);
  impl_obj->acceptDataForIFFT(std::move(numPoints.t), points, std::move(posn.t), std::move(info_id.t));
  return implP.size();
}
void CkIndex_NormalRealSlabArray::_marshallmessagepup_acceptDataForIFFT_marshall2(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int numPoints, const complex *points, int posn, int info_id*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> numPoints;
  implP|numPoints;
  int impl_off_points, impl_cnt_points;
  implP|impl_off_points;
  implP|impl_cnt_points;
  PUP::detail::TemporaryObjectHolder<int> posn;
  implP|posn;
  PUP::detail::TemporaryObjectHolder<int> info_id;
  implP|info_id;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  complex *points=(complex *)(impl_buf+impl_off_points);
  if (implDestP.hasComments()) implDestP.comment("numPoints");
  implDestP|numPoints;
  if (implDestP.hasComments()) implDestP.comment("points");
  implDestP.synchronize(PUP::sync_begin_array);
  for (int impl_i=0;impl_i*(sizeof(*points))<impl_cnt_points;impl_i++) {
    implDestP.synchronize(PUP::sync_item);
    implDestP|points[impl_i];
  }
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("posn");
  implDestP|posn;
  if (implDestP.hasComments()) implDestP.comment("info_id");
  implDestP|info_id;
}
PUPable_def(SINGLE_ARG(Closure_NormalRealSlabArray::acceptDataForIFFT_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: NormalRealSlabArray(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_NormalRealSlabArray::reg_NormalRealSlabArray_CkMigrateMessage() {
  int epidx = CkRegisterEp("NormalRealSlabArray(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_NormalRealSlabArray_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_NormalRealSlabArray::_call_NormalRealSlabArray_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  call_migration_constructor<NormalRealSlabArray> c = impl_obj_void;
  c((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void acceptDataForFFT(int numPoints, const complex *points, int posn, int info_id);
 */
void CProxySection_NormalRealSlabArray::acceptDataForFFT(int numPoints, const complex *points, int posn, int info_id, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int numPoints, const complex *points, int posn, int info_id
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_points, impl_cnt_points;
  impl_off_points=impl_off=CK_ALIGN(impl_off,sizeof(complex));
  impl_off+=(impl_cnt_points=sizeof(complex)*(numPoints));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|numPoints;
    implP|impl_off_points;
    implP|impl_cnt_points;
    implP|posn;
    implP|info_id;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|numPoints;
    implP|impl_off_points;
    implP|impl_cnt_points;
    implP|posn;
    implP|info_id;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_points,points,impl_cnt_points);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_NormalRealSlabArray::idx_acceptDataForFFT_marshall1(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void acceptDataForIFFT(int numPoints, const complex *points, int posn, int info_id);
 */
void CProxySection_NormalRealSlabArray::acceptDataForIFFT(int numPoints, const complex *points, int posn, int info_id, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int numPoints, const complex *points, int posn, int info_id
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_points, impl_cnt_points;
  impl_off_points=impl_off=CK_ALIGN(impl_off,sizeof(complex));
  impl_off+=(impl_cnt_points=sizeof(complex)*(numPoints));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|numPoints;
    implP|impl_off_points;
    implP|impl_cnt_points;
    implP|posn;
    implP|info_id;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|numPoints;
    implP|impl_off_points;
    implP|impl_cnt_points;
    implP|posn;
    implP|info_id;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_points,points,impl_cnt_points);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_NormalRealSlabArray::idx_acceptDataForIFFT_marshall2(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: NormalRealSlabArray(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_NormalRealSlabArray::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeArray);
  CkRegisterArrayDimensions(__idx, 1);
  CkRegisterBase(__idx, CkIndex_SlabArray::__idx);
  // REG: void acceptDataForFFT(int numPoints, const complex *points, int posn, int info_id);
  idx_acceptDataForFFT_marshall1();

  // REG: void acceptDataForIFFT(int numPoints, const complex *points, int posn, int info_id);
  idx_acceptDataForIFFT_marshall2();

  // REG: NormalRealSlabArray(CkMigrateMessage* impl_msg);
  idx_NormalRealSlabArray_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_NormalRealSlabArray_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: array NormalLineArray: ArrayElement{
NormalLineArray(const LineFFTinfo &info, const CProxy_NormalLineArray &_xProxy, const CProxy_NormalLineArray &_yProxy, const CProxy_NormalLineArray &_zProxy);
void doFirstFFT(int id, int direction);
void doSecondFFT(SendFFTMsg* impl_msg);
void doThirdFFT(SendFFTMsg* impl_msg);
NormalLineArray(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_NormalLineArray::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CProxySection_NormalLineArray::contribute(CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(sid, userData, fragSize);
}

void CProxySection_NormalLineArray::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, userData, fragSize);
}

template <typename T>
void CProxySection_NormalLineArray::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, userData, fragSize);
}

void CProxySection_NormalLineArray::contribute(CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(sid, cb, userData, fragSize);
}

void CProxySection_NormalLineArray::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, cb, userData, fragSize);
}

template <typename T>
void CProxySection_NormalLineArray::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, cb, userData, fragSize);
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: NormalLineArray(const LineFFTinfo &info, const CProxy_NormalLineArray &_xProxy, const CProxy_NormalLineArray &_yProxy, const CProxy_NormalLineArray &_zProxy);
 */
void CProxyElement_NormalLineArray::insert(const LineFFTinfo &info, const CProxy_NormalLineArray &_xProxy, const CProxy_NormalLineArray &_yProxy, const CProxy_NormalLineArray &_zProxy, int onPE, const CkEntryOptions *impl_e_opts)
{ 
   //Marshall: const LineFFTinfo &info, const CProxy_NormalLineArray &_xProxy, const CProxy_NormalLineArray &_yProxy, const CProxy_NormalLineArray &_zProxy
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<LineFFTinfo>::type>::type &)info;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_NormalLineArray>::type>::type &)_xProxy;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_NormalLineArray>::type>::type &)_yProxy;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_NormalLineArray>::type>::type &)_zProxy;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<LineFFTinfo>::type>::type &)info;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_NormalLineArray>::type>::type &)_xProxy;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_NormalLineArray>::type>::type &)_yProxy;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_NormalLineArray>::type>::type &)_zProxy;
  }
   UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
   ckInsert((CkArrayMessage *)impl_msg,CkIndex_NormalLineArray::idx_NormalLineArray_marshall1(),onPE);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void doFirstFFT(int id, int direction);
 */
void CProxyElement_NormalLineArray::doFirstFFT(int id, int direction, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int id, int direction
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|id;
    implP|direction;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|id;
    implP|direction;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_NormalLineArray::idx_doFirstFFT_marshall2(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void doSecondFFT(SendFFTMsg* impl_msg);
 */
void CProxyElement_NormalLineArray::doSecondFFT(SendFFTMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_NormalLineArray::idx_doSecondFFT_SendFFTMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void doThirdFFT(SendFFTMsg* impl_msg);
 */
void CProxyElement_NormalLineArray::doThirdFFT(SendFFTMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_NormalLineArray::idx_doThirdFFT_SendFFTMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: NormalLineArray(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: NormalLineArray(const LineFFTinfo &info, const CProxy_NormalLineArray &_xProxy, const CProxy_NormalLineArray &_yProxy, const CProxy_NormalLineArray &_zProxy);
 */
CkArrayID CProxy_NormalLineArray::ckNew(const LineFFTinfo &info, const CProxy_NormalLineArray &_xProxy, const CProxy_NormalLineArray &_yProxy, const CProxy_NormalLineArray &_zProxy, const CkArrayOptions &opts, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const LineFFTinfo &info, const CProxy_NormalLineArray &_xProxy, const CProxy_NormalLineArray &_yProxy, const CProxy_NormalLineArray &_zProxy
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<LineFFTinfo>::type>::type &)info;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_NormalLineArray>::type>::type &)_xProxy;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_NormalLineArray>::type>::type &)_yProxy;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_NormalLineArray>::type>::type &)_zProxy;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<LineFFTinfo>::type>::type &)info;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_NormalLineArray>::type>::type &)_xProxy;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_NormalLineArray>::type>::type &)_yProxy;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_NormalLineArray>::type>::type &)_zProxy;
  }
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_NormalLineArray::idx_NormalLineArray_marshall1(), opts);
  return gId;
}
void CProxy_NormalLineArray::ckNew(const LineFFTinfo &info, const CProxy_NormalLineArray &_xProxy, const CProxy_NormalLineArray &_yProxy, const CProxy_NormalLineArray &_zProxy, const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const LineFFTinfo &info, const CProxy_NormalLineArray &_xProxy, const CProxy_NormalLineArray &_yProxy, const CProxy_NormalLineArray &_zProxy
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<LineFFTinfo>::type>::type &)info;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_NormalLineArray>::type>::type &)_xProxy;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_NormalLineArray>::type>::type &)_yProxy;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_NormalLineArray>::type>::type &)_zProxy;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<LineFFTinfo>::type>::type &)info;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_NormalLineArray>::type>::type &)_xProxy;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_NormalLineArray>::type>::type &)_yProxy;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_NormalLineArray>::type>::type &)_zProxy;
  }
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_NormalLineArray::idx_NormalLineArray_marshall1(), _ck_array_creation_cb, opts, impl_msg);
}
CkArrayID CProxy_NormalLineArray::ckNew(const LineFFTinfo &info, const CProxy_NormalLineArray &_xProxy, const CProxy_NormalLineArray &_yProxy, const CProxy_NormalLineArray &_zProxy, const int s1, const int s2, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const LineFFTinfo &info, const CProxy_NormalLineArray &_xProxy, const CProxy_NormalLineArray &_yProxy, const CProxy_NormalLineArray &_zProxy
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<LineFFTinfo>::type>::type &)info;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_NormalLineArray>::type>::type &)_xProxy;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_NormalLineArray>::type>::type &)_yProxy;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_NormalLineArray>::type>::type &)_zProxy;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<LineFFTinfo>::type>::type &)info;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_NormalLineArray>::type>::type &)_xProxy;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_NormalLineArray>::type>::type &)_yProxy;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_NormalLineArray>::type>::type &)_zProxy;
  }
  CkArrayOptions opts(s1, s2);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_NormalLineArray::idx_NormalLineArray_marshall1(), opts);
  return gId;
}
void CProxy_NormalLineArray::ckNew(const LineFFTinfo &info, const CProxy_NormalLineArray &_xProxy, const CProxy_NormalLineArray &_yProxy, const CProxy_NormalLineArray &_zProxy, const int s1, const int s2, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const LineFFTinfo &info, const CProxy_NormalLineArray &_xProxy, const CProxy_NormalLineArray &_yProxy, const CProxy_NormalLineArray &_zProxy
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<LineFFTinfo>::type>::type &)info;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_NormalLineArray>::type>::type &)_xProxy;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_NormalLineArray>::type>::type &)_yProxy;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_NormalLineArray>::type>::type &)_zProxy;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<LineFFTinfo>::type>::type &)info;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_NormalLineArray>::type>::type &)_xProxy;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_NormalLineArray>::type>::type &)_yProxy;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_NormalLineArray>::type>::type &)_zProxy;
  }
  CkArrayOptions opts(s1, s2);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_NormalLineArray::idx_NormalLineArray_marshall1(), _ck_array_creation_cb, opts, impl_msg);
}

// Entry point registration function
int CkIndex_NormalLineArray::reg_NormalLineArray_marshall1() {
  int epidx = CkRegisterEp("NormalLineArray(const LineFFTinfo &info, const CProxy_NormalLineArray &_xProxy, const CProxy_NormalLineArray &_yProxy, const CProxy_NormalLineArray &_zProxy)",
      reinterpret_cast<CkCallFnPtr>(_call_NormalLineArray_marshall1), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_NormalLineArray_marshall1);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_NormalLineArray_marshall1);

  return epidx;
}

void CkIndex_NormalLineArray::_call_NormalLineArray_marshall1(void* impl_msg, void* impl_obj_void)
{
  NormalLineArray* impl_obj = static_cast<NormalLineArray*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const LineFFTinfo &info, const CProxy_NormalLineArray &_xProxy, const CProxy_NormalLineArray &_yProxy, const CProxy_NormalLineArray &_zProxy*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<LineFFTinfo> info;
  implP|info;
  PUP::detail::TemporaryObjectHolder<CProxy_NormalLineArray> _xProxy;
  implP|_xProxy;
  PUP::detail::TemporaryObjectHolder<CProxy_NormalLineArray> _yProxy;
  implP|_yProxy;
  PUP::detail::TemporaryObjectHolder<CProxy_NormalLineArray> _zProxy;
  implP|_zProxy;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) NormalLineArray(std::move(info.t), std::move(_xProxy.t), std::move(_yProxy.t), std::move(_zProxy.t));
}
int CkIndex_NormalLineArray::_callmarshall_NormalLineArray_marshall1(char* impl_buf, void* impl_obj_void) {
  NormalLineArray* impl_obj = static_cast<NormalLineArray*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const LineFFTinfo &info, const CProxy_NormalLineArray &_xProxy, const CProxy_NormalLineArray &_yProxy, const CProxy_NormalLineArray &_zProxy*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<LineFFTinfo> info;
  implP|info;
  PUP::detail::TemporaryObjectHolder<CProxy_NormalLineArray> _xProxy;
  implP|_xProxy;
  PUP::detail::TemporaryObjectHolder<CProxy_NormalLineArray> _yProxy;
  implP|_yProxy;
  PUP::detail::TemporaryObjectHolder<CProxy_NormalLineArray> _zProxy;
  implP|_zProxy;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) NormalLineArray(std::move(info.t), std::move(_xProxy.t), std::move(_yProxy.t), std::move(_zProxy.t));
  return implP.size();
}
void CkIndex_NormalLineArray::_marshallmessagepup_NormalLineArray_marshall1(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const LineFFTinfo &info, const CProxy_NormalLineArray &_xProxy, const CProxy_NormalLineArray &_yProxy, const CProxy_NormalLineArray &_zProxy*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<LineFFTinfo> info;
  implP|info;
  PUP::detail::TemporaryObjectHolder<CProxy_NormalLineArray> _xProxy;
  implP|_xProxy;
  PUP::detail::TemporaryObjectHolder<CProxy_NormalLineArray> _yProxy;
  implP|_yProxy;
  PUP::detail::TemporaryObjectHolder<CProxy_NormalLineArray> _zProxy;
  implP|_zProxy;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("info");
  implDestP|info;
  if (implDestP.hasComments()) implDestP.comment("_xProxy");
  implDestP|_xProxy;
  if (implDestP.hasComments()) implDestP.comment("_yProxy");
  implDestP|_yProxy;
  if (implDestP.hasComments()) implDestP.comment("_zProxy");
  implDestP|_zProxy;
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void doFirstFFT(int id, int direction);
 */
void CProxy_NormalLineArray::doFirstFFT(int id, int direction, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int id, int direction
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|id;
    implP|direction;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|id;
    implP|direction;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_NormalLineArray::idx_doFirstFFT_marshall2(),0);
}

// Entry point registration function
int CkIndex_NormalLineArray::reg_doFirstFFT_marshall2() {
  int epidx = CkRegisterEp("doFirstFFT(int id, int direction)",
      reinterpret_cast<CkCallFnPtr>(_call_doFirstFFT_marshall2), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_doFirstFFT_marshall2);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_doFirstFFT_marshall2);

  return epidx;
}

void CkIndex_NormalLineArray::_call_doFirstFFT_marshall2(void* impl_msg, void* impl_obj_void)
{
  NormalLineArray* impl_obj = static_cast<NormalLineArray*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int id, int direction*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> id;
  implP|id;
  PUP::detail::TemporaryObjectHolder<int> direction;
  implP|direction;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->doFirstFFT(std::move(id.t), std::move(direction.t));
}
int CkIndex_NormalLineArray::_callmarshall_doFirstFFT_marshall2(char* impl_buf, void* impl_obj_void) {
  NormalLineArray* impl_obj = static_cast<NormalLineArray*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int id, int direction*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> id;
  implP|id;
  PUP::detail::TemporaryObjectHolder<int> direction;
  implP|direction;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->doFirstFFT(std::move(id.t), std::move(direction.t));
  return implP.size();
}
void CkIndex_NormalLineArray::_marshallmessagepup_doFirstFFT_marshall2(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int id, int direction*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> id;
  implP|id;
  PUP::detail::TemporaryObjectHolder<int> direction;
  implP|direction;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("id");
  implDestP|id;
  if (implDestP.hasComments()) implDestP.comment("direction");
  implDestP|direction;
}
PUPable_def(SINGLE_ARG(Closure_NormalLineArray::doFirstFFT_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void doSecondFFT(SendFFTMsg* impl_msg);
 */
void CProxy_NormalLineArray::doSecondFFT(SendFFTMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_NormalLineArray::idx_doSecondFFT_SendFFTMsg(),0);
}

// Entry point registration function
int CkIndex_NormalLineArray::reg_doSecondFFT_SendFFTMsg() {
  int epidx = CkRegisterEp("doSecondFFT(SendFFTMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_doSecondFFT_SendFFTMsg), CMessage_SendFFTMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)SendFFTMsg::ckDebugPup);
  return epidx;
}

void CkIndex_NormalLineArray::_call_doSecondFFT_SendFFTMsg(void* impl_msg, void* impl_obj_void)
{
  NormalLineArray* impl_obj = static_cast<NormalLineArray*>(impl_obj_void);
  impl_obj->doSecondFFT((SendFFTMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void doThirdFFT(SendFFTMsg* impl_msg);
 */
void CProxy_NormalLineArray::doThirdFFT(SendFFTMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_NormalLineArray::idx_doThirdFFT_SendFFTMsg(),0);
}

// Entry point registration function
int CkIndex_NormalLineArray::reg_doThirdFFT_SendFFTMsg() {
  int epidx = CkRegisterEp("doThirdFFT(SendFFTMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_doThirdFFT_SendFFTMsg), CMessage_SendFFTMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)SendFFTMsg::ckDebugPup);
  return epidx;
}

void CkIndex_NormalLineArray::_call_doThirdFFT_SendFFTMsg(void* impl_msg, void* impl_obj_void)
{
  NormalLineArray* impl_obj = static_cast<NormalLineArray*>(impl_obj_void);
  impl_obj->doThirdFFT((SendFFTMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: NormalLineArray(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_NormalLineArray::reg_NormalLineArray_CkMigrateMessage() {
  int epidx = CkRegisterEp("NormalLineArray(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_NormalLineArray_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_NormalLineArray::_call_NormalLineArray_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  call_migration_constructor<NormalLineArray> c = impl_obj_void;
  c((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: NormalLineArray(const LineFFTinfo &info, const CProxy_NormalLineArray &_xProxy, const CProxy_NormalLineArray &_yProxy, const CProxy_NormalLineArray &_zProxy);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void doFirstFFT(int id, int direction);
 */
void CProxySection_NormalLineArray::doFirstFFT(int id, int direction, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int id, int direction
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|id;
    implP|direction;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|id;
    implP|direction;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_NormalLineArray::idx_doFirstFFT_marshall2(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void doSecondFFT(SendFFTMsg* impl_msg);
 */
void CProxySection_NormalLineArray::doSecondFFT(SendFFTMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_NormalLineArray::idx_doSecondFFT_SendFFTMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void doThirdFFT(SendFFTMsg* impl_msg);
 */
void CProxySection_NormalLineArray::doThirdFFT(SendFFTMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_NormalLineArray::idx_doThirdFFT_SendFFTMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: NormalLineArray(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_NormalLineArray::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeArray);
  CkRegisterArrayDimensions(__idx, 2);
  CkRegisterBase(__idx, CkIndex_ArrayElement::__idx);
  // REG: NormalLineArray(const LineFFTinfo &info, const CProxy_NormalLineArray &_xProxy, const CProxy_NormalLineArray &_yProxy, const CProxy_NormalLineArray &_zProxy);
  idx_NormalLineArray_marshall1();

  // REG: void doFirstFFT(int id, int direction);
  idx_doFirstFFT_marshall2();

  // REG: void doSecondFFT(SendFFTMsg* impl_msg);
  idx_doSecondFFT_SendFFTMsg();

  // REG: void doThirdFFT(SendFFTMsg* impl_msg);
  idx_doThirdFFT_SendFFTMsg();

  // REG: NormalLineArray(CkMigrateMessage* impl_msg);
  idx_NormalLineArray_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_NormalLineArray_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerfftlib(void)
{
  static int _done = 0; if(_done) return; _done = 1;
/* REG: message SendFFTMsg{
complex data[];
}
;
*/
CMessage_SendFFTMsg::__register("SendFFTMsg", sizeof(SendFFTMsg),(CkPackFnPtr) SendFFTMsg::pack,(CkUnpackFnPtr) SendFFTMsg::unpack);

/* REG: array SlabArray: ArrayElement;
*/
  CkIndex_SlabArray::__register("SlabArray", sizeof(SlabArray));

/* REG: array NormalSlabArray: SlabArray{
NormalSlabArray(const NormalFFTinfo &info, const CProxy_NormalSlabArray &src, const CProxy_NormalSlabArray &dest);
void acceptDataForFFT(int numPoints, const complex *points, int posn, int info_id);
void acceptDataForIFFT(int numPoints, const complex *points, int posn, int info_id);
NormalSlabArray(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_NormalSlabArray::__register("NormalSlabArray", sizeof(NormalSlabArray));

/* REG: array NormalRealSlabArray: SlabArray{
void acceptDataForFFT(int numPoints, const complex *points, int posn, int info_id);
void acceptDataForIFFT(int numPoints, const complex *points, int posn, int info_id);
NormalRealSlabArray(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_NormalRealSlabArray::__register("NormalRealSlabArray", sizeof(NormalRealSlabArray));

/* REG: array NormalLineArray: ArrayElement{
NormalLineArray(const LineFFTinfo &info, const CProxy_NormalLineArray &_xProxy, const CProxy_NormalLineArray &_yProxy, const CProxy_NormalLineArray &_zProxy);
void doFirstFFT(int id, int direction);
void doSecondFFT(SendFFTMsg* impl_msg);
void doThirdFFT(SendFFTMsg* impl_msg);
NormalLineArray(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_NormalLineArray::__register("NormalLineArray", sizeof(NormalLineArray));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_SlabArray::virtual_pup(PUP::er &p) {
    recursive_pup<SlabArray>(dynamic_cast<SlabArray*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_NormalSlabArray::virtual_pup(PUP::er &p) {
    recursive_pup<NormalSlabArray>(dynamic_cast<NormalSlabArray*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_NormalRealSlabArray::virtual_pup(PUP::er &p) {
    recursive_pup<NormalRealSlabArray>(dynamic_cast<NormalRealSlabArray*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_NormalLineArray::virtual_pup(PUP::er &p) {
    recursive_pup<NormalLineArray>(dynamic_cast<NormalLineArray*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
