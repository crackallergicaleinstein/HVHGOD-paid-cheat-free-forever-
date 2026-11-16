// FUN_18058cea0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18058cea0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18058cea0(longlong param_1,longlong param_2,uint param_3,uint param_4)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_1c8 [32];
  ushort *local_1a8;
  int local_198;
  int local_194;
  ushort local_190 [2];
  ushort local_18c [2];
  longlong local_188;
  longlong local_180;
  longlong local_178;
  longlong local_170;
  uint local_168;
  undefined1 local_164 [4];
  undefined8 local_160;
  short local_154;
  int local_150;
  int local_14c;
  int local_140;
  int local_138;
  int local_130;
  longlong local_b0;
  int local_98;
  int local_94;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  ulonglong local_58;
  
  local_58 = DAT_1808d5f00 ^ (ulonglong)auStack_1c8;
  lVar8 = *(longlong *)(param_2 + 8);
  if ((*(int *)(param_1 + 0x80) != -1) &&
     (((((param_4 & 8) == 0 || ((*(byte *)(lVar8 + 8) & 1) == 0)) &&
       ((*(uint *)(lVar8 + 4) & 0x7fff0000) == 0)) && ((*(uint *)(lVar8 + 8) & 0x8000) == 0)))) {
    iVar7 = FUN_180592d40(param_1,param_2,(ulonglong)param_3);
    lVar2 = *(longlong *)(param_2 + 8);
    if (iVar7 == 0) {
      if ((*(uint *)(lVar2 + 8) & 0x20001) == 0) {
      }
      local_198 = *(int *)(param_1 + 0x1c);
      local_170 = 0;
      local_194 = *(int *)(param_1 + 0x20);
      FUN_18063ab10(local_164,0,0x10c);
      local_160 = *(undefined8 *)(lVar2 + 0xa0);
      local_70 = 0;
      local_68 = 0;
      local_188 = lVar2;
      local_180 = param_1;
      local_178 = param_2;
      local_168 = param_4;
      FUN_180593000(&local_188,param_3,0,1);
      FUN_180574500(&local_70,0,*(undefined8 *)(local_188 + 0x98),0);
      *(int *)(param_2 + 0x50) = local_138;
      *(int *)(param_2 + 0x54) = local_94;
      if ((*(int *)(lVar8 + 0x474) == 3) && (0 < local_154)) {
        if ((param_4 & 0x10) == 0) {
          local_150 = local_140;
          local_98 = local_14c;
        }
        *(int *)(param_2 + 0x90) =
             *(int *)(param_2 + 0x90) +
             ((int)((ulonglong)
                    ((longlong)local_150 * (longlong)local_198 +
                    ((longlong)local_150 * (longlong)local_198 >> 0x3f) + 0x8000) >> 0x10) >> 6);
        *(int *)(param_2 + 0x94) =
             *(int *)(param_2 + 0x94) +
             ((int)((ulonglong)
                    ((longlong)local_98 * (longlong)local_194 + 0x8000 +
                    ((longlong)local_98 * (longlong)local_194 >> 0x3f)) >> 0x10) >> 6);
      }
      if ((*(int *)(param_2 + 0x40) == 0) && (local_138 != 0)) {
        *(int *)(param_2 + 0x40) =
             (int)((ulonglong)
                   ((longlong)local_138 * (longlong)local_198 + 0x8000 +
                   ((longlong)local_138 * (longlong)local_198 >> 0x3f)) >> 0x10);
      }
      if (*(int *)(param_2 + 0x4c) != 0) {
      }
      if (local_94 == 0) {
      }
      lVar8 = (longlong)local_94 * (longlong)local_194;
      goto LAB_18058d097;
    }
    if ((*(byte *)(lVar2 + 8) & 1) == 0) {
    }
  }
  if ((param_4 >> 0xe & 1) != 0) {
  }
  if (((param_4 & 1) == 0) && (*(short *)(param_1 + 0x74) == 0)) {
  }
  if (((param_4 & 0x1100000) == 0x100000) && (*(longlong *)(lVar8 + 0x4e8) != 0)) {
    lVar2 = *(longlong *)(lVar8 + 0x2d0);
    iVar7 = (**(code **)(lVar2 + 0x178))(param_2,param_3);
    if (iVar7 == 0) {
      iVar7 = *(int *)(param_1 + 0x1c);
      local_1a8 = local_190;
      iVar1 = *(int *)(param_1 + 0x20);
      *(undefined4 *)(param_2 + 0x60) = 0x53564720;
      (**(code **)(lVar2 + 0x150))(lVar8,0,param_3,&local_198);
      local_1a8 = local_18c;
      (**(code **)(lVar2 + 0x150))(lVar8,1,param_3,&local_194);
      lVar8 = (longlong)iVar7 * (ulonglong)local_190[0];
      *(uint *)(param_2 + 0x50) = (uint)local_190[0];
      *(uint *)(param_2 + 0x54) = (uint)local_18c[0];
      *(int *)(param_2 + 0x40) = (int)((ulonglong)(lVar8 + 0x8000 + (lVar8 >> 0x3f)) >> 0x10);
      lVar8 = (longlong)iVar1 * (ulonglong)local_18c[0];
LAB_18058d097:
      *(int *)(param_2 + 0x4c) = (int)((ulonglong)(lVar8 + 0x8000 + (lVar8 >> 0x3f)) >> 0x10);
    }
  }
  if ((param_4 >> 0x17 & 1) != 0) {
  }
  local_1a8 = (ushort *)((ulonglong)local_1a8 & 0xffffffffffffff00);
  iVar7 = FUN_180594fd0(&local_188,param_1,param_2,param_4);
  if (iVar7 != 0) {
  }
  if (((param_4 & 0x110) == 0x100) && (local_60 != 0)) {
    *(uint *)(param_2 + 0x40) = (uint)*(byte *)((ulonglong)param_3 + local_60) << 6;
    goto LAB_18058d32c;
  }
  iVar7 = FUN_180593000(&local_188,param_3,0,0);
  if (iVar7 != 0) goto LAB_18058d32c;
  if (*(int *)(param_2 + 0x60) == 0x636f6d70) {
    *(undefined4 *)(param_2 + 0xc0) = *(undefined4 *)(local_170 + 0x50);
    *(undefined8 *)(param_2 + 200) = *(undefined8 *)(local_170 + 0x58);
  }
  else {
    *(undefined4 *)(param_2 + 0x60) = 0x6f75746c;
    uVar6 = *(undefined8 *)(local_170 + 0x20);
    *(undefined8 *)(param_2 + 0x98) = *(undefined8 *)(local_170 + 0x18);
    *(undefined8 *)(param_2 + 0xa0) = uVar6;
    uVar3 = *(undefined4 *)(local_170 + 0x2c);
    uVar4 = *(undefined4 *)(local_170 + 0x30);
    uVar5 = *(undefined4 *)(local_170 + 0x34);
    *(undefined4 *)(param_2 + 0xa8) = *(undefined4 *)(local_170 + 0x28);
    *(undefined4 *)(param_2 + 0xac) = uVar3;
    *(undefined4 *)(param_2 + 0xb0) = uVar4;
    *(undefined4 *)(param_2 + 0xb4) = uVar5;
    *(undefined8 *)(param_2 + 0xb8) = *(undefined8 *)(local_170 + 0x38);
    uVar9 = *(uint *)(param_2 + 0xb8) & 0xfffffdff;
    *(uint *)(param_2 + 0xb8) = uVar9;
    if (((param_4 & 1) == 0) && (*(ushort *)(*(longlong *)(param_1 + 0x40) + 2) < 0x18)) {
      *(uint *)(param_2 + 0xb8) = uVar9 | 0x100;
    }
    if (local_130 != 0) {
      FUN_180576690((undefined8 *)(param_2 + 0x98),-local_130,0);
    }
  }
  if ((param_4 & 2) == 0) {
    *(undefined8 *)(param_2 + 0xd0) = *(undefined8 *)(local_b0 + 0x220);
    *(undefined4 *)(param_2 + 0xd8) = *(undefined4 *)(local_b0 + 0x218);
    if (*(char *)(local_b0 + 0x1d2) == '\0') {
LAB_18058d315:
      *(uint *)(param_2 + 0xb8) = *(uint *)(param_2 + 0xb8) | 8;
    }
    else {
      iVar7 = *(int *)(local_b0 + 0x1d4);
      if (iVar7 == 0) {
        *(uint *)(param_2 + 0xb8) = *(uint *)(param_2 + 0xb8) | 0x20;
      }
      else if (iVar7 != 1) {
        if (iVar7 == 4) {
          *(uint *)(param_2 + 0xb8) = *(uint *)(param_2 + 0xb8) | 0x30;
        }
        else {
          if (iVar7 != 5) goto LAB_18058d315;
          *(uint *)(param_2 + 0xb8) = *(uint *)(param_2 + 0xb8) | 0x10;
        }
      }
    }
  }
  FUN_180591190(&local_188,param_3);
LAB_18058d32c:
  FUN_180574500(&local_70,0,*(undefined8 *)(local_188 + 0x98),0);
}



