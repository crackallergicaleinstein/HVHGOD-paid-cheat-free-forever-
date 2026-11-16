// FUN_18053fc20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18053fc20 */

void FUN_18053fc20(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [64];
  float fVar5;
  char *pcVar6;
  undefined8 in_stack_ffffffffffffffb0;
  undefined4 uVar7;
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffffb0 >> 0x20);
  FUN_180488c60();
  uVar2 = 0x3dcccccd;
  FUN_18048a250("Marker Size",&DAT_180cadc58,0x3f800000,0x41200000,"%.1f px",
                CONCAT44(uVar7,0x3dcccccd),1,&DAT_18082a254);
  pcVar6 = "%.1f px";
  fVar5 = 0.0;
  FUN_18048a250("Outline Width",&DAT_180cadc5c,0,0x40800000,"%.1f px",uVar2,1,&DAT_18082a288);
  FUN_180488f10();
  FUN_180488c60();
  cVar1 = FUN_18048b0e0("Can Penetrate",&DAT_180829a38,1);
  auVar4 = ZEXT464(0x43af0000);
  if (cVar1 != '\0') {
    FUN_1805303d0("##penetration_clear",auVar4._0_8_);
  }
  cVar1 = FUN_180488630("##penetration_clear","Can Penetrate",auVar4._0_8_);
  if (cVar1 != '\0') {
    FUN_180488c60();
    uVar3 = CONCAT71((int7)((ulonglong)pcVar6 >> 8),1);
    FUN_1805367d0("Fill Color",&DAT_180cadc60,&DAT_18082a268,1,uVar3);
    pcVar6 = (char *)CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
    FUN_1805367d0("Outline Color",&DAT_180cadc64,&DAT_18082a288,fVar5 < DAT_180cadc5c,pcVar6);
    FUN_180488f10();
    FUN_1804aeac0();
  }
  cVar1 = FUN_18048b0e0("Blocked",&DAT_18082a264,1);
  uVar3 = auVar4._0_8_;
  if (cVar1 != '\0') {
    FUN_1805303d0("##penetration_blocked",uVar3);
    uVar3 = auVar4._0_8_;
  }
  cVar1 = FUN_180488630("##penetration_blocked","Blocked",uVar3);
  if (cVar1 != '\0') {
    FUN_180488c60();
    uVar3 = CONCAT71((int7)((ulonglong)pcVar6 >> 8),1);
    FUN_1805367d0("Fill Color",&DAT_180cadc68,&DAT_18082a268,1,uVar3);
    pcVar6 = (char *)CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
    FUN_1805367d0("Outline Color",&DAT_180cadc6c,&DAT_18082a288,fVar5 < DAT_180cadc5c,pcVar6);
    FUN_180488f10();
    FUN_1804aeac0();
  }
  FUN_180488f10();
  FUN_180488c60();
  uVar2 = 0;
  cVar1 = FUN_1804898a0(&DAT_1806bd384,&DAT_180cadc70,&DAT_180858a0c,1,
                        (ulonglong)pcVar6 & 0xffffffffffffff00,0);
  if (cVar1 != '\0') {
    DAT_180cadc80 = DAT_180cadc70;
  }
  FUN_18048a250("Glow Strength",&DAT_180cadcd8,0,0x3f800000,&DAT_1807c6e40,
                CONCAT44(uVar2,0x3c23d70a),DAT_180cadc70,&DAT_180830b60);
  FUN_180488f10();
  return;
}



