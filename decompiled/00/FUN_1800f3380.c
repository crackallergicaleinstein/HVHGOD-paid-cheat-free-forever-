// FUN_1800f3380 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800f3380 */

longlong FUN_1800f3380(undefined8 *param_1)

{
  undefined1 local_68 [32];
  undefined1 local_48 [72];
  
  if (*(char *)*param_1 != '\x01') {
    FUN_18015bae0(local_68,"cannot use key() for non-object iterators");
    FUN_1800f6e80(local_48,0xcf,local_68);
                    /* WARNING: Subroutine does not return */
    FUN_180606630(local_48,&DAT_1808d0fe8);
  }
  return param_1[1] + 0x20;
}



