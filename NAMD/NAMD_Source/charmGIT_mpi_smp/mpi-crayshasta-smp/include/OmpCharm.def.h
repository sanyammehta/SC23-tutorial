

#ifndef CK_TEMPLATES_ONLY
void _registerOmpCharm(void)
{
  static int _done = 0; if(_done) return; _done = 1;
  _registerInitCall(RegisterOmpHdlrs,0);

}
#endif /* CK_TEMPLATES_ONLY */
