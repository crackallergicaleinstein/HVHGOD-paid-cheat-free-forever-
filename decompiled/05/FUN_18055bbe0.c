// FUN_18055bbe0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18055bbe0 */

void FUN_18055bbe0(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  ulonglong in_stack_ffffffffffffffb8;
  
  plVar1 = (longlong *)*param_1;
  lVar2 = *plVar1;
  FUN_180488c60();
  FUN_1805367d0("Surface Color",lVar2 + 0x1f8,&DAT_18082a268,1,
                in_stack_ffffffffffffffb8 & 0xffffffffffffff00);
  uVar4 = 0x3c23d70a;
  FUN_18048a250("Surface Strength",lVar2 + 0x1fc,0,0x3f800000,&DAT_1807c6e40,0x3c23d70a,1,
                &DAT_180830b60);
  FUN_180488f10();
  lVar2 = *plVar1;
  FUN_180488c60();
  FUN_18048a250("Atmosphere Tint",lVar2 + 0x200,0,0x3f800000,&DAT_1807c6e40,uVar4,1,&DAT_180829a44);
  FUN_180488f10();
  uVar3 = param_1[1];
  FUN_180488c60();
  FUN_18053bc10(uVar3);
  FUN_180488f10();
  return;
}



