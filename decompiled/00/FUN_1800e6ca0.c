// FUN_1800e6ca0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800e6ca0 */

undefined8 FUN_1800e6ca0(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  undefined1 local_68 [32];
  undefined1 local_48 [72];
  
  puVar1 = (undefined1 *)*param_1;
  if (puVar1 != (undefined1 *)*param_2) {
    FUN_18015bae0(local_68,"cannot compare iterators of different containers");
    FUN_1800f6e80(local_48,0xd4,local_68);
                    /* WARNING: Subroutine does not return */
    FUN_180606630(local_48,&DAT_1808d0fe8);
  }
  if (puVar1 == (undefined1 *)0x0) {
    return 1;
  }
  switch(*puVar1) {
  default:
    return CONCAT71((int7)((ulonglong)param_2[3] >> 8),param_1[3] == param_2[3]);
  case 1:
    return CONCAT71((int7)((ulonglong)param_2[1] >> 8),param_1[1] == param_2[1]);
  case 2:
    return CONCAT71((int7)((ulonglong)param_2[2] >> 8),param_1[2] == param_2[2]);
  }
}



