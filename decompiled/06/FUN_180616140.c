// FUN_180616140 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180616140 */

undefined8 FUN_180616140(short *param_1,longlong param_2,longlong param_3)

{
  short sVar1;
  undefined4 *puVar2;
  short *psVar3;
  
  if ((param_1 != (short *)0x0) && (param_2 != 0)) {
    psVar3 = param_1;
    if (param_3 == 0) {
      *param_1 = 0;
    }
    else {
      do {
        if (*psVar3 == 0) {
          param_3 = param_3 - (longlong)psVar3;
          do {
            sVar1 = *(short *)(param_3 + (longlong)psVar3);
            *psVar3 = sVar1;
            psVar3 = psVar3 + 1;
            if (sVar1 == 0) {
              return 0;
            }
            param_2 = param_2 + -1;
          } while (param_2 != 0);
          *param_1 = 0;
          puVar2 = (undefined4 *)FUN_18060fe00();
          *puVar2 = 0x22;
          FUN_18060aad4();
          return 0x22;
        }
        psVar3 = psVar3 + 1;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
      *param_1 = 0;
    }
  }
  puVar2 = (undefined4 *)FUN_18060fe00();
  *puVar2 = 0x16;
  FUN_18060aad4();
  return 0x16;
}



