// FUN_1804f0b20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804f0b20 */

ulonglong FUN_1804f0b20(longlong param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  longlong lVar3;
  ulonglong uVar4;
  undefined1 local_18 [12];
  float fStack_c;
  
  if ((*(short *)(param_1 + 0x216) == param_3) &&
     (*(short *)(param_1 + 0x7a) == *(short *)(param_1 + 0x78))) {
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if (*(short *)(param_1 + 0x210) != param_3) {
      if (((int)*(short *)(param_1 + 0x232) == param_2 + 1) ||
         ((*(uint *)(param_1 + 4) & 0x1800) != 0)) {
        return (ulonglong)*(uint *)(param_1 + 0xa4);
      }
      return (ulonglong)*(uint *)(param_1 + 0xa8);
    }
  }
  auVar1 = *(undefined1 (*) [16])(DAT_180bb8ae8 + 0xc78 + (lVar3 + 0x32) * 0x10);
  auVar2 = vshufps_avx(auVar1,auVar1,0xff);
  local_18 = auVar1._0_12_;
  fStack_c = auVar2._0_4_ * *(float *)(DAT_180bb8ae8 + 0xc84);
  uVar4 = FUN_1804b1120(local_18);
  return uVar4;
}



