// FUN_1800dff10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800dff10 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800dff10(longlong param_1,undefined1 *param_2,longlong param_3,undefined4 param_4,
                  float param_5,float param_6)

{
  undefined1 uVar1;
  double dVar2;
  longlong lVar3;
  char cVar4;
  short sVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  char *pcVar9;
  undefined8 uVar10;
  undefined1 **ppuVar11;
  longlong lVar13;
  longlong lVar12;
  undefined1 **ppuVar14;
  undefined1 extraout_var [56];
  undefined1 auVar15 [64];
  undefined1 in_register_000012c4 [12];
  undefined1 auVar16 [64];
  undefined4 local_res20 [2];
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined7 uStack_a7;
  double dStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined1 *local_88;
  longlong local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_c8;
  auVar16 = ZEXT1664(CONCAT124(in_register_000012c4,param_4));
  dStack_a0 = -NAN;
  do {
    dStack_a0 = (double)((longlong)dStack_a0 + 1);
  } while (*(char *)(param_3 + (longlong)dStack_a0) != '\0');
  local_80 = -1;
  do {
    local_80 = local_80 + 1;
  } while (param_2[local_80] != '\0');
  local_38 = (undefined1 *)0x0;
  local_30 = 0;
  local_a8 = (undefined1)param_3;
  uStack_a7 = (undefined7)((ulonglong)param_3 >> 8);
  local_res20[0] = param_4;
  local_88 = param_2;
  uVar6 = FUN_1800aa290(&local_88,&local_a8);
  FUN_18015abc0(&local_38,0xc,&DAT_1806bbf8c,uVar6);
  local_58 = (undefined1  [16])0x0;
  local_48 = (undefined1  [16])0x0;
  lVar13 = -1;
  do {
    lVar12 = lVar13 + 1;
    lVar3 = lVar13 + 0x11;
    lVar13 = lVar12;
  } while (local_48[lVar3] != '\0');
  FUN_18015ba30(local_58,&local_38,lVar12);
  local_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  auVar16 = ZEXT1664(auVar16._0_16_);
  FUN_1800f4160(*(undefined8 *)(param_1 + 8),&local_78,local_58);
  puVar8 = *(undefined1 **)(param_1 + 8);
  local_a8 = SUB81(puVar8,0);
  uStack_a7 = (undefined7)((ulonglong)puVar8 >> 8);
  dStack_a0 = 0.0;
  uStack_98 = 0;
  local_90 = 0x8000000000000000;
  switch(*puVar8) {
  case 0:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*puVar8) {
    case 1:
      goto switchD_1800e003c_caseD_1;
    case 2:
      goto switchD_1800e003c_caseD_2;
    }
  default:
    local_90 = 1;
    break;
  case 1:
switchD_1800e003c_caseD_1:
    dStack_a0 = **(double **)(puVar8 + 8);
    break;
  case 2:
switchD_1800e003c_caseD_2:
    uStack_98 = *(undefined8 *)(*(longlong *)(puVar8 + 8) + 8);
  }
  cVar4 = FUN_1800e6ca0(&local_78,&local_a8);
  if (cVar4 == '\0') {
    pcVar9 = (char *)FUN_1800f34a0(&local_78);
    if ((*pcVar9 == '\x05') || ((byte)(*pcVar9 - 6U) < 2)) {
      uVar10 = FUN_1800f34a0(&local_78);
      auVar15._0_8_ = FUN_1800e6880(uVar10);
      auVar15._8_56_ = extraout_var;
      auVar16 = ZEXT1664(auVar15._0_16_);
      local_88 = (undefined1 *)CONCAT44(local_88._4_4_,(int)auVar15._0_8_);
    }
    else {
      local_88 = (undefined1 *)CONCAT44(local_88._4_4_,auVar16._0_4_);
    }
    local_38 = &local_a8;
    sVar5 = thunk_FUN_180624430(auVar16._0_8_);
    if (sVar5 < 1) {
      ppuVar11 = (undefined1 **)&param_5;
      if (param_5 <= auVar16._0_4_) {
        ppuVar11 = &local_88;
      }
      ppuVar14 = (undefined1 **)&param_6;
      if (auVar16._0_4_ <= param_6) {
        ppuVar14 = ppuVar11;
      }
    }
    else {
      ppuVar14 = (undefined1 **)local_res20;
    }
    local_a8 = 0;
    uStack_a7 = 0;
    dStack_a0 = 0.0;
    FUN_1801409d0(&dStack_a0,0);
    local_a8 = 7;
    dStack_a0 = (double)*(float *)ppuVar14;
    puVar8 = (undefined1 *)FUN_1800f3560(&local_78);
    uVar1 = *puVar8;
    *puVar8 = local_a8;
    dVar2 = *(double *)(puVar8 + 8);
    *(double *)(puVar8 + 8) = dStack_a0;
    local_a8 = uVar1;
    dStack_a0 = dVar2;
    FUN_1801409d0(&dStack_a0,uVar1);
  }
  else if (**(char **)(param_1 + 0x10) == '\0') {
    local_88 = &local_a8;
    local_a8 = 0;
    uStack_a7 = 0;
    dStack_a0 = 0.0;
    FUN_1801409d0(&dStack_a0,0);
    local_a8 = 7;
    dStack_a0 = (double)auVar16._0_4_;
    uVar10 = *(undefined8 *)(param_1 + 8);
    uVar7 = FUN_18015b360(&local_78,local_58);
    puVar8 = (undefined1 *)FUN_1800f43d0(uVar10,uVar7);
    uVar1 = *puVar8;
    *puVar8 = local_a8;
    dVar2 = *(double *)(puVar8 + 8);
    *(double *)(puVar8 + 8) = dStack_a0;
    local_a8 = uVar1;
    dStack_a0 = dVar2;
    FUN_1801409d0(&dStack_a0,uVar1);
  }
  FUN_18015c010(local_58);
}



