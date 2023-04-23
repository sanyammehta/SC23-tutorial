









#ifndef CK_TEMPLATES_ONLY
void _registerCommonLBs(void)
{
  static int _done = 0; if(_done) return; _done = 1;
  _registerTreeLB();

  _registerDistributedLB();

  _registerMetisLB();

  _registerRecBipartLB();

  _registerInitCall(initCommonLBs,1);

}
#endif /* CK_TEMPLATES_ONLY */
