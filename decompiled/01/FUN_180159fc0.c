// FUN_180159fc0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180159fc0 */

_Lockit * FUN_180159fc0(_Lockit *param_1,char *param_2)

{
  std::_Lockit::_Lockit(param_1,0);
  *(undefined8 *)(param_1 + 8) = 0;
  param_1[0x10] = (_Lockit)0x0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  param_1[0x20] = (_Lockit)0x0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined2 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined2 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  param_1[0x50] = (_Lockit)0x0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  param_1[0x60] = (_Lockit)0x0;
  if (param_2 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805fa900("bad locale name");
  }
  std::_Locinfo::_Locinfo_ctor((_Locinfo *)param_1,param_2);
  return param_1;
}



