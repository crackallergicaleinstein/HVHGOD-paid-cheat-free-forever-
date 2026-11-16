// FUN_180496790 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180496790 */

void FUN_180496790(longlong *param_1)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [64];
  undefined4 uVar4;
  ulonglong in_stack_ffffffffffffff18;
  ulonglong uVar5;
  undefined4 uVar6;
  undefined **local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [16];
  undefined1 local_88;
  undefined7 uStack_87;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  lVar1 = *param_1;
  FUN_180488c60();
  in_stack_ffffffffffffff18 = in_stack_ffffffffffffff18 & 0xffffffffffffff00;
  FUN_1804898a0("Auto Wall",lVar1 + 0x24,0,1,in_stack_ffffffffffffff18,0);
  in_stack_ffffffffffffff18 = in_stack_ffffffffffffff18 & 0xffffffffffffff00;
  FUN_1804898a0("Multi Point",lVar1 + 0x25,0,1,in_stack_ffffffffffffff18,0);
  uVar6 = 0;
  FUN_1804898a0("Lethal Only",lVar1 + 0x26,0,1,in_stack_ffffffffffffff18 & 0xffffffffffffff00,0);
  uVar4 = 0x3f800000;
  auVar3 = ZEXT864(0);
  FUN_18048a250("Min Damage",lVar1 + 0x28,0,0x43020000,&DAT_180829c34,CONCAT44(uVar6,0x3f800000),1,0
               );
  FUN_180488f10();
  lVar1 = *param_1;
  FUN_180488c60();
  auStack_98 = ZEXT816(0);
  local_a8 = 0;
  uStack_a0 = 0;
  local_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  auVar2 = vunpcklps_avx(auVar3._0_16_,auVar3._0_16_);
  local_b8 = &PTR_s_Block_1807b7b48;
  local_88 = 1;
  uStack_80 = 0;
  local_48 = CONCAT71(uStack_87,1);
  local_38 = auVar2._0_8_;
  uStack_40 = 0;
  local_b0 = 3;
  uVar5 = 0;
  FUN_18048d220("Walls",lVar1 + 0x2c,&local_b8,1,0,&local_68);
  uVar6 = 0;
  FUN_1804898a0("Airborne",lVar1 + 0x30,0,1,uVar5 & 0xffffffffffffff00,0);
  FUN_18048a250("Reaction Time",lVar1 + 0x34,0,0x437a0000,"%.0f ms",CONCAT44(uVar6,uVar4),1,0);
  FUN_180488f10();
  return;
}



