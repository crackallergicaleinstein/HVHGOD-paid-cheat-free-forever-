// FUN_18059e610 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18059e610 */

undefined8 FUN_18059e610(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (((undefined *)param_1[2] == &DAT_1806708f0) || ((undefined *)param_1[2] == &DAT_180670940)) {
    return 0x96;
  }
  uVar1 = FUN_180573a00(*(undefined8 *)(*(longlong *)(*param_1 + 0x90) + 8),&DAT_18066f8b4);
  puVar2 = (undefined8 *)FUN_18057ae80(uVar1,"tt-cmaps",0);
  if ((puVar2 == (undefined8 *)0x0) || ((code *)*puVar2 == (code *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00018059e685. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)*puVar2)(param_1,param_2);
  return uVar1;
}



