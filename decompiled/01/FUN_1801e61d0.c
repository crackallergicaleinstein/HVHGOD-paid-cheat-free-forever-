// FUN_1801e61d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801e61d0 */

longlong * FUN_1801e61d0(longlong *param_1,byte *param_2,byte *param_3,uint *param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  
  bVar1 = *param_2;
  *param_4 = (uint)bVar1;
  if (bVar1 < 0x80) {
    *(undefined1 *)(param_1 + 1) = 1;
    *param_1 = (longlong)(param_2 + 1);
    return param_1;
  }
  if (bVar1 - 0xc2 < 0x1e) {
    uVar3 = 2;
  }
  else if (bVar1 - 0xe0 < 0x10) {
    uVar3 = 3;
  }
  else {
    if (4 < bVar1 - 0xf0) {
      *param_1 = (longlong)(param_2 + 1);
      *param_4 = 0xfffd;
      *(undefined1 *)(param_1 + 1) = 0;
      return param_1;
    }
    uVar3 = 4;
  }
  pbVar6 = param_2 + 1;
  if (pbVar6 == param_3) {
    *param_1 = (longlong)param_3;
    *param_4 = 0xfffd;
    *(undefined1 *)(param_1 + 1) = 0;
    return param_1;
  }
  uVar7 = (uint)bVar1;
  if (uVar7 == 0xe0) {
    if (0x9f < *pbVar6) goto LAB_1801e62b7;
  }
  else {
    if (uVar7 == 0xed) {
      bVar8 = *pbVar6 < 0x9f;
      bVar9 = *pbVar6 == 0x9f;
    }
    else {
      if (uVar7 == 0xf0) {
        if (*pbVar6 < 0x90) {
          *param_1 = (longlong)pbVar6;
          *param_4 = 0xfffd;
          *(undefined1 *)(param_1 + 1) = 0;
          return param_1;
        }
        goto LAB_1801e62b7;
      }
      if (uVar7 != 0xf4) goto LAB_1801e62b7;
      bVar8 = *pbVar6 < 0x8f;
      bVar9 = *pbVar6 == 0x8f;
    }
    if (bVar8 || bVar9) {
LAB_1801e62b7:
      if (uVar3 == 2) {
        uVar2 = 0x1f;
      }
      else if (uVar3 == 3) {
        uVar2 = 0xf;
      }
      else {
        uVar2 = 7;
      }
      uVar2 = uVar2 & uVar7;
      uVar4 = (ulonglong)uVar3;
      iVar5 = 1;
      *param_4 = uVar2;
      if (1 < uVar4) {
        do {
          if (((param_3 <= param_2 + iVar5) || (bVar1 = *pbVar6, bVar1 < 0x80)) || (0xbf < bVar1)) {
            *param_4 = 0xfffd;
            *param_1 = (longlong)(param_2 + iVar5);
            *(undefined1 *)(param_1 + 1) = 0;
            return param_1;
          }
          pbVar6 = pbVar6 + 1;
          uVar2 = bVar1 & 0x3f | uVar2 << 6;
          iVar5 = iVar5 + 1;
          *param_4 = uVar2;
        } while ((longlong)pbVar6 - (longlong)param_2 < (longlong)uVar4);
      }
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = (longlong)(param_2 + uVar4);
      return param_1;
    }
  }
  *param_1 = (longlong)pbVar6;
  *param_4 = 0xfffd;
  *(undefined1 *)(param_1 + 1) = 0;
  return param_1;
}



