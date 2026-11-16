// FUN_18030c5b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18030c5b0 */

longlong FUN_18030c5b0(longlong param_1)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  float *pfVar8;
  
  iVar1 = *(int *)(param_1 + 0x138);
  lVar4 = 0;
  iVar5 = 0;
  if (iVar1 < 4) {
    if (iVar1 < 1) {
      return 0;
    }
    lVar6 = 0;
  }
  else {
    pfVar8 = (float *)(param_1 + 0x4c);
    uVar2 = (iVar1 - 4U >> 2) + 1;
    lVar7 = param_1 + 0x68;
    uVar3 = (ulonglong)uVar2;
    iVar5 = uVar2 * 4;
    lVar6 = (ulonglong)uVar2 * 4;
    do {
      if ((((((((lVar4 == 0) || (pfVar8[-0xd] < *(float *)(lVar4 + 0x18))) &&
              (lVar4 = lVar7 + -0x68, lVar4 == 0)) || (*pfVar8 < *(float *)(lVar4 + 0x18))) &&
            (lVar4 = lVar7 + -0x34, lVar4 == 0)) || (pfVar8[0xd] < *(float *)(lVar4 + 0x18))) &&
          (lVar4 = lVar7, lVar7 == 0)) || (pfVar8[0x1a] < *(float *)(lVar4 + 0x18))) {
        lVar4 = lVar7 + 0x34;
      }
      pfVar8 = pfVar8 + 0x34;
      lVar7 = lVar7 + 0xd0;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
    if (iVar1 <= iVar5) {
      return lVar4;
    }
  }
  lVar7 = (longlong)iVar5 * 0x34 + param_1;
  pfVar8 = (float *)(lVar6 * 0x34 + 0x18 + param_1);
  uVar3 = (ulonglong)(uint)(iVar1 - iVar5);
  do {
    if ((lVar4 == 0) || (*pfVar8 < *(float *)(lVar4 + 0x18))) {
      lVar4 = lVar7;
    }
    pfVar8 = pfVar8 + 0xd;
    lVar7 = lVar7 + 0x34;
    uVar3 = uVar3 - 1;
  } while (uVar3 != 0);
  return lVar4;
}



