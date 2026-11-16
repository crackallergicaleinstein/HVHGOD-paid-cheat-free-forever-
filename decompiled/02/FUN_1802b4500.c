// FUN_1802b4500 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802b4500 */

void FUN_1802b4500(undefined8 param_1,undefined8 param_2,float *param_3,longlong param_4,
                  byte *param_5)

{
  byte bVar1;
  undefined1 auVar2 [16];
  longlong *plVar3;
  char cVar4;
  ulonglong uVar5;
  longlong lVar6;
  char *pcVar7;
  ulonglong *puVar8;
  undefined8 uVar9;
  float fVar10;
  undefined1 auVar11 [64];
  undefined1 auVar12 [64];
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [64];
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [64];
  undefined8 in_stack_fffffffffffffee8;
  undefined4 uVar20;
  ulonglong local_e8 [2];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  
  uVar20 = (undefined4)((ulonglong)in_stack_fffffffffffffee8 >> 0x20);
  local_e8[0] = local_e8[0] & 0xffffffff00000000;
  bVar1 = *param_5;
  if ((bVar1 == 1) || (bVar1 == 2)) {
    cVar4 = '\x01';
  }
  else {
    cVar4 = '\0';
  }
  auVar19 = ZEXT464((uint)param_3[1]);
  fVar17 = 0.0;
  if (cVar4 != '\0') {
    if (*(char *)(param_4 + 0x28) == '\0') {
      plVar3 = (longlong *)
               FUN_1803db960(cVar4,*(undefined4 *)
                                    (&DAT_1807d1630 + (ulonglong)*(uint *)(param_4 + 0xc) * 4),
                             0x3eb33333);
    }
    else {
      local_d8 = (undefined1  [16])0x0;
      local_c8 = (undefined1  [16])0x0;
      uVar9 = FUN_18015ba30(local_d8,"incgrenade",10);
      local_e8[0] = CONCAT44(local_e8[0]._4_4_,1);
      plVar3 = (longlong *)FUN_1803db750(uVar9,local_d8,0x3eb33333);
      FUN_18015c010(local_d8);
    }
    if ((plVar3 != (longlong *)0x0) && (*plVar3 != 0)) {
      auVar15._0_4_ = (float)(int)plVar3[4];
      auVar15._4_12_ = SUB1612(ZEXT816(0),4);
      auVar16 = ZEXT1664(auVar15);
      fVar14 = (float)*(int *)((longlong)plVar3 + 0x24);
      auVar18 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(*param_3 - auVar15._0_4_ * 0.5)),1);
      auVar12 = ZEXT1664(auVar18);
      fVar13 = fVar14 * 0.5;
      auVar2 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(auVar19._0_4_ - fVar13)),1);
      auVar11 = ZEXT1664(auVar2);
      local_e8[0] = CONCAT44(local_e8[0]._4_4_,0xff000000);
      fVar10 = 1.0;
      FUN_180435220(param_2,auVar18._0_4_ - 1.0,auVar2._0_8_,auVar15._0_8_,fVar14,*plVar3,
                    CONCAT44(uVar20,fVar17),fVar17,0x3f800000,0x3f800000,0xff000000);
      FUN_180435220(param_2,auVar12._0_4_ + fVar10,auVar11._0_8_,auVar16._0_8_,fVar14,*plVar3,fVar17
                    ,fVar17,fVar10,fVar10,0xff000000);
      FUN_180435220(param_2,auVar12._0_8_,auVar11._0_4_ - fVar10,auVar16._0_8_,fVar14,*plVar3,fVar17
                    ,fVar17,fVar10,fVar10,0xff000000);
      FUN_180435220(param_2,auVar12._0_8_,auVar11._0_4_ + fVar10,auVar16._0_8_,fVar14,*plVar3,fVar17
                    ,fVar17,fVar10,fVar10,0xff000000);
      FUN_180435220(param_2,auVar12._0_8_,auVar11._0_8_,auVar16._0_8_,fVar14,*plVar3,fVar17,fVar17,
                    fVar10,fVar10,*(undefined4 *)(param_5 + 0xc));
      auVar19 = ZEXT464((uint)(auVar19._0_4_ + fVar13 + fVar10));
    }
  }
  if ((bVar1 & 0xfd) == 0) {
    local_e8[0] = DAT_180b90858;
    puVar8 = local_e8;
    if (DAT_180b90858 == 0) {
      puVar8 = &DAT_180bbade0;
    }
    if (DAT_180bbadd0 == DAT_180bbadd8) {
      FUN_1801b6250(&DAT_180bbadc8);
    }
    else {
      *DAT_180bbadd0 = *puVar8;
      DAT_180bbadd0 = DAT_180bbadd0 + 1;
    }
    auVar18 = auVar19._0_16_;
    if (*(char *)(param_4 + 0x28) == '\0') {
      pcVar7 = (&PTR_DAT_1807d1608)[*(uint *)(param_4 + 0xc)];
    }
    else {
      pcVar7 = "incendiary";
    }
    lVar6 = -1;
    local_d8._8_8_ = -1;
    do {
      local_d8._8_8_ = local_d8._8_8_ + 1;
    } while (pcVar7[local_d8._8_8_] != '\0');
    if (DAT_180bbadc8 == DAT_180bbadd0) {
      uVar5 = DAT_180bbade0;
    }
    else {
      uVar5 = DAT_180bbadd0[-1];
    }
    if (uVar5 != 0) {
      local_d8._0_8_ = pcVar7;
      FUN_180430010(uVar5,local_e8,local_d8);
      auVar18 = auVar19._0_16_;
      fVar17 = (float)local_e8[0];
    }
    do {
      lVar6 = lVar6 + 1;
    } while (pcVar7[lVar6] != '\0');
    local_d8._8_8_ = lVar6;
    local_d8._0_8_ = pcVar7;
    auVar18 = vroundss_avx(ZEXT816(0),auVar18,1);
    auVar2 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(*param_3 - fVar17 * 0.5)),1);
    FUN_180434550(param_2,auVar2._0_8_,auVar18._0_8_,local_d8,*(undefined4 *)(param_5 + 8),1,0);
    if (1 < (ulonglong)((longlong)DAT_180bbadd0 - (longlong)DAT_180bbadc8 >> 3)) {
      DAT_180bbadd0 = DAT_180bbadd0 + -1;
    }
  }
  return;
}



