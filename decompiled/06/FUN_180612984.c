// FUN_180612984 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180612984 */

void FUN_180612984(uint *param_1,uint param_2,undefined8 param_3,byte param_4,longlong param_5)

{
  sbyte sVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar9 = 0;
  iVar6 = (-(uint)(*(char *)(param_5 + 8) != '\0') & 0x1d) + 0x17;
  if (param_2 < 0x41) {
    if (*param_1 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = (ulonglong)param_1[1];
      if (1 < *param_1) {
        uVar9 = param_1[2];
      }
    }
    param_4 = param_4 ^ 1;
    lVar5 = ((ulonglong)uVar9 << 0x20) + uVar4;
  }
  else {
    uVar8 = param_2 >> 5;
    uVar7 = uVar8 - 2;
    uVar9 = param_1[(ulonglong)uVar7 + 1];
    param_2 = param_2 & 0x1f;
    uVar4 = 0;
    if (param_2 == 0) {
      iVar6 = iVar6 + uVar7 * 0x20;
      lVar5 = CONCAT44(param_1[(ulonglong)(uVar8 - 1) + 1],uVar9);
      param_4 = param_4 ^ 1;
      uVar9 = 0;
      if (uVar7 != 0) {
        do {
          uVar4 = 0;
          if (param_1[(ulonglong)uVar9 + 1] == 0) {
            uVar4 = (ulonglong)param_4;
          }
          uVar9 = uVar9 + 1;
          param_4 = (byte)uVar4;
        } while (uVar9 != uVar7);
      }
    }
    else {
      sVar1 = (sbyte)param_2;
      iVar6 = uVar7 * 0x20 + param_2 + iVar6;
      uVar3 = (1 << sVar1) - 1;
      lVar5 = ((ulonglong)param_1[(ulonglong)(uVar8 - 1) + 1] << (-sVar1 + 0x20U & 0x3f)) +
              ((ulonglong)(param_1[(ulonglong)uVar8 + 1] & uVar3) << (-sVar1 + 0x40U & 0x3f)) +
              (ulonglong)((~uVar3 & uVar9) >> sVar1);
      if ((param_4 != 0) || (param_4 = 1, (uVar3 & uVar9) != 0)) {
        param_4 = 0;
      }
      uVar9 = 0;
      if (uVar7 != 0) {
        do {
          uVar4 = (ulonglong)uVar9;
          bVar2 = 0;
          if (param_1[uVar4 + 1] == 0) {
            bVar2 = param_4;
          }
          param_4 = bVar2;
          uVar9 = uVar9 + 1;
        } while (uVar9 != uVar7);
      }
    }
    param_3 = CONCAT71((int7)(uVar4 >> 8),(char)param_3);
  }
  FUN_1806125cc(lVar5,iVar6,param_3,param_4);
  return;
}



