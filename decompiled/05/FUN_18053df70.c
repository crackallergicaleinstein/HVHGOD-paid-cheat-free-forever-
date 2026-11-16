// FUN_18053df70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18053df70 */

void FUN_18053df70(void)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auVar3 [64];
  
  FUN_180488c60();
  FUN_18048a250("Visible Time",&DAT_180b0c568,0x3e4ccccd,0x40c00000,"%.1f s",0x3dcccccd,1,
                &DAT_18082a278);
  FUN_18053bcb0("Ring Count",&DAT_180b0c598,1,4,&DAT_180858a04);
  FUN_180488f10();
  FUN_180488c60();
  cVar1 = FUN_18048b0e0("Ring Appearance",&DAT_180858a04,1);
  auVar3 = ZEXT464(0x43af0000);
  if (cVar1 != '\0') {
    FUN_1805303d0("##wave_appearance",auVar3._0_8_);
  }
  cVar1 = FUN_180488630("##wave_appearance","Ring Appearance",auVar3._0_8_);
  if (cVar1 != '\0') {
    FUN_18053d9a0(&DAT_180b0c560,3);
    FUN_1804aeac0();
  }
  cVar1 = FUN_18048b0e0("Ring Motion",&DAT_180859278,1);
  uVar2 = auVar3._0_8_;
  if (cVar1 != '\0') {
    FUN_1805303d0("##wave_motion",uVar2);
    uVar2 = auVar3._0_8_;
  }
  cVar1 = FUN_180488630("##wave_motion","Ring Motion",uVar2);
  if (cVar1 != '\0') {
    FUN_18053db20(&DAT_180b0c560,3);
    FUN_1804aeac0();
  }
  FUN_180488f10();
  return;
}



