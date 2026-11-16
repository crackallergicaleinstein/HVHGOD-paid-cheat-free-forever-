// FUN_180595c40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180595c40 */

int FUN_180595c40(longlong *param_1,undefined1 param_2)

{
  ushort uVar1;
  undefined8 uVar2;
  code *pcVar3;
  ushort uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  code *pcVar11;
  uint uVar12;
  ulonglong uVar13;
  int local_res8 [2];
  int local_res18 [4];
  
  lVar10 = *param_1;
  lVar8 = *(longlong *)(lVar10 + 0x90);
  uVar2 = *(undefined8 *)(lVar10 + 0x98);
  if (lVar8 == 0) {
    return 0x99;
  }
  uVar9 = *(undefined8 *)(lVar8 + 0x10);
  lVar6 = FUN_18057aad0(uVar9,0x340,local_res18);
  if (local_res18[0] == 0) {
    pcVar3 = *(code **)(*(longlong *)(lVar8 + 8) + 0x138);
    pcVar11 = FUN_18058e020;
    if (pcVar3 != (code *)0x0) {
      pcVar11 = pcVar3;
    }
    *(code **)(lVar6 + 0x18) = pcVar11;
    *(undefined8 *)(lVar6 + 0x10) = uVar9;
    *(undefined4 *)(lVar6 + 0x254) = 0x20;
    uVar7 = FUN_18057ac40(uVar9,0x18,0,0x20,0,local_res18);
    *(undefined8 *)(lVar6 + 600) = uVar7;
    if (local_res18[0] != 0) {
      FUN_18057abd0(uVar9,lVar6);
      return 0x99;
    }
  }
  if (lVar6 == 0) {
    return 0x99;
  }
  param_1[0x22] = lVar6;
  *(undefined1 *)(lVar6 + 0x2c6) = param_2;
  uVar4 = *(ushort *)(lVar10 + 0x184);
  *(uint *)(lVar6 + 0x22c) = (uint)uVar4;
  uVar1 = *(ushort *)(lVar10 + 0x186);
  *(uint *)(lVar6 + 0x23c) = (uint)uVar1;
  lVar8 = FUN_18057ad10(uVar2,0x14,0,(uint)uVar1 + (uint)uVar4,0,local_res8);
  *(longlong *)(lVar6 + 0x230) = lVar8;
  if (local_res8[0] == 0) {
    *(undefined4 *)(lVar6 + 0x228) = 0;
    *(undefined4 *)(lVar6 + 0x238) = 0;
    *(undefined8 *)(lVar6 + 0x248) = 0;
    *(ulonglong *)(lVar6 + 0x240) = lVar8 + (ulonglong)*(uint *)(lVar6 + 0x22c) * 0x14;
    uVar4 = *(ushort *)(lVar10 + 0x188);
    uVar12 = 0x80;
    if (0x100 < (uVar4 & 0xfffe)) {
      uVar12 = (uint)(uVar4 >> 1);
    }
    *(uint *)(lVar6 + 0x28) = uVar4 + uVar12;
    uVar1 = *(ushort *)(lVar10 + 0x182);
    *(ushort *)(lVar6 + 0x298) = uVar1;
    iVar5 = *(int *)(lVar10 + 0x3d0);
    *(int *)(lVar6 + 0x1f8) = iVar5;
    uVar9 = FUN_18057ad10(uVar2,4,0,iVar5 + (uint)uVar1 + (uint)uVar4 + uVar12,0,local_res8);
    *(undefined8 *)(lVar6 + 0x30) = uVar9;
    if (local_res8[0] == 0) {
      uVar4 = *(short *)(lVar10 + 0x180) + 4;
      uVar13 = (ulonglong)uVar4;
      lVar10 = FUN_18057aad0(uVar2,(uint)uVar4 * 0x19,local_res18);
      param_1[0x1c] = lVar10;
      if (local_res18[0] == 0) {
        *(ushort *)(param_1 + 0x1b) = uVar4;
        *(undefined2 *)((longlong)param_1 + 0xda) = 0;
        param_1[0x1d] = uVar13 * 8 + lVar10;
        param_1[0x1e] = lVar10 + uVar13 * 0x10;
        lVar10 = lVar10 + uVar13 * 0x18;
        *(undefined2 *)(param_1 + 0x21) = 0;
        param_1[0x20] = lVar10;
        param_1[0x1f] = lVar10;
      }
      local_res8[0] = local_res18[0];
      if (local_res18[0] == 0) {
        lVar10 = *param_1;
        lVar8 = param_1[0x22];
        param_1[0x11] = 0x1000000000000;
        param_1[0x12] = 0x400000010001;
        param_1[0x13] = 0x400000004000;
        param_1[0x14] = (longlong)&DAT_100000001;
        param_1[0x15] = 0;
        param_1[0x16] = 0;
        *(undefined4 *)(param_1 + 0x17) = 0x40;
        *(undefined4 *)((longlong)param_1 + 0xbc) = 0x44;
        *(undefined4 *)(param_1 + 0x18) = 0;
        *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
        param_1[0x19] = 0x100030009;
        *(undefined4 *)(param_1 + 0x1a) = 0;
        *(undefined4 *)((longlong)param_1 + 0x11c) = 0xffffffff;
        *(undefined2 *)((longlong)param_1 + 0x76) = 0;
        FUN_18058cdb0(lVar8,lVar10,param_1);
        *(undefined8 *)(lVar8 + 0x278) = 0;
        *(undefined4 *)(lVar8 + 0x280) = 0;
        *(undefined8 *)(lVar8 + 0x288) = 0;
        *(undefined4 *)(lVar8 + 0x290) = 0;
        iVar5 = *(int *)(lVar10 + 0x3b0);
        if (iVar5 == 0) {
          *(undefined4 *)(param_1 + 0x23) = 0;
        }
        else {
          uVar2 = *(undefined8 *)(lVar10 + 0x3b8);
          *(undefined8 *)(lVar8 + 0x268) = uVar2;
          *(int *)(lVar8 + 0x270) = iVar5;
          *(int *)(lVar8 + 0x1ec) = iVar5;
          *(undefined8 *)(lVar8 + 0x1e0) = uVar2;
          *(undefined4 *)(lVar8 + 0x1e8) = 0;
          *(undefined4 *)(lVar8 + 0x1dc) = 1;
          *(undefined4 *)(lVar8 + 0x1d8) = 1;
          *(undefined4 *)(lVar8 + 0xe8) = 0;
          iVar5 = FUN_180590310(lVar8,param_1);
          *(int *)(param_1 + 0x23) = iVar5;
          if (iVar5 != 0) {
            return iVar5;
          }
        }
        *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(lVar8 + 0x1bc);
        *(undefined4 *)((longlong)param_1 + 0xbc) = *(undefined4 *)(lVar8 + 0x1c0);
        *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(lVar8 + 0x1c4);
        *(undefined4 *)((longlong)param_1 + 0xc4) = *(undefined4 *)(lVar8 + 0x1c8);
        *(undefined2 *)(param_1 + 0x19) = *(undefined2 *)(lVar8 + 0x1cc);
        *(undefined2 *)((longlong)param_1 + 0xca) = *(undefined2 *)(lVar8 + 0x1ce);
        *(undefined1 *)((longlong)param_1 + 0xcc) = *(undefined1 *)(lVar8 + 0x1d0);
        *(undefined1 *)((longlong)param_1 + 0xcd) = *(undefined1 *)(lVar8 + 0x1d1);
        *(undefined1 *)((longlong)param_1 + 0xce) = *(undefined1 *)(lVar8 + 0x1d2);
        *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(lVar8 + 0x1d4);
        return 0;
      }
    }
  }
  FUN_180595b00(param_1);
  return local_res8[0];
}



