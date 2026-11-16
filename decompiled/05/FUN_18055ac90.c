// FUN_18055ac90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18055ac90 */

void FUN_18055ac90(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined4 uVar5;
  undefined **local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [16];
  undefined1 local_78;
  uint7 uStack_77;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  plVar1 = (longlong *)*param_1;
  lVar2 = *plVar1;
  FUN_180488c60();
  local_a0 = 2;
  auStack_88 = ZEXT816(0);
  local_98 = 0;
  uStack_90 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_38 = (ulonglong)uStack_77 << 8;
  local_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  auVar4 = vunpcklps_avx(ZEXT816(0),ZEXT816(0));
  local_a8 = &PTR_s_Fixed_Angle_18086bf78;
  uStack_30 = 0;
  local_28 = auVar4._0_8_;
  FUN_18048d220("Zoom Mode",lVar2 + 0xdc,&local_a8,1,&DAT_18082ac68,&local_58);
  if (*(int *)(lVar2 + 0xdc) == 0) {
    FUN_18048a250("Scoped FOV",lVar2 + 0xd8,0x41200000,0x42b40000,"%.0f deg",0x3f800000,1,
                  &DAT_18082a248);
  }
  else {
    uVar5 = 0x3f800000;
    FUN_18048a250("First Zoom",lVar2 + 0xe0,0x41c80000,0x43960000,"%.0f%%",0x3f800000,1,
                  &DAT_18082ac68);
    FUN_18048a250("Second Zoom",lVar2 + 0xe4,0x41c80000,0x43960000,"%.0f%%",uVar5,1,&DAT_18082ac68);
  }
  FUN_180488f10();
  if (*(int *)(*plVar1 + 0xdc) != 0) {
    FUN_1805302b0("100% keeps the weapon\'s native magnification at that zoom level.");
  }
  uVar3 = param_1[1];
  FUN_180488c60();
  FUN_18053bc10(uVar3);
  FUN_180488f10();
  return;
}



