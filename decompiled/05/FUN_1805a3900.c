// FUN_1805a3900 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805a3900 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805a3900(longlong param_1,longlong param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  int *piVar5;
  uint uVar6;
  undefined1 auStack_828 [32];
  undefined8 local_808;
  undefined8 local_800;
  undefined1 local_7f8;
  uint local_7f0;
  code *local_7e8;
  char local_7d8;
  char local_7d7;
  longlong local_7d0;
  undefined8 local_7c8;
  undefined1 local_7b8 [32];
  longlong local_798;
  undefined4 local_780;
  undefined4 local_778;
  undefined1 local_75b;
  longlong local_758;
  int local_128;
  int iStack_124;
  int iStack_120;
  int iStack_11c;
  ulonglong local_118;
  int local_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  ulonglong local_58;
  
  local_58 = DAT_1808d5f00 ^ (ulonglong)auStack_828;
  local_7d0 = *(longlong *)(param_1 + 8);
  lVar4 = *(longlong *)(local_7d0 + 0xe0);
  if (param_3 < *(uint *)(local_7d0 + 0x10)) {
    *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(param_2 + 0x1c);
    *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_2 + 0x20);
    uVar6 = param_4 | 3;
    if ((param_4 >> 10 & 1) == 0) {
      uVar6 = param_4;
    }
    if (((uVar6 & 1) == 0) && ((uVar6 & 2) == 0)) {
      local_7f8 = 1;
    }
    else {
      local_7f8 = 0;
    }
    *(undefined1 *)(param_1 + 0xf8) = local_7f8;
    *(byte *)(param_1 + 0xf9) = (byte)(uVar6 & 1) ^ 1;
    local_7f0 = (int)uVar6 >> 0x10 & 0xf;
    local_7e8 = FUN_1805a46a0;
    local_800 = 0;
    local_808 = 0;
    iVar2 = (*(code *)**(undefined8 **)(lVar4 + 0x18))(local_7b8,local_7d0,param_2,param_1);
    if (iVar2 == 0) {
      local_75b = (uVar6 & 0x400) != 0;
      iVar2 = FUN_1805a46a0(local_7b8,param_3);
      if (iVar2 == 0) {
        local_7d7 = *(char *)(param_1 + 0xf8);
        local_78 = local_128;
        iStack_74 = iStack_124;
        iStack_70 = iStack_120;
        iStack_6c = iStack_11c;
        local_7d8 = *(char *)(param_1 + 0xf9);
        local_7c8 = local_118;
        (**(code **)(*(longlong *)(lVar4 + 0x18) + 8))(local_7b8);
        if ((uVar6 & 0x400) == 0) {
          uVar3 = *(uint *)(param_1 + 0xb8) & 1;
          *(undefined4 *)(param_1 + 0x60) = 0x6f75746c;
          *(uint *)(param_1 + 0xb8) = uVar3 | 4;
          if (*(ushort *)(param_2 + 0x1a) < 0x18) {
            *(uint *)(param_1 + 0xb8) = uVar3 | 0x104;
          }
          iVar2 = FUN_1805778f0(local_778);
          *(int *)(param_1 + 0x40) = iVar2 >> 0x10;
          iVar2 = FUN_1805778f0(local_778);
          *(int *)(param_1 + 0x50) = iVar2 >> 0x10;
          *(undefined1 *)(*(longlong *)(param_1 + 0xf0) + 0xc) = 0;
          iVar2 = *(int *)(local_7d0 + 0x154) - *(int *)(local_7d0 + 0x14c) >> 0x10;
          *(int *)(param_1 + 0x4c) = iVar2;
          *(int *)(param_1 + 0x54) = iVar2;
          if ((((local_78 != 0x10000) || (iStack_6c != 0x10000)) || (iStack_74 != 0)) ||
             (iStack_70 != 0)) {
            FUN_1805765a0(param_1 + 0x98,&local_78);
            lVar4 = (longlong)*(int *)(param_1 + 0x40) * (longlong)local_78;
            *(int *)(param_1 + 0x40) = (int)((ulonglong)(lVar4 + 0x8000 + (lVar4 >> 0x3f)) >> 0x10);
            lVar4 = (longlong)iStack_6c * (longlong)*(int *)(param_1 + 0x4c);
            *(int *)(param_1 + 0x4c) = (int)((ulonglong)(lVar4 + 0x8000 + (lVar4 >> 0x3f)) >> 0x10);
          }
          iVar2 = local_7c8._4_4_;
          if (((int)local_118 != 0) || (local_7c8._4_4_ != 0)) {
            FUN_180576690(param_1 + 0x98,local_118 & 0xffffffff,local_7c8._4_4_);
            *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + (int)local_118;
            *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + iVar2;
          }
          if (((uVar6 & 1) == 0) || (local_7d8 != '\0')) {
            iVar2 = *(int *)(param_1 + 0xfc);
            iVar1 = *(int *)(param_1 + 0x100);
            piVar5 = *(int **)(local_798 + 8);
            if (((local_7d7 == '\0') || (local_758 == 0)) &&
               (uVar3 = (uint)*(ushort *)(local_798 + 2), *(ushort *)(local_798 + 2) != 0)) {
              do {
                lVar4 = (longlong)*piVar5 * (longlong)iVar2;
                uVar3 = uVar3 - 1;
                *piVar5 = (int)((ulonglong)(lVar4 + (lVar4 >> 0x3f) + 0x8000) >> 0x10);
                lVar4 = (longlong)piVar5[1] * (longlong)iVar1;
                piVar5[1] = (int)((ulonglong)(lVar4 + 0x8000 + (lVar4 >> 0x3f)) >> 0x10);
                piVar5 = piVar5 + 2;
              } while (0 < (int)uVar3);
            }
            lVar4 = (longlong)*(int *)(param_1 + 0x40) * (longlong)iVar2;
            *(int *)(param_1 + 0x40) = (int)((ulonglong)(lVar4 + 0x8000 + (lVar4 >> 0x3f)) >> 0x10);
            lVar4 = (longlong)*(int *)(param_1 + 0x4c) * (longlong)iVar1;
            *(int *)(param_1 + 0x4c) = (int)((ulonglong)(lVar4 + 0x8000 + (lVar4 >> 0x3f)) >> 0x10);
          }
          FUN_180576310(param_1 + 0x98,&local_68);
          *(int *)(param_1 + 0x38) = local_68;
          *(int *)(param_1 + 0x30) = local_60 - local_68;
          *(int *)(param_1 + 0x34) = local_5c - local_64;
          *(int *)(param_1 + 0x3c) = local_5c;
          if ((uVar6 & 0x10) != 0) {
            FUN_18057bc10(param_1 + 0x30,*(undefined4 *)(param_1 + 0x4c));
          }
        }
        else {
          lVar4 = *(longlong *)(param_1 + 0xf0);
          iVar2 = FUN_1805778f0(local_780);
          *(int *)(param_1 + 0x38) = iVar2 >> 0x10;
          iVar2 = FUN_1805778f0(local_778);
          *(int *)(param_1 + 0x40) = iVar2 >> 0x10;
          *(ulonglong *)(lVar4 + 0x10) = CONCAT44(iStack_74,local_78);
          *(ulonglong *)(lVar4 + 0x18) = CONCAT44(iStack_6c,iStack_70);
          *(ulonglong *)(lVar4 + 0x20) = local_118;
          *(undefined1 *)(lVar4 + 0xc) = 1;
        }
      }
      else {
        (**(code **)(*(longlong *)(lVar4 + 0x18) + 8))(local_7b8);
      }
    }
  }
}



