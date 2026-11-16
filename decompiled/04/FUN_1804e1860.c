// FUN_1804e1860 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804e1860 */

void FUN_1804e1860(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_3) {
    FUN_1804ec0d0(param_1 + 8,param_3);
    iVar3 = *(int *)(param_1 + 0xc);
    if (iVar3 < param_3) {
      if (iVar3 == 0) {
        iVar3 = 8;
      }
      else {
        iVar3 = iVar3 / 2 + iVar3;
      }
      iVar4 = param_3;
      if (param_3 < iVar3) {
        iVar4 = iVar3;
      }
      FUN_1804ec0d0(param_1 + 8,iVar4);
    }
    *(int *)(param_1 + 8) = param_3;
  }
  *(int *)(param_1 + 4) = param_3;
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[2] = 0;
  puVar5[3] = 0;
  if (1 < (longlong)param_3) {
    lVar7 = 1;
    lVar6 = 0x20;
    do {
      puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x10) + lVar6);
      if (lVar7 < iVar1) {
        iVar3 = *(int *)((longlong)puVar5 + 4);
        if (iVar3 < 0) {
          iVar3 = iVar3 + (iVar3 + 1 >> 1);
          iVar4 = 0;
          if (0 < iVar3) {
            iVar4 = iVar3;
          }
          FUN_1804d1630(puVar5,iVar4);
        }
        *(undefined4 *)puVar5 = 0;
        lVar2 = *(longlong *)(param_1 + 0x10);
        iVar3 = *(int *)(lVar2 + 0x14 + lVar6);
        if (iVar3 < 0) {
          iVar3 = (iVar3 + 1 >> 1) + iVar3;
          iVar4 = 0;
          if (0 < iVar3) {
            iVar4 = iVar3;
          }
          FUN_1804d1090(lVar2 + 0x10 + lVar6,iVar4);
        }
        *(undefined4 *)(lVar2 + 0x10 + lVar6) = 0;
      }
      else if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[2] = 0;
        puVar5[3] = 0;
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[2] = 0;
        puVar5[3] = 0;
      }
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 0x20;
    } while (lVar7 < param_3);
  }
  return;
}



