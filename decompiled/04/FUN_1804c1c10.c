// FUN_1804c1c10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804c1c10 */

void FUN_1804c1c10(longlong param_1,float *param_2,uint param_3)

{
  float fVar1;
  float fVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  uint uVar5;
  float fVar6;
  
  if ((param_3 == 0) || ((param_3 & (int)*(char *)(param_1 + 0xf2)) != 0)) {
    *(uint *)(param_1 + 0xf0) =
         (*(uint *)(param_1 + 0xf0) >> 0x10 & 0xf1) << 0x10 | *(uint *)(param_1 + 0xf0) & 0xff00ffff
    ;
    uVar4 = 0;
    uVar5 = *(uint *)(param_1 + 0x14) & 0x1000000;
    if ((uVar5 == 0) ||
       ((*(char *)(param_1 + 0xd3) != '\0' || ((*(byte *)(param_1 + 0x18) & 0x40) != 0)))) {
      uVar3 = uVar4;
      if (*param_2 <= 0.0) {
        uVar3 = 2;
      }
      *(undefined1 *)(param_1 + 0xe8) = uVar3;
    }
    if (((uVar5 == 0) || (*(char *)(param_1 + 0xd3) != '\0')) ||
       ((*(byte *)(param_1 + 0x18) & 0x40) != 0)) {
      if (param_2[1] <= 0.0) {
        uVar4 = 2;
      }
      *(undefined1 *)(param_1 + 0xe9) = uVar4;
    }
    fVar1 = *(float *)(param_1 + 0x38);
    fVar2 = *(float *)(param_1 + 0x3c);
    if (0.0 < *param_2) {
      fVar6 = (float)(int)*param_2;
      *(float *)(param_1 + 0x38) = fVar6;
    }
    else {
      *(undefined1 *)(param_1 + 0xea) = 0;
      fVar6 = fVar1;
    }
    if (0.0 < param_2[1]) {
      *(float *)(param_1 + 0x3c) = (float)(int)param_2[1];
    }
    else {
      *(undefined1 *)(param_1 + 0xea) = 0;
    }
    if (((fVar1 != fVar6) || (fVar2 != *(float *)(param_1 + 0x3c))) &&
       (((*(uint *)(param_1 + 0x14) >> 8 & 1) == 0 && (*(float *)(DAT_180bb8ae8 + 0x277c) <= 0.0))))
    {
      *(undefined4 *)(DAT_180bb8ae8 + 0x277c) = *(undefined4 *)(DAT_180bb8ae8 + 0x44);
    }
  }
  return;
}



