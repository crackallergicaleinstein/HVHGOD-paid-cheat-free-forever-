// FUN_18063ffff - decompiled reference (Ghidra). Not original source, does not compile.

/* 18063ffff */

undefined8 FUN_18063ffff(undefined8 param_1,longlong param_2)

{
  undefined8 in_stack_ffffffffffffffe8;
  undefined4 uVar1;
  
  uVar1 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  FUN_18063ab10(param_2 + 0x700,0,0x600);
  FUN_18015ad60(param_2 + 0x700,0x600,0xffffffffffffffff,"component=team_skin_config team=%d",
                CONCAT44(uVar1,*(undefined4 *)(param_2 + 0x50)));
  FUN_1800f6900(2);
  return 0;
}



