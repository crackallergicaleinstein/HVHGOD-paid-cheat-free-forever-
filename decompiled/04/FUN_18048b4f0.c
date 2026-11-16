// FUN_18048b4f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18048b4f0 */

bool FUN_18048b4f0(longlong param_1,undefined8 param_2,int *param_3,longlong *param_4,char param_5,
                  undefined8 param_6,undefined8 param_7)

{
  undefined2 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined8 *puVar5;
  undefined8 uVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  undefined2 *puVar11;
  uint uVar12;
  undefined4 uVar13;
  uint uVar14;
  bool bVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_res8;
  float local_resc;
  undefined8 in_stack_ffffffffffffff38;
  ulonglong uVar19;
  undefined4 uVar20;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68;
  longlong lStack_60;
  
  lVar3 = DAT_180bb8ae8;
  cVar7 = '#';
  *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
  plVar2 = *(longlong **)(lVar3 + 0x14d0);
  pcVar10 = "##value";
  uVar14 = ~*(uint *)(plVar2[0x22] + -4 + (longlong)(int)plVar2[0x21] * 4);
  uVar12 = uVar14;
  do {
    pcVar10 = pcVar10 + 1;
    if (((cVar7 == '#') && (*pcVar10 == '#')) && (pcVar10[1] == '#')) {
      pcVar10 = pcVar10 + 2;
      uVar12 = uVar14;
    }
    else {
      uVar12 = crc32(uVar12,cVar7);
    }
    cVar7 = *pcVar10;
  } while (cVar7 != '\0');
  uVar12 = ~uVar12;
  if (*(uint *)(*plVar2 + 0x1534) == uVar12) {
    FUN_1804cf810(uVar12,0xb,"##value");
  }
  cVar7 = param_5;
  uVar19 = CONCAT71((int7)((ulonglong)in_stack_ffffffffffffff38 >> 8),param_5);
  puVar11 = (undefined2 *)FUN_1804aad60(&param_5,uVar12,param_2,param_1 + 8,uVar19);
  uVar1 = *puVar11;
  if ((*(int *)(DAT_180bb8ae8 + 0x2008) < *(int *)(DAT_180bb8ae8 + 0x1ff8)) &&
     (*(uint *)((longlong)*(int *)(DAT_180bb8ae8 + 0x2008) * 0x38 +
               *(longlong *)(DAT_180bb8ae8 + 0x2000)) == uVar12)) {
    bVar15 = true;
  }
  else {
    bVar15 = false;
  }
  if ((*(char *)(puVar11 + 1) != '\0') && (!bVar15)) {
    FUN_1804c7740(uVar12,0);
  }
  fVar16 = DAT_180b0a41c;
  iVar9 = *param_3;
  if (iVar9 < 0) {
    iVar9 = 0;
  }
  else {
    iVar8 = (int)param_4[1] + -1;
    if (iVar8 < iVar9) {
      iVar9 = iVar8;
    }
  }
  fVar18 = DAT_180b0a41c * 2.0;
  lVar3 = *param_4;
  *param_3 = iVar9;
  uVar6 = DAT_180c62ca8;
  fVar18 = *(float *)(param_1 + 0x14) - fVar18;
  fVar17 = fVar18 - fVar16 * 6.5;
  param_6 = *(undefined8 *)(lVar3 + (longlong)iVar9 * 8);
  auVar4 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(fVar16 * 13.2 + 0.5)),1);
  auVar4 = vmaxss_avx(SUB6416(ZEXT464(0x3f800000),0),auVar4);
  uVar19 = uVar19 & 0xffffffff00000000;
  FUN_1804ea040(&local_res8,DAT_180c62ca8,auVar4._0_8_,0x7f7fffff,uVar19,param_6,0,0,0);
  uVar20 = (undefined4)(uVar19 >> 0x20);
  local_res8 = fVar17 - local_res8;
  if (cVar7 == '\0') {
    uVar13 = DAT_180b0a450;
  }
  else if ((bVar15) || ((char)uVar1 != '\0')) {
    uVar13 = DAT_1808da478;
  }
  else {
    uVar13 = DAT_1808da474;
  }
  fVar16 = (float)FUN_180463350(uVar6,0x41533333);
  local_resc = *(float *)(param_1 + 0x10) - fVar16 * 0.5;
  FUN_180463450(plVar2[0x59],uVar6,0x41533333,&local_res8,CONCAT44(uVar20,uVar13),param_6,0);
  local_resc = *(float *)(param_1 + 0x10);
  local_res8 = fVar18;
  FUN_1804648c0(plVar2[0x59],&local_res8,DAT_180b0a41c * 1.8,DAT_180b0a41c * 3.6,uVar13,
                DAT_180b0a41c * 1.5);
  puVar5 = (undefined8 *)CONCAT44(param_7._4_4_,(float)param_7);
  bVar15 = false;
  if ((puVar5[1] == 0) && (puVar5[3] == 0)) {
    fVar16 = 140.0;
  }
  else {
    fVar16 = 228.0;
  }
  param_7._4_4_ = *(undefined4 *)(param_1 + 4);
  param_7._0_4_ = *(float *)(param_1 + 8) - fVar16 * DAT_180b0a41c;
  cVar7 = FUN_1804a8ab0(uVar12,&param_7,param_1 + 8);
  if (cVar7 != '\0') {
    local_88 = puVar5[2];
    uStack_80 = puVar5[3];
    local_78 = *puVar5;
    uStack_70 = puVar5[1];
    local_68 = *param_4;
    lStack_60 = param_4[1];
    iVar9 = FUN_1804a9370(&local_68,*param_3,0,&local_78,&local_88);
    if (-1 < iVar9) {
      bVar15 = *param_3 != iVar9;
      *param_3 = iVar9;
      FUN_1804c7bf0();
    }
    FUN_1804aeac0();
  }
  return bVar15;
}



