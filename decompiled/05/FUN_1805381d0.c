// FUN_1805381d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805381d0 */

void FUN_1805381d0(void)

{
  char cVar1;
  undefined1 *local_res8 [4];
  
  FUN_1805302b0("Content");
  FUN_180488c60();
  FUN_1804898a0("Show Title",&DAT_180b0d6f3,&DAT_18082a24c,1,0,0);
  FUN_1804898a0("Show Spectator Count",&DAT_180b0d6f4,&DAT_180829db8,DAT_180b0d6f3,0,0);
  FUN_1804898a0("Show Player Avatars",&DAT_180b0d6f2,&DAT_180829a3c,1,0,0);
  FUN_1804898a0("Show When Empty",&DAT_180b0d6f5,&DAT_180829dc0,1,0,0);
  FUN_180488f10();
  FUN_1805302b0("List layout");
  FUN_180488c60();
  FUN_1804898a0("Sort Names Alphabetically",&DAT_180b0d6f6,&DAT_18082a28c,1,0,0);
  FUN_1804898a0("Compact Rows",&DAT_180b0d6f7,&DAT_180830b44,1,0,0);
  FUN_180488f10();
  local_res8[0] = &DAT_180b0d6cc;
  FUN_180488c60();
  FUN_180538440(local_res8);
  FUN_180488f10();
  cVar1 = FUN_180488630("##hud_appearance","Spectators Appearance",0x43a70000);
  if (cVar1 == '\0') {
    return;
  }
  FUN_180488c60();
  FUN_1805367d0("Player Name Color",&DAT_180b0d6dc,&DAT_18082a250,1,1);
  FUN_1805367d0("Title & Count Color",&DAT_180b0d6e0,&DAT_18082a24c,DAT_180b0d6f3,1);
  FUN_180488f10();
  FUN_180488c60();
  FUN_1804898a0("Panel Background",&DAT_180b0d6f0,&DAT_18082a240,1,0,0);
  FUN_1804898a0("Background Blur",&DAT_180b0d6f1,&DAT_18082a260,DAT_180b0d6f0,0,0);
  FUN_1805367d0("Background Color",&DAT_180b0d6e4,&DAT_18082a268,DAT_180b0d6f0,1);
  FUN_1805367d0("Border Color",&DAT_180b0d6e8,&DAT_18082a288,DAT_180b0d6f0,1);
  FUN_180488f10();
  FUN_1804aeac0();
  return;
}



