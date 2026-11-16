// FUN_1802ec8c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802ec8c0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802ec8c0(uint *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  undefined1 auStack_248 [32];
  uint *local_228;
  uint local_218;
  uint local_214 [115];
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_248;
  uVar4 = *param_1;
  if (uVar4 != 0) {
    uVar9 = *param_2;
    if (uVar9 == 0) {
      *param_1 = 0;
    }
    else {
      local_228 = param_2 + 1;
      if (uVar9 == 1) {
        uVar9 = *local_228;
        if (uVar9 == 0) {
          *param_1 = 0;
        }
        else if (uVar9 != 1) {
          uVar6 = 0;
          uVar7 = 0;
          do {
            uVar8 = uVar7 + 1;
            uVar5 = uVar6 + (ulonglong)param_1[(ulonglong)uVar7 + 1] * (ulonglong)uVar9;
            param_1[(ulonglong)uVar7 + 1] = (uint)uVar5;
            uVar6 = uVar5 >> 0x20;
            uVar7 = uVar8;
          } while (uVar8 != uVar4);
          uVar4 = (uint)(uVar5 >> 0x20);
          if (uVar4 != 0) {
            if (*param_1 < 0x73) {
              param_1[(ulonglong)*param_1 + 1] = uVar4;
              *param_1 = *param_1 + 1;
            }
            else {
              *param_1 = 0;
            }
          }
        }
      }
      else {
        puVar1 = param_1 + 1;
        if (uVar4 == 1) {
          uVar4 = *puVar1;
          *param_1 = uVar9;
          FUN_18063aed0(puVar1,local_228,(ulonglong)*param_2 << 2);
          if (uVar4 == 0) {
            *param_1 = 0;
          }
          else if ((uVar4 != 1) && (uVar9 = *param_1, uVar9 != 0)) {
            uVar6 = 0;
            uVar7 = 0;
            do {
              uVar8 = uVar7 + 1;
              uVar5 = uVar6 + (ulonglong)puVar1[uVar7] * (ulonglong)uVar4;
              puVar1[uVar7] = (uint)uVar5;
              uVar6 = uVar5 >> 0x20;
              uVar7 = uVar8;
            } while (uVar8 != uVar9);
            uVar4 = (uint)(uVar5 >> 0x20);
            if (uVar4 != 0) {
              if (*param_1 < 0x73) {
                param_1[(ulonglong)*param_1 + 1] = uVar4;
                *param_1 = *param_1 + 1;
              }
              else {
                *param_1 = 0;
              }
            }
          }
        }
        else {
          uVar7 = 0;
          local_218 = 0;
          uVar8 = 0;
          if (uVar9 < uVar4) {
            puVar11 = local_228;
            uVar10 = uVar9;
            uVar9 = uVar4;
            local_228 = puVar1;
          }
          else {
            puVar11 = puVar1;
            uVar10 = uVar4;
          }
          do {
            uVar4 = puVar11[uVar8];
            if (uVar4 == 0) {
              if (uVar8 == uVar7) {
                uVar7 = uVar8 + 1;
                local_214[uVar8] = 0;
                local_218 = uVar7;
              }
            }
            else {
              uVar6 = 0;
              uVar2 = uVar8;
              while (uVar3 = uVar2, uVar2 != 0x73) {
                if (uVar2 == uVar7) {
                  local_218 = uVar2 + 1;
                  local_214[uVar2] = 0;
                }
                uVar3 = uVar2 + 1;
                uVar6 = uVar6 + (ulonglong)local_228[-uVar8 + uVar2] * (ulonglong)uVar4 +
                        (ulonglong)local_214[uVar2];
                local_214[uVar2] = (uint)uVar6;
                uVar6 = uVar6 >> 0x20;
                uVar7 = local_218;
                if (-uVar8 + uVar3 == uVar9) break;
                uVar2 = uVar3;
              }
              uVar4 = (uint)uVar6;
              while (uVar4 != 0) {
                if (uVar3 == 0x73) goto LAB_1802ecb6d;
                if (uVar3 == uVar7) {
                  local_218 = uVar3 + 1;
                  local_214[uVar3] = 0;
                }
                uVar4 = local_214[uVar3];
                local_214[uVar3] = (uint)(uVar4 + uVar6);
                uVar4 = (uint)(uVar4 + uVar6 >> 0x20);
                uVar6 = (ulonglong)uVar4;
                uVar7 = local_218;
                uVar3 = uVar3 + 1;
              }
              if (uVar3 == 0x73) {
LAB_1802ecb6d:
                *param_1 = 0;
              }
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 != uVar10);
          *param_1 = uVar7;
          FUN_18063aed0(puVar1,local_214,(ulonglong)uVar7 << 2);
        }
      }
    }
  }
}



