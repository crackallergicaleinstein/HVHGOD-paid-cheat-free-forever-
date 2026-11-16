// FUN_1800f3650 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800f3650 */

undefined8 * FUN_1800f3650(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 local_68 [32];
  undefined1 local_48 [72];
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  puVar1 = (undefined1 *)*param_1;
  *param_2 = puVar1;
  uVar2 = param_1[2];
  param_2[1] = param_1[1];
  param_2[2] = uVar2;
  param_2[3] = param_1[3];
  switch(*puVar1) {
  default:
    param_2[3] = param_2[3] + 5;
    return param_2;
  case 1:
    FUN_18015bae0(local_68,"cannot use offsets with object iterators");
    FUN_1800f6e80(local_48,0xd1,local_68);
                    /* WARNING: Subroutine does not return */
    FUN_180606630(local_48,&DAT_1808d0fe8);
  case 2:
    param_2[2] = param_2[2] + 0x50;
    return param_2;
  }
}



