// FUN_1805dc540 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805dc540 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805dc540(longlong param_1,undefined1 *param_2,longlong param_3,longlong *param_4,
                  ulonglong *param_5)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  int *piVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  ulonglong uVar12;
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  undefined4 local_80;
  longlong *local_78;
  ulonglong *local_70;
  int local_68;
  int local_64;
  uint local_60;
  ulonglong local_58;
  
  local_58 = DAT_1808d5f00 ^ (ulonglong)auStack_a8;
  lVar1 = *param_4;
  puVar11 = param_2 + param_3;
  if (param_3 == 0) {
    puVar11 = param_2;
  }
  local_70 = param_5;
  uVar12 = *param_5;
  uVar3 = 5;
  if (*(int *)(param_1 + 0x7598) == 0) {
    uVar3 = 9;
  }
  if (uVar3 <= uVar12) {
    uVar7 = 1;
    if (*(int *)(param_1 + 0x7598) == 0) {
      uVar7 = 5;
    }
    local_78 = param_4;
    uVar3 = FUN_1805dcea0(lVar1,uVar7);
    if (((uVar3 < 0xffffffffffffff89) && (uVar3 + 3 <= uVar12)) &&
       (uVar4 = FUN_1805dc210(param_1,lVar1,uVar3), uVar4 < 0xffffffffffffff89)) {
      uVar5 = *(uint *)(param_1 + 0x7618);
      piVar9 = (int *)(lVar1 + uVar3);
      uVar12 = uVar12 - uVar3;
      if (uVar5 != 0) {
        if (*(uint *)(param_1 + 0x74f8) < uVar5) {
          uVar5 = *(uint *)(param_1 + 0x74f8);
        }
        *(uint *)(param_1 + 0x74f8) = uVar5;
      }
      uVar3 = FUN_1805e93c0(piVar9,uVar12,&local_68);
      puVar8 = param_2;
      if (uVar3 < 0xffffffffffffff89) {
        while( true ) {
          puVar10 = (undefined1 *)((longlong)piVar9 + 3);
          if (uVar12 - 3 < uVar3) break;
          puVar6 = puVar11;
          if ((puVar8 <= puVar10) && (puVar10 < puVar11)) {
            puVar6 = puVar10;
          }
          if (local_68 == 0) {
            if ((ulonglong)((longlong)puVar11 - (longlong)puVar8) < uVar3) {
              uVar4 = 0xffffffffffffffba;
            }
            else if (puVar8 == (undefined1 *)0x0) {
              uVar4 = -(ulonglong)(uVar3 != 0) & 0xffffffffffffffb6;
            }
            else {
              FUN_18063aed0(puVar8,puVar10,uVar3);
              uVar4 = uVar3;
            }
          }
          else if (local_68 == 1) {
            uVar4 = (ulonglong)local_60;
            if ((ulonglong)((longlong)puVar6 - (longlong)puVar8) < uVar4) {
              uVar4 = 0xffffffffffffffba;
            }
            else if (puVar8 == (undefined1 *)0x0) {
              uVar4 = -(ulonglong)(uVar4 != 0) & 0xffffffffffffffb6;
            }
            else {
              FUN_18063ab10(puVar8,*puVar10,uVar4);
            }
          }
          else {
            if (local_68 != 2) {
            }
            local_80 = 0;
            local_88 = uVar3;
            uVar4 = FUN_1805e5230(param_1,puVar8,(longlong)puVar6 - (longlong)puVar8,puVar10);
          }
          if (0xffffffffffffff88 < uVar4) {
          }
          if (*(int *)(param_1 + 0x75a0) != 0) {
            FUN_1805e41b0(param_1 + 0x7538,puVar8,uVar4);
          }
          if (uVar4 != 0) {
            puVar8 = puVar8 + uVar4;
          }
          piVar9 = (int *)(puVar10 + uVar3);
          uVar12 = (uVar12 - 3) - uVar3;
          if (local_64 != 0) {
            if ((*(longlong *)(param_1 + 0x74e8) != -1) &&
               ((longlong)puVar8 - (longlong)param_2 != *(longlong *)(param_1 + 0x74e8))) {
            }
            if (*(int *)(param_1 + 0x7508) != 0) {
              if (uVar12 < 4) {
              }
              if ((*(int *)(param_1 + 0x759c) == 0) &&
                 (iVar2 = FUN_1805e4040(param_1 + 0x7538), *piVar9 != iVar2)) {
              }
              piVar9 = piVar9 + 1;
              uVar12 = uVar12 - 4;
            }
            *local_78 = (longlong)piVar9;
            *local_70 = uVar12;
          }
          uVar3 = FUN_1805e93c0(piVar9,uVar12,&local_68);
          if (0xffffffffffffff88 < uVar3) {
          }
        }
      }
    }
  }
}



