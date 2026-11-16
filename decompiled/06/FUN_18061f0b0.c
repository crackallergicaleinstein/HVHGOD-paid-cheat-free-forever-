// FUN_18061f0b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18061f0b0 */

undefined8 FUN_18061f0b0(char *param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  
  if ((param_1 != (char *)0x0) && (param_2 != 0)) {
    if (param_3 != 0) {
      pcVar3 = param_1;
      do {
        cVar1 = pcVar3[param_3 - (longlong)param_1];
        *pcVar3 = cVar1;
        pcVar3 = pcVar3 + 1;
        if (cVar1 == '\0') {
          return 0;
        }
        param_2 = param_2 + -1;
      } while (param_2 != 0);
      *param_1 = '\0';
      puVar2 = (undefined4 *)FUN_18060fe00();
      *puVar2 = 0x22;
      FUN_18060aad4();
      return 0x22;
    }
    *param_1 = '\0';
  }
  puVar2 = (undefined4 *)FUN_18060fe00();
  *puVar2 = 0x16;
  FUN_18060aad4();
  return 0x16;
}



