// FUN_18048b210 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18048b210 */

ulonglong FUN_18048b210(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [32];
  float fVar4;
  int iVar5;
  ulonglong in_RAX;
  undefined1 (*pauVar6) [32];
  longlong lVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined4 uVar10;
  undefined1 auVar11 [64];
  undefined1 auVar12 [64];
  ulonglong in_stack_ffffffffffffff18;
  undefined8 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float local_a8;
  float local_a4;
  undefined1 local_a0 [8];
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined1 local_88 [32];
  undefined1 local_68 [80];
  
  lVar7 = DAT_180bb8ae8;
  if (DAT_180bbecdb != '\0') {
    return in_RAX & 0xffffffffffffff00;
  }
  auVar2 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 13.2 + 0.5)),1);
  *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
  plVar1 = *(longlong **)(lVar7 + 0x14d0);
  auVar2 = vmaxss_avx(SUB6416(ZEXT464(0x3f800000),0),auVar2);
  uVar15 = 0;
  uVar10 = 0;
  FUN_1804ea040(&local_a8,DAT_180c62ca8,auVar2._0_8_,0x7f7fffff,
                in_stack_ffffffffffffff18 & 0xffffffff00000000,param_4,0,0,0);
  auVar3._24_8_ = 0;
  auVar3._0_24_ = local_88._8_24_;
  local_88 = auVar3 << 0x40;
  local_94 = 0;
  uVar14 = 0;
  local_98 = 0;
  local_90 = uVar10;
  local_8c = uVar10;
  pauVar6 = (undefined1 (*) [32])
            FUN_180487810(local_68,"Live radar",&DAT_180830b38,1,0,local_a8 / DAT_180b0a41c + 28.0,
                          CONCAT44(uVar15,uVar10),&local_98,0);
  local_88 = *pauVar6;
  auVar9 = local_88._16_16_;
  auVar2 = vshufps_avx(auVar9,auVar9,0x55);
  fVar8 = auVar2._0_4_;
  if (param_3 != 0) {
    local_a4 = local_88._16_4_;
    uVar13 = CONCAT44(uVar14,0x41300000);
    auVar11 = ZEXT1664(auVar2);
    auVar12 = ZEXT1664(auVar9);
    fVar4 = local_a8;
    local_a8 = (fVar8 - local_a8) - DAT_180b0a41c * 15.0;
    FUN_180463dc0(plVar1[0x59],&local_a8,DAT_1808da474,param_3,uVar13);
    uVar14 = (undefined4)((ulonglong)uVar13 >> 0x20);
    fVar8 = auVar11._0_4_;
    auVar9 = auVar12._0_16_;
  }
  uVar10 = DAT_1808da474;
  local_a8 = fVar8 - local_a8;
  auVar11 = ZEXT1664(auVar9);
  fVar8 = (float)FUN_180463350(DAT_180c62ca8);
  local_a4 = auVar11._0_4_ - fVar8 * 0.5;
  FUN_180463450(plVar1[0x59],DAT_180c62ca8,0x41533333,&local_a8,CONCAT44(uVar14,uVar10),param_4,0);
  iVar5 = FUN_1804b0a90("Live radar",0,
                        *(undefined4 *)(plVar1[0x22] + -4 + (longlong)(int)plVar1[0x21] * 4));
  if (*(int *)(*plVar1 + 0x1534) == iVar5) {
    FUN_1804cf810(iVar5,0xb,"Live radar");
  }
  lVar7 = FUN_1804aad60(local_a0,iVar5,local_88,local_88 + 8,1);
  return (ulonglong)*(byte *)(lVar7 + 2);
}



