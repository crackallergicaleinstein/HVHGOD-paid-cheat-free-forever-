// FUN_180578680 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180578680 */

uint FUN_180578680(longlong *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined1 local_18 [16];
  
  uVar4 = 0;
  uVar3 = *(uint *)((longlong)param_1 + 0xc);
  if (*(uint *)(param_1 + 1) <= uVar3 + 2) {
LAB_1805786ff:
    *param_2 = 0x55;
    return 0;
  }
  if ((code *)param_1[4] == (code *)0x0) {
    puVar2 = (undefined1 *)(*param_1 + (ulonglong)uVar3);
    if (puVar2 == (undefined1 *)0x0) goto LAB_1805786e5;
  }
  else {
    iVar1 = (*(code *)param_1[4])(param_1,(ulonglong)uVar3,local_18,3);
    if (iVar1 != 3) goto LAB_1805786ff;
    uVar3 = *(uint *)((longlong)param_1 + 0xc);
    puVar2 = local_18;
  }
  uVar4 = (uint)CONCAT21(CONCAT11(*puVar2,puVar2[1]),puVar2[2]);
LAB_1805786e5:
  *(uint *)((longlong)param_1 + 0xc) = uVar3 + 3;
  *param_2 = 0;
  return uVar4;
}



