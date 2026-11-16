// FUN_1800ac950 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800ac950 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1800ac950(undefined8 param_1)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  byte bVar8;
  undefined4 *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined1 auStack_c8 [32];
  char local_a8 [8];
  byte *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80 [2];
  undefined1 local_78 [8];
  byte *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  byte local_50 [8];
  undefined8 local_48;
  undefined1 local_40 [16];
  ulonglong local_30;
  
  local_30 = DAT_1808d5f00 ^ (ulonglong)auStack_c8;
  cVar2 = FUN_1800e6540(param_1,&DAT_1806bbfa8);
  if (cVar2 == '\0') {
  }
  cVar2 = FUN_1800e6540(param_1,&DAT_1806bbee0);
  if (cVar2 != '\0') {
    local_a0 = (byte *)0x0;
    uStack_98 = 0;
    local_90 = 0;
    uStack_88 = 0;
    FUN_18015ba30(&local_a0,&DAT_1806bbee0,1);
    pcVar4 = (char *)FUN_180113610(param_1,&local_a0);
    FUN_18015c010(&local_a0);
    if ((*pcVar4 != '\x05') && (*pcVar4 != '\x06')) {
    }
    local_a0 = (byte *)0x0;
    uStack_98 = 0;
    local_90 = 0;
    uStack_88 = 0;
    FUN_18015ba30(&local_a0,&DAT_1806bbee0,1);
    uVar5 = FUN_180113610(param_1,&local_a0);
    FUN_18015c010(&local_a0);
    local_40 = ZEXT816(0);
    FUN_1801409d0(local_40 + 8,0);
    local_40[0] = 5;
    local_40._8_8_ = 1;
    FUN_180112ae0(uVar5,local_a8,local_40);
    FUN_1801409d0(local_40 + 8,local_40[0]);
    if (local_a8[0] == -1) {
    }
    local_a0 = (byte *)0x0;
    uStack_98 = 0;
    local_90 = 0;
    uStack_88 = 0;
    FUN_18015ba30(&local_a0,&DAT_1806bbee0,1);
    uVar5 = FUN_180113610(param_1,&local_a0);
    FUN_18015c010(&local_a0);
    local_40 = ZEXT816(0);
    FUN_1801409d0(local_40 + 8,0);
    local_40[0] = 5;
    local_40._8_8_ = 0xc;
    FUN_180112ae0(uVar5,local_a8,local_40);
    FUN_1801409d0(local_40 + 8,local_40[0]);
    if ('\0' < local_a8[0]) {
    }
  }
  local_a0 = (byte *)0x0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  FUN_18015ba30(&local_a0,&DAT_1806bbfa8,1);
  uVar5 = FUN_180113610(param_1,&local_a0);
  FUN_18015c010(&local_a0);
  FUN_1800f4a50(local_50,uVar5);
  if (local_50[0] == 1) {
    puVar6 = (undefined8 *)FUN_1800aa200();
    local_80[0] = 1;
    iVar3 = FUN_1800e63a0(param_1,&DAT_1806bbee0,local_80);
    if ((code *)puVar6[7] != (code *)0x0) {
      (*(code *)puVar6[7])(local_50,iVar3,1);
    }
    pbVar10 = (byte *)(puVar6 + 3);
    if (iVar3 < 2) {
      pbVar11 = (byte *)(puVar6 + 5);
      if (*pbVar11 == 1) {
        cVar2 = FUN_1800f3db0(pbVar11);
        if (cVar2 == '\0') {
          pbVar10 = pbVar11;
        }
      }
    }
    puVar1 = (undefined4 *)puVar6[1];
    for (puVar9 = (undefined4 *)*puVar6; puVar9 != puVar1; puVar9 = puVar9 + 0x1c) {
      pbVar11 = &DAT_1806bbf8c;
      FUN_18015abc0(local_40,0xc,&DAT_1806bbf8c,*puVar9);
      local_68 = 0;
      uStack_60 = 0;
      local_58 = 0x8000000000000000;
      bVar8 = *pbVar10;
      local_70 = pbVar10;
      switch(bVar8) {
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
        switch(bVar8) {
        default:
          goto switchD_1800acc48_default;
        case 1:
          goto switchD_1800acc48_caseD_1;
        case 2:
          goto switchD_1800acc48_caseD_2;
        case 10:
        case 0xd:
        case 0xe:
        case 0xf:
        case 0x10:
        case 0x11:
        case 0x12:
        case 0x13:
          goto switchD_1800accfc_caseD_0;
        case 0xb:
        case 0x15:
          goto switchD_1800accfc_caseD_1;
        case 0xc:
        case 0x16:
          goto switchD_1800accfc_caseD_2;
        case 0x14:
        case 0x17:
        case 0x18:
        case 0x19:
        case 0x1a:
        case 0x1b:
        case 0x1c:
        case 0x1d:
          goto switchD_1800accfc_default;
        case 0x1e:
        case 0x21:
        case 0x22:
        case 0x23:
        case 0x24:
        case 0x25:
        case 0x26:
        case 0x27:
          goto switchD_1800acd81_caseD_0;
        case 0x1f:
        case 0x29:
          goto switchD_1800acd81_caseD_1;
        case 0x20:
        case 0x2a:
          goto switchD_1800acd81_caseD_2;
        case 0x28:
        case 0x2b:
        case 0x2c:
        case 0x2d:
        case 0x2e:
        case 0x2f:
        case 0x30:
        case 0x31:
          goto switchD_1800acd81_default;
        }
      case 1:
switchD_1800acc48_caseD_1:
        local_68 = **(undefined8 **)(pbVar10 + 8);
        break;
      case 2:
switchD_1800acc48_caseD_2:
        uStack_60 = *(undefined8 *)(*(longlong *)(pbVar10 + 8) + 8);
        break;
      default:
switchD_1800acc48_default:
        local_58 = 1;
      }
      if (*pbVar10 == 1) {
        puVar7 = (undefined8 *)FUN_1800f6de0(*(undefined8 *)(pbVar10 + 8),local_80,local_40);
        local_68 = *puVar7;
      }
      uVar5 = FUN_1800f3e20(pbVar10,&local_a0);
      cVar2 = FUN_1800e6ca0(&local_70,uVar5);
      if (cVar2 == '\0') {
        uVar5 = FUN_1800f3560(&local_70);
        FUN_1800ab210(uVar5,puVar9);
      }
      pbVar11 = local_50;
      local_70 = pbVar11;
      bVar8 = local_50[0];
      switch(local_50[0]) {
      case 0:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
switchD_1800accfc_caseD_0:
        local_58 = 0x8000000000000000;
        uStack_60 = 0;
        local_68 = 0;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(bVar8) {
        default:
          goto switchD_1800accfc_default;
        case 1:
          goto switchD_1800accfc_caseD_1;
        case 2:
          goto switchD_1800accfc_caseD_2;
        case 10:
        case 0xd:
        case 0xe:
        case 0xf:
        case 0x10:
        case 0x11:
        case 0x12:
        case 0x13:
          goto switchD_1800acd81_caseD_0;
        case 0xb:
        case 0x15:
          goto switchD_1800acd81_caseD_1;
        case 0xc:
        case 0x16:
          goto switchD_1800acd81_caseD_2;
        case 0x14:
        case 0x17:
        case 0x18:
        case 0x19:
        case 0x1a:
        case 0x1b:
        case 0x1c:
        case 0x1d:
          goto switchD_1800acd81_default;
        }
      case 1:
switchD_1800accfc_caseD_1:
        local_58 = 0x8000000000000000;
        uStack_60 = 0;
        local_68 = **(undefined8 **)(pbVar11 + 8);
        break;
      case 2:
switchD_1800accfc_caseD_2:
        local_58 = 0x8000000000000000;
        local_68 = 0;
        uStack_60 = *(undefined8 *)(*(longlong *)(pbVar11 + 8) + 8);
        break;
      default:
switchD_1800accfc_default:
        uStack_60 = 0;
        local_68 = 0;
        local_58 = 1;
      }
      if (local_50[0] == 1) {
        puVar7 = (undefined8 *)FUN_1800f6de0(local_48,local_78,local_40);
        local_68 = *puVar7;
      }
      pbVar11 = local_50;
      uStack_98 = 0;
      local_90 = 0;
      uStack_88 = 0x8000000000000000;
      local_a0 = pbVar11;
      bVar8 = local_50[0];
      switch(local_50[0]) {
      case 0:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
switchD_1800acd81_caseD_0:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(bVar8) {
        case 1:
          goto switchD_1800acd81_caseD_1;
        case 2:
          goto switchD_1800acd81_caseD_2;
        }
      default:
switchD_1800acd81_default:
        uStack_88 = 1;
        break;
      case 1:
switchD_1800acd81_caseD_1:
        uStack_98 = **(undefined8 **)(pbVar11 + 8);
        break;
      case 2:
switchD_1800acd81_caseD_2:
        local_90 = *(undefined8 *)(*(longlong *)(pbVar11 + 8) + 8);
      }
      cVar2 = FUN_1800e6ca0(&local_70,&local_a0);
      if (cVar2 == '\0') {
        uVar5 = FUN_1800f3560(&local_70);
        FUN_1800ab210(uVar5,puVar9);
      }
    }
    if ((code *)puVar6[8] != (code *)0x0) {
      (*(code *)puVar6[8])();
    }
  }
  FUN_1801409d0(&local_48,local_50[0]);
}



