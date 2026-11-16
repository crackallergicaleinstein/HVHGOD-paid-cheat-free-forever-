// FUN_180647932 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180647932 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_180647932(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  
  FUN_1800e60e0(param_2 + 0xa8,"error");
  uVar2 = (**(code **)(**(longlong **)(param_2 + 0x198) + 8))();
  *(undefined8 *)(param_2 + 0x70) = uVar2;
  *(longlong *)(param_2 + 0x20) = param_2 + 0xc0;
  *(undefined1 (*) [16])(param_2 + 0xc0) = (undefined1  [16])0x0;
  *(undefined1 *)(param_2 + 0xc0) = 0;
  *(undefined8 *)(param_2 + 200) = 0;
  FUN_18017acf0(param_2 + 0xc0,param_2 + 0x70);
  *(undefined8 *)(param_2 + 0xd0) = 0;
  *(longlong *)(param_2 + 0x100) = param_2 + 0xa8;
  *(longlong *)(param_2 + 0x108) = param_2 + 0xd8;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_2 + 0x100);
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_2 + 0x108);
  FUN_1800f4e90(param_2 + 0x220,param_2 + 0x20,1,2);
  *(undefined8 *)(param_2 + 0x230) = 0;
  *(longlong *)(param_2 + 0x110) = param_2 + 0x220;
  *(longlong *)(param_2 + 0x118) = param_2 + 0x238;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_2 + 0x110);
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_2 + 0x118);
  puVar3 = (undefined1 *)FUN_1800f4e90(param_2 + 0x1a0,param_2 + 0x20,1,2);
  uVar1 = *(undefined1 *)(param_2 + 0x40);
  *(undefined1 *)(param_2 + 0x40) = *puVar3;
  *puVar3 = uVar1;
  uVar2 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(puVar3 + 8);
  *(undefined8 *)(puVar3 + 8) = uVar2;
  FUN_1801409d0(puVar3 + 8,*puVar3);
  _eh_vector_destructor_iterator_((void *)(param_2 + 0x220),0x18,1,FUN_1800aab30);
  _eh_vector_destructor_iterator_((void *)(param_2 + 0xa8),0x18,2,FUN_1800aab30);
  return 0;
}



