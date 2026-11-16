// FUN_180591400 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180591400 */

undefined4
FUN_180591400(uint *param_1,ushort param_2,longlong param_3,longlong param_4,longlong param_5)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  
  uVar8 = 0;
  uVar5 = 0x10000;
  if (*param_1 == 0) {
    uVar5 = 0x10000;
  }
  else {
    do {
      iVar6 = *(int *)(param_3 + uVar8 * 4);
      lVar1 = uVar8 * 4;
      if (iVar6 != 0) {
        iVar4 = *(int *)(lVar1 + *(longlong *)(param_1 + 4));
        if (iVar4 == 0) {
          return 0;
        }
        if (iVar6 != iVar4) {
          if ((param_2 >> 0xe & 1) == 0) {
            if (((iVar6 <= iVar4) || (iVar4 < 1)) && ((iVar4 <= iVar6 || (-1 < iVar4)))) {
              return 0;
            }
          }
          else {
            iVar2 = *(int *)(lVar1 + param_4);
            if (iVar4 <= iVar2) {
              return 0;
            }
            iVar3 = *(int *)(lVar1 + param_5);
            if (iVar3 <= iVar4) {
              return 0;
            }
            if (iVar4 < iVar6) {
              iVar6 = iVar6 - iVar2;
              iVar4 = iVar4 - iVar2;
            }
            else {
              iVar6 = iVar3 - iVar6;
              iVar4 = iVar3 - iVar4;
            }
          }
          uVar5 = FUN_1805753e0(uVar5,iVar4,iVar6);
        }
      }
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
    } while (uVar7 < *param_1);
  }
  return uVar5;
}



