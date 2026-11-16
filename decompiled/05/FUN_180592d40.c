// FUN_180592d40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180592d40 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180592d40(longlong param_1,longlong param_2,undefined4 param_3,uint param_4)

{
  short sVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_a8 [32];
  ushort *local_88;
  longlong local_80;
  ushort *local_78;
  short local_68 [2];
  ushort local_64 [2];
  short local_60 [2];
  ushort local_5c [2];
  ushort local_58;
  ushort local_56;
  short local_54;
  short local_52;
  ushort local_50;
  short local_4e;
  short local_4c;
  ushort local_4a;
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_a8;
  lVar3 = *(longlong *)(param_2 + 8);
  local_80 = param_2 + 0x68;
  local_78 = &local_58;
  local_88 = *(ushort **)(lVar3 + 0xa0);
  iVar2 = (**(code **)(*(longlong *)(lVar3 + 0x2d0) + 0x98))(lVar3,*(undefined4 *)(param_1 + 0x80));
  if (iVar2 == 0) {
    *(int *)(param_2 + 0x3c) = (int)local_52 << 6;
    *(uint *)(param_2 + 0x30) = (uint)local_56 << 6;
    *(uint *)(param_2 + 0x40) = (uint)local_50 << 6;
    *(uint *)(param_2 + 0x34) = (uint)local_58 << 6;
    *(int *)(param_2 + 0x38) = (int)local_54 << 6;
    *(undefined4 *)(param_2 + 0x60) = 0x62697473;
    *(int *)(param_2 + 0x44) = (int)local_4e << 6;
    *(int *)(param_2 + 0x48) = (int)local_4c << 6;
    *(uint *)(param_2 + 0x4c) = (uint)local_4a << 6;
    iVar4 = (int)local_4c;
    iVar2 = (int)local_4e;
    if ((param_4 >> 4 & 1) == 0) {
      iVar4 = (int)local_52;
      iVar2 = (int)local_54;
    }
    *(int *)(param_2 + 0x90) = iVar2;
    *(int *)(param_2 + 0x94) = iVar4;
  }
  else if ((((char)iVar2 == -99) && ((*(byte *)(*(longlong *)(param_2 + 8) + 8) & 1) == 0)) &&
          (*(int *)(lVar3 + 0x430) != 0)) {
    iVar2 = *(int *)(param_1 + 0x1c);
    iVar4 = *(int *)(param_1 + 0x20);
    local_60[0] = 0;
    local_68[0] = 0;
    local_5c[0] = 0;
    local_64[0] = 0;
    local_88 = local_5c;
    (**(code **)(*(longlong *)(lVar3 + 0x2d0) + 0x150))(lVar3,0,param_3,local_60);
    if (*(char *)(lVar3 + 400) == '\0') {
      if (*(short *)(lVar3 + 0x208) == -1) {
        local_68[0] = *(short *)(lVar3 + 0x13c);
        sVar1 = *(short *)(lVar3 + 0x13e);
      }
      else {
        local_68[0] = *(short *)(lVar3 + 0x24e);
        sVar1 = *(short *)(lVar3 + 0x250);
      }
      local_64[0] = sVar1 - local_68[0];
      if (-1 < (int)local_68[0] - (int)sVar1) {
        local_64[0] = local_68[0] - sVar1;
      }
    }
    else {
      local_88 = local_64;
      (**(code **)(*(longlong *)(lVar3 + 0x2d0) + 0x150))(lVar3,1,param_3,local_68);
    }
    lVar3 = (longlong)local_60[0] * (longlong)iVar2;
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined4 *)(param_2 + 0x3c) = 0;
    *(int *)(param_2 + 0x38) = (int)((ulonglong)(lVar3 + 0x8000 + (lVar3 >> 0x3f)) >> 0x10);
    lVar3 = (ulonglong)local_5c[0] * (longlong)iVar2;
    lVar5 = (ulonglong)local_64[0] * (longlong)iVar4;
    *(undefined4 *)(param_2 + 0x44) = 0;
    *(undefined8 *)(param_2 + 0x90) = 0;
    *(int *)(param_2 + 0x40) = (int)((ulonglong)(lVar3 + 0x8000 + (lVar3 >> 0x3f)) >> 0x10);
    lVar3 = (longlong)local_68[0] * (longlong)iVar4;
    *(undefined4 *)(param_2 + 0x60) = 0x62697473;
    *(undefined1 *)(param_2 + 0x82) = 1;
    *(int *)(param_2 + 0x48) = (int)((ulonglong)(lVar3 + 0x8000 + (lVar3 >> 0x3f)) >> 0x10);
    *(int *)(param_2 + 0x4c) = (int)((ulonglong)(lVar5 + 0x8000 + (lVar5 >> 0x3f)) >> 0x10);
  }
}



