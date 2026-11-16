// FUN_18055bdc0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18055bdc0 */

void FUN_18055bdc0(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong in_stack_ffffffffffffffc8;
  
  lVar1 = *(longlong *)*param_1;
  FUN_180488c60();
  FUN_1805367d0("Decal Color",lVar1 + 0x270,&DAT_18082a268,1,
                in_stack_ffffffffffffffc8 & 0xffffffffffffff00);
  FUN_18048a250("Tint Strength",lVar1 + 0x274,0,0x3f800000,&DAT_1807c6e40,0x3c23d70a,1,
                &DAT_180830b60);
  FUN_180488f10();
  if (DAT_180b0cac8 != '\0') {
    FUN_1805302b0(
                 "Remove Decals is enabled in World / Removals. Removed decals cannot display a tint."
                 );
  }
  uVar2 = param_1[1];
  FUN_180488c60();
  FUN_18053bc10(uVar2);
  FUN_180488f10();
  return;
}



