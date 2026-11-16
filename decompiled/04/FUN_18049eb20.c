// FUN_18049eb20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18049eb20 */

void FUN_18049eb20(longlong *param_1)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined4 uVar3;
  ulonglong in_stack_ffffffffffffff28;
  undefined *puVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined **local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [16];
  undefined1 local_78;
  undefined7 uStack_77;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  lVar1 = *param_1;
  FUN_180488c60();
  uVar6 = 0;
  FUN_1804898a0("Override FOV",lVar1 + 0xcd4,0,1,in_stack_ffffffffffffff28 & 0xffffffffffffff00,0);
  uVar3 = 0x3f800000;
  puVar4 = &DAT_180829cdc;
  FUN_18048a250("Value",lVar1 + 0xcd8,0x42700000,0x43020000,&DAT_180829cdc,
                CONCAT44(uVar6,0x3f800000),*(undefined1 *)(lVar1 + 0xcd4),0);
  FUN_180488f10();
  lVar1 = *param_1;
  FUN_180488c60();
  FUN_1804898a0("Override Aspect Ratio",lVar1 + 0xcdc,0,1,(ulonglong)puVar4 & 0xffffffffffffff00,0);
  auStack_88 = ZEXT816(0);
  local_98 = 0;
  uStack_90 = 0;
  local_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  auVar2 = vunpcklps_avx(ZEXT816(0),ZEXT816(0));
  local_a8 = &PTR_s_Horizontal_1807b7c18;
  local_78 = 1;
  uStack_70 = 0;
  local_38 = CONCAT71(uStack_77,1);
  local_28 = auVar2._0_8_;
  uStack_30 = 0;
  local_a0 = 3;
  FUN_18048d220("Scaling",lVar1 + 0xce0,&local_a8,*(undefined1 *)(lVar1 + 0xcdc),0,&local_58);
  pcVar5 = "%.0f%%";
  FUN_18048a250("Value",lVar1 + 0xce4,0x42480000,0x43480000,"%.0f%%",uVar3,
                *(undefined1 *)(lVar1 + 0xcdc),0);
  FUN_180488f10();
  lVar1 = *param_1;
  FUN_180488c60();
  FUN_1804898a0("Disable Landing Bob",lVar1 + 0xce8,0,1,(ulonglong)pcVar5 & 0xffffffffffffff00,0);
  FUN_180488f10();
  return;
}



