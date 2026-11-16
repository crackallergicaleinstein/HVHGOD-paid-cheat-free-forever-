// FUN_1804218b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804218b0 */

void FUN_1804218b0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_1 + 0x9c14);
  if (iVar1 < *(int *)(param_1 + 0x9c10) + 1) {
    iVar3 = iVar1 * 2;
    if (iVar1 == 0) {
      iVar3 = 8;
    }
    *(int *)(param_1 + 0x9c14) = iVar3;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = (longlong)(iVar3 * 2);
    uVar4 = SUB168(ZEXT816(4) * auVar2,0);
    if (SUB168(ZEXT816(4) * auVar2,8) != 0) {
      uVar4 = 0xffffffffffffffff;
    }
    lVar5 = _realloc_base(*(undefined8 *)(param_1 + 0x9c08),uVar4);
    *(longlong *)(param_1 + 0x9c08) = lVar5;
    if (lVar5 == 0) {
      return;
    }
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x9c08) + (longlong)(*(int *)(param_1 + 0x9c10) * 2) * 4)
       = param_2;
  *(undefined4 *)
   (*(longlong *)(param_1 + 0x9c08) + 4 + (longlong)(*(int *)(param_1 + 0x9c10) * 2) * 4) = param_3;
  *(int *)(param_1 + 0x9c10) = *(int *)(param_1 + 0x9c10) + 1;
  return;
}



