// FUN_180486160 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180486160 */

undefined1 FUN_180486160(undefined8 *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  longlong *plVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  bool bVar6;
  undefined4 uVar7;
  char *pcVar8;
  undefined2 *puVar9;
  char cVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [64];
  float fVar18;
  float local_res8;
  undefined4 local_resc;
  float local_res18;
  float local_res1c;
  float local_res20;
  float local_res24;
  undefined4 uVar19;
  undefined1 local_98 [8];
  undefined4 local_90;
  
  fVar16 = (float)*(int *)((longlong)param_1 + 0x2c) * 30.855553 +
           *(float *)((longlong)param_1 + 0x14) + 0.1;
  plVar3 = *(longlong **)(DAT_180bb8ae8 + 0x14d0);
  fVar18 = 0.5;
  auVar4 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(fVar16 * DAT_180b0a41c + 0.5)),1);
  fVar15 = auVar4._0_4_ + *(float *)((longlong)param_1 + 0xc);
  auVar4 = vroundss_avx(ZEXT816(0),ZEXT416((uint)((fVar16 + 30.855553) * DAT_180b0a41c + 0.5)),1);
  fVar16 = auVar4._0_4_ + *(float *)((longlong)param_1 + 0xc);
  pcVar8 = "#row";
  uVar11 = ~*(uint *)(plVar3[0x22] + -4 + (longlong)(int)plVar3[0x21] * 4);
  cVar10 = '#';
  uVar13 = uVar11;
  do {
    if (((cVar10 == '#') && (*pcVar8 == '#')) && (pcVar8[1] == '#')) {
      pcVar8 = pcVar8 + 2;
      uVar13 = uVar11;
    }
    else {
      uVar13 = crc32(uVar13,cVar10);
    }
    cVar10 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar10 != '\0');
  uVar13 = ~uVar13;
  if (*(uint *)(*plVar3 + 0x1534) == uVar13) {
    FUN_1804cf810(uVar13,0xb,&DAT_180857e90);
  }
  auVar17 = ZEXT464(0x3f800000);
  auVar4 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c + 0.25)),1);
  auVar4 = vmaxss_avx(auVar17._0_16_,auVar4);
  auVar5 = vroundss_avx(ZEXT816(0),
                        ZEXT416((uint)((*(float *)(param_1 + 2) + *(float *)(param_1 + 3)) *
                                       DAT_180b0a41c + fVar18)),1);
  local_res18 = (auVar5._0_4_ + *(float *)(param_1 + 1)) - auVar4._0_4_;
  auVar5 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(*(float *)(param_1 + 2) * DAT_180b0a41c + fVar18))
                        ,1);
  local_res20 = auVar5._0_4_ + *(float *)(param_1 + 1) + auVar4._0_4_;
  local_res1c = fVar16;
  local_res24 = fVar15;
  puVar9 = (undefined2 *)FUN_1804aad60(&local_res8,uVar13,&local_res20,&local_res18,1);
  uVar14 = auVar17._0_8_;
  uVar2 = *puVar9;
  plVar3 = *(longlong **)(DAT_180bb8ae8 + 0x14d0);
  uVar1 = *(undefined1 *)(puVar9 + 1);
  pcVar8 = "##settings";
  uVar12 = ~*(uint *)(plVar3[0x22] + -4 + (longlong)(int)plVar3[0x21] * 4);
  cVar10 = '#';
  uVar11 = uVar12;
  do {
    pcVar8 = pcVar8 + 1;
    if (((cVar10 == '#') && (*pcVar8 == '#')) && (pcVar8[1] == '#')) {
      pcVar8 = pcVar8 + 2;
      uVar11 = uVar12;
    }
    else {
      uVar11 = crc32(uVar11,cVar10);
    }
    cVar10 = *pcVar8;
  } while (cVar10 != '\0');
  uVar11 = ~uVar11;
  if (*(uint *)(*plVar3 + 0x1534) == uVar11) {
    FUN_1804cf810(uVar11,0xb,"##settings");
    uVar14 = auVar17._0_8_;
  }
  if ((*(int *)(DAT_180bb8ae8 + 0x2008) < *(int *)(DAT_180bb8ae8 + 0x1ff8)) &&
     (*(uint *)((longlong)*(int *)(DAT_180bb8ae8 + 0x2008) * 0x38 +
               *(longlong *)(DAT_180bb8ae8 + 0x2000)) == uVar11)) {
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  if (((char)uVar2 == '\0') && (!bVar6)) {
    uVar14 = 0;
  }
  uVar14 = FUN_1804aaa10(uVar13 + 1,uVar14,0x41900000);
  uVar19 = 0;
  FUN_180485a70(param_1,local_98,param_2,1,(int)uVar14,0);
  fVar16 = DAT_180b0a41c * 1.6;
  auVar4 = vroundss_avx(ZEXT816(0),
                        ZEXT416((uint)(((*(float *)(param_1 + 3) + *(float *)(param_1 + 2)) -
                                       *(float *)(param_1 + 4)) * DAT_180b0a41c + fVar18)),1);
  local_resc = local_90;
  local_res8 = (auVar4._0_4_ + *(float *)(param_1 + 1)) - DAT_180b0a41c * 4.0;
  fVar15 = DAT_180b0a41c;
  uVar7 = FUN_180462ad0(DAT_180b0a518,DAT_180b0a424,uVar14);
  FUN_1804648c0(*param_1,&local_res8,fVar15 * 2.3,fVar15 * 4.4,uVar7,CONCAT44(uVar19,fVar16));
  return uVar1;
}



