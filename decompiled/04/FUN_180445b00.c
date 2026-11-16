// FUN_180445b00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180445b00 */

void FUN_180445b00(longlong param_1,undefined8 param_2,longlong param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if (*(char *)(*(longlong *)(param_3 + 0x10) + 0x29) == '\0') {
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x220);
  }
  else if ((*(char *)(param_1 + 7) == '\0') && (*(longlong *)(param_3 + 0x18) != -1)) {
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x208);
  }
  else {
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x210);
  }
                    /* WARNING: Could not recover jumptable at 0x00018063a8e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



