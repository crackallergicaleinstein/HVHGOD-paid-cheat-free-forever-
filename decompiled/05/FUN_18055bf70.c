// FUN_18055bf70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18055bf70 */

void FUN_18055bf70(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined **local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [16];
  undefined1 local_68;
  uint7 uStack_67;
  undefined8 uStack_60;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  longlong local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  lVar1 = *(longlong *)*param_1;
  FUN_180488c60();
  local_90 = 3;
  auStack_78 = ZEXT816(0);
  local_88 = 0;
  uStack_80 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_28 = (ulonglong)uStack_67 << 8;
  local_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  auVar3 = vunpcklps_avx(ZEXT816(0),ZEXT816(0));
  local_98 = &PTR_s_Custom_18086bc48;
  uStack_20 = 0;
  local_18 = auVar3._0_8_;
  FUN_18048d220("Gamma Style",lVar1 + 0x364,&local_98,1,&DAT_180830b60,&local_48);
  if (*(int *)(lVar1 + 0x364) == 0) {
    FUN_18048a250("Gamma Value",lVar1 + 0x360,0x3f800000,0x40a00000,&DAT_1807c6e40,0x3d4ccccd,1,
                  &DAT_180830b60);
  }
  FUN_180488f10();
  uVar2 = param_1[1];
  FUN_180488c60();
  FUN_18053bc10(uVar2);
  FUN_180488f10();
  return;
}



