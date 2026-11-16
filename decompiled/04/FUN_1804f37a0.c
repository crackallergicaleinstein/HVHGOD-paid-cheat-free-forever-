// FUN_1804f37a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804f37a0 */

void FUN_1804f37a0(int param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 in_ZMM1 [64];
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [64];
  
  lVar5 = DAT_180bb8ae8;
  auVar11 = ZEXT1664(in_ZMM1._0_16_);
  while( true ) {
    lVar1 = *(longlong *)(*(longlong *)(lVar5 + 0x14d0) + 0x1c8);
    if (param_1 < 0) {
      param_1 = *(int *)(lVar1 + 0xc);
    }
    if (((*(uint *)(lVar1 + 4) & 4) == 0) && (param_1 < *(int *)(lVar1 + 0x10) + -1)) {
      bVar4 = true;
      iVar6 = param_1;
      if (param_1 < 0) {
        iVar6 = *(int *)(lVar1 + 0xc);
      }
      lVar2 = *(longlong *)(lVar1 + 0x68);
      lVar8 = ((longlong)iVar6 + 1) * 0x1c;
      lVar7 = (longlong)iVar6 * 0x1c;
      if (*(char *)(lVar1 + 9) == '\0') {
        fVar9 = *(float *)(lVar8 + lVar2) - *(float *)(lVar7 + lVar2);
      }
      else {
        fVar9 = *(float *)(lVar8 + 4 + lVar2) - *(float *)(lVar7 + 4 + lVar2);
      }
      auVar10 = ZEXT416((uint)((*(float *)(lVar1 + 0x18) - *(float *)(lVar1 + 0x14)) * fVar9));
    }
    else {
      bVar4 = false;
      auVar10 = ZEXT816(0);
    }
    if ((*(uint *)(lVar1 + 4) & 8) == 0) {
      auVar3 = vminss_avx(auVar11._0_16_,
                          ZEXT416((uint)(*(float *)(lVar1 + 0x18) -
                                        (float)(*(int *)(lVar1 + 0x10) - param_1) *
                                        *(float *)(lVar5 + 0xcf8))));
      auVar11 = ZEXT1664(auVar3);
    }
    *(float *)((longlong)param_1 * 0x1c + *(longlong *)(lVar1 + 0x68)) =
         (auVar11._0_4_ - *(float *)(lVar1 + 0x14)) /
         (*(float *)(lVar1 + 0x18) - *(float *)(lVar1 + 0x14));
    if (!bVar4) break;
    auVar10 = vmaxss_avx(ZEXT416(*(uint *)(lVar5 + 0xcf8)),auVar10);
    auVar11 = ZEXT464((uint)(auVar11._0_4_ + auVar10._0_4_));
    param_1 = param_1 + 1;
  }
  return;
}



