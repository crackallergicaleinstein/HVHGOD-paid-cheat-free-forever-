// FUN_1804afdd0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804afdd0 */

void FUN_1804afdd0(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int *piVar6;
  
  if ((param_2 != 0) && (lVar2 = *(longlong *)(param_1 + 0xe0), *(char *)(param_1 + 0xbb5) != '\0'))
  {
    iVar1 = *(int *)(lVar2 + 0x146c);
    *(int *)(lVar2 + 0x146c) = iVar1 + 1;
    piVar6 = (int *)(lVar2 + 0x1448);
    iVar3 = *(int *)(lVar2 + 0x144c);
    if (*piVar6 == iVar3) {
      iVar4 = *piVar6 + 1;
      if (iVar3 == 0) {
        iVar3 = 8;
      }
      else {
        iVar3 = iVar3 / 2 + iVar3;
      }
      if (iVar4 < iVar3) {
        iVar4 = iVar3;
      }
      FUN_1804d1310(piVar6,iVar4);
    }
    lVar5 = (longlong)*piVar6 * 0x1c;
    lVar2 = *(longlong *)(lVar2 + 0x1450);
    *(undefined8 *)(lVar5 + lVar2) = 0x200000005;
    ((undefined8 *)(lVar5 + lVar2))[1] = CONCAT44(param_2,iVar1);
    *(undefined8 *)(lVar5 + 0x10 + lVar2) = 0;
    *(undefined4 *)(lVar5 + 0x18 + lVar2) = 0;
    *piVar6 = *piVar6 + 1;
  }
  return;
}



