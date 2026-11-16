// FUN_180538680 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180538680 */

void FUN_180538680(void)

{
  char cVar1;
  undefined1 *local_res8 [4];
  
  FUN_1805302b0("Content");
  FUN_180488c60();
  FUN_1804898a0("Show Bomb Site",&DAT_180b0d6c8,&DAT_180829f9c,1,0,0);
  FUN_1804898a0("Show Estimated Damage",&DAT_180b0d6c7,&DAT_18085d5a4,1,0,0);
  FUN_1804898a0("Show Defuse Progress",&DAT_180b0d6c9,&DAT_180829f98,1,0,0);
  FUN_1804898a0("Show Timer Ring",&DAT_180b0d6c6,&DAT_18085d5a8,1,0,0);
  FUN_180488f10();
  local_res8[0] = &DAT_180b0d698;
  FUN_180488c60();
  FUN_180538910(local_res8);
  FUN_180488f10();
  cVar1 = FUN_180488630("##hud_appearance","Bomb Timer Appearance",0x43a70000);
  if (cVar1 == '\0') {
    return;
  }
  FUN_180488c60();
  FUN_1805367d0("Timer Text Color",&DAT_180b0d6a8,&DAT_18082a278,1,1);
  FUN_1805367d0("Bomb Icon Color",&DAT_180b0d6ac,&DAT_180829f9c,1,1);
  FUN_1805367d0("Danger Color",&DAT_180b0d6b8,&DAT_18082a284,1,1);
  FUN_1805367d0("Timer Ring Color",&DAT_180b0d6c0,&DAT_18085d5a8,1,1);
  FUN_1805367d0("Defuse Countdown Color",&DAT_180b0d6bc,&DAT_180829f98,1,1);
  FUN_1804898a0("Pulse Near Detonation",&DAT_180b0d6ca,&DAT_180858a00,1,0,0);
  FUN_180488f10();
  FUN_180488c60();
  FUN_1804898a0("Panel Background",&DAT_180b0d6c4,&DAT_18082a240,1,0,0);
  FUN_1804898a0("Background Blur",&DAT_180b0d6c5,&DAT_18082a260,DAT_180b0d6c4,0,0);
  FUN_1805367d0("Background Color",&DAT_180b0d6b0,&DAT_18082a268,DAT_180b0d6c4,1);
  FUN_1805367d0("Border Color",&DAT_180b0d6b4,&DAT_18082a288,DAT_180b0d6c4,1);
  FUN_180488f10();
  FUN_1804aeac0();
  return;
}



