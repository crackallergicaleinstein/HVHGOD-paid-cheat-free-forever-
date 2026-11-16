// FUN_1801e03b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801e03b0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801e03b0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,char param_4)

{
  char cVar1;
  undefined1 uVar2;
  bool bVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  char *pcVar9;
  undefined1 *puVar10;
  char *pcVar11;
  undefined *puVar12;
  longlong lVar13;
  char *pcVar14;
  char *pcVar15;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined8 *local_98;
  char *local_90;
  undefined8 uStack_88;
  undefined1 *local_80 [2];
  undefined1 *local_70 [2];
  undefined1 local_60 [16];
  uint local_50 [2];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_1808d5f00 ^ (ulonglong)auStack_c8;
  pcVar15 = (char *)*param_3;
  pcVar14 = pcVar15 + param_3[1];
  local_98 = param_1;
  if ((ulonglong)param_2[3] < param_2[2] + 1) {
    (**(code **)*param_2)(param_2);
  }
  bVar3 = true;
  *(char *)(param_2[2] + param_2[1]) = param_4;
  param_2[2] = param_2[2] + 1;
  if (pcVar15 != pcVar14) {
    do {
      cVar1 = *pcVar15;
      if (cVar1 == '\t') {
        pcVar9 = "\\t";
        do {
          cVar1 = *pcVar9;
          pcVar9 = pcVar9 + 1;
          if ((ulonglong)param_2[3] < param_2[2] + 1) {
            (**(code **)*param_2)(param_2);
          }
          *(char *)(param_2[1] + param_2[2]) = cVar1;
          param_2[2] = param_2[2] + 1;
        } while (*pcVar9 != '\0');
        pcVar15 = pcVar15 + 1;
LAB_1801e093f:
        pcVar9 = pcVar15;
        bVar3 = true;
      }
      else {
        if (cVar1 == '\n') {
          pcVar9 = "\\n";
          do {
            cVar1 = *pcVar9;
            pcVar9 = pcVar9 + 1;
            if ((ulonglong)param_2[3] < param_2[2] + 1) {
              (**(code **)*param_2)(param_2);
            }
            *(char *)(param_2[1] + param_2[2]) = cVar1;
            param_2[2] = param_2[2] + 1;
          } while (*pcVar9 != '\0');
          pcVar15 = pcVar15 + 1;
          goto LAB_1801e093f;
        }
        if (cVar1 == '\r') {
          pcVar9 = "\\r";
          do {
            cVar1 = *pcVar9;
            pcVar9 = pcVar9 + 1;
            if ((ulonglong)param_2[3] < param_2[2] + 1) {
              (**(code **)*param_2)(param_2);
            }
            *(char *)(param_2[1] + param_2[2]) = cVar1;
            param_2[2] = param_2[2] + 1;
          } while (*pcVar9 != '\0');
          pcVar15 = pcVar15 + 1;
          goto LAB_1801e093f;
        }
        if (cVar1 == param_4) {
          if ((ulonglong)param_2[3] < param_2[2] + 1) {
            (**(code **)*param_2)(param_2);
          }
          *(undefined1 *)(param_2[1] + param_2[2]) = 0x5c;
          param_2[2] = param_2[2] + 1;
          if ((ulonglong)param_2[3] < param_2[2] + 1) {
            (**(code **)*param_2)(param_2);
          }
          *(char *)(param_2[1] + param_2[2]) = param_4;
          param_2[2] = param_2[2] + 1;
          pcVar15 = pcVar15 + 1;
          goto LAB_1801e093f;
        }
        if (cVar1 == '\\') {
          pcVar9 = "\\\\";
          do {
            cVar1 = *pcVar9;
            pcVar9 = pcVar9 + 1;
            if ((ulonglong)param_2[3] < param_2[2] + 1) {
              (**(code **)*param_2)(param_2);
            }
            *(char *)(param_2[1] + param_2[2]) = cVar1;
            param_2[2] = param_2[2] + 1;
          } while (*pcVar9 != '\0');
          pcVar15 = pcVar15 + 1;
          goto LAB_1801e093f;
        }
        puVar6 = (undefined8 *)FUN_1801e61d0(local_60,pcVar15,pcVar14,local_50);
        uVar5 = local_50[0];
        pcVar9 = (char *)*puVar6;
        uStack_88 = puVar6[1];
        local_90 = pcVar9;
        if ((char)uStack_88 == '\0') {
          for (; pcVar15 != pcVar9; pcVar15 = pcVar15 + 1) {
            pcVar11 = "\\x{";
            do {
              cVar1 = *pcVar11;
              pcVar11 = pcVar11 + 1;
              if ((ulonglong)param_2[3] < param_2[2] + 1) {
                (**(code **)*param_2)(param_2);
              }
              *(char *)(param_2[1] + param_2[2]) = cVar1;
              param_2[2] = param_2[2] + 1;
            } while (*pcVar11 != '\0');
            local_a8 = 0x10;
            FUN_1801e1430(local_70,local_48,&local_40,*pcVar15);
            puVar4 = local_70[0];
            for (puVar10 = local_48; puVar10 != puVar4; puVar10 = puVar10 + 1) {
              uVar2 = *puVar10;
              if ((ulonglong)param_2[3] < param_2[2] + 1) {
                (**(code **)*param_2)(param_2);
              }
              *(undefined1 *)(param_2[1] + param_2[2]) = uVar2;
              param_2[2] = param_2[2] + 1;
            }
            if ((ulonglong)param_2[3] < param_2[2] + 1) {
              (**(code **)*param_2)(param_2);
            }
            *(undefined1 *)(param_2[1] + param_2[2]) = 0x7d;
            param_2[2] = param_2[2] + 1;
          }
          goto LAB_1801e093f;
        }
        puVar12 = &DAT_1807c9ef0;
        uVar7 = 0x2c7;
        do {
          uVar8 = uVar7 >> 1;
          if (*(uint *)(puVar12 + uVar8 * 4) <= local_50[0]) {
            puVar12 = puVar12 + uVar8 * 4 + 4;
            uVar8 = uVar7 + (-1 - uVar8);
          }
          uVar7 = uVar8;
        } while (0 < (longlong)uVar8);
        lVar13 = (longlong)(puVar12 + -0x1807c9ef0) >> 2;
        if ((lVar13 == 0) ||
           ((uint)*(ushort *)(&UNK_1807caa0a + lVar13 * 2) + *(int *)(&UNK_1807c9eec + lVar13 * 4)
            <= local_50[0])) {
LAB_1801e0733:
          pcVar15 = "\\u{";
          do {
            cVar1 = *pcVar15;
            pcVar15 = pcVar15 + 1;
            if ((ulonglong)param_2[3] < param_2[2] + 1) {
              (**(code **)*param_2)(param_2);
            }
            *(char *)(param_2[1] + param_2[2]) = cVar1;
            param_2[2] = param_2[2] + 1;
          } while (*pcVar15 != '\0');
          local_a8 = 0x10;
          FUN_1801e4cf0(local_80,local_48,&local_40,uVar5);
          puVar4 = local_80[0];
          for (puVar10 = local_48; puVar10 != puVar4; puVar10 = puVar10 + 1) {
            uVar2 = *puVar10;
            if ((ulonglong)param_2[3] < param_2[2] + 1) {
              (**(code **)*param_2)(param_2);
            }
            *(undefined1 *)(param_2[1] + param_2[2]) = uVar2;
            param_2[2] = param_2[2] + 1;
          }
          if ((ulonglong)param_2[3] < param_2[2] + 1) {
            (**(code **)*param_2)(param_2);
          }
          bVar3 = true;
          *(undefined1 *)(param_2[1] + param_2[2]) = 0x7d;
          param_2[2] = param_2[2] + 1;
        }
        else {
          if (bVar3) {
            puVar12 = &DAT_1807c9660;
            uVar7 = 0x16b;
            do {
              uVar8 = uVar7 >> 1;
              if (*(uint *)(puVar12 + uVar8 * 4) <= local_50[0]) {
                puVar12 = puVar12 + uVar8 * 4 + 4;
                uVar8 = uVar7 + (-1 - uVar8);
              }
              uVar7 = uVar8;
            } while (0 < (longlong)uVar8);
            lVar13 = (longlong)(puVar12 + -0x1807c9660) >> 2;
            if ((lVar13 != 0) &&
               (local_50[0] <
                (uint)*(ushort *)(&UNK_1807c9c0a + lVar13 * 2) +
                *(int *)(&UNK_1807c965c + lVar13 * 4))) goto LAB_1801e0733;
          }
          for (; pcVar15 != pcVar9; pcVar15 = pcVar15 + 1) {
            cVar1 = *pcVar15;
            if ((ulonglong)param_2[3] < param_2[2] + 1) {
              (**(code **)*param_2)(param_2);
            }
            *(char *)(param_2[1] + param_2[2]) = cVar1;
            param_2[2] = param_2[2] + 1;
          }
          bVar3 = false;
        }
      }
      pcVar15 = pcVar9;
    } while (pcVar9 != pcVar14);
    param_1 = local_98;
  }
  if ((ulonglong)param_2[3] < param_2[2] + 1) {
    (**(code **)*param_2)(param_2);
  }
  *(char *)(param_2[1] + param_2[2]) = param_4;
  param_2[2] = param_2[2] + 1;
  *param_1 = param_2;
}



