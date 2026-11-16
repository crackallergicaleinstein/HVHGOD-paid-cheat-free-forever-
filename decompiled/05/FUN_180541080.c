// FUN_180541080 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180541080 */

void FUN_180541080(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [64];
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined **local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [16];
  undefined1 local_88;
  uint7 uStack_87;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  FUN_180488c60();
  local_b0 = 3;
  auStack_98 = ZEXT816(0);
  local_a8 = 0;
  uStack_a0 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_48 = (ulonglong)uStack_87 << 8;
  local_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  auVar1 = vunpcklps_avx(ZEXT816(0),ZEXT816(0));
  local_b8 = &PTR_DAT_18086b900;
  puVar3 = &local_68;
  uStack_40 = 0;
  local_38 = auVar1._0_8_;
  FUN_18048d220("Bloom Style",&DAT_180cc90c4,&local_b8,1,&DAT_180858a0c,puVar3);
  auVar2 = ZEXT464(0x3d4ccccd);
  uVar4 = CONCAT44((int)((ulonglong)puVar3 >> 0x20),0x3d4ccccd);
  FUN_18048a250("Bloom Amount",&DAT_180cc90c0,0,0x40a00000,&DAT_1807c6e40,uVar4,1,&DAT_180830b60);
  uVar5 = (undefined4)((ulonglong)uVar4 >> 0x20);
  FUN_180488f10();
  if (DAT_180cc90c4 == 2) {
    FUN_180488c60();
    FUN_18048a250("Highlight Threshold",&DAT_180cc90c8,0,0x41000000,&DAT_1807c6e40,
                  CONCAT44(uVar5,auVar2._0_4_),1,&DAT_180830b60);
    FUN_18048a250("Threshold Softness",&DAT_180cc90cc,auVar2._0_8_,0x40800000,&DAT_1807c6e40,
                  auVar2._0_4_,1,&DAT_18082a260);
    FUN_18048a250("Highlight Strength",&DAT_180cc90d0,0,0x40a00000,&DAT_1807c6e40,auVar2._0_4_,1,
                  &DAT_180858a0c);
    FUN_180488f10();
  }
  return;
}



