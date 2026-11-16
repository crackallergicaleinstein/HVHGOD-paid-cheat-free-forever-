// FUN_18063fdd1 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18063fdd1 */

undefined8 FUN_18063fdd1(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  if (**(char **)(param_2 + 0x698) != '\x01') {
    FUN_18015bae0(param_2 + 0x678,"cannot use key() for non-object iterators");
    FUN_1800f6e80(param_2 + 0x288,0xcf,param_2 + 0x678);
                    /* WARNING: Subroutine does not return */
    FUN_180606630(param_2 + 0x288,&DAT_1808d0fe8);
  }
  puVar1 = (undefined8 *)(*(longlong *)(param_2 + 0x6a0) + 0x20);
  if (0xf < *(ulonglong *)(*(longlong *)(param_2 + 0x6a0) + 0x38)) {
    puVar1 = (undefined8 *)*puVar1;
  }
  FUN_18063ab10(param_2 + 0x700,0,0x600);
  FUN_18015ad60(param_2 + 0x700,0x600,0xffffffffffffffff,
                "component=skin_config item=\"%s\" error_type=unknown",puVar1);
  FUN_1800f6900(2);
  return 0;
}



