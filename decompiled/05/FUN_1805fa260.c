// FUN_1805fa260 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805fa260 */

undefined8 FUN_1805fa260(ulonglong *param_1,ulonglong *param_2,longlong param_3)

{
  undefined8 in_RAX;
  ulonglong uVar1;
  bool bVar2;
  
  if (param_3 == 1) {
    uVar1 = CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)*param_1);
    bVar2 = (char)*param_1 == (char)*param_2;
  }
  else if (param_3 == 2) {
    uVar1 = (ulonglong)(ushort)*param_1;
    bVar2 = (ushort)*param_1 == (ushort)*param_2;
  }
  else if (param_3 == 4) {
    uVar1 = (ulonglong)(uint)*param_1;
    bVar2 = (uint)*param_1 == (uint)*param_2;
  }
  else {
    if (param_3 != 8) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar1 = *param_1;
    bVar2 = uVar1 == *param_2;
  }
  return CONCAT71((int7)(uVar1 >> 8),bVar2);
}



