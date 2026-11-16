// FUN_18055aec0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18055aec0 */

void FUN_18055aec0(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  lVar1 = *(longlong *)*param_1;
  FUN_180488c60();
  uVar3 = 0x3f800000;
  FUN_18048a250("Camera Distance",lVar1 + 0x150,0x420c0000,0x43480000,"%.0f u",0x3f800000,1,
                &DAT_18082a254);
  FUN_18048a250("Collision Clearance",lVar1 + 0x154,0,0x42000000,"%.0f u",uVar3,1,&DAT_18082a264);
  FUN_180488f10();
  FUN_1805302b0(
               "Scoped third person requires Hide Game Scope. Collision keeps the camera in front of solid geometry."
               );
  uVar2 = param_1[1];
  FUN_180488c60();
  FUN_18053bc10(uVar2);
  FUN_180488f10();
  return;
}



