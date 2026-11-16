// FUN_18063bfea - decompiled reference (Ghidra). Not original source, does not compile.

/* 18063bfea */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_18063bfea(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar3;
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  uVar2 = (**(code **)(**(longlong **)(param_2 + 0x80) + 8))();
  uVar1 = **(undefined4 **)(param_2 + 0x58);
  FUN_18063ab10(param_2 + 0x280,0,0x600);
  FUN_18015ad60(param_2 + 0x280,0x600,0xffffffffffffffff,
                "key=%08x error_type=std_exception error=\"%s\"",CONCAT44(uVar3,uVar1),uVar2);
  FUN_1800f6900(3);
  return 0;
}



