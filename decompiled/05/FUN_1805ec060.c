// FUN_1805ec060 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805ec060 */

ulonglong FUN_1805ec060(longlong param_1,ulonglong param_2,undefined8 *param_3,int *param_4,
                       uint *param_5,byte *param_6,ulonglong param_7)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  byte bVar9;
  
  if (param_7 == 0) {
    return 0xffffffffffffffb8;
  }
  uVar6 = (ulonglong)*param_6;
  if (uVar6 < 0x80) {
    if (param_7 < uVar6 + 1) {
      return 0xffffffffffffffb8;
    }
    uVar5 = FUN_1805e9be0(param_1,param_2 - 1,param_6 + 1,uVar6);
    if (0xffffffffffffff88 < uVar5) {
      return uVar5;
    }
  }
  else if (uVar6 < 0xf2) {
    uVar5 = uVar6 - 0x7f;
    uVar6 = uVar6 - 0x7e >> 1;
    if (param_7 < uVar6 + 1) {
      return 0xffffffffffffffb8;
    }
    if (param_2 <= uVar5) {
      return 0xffffffffffffffec;
    }
    uVar3 = 0;
    if (uVar5 != 0) {
      uVar4 = 0;
      do {
        *(byte *)(uVar4 + param_1) = param_6[(uVar4 >> 1) + 1] >> 4;
        uVar7 = uVar3 + 1;
        uVar3 = uVar3 + 2;
        *(byte *)((ulonglong)uVar7 + param_1) = param_6[(uVar4 >> 1) + 1] & 0xf;
        uVar4 = (ulonglong)uVar3;
      } while (uVar4 < uVar5);
    }
  }
  else {
    uVar5 = (ulonglong)*(int *)(&DAT_1808d5a50 + uVar6 * 4);
    FUN_18063ab10(param_1,1,param_2);
    uVar6 = 0;
  }
  uVar4 = 0;
  uVar7 = 0;
  uVar3 = 0;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[4] = 0;
  param_3[5] = 0;
  param_3[6] = 0;
  param_3[7] = 0;
  *(undefined4 *)(param_3 + 8) = 0;
  if (uVar5 != 0) {
    do {
      if (0xf < *(byte *)(uVar4 + param_1)) {
        return 0xffffffffffffffec;
      }
      piVar1 = (int *)((longlong)param_3 + (ulonglong)*(byte *)(uVar4 + param_1) * 4);
      *piVar1 = *piVar1 + 1;
      uVar3 = uVar3 + 1;
      uVar7 = uVar7 + ((1 << (*(byte *)(uVar4 + param_1) & 0x1f)) >> 1);
      uVar4 = (ulonglong)uVar3;
    } while (uVar4 < uVar5);
    if (uVar7 != 0) {
      iVar2 = 0x1f;
      if (uVar7 != 0) {
        for (; uVar7 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar8 = 0;
      if (uVar7 != 0) {
        iVar8 = iVar2;
      }
      uVar3 = iVar8 + 1;
      if (uVar3 < 0x11) {
        uVar7 = (1 << ((byte)uVar3 & 0x1f)) - uVar7;
        iVar2 = 0x1f;
        if (uVar7 != 0) {
          for (; uVar7 >> iVar2 == 0; iVar2 = iVar2 + -1) {
          }
        }
        iVar8 = 0;
        if (uVar7 != 0) {
          iVar8 = iVar2;
        }
        iVar2 = 0x1f;
        if (uVar7 != 0) {
          for (; uVar7 >> iVar2 == 0; iVar2 = iVar2 + -1) {
          }
        }
        bVar9 = 0;
        if (uVar7 != 0) {
          bVar9 = (byte)iVar2;
        }
        if (1 << (bVar9 & 0x1f) == uVar7) {
          *(char *)(uVar5 + param_1) = (char)(iVar8 + 1U);
          piVar1 = (int *)((longlong)param_3 + (ulonglong)(iVar8 + 1U) * 4);
          *piVar1 = *piVar1 + 1;
          if ((1 < *(uint *)((longlong)param_3 + 4)) &&
             ((*(uint *)((longlong)param_3 + 4) & 1) == 0)) {
            *param_4 = (int)uVar5 + 1;
            *param_5 = uVar3;
            return uVar6 + 1;
          }
        }
      }
    }
  }
  return 0xffffffffffffffec;
}



