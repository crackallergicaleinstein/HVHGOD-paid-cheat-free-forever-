// FUN_18057bd80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18057bd80 */

void FUN_18057bd80(_JBTYPE *param_1,undefined4 param_2)

{
  *(undefined4 *)((longlong)param_1[0x11].Part + 4) = param_2;
                    /* WARNING: Subroutine does not return */
  longjmp(param_1,1);
}



