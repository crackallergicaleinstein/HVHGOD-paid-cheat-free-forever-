// FUN_1801aabe0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801aabe0 */

void FUN_1801aabe0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_1801b58e0(param_1,lVar1,param_2);
    return;
  }
  FUN_18015b360(lVar1);
  FUN_18015b360(lVar1 + 0x20,param_2 + 0x20);
  *(undefined8 *)(lVar1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x48;
  return;
}



