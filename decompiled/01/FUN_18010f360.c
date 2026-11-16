// FUN_18010f360 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18010f360 */

undefined1 (*) [16]
FUN_18010f360(undefined1 (*param_1) [16],undefined8 param_2,longlong *param_3,undefined8 param_4)

{
  longlong lVar2;
  longlong lVar1;
  longlong lVar3;
  
  *param_1 = (undefined1  [16])0x0;
  *(undefined8 *)param_1[1] = 0;
  *(undefined8 *)(param_1[1] + 8) = 0xf;
  (*param_1)[0] = 0;
  lVar3 = -1;
  lVar1 = -1;
  do {
    lVar2 = lVar1;
    lVar1 = lVar2 + 1;
  } while (*(char *)(*param_3 + lVar1) != '\0');
  FUN_1800f5540(0,lVar2 + 0x33,param_3,param_4,1);
  FUN_18015b2a0(param_1,"cannot use operator[] with a string argument with ",0x32);
  do {
    lVar3 = lVar3 + 1;
  } while (*(char *)(*param_3 + lVar3) != '\0');
  FUN_18015b2a0(param_1,*param_3,lVar3);
  return param_1;
}



