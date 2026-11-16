// FUN_180159760 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180159760 */

undefined1 (*) [16] FUN_180159760(undefined8 param_1,undefined1 (*param_2) [16],int param_3)

{
  char *pcVar1;
  longlong lVar2;
  
  if (param_3 == 1) {
    *param_2 = (undefined1  [16])0x0;
    *(undefined8 *)param_2[1] = 0;
    lVar2 = 0x15;
    *(undefined8 *)(param_2[1] + 8) = 0;
    pcVar1 = "iostream stream error";
  }
  else {
    pcVar1 = (char *)FUN_1805fabe0(param_3);
    *param_2 = (undefined1  [16])0x0;
    *(undefined8 *)param_2[1] = 0;
    lVar2 = -1;
    *(undefined8 *)(param_2[1] + 8) = 0;
    do {
      lVar2 = lVar2 + 1;
    } while (pcVar1[lVar2] != '\0');
  }
  FUN_18015ba30(param_2,pcVar1,lVar2);
  return param_2;
}



