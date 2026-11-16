// FUN_1800e6720 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800e6720 */

char FUN_1800e6720(char *param_1)

{
  undefined8 uVar1;
  undefined1 local_68 [32];
  undefined1 local_48 [72];
  
  if (*param_1 != '\x04') {
    FUN_180112a50();
    uVar1 = FUN_180156f00(local_68);
    FUN_1800f6ca0(local_48,0x12e,uVar1);
                    /* WARNING: Subroutine does not return */
    FUN_180606630(local_48,&DAT_1808d1050);
  }
  return param_1[8];
}



