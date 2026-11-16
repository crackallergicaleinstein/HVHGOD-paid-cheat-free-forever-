// FUN_1802ecdc0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802ecdc0 */

undefined8 FUN_1802ecdc0(uint *param_1,ulonglong param_2)

{
  sbyte sVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  
  uVar7 = *param_1;
  if (uVar7 == 0) {
    return 1;
  }
  uVar8 = param_2 >> 5 & 0x7ffffff;
  uVar10 = (uint)param_2 & 0x1f;
  iVar2 = (int)uVar8;
  if (uVar7 + iVar2 < 0x74) {
    if ((param_2 & 0x1f) == 0) {
      FUN_18063aed0(param_1 + uVar8 + 1,param_1 + 1,(ulonglong)uVar7 << 2);
      *param_1 = *param_1 + iVar2;
    }
    else {
      iVar6 = 0x1f;
      bVar12 = param_1[(ulonglong)(uVar7 - 1) + 1] == 0;
      if (!bVar12) {
        for (; param_1[(ulonglong)(uVar7 - 1) + 1] >> iVar6 == 0; iVar6 = iVar6 + -1) {
        }
      }
      if (bVar12) {
        iVar6 = 0;
      }
      else {
        iVar6 = iVar6 + 1;
      }
      uVar7 = uVar7 + (0x20U - iVar6 < uVar10) + iVar2;
      if (0x73 < uVar7) goto LAB_1802eceef;
      uVar11 = 0x20 - uVar10;
      uVar3 = uVar7;
      while (uVar3 = uVar3 - 1, uVar3 != iVar2 - 1U) {
        uVar4 = uVar3 - iVar2;
        if (uVar4 < *param_1) {
          uVar9 = param_1[(ulonglong)uVar4 + 1];
        }
        else {
          uVar9 = 0;
        }
        if (uVar4 - 1 < *param_1) {
          uVar4 = param_1[(ulonglong)(uVar4 - 1) + 1];
        }
        else {
          uVar4 = 0;
        }
        sVar1 = ((byte)uVar11 < 0x21) * (' ' - (byte)uVar11);
        param_1[(ulonglong)uVar3 + 1] =
             ((uVar9 << sVar1) >> sVar1) << uVar10 |
             (-1 << (uVar11 & 0x1f) & uVar4) >> (uVar11 & 0x1f);
      }
      *param_1 = uVar7;
    }
    FUN_18063ab10(param_1 + 1,0,uVar8 * 4);
    uVar5 = 1;
  }
  else {
LAB_1802eceef:
    *param_1 = 0;
    uVar5 = 0;
  }
  return uVar5;
}



