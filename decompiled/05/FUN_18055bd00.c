// FUN_18055bd00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18055bd00 */

void FUN_18055bd00(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong in_stack_ffffffffffffffc8;
  
  lVar1 = *(longlong *)*param_1;
  FUN_180488c60();
  FUN_1805367d0("Light Color",lVar1 + 0x178,&DAT_180830b60,1,
                in_stack_ffffffffffffffc8 & 0xffffffffffffff00);
  FUN_18048a250("Light Intensity",lVar1 + 0x17c,0,0x40800000,"%.2fx",0x3d4ccccd,1,&DAT_180830b60);
  FUN_180488f10();
  uVar2 = param_1[1];
  FUN_180488c60();
  FUN_18053bc10(uVar2);
  FUN_180488f10();
  return;
}



