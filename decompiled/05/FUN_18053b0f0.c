// FUN_18053b0f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18053b0f0 */

void FUN_18053b0f0(undefined8 param_1)

{
  char cVar1;
  
  cVar1 = FUN_18048b0e0("Activation Key",&DAT_180829dc4,1);
  if (cVar1 != '\0') {
    FUN_1805303d0("##log_activation",0x43960000);
  }
  cVar1 = FUN_180488630("##log_activation","Activation Key",0x43960000);
  if (cVar1 == '\0') {
    return;
  }
  FUN_1805302b0("Choose a shortcut and how it changes this option.");
  FUN_180488c60();
  FUN_18050e290(param_1);
  FUN_180488f10();
  FUN_1804aeac0();
  return;
}



