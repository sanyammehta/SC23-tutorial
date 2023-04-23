

#ifndef CK_TEMPLATES_ONLY
void _registerCkDummy(void)
{
  static int _done = 0; if(_done) return; _done = 1;
  _registerInitCall(_ckDummyInit,1);

}
#endif /* CK_TEMPLATES_ONLY */
