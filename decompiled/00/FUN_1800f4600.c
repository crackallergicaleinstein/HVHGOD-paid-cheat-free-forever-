// FUN_1800f4600 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800f4600 */

longlong FUN_1800f4600(char *param_1,ulonglong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 local_68 [32];
  undefined1 local_48 [64];
  
  if (*param_1 == '\0') {
    *param_1 = '\x02';
    uVar2 = FUN_18010f4c0();
    *(undefined8 *)(param_1 + 8) = uVar2;
  }
  if (*param_1 != '\x02') {
    FUN_180112a50(param_1);
    uVar2 = FUN_18010f410(local_68);
    FUN_1800f6ca0(local_48,0x131,uVar2);
                    /* WARNING: Subroutine does not return */
    FUN_180606630(local_48,&DAT_1808d1050);
  }
  plVar1 = *(longlong **)(param_1 + 8);
  if ((ulonglong)(plVar1[1] - *plVar1 >> 4) <= param_2) {
    FUN_18013f3b0(plVar1,param_2 + 1);
  }
  return param_2 * 0x10 + **(longlong **)(param_1 + 8);
}



