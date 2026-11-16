// FUN_1800d3b30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800d3b30 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800d3b30(byte *param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  char cVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  longlong lVar10;
  double dVar11;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined1 local_88 [16];
  byte *local_78 [2];
  byte *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_b8;
  local_88._0_8_ = "theme";
  local_88._8_8_ = 5;
  local_98 = 0;
  local_78[0] = param_1;
  FUN_1800d3ed0(local_78,local_88,0,4);
  local_88._0_8_ = "effect";
  local_88._8_8_ = 6;
  local_98 = 0;
  FUN_1800d3ed0(local_78,local_88,0,4);
  local_88._0_8_ = "duration ms";
  local_88._8_8_ = 0xb;
  local_98 = 200;
  FUN_1800d3ed0(local_78,local_88,100,400);
  local_88._0_8_ = "motion";
  local_88._8_8_ = 6;
  local_98 = 0;
  FUN_1800d3ed0(local_78,local_88,0,1);
  local_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  local_28 = (undefined1 *)0x0;
  local_20 = 0;
  local_88._8_8_ = 9;
  local_88._0_8_ = "character";
  local_68 = (byte *)0x1806be990;
  uStack_60 = 0xf;
  uVar6 = FUN_1800aa290(&local_68,local_88);
  FUN_18015abc0(&local_28,0xc,&DAT_1806bbf8c,uVar6);
  local_68 = (byte *)0x0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  lVar10 = -1;
  do {
    lVar2 = lVar10 + 1;
    lVar10 = lVar10 + 1;
  } while (*(char *)((longlong)&local_28 + lVar2) != '\0');
  FUN_18015ba30(&local_68,&local_28);
  FUN_1800f4160(param_1,&local_48,&local_68);
  FUN_18015c010(&local_68);
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0x8000000000000000;
  switch(*param_1) {
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
    switch(*param_1) {
    case 1:
      goto switchD_1800d3d05_caseD_1;
    case 2:
      goto switchD_1800d3d05_caseD_2;
    }
  default:
    uStack_50 = 1;
    break;
  case 1:
switchD_1800d3d05_caseD_1:
    uStack_60 = **(undefined8 **)(param_1 + 8);
    break;
  case 2:
switchD_1800d3d05_caseD_2:
    local_58 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 8);
  }
  local_68 = param_1;
  cVar5 = FUN_1800e6ca0(&local_48,&local_68);
  if (cVar5 == '\0') {
    pcVar7 = (char *)FUN_1800f34a0(&local_48);
    if ((*pcVar7 == '\x05') || (*pcVar7 == '\x06')) {
      uVar8 = FUN_1800f34a0(&local_48);
      dVar11 = (double)FUN_1800ea420(uVar8);
      if (0.0 <= dVar11) {
        uVar8 = FUN_1800f34a0(&local_48);
        dVar11 = (double)FUN_1800ea420(uVar8);
        if (dVar11 <= 2.0) goto LAB_1800d3df7;
      }
    }
    local_28 = local_88;
    local_88 = ZEXT816(0);
    FUN_1801409d0(local_88 + 8,0);
    local_88[0] = 5;
    local_88._8_8_ = 0;
    puVar9 = (undefined1 *)FUN_1800f3560(&local_48);
    auVar3 = local_88;
    uVar1 = *puVar9;
    *puVar9 = local_88[0];
    local_88[0] = uVar1;
    auVar4 = local_88;
    uVar8 = *(undefined8 *)(puVar9 + 8);
    local_88._8_8_ = auVar3._8_8_;
    *(undefined8 *)(puVar9 + 8) = local_88._8_8_;
    local_88._0_8_ = auVar4._0_8_;
    local_88._8_8_ = uVar8;
    FUN_1801409d0(local_88 + 8,uVar1);
  }
LAB_1800d3df7:
  local_68 = (byte *)0x1806be9d8;
  uStack_60 = 0x10;
  local_98 = 1;
  FUN_1800d3ed0(local_78,&local_68,0,1);
  local_68 = (byte *)0x1806be9f0;
  uStack_60 = 0x12;
  local_98 = 0;
  FUN_1800d3ed0(local_78,&local_68,0,1);
}



