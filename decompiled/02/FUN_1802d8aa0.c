// FUN_1802d8aa0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802d8aa0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802d8aa0(undefined8 param_1,longlong *param_2,void *param_3)

{
  char cVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  undefined1 auVar4 [16];
  short sVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined1 *puVar9;
  undefined **ppuVar10;
  longlong lVar11;
  longlong lVar12;
  byte bVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_8c8 [32];
  undefined **local_8a8;
  char *local_8a0;
  void *local_898;
  uint local_890;
  double local_888;
  double local_880;
  double local_878;
  double local_870;
  double local_868;
  double local_860;
  uint local_858;
  double local_850;
  double local_848;
  double local_840;
  double local_838;
  double local_830;
  double local_828;
  double local_820;
  double local_818;
  uint local_810;
  uint local_808;
  uint local_800;
  double local_7f8;
  double local_7f0;
  double local_7e8;
  char *local_7d8;
  undefined8 uStack_7d0;
  char **local_7c8;
  longlong *local_7c0;
  undefined1 local_7b8 [16];
  undefined8 local_7a8;
  ulonglong local_7a0;
  undefined1 local_798 [16];
  undefined1 auStack_788 [16];
  char *local_778;
  undefined8 local_770;
  void *local_768;
  longlong local_760;
  char *local_758;
  undefined8 local_750;
  undefined8 ****local_748;
  longlong local_740;
  longlong local_738 [4];
  undefined1 local_718 [32];
  undefined8 ****local_6f8;
  longlong lStack_6f0;
  longlong lStack_6e8;
  ulonglong uStack_6e0;
  char local_6d8 [1536];
  ulonglong local_d8;
  
  local_d8 = DAT_1808d5f00 ^ (ulonglong)auStack_8c8;
  auVar2._12_4_ = 0;
  auVar2._0_12_ = local_798._4_12_;
  local_798 = auVar2 << 0x20;
  cVar1 = *(char *)((longlong)param_2 + 0x13a4);
  if ((cVar1 == '\0') && (*param_2 != 0)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if ((char)param_2[0x274] == '\0') {
  }
  if (*(char *)((longlong)param_2 + 0x13a1) == '\0') {
  }
  if (*(char *)((longlong)param_2 + 0x13a9) == '\0') {
  }
  if (!bVar3) {
  }
  if (*(char *)((longlong)param_2 + 0x13a7) != '\0') {
  }
  if (*(char *)((longlong)param_2 + 0x13a2) != '\0') {
  }
  if (*(char *)((longlong)param_2 + 0x13a3) != '\0') {
  }
  uVar7 = FUN_1803db490(param_1,(int)param_2[2]);
  lVar11 = -1;
  lVar12 = -1;
  do {
    lVar12 = lVar12 + 1;
  } while (*(char *)((longlong)param_3 + lVar12) != '\0');
  if ((lVar12 != 6) || (iVar6 = memcmp(param_3,"spread",6), iVar6 != 0)) {
    lVar12 = -1;
    do {
      lVar12 = lVar12 + 1;
    } while (*(char *)((longlong)param_3 + lVar12) != '\0');
    if ((lVar12 != 0x13) || (iVar6 = memcmp(param_3,"trajectory mismatch",0x13), iVar6 != 0)) {
      lVar12 = -1;
      do {
        lVar12 = lVar12 + 1;
      } while (*(char *)((longlong)param_3 + lVar12) != '\0');
      if ((lVar12 != 9) || (iVar6 = memcmp(param_3,"occlusion",9), iVar6 != 0)) {
        lVar12 = -1;
        do {
          lVar12 = lVar12 + 1;
        } while (*(char *)((longlong)param_3 + lVar12) != '\0');
        if ((lVar12 != 0x10) || (iVar6 = memcmp(param_3,"prediction error",0x10), iVar6 != 0)) {
          lVar12 = -1;
          do {
            lVar12 = lVar12 + 1;
          } while (*(char *)((longlong)param_3 + lVar12) != '\0');
          if ((lVar12 != 0x16) ||
             (iVar6 = memcmp(param_3,"shootpos misprediction",0x16), iVar6 != 0)) {
            bVar13 = 0;
            goto LAB_1802d8c71;
          }
        }
      }
    }
  }
  bVar13 = 1;
LAB_1802d8c71:
  if (cVar1 == '\0') {
    local_7a0 = CONCAT44(local_7a0._4_4_,*(undefined4 *)((longlong)param_2 + 0x14));
    local_7b8._8_8_ = 0x7000000000000008;
    local_7b8._0_8_ = 0xb000000000000000;
    local_7c8 = (char **)0x2;
    local_7c0 = (longlong *)local_7b8;
    local_7d8 = "hitgroup: {}, damage: {:.0f}";
    uStack_7d0 = 0x1c;
    local_7a8 = uVar7;
    FUN_1801d97f0(local_738,&local_7d8,&local_7c8);
    plVar8 = local_738;
  }
  else {
    local_798 = (undefined1  [16])0x0;
    auStack_788 = (undefined1  [16])0x0;
    FUN_18015ba30(local_798,"manual shot",0xb);
    plVar8 = (longlong *)local_798;
  }
  local_6f8 = (undefined8 ****)*plVar8;
  lStack_6f0 = plVar8[1];
  lStack_6e8 = plVar8[2];
  uStack_6e0 = plVar8[3];
  *(undefined1 *)plVar8 = 0;
  plVar8[2] = 0;
  plVar8[3] = 0xf;
  if (cVar1 == '\0') {
    FUN_18015c010(local_738);
  }
  else {
    FUN_18015c010(local_798);
  }
  fVar15 = 100.0;
  if (*(char *)((longlong)param_2 + 0x13a4) == '\0') {
    fVar14 = *(float *)(param_2 + 3);
    fVar15 = 100.0;
    sVar5 = thunk_FUN_180624430();
    if (((sVar5 < 1) && (0.0 <= fVar14)) && (fVar14 <= 1.0)) {
      local_7c0 = (longlong *)CONCAT44(local_7c0._4_4_,fVar14 * fVar15);
      local_7c8 = (char **)0x7000000000000000;
      local_798._8_8_ = &local_7c8;
      local_798._0_8_ = 1;
      local_7d8 = ", hitchance: {:.0f}%";
      uStack_7d0 = 0x14;
      FUN_1801d97f0(local_7b8,&local_7d8,local_798);
      puVar9 = local_7b8;
      if (0xf < local_7a0) {
        puVar9 = (undefined1 *)local_7b8._0_8_;
      }
      FUN_18015b2a0(&local_6f8,puVar9,local_7a8);
      FUN_18015c010(local_7b8);
    }
  }
  if (bVar13 != 0) {
    FUN_18015b2a0(&local_6f8,", inferred from client evidence",0x1f);
  }
  FUN_18063ab10(local_6d8,0,0x600);
  local_868 = (double)CONCAT44(local_868._4_4_,(uint)*(byte *)((longlong)param_2 + 0x13a6));
  local_870 = (double)CONCAT44(local_870._4_4_,(uint)*(byte *)((longlong)param_2 + 0x13a5));
  local_878 = (double)CONCAT44(local_878._4_4_,(uint)bVar13);
  local_880 = (double)CONCAT44(local_880._4_4_,(uint)*(byte *)((longlong)param_2 + 0x13a9));
  local_888 = (double)CONCAT44(local_888._4_4_,(uint)*(byte *)(param_2 + 0x275));
  local_890 = (uint)*(byte *)((longlong)param_2 + 0x13a1);
  local_898 = (void *)CONCAT44(local_898._4_4_,(uint)*(byte *)(param_2 + 0x274));
  local_8a8 = (undefined **)param_2[0x273];
  local_8a0 = param_3;
  FUN_18015ad60(local_6d8,0x600,0xffffffffffffffff,
                "command=%lld reason=\"%s\" submitted=%d weapon_fire=%d engine_fire=%d impact=%d inferred=%d historical=%d predicted=%d"
               );
  ppuVar10 = &PTR_180700558;
  local_8a8 = &PTR_180700558;
  if (local_6d8[0] != '\0') {
    local_8a8 = (undefined **)&DAT_1806bcfc0;
  }
  local_8a0 = local_6d8;
  FUN_1800f6900(1);
  FUN_18063ab10(local_6d8,0,0x600);
  local_7e8 = (double)*(float *)((longlong)param_2 + 0x3c);
  local_7f0 = (double)*(float *)(param_2 + 7);
  local_7f8 = (double)*(float *)((longlong)param_2 + 0x34);
  local_818 = (double)(*(float *)(param_2 + 3) * fVar15);
  local_820 = (double)*(float *)((longlong)param_2 + 0x14);
  local_828 = (double)*(float *)(param_2 + 4);
  local_830 = (double)*(float *)((longlong)param_2 + 0x24);
  local_838 = (double)*(float *)((longlong)param_2 + 0x1c);
  local_840 = (double)*(float *)((longlong)param_2 + 0x13b4);
  local_848 = (double)*(float *)(param_2 + 0x276);
  local_850 = (double)*(float *)((longlong)param_2 + 0x13ac);
  local_860 = (double)*(float *)((longlong)param_2 + 0x4c);
  local_868 = (double)*(float *)(param_2 + 9);
  local_870 = (double)*(float *)((longlong)param_2 + 0x44);
  local_878 = (double)*(float *)((longlong)param_2 + 0x5c);
  local_880 = (double)*(float *)(param_2 + 0xb);
  local_888 = (double)*(float *)((longlong)param_2 + 0x54);
  local_800 = (uint)*(byte *)((longlong)param_2 + 0x41);
  local_808 = (uint)*(byte *)(param_2 + 8);
  local_810 = (uint)*(byte *)((longlong)param_2 + 0x13a4);
  local_858 = (uint)*(byte *)(param_2 + 0x277);
  local_890 = (uint)*(byte *)((longlong)param_2 + 0x13a9);
  local_8a0 = (char *)*param_2;
  local_8a8 = (undefined **)param_2[0x273];
  local_898 = param_3;
  local_798._0_8_ = local_7f8;
  FUN_18015ad60(local_6d8,0x600,0xffffffffffffffff,
                "command=%lld target=0x%llx reason=\"%s\" impact_valid=%d impact=(%.3f,%.3f,%.3f) shoot=(%.3f,%.3f,%.3f) server_shoot_valid=%d server_shoot=(%.3f,%.3f,%.3f) predicted_inaccuracy=%.7f server_inaccuracy=%.7f predicted_spread=%.7f expected_damage=%.2f hitchance=%.2f manual=%d no_spread=%d expected_direction_valid=%d expected_direction=(%.6f,%.6f,%.6f)"
               );
  if (local_6d8[0] != '\0') {
    ppuVar10 = (undefined **)&DAT_1806bcfc0;
  }
  local_8a0 = local_6d8;
  local_8a8 = ppuVar10;
  FUN_1800f6900(1);
  local_798._0_8_ = local_7b8;
  local_7a8 = 0;
  local_7a0 = 0xf;
  local_7b8._1_15_ = SUB1615((undefined1  [16])0x0,1);
  auVar4[0xf] = 0;
  auVar4._0_15_ = local_7b8._1_15_;
  local_7b8 = auVar4 << 8;
  local_778 = "reason";
  local_770 = 6;
  do {
    lVar11 = lVar11 + 1;
  } while (*(char *)((longlong)param_3 + lVar11) != '\0');
  local_758 = "additional";
  local_750 = 10;
  local_748 = &local_6f8;
  if (0xf < uStack_6e0) {
    local_748 = local_6f8;
  }
  local_740 = lStack_6e8;
  local_7c8 = &local_778;
  local_7c0 = local_738;
  local_7d8 = "logevents_missedshots_additional";
  uStack_7d0 = 0x20;
  local_768 = param_3;
  local_760 = lVar11;
  uVar7 = FUN_1802c8120(local_718,&local_7d8,&local_7c8);
  local_8a8 = (undefined **)local_7b8;
  FUN_1802d0f20(local_8a8,uVar7,2,"logevents_missedshots_additional");
  FUN_18015c010(&local_6f8);
}



