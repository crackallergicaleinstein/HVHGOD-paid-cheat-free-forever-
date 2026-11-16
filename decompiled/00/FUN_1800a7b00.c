// FUN_1800a7b00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800a7b00 */

uint * FUN_1800a7b00(uint *param_1,uint *param_2)

{
  uint uVar1;
  short sVar2;
  longlong lVar3;
  
  lVar3 = (longlong)param_2 - (longlong)param_1 >> 1;
  if (lVar3 < 2) {
    return param_1;
  }
  uVar1 = *param_1;
  sVar2 = (short)(uVar1 >> 0x10);
  if ((uVar1 & 0xffffffdf) - 0x3a0041 < 0x1a) {
    return param_1 + 1;
  }
  if (((short)uVar1 != 0x5c) && ((short)uVar1 != 0x2f)) {
    return param_1;
  }
  if ((3 < lVar3) &&
     ((*(short *)((longlong)param_1 + 6) == 0x5c || (*(short *)((longlong)param_1 + 6) == 0x2f)))) {
    if ((lVar3 != 4) && (((short)param_1[2] == 0x5c || ((short)param_1[2] == 0x2f))))
    goto LAB_1800a7bbf;
    sVar2 = *(short *)((longlong)param_1 + 2);
    if ((((sVar2 == 0x5c) || (sVar2 == 0x2f)) &&
        (((short)param_1[1] == 0x3f || ((short)param_1[1] == 0x2e)))) ||
       ((sVar2 == 0x3f && ((short)param_1[1] == 0x3f)))) {
      return (uint *)((longlong)param_1 + 6);
    }
  }
  if (lVar3 < 3) {
    return param_1;
  }
LAB_1800a7bbf:
  if ((((sVar2 != 0x5c) && (sVar2 != 0x2f)) || ((short)param_1[1] == 0x5c)) ||
     ((short)param_1[1] == 0x2f)) {
    return param_1;
  }
  param_1 = (uint *)((longlong)param_1 + 6);
  if (param_1 == param_2) {
    return param_1;
  }
  while( true ) {
    if ((short)*param_1 == 0x5c) {
      return param_1;
    }
    if ((short)*param_1 == 0x2f) break;
    param_1 = (uint *)((longlong)param_1 + 2);
    if (param_1 == param_2) {
      return param_1;
    }
  }
  return param_1;
}



