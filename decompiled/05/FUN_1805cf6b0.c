// FUN_1805cf6b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805cf6b0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805cf6b0(longlong param_1,longlong param_2,uint param_3,undefined8 param_4)

{
  uint *puVar1;
  uint *puVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  longlong lVar11;
  int iVar12;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  int *local_e0;
  int local_d8 [2];
  undefined8 local_d0;
  undefined8 local_c8;
  longlong local_c0;
  uint *local_b8;
  longlong local_b0;
  undefined4 local_a8;
  code *local_a0;
  longlong *local_80;
  undefined8 local_78;
  uint local_70;
  int local_6c;
  longlong local_68;
  int local_60;
  ulonglong local_50;
  
  local_50 = DAT_1808d5f00 ^ (ulonglong)auStack_108;
  lVar3 = param_2 + 0x98;
  local_d0 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = (uint *)(param_2 + 0x68);
  iVar12 = 0;
  iVar7 = 0;
  local_d8[0] = 0;
  lVar11 = param_2;
  local_c8 = param_4;
  local_c0 = param_2;
  if (*(int *)(param_2 + 0x60) == *(int *)(param_1 + 0x20)) {
    if (((param_3 == 2) || ((int)param_3 < 0)) || (4 < (int)param_3)) {
      local_d8[0] = 0x13;
    }
    else {
      if ((*(byte *)(*(longlong *)(param_2 + 0xf0) + 8) & 1) != 0) {
        FUN_18057abd0(local_d0,*(undefined8 *)(param_2 + 0x78));
        *(undefined8 *)(param_2 + 0x78) = 0;
        puVar2 = (uint *)(*(longlong *)(param_2 + 0xf0) + 8);
        *puVar2 = *puVar2 & 0xfffffffe;
      }
      cVar4 = FUN_180579ef0(param_2,param_3,local_c8);
      if (cVar4 == '\0') {
        iVar7 = 0;
        if ((*puVar1 != 0) && (*(int *)(param_2 + 0x70) != 0)) {
          local_e0 = local_d8;
          local_e8 = 0;
          uVar6 = FUN_18057ad10(local_d0,*(int *)(param_2 + 0x70),0);
          *(undefined8 *)(param_2 + 0x78) = uVar6;
          iVar7 = 0;
          if (local_d8[0] != 0) goto LAB_1805cf776;
          puVar2 = (uint *)(*(longlong *)(param_2 + 0xf0) + 8);
          *puVar2 = *puVar2 | 1;
          iVar12 = *(int *)(param_2 + 0x90) * -0x40;
          iVar7 = *puVar1 << 6;
          if (*(char *)(param_2 + 0x82) == '\x06') {
            iVar7 = ((*puVar1 & 0x3ffffff) >> 0x19) + iVar7 / 3 + (iVar7 >> 0x1f);
          }
          iVar7 = iVar7 + *(int *)(param_2 + 0x94) * -0x40;
          if ((iVar12 != 0) || (iVar7 != 0)) {
            FUN_180576690(lVar3,iVar12,iVar7);
          }
          if (param_3 < 2) {
            if ((*(byte *)(param_2 + 0xb8) & 0x40) == 0) {
              local_a8 = 1;
              local_b8 = puVar1;
              local_b0 = lVar3;
              local_d8[0] = (**(code **)(param_1 + 0x68))(*(undefined8 *)(param_1 + 0x60),&local_b8)
              ;
            }
            else {
              piVar9 = *(int **)(param_2 + 0xa0);
              if (piVar9 == (int *)0x0) {
                piVar10 = (int *)0x0;
              }
              else {
                piVar10 = piVar9 + (ulonglong)*(ushort *)(param_2 + 0x9a) * 2;
              }
              uVar5 = *(int *)(param_2 + 0x6c) * 4;
              if (uVar5 < 0x8000) {
                local_60 = *(int *)(param_2 + 0x70);
                local_68 = *(longlong *)(param_2 + 0x78);
                local_a0 = FUN_1805cfab0;
                local_80 = &local_68;
                local_a8 = 3;
                local_78 = 0;
                local_6c = *puVar1 * 4;
                if (-1 < local_60) {
                  local_68 = (ulonglong)((*puVar1 - 1) * local_60) + local_68;
                }
                piVar8 = piVar9;
                local_70 = uVar5;
                if (piVar9 < piVar10) {
                  do {
                    *piVar8 = *piVar8 << 2;
                    piVar8[1] = piVar8[1] << 2;
                    piVar8 = piVar8 + 2;
                  } while (piVar8 < piVar10);
                  local_b0 = lVar3;
                  local_d8[0] = (**(code **)(param_1 + 0x68))
                                          (*(undefined8 *)(param_1 + 0x60),&local_b8);
                  do {
                    *piVar9 = (int)(*piVar9 + (*piVar9 >> 0x1f & 3U)) >> 2;
                    piVar9[1] = (int)(piVar9[1] + (piVar9[1] >> 0x1f & 3U)) >> 2;
                    piVar9 = piVar9 + 2;
                  } while (piVar9 < piVar10);
                  lVar11 = local_c0;
                }
                else {
                  local_b0 = lVar3;
                  local_d8[0] = (**(code **)(param_1 + 0x68))
                                          (*(undefined8 *)(param_1 + 0x60),&local_b8);
                  lVar11 = local_c0;
                }
              }
              else {
                local_d8[0] = 0x62;
                lVar11 = local_c0;
              }
            }
          }
          else if (param_3 == 3) {
            local_d8[0] = FUN_1805cfb40(param_1,lVar3,puVar1);
          }
          else if (param_3 == 4) {
            local_d8[0] = FUN_1805cfca0(param_1,lVar3,puVar1);
          }
        }
        if (local_d8[0] == 0) {
          *(undefined4 *)(lVar11 + 0x60) = 0x62697473;
          goto LAB_1805cf7a9;
        }
      }
      else {
        local_d8[0] = 0x62;
        iVar7 = 0;
      }
LAB_1805cf776:
    }
  }
  else {
    local_d8[0] = 6;
  }
  if ((*(byte *)(*(longlong *)(lVar11 + 0xf0) + 8) & 1) != 0) {
    FUN_18057abd0(local_d0,*(undefined8 *)(param_2 + 0x78));
    *(undefined8 *)(param_2 + 0x78) = 0;
    puVar1 = (uint *)(*(longlong *)(lVar11 + 0xf0) + 8);
    *puVar1 = *puVar1 & 0xfffffffe;
  }
LAB_1805cf7a9:
  if ((iVar12 != 0) || (iVar7 != 0)) {
    FUN_180576690(lVar3,-iVar12,-iVar7);
  }
}



