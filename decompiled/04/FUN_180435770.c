// FUN_180435770 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180435770 */

void FUN_180435770(undefined8 param_1,float param_2,float param_3,undefined8 param_4,float param_5,
                  longlong **param_6,longlong *param_7)

{
  float fVar1;
  undefined1 auVar2 [16];
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  longlong **pplVar6;
  longlong **pplVar7;
  longlong **pplVar8;
  undefined8 uVar9;
  undefined1 in_ZMM3 [64];
  undefined1 auVar10 [64];
  float fVar11;
  undefined1 auVar12 [64];
  undefined1 auVar13 [64];
  undefined1 auVar14 [64];
  undefined1 auVar15 [64];
  undefined4 uVar16;
  longlong *local_a8;
  float local_a0 [38];
  
  auVar12 = ZEXT1664(in_ZMM3._0_16_);
  if (*param_7 != param_7[1]) {
    param_7[1] = *param_7;
  }
  uVar16 = 0;
  uVar3 = (ulonglong)local_a8 >> 0x20;
  local_a8 = (longlong *)(uVar3 << 0x20);
  pplVar8 = (longlong **)((longlong)param_6 + 4);
  auVar2 = vminss_avx(ZEXT416((uint)param_5),in_ZMM3._0_16_);
  local_a0[0] = auVar2._0_4_ * 0.5;
  pplVar7 = &local_a8;
  if (0.0 <= *(float *)param_6) {
    pplVar7 = param_6;
  }
  pplVar6 = (longlong **)local_a0;
  if (*(float *)param_6 <= local_a0[0]) {
    pplVar6 = pplVar7;
  }
  fVar11 = *(float *)pplVar6;
  auVar10 = ZEXT464((uint)fVar11);
  *(float *)param_6 = fVar11;
  local_a8 = (longlong *)(uVar3 << 0x20);
  pplVar7 = &local_a8;
  if (0.0 <= *(float *)pplVar8) {
    pplVar7 = pplVar8;
  }
  pplVar6 = (longlong **)local_a0;
  if (*(float *)pplVar8 <= local_a0[0]) {
    pplVar6 = pplVar7;
  }
  auVar13 = ZEXT464((uint)*(float *)pplVar6);
  *(float *)pplVar8 = *(float *)pplVar6;
  local_a8 = (longlong *)(uVar3 << 0x20);
  pplVar8 = param_6 + 1;
  pplVar7 = &local_a8;
  if (0.0 <= *(float *)pplVar8) {
    pplVar7 = pplVar8;
  }
  pplVar6 = (longlong **)local_a0;
  if (*(float *)pplVar8 <= local_a0[0]) {
    pplVar6 = pplVar7;
  }
  auVar14 = ZEXT464((uint)*(float *)pplVar6);
  *(float *)pplVar8 = *(float *)pplVar6;
  fVar1 = *(float *)((longlong)param_6 + 0xc);
  local_a8 = (longlong *)(uVar3 << 0x20);
  pplVar8 = &local_a8;
  if (0.0 <= fVar1) {
    pplVar8 = (longlong **)((longlong)param_6 + 0xc);
  }
  pplVar7 = (longlong **)local_a0;
  if (fVar1 <= local_a0[0]) {
    pplVar7 = pplVar8;
  }
  auVar15 = ZEXT464((uint)*(float *)pplVar7);
  local_a8 = param_7;
  iVar4 = FUN_180435700(fVar1,fVar11);
  iVar5 = (int)(iVar4 + (iVar4 >> 0x1f & 3U)) >> 2;
  iVar4 = 1;
  if (1 < iVar5) {
    iVar4 = iVar5;
  }
  uVar9 = FUN_180435a10(&local_a8,auVar10._0_4_ + param_2,auVar10._0_4_ + param_3,auVar10._0_8_,
                        0x40490fdb,iVar4);
  iVar4 = FUN_180435700(uVar9,auVar13._0_8_);
  iVar5 = (int)(iVar4 + (iVar4 >> 0x1f & 3U)) >> 2;
  fVar11 = param_2 + auVar12._0_4_;
  iVar4 = 1;
  if (1 < iVar5) {
    iVar4 = iVar5;
  }
  uVar9 = FUN_180435a10(&local_a8,fVar11 - auVar13._0_4_,auVar13._0_4_ + param_3,auVar13._0_8_,
                        0x4096cbe4,iVar4);
  iVar4 = FUN_180435700(uVar9,auVar14._0_8_);
  iVar5 = (int)(iVar4 + (iVar4 >> 0x1f & 3U)) >> 2;
  param_3 = param_3 + param_5;
  iVar4 = 1;
  if (1 < iVar5) {
    iVar4 = iVar5;
  }
  uVar9 = FUN_180435a10(&local_a8,fVar11 - auVar14._0_4_,param_3 - auVar14._0_4_,auVar14._0_8_,
                        uVar16,iVar4);
  iVar4 = FUN_180435700(uVar9,auVar15._0_8_);
  iVar5 = (int)(iVar4 + (iVar4 >> 0x1f & 3U)) >> 2;
  iVar4 = 1;
  if (1 < iVar5) {
    iVar4 = iVar5;
  }
  FUN_180435a10(&local_a8,auVar15._0_4_ + param_2,param_3 - auVar15._0_4_,auVar15._0_8_,0x3fc90fdb,
                iVar4);
  return;
}



