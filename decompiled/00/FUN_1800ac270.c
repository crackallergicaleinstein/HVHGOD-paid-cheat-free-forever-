// FUN_1800ac270 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800ac270 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1800ac270(char *param_1)

{
  byte *pbVar1;
  code *pcVar2;
  undefined4 *puVar3;
  char cVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  byte bVar10;
  undefined4 *puVar11;
  byte *pbVar12;
  undefined1 auStack_d8 [32];
  char local_b8 [8];
  undefined8 local_b0;
  byte *local_a8;
  longlong lStack_a0;
  undefined8 uStack_98;
  longlong lStack_90;
  byte local_88 [8];
  undefined8 local_80;
  byte *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined1 local_40 [16];
  ulonglong local_30;
  
  local_30 = DAT_1808d5f00 ^ (ulonglong)auStack_d8;
  cVar4 = FUN_1800e6540(param_1,"version");
  if ((cVar4 != '\0') && (cVar4 = FUN_1800e6540(param_1,"fields"), cVar4 != '\0')) {
    local_a8 = (byte *)0x0;
    lStack_a0 = 0;
    uStack_98 = 0;
    lStack_90 = 0;
    FUN_18015ba30(&local_a8,"version",7);
    pcVar6 = (char *)FUN_180113610(param_1,&local_a8);
    FUN_18015c010(&local_a8);
    if ((*pcVar6 == '\x05') || (*pcVar6 == '\x06')) {
      local_a8 = (byte *)0x0;
      lStack_a0 = 0;
      uStack_98 = 0;
      lStack_90 = 0;
      FUN_18015ba30(&local_a8,"version",7);
      uVar7 = FUN_180113610(param_1,&local_a8);
      FUN_18015c010(&local_a8);
      local_40 = ZEXT816(0);
      FUN_1801409d0(local_40 + 8,0);
      local_40[0] = 5;
      local_40._8_8_ = 1;
      FUN_180112ae0(uVar7,local_b8,local_40);
      FUN_1801409d0(local_40 + 8,local_40[0]);
      if (local_b8[0] != -1) {
        local_a8 = (byte *)0x0;
        lStack_a0 = 0;
        uStack_98 = 0;
        lStack_90 = 0;
        FUN_18015ba30(&local_a8,"version",7);
        uVar7 = FUN_180113610(param_1,&local_a8);
        FUN_18015c010(&local_a8);
        local_40 = ZEXT816(0);
        FUN_1801409d0(local_40 + 8,0);
        local_40[0] = 5;
        local_40._8_8_ = 0xc;
        FUN_180112ae0(uVar7,local_b8,local_40);
        FUN_1801409d0(local_40 + 8,local_40[0]);
        if (local_b8[0] < '\x01') {
          local_a8 = (byte *)0x0;
          lStack_a0 = 0;
          uStack_98 = 0;
          lStack_90 = 0;
          FUN_18015ba30(&local_a8,"fields",6);
          uVar7 = FUN_180113610(param_1,&local_a8);
          FUN_18015c010(&local_a8);
          FUN_1800f4a50(local_88,uVar7);
          if (local_88[0] == 1) {
            puVar8 = (undefined8 *)FUN_1800aa200();
            pcVar2 = (code *)puVar8[7];
            if (pcVar2 != (code *)0x0) {
              if (*param_1 != '\x01') {
                local_b0 = FUN_180112a50(param_1);
                uVar7 = FUN_1800f6bd0(&local_a8,"cannot use value() with ",&local_b0);
                FUN_1800f6ca0(&local_78,0x132,uVar7);
                    /* WARNING: Subroutine does not return */
                FUN_180606630(&local_78,&DAT_1808d1050);
              }
              local_a8 = (byte *)0x0;
              lStack_a0 = 0;
              uStack_98 = 0;
              lStack_90 = 0;
              FUN_1800e6b50(param_1,&local_a8,"version");
              uVar7 = FUN_1800f3e20(param_1,&local_78);
              cVar4 = FUN_1800e6ca0(&local_a8,uVar7);
              if (cVar4 == '\0') {
                switch(*local_a8) {
                default:
                  if (lStack_90 != 0) {
                    FUN_18015bae0(&local_a8,"cannot get value");
                    FUN_1800f6e80(&local_78,0xd6,&local_a8);
                    /* WARNING: Subroutine does not return */
                    FUN_180606630(&local_78,&DAT_1808d0fe8);
                  }
                  uVar5 = FUN_1800e62a0(local_a8);
                  break;
                case 1:
                  uVar5 = FUN_1800e62a0(lStack_a0 + 0x40);
                  break;
                case 2:
                  uVar5 = FUN_1800e62a0(uStack_98);
                }
              }
              else {
                uVar5 = 0xc;
              }
              (*pcVar2)(local_88,uVar5,0);
            }
            puVar11 = (undefined4 *)*puVar8;
            puVar3 = (undefined4 *)puVar8[1];
            if (puVar11 != puVar3) {
              pbVar1 = (byte *)(puVar8 + 3);
              do {
                FUN_18015abc0(local_40,0xc,&DAT_1806bbf8c,*puVar11);
                local_a8 = (byte *)0x0;
                lStack_a0 = 0;
                uStack_98 = 0;
                lStack_90 = 0;
                pbVar12 = local_40;
                FUN_1800e6b50(pbVar1,&local_a8);
                local_70 = 0;
                uStack_68 = 0;
                local_60 = 0x8000000000000000;
                bVar10 = *pbVar1;
                local_78 = pbVar1;
                switch(bVar10) {
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
                  switch(bVar10) {
                  default:
                    goto switchD_1800ac5e4_default;
                  case 1:
                    goto switchD_1800ac5e4_caseD_1;
                  case 2:
                    goto switchD_1800ac5e4_caseD_2;
                  case 10:
                  case 0xd:
                  case 0xe:
                  case 0xf:
                  case 0x10:
                  case 0x11:
                  case 0x12:
                  case 0x13:
                    goto switchD_1800ac670_caseD_0;
                  case 0xb:
                  case 0x15:
                    goto switchD_1800ac670_caseD_1;
                  case 0xc:
                  case 0x16:
                    goto switchD_1800ac670_caseD_2;
                  case 0x14:
                  case 0x17:
                  case 0x18:
                  case 0x19:
                  case 0x1a:
                  case 0x1b:
                  case 0x1c:
                  case 0x1d:
                    goto switchD_1800ac670_default;
                  case 0x1e:
                  case 0x21:
                  case 0x22:
                  case 0x23:
                  case 0x24:
                  case 0x25:
                  case 0x26:
                  case 0x27:
                    goto switchD_1800ac6f5_caseD_0;
                  case 0x1f:
                  case 0x29:
                    goto switchD_1800ac6f5_caseD_1;
                  case 0x20:
                  case 0x2a:
                    goto switchD_1800ac6f5_caseD_2;
                  case 0x28:
                  case 0x2b:
                  case 0x2c:
                  case 0x2d:
                  case 0x2e:
                  case 0x2f:
                  case 0x30:
                  case 0x31:
                    goto switchD_1800ac6f5_default;
                  }
                case 1:
switchD_1800ac5e4_caseD_1:
                  local_70 = *(undefined8 *)puVar8[4];
                  break;
                case 2:
switchD_1800ac5e4_caseD_2:
                  uStack_68 = *(undefined8 *)(puVar8[4] + 8);
                  break;
                default:
switchD_1800ac5e4_default:
                  local_60 = 1;
                }
                cVar4 = FUN_1800e6ca0(&local_a8,&local_78);
                if (cVar4 == '\0') {
                  uVar7 = FUN_1800f3560(&local_a8);
                  FUN_1800ab210(uVar7,puVar11);
                }
                pbVar12 = local_88;
                local_78 = pbVar12;
                bVar10 = local_88[0];
                switch(local_88[0]) {
                case 0:
                case 3:
                case 4:
                case 5:
                case 6:
                case 7:
                case 8:
                case 9:
switchD_1800ac670_caseD_0:
                  local_60 = 0x8000000000000000;
                  uStack_68 = 0;
                  local_70 = 0;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
                  switch(bVar10) {
                  default:
                    goto switchD_1800ac670_default;
                  case 1:
                    goto switchD_1800ac670_caseD_1;
                  case 2:
                    goto switchD_1800ac670_caseD_2;
                  case 10:
                  case 0xd:
                  case 0xe:
                  case 0xf:
                  case 0x10:
                  case 0x11:
                  case 0x12:
                  case 0x13:
                    goto switchD_1800ac6f5_caseD_0;
                  case 0xb:
                  case 0x15:
                    goto switchD_1800ac6f5_caseD_1;
                  case 0xc:
                  case 0x16:
                    goto switchD_1800ac6f5_caseD_2;
                  case 0x14:
                  case 0x17:
                  case 0x18:
                  case 0x19:
                  case 0x1a:
                  case 0x1b:
                  case 0x1c:
                  case 0x1d:
                    goto switchD_1800ac6f5_default;
                  }
                case 1:
switchD_1800ac670_caseD_1:
                  local_60 = 0x8000000000000000;
                  uStack_68 = 0;
                  local_70 = **(undefined8 **)(pbVar12 + 8);
                  break;
                case 2:
switchD_1800ac670_caseD_2:
                  local_60 = 0x8000000000000000;
                  local_70 = 0;
                  uStack_68 = *(undefined8 *)(*(longlong *)(pbVar12 + 8) + 8);
                  break;
                default:
switchD_1800ac670_default:
                  uStack_68 = 0;
                  local_70 = 0;
                  local_60 = 1;
                }
                if (local_88[0] == 1) {
                  puVar9 = (undefined8 *)FUN_1800f6de0(local_80,&local_b0,local_40);
                  local_70 = *puVar9;
                }
                pbVar12 = local_88;
                lStack_a0 = 0;
                uStack_98 = 0;
                lStack_90 = -0x8000000000000000;
                local_a8 = pbVar12;
                bVar10 = local_88[0];
                switch(local_88[0]) {
                case 0:
                case 3:
                case 4:
                case 5:
                case 6:
                case 7:
                case 8:
                case 9:
switchD_1800ac6f5_caseD_0:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
                  switch(bVar10) {
                  case 1:
                    goto switchD_1800ac6f5_caseD_1;
                  case 2:
                    goto switchD_1800ac6f5_caseD_2;
                  }
                default:
switchD_1800ac6f5_default:
                  lStack_90 = 1;
                  break;
                case 1:
switchD_1800ac6f5_caseD_1:
                  lStack_a0 = **(longlong **)(pbVar12 + 8);
                  break;
                case 2:
switchD_1800ac6f5_caseD_2:
                  uStack_98 = *(undefined8 *)(*(longlong *)(pbVar12 + 8) + 8);
                }
                cVar4 = FUN_1800e6ca0(&local_78,&local_a8);
                if (cVar4 == '\0') {
                  uVar7 = FUN_1800f3560(&local_78);
                  FUN_1800ab210(uVar7,puVar11);
                }
                puVar11 = puVar11 + 0x1c;
              } while (puVar11 != puVar3);
            }
            if ((code *)puVar8[8] != (code *)0x0) {
              (*(code *)puVar8[8])();
            }
          }
          FUN_1801409d0(&local_80,local_88[0]);
        }
      }
    }
  }
}



