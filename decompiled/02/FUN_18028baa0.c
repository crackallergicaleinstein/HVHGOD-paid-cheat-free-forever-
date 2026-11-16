// FUN_18028baa0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18028baa0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_18028baa0(undefined8 *param_1)

{
  char *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  byte *pbVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  undefined1 auStack_b8 [48];
  undefined4 local_88;
  byte local_84 [4];
  int local_80;
  ulonglong local_78;
  ulonglong local_70;
  longlong local_68;
  int local_60;
  int local_5c;
  int iStack_58;
  longlong local_50;
  int local_48;
  char local_40;
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_b8;
  FUN_18027c3e0(&local_68,*(undefined8 *)*param_1);
  if (local_40 != '\0') {
    if ((((((local_5c < 0) || (iStack_58 < 0)) || (local_60 < 0)) ||
         (((local_48 < 0 || (local_60 < local_5c)) ||
          ((local_48 < iStack_58 || ((local_5c != 0 && (local_68 == 0)))))))) ||
        ((iStack_58 != 0 && (local_50 == 0)))) ||
       (iVar11 = iStack_58 + local_5c, 0x100000 - iStack_58 < local_5c)) {
      iVar11 = -1;
    }
    (**(code **)param_1[1])
              (*(undefined8 *)param_1[2],*(undefined8 *)param_1[3],*(undefined8 *)param_1[4],
               *(undefined8 *)*param_1);
    FUN_18027c3e0(&local_68,*(undefined8 *)*param_1);
    if (local_40 != '\0') {
      if ((((((local_5c < 0) || (iStack_58 < 0)) || (local_60 < 0)) ||
           ((local_48 < 0 || (local_60 < local_5c)))) || (local_48 < iStack_58)) ||
         (((local_5c != 0 && (local_68 == 0)) ||
          (((iStack_58 != 0 && (local_50 == 0)) ||
           (iVar4 = iStack_58 + local_5c, 0x100000 - iStack_58 < local_5c)))))) {
        iVar4 = -1;
      }
      if (iVar11 < iVar4) {
        if (((((local_5c < 0) || (iStack_58 < 0)) || (local_60 < 0)) ||
            (((local_48 < 0 || (local_60 < local_5c)) ||
             ((local_48 < iStack_58 || ((local_5c != 0 && (local_68 == 0)))))))) ||
           (((iStack_58 != 0 && (local_50 == 0)) ||
            (iVar4 = iStack_58 + local_5c, 0x100000 - iStack_58 < local_5c)))) {
          iVar4 = -1;
        }
        if (iVar4 - iVar11 < 0x401) {
          local_80 = -local_5c;
          do {
            iVar4 = local_80;
            if (((((((local_5c < 0) || (iStack_58 < 0)) || (local_60 < 0)) ||
                  ((local_48 < 0 || (local_60 < local_5c)))) ||
                 ((local_48 < iStack_58 || ((local_5c != 0 && (local_68 == 0)))))) ||
                ((iStack_58 != 0 && (local_50 == 0)))) ||
               (iVar5 = iStack_58 + local_5c, 0x100000 - iStack_58 < local_5c)) {
              iVar5 = -1;
            }
            if (iVar5 <= iVar11) {
            }
            lVar9 = local_68;
            lVar7 = local_50;
            iVar5 = FUN_18027c2f0(&local_68);
            if (((iVar11 < 0) || (iVar5 < 0)) || (iVar5 <= iVar11)) {
              lVar9 = 0;
              lVar6 = FUN_18017ea70();
              lVar7 = 0x20;
              *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
LAB_18028bd03:
              local_78 = 0;
              cVar3 = FUN_1804514f0(&local_78,lVar7,8);
              if (cVar3 == '\0') {
                bVar2 = false;
              }
              else {
                bVar2 = true;
                local_70 = local_78;
              }
            }
            else {
              if (iVar11 < local_5c) {
                lVar9 = (longlong)iVar11 * 0x70 + lVar9;
              }
              else {
                lVar9 = (longlong)(iVar4 + iVar11) * 0x70 + lVar7;
              }
              lVar7 = lVar9 + 0x20;
              lVar6 = FUN_18017ea70();
              *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
              if (lVar7 != 0) goto LAB_18028bd03;
              bVar2 = false;
            }
            lVar7 = FUN_18017ea70();
            if (*(int *)(lVar7 + 4) != 0) {
              *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
            }
            uVar10 = 0;
            if (bVar2) {
              uVar10 = local_70;
            }
            cVar3 = FUN_18028b510(uVar10);
            if (cVar3 == '\0') {
              cVar3 = FUN_18028b7f0(uVar10);
              if (cVar3 == '\0') {
                pcVar1 = (char *)param_1[6];
                if (*(int *)(pcVar1 + 8) < 0) {
                  if (*pcVar1 == '\0') {
                    local_88 = 0xffffffff;
                  }
                  else {
                    local_88 = *(undefined4 *)(pcVar1 + 4);
                  }
                  if (lVar9 + 0x50 != 0) {
                    lVar7 = FUN_18017ea70();
                    *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
                    cVar3 = FUN_1801ad800(lVar9 + 0x50,&local_88);
                    lVar9 = FUN_18017ea70();
                    if (*(int *)(lVar9 + 4) != 0) {
                      *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
                    }
                    goto LAB_18028be0f;
                  }
LAB_18028be11:
                  if (*(undefined1 **)param_1[5] != (undefined1 *)0x0) {
                    **(undefined1 **)param_1[5] = 0;
                  }
                }
                else {
                  local_88 = *(undefined4 *)(pcVar1 + 0xc);
                  pbVar8 = local_84;
                  if (*(int *)(pcVar1 + 8) < 0xb) {
                    pbVar8 = (byte *)(pcVar1 + 8);
                  }
                  local_84[0] = 10;
                  local_84[1] = 0;
                  local_84[2] = 0;
                  local_84[3] = 0;
                  local_78 = local_78 & 0xffffffff00000000;
                  if (((ulonglong)*pbVar8 < 0x13) &&
                     (*(longlong *)(&DAT_180c7c270 + (ulonglong)*pbVar8 * 8) != 0)) {
                    cVar3 = FUN_18027c510(lVar9,*(longlong *)
                                                 (&DAT_180c7c270 + (ulonglong)*pbVar8 * 8),&local_88
                                         );
LAB_18028be0f:
                    if (cVar3 == '\0') goto LAB_18028be11;
                  }
                }
              }
            }
            else {
              FUN_18028b770(lVar9);
            }
            iVar11 = iVar11 + 1;
          } while( true );
        }
      }
    }
    if (*(undefined1 **)param_1[5] != (undefined1 *)0x0) {
      **(undefined1 **)param_1[5] = 0;
    }
  }
}



