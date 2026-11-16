// FUN_180563150 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180563150 */

void FUN_180563150(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_180493f00("Hide Native Messages");
  FUN_1805302b0(
               "Hide the game\'s native console messages. HVHGODS event messages still pass through."
               );
  uVar1 = *param_2;
  FUN_180488c60();
  FUN_18053b0f0(uVar1);
  FUN_180488f10();
  if (DAT_180c62d18 != DAT_180c62d20) {
    FUN_18015c010(DAT_180c62d20 + -0x20);
    DAT_180c62d20 = DAT_180c62d20 + -0x20;
  }
  DAT_1808e4e38 = 0xffffffff;
  return;
}



