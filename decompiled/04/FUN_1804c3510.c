// FUN_1804c3510 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804c3510 */

bool FUN_1804c3510(int param_1,uint param_2,undefined4 param_3)

{
  float fVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  
  lVar4 = (longlong)param_1;
  if ((*(char *)(lVar4 + 0x118 + DAT_180bb8ae8) != '\0') &&
     (fVar1 = *(float *)(DAT_180bb8ae8 + 0xb9c + lVar4 * 4), 0.0 <= fVar1)) {
    if (fVar1 == 0.0) {
LAB_1804c3570:
      cVar2 = FUN_1804c5140(param_1 + 0x290,param_3);
      return cVar2 != '\0';
    }
    if (((param_2 & 1) != 0) && (*(float *)(DAT_180bb8ae8 + 0xa4) < fVar1)) {
      iVar3 = FUN_1804c2c30(fVar1 - *(float *)(DAT_180bb8ae8 + 0x40),param_2 & 1,
                            *(float *)(DAT_180bb8ae8 + 0xa4),*(undefined4 *)(DAT_180bb8ae8 + 0xa8));
      param_1 = (int)lVar4;
      if (0 < iVar3) goto LAB_1804c3570;
    }
  }
  return false;
}



