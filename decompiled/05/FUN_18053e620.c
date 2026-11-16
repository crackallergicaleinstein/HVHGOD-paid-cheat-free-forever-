// FUN_18053e620 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18053e620 */

void FUN_18053e620(void)

{
  undefined4 uVar1;
  
  FUN_180488c60();
  FUN_1805367d0("Weapon Icon Color",&DAT_180b0b430,&DAT_180829fa4,1,1);
  FUN_1805367d0("Label Background",&DAT_180b0b434,&DAT_18082a240,1,1);
  FUN_1805367d0("Label Border",&DAT_180b0b438,&DAT_18082a288,1,1);
  FUN_180488f10();
  FUN_180488c60();
  FUN_18048a250("Icon Scale",&DAT_180b0b43c,0x3f400000,0x3fc00000,"%.2fx",0x3d4ccccd,1,
                &DAT_18082a254);
  uVar1 = 0x3f800000;
  FUN_18048a250("Icon Spacing",&DAT_180b0b440,0,0x41000000,"%.0f px",0x3f800000,1,&DAT_18082a298);
  FUN_18048a250("Inactive Opacity",&DAT_180b0b444,0,0x42c80000,"%.0f%%",uVar1,1,&DAT_18082a260);
  FUN_180488f10();
  return;
}



