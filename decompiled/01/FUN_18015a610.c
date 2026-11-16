// FUN_18015a610 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18015a610 */

bool FUN_18015a610(undefined8 *param_1,undefined8 *param_2)

{
  size_t _Size;
  int iVar1;
  
  _Size = param_1[1];
  if (_Size != param_2[1]) {
    return false;
  }
  if (_Size == 0) {
    return true;
  }
  iVar1 = memcmp((void *)*param_1,(void *)*param_2,_Size);
  return iVar1 == 0;
}



