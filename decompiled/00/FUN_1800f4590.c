// FUN_1800f4590 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800f4590 */

longlong FUN_1800f4590(char *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 local_68 [32];
  undefined1 local_48 [72];
  
  if (*param_1 != '\x02') {
    FUN_180112a50();
    uVar1 = FUN_18010f410(local_68);
    FUN_1800f6ca0(local_48,0x131,uVar1);
                    /* WARNING: Subroutine does not return */
    FUN_180606630(local_48,&DAT_1808d1050);
  }
  return param_2 * 0x10 + **(longlong **)(param_1 + 8);
}



