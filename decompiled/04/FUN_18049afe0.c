// FUN_18049afe0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18049afe0 */

void FUN_18049afe0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined **local_18;
  undefined8 local_10;
  
  FUN_180493f00("Hitboxes");
  lVar1 = *param_2;
  FUN_180488c60();
  local_18 = &PTR_DAT_1807b7aa8;
  local_10 = 6;
  FUN_18048dbc0(&local_18,lVar1 + 0x38);
  FUN_180488f10();
  if (DAT_180c62d18 != DAT_180c62d20) {
    FUN_18015c010(DAT_180c62d20 + -0x20);
    DAT_180c62d20 = DAT_180c62d20 + -0x20;
  }
  DAT_1808e4e38 = 0xffffffff;
  return;
}



