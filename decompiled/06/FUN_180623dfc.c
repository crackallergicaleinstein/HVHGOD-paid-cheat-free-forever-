// FUN_180623dfc - decompiled reference (Ghidra). Not original source, does not compile.

/* 180623dfc */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180623dfc(ulonglong param_1,undefined **param_2,ulonglong param_3,uint *param_4,
                  undefined8 param_5)

{
  byte bVar1;
  ulonglong uVar2;
  uint uVar3;
  uint *puVar4;
  undefined **ppuVar5;
  byte bVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint *puVar10;
  undefined1 auStack_78 [24];
  uint auStack_60 [6];
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_78;
  puVar4 = (uint *)&DAT_180bb2540;
  if (param_4 != (uint *)0x0) {
    puVar4 = param_4;
  }
  ppuVar5 = &PTR_180700558;
  uVar2 = 1;
  if (param_2 != (undefined **)0x0) {
    ppuVar5 = param_2;
    uVar2 = param_3;
  }
  puVar10 = (uint *)(-(ulonglong)(param_2 != (undefined **)0x0) & param_1);
  if (uVar2 == 0) {
  }
  if (*(short *)((longlong)puVar4 + 6) == 0) {
    uVar3 = FUN_180623dc4(ppuVar5);
    uVar7 = (ulonglong)(int)uVar3;
    bVar1 = *(byte *)ppuVar5;
    ppuVar5 = (undefined **)((longlong)ppuVar5 + 1);
    if (uVar3 < 2) {
      if (puVar10 == (uint *)0x0) {
      }
      *puVar10 = (uint)bVar1;
    }
    if (2 < uVar3 - 2) goto LAB_180623f92;
    bVar6 = (byte)uVar3;
    uVar3 = (1 << (7 - bVar6 & 0x1f)) - 1U & (uint)bVar1;
  }
  else {
    bVar1 = (byte)puVar4[1];
    uVar7 = (ulonglong)bVar1;
    uVar3 = *puVar4;
    bVar6 = *(byte *)((longlong)puVar4 + 6);
    if (((2 < (byte)(bVar1 - 2)) || (bVar6 == 0)) || (bVar1 <= bVar6)) goto LAB_180623f92;
  }
  uVar9 = (ulonglong)bVar6;
  uVar8 = uVar9;
  if (uVar2 <= uVar9) {
    uVar8 = uVar2;
  }
  while ((ulonglong)((longlong)ppuVar5 - (longlong)param_2) < uVar8) {
    bVar1 = *(byte *)ppuVar5;
    ppuVar5 = (undefined **)((longlong)ppuVar5 + 1);
    if ((bVar1 & 0xc0) != 0x80) goto LAB_180623f92;
    uVar3 = bVar1 & 0x3f | uVar3 << 6;
  }
  if (uVar8 < uVar9) {
    *(ushort *)(puVar4 + 1) = (ushort)uVar7 & 0xff;
    *(ushort *)((longlong)puVar4 + 6) = (ushort)(byte)(bVar6 - (char)uVar8);
    *puVar4 = uVar3;
  }
  if ((0x7ff < uVar3 - 0xd800) && (uVar3 < 0x110000)) {
    auStack_60[2] = 0x80;
    auStack_60[3] = 0x800;
    auStack_60[4] = 0x10000;
    if (auStack_60[uVar7 & 0xff] <= uVar3) {
      if (puVar10 != (uint *)0x0) {
        *puVar10 = uVar3;
      }
      FUN_180632c74(-(ulonglong)(uVar3 != 0) & uVar9,puVar4);
    }
  }
LAB_180623f92:
  FUN_180632c7c(puVar4,param_5);
}



