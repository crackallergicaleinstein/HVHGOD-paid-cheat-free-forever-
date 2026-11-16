// FUN_1805a5610 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805a5610 */

ulonglong FUN_1805a5610(longlong param_1,uint *param_2,uint param_3,uint param_4)

{
  short sVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  undefined2 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  int *piVar11;
  short sVar12;
  ulonglong uVar13;
  uint local_res10 [4];
  uint local_res20 [2];
  uint *local_38;
  undefined4 local_30;
  undefined4 local_2c;
  
  local_res20[0] = param_4;
  iVar4 = FUN_1805788b0(param_1,0);
  if (((((iVar4 != 0) ||
        (local_res20[0] = FUN_180578280(param_1,&DAT_180672e00,param_2 + 0x36), local_res20[0] != 0)
        ) || (param_2[0x3f] = param_2[0x3f] + param_2[0x48] * 0x10000, param_2[0x36] != 0x50465230))
      || ((4 < param_2[0x37] || (param_2[0x39] < 0x3a)))) || (param_2[0x38] != 0xd0a)) {
    return 2;
  }
  uVar10 = 0;
  uVar8 = param_2[0x3b];
  uVar7 = 0;
  local_res10[0] = FUN_1805788b0(param_1,uVar8);
  uVar13 = (ulonglong)local_res10[0];
  if (local_res10[0] == 0) {
    uVar3 = FUN_180578720(param_1,local_res10);
    uVar13 = (ulonglong)local_res10[0];
    if (local_res10[0] == 0) {
      if (((uVar3 < 0x3333) && ((uint)uVar3 * 4 + 2 + (uint)uVar3 < *(uint *)(param_1 + 8) - uVar8))
         && ((uint)uVar3 * 0x17 + 0x5f < *(uint *)(param_1 + 8))) {
        uVar7 = (uint)uVar3;
      }
      else {
        uVar13 = 8;
      }
    }
  }
  local_res20[0] = (uint)uVar13;
  if (local_res20[0] != 0) {
    return uVar13;
  }
  *param_2 = uVar7;
  if ((int)param_3 < 0) {
    return uVar13;
  }
  param_3 = param_3 & 0xffff;
  if (uVar7 <= param_3) {
    return 6;
  }
  local_res20[0] = FUN_1805a7970(param_2 + 0x51,param_1,param_3,param_2[0x3b],param_2[0x48] != 0);
  if (local_res20[0] != 0) {
    return (ulonglong)local_res20[0];
  }
  local_res20[0] = FUN_1805a7e20(param_2 + 0x5e,param_1,param_2[0x5c],param_2[0x5b]);
  if (local_res20[0] != 0) {
    return (ulonglong)local_res20[0];
  }
  param_2[1] = param_3;
  uVar6 = 0;
  param_2[2] = param_2[2] | 1;
  uVar8 = param_2[2];
  param_2[4] = param_2[0x86] + 1;
  uVar7 = param_2[0x86];
  if (uVar7 != 0) {
    do {
      if (*(int *)(*(longlong *)(param_2 + 0x8a) + 0xc + (ulonglong)uVar6 * 0x10) != 0)
      goto LAB_1805a5826;
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar7);
  }
  if (uVar6 == uVar7) {
    if (param_2[0x7c] == 0) {
      return 3;
    }
    uVar8 = uVar8 & 0xfffffffe;
    param_2[2] = uVar8;
  }
LAB_1805a5826:
  if ((param_2[0x68] & 4) == 0) {
    uVar8 = param_2[2] | 4;
  }
  uVar8 = ((param_2[0x68] & 1) + 1) * 0x10 | uVar8;
  param_2[2] = uVar8;
  uVar7 = param_2[0x7c];
  uVar13 = (ulonglong)uVar7;
  if (uVar7 != 0) {
    uVar8 = uVar8 | 2;
    param_2[2] = uVar8;
  }
  if (param_2[0x8c] != 0) {
    param_2[2] = uVar8 | 0x40;
  }
  *(longlong *)(param_2 + 6) = *(longlong *)(param_2 + 0x78);
  if (*(longlong *)(param_2 + 0x78) == 0) {
    *(undefined8 *)(param_2 + 6) = *(undefined8 *)(param_2 + 0x76);
  }
  *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_2 + 0x7a);
  param_2[10] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0x16] = param_2[100];
  param_2[0x17] = param_2[0x65];
  param_2[0x18] = param_2[0x66];
  param_2[0x19] = param_2[0x67];
  uVar3 = (ushort)param_2[0x62];
  *(ushort *)(param_2 + 0x1a) = uVar3;
  sVar1 = (short)param_2[0x67];
  *(short *)((longlong)param_2 + 0x6a) = sVar1;
  sVar2 = (short)param_2[0x65];
  *(short *)(param_2 + 0x1b) = sVar2;
  sVar12 = (short)(((uint)uVar3 * 0xc) / 10);
  *(short *)((longlong)param_2 + 0x6e) = sVar12;
  if ((int)sVar12 < (int)sVar1 - (int)sVar2) {
    sVar12 = sVar1 - sVar2;
    *(short *)((longlong)param_2 + 0x6e) = sVar12;
  }
  if (uVar7 != 0) {
    puVar5 = (undefined2 *)FUN_18057ac40(*(undefined8 *)(param_2 + 0x26),0x10,0,uVar7,0,local_res20)
    ;
    *(undefined2 **)(param_2 + 0xc) = puVar5;
    if (local_res20[0] != 0) {
      return (ulonglong)local_res20[0];
    }
    piVar11 = *(int **)(param_2 + 0x7e);
    do {
      *puVar5 = (short)piVar11[1];
      puVar5[1] = (short)*piVar11;
      *(int *)(puVar5 + 2) = piVar11[1] << 6;
      *(int *)(puVar5 + 4) = *piVar11 << 6;
      *(int *)(puVar5 + 6) = piVar11[1] << 6;
      uVar13 = uVar13 - 1;
      puVar5 = puVar5 + 8;
      piVar11 = piVar11 + 10;
    } while (uVar13 != 0);
    sVar12 = *(short *)((longlong)param_2 + 0x6e);
    uVar3 = (ushort)param_2[0x1a];
    param_2[10] = uVar7;
  }
  uVar8 = (uint)uVar3;
  if ((param_2[0x68] & 4) == 0) {
    uVar10 = (uint)(ushort)param_2[0x69];
  }
  else {
    uVar7 = param_2[0x86];
    if (uVar7 != 0) {
      puVar9 = (uint *)(*(longlong *)(param_2 + 0x8a) + 4);
      do {
        uVar8 = *puVar9;
        puVar9 = puVar9 + 4;
        if ((int)uVar8 <= (int)uVar10) {
          uVar8 = uVar10;
        }
        uVar10 = uVar8;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
      sVar12 = *(short *)((longlong)param_2 + 0x6e);
      uVar8 = (uint)(ushort)param_2[0x1a];
    }
  }
  *(short *)(param_2 + 0x1c) = (short)uVar10;
  *(short *)((longlong)param_2 + 0x72) = sVar12;
  local_2c = 0x10003;
  local_30 = 0x756e6963;
  *(short *)(param_2 + 0x1d) =
       (short)((longlong)(int)uVar8 * -0x66666667 >> 0x22) -
       (short)((longlong)(int)uVar8 * -0x66666667 >> 0x3f);
  *(short *)((longlong)param_2 + 0x76) = (short)((ulonglong)uVar8 / 0x1e);
  local_38 = param_2;
  uVar13 = FUN_180573150(&DAT_180672cc0,0,&local_38,0);
  if (param_2[0x8c] == 0) {
    return uVar13 & 0xffffffff;
  }
  param_2[2] = param_2[2] | 0x40;
  return uVar13;
}



