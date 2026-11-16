// FUN_1800f6bd0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800f6bd0 */

undefined1 (*) [16]
FUN_1800f6bd0(undefined1 (*param_1) [16],longlong param_2,longlong *param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  *param_1 = (undefined1  [16])0x0;
  *(undefined8 *)param_1[1] = 0;
  *(undefined8 *)(param_1[1] + 8) = 0xf;
  (*param_1)[0] = 0;
  lVar3 = -1;
  lVar1 = -1;
  do {
    lVar1 = lVar1 + 1;
  } while (*(char *)(*param_3 + lVar1) != '\0');
  lVar2 = -1;
  do {
    lVar2 = lVar2 + 1;
  } while (*(char *)(param_2 + lVar2) != '\0');
  FUN_1800f5540(param_1,lVar2 + lVar1,param_3,param_4,1);
  lVar1 = -1;
  do {
    lVar1 = lVar1 + 1;
  } while (*(char *)(param_2 + lVar1) != '\0');
  FUN_18015b2a0(param_1,param_2);
  do {
    lVar3 = lVar3 + 1;
  } while (*(char *)(*param_3 + lVar3) != '\0');
  FUN_18015b2a0(param_1,*param_3,lVar3);
  return param_1;
}



