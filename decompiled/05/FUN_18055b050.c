// FUN_18055b050 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18055b050 */

void FUN_18055b050(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  lVar1 = *(longlong *)*param_1;
  FUN_180488c60();
  FUN_18048a250("Viewmodel FOV",lVar1 + 0x1abc,0x42700000,0x42880000,"%.0f deg",0x3f800000,1,
                &DAT_18082a248);
  FUN_180488f10();
  FUN_180488c60();
  uVar3 = 0x3d4ccccd;
  FUN_18048a250("Horizontal Offset",lVar1 + 0x1ab0,0xc0000000,0x40200000,"%.2f u",0x3d4ccccd,1,
                &DAT_18082a298);
  FUN_18048a250("Forward Offset",lVar1 + 0x1ab4,0xc0000000,0x40000000,"%.2f u",uVar3,1,
                &DAT_18082a298);
  FUN_18048a250("Vertical Offset",lVar1 + 0x1ab8,0xc0000000,0x40000000,"%.2f u",uVar3,1,
                &DAT_18082a298);
  FUN_180488f10();
  uVar2 = param_1[1];
  FUN_180488c60();
  FUN_18053bc10(uVar2);
  FUN_180488f10();
  return;
}



