// FUN_180540c80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180540c80 */

void FUN_180540c80(void)

{
  undefined1 auVar1 [64];
  char *pcVar2;
  ulonglong uVar3;
  undefined8 in_stack_ffffffffffffffc0;
  undefined4 uVar4;
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffffc0 >> 0x20);
  FUN_180488c60();
  auVar1 = ZEXT464(0x3dcccccd);
  FUN_18048a250("Wind Strength",&DAT_180cc8dc0,0,0x40a00000,&DAT_180829c18,
                CONCAT44(uVar4,0x3dcccccd),1,&DAT_180858a00);
  FUN_18048a250("Wind Direction",&DAT_180cc8dc4,0,0x43b40000,"%.0f deg",0x3f800000,1,&DAT_180829a4c)
  ;
  FUN_18048a250("Gust Strength",&DAT_180cc8dc8,0,0x40a00000,&DAT_180829c18,auVar1._0_4_,1,
                &DAT_180858a00);
  pcVar2 = "%.1fx";
  FUN_18048a250("Gust Speed",&DAT_180cc8dcc,auVar1._0_8_,0x40400000,"%.1fx",auVar1._0_4_,1,
                &DAT_18082a274);
  FUN_180488f10();
  FUN_180488c60();
  uVar3 = (ulonglong)pcVar2 & 0xffffffffffffff00;
  FUN_1804898a0("Affect Snow",&DAT_180cc8dd0,&DAT_18085d5b0,1,uVar3,0);
  FUN_1804898a0("Affect Stars",&DAT_180cc8dd1,&DAT_180858a0c,1,uVar3 & 0xffffffffffffff00,0);
  FUN_180488f10();
  FUN_1805302b0("Wind affects supported foliage and rain. Snow and stars can opt in separately.");
  return;
}



