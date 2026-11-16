// FUN_180605bb8 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180605bb8 */

undefined8 *
FUN_180605bb8(undefined8 *param_1,undefined8 param_2,int param_3,longlong param_4,longlong param_5)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  undefined4 uStack_3c;
  undefined4 uStack_2c;
  
  uVar4 = *(uint *)(param_5 + 0xc);
  iVar3 = FUN_18060712c(param_5,param_4);
  if (uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar2 = *(longlong *)(param_4 + 8);
  lVar9 = (longlong)*(int *)(param_5 + 0x10);
  uVar7 = 0xffffffff;
  uVar10 = 0xffffffff;
  uVar6 = uVar4;
  while( true ) {
    uVar1 = uVar6 - 1;
    lVar8 = lVar2 + (ulonglong)uVar1 * 0x14;
    if ((*(int *)(lVar8 + 4 + lVar9) < iVar3) && (iVar3 <= *(int *)(lVar8 + 8 + lVar9))) break;
    uVar6 = uVar1;
    if (uVar1 == 0) {
      lVar8 = 0;
LAB_180605c40:
      uVar6 = 0;
      piVar5 = (int *)(lVar2 + lVar9);
      do {
        if ((((lVar8 == 0) ||
             ((*(int *)(lVar8 + 4) < *piVar5 && (piVar5[1] <= *(int *)(lVar8 + 8))))) &&
            (*piVar5 <= param_3)) && (param_3 <= piVar5[1])) {
          uVar10 = uVar6;
          if (uVar7 == 0xffffffff) {
            uVar7 = uVar6;
          }
        }
        uVar6 = uVar6 + 1;
        piVar5 = piVar5 + 5;
      } while (uVar6 < uVar4);
      uVar4 = 0;
      if (uVar7 != 0xffffffff) {
        uVar4 = uVar7;
      }
      iVar3 = 0;
      if (uVar7 != 0xffffffff) {
        iVar3 = uVar10 + 1;
      }
      *param_1 = param_2;
      param_1[1] = CONCAT44(uStack_3c,uVar4);
      param_1[2] = param_2;
      param_1[3] = CONCAT44(uStack_2c,iVar3);
      return param_1;
    }
  }
  lVar8 = lVar2 + (ulonglong)(uVar6 - 1) * 0x14 + lVar9;
  goto LAB_180605c40;
}



