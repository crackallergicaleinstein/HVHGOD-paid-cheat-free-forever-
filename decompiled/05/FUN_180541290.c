// FUN_180541290 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180541290 */

void FUN_180541290(void)

{
  undefined1 auVar1 [16];
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [64];
  undefined1 auVar6 [64];
  undefined8 *puVar7;
  undefined4 uVar8;
  undefined **local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [16];
  undefined1 local_98;
  uint7 uStack_97;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  FUN_180488c60();
  local_c0 = 3;
  auStack_a8 = ZEXT816(0);
  local_b8 = 0;
  uStack_b0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_58 = (ulonglong)uStack_97 << 8;
  local_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  auVar1 = vunpcklps_avx(ZEXT816(0),ZEXT816(0));
  local_c8 = &PTR_s_Distance_18086bfe8;
  puVar7 = &local_78;
  uStack_50 = 0;
  local_48 = auVar1._0_8_;
  FUN_18048d220("Focus Range",&DAT_180cc91c0,&local_c8,1,&DAT_180829dc0,puVar7);
  auVar6 = ZEXT464(0x3f800000);
  uVar4 = CONCAT44((int)((ulonglong)puVar7 >> 0x20),0x3c23d70a);
  FUN_18048a250("Transition Softness",&DAT_180cc91c4,0,auVar6._0_8_,&DAT_1807c6e40,uVar4,1,
                &DAT_18082a260);
  uVar8 = (undefined4)((ulonglong)uVar4 >> 0x20);
  FUN_180488f10();
  FUN_180488c60();
  auVar5 = ZEXT464(0x43af0000);
  if (DAT_180cc91c0 != 0) {
    cVar2 = FUN_18048b0e0("Near Focus",&DAT_18082ac68,1);
    if (cVar2 != '\0') {
      FUN_1805303d0("##focus_near",auVar5._0_8_);
    }
    cVar2 = FUN_180488630("##focus_near","Near Focus",auVar5._0_8_);
    if (cVar2 != '\0') {
      FUN_180488c60();
      uVar4 = CONCAT44(uVar8,auVar6._0_4_);
      FUN_18048a250("Near Blur Distance",&DAT_180cc91b0,0,0x42480000,"%.0f u",uVar4,1,&DAT_18082a254
                   );
      uVar4 = CONCAT44((int)((ulonglong)uVar4 >> 0x20),auVar6._0_4_);
      FUN_18048a250("Near Crisp Distance",&DAT_180cc91b4,0,0x42c80000,"%.0f u",uVar4,1,
                    &DAT_18082a254);
      uVar8 = (undefined4)((ulonglong)uVar4 >> 0x20);
      FUN_180488f10();
      FUN_1804aeac0();
    }
  }
  if (DAT_180cc91c0 != 1) {
    cVar2 = FUN_18048b0e0("Far Focus",&DAT_180829dc0,1);
    uVar4 = auVar5._0_8_;
    if (cVar2 != '\0') {
      FUN_1805303d0("##focus_far",uVar4);
      uVar4 = auVar5._0_8_;
    }
    cVar2 = FUN_180488630("##focus_far","Far Focus",uVar4);
    if (cVar2 != '\0') {
      FUN_180488c60();
      uVar3 = 0x41200000;
      FUN_18048a250("Far Crisp Distance",&DAT_180cc91b8,0x42c80000,0x44fa0000,"%.0f u",
                    CONCAT44(uVar8,0x41200000),1,&DAT_18082a254);
      FUN_18048a250("Far Blur Distance",&DAT_180cc91bc,0x43480000,0x459c4000,"%.0f u",uVar3,1,
                    &DAT_18082a254);
      FUN_180488f10();
      FUN_1804aeac0();
    }
  }
  FUN_180488f10();
  return;
}



