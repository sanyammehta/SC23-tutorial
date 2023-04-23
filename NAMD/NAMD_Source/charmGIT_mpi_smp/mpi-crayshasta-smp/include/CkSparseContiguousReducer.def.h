

#ifndef CK_TEMPLATES_ONLY
void _registerCkSparseContiguousReducer(void)
{
  static int _done = 0; if(_done) return; _done = 1;
  _registerInitCall(registerReducers,0);

}
#endif /* CK_TEMPLATES_ONLY */
