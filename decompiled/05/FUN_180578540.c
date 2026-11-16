// FUN_180578540 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180578540 */

undefined4 FUN_180578540(longlong *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 local_18 [16];
  
  uVar3 = 0;
  uVar2 = *(uint *)((longlong)param_1 + 0xc);
  if (*(uint *)(param_1 + 1) <= uVar2 + 3) {
LAB_1805785cd:
    *param_2 = 0x55;
    return 0;
  }
  if ((code *)param_1[4] == (code *)0x0) {
    puVar4 = (undefined1 *)((ulonglong)uVar2 + *param_1);
    if (puVar4 == (undefined1 *)0x0) goto LAB_1805785b3;
  }
  else {
    iVar1 = (*(code *)param_1[4])(param_1,(ulonglong)uVar2,local_18,4);
    if (iVar1 != 4) goto LAB_1805785cd;
    uVar2 = *(uint *)((longlong)param_1 + 0xc);
    puVar4 = local_18;
  }
  uVar3 = CONCAT31(CONCAT21(CONCAT11(*puVar4,puVar4[1]),puVar4[2]),puVar4[3]);
LAB_1805785b3:
  *(uint *)((longlong)param_1 + 0xc) = uVar2 + 4;
  *param_2 = 0;
  return uVar3;
}



