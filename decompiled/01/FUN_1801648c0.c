// FUN_1801648c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801648c0 */

undefined1 (*) [16] FUN_1801648c0(undefined8 param_1,undefined1 (*param_2) [16],int param_3)

{
  char *pcVar1;
  longlong lVar2;
  
  if (param_3 == 1) {
    pcVar1 = "broken promise";
  }
  else if (param_3 == 2) {
    pcVar1 = "future already retrieved";
  }
  else if (param_3 == 3) {
    pcVar1 = "promise already satisfied";
  }
  else {
    if (param_3 != 4) {
      pcVar1 = (char *)FUN_1805fabe0(param_3);
      *param_2 = (undefined1  [16])0x0;
      *(undefined8 *)param_2[1] = 0;
      lVar2 = -1;
      *(undefined8 *)(param_2[1] + 8) = 0;
      do {
        lVar2 = lVar2 + 1;
      } while (pcVar1[lVar2] != '\0');
      goto LAB_180164959;
    }
    pcVar1 = "no state";
  }
  *param_2 = (undefined1  [16])0x0;
  *(undefined8 *)param_2[1] = 0;
  lVar2 = -1;
  *(undefined8 *)(param_2[1] + 8) = 0;
  do {
    lVar2 = lVar2 + 1;
  } while (pcVar1[lVar2] != '\0');
LAB_180164959:
  FUN_18015ba30(param_2,pcVar1);
  return param_2;
}



