// FUN_1805e4d20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805e4d20 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805e4d20(undefined8 *param_1,uint *param_2,byte *param_3,longlong param_4)

{
  ushort *puVar1;
  undefined8 *puVar2;
  ushort *puVar3;
  byte bVar4;
  byte bVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  ushort *puVar8;
  ulonglong uVar9;
  uint uVar10;
  byte bVar11;
  byte *pbVar12;
  byte bVar13;
  undefined1 auStack_218 [32];
  undefined *local_1f8;
  uint local_1f0;
  longlong local_1e8;
  undefined8 local_1e0;
  undefined4 local_1d8 [2];
  undefined4 local_1d0 [2];
  undefined4 local_1c8 [2];
  uint local_1c0;
  uint local_1bc;
  uint local_1b8 [2];
  byte *local_1b0;
  undefined1 local_1a8 [112];
  undefined1 local_138 [112];
  undefined1 local_c8 [112];
  ulonglong local_58;
  
  local_58 = DAT_1808d5f00 ^ (ulonglong)auStack_218;
  puVar3 = (ushort *)(param_3 + param_4);
  if (param_4 == 0) {
  }
  bVar4 = *param_3;
  uVar10 = (uint)bVar4;
  puVar1 = (ushort *)(param_3 + 1);
  puVar8 = puVar1;
  if (0x7f < bVar4) {
    if (bVar4 == 0xff) {
      puVar8 = (ushort *)(param_3 + 3);
      if (puVar3 < puVar8) {
      }
      uVar10 = *puVar1 + 0x7f00;
    }
    else {
      if (puVar3 <= puVar1) {
      }
      uVar10 = (uVar10 - 0x80) * 0x100 + (uint)(byte)*puVar1;
      puVar8 = (ushort *)(param_3 + 2);
    }
  }
  *param_2 = uVar10;
  if (uVar10 == 0) {
  }
  puVar1 = (ushort *)((longlong)puVar8 + 1);
  if (puVar3 < puVar1) {
  }
  bVar4 = (byte)*puVar8;
  if ((bVar4 & 3) != 0) {
  }
  local_1d8[0] = 0x23;
  bVar5 = bVar4 >> 6;
  bVar13 = bVar4 >> 4 & 3;
  bVar11 = bVar4 >> 2 & 3;
  local_1f8 = (undefined *)((longlong)puVar3 - (longlong)puVar1);
  local_1b0 = param_3;
  if (bVar5 == 0) {
    *param_1 = &DAT_1806881b0;
LAB_1805e4f36:
    uVar9 = 0;
  }
  else if (bVar5 == 1) {
    if (local_1f8 == (undefined *)0x0) {
    }
    bVar5 = *(byte *)puVar1;
    if (0x23 < bVar5) {
    }
    uVar9 = 1;
    uVar7 = *(undefined4 *)(&DAT_180687fa0 + (ulonglong)bVar5 * 4);
    *(undefined *)((longlong)param_1 + 0x2a) = (&DAT_180687e48)[bVar5];
    param_1[4] = 0;
    *(undefined1 *)((longlong)param_1 + 0x2b) = 0;
    *(undefined2 *)(param_1 + 5) = 0;
    *(undefined4 *)((longlong)param_1 + 0x2c) = uVar7;
    *param_1 = param_1 + 4;
  }
  else {
    if (bVar5 != 2) {
      if (bVar5 != 3) {
      }
      if (*(int *)((longlong)param_1 + 0x7534) == 0) {
      }
      if ((*(int *)((longlong)param_1 + 0x75fc) != 0) && (0x18 < (int)uVar10)) {
        uVar9 = 0;
        do {
          uVar9 = uVar9 + 0x40;
        } while (uVar9 < 0x1008);
      }
      goto LAB_1805e4f36;
    }
    uVar9 = thunk_FUN_1805dd700(local_1a8,local_1d8,&local_1c0,puVar1);
    if (0xffffffffffffff88 < uVar9) {
    }
    if (9 < local_1c0) {
    }
    local_1e8 = (longlong)param_1 + 0x6abc;
    local_1e0 = 0xa00;
    local_1f0 = local_1c0;
    local_1f8 = &DAT_180687e48;
    FUN_1805e4460(param_1 + 4,local_1a8,local_1d8[0],&DAT_180687fa0);
    *param_1 = param_1 + 4;
  }
  pbVar12 = (byte *)((longlong)puVar1 + uVar9);
  local_1d0[0] = 0x1f;
  puVar2 = param_1 + 0x205;
  local_1f8 = (undefined *)((longlong)puVar3 - (longlong)pbVar12);
  if ((bVar4 >> 4 & 3) == 0) {
    param_1[2] = &DAT_1806883c0;
  }
  else {
    if (bVar13 == 1) {
      if (local_1f8 == (undefined *)0x0) {
      }
      bVar5 = *pbVar12;
      if (0x1f < bVar5) {
      }
      uVar9 = 1;
      uVar7 = *(undefined4 *)(&DAT_180688030 + (ulonglong)bVar5 * 4);
      *(undefined *)((longlong)param_1 + 0x1032) = (&DAT_1806880b0)[bVar5];
      *puVar2 = 0;
      *(undefined1 *)((longlong)param_1 + 0x1033) = 0;
      *(undefined2 *)(param_1 + 0x206) = 0;
      *(undefined4 *)((longlong)param_1 + 0x1034) = uVar7;
      param_1[2] = puVar2;
      goto LAB_1805e508e;
    }
    if (bVar13 == 2) {
      uVar9 = thunk_FUN_1805dd700(local_138,local_1d0,&local_1bc,pbVar12);
      if (0xffffffffffffff88 < uVar9) {
      }
      if (8 < local_1bc) {
      }
      local_1e8 = (longlong)param_1 + 0x6abc;
      local_1e0 = 0xa00;
      local_1f0 = local_1bc;
      local_1f8 = &DAT_1806880b0;
      FUN_1805e4460(puVar2,local_138,local_1d0[0],&DAT_180688030);
      param_1[2] = puVar2;
      goto LAB_1805e508e;
    }
    if (bVar13 != 3) {
    }
    if (*(int *)((longlong)param_1 + 0x7534) == 0) {
    }
    if ((*(int *)((longlong)param_1 + 0x75fc) != 0) && (0x18 < (int)uVar10)) {
      uVar9 = 0;
      do {
        uVar9 = uVar9 + 0x40;
      } while (uVar9 < 0x808);
    }
  }
  uVar9 = 0;
LAB_1805e508e:
  pbVar12 = pbVar12 + uVar9;
  local_1c8[0] = 0x34;
  local_1f8 = (undefined *)((longlong)puVar3 - (longlong)pbVar12);
  puVar2 = param_1 + 0x306;
  if ((bVar4 >> 2 & 3) == 0) {
    param_1[1] = &DAT_1806884d0;
  }
  else if (bVar11 == 1) {
    if ((local_1f8 != (undefined *)0x0) && (bVar4 = *pbVar12, bVar4 < 0x35)) {
      uVar7 = *(undefined4 *)(&DAT_1806880d0 + (ulonglong)bVar4 * 4);
      uVar6 = (&DAT_180687eb8)[bVar4];
      *puVar2 = 0;
      *(undefined1 *)((longlong)param_1 + 0x183b) = 0;
      *(undefined2 *)(param_1 + 0x307) = 0;
      *(undefined1 *)((longlong)param_1 + 0x183a) = uVar6;
      *(undefined4 *)((longlong)param_1 + 0x183c) = uVar7;
      param_1[1] = puVar2;
    }
  }
  else if (bVar11 == 2) {
    uVar9 = thunk_FUN_1805dd700(local_c8,local_1c8,local_1b8,pbVar12);
    if ((uVar9 < 0xffffffffffffff89) && (local_1b8[0] < 10)) {
      local_1e8 = (longlong)param_1 + 0x6abc;
      local_1e0 = 0xa00;
      local_1f0 = local_1b8[0];
      local_1f8 = &DAT_180687eb8;
      FUN_1805e4460(puVar2,local_c8,local_1c8[0],&DAT_1806880d0);
      param_1[1] = puVar2;
    }
  }
  else if ((((bVar11 == 3) && (*(int *)((longlong)param_1 + 0x7534) != 0)) &&
           (*(int *)((longlong)param_1 + 0x75fc) != 0)) && (0x18 < (int)uVar10)) {
    uVar9 = 0;
    do {
      uVar9 = uVar9 + 0x40;
    } while (uVar9 < 0x1008);
  }
}



