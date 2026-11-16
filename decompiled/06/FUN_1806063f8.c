// FUN_1806063f8 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806063f8 */

void FUN_1806063f8(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 local_res8;
  ulonglong in_stack_ffffffffffffffb8;
  undefined1 local_28 [4];
  undefined8 local_24;
  undefined8 local_1c;
  undefined4 local_14;
  
  uVar1 = *(undefined8 *)(param_4 + 8);
  local_28[0] = 0;
  local_24 = 0;
  local_1c = 0;
  local_14 = 0;
  local_res8 = param_2;
  lVar2 = FUN_180606ee8();
  *(undefined8 *)(lVar2 + 0x60) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  lVar2 = FUN_180606ee8();
  *(undefined8 *)(lVar2 + 0x68) = uVar1;
  lVar2 = FUN_180606ee8();
  FUN_1806058b4((ulonglong)**(uint **)(param_4 + 0x38) + *(longlong *)(lVar2 + 0x60),local_28,
                *(undefined8 *)(param_4 + 8),**(undefined4 **)(param_4 + 0x10),
                in_stack_ffffffffffffffb8 & 0xffffffffffffff00);
  FUN_180609088(param_1,&local_res8,param_3,param_4,local_28,0,0,0);
  return;
}



