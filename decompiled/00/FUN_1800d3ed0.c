// FUN_1800d3ed0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800d3ed0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800d3ed0(undefined8 *param_1,undefined8 *param_2,int param_3,int param_4,int param_5)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  char cVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  double dVar11;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [16];
  byte *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_a8;
  local_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uVar9 = *param_1;
  local_38 = (undefined1 *)0x0;
  local_30 = 0;
  local_78 = (byte *)*param_2;
  uStack_70 = param_2[1];
  local_88._8_8_ = 0xf;
  local_88._0_8_ = "menu appearance";
  uVar6 = FUN_1800aa290(local_88,&local_78);
  FUN_18015abc0(&local_38,0xc,&DAT_1806bbf8c,uVar6);
  local_78 = (byte *)0x0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  lVar10 = -1;
  do {
    lVar2 = lVar10 + 1;
    lVar10 = lVar10 + 1;
  } while (*(char *)((longlong)&local_38 + lVar2) != '\0');
  FUN_18015ba30(&local_78,&local_38);
  FUN_1800f4160(uVar9,&local_58,&local_78);
  FUN_18015c010(&local_78);
  local_78 = (byte *)*param_1;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0x8000000000000000;
  switch(*local_78) {
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
    switch(*local_78) {
    case 1:
      goto switchD_1800d3ff4_caseD_1;
    case 2:
      goto switchD_1800d3ff4_caseD_2;
    }
  default:
    uStack_60 = 1;
    break;
  case 1:
switchD_1800d3ff4_caseD_1:
    uStack_70 = **(undefined8 **)(local_78 + 8);
    break;
  case 2:
switchD_1800d3ff4_caseD_2:
    local_68 = *(undefined8 *)(*(longlong *)(local_78 + 8) + 8);
  }
  cVar5 = FUN_1800e6ca0(&local_58,&local_78);
  if (cVar5 == '\0') {
    pcVar7 = (char *)FUN_1800f34a0(&local_58);
    if ((*pcVar7 == '\x05') || (*pcVar7 == '\x06')) {
      uVar9 = FUN_1800f34a0(&local_58);
      dVar11 = (double)FUN_1800ea420(uVar9);
      if ((double)param_3 <= dVar11) {
        uVar9 = FUN_1800f34a0(&local_58);
        dVar11 = (double)FUN_1800ea420(uVar9);
        if ((double)param_4 < dVar11) {
          local_38 = local_88;
          local_88 = ZEXT816(0);
          FUN_1801409d0(local_88 + 8,0);
          local_88[0] = 5;
          local_88._8_8_ = (longlong)param_4;
          puVar8 = (undefined1 *)FUN_1800f3560(&local_58);
          auVar3 = local_88;
          uVar1 = *puVar8;
          *puVar8 = local_88[0];
          local_88[0] = uVar1;
          auVar4 = local_88;
          uVar9 = *(undefined8 *)(puVar8 + 8);
          local_88._8_8_ = auVar3._8_8_;
          *(undefined8 *)(puVar8 + 8) = local_88._8_8_;
          local_88._0_8_ = auVar4._0_8_;
          local_88._8_8_ = uVar9;
          FUN_1801409d0(local_88 + 8,uVar1);
        }
      }
      else {
        local_38 = local_88;
        local_88 = ZEXT816(0);
        FUN_1801409d0(local_88 + 8,0);
        local_88[0] = 5;
        local_88._8_8_ = (longlong)param_3;
        puVar8 = (undefined1 *)FUN_1800f3560(&local_58);
        auVar3 = local_88;
        uVar1 = *puVar8;
        *puVar8 = local_88[0];
        local_88[0] = uVar1;
        auVar4 = local_88;
        uVar9 = *(undefined8 *)(puVar8 + 8);
        local_88._8_8_ = auVar3._8_8_;
        *(undefined8 *)(puVar8 + 8) = local_88._8_8_;
        local_88._0_8_ = auVar4._0_8_;
        local_88._8_8_ = uVar9;
        FUN_1801409d0(local_88 + 8,uVar1);
      }
    }
    else {
      local_38 = local_88;
      local_88 = ZEXT816(0);
      FUN_1801409d0(local_88 + 8,0);
      local_88[0] = 5;
      local_88._8_8_ = (longlong)param_5;
      puVar8 = (undefined1 *)FUN_1800f3560(&local_58);
      auVar3 = local_88;
      uVar1 = *puVar8;
      *puVar8 = local_88[0];
      local_88[0] = uVar1;
      auVar4 = local_88;
      uVar9 = *(undefined8 *)(puVar8 + 8);
      local_88._8_8_ = auVar3._8_8_;
      *(undefined8 *)(puVar8 + 8) = local_88._8_8_;
      local_88._0_8_ = auVar4._0_8_;
      local_88._8_8_ = uVar9;
      FUN_1801409d0(local_88 + 8,uVar1);
    }
  }
}



