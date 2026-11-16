// FUN_1805fd500 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805fd500 */

UINT * FUN_1805fd500(UINT *param_1)

{
  UINT UVar1;
  longlong lVar2;
  ushort *puVar3;
  uint uVar4;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  UVar1 = ___lc_codepage_func();
  *param_1 = UVar1;
  UVar1 = FUN_18061b0c4();
  param_1[1] = UVar1;
  lVar2 = FUN_18061b090();
  lVar2 = *(longlong *)(lVar2 + 0x10);
  param_1[2] = (uint)(lVar2 == 0);
  if (lVar2 != 0) {
    uVar4 = 0;
    lVar2 = 0;
    puVar3 = __pctype_func();
    do {
      if ((short)*puVar3 < 0) {
        *(byte *)((lVar2 >> 3) + 0xc + (longlong)param_1) =
             *(byte *)((lVar2 >> 3) + 0xc + (longlong)param_1) | (byte)(1 << (uVar4 & 7));
      }
      uVar4 = uVar4 + 1;
      lVar2 = lVar2 + 1;
      puVar3 = puVar3 + 1;
    } while ((int)uVar4 < 0x100);
  }
  return param_1;
}



