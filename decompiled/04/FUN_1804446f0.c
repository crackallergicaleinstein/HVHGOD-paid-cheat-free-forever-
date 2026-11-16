// FUN_1804446f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804446f0 */

undefined8 FUN_1804446f0(longlong param_1,byte *param_2)

{
  byte bVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x28);
  if (*(ulonglong *)(param_1 + 8) <= (ulonglong)*param_2 + lVar2) {
    return 0x80100009;
  }
  *(char *)(*(longlong *)(param_1 + 0x48) + -1) = (char)lVar2;
  FUN_18063aed0(*(longlong *)(param_1 + 0x48) + lVar2,param_2 + 2,*param_2);
  bVar1 = param_2[1];
  *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + (ulonglong)bVar1 + lVar2;
  uVar4 = *(longlong *)(param_1 + 8) - ((ulonglong)bVar1 + lVar2);
  *(ulonglong *)(param_1 + 8) = uVar4;
  *(ulonglong *)(param_1 + 0x28) = (ulonglong)*param_2 - (ulonglong)param_2[1];
  uVar3 = 0xff;
  if (uVar4 < 0xff) {
    uVar3 = uVar4;
  }
  *(ulonglong *)(param_1 + 0x30) = uVar3;
  return 0x100000;
}



