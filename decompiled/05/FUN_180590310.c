// FUN_180590310 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180590310 */

void FUN_180590310(longlong *param_1,longlong param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  uint uVar7;
  code *pcVar8;
  code *pcVar9;
  uint uVar10;
  code *pcVar11;
  
  uVar10 = *(uint *)(param_1 + 0x3f);
  uVar1 = *(ushort *)(param_1 + 0x1d);
  param_1[8] = param_1[0x1d];
  param_1[9] = param_1[0x1e];
  param_1[10] = param_1[0x1f];
  param_1[0xb] = param_1[0x20];
  param_1[0xc] = param_1[0x21];
  param_1[0xd] = param_1[0x22];
  param_1[0xe] = param_1[0x23];
  param_1[0xf] = param_1[0x1d];
  param_1[0x10] = param_1[0x1e];
  param_1[0x11] = param_1[0x1f];
  param_1[0x12] = param_1[0x20];
  param_1[0x13] = param_1[0x21];
  param_1[0x14] = param_1[0x22];
  param_1[0x15] = param_1[0x23];
  param_1[0x16] = param_1[0x1d];
  param_1[0x17] = param_1[0x1e];
  param_1[0x18] = param_1[0x1f];
  param_1[0x19] = param_1[0x20];
  param_1[0x1a] = param_1[0x21];
  param_1[0x1b] = param_1[0x22];
  param_1[0x1c] = param_1[0x23];
  uVar7 = (uVar1 + uVar10) * 2;
  if (uVar7 < 0x1e) {
    uVar7 = 0x1e;
  }
  if (uVar7 < *(ushort *)(param_1 + 0x24)) {
    if (0xffff < uVar7) {
      uVar7 = 0xffff;
    }
    *(short *)(param_1 + 0x24) = (short)uVar7;
  }
  *(undefined4 *)((longlong)param_1 + 0x32c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x334) = 0;
  if (uVar1 == 0) {
    uVar10 = uVar10 * 0x16 + 300;
  }
  else {
    uVar7 = (uint)uVar1 * 10;
    if (uVar7 < 0x32) {
      uVar7 = 0x32;
    }
    uVar10 = uVar10 / 10;
    if (uVar10 < 0x32) {
      uVar10 = 0x32;
    }
    uVar10 = uVar10 + uVar7;
  }
  *(uint *)(param_1 + 0x66) = uVar10;
  uVar7 = *(int *)(*param_1 + 0x10) * 100;
  if (uVar7 < uVar10) {
    *(uint *)(param_1 + 0x66) = uVar7;
    uVar10 = uVar7;
  }
  *(uint *)(param_1 + 0x67) = uVar10;
  if (*(short *)((longlong)param_1 + 0x15c) == *(short *)((longlong)param_1 + 0x15e)) {
    pcVar6 = FUN_18058c540;
    pcVar8 = FUN_1805910f0;
    pcVar9 = FUN_18058c630;
    pcVar11 = FUN_18058a120;
  }
  else {
    pcVar6 = FUN_18058c580;
    pcVar8 = FUN_180591130;
    pcVar9 = FUN_18058c640;
    pcVar11 = FUN_18058a130;
  }
  param_1[0x60] = (longlong)pcVar11;
  param_1[0x61] = (longlong)pcVar9;
  param_1[0x62] = (longlong)pcVar8;
  param_1[99] = (longlong)pcVar6;
  uVar5 = *(undefined8 *)(param_2 + 0x90);
  *(undefined8 *)((longlong)param_1 + 0x18c) = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)((longlong)param_1 + 0x194) = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0xa0);
  *(undefined8 *)((longlong)param_1 + 0x19c) = *(undefined8 *)(param_2 + 0x98);
  *(undefined8 *)((longlong)param_1 + 0x1a4) = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0xb0);
  *(undefined8 *)((longlong)param_1 + 0x1ac) = *(undefined8 *)(param_2 + 0xa8);
  *(undefined8 *)((longlong)param_1 + 0x1b4) = uVar5;
  uVar2 = *(undefined4 *)(param_2 + 0xbc);
  uVar3 = *(undefined4 *)(param_2 + 0xc0);
  uVar4 = *(undefined4 *)(param_2 + 0xc4);
  *(undefined4 *)((longlong)param_1 + 0x1bc) = *(undefined4 *)(param_2 + 0xb8);
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = uVar3;
  *(undefined4 *)(param_1 + 0x39) = uVar4;
  *(undefined8 *)((longlong)param_1 + 0x1cc) = *(undefined8 *)(param_2 + 200);
  *(undefined4 *)((longlong)param_1 + 0x1d4) = *(undefined4 *)(param_2 + 0xd0);
  param_1[0x59] = (longlong)FUN_18058c7d0;
  FUN_180589fa0(param_1);
  *(uint *)((longlong)param_1 + 0x324) = *(uint *)((longlong)param_1 + 0x324) & 0xfffffffc;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x4a) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2c4) = 0;
                    /* WARNING: Could not recover jumptable at 0x00018059055f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)param_1[3])();
  return;
}



