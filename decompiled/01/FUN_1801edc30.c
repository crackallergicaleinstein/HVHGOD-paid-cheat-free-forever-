// FUN_1801edc30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801edc30 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801edc30(undefined8 *param_1)

{
  bool bVar1;
  short *psVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  short *psVar7;
  short *psVar8;
  ulonglong uVar9;
  undefined1 auStack_a8 [32];
  short *local_88;
  undefined2 local_80;
  undefined8 local_78;
  undefined2 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined2 local_60;
  short *local_58;
  undefined8 local_50;
  undefined2 local_48;
  undefined1 local_46;
  undefined8 local_40;
  undefined2 local_38;
  char local_36;
  ulonglong local_30;
  
  psVar2 = DAT_180c63230;
  psVar7 = DAT_180c63228;
  local_30 = DAT_1808d5f00 ^ (ulonglong)auStack_a8;
  local_58 = DAT_180c63228;
  if (((DAT_180c63230 == (short *)0x0) || (*DAT_180c63230 != 0x5a4d)) ||
     (*(int *)((longlong)*(int *)(DAT_180c63230 + 0x1e) + (longlong)DAT_180c63230) != 0x4550)) {
    uVar9 = 0;
  }
  else {
    uVar9 = (ulonglong)
            *(uint *)((longlong)*(int *)(DAT_180c63230 + 0x1e) + 0x50 + (longlong)DAT_180c63230);
  }
  if (DAT_180c63228 != (short *)0x0) {
    lVar6 = FUN_18017ea70();
    local_88 = (short *)0x0;
    *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
    cVar3 = FUN_1804514f0(&local_88,psVar7,8);
    psVar7 = local_58;
    if (cVar3 != '\0') {
      psVar7 = local_88;
    }
    lVar6 = FUN_18017ea70();
    if (*(int *)(lVar6 + 4) != 0) {
      *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
    }
    psVar8 = (short *)0x0;
    if (cVar3 != '\0') {
      psVar8 = psVar7;
    }
    if (((psVar8 != (short *)0x0) && (uVar9 != 0)) &&
       ((psVar2 <= psVar8 && ((ulonglong)((longlong)psVar8 - (longlong)psVar2) < uVar9)))) {
      lVar6 = FUN_18017ea70();
      *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
      if (psVar8 + 0x54 == (short *)0x0) {
        bVar1 = false;
      }
      else {
        local_88 = (short *)0x0;
        cVar3 = FUN_1804514f0(&local_88,psVar8 + 0x54,8);
        if (cVar3 == '\0') {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
      }
      lVar6 = FUN_18017ea70();
      if (*(int *)(lVar6 + 4) != 0) {
        *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
      }
      psVar7 = (short *)0x0;
      if (bVar1) {
        psVar7 = local_88;
      }
      lVar6 = FUN_18017ea70();
      *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
      if (psVar8 + 0x7c == (short *)0x0) {
        bVar1 = false;
      }
      else {
        local_88 = (short *)0x0;
        cVar3 = FUN_1804514f0(&local_88,psVar8 + 0x7c,8);
        if (cVar3 == '\0') {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
      }
      lVar6 = FUN_18017ea70();
      if (*(int *)(lVar6 + 4) != 0) {
        *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
      }
      psVar8 = (short *)0x0;
      if (bVar1) {
        psVar8 = local_88;
      }
      if ((psVar2 <= psVar7) && ((ulonglong)((longlong)psVar7 - (longlong)psVar2) < uVar9)) {
        cVar3 = FUN_1804513c0(psVar7,1,2);
        if ((cVar3 != '\0') &&
           (((psVar2 <= psVar8 && ((ulonglong)((longlong)psVar8 - (longlong)psVar2) < uVar9)) &&
            (cVar3 = FUN_1804513c0(psVar8,1,2), cVar3 != '\0')))) {
          lVar6 = FUN_18017ea70();
          *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
          if (psVar7 == (short *)0x0) {
            cVar3 = '\0';
          }
          else {
            local_78 = 0;
            local_70 = 0;
            cVar3 = FUN_1804514f0(&local_78,psVar7,10);
            if (cVar3 == '\0') {
              cVar3 = '\0';
            }
            else {
              cVar3 = '\x01';
              local_40 = local_78;
              local_38 = local_70;
            }
          }
          local_36 = cVar3;
          lVar6 = FUN_18017ea70();
          if (*(int *)(lVar6 + 4) != 0) {
            *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
          }
          lVar6 = FUN_18017ea70();
          *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
          if (psVar8 == (short *)0x0) {
            local_46 = 0;
            bVar1 = false;
          }
          else {
            local_78 = 0;
            local_70 = 0;
            cVar4 = FUN_1804514f0(&local_78,psVar8,10);
            if (cVar4 == '\0') {
              bVar1 = false;
              local_46 = 0;
            }
            else {
              bVar1 = true;
              local_50 = local_78;
              local_48 = local_70;
              local_46 = 1;
            }
          }
          lVar6 = FUN_18017ea70();
          if (*(int *)(lVar6 + 4) != 0) {
            *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
          }
          if ((cVar3 != '\0') && (bVar1)) {
            local_88 = (short *)0x548948182444894c;
            local_80 = 0x1024;
            local_68 = 0x245c8948;
            local_64 = 0x6c894808;
            local_60 = 0x1024;
            local_78 = 0x74894810246c8948;
            local_70 = 0x1824;
            iVar5 = memcmp(&local_40,&local_88,10);
            if ((iVar5 == 0) &&
               ((iVar5 = memcmp(&local_50,&local_68,10), iVar5 == 0 ||
                (iVar5 = memcmp(&local_50,&local_78,10), iVar5 == 0)))) {
              *param_1 = local_58;
              param_1[1] = psVar7;
              param_1[2] = psVar8;
            }
          }
        }
      }
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
}



