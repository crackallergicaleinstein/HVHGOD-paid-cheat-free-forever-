// FUN_180578720 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180578720 */

undefined2 FUN_180578720(longlong *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined2 uVar4;
  undefined1 local_18 [16];
  
  uVar3 = *(uint *)((longlong)param_1 + 0xc);
  uVar4 = 0;
  if (*(uint *)(param_1 + 1) <= uVar3 + 1) {
LAB_1805787a0:
    *param_2 = 0x55;
    return 0;
  }
  if ((code *)param_1[4] == (code *)0x0) {
    puVar2 = (undefined1 *)(*param_1 + (ulonglong)uVar3);
    if (puVar2 == (undefined1 *)0x0) goto LAB_180578784;
  }
  else {
    iVar1 = (*(code *)param_1[4])(param_1,(ulonglong)uVar3,local_18,2);
    if (iVar1 != 2) goto LAB_1805787a0;
    uVar3 = *(uint *)((longlong)param_1 + 0xc);
    puVar2 = local_18;
  }
  uVar4 = CONCAT11(*puVar2,puVar2[1]);
LAB_180578784:
  *(uint *)((longlong)param_1 + 0xc) = uVar3 + 2;
  *param_2 = 0;
  return uVar4;
}



