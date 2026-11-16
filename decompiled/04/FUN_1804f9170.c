// FUN_1804f9170 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804f9170 */

int FUN_1804f9170(longlong param_1,uint param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  uVar2 = *(uint *)(param_1 + 0x18);
  iVar4 = ~uVar2 + *(int *)(param_1 + 0x58);
  uVar5 = *(uint *)(param_1 + 0x10) & 0x400000;
  if ((uVar5 == 0) && (iVar4 < param_4)) {
    param_4 = FUN_1804b10b0(param_3,param_3 + param_4,iVar4 + param_3);
    param_4 = param_4 - (int)param_3;
  }
  if (param_4 == 0) {
    param_4 = 0;
  }
  else {
    if ((*(int *)(param_1 + 0x28) < (int)(uVar2 + 1 + param_4)) && (uVar5 != 0)) {
      iVar4 = param_4;
      if (param_4 < 0x101) {
        iVar4 = 0x100;
      }
      if (param_4 < 0x20) {
        iVar6 = 0x20;
      }
      else {
        iVar6 = param_4;
        if (iVar4 < param_4) {
          iVar6 = iVar4;
        }
      }
      iVar4 = *(int *)(param_1 + 0x2c);
      iVar6 = uVar2 + 1 + iVar6;
      if (iVar4 < iVar6) {
        if (iVar4 == 0) {
          iVar4 = 8;
        }
        else {
          iVar4 = iVar4 / 2 + iVar4;
        }
        iVar3 = iVar6;
        if (iVar6 < iVar4) {
          iVar3 = iVar4;
        }
        FUN_1804d0ea0(param_1 + 0x28,iVar3);
      }
      *(int *)(param_1 + 0x28) = iVar6;
      *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x30);
    }
    lVar1 = (longlong)(int)param_2 + *(longlong *)(param_1 + 0x30);
    if (param_2 != uVar2) {
      FUN_18063aed0((longlong)(int)param_2 + (longlong)param_4 + *(longlong *)(param_1 + 0x30),lVar1
                    ,(longlong)(int)(uVar2 - param_2));
    }
    FUN_18063aed0(lVar1,param_3,(longlong)param_4);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + param_4;
    *(undefined2 *)(param_1 + 0x73) = 0x101;
    *(undefined1 *)((longlong)*(int *)(param_1 + 0x18) + *(longlong *)(param_1 + 0x30)) = 0;
  }
  return param_4;
}



