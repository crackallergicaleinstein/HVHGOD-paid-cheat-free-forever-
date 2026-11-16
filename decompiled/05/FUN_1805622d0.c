// FUN_1805622d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805622d0 */

void FUN_1805622d0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 local_res8 [4];
  
  local_res8[0] = param_1;
  FUN_180493f00("Shot Timing");
  local_res8[0] = *param_2;
  FUN_180488c60();
  FUN_18051ab60(local_res8);
  FUN_180488f10();
  if (DAT_180c62d18 != DAT_180c62d20) {
    FUN_18015c010(DAT_180c62d20 + -0x20);
    DAT_180c62d20 = DAT_180c62d20 + -0x20;
  }
  DAT_1808e4e38 = 0xffffffff;
  return;
}



