// FUN_180470520 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180470520 */

bool FUN_180470520(ulonglong *param_1)

{
  undefined1 uVar1;
  ushort uVar2;
  sbyte sVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  uint uVar8;
  undefined1 *puVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  
  puVar9 = (undefined1 *)param_1[4];
  while( true ) {
    while( true ) {
      if ((int)param_1[2] < 0x10) {
        if (*param_1 < param_1[1]) {
          FUN_180470340(param_1);
        }
        else {
          if (*(int *)((longlong)param_1 + 0x14) != 0) {
            return false;
          }
          *(undefined4 *)((longlong)param_1 + 0x14) = 1;
          *(int *)(param_1 + 2) = (int)param_1[2] + 0x10;
        }
      }
      uVar2 = *(ushort *)((longlong)param_1 + (ulonglong)((uint)param_1[3] & 0x1ff) * 2 + 0x3c);
      if (uVar2 == 0) {
        uVar10 = FUN_1804703a0(param_1,(longlong)param_1 + 0x3c);
      }
      else {
        *(uint *)(param_1 + 2) = (int)param_1[2] - (uint)(uVar2 >> 9);
        *(uint *)(param_1 + 3) = (uint)param_1[3] >> (uVar2 >> 9 & 0x1f);
        uVar10 = uVar2 & 0x1ff;
      }
      if (0xff < (int)uVar10) break;
      if ((int)uVar10 < 0) {
        return false;
      }
      if ((undefined1 *)param_1[6] <= puVar9) {
        iVar5 = FUN_180470480(param_1,puVar9,1);
        if (iVar5 == 0) {
          return false;
        }
        puVar9 = (undefined1 *)param_1[4];
      }
      *puVar9 = (char)uVar10;
      puVar9 = puVar9 + 1;
    }
    if (uVar10 == 0x100) {
      param_1[4] = (ulonglong)puVar9;
      if (*(int *)((longlong)param_1 + 0x14) == 0) {
        return true;
      }
      return 0xf < (int)param_1[2];
    }
    if (0x11d < (int)uVar10) break;
    uVar8 = *(uint *)(&DAT_18077f1dc + (longlong)(int)uVar10 * 4);
    uVar10 = *(uint *)(&DAT_18077f0dc + (longlong)(int)uVar10 * 4);
    if (uVar8 != 0) {
      if ((int)param_1[2] < (int)uVar8) {
        FUN_180470340(param_1);
      }
      uVar11 = param_1[3];
      *(uint *)(param_1 + 2) = (int)param_1[2] - uVar8;
      *(uint *)(param_1 + 3) = (uint)uVar11 >> (uVar8 & 0x1f);
      sVar3 = ((byte)uVar8 < 0x21) * (' ' - (byte)uVar8);
      uVar10 = uVar10 + (((uint)uVar11 << sVar3) >> sVar3);
    }
    uVar11 = (ulonglong)uVar10;
    if ((int)param_1[2] < 0x10) {
      if (*param_1 < param_1[1]) {
        FUN_180470340(param_1);
      }
      else {
        if (*(int *)((longlong)param_1 + 0x14) != 0) {
          return false;
        }
        *(undefined4 *)((longlong)param_1 + 0x14) = 1;
        *(int *)(param_1 + 2) = (int)param_1[2] + 0x10;
      }
    }
    uVar2 = *(ushort *)((longlong)param_1 + (ulonglong)((uint)param_1[3] & 0x1ff) * 2 + 0x820);
    if (uVar2 == 0) {
      uVar8 = FUN_1804703a0(param_1,param_1 + 0x104);
    }
    else {
      *(uint *)(param_1 + 2) = (int)param_1[2] - (uint)(uVar2 >> 9);
      *(uint *)(param_1 + 3) = (uint)param_1[3] >> (uVar2 >> 9 & 0x1f);
      uVar8 = uVar2 & 0x1ff;
    }
    if (0x1d < uVar8) {
      return false;
    }
    uVar12 = *(uint *)(&DAT_18077f6a0 + (longlong)(int)uVar8 * 4);
    iVar5 = *(int *)(&DAT_18077f560 + (longlong)(int)uVar8 * 4);
    if (uVar12 != 0) {
      if ((int)param_1[2] < (int)uVar12) {
        FUN_180470340(param_1);
      }
      uVar4 = param_1[3];
      *(uint *)(param_1 + 2) = (int)param_1[2] - uVar12;
      *(uint *)(param_1 + 3) = (uint)uVar4 >> (uVar12 & 0x1f);
      sVar3 = ((byte)uVar12 < 0x21) * (' ' - (byte)uVar12);
      iVar5 = iVar5 + (((uint)uVar4 << sVar3) >> sVar3);
    }
    if ((longlong)((longlong)puVar9 - param_1[5]) < (longlong)iVar5) {
      return false;
    }
    if ((longlong)(param_1[6] - (longlong)puVar9) < (longlong)(int)uVar10) {
      iVar6 = FUN_180470480(param_1,puVar9,uVar11);
      if (iVar6 == 0) {
        return false;
      }
      puVar9 = (undefined1 *)param_1[4];
    }
    puVar7 = puVar9 + -(longlong)iVar5;
    if (iVar5 == 1) {
      if (uVar10 != 0) {
        FUN_18063ab10(puVar9,*puVar7,uVar11);
        puVar9 = puVar9 + uVar11;
      }
    }
    else {
      while (uVar10 != 0) {
        uVar1 = *puVar7;
        puVar7 = puVar7 + 1;
        *puVar9 = uVar1;
        puVar9 = puVar9 + 1;
        uVar10 = (int)uVar11 - 1;
        uVar11 = (ulonglong)uVar10;
      }
    }
  }
  return false;
}



