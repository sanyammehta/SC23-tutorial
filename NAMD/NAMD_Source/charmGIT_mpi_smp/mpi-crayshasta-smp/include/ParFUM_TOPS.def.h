

#ifndef CK_TEMPLATES_ONLY
void _registerParFUM_TOPS(void)
{
  static int _done = 0; if(_done) return; _done = 1;
  _registerInitCall(_initConfigurableCPUGPUMap,0);

}
#endif /* CK_TEMPLATES_ONLY */
