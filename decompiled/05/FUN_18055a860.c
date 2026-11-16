// FUN_18055a860 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18055a860 */

void FUN_18055a860(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong in_stack_ffffffffffffffc8;
  
  lVar1 = *(longlong *)*param_1;
  FUN_180488c60();
  FUN_1805367d0("Light Color",lVar1 + 0x24b0,&DAT_180830b60,1,
                in_stack_ffffffffffffffc8 & 0xffffffffffffff00);
  FUN_18048a250("Light Radius",lVar1 + 0x24b4,0x42480000,0x466a6000,"%.0f u",0x41200000,1,
                &DAT_18082a254);
  FUN_18048a250("Height Offset",lVar1 + 0x24b8,0,0x42c80000,"%.0f u",0x3f800000,1,&DAT_18082a254);
  FUN_180488f10();
  uVar2 = param_1[1];
  FUN_180488c60();
  FUN_18053bc10(uVar2);
  FUN_180488f10();
  return;
}



