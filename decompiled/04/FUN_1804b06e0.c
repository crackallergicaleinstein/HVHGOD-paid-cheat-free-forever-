// FUN_1804b06e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804b06e0 */

void FUN_1804b06e0(longlong param_1,float param_2,float param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int *piVar7;
  
  lVar3 = *(longlong *)(param_1 + 0xe0);
  if ((*(char *)(param_1 + 0xbb5) != '\0') && ((param_2 != 0.0 || (param_3 != 0.0)))) {
    iVar1 = *(int *)(lVar3 + 0x146c);
    *(int *)(lVar3 + 0x146c) = iVar1 + 1;
    uVar2 = *(undefined4 *)(lVar3 + 0x1468);
    piVar7 = (int *)(lVar3 + 0x1448);
    iVar4 = *(int *)(lVar3 + 0x144c);
    if (*piVar7 == iVar4) {
      iVar5 = *piVar7 + 1;
      if (iVar4 == 0) {
        iVar4 = 8;
      }
      else {
        iVar4 = iVar4 / 2 + iVar4;
      }
      if (iVar5 < iVar4) {
        iVar5 = iVar4;
      }
      FUN_1804d1310(piVar7,iVar5);
    }
    lVar6 = (longlong)*piVar7 * 0x1c;
    lVar3 = *(longlong *)(lVar3 + 0x1450);
    *(undefined8 *)(lVar6 + lVar3) = 0x100000002;
    ((undefined8 *)(lVar6 + lVar3))[1] = CONCAT44(param_2,iVar1);
    *(ulonglong *)(lVar6 + 0x10 + lVar3) = CONCAT44(uVar2,param_3);
    *(undefined4 *)(lVar6 + 0x18 + lVar3) = 0;
    *piVar7 = *piVar7 + 1;
  }
  return;
}



