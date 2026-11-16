// FUN_18056dcc0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18056dcc0 */

void FUN_18056dcc0(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  FUN_180493f00("Extrapolation");
  lVar1 = *(longlong *)*param_2;
  FUN_180488c60();
  FUN_180517040("Maximum Ticks",lVar1 + 0x1b0,1,0x10,&DAT_180829c34);
  FUN_180488f10();
  uVar2 = param_2[1];
  FUN_180488c60();
  FUN_180516d20(uVar2);
  FUN_180488f10();
  if (DAT_180c62d18 != DAT_180c62d20) {
    FUN_18015c010(DAT_180c62d20 + -0x20);
    DAT_180c62d20 = DAT_180c62d20 + -0x20;
  }
  DAT_1808e4e38 = 0xffffffff;
  return;
}



