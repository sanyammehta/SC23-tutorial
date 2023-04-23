





#ifndef CK_TEMPLATES_ONLY
void _registerliveViz3d(void)
{
  static int _done = 0; if(_done) return; _done = 1;
  _registerlv3d0();

  _registerlv3d1();

  _registerliveViz();

}
#endif /* CK_TEMPLATES_ONLY */
