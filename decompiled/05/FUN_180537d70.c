// FUN_180537d70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180537d70 */

void FUN_180537d70(void)

{
  char cVar1;
  undefined1 *local_res8 [4];
  
  FUN_1805302b0("Content");
  FUN_180488c60();
  FUN_1804898a0("Show Active Count",&DAT_180b0d692,&DAT_180829db8,1,0,0);
  FUN_1804898a0("Show Activation Mode",&DAT_180b0d693,&DAT_180829e08,1,0,0);
  cVar1 = FUN_18048b0e0("Visible Entries",&DAT_180829e04,1);
  if (cVar1 != '\0') {
    FUN_1805303d0("##hud_entries",0x43af0000);
  }
  FUN_180488f10();
  cVar1 = FUN_180488630("##hud_entries","Visible Entries",0x43af0000);
  if (cVar1 != '\0') {
    FUN_1805302b0("Select which features can appear in Active Keybinds.");
    FUN_180536d60();
    FUN_1804aeac0();
  }
  local_res8[0] = &DAT_180b0d5f0;
  FUN_180488c60();
  FUN_180537f90(local_res8);
  FUN_180488f10();
  cVar1 = FUN_180488630("##hud_appearance","Keybinds Appearance",0x43a70000);
  if (cVar1 == '\0') {
    return;
  }
  FUN_180488c60();
  FUN_1805367d0("Entry Text Color",&DAT_180b0d680,&DAT_180829db8,1,1);
  FUN_1805367d0("Title Color",&DAT_180b0d684,&DAT_180829dc4,1,1);
  FUN_180488f10();
  FUN_180488c60();
  FUN_1804898a0("Panel Background",&DAT_180b0d690,&DAT_18082a240,1,0,0);
  FUN_1804898a0("Background Blur",&DAT_180b0d691,&DAT_18082a260,DAT_180b0d690,0,0);
  FUN_1805367d0("Background Color",&DAT_180b0d688,&DAT_18082a268,DAT_180b0d690,1);
  FUN_1805367d0("Border Color",&DAT_180b0d68c,&DAT_18082a288,DAT_180b0d690,1);
  FUN_180488f10();
  FUN_1804aeac0();
  return;
}



