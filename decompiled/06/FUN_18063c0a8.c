// FUN_18063c0a8 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18063c0a8 */

undefined8 FUN_18063c0a8(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar2;
  
  uVar2 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  uVar1 = **(undefined4 **)(param_2 + 0x58);
  FUN_18063ab10(param_2 + 0x280,0,0x600);
  FUN_18015ad60(param_2 + 0x280,0x600,0xffffffffffffffff,"key=%08x error_type=unknown",
                CONCAT44(uVar2,uVar1));
  FUN_1800f6900(3);
  return 0;
}



