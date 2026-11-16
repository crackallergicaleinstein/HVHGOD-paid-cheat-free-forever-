// FUN_1800f3560 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800f3560 */

undefined1 * FUN_1800f3560(undefined8 *param_1)

{
  undefined1 local_68 [32];
  undefined1 local_48 [72];
  
  switch(*(undefined1 *)*param_1) {
  case 0:
    FUN_18015bae0(local_68,"cannot get value");
    FUN_1800f6e80(local_48,0xd6,local_68);
                    /* WARNING: Subroutine does not return */
    FUN_180606630(local_48,&DAT_1808d0fe8);
  case 1:
    return (undefined1 *)(param_1[1] + 0x40);
  case 2:
    return (undefined1 *)param_1[2];
  }
  if (param_1[3] != 0) {
    FUN_18015bae0(local_68,"cannot get value");
    FUN_1800f6e80(local_48,0xd6,local_68);
                    /* WARNING: Subroutine does not return */
    FUN_180606630(local_48,&DAT_1808d0fe8);
  }
  return (undefined1 *)*param_1;
}



