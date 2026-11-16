// FUN_1804a91a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804a91a0 */

void FUN_1804a91a0(undefined8 param_1,undefined1 param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auVar8 [64];
  undefined1 auVar9 [64];
  float fVar10;
  float fVar11;
  float fVar12;
  float local_res20;
  float local_res24;
  float local_68;
  float local_64;
  
  lVar7 = DAT_180bb8ae8;
  *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
  plVar6 = *(longlong **)(lVar7 + 0x14d0);
  iVar4 = FUN_1804b0a90(param_1,0,
                        *(undefined4 *)(plVar6[0x22] + -4 + (longlong)(int)plVar6[0x21] * 4));
  if (*(int *)(*plVar6 + 0x1534) == iVar4) {
    FUN_1804cf810(iVar4,0xb,param_1);
    lVar7 = DAT_180bb8ae8;
  }
  lVar1 = *(longlong *)(lVar7 + 0x14d0);
  fVar11 = *(float *)(lVar1 + 0x118);
  fVar12 = *(float *)(lVar1 + 0x11c);
  if ((*(longlong *)(lVar1 + 0x1c8) != 0) || (lVar5 = 0x280, *(longlong *)(lVar7 + 0x2338) != 0)) {
    lVar5 = 0x250;
  }
  fVar10 = *(float *)(lVar1 + lVar5) - fVar11;
  auVar2 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 26.0 + 0.5)),1);
  auVar9 = ZEXT1664(auVar2);
  auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 4.0 + 0.5)),1);
  auVar8 = ZEXT1664(auVar3);
  local_res24 = auVar2._0_4_;
  local_res20 = fVar10;
  FUN_1804c6420(&local_res20,0xbf800000);
  local_res20 = fVar10 + fVar11 + auVar8._0_4_;
  local_68 = fVar11 - auVar8._0_4_;
  local_res24 = auVar9._0_4_ + fVar12;
  local_64 = fVar12;
  FUN_1804a8c60(iVar4,param_1,&local_68,&local_res20,param_2,0,0x3f800000,0);
  return;
}



