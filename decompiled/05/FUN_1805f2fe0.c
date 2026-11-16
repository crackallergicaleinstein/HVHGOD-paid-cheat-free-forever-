// FUN_1805f2fe0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805f2fe0 */

ulonglong FUN_1805f2fe0(longlong param_1,ulonglong param_2,undefined8 *param_3,int *param_4,
                       uint *param_5,byte *param_6,ulonglong param_7)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  byte bVar9;
  
  if (param_7 == 0) {
    return 0xffffffffffffffb8;
  }
  uVar7 = (ulonglong)*param_6;
  if (uVar7 < 0x80) {
    if (param_7 < uVar7 + 1) {
      return 0xffffffffffffffb8;
    }
    uVar4 = FUN_1805f15b0(param_1,param_2 - 1,param_6 + 1,uVar7);
    if (0xffffffffffffff88 < uVar4) {
      return uVar4;
    }
  }
  else if (uVar7 < 0xf2) {
    uVar4 = uVar7 - 0x7f;
    uVar7 = uVar7 - 0x7e >> 1;
    if (param_7 < uVar7 + 1) {
      return 0xffffffffffffffb8;
    }
    if (param_2 <= uVar4) {
      return 0xffffffffffffffec;
    }
    uVar5 = 0;
    if (uVar4 != 0) {
      uVar6 = 0;
      do {
        *(byte *)(uVar6 + param_1) = param_6[(uVar6 >> 1) + 1] >> 4;
        uVar8 = uVar5 + 1;
        uVar5 = uVar5 + 2;
        *(byte *)((ulonglong)uVar8 + param_1) = param_6[(uVar6 >> 1) + 1] & 0xf;
        uVar6 = (ulonglong)uVar5;
      } while (uVar6 < uVar4);
    }
  }
  else {
    uVar4 = (ulonglong)*(uint *)(&DAT_1808d5ac8 + uVar7 * 4);
    FUN_18063ab10(param_1,1,param_2);
    uVar7 = 0;
  }
  uVar6 = 0;
  uVar8 = 0;
  uVar5 = 0;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[4] = 0;
  param_3[5] = 0;
  param_3[6] = 0;
  param_3[7] = 0;
  *(undefined4 *)(param_3 + 8) = 0;
  if (uVar4 != 0) {
    do {
      if (0xf < *(byte *)(uVar6 + param_1)) {
        return 0xffffffffffffffec;
      }
      piVar1 = (int *)((longlong)param_3 + (ulonglong)*(byte *)(uVar6 + param_1) * 4);
      *piVar1 = *piVar1 + 1;
      uVar5 = uVar5 + 1;
      uVar8 = uVar8 + ((1 << (*(byte *)(uVar6 + param_1) & 0x1f)) >> 1);
      uVar6 = (ulonglong)uVar5;
    } while (uVar6 < uVar4);
    if (uVar8 != 0) {
      iVar2 = 0x1f;
      if (uVar8 != 0) {
        for (; uVar8 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar3 = 0;
      if (uVar8 != 0) {
        iVar3 = iVar2;
      }
      uVar5 = iVar3 + 1;
      if (uVar5 < 0x11) {
        uVar8 = (1 << ((byte)uVar5 & 0x1f)) - uVar8;
        *param_5 = uVar5;
        iVar2 = 0x1f;
        if (uVar8 != 0) {
          for (; uVar8 >> iVar2 == 0; iVar2 = iVar2 + -1) {
          }
        }
        iVar3 = 0;
        if (uVar8 != 0) {
          iVar3 = iVar2;
        }
        iVar2 = 0x1f;
        if (uVar8 != 0) {
          for (; uVar8 >> iVar2 == 0; iVar2 = iVar2 + -1) {
          }
        }
        bVar9 = 0;
        if (uVar8 != 0) {
          bVar9 = (byte)iVar2;
        }
        if (1 << (bVar9 & 0x1f) == uVar8) {
          *(char *)(uVar4 + param_1) = (char)(iVar3 + 1U);
          piVar1 = (int *)((longlong)param_3 + (ulonglong)(iVar3 + 1U) * 4);
          *piVar1 = *piVar1 + 1;
          if ((1 < *(uint *)((longlong)param_3 + 4)) &&
             ((*(uint *)((longlong)param_3 + 4) & 1) == 0)) {
            *param_4 = (int)uVar4 + 1;
            return uVar7 + 1;
          }
        }
      }
    }
  }
  return 0xffffffffffffffec;
}



