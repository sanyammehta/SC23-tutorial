


















/* DEFS: group MSA_CacheGroup<int,DefaultEntry<int>,MSA_DEFAULT_ENTRIES_PER_PAGE>: IrrGroup;
 */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: array MSA_PageArray<int,DefaultEntry<int>,MSA_DEFAULT_ENTRIES_PER_PAGE>: ArrayElement;
 */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group MSA_CacheGroup<IntList,DefaultListEntry<IntList,true>,MSA_DEFAULT_ENTRIES_PER_PAGE>: IrrGroup;
 */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: array MSA_PageArray<IntList,DefaultListEntry<IntList,true>,MSA_DEFAULT_ENTRIES_PER_PAGE>: ArrayElement;
 */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group MSA_CacheGroup<NodeList,DefaultListEntry<NodeList,true>,MSA_DEFAULT_ENTRIES_PER_PAGE>: IrrGroup;
 */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: array MSA_PageArray<NodeList,DefaultListEntry<NodeList,true>,MSA_DEFAULT_ENTRIES_PER_PAGE>: ArrayElement;
 */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group MSA_CacheGroup<MeshElem,DefaultEntry<MeshElem,true>,1>: IrrGroup;
 */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: array MSA_PageArray<MeshElem,DefaultEntry<MeshElem,true>,1>: ArrayElement;
 */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group MSA_CacheGroup<Hashtuple,DefaultListEntry<Hashtuple,true>,MSA_DEFAULT_ENTRIES_PER_PAGE>: IrrGroup;
 */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: array MSA_PageArray<Hashtuple,DefaultListEntry<Hashtuple,true>,MSA_DEFAULT_ENTRIES_PER_PAGE>: ArrayElement;
 */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: group MSA_CacheGroup<AdjRequestList,DefaultListEntry<AdjRequestList,true>,MSA_DEFAULT_ENTRIES_PER_PAGE>: IrrGroup;
 */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: array MSA_PageArray<AdjRequestList,DefaultListEntry<AdjRequestList,true>,MSA_DEFAULT_ENTRIES_PER_PAGE>: ArrayElement;
 */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group MSA_CacheGroup<AdjReplyList,DefaultListEntry<AdjReplyList,true>,MSA_DEFAULT_ENTRIES_PER_PAGE>: IrrGroup;
 */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: array MSA_PageArray<AdjReplyList,DefaultListEntry<AdjReplyList,true>,MSA_DEFAULT_ENTRIES_PER_PAGE>: ArrayElement;
 */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerParFUM(void)
{
  static int _done = 0; if(_done) return; _done = 1;
  _registerParFUM_Adapt();


/* REG: group MSA_CacheGroup<int,DefaultEntry<int>,MSA_DEFAULT_ENTRIES_PER_PAGE>: IrrGroup;
*/
  CkIndex_MSA_CacheGroup<int,DefaultEntry<int>,MSA_DEFAULT_ENTRIES_PER_PAGE>::__register("MSA_CacheGroup<int,DefaultEntry<int>,MSA_DEFAULT_ENTRIES_PER_PAGE>", sizeof(MSA_CacheGroup<int,DefaultEntry<int>,MSA_DEFAULT_ENTRIES_PER_PAGE>));

/* REG: array MSA_PageArray<int,DefaultEntry<int>,MSA_DEFAULT_ENTRIES_PER_PAGE>: ArrayElement;
*/
  CkIndex_MSA_PageArray<int,DefaultEntry<int>,MSA_DEFAULT_ENTRIES_PER_PAGE>::__register("MSA_PageArray<int,DefaultEntry<int>,MSA_DEFAULT_ENTRIES_PER_PAGE>", sizeof(MSA_PageArray<int,DefaultEntry<int>,MSA_DEFAULT_ENTRIES_PER_PAGE>));

/* REG: group MSA_CacheGroup<IntList,DefaultListEntry<IntList,true>,MSA_DEFAULT_ENTRIES_PER_PAGE>: IrrGroup;
*/
  CkIndex_MSA_CacheGroup<IntList,DefaultListEntry<IntList,true>,MSA_DEFAULT_ENTRIES_PER_PAGE>::__register("MSA_CacheGroup<IntList,DefaultListEntry<IntList,true>,MSA_DEFAULT_ENTRIES_PER_PAGE>", sizeof(MSA_CacheGroup<IntList,DefaultListEntry<IntList,true>,MSA_DEFAULT_ENTRIES_PER_PAGE>));

/* REG: array MSA_PageArray<IntList,DefaultListEntry<IntList,true>,MSA_DEFAULT_ENTRIES_PER_PAGE>: ArrayElement;
*/
  CkIndex_MSA_PageArray<IntList,DefaultListEntry<IntList,true>,MSA_DEFAULT_ENTRIES_PER_PAGE>::__register("MSA_PageArray<IntList,DefaultListEntry<IntList,true>,MSA_DEFAULT_ENTRIES_PER_PAGE>", sizeof(MSA_PageArray<IntList,DefaultListEntry<IntList,true>,MSA_DEFAULT_ENTRIES_PER_PAGE>));

/* REG: group MSA_CacheGroup<NodeList,DefaultListEntry<NodeList,true>,MSA_DEFAULT_ENTRIES_PER_PAGE>: IrrGroup;
*/
  CkIndex_MSA_CacheGroup<NodeList,DefaultListEntry<NodeList,true>,MSA_DEFAULT_ENTRIES_PER_PAGE>::__register("MSA_CacheGroup<NodeList,DefaultListEntry<NodeList,true>,MSA_DEFAULT_ENTRIES_PER_PAGE>", sizeof(MSA_CacheGroup<NodeList,DefaultListEntry<NodeList,true>,MSA_DEFAULT_ENTRIES_PER_PAGE>));

/* REG: array MSA_PageArray<NodeList,DefaultListEntry<NodeList,true>,MSA_DEFAULT_ENTRIES_PER_PAGE>: ArrayElement;
*/
  CkIndex_MSA_PageArray<NodeList,DefaultListEntry<NodeList,true>,MSA_DEFAULT_ENTRIES_PER_PAGE>::__register("MSA_PageArray<NodeList,DefaultListEntry<NodeList,true>,MSA_DEFAULT_ENTRIES_PER_PAGE>", sizeof(MSA_PageArray<NodeList,DefaultListEntry<NodeList,true>,MSA_DEFAULT_ENTRIES_PER_PAGE>));

/* REG: group MSA_CacheGroup<MeshElem,DefaultEntry<MeshElem,true>,1>: IrrGroup;
*/
  CkIndex_MSA_CacheGroup<MeshElem,DefaultEntry<MeshElem,true>,1>::__register("MSA_CacheGroup<MeshElem,DefaultEntry<MeshElem,true>,1>", sizeof(MSA_CacheGroup<MeshElem,DefaultEntry<MeshElem,true>,1>));

/* REG: array MSA_PageArray<MeshElem,DefaultEntry<MeshElem,true>,1>: ArrayElement;
*/
  CkIndex_MSA_PageArray<MeshElem,DefaultEntry<MeshElem,true>,1>::__register("MSA_PageArray<MeshElem,DefaultEntry<MeshElem,true>,1>", sizeof(MSA_PageArray<MeshElem,DefaultEntry<MeshElem,true>,1>));

/* REG: group MSA_CacheGroup<Hashtuple,DefaultListEntry<Hashtuple,true>,MSA_DEFAULT_ENTRIES_PER_PAGE>: IrrGroup;
*/
  CkIndex_MSA_CacheGroup<Hashtuple,DefaultListEntry<Hashtuple,true>,MSA_DEFAULT_ENTRIES_PER_PAGE>::__register("MSA_CacheGroup<Hashtuple,DefaultListEntry<Hashtuple,true>,MSA_DEFAULT_ENTRIES_PER_PAGE>", sizeof(MSA_CacheGroup<Hashtuple,DefaultListEntry<Hashtuple,true>,MSA_DEFAULT_ENTRIES_PER_PAGE>));

/* REG: array MSA_PageArray<Hashtuple,DefaultListEntry<Hashtuple,true>,MSA_DEFAULT_ENTRIES_PER_PAGE>: ArrayElement;
*/
  CkIndex_MSA_PageArray<Hashtuple,DefaultListEntry<Hashtuple,true>,MSA_DEFAULT_ENTRIES_PER_PAGE>::__register("MSA_PageArray<Hashtuple,DefaultListEntry<Hashtuple,true>,MSA_DEFAULT_ENTRIES_PER_PAGE>", sizeof(MSA_PageArray<Hashtuple,DefaultListEntry<Hashtuple,true>,MSA_DEFAULT_ENTRIES_PER_PAGE>));


/* REG: group MSA_CacheGroup<AdjRequestList,DefaultListEntry<AdjRequestList,true>,MSA_DEFAULT_ENTRIES_PER_PAGE>: IrrGroup;
*/
  CkIndex_MSA_CacheGroup<AdjRequestList,DefaultListEntry<AdjRequestList,true>,MSA_DEFAULT_ENTRIES_PER_PAGE>::__register("MSA_CacheGroup<AdjRequestList,DefaultListEntry<AdjRequestList,true>,MSA_DEFAULT_ENTRIES_PER_PAGE>", sizeof(MSA_CacheGroup<AdjRequestList,DefaultListEntry<AdjRequestList,true>,MSA_DEFAULT_ENTRIES_PER_PAGE>));

/* REG: array MSA_PageArray<AdjRequestList,DefaultListEntry<AdjRequestList,true>,MSA_DEFAULT_ENTRIES_PER_PAGE>: ArrayElement;
*/
  CkIndex_MSA_PageArray<AdjRequestList,DefaultListEntry<AdjRequestList,true>,MSA_DEFAULT_ENTRIES_PER_PAGE>::__register("MSA_PageArray<AdjRequestList,DefaultListEntry<AdjRequestList,true>,MSA_DEFAULT_ENTRIES_PER_PAGE>", sizeof(MSA_PageArray<AdjRequestList,DefaultListEntry<AdjRequestList,true>,MSA_DEFAULT_ENTRIES_PER_PAGE>));

/* REG: group MSA_CacheGroup<AdjReplyList,DefaultListEntry<AdjReplyList,true>,MSA_DEFAULT_ENTRIES_PER_PAGE>: IrrGroup;
*/
  CkIndex_MSA_CacheGroup<AdjReplyList,DefaultListEntry<AdjReplyList,true>,MSA_DEFAULT_ENTRIES_PER_PAGE>::__register("MSA_CacheGroup<AdjReplyList,DefaultListEntry<AdjReplyList,true>,MSA_DEFAULT_ENTRIES_PER_PAGE>", sizeof(MSA_CacheGroup<AdjReplyList,DefaultListEntry<AdjReplyList,true>,MSA_DEFAULT_ENTRIES_PER_PAGE>));

/* REG: array MSA_PageArray<AdjReplyList,DefaultListEntry<AdjReplyList,true>,MSA_DEFAULT_ENTRIES_PER_PAGE>: ArrayElement;
*/
  CkIndex_MSA_PageArray<AdjReplyList,DefaultListEntry<AdjReplyList,true>,MSA_DEFAULT_ENTRIES_PER_PAGE>::__register("MSA_PageArray<AdjReplyList,DefaultListEntry<AdjReplyList,true>,MSA_DEFAULT_ENTRIES_PER_PAGE>", sizeof(MSA_PageArray<AdjReplyList,DefaultListEntry<AdjReplyList,true>,MSA_DEFAULT_ENTRIES_PER_PAGE>));

}
#endif /* CK_TEMPLATES_ONLY */
