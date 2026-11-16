// FUN_1804b1f30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804b1f30 */

void FUN_1804b1f30(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [64];
  
  lVar2 = DAT_180bb8ae8;
  fVar6 = *(float *)(param_1 + 0x10);
  lVar1 = *(longlong *)(DAT_180bb8ae8 + 0x14d0);
  fVar5 = (float)(*(double *)(param_1 + 0x20) + *(double *)(param_1 + 0x18) +
                 (double)fVar6 * (double)param_2);
  fVar7 = fVar5 - *(float *)(lVar1 + 0x11c);
  auVar8 = ZEXT464((uint)fVar7);
  *(float *)(lVar1 + 0x11c) = fVar5;
  auVar3 = vmaxss_avx(ZEXT416(*(uint *)(lVar1 + 0x134)),
                      ZEXT416((uint)(fVar5 - *(float *)(lVar2 + 0xcd8))));
  *(int *)(lVar1 + 0x134) = auVar3._0_4_;
  *(float *)(lVar1 + 0x124) = fVar5 - fVar6;
  *(float *)(lVar1 + 0x14c) = fVar6 - *(float *)(lVar2 + 0xcd8);
  if (*(longlong *)(lVar1 + 0x1c8) != 0) {
    *(float *)(*(longlong *)(lVar1 + 0x1c8) + 0x1c) = fVar5;
  }
  lVar2 = *(longlong *)(lVar2 + 0x2338);
  if (lVar2 != 0) {
    if (*(char *)(lVar2 + 0x23e) != '\0') {
      FUN_1804ef4b0(lVar2);
      fVar7 = auVar8._0_4_;
    }
    iVar4 = (int)(fVar7 / fVar6 + 0.5);
    if ((0 < iVar4) && ((*(byte *)(param_1 + 0x14) & 1) == 0)) {
      *(int *)(lVar2 + 0x70) = *(int *)(lVar2 + 0x70) + iVar4;
      *(int *)(lVar2 + 0x98) = *(int *)(lVar2 + 0x98) + iVar4;
    }
    *(undefined4 *)(lVar2 + 0x80) = *(undefined4 *)(lVar1 + 0x11c);
  }
  return;
}



