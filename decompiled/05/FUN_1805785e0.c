// FUN_1805785e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805785e0 */

undefined4 FUN_1805785e0(longlong *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 local_18 [4];
  
  uVar3 = 0;
  uVar2 = *(uint *)((longlong)param_1 + 0xc);
  if (*(uint *)(param_1 + 1) <= uVar2 + 3) {
LAB_18057866d:
    *param_2 = 0x55;
    return 0;
  }
  if ((code *)param_1[4] == (code *)0x0) {
    puVar4 = (undefined4 *)((ulonglong)uVar2 + *param_1);
    if (puVar4 == (undefined4 *)0x0) goto LAB_180578653;
  }
  else {
    iVar1 = (*(code *)param_1[4])(param_1,(ulonglong)uVar2,local_18,4);
    if (iVar1 != 4) goto LAB_18057866d;
    uVar2 = *(uint *)((longlong)param_1 + 0xc);
    puVar4 = local_18;
  }
  uVar3 = *puVar4;
LAB_180578653:
  *(uint *)((longlong)param_1 + 0xc) = uVar2 + 4;
  *param_2 = 0;
  return uVar3;
}



