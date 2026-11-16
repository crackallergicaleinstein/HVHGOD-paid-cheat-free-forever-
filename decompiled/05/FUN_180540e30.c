// FUN_180540e30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180540e30 */

void FUN_180540e30(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [64];
  undefined4 uVar5;
  ulonglong in_stack_ffffffffffffffa8;
  
  FUN_180488c60();
  FUN_1805367d0("Fog Color",&DAT_180cc8cdc,&DAT_180829a44,1,
                in_stack_ffffffffffffffa8 & 0xffffffffffffff00);
  uVar5 = 0x3c23d70a;
  FUN_18048a250("Fog Density",&DAT_180cc8cd0,0,0x3f800000,&DAT_1807c6e40,0x3c23d70a,1,&DAT_180829a44
               );
  FUN_18048a250("Brightness",&DAT_180cc8ce4,0,0x40400000,"%.2fx",0x3d4ccccd,1,&DAT_180830b60);
  FUN_180488f10();
  FUN_180488c60();
  cVar1 = FUN_18048b0e0("Distance & Falloff",&DAT_18082a254,1);
  auVar4 = ZEXT464(0x43af0000);
  uVar3 = auVar4._0_8_;
  if (cVar1 != '\0') {
    FUN_1805303d0("##fog_range",uVar3);
    uVar3 = auVar4._0_8_;
  }
  cVar1 = FUN_180488630("##fog_range","Distance & Falloff",uVar3);
  if (cVar1 != '\0') {
    FUN_180488c60();
    uVar2 = 0x41200000;
    FUN_18048a250("Start Distance",&DAT_180cc8ce0,0,0x459c4000,"%.0f u",0x41200000,1,&DAT_18082a254)
    ;
    FUN_18048a250("End Distance",&DAT_180cc8cd8,0x43000000,0x469c4000,"%.0f u",uVar2,1,
                  &DAT_18082a254);
    FUN_18048a250("Falloff",&DAT_180cc8cd4,0,0x3f800000,&DAT_1807c6e40,uVar5,1,&DAT_180859278);
    FUN_180488f10();
    FUN_1804aeac0();
  }
  FUN_180488f10();
  if (DAT_180b0c8c0 != '\0') {
    FUN_1805302b0("Sky fog removal is also enabled under World / Removals.");
  }
  return;
}



