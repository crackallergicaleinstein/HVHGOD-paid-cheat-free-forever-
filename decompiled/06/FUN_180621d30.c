// FUN_180621d30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180621d30 */

void FUN_180621d30(void)

{
  if (DAT_180d06000 == 0) {
    FUN_180621488(0,"AreFileApisANSI",&DAT_1806b1038,&DAT_1806b103c);
  }
  FUN_180621450();
  if (DAT_180d06010 == 0) {
    FUN_180621488(2,"EnumSystemLocalesEx",&DAT_1806b1068,"EnumSystemLocalesEx");
  }
  if (DAT_180d06028 == 0) {
    FUN_180621488(5,"GetDateFormatEx",&DAT_1806b10a0,"GetDateFormatEx");
  }
  if (DAT_180d06050 == 0) {
    FUN_180621488(10,"GetLocaleInfoEx",&DAT_1806b10b8,"GetLocaleInfoEx");
  }
  if (DAT_180d06068 == 0) {
    FUN_180621488(0xd,"GetTimeFormatEx",&DAT_1806b10d0,"GetTimeFormatEx");
  }
  if (DAT_180d06070 == 0) {
    FUN_180621488(0xe,"GetUserDefaultLocaleName",&DAT_1806b10e8,"GetUserDefaultLocaleName");
  }
  if (DAT_180d06088 == 0) {
    FUN_180621488(0x11,"IsValidLocaleName",&DAT_1806b1110,"IsValidLocaleName");
  }
  if (DAT_180d06090 == 0) {
    FUN_180621488(0x12,"LCMapStringEx",&DAT_1806b1130,"LCMapStringEx");
  }
  if (DAT_180d06098 == 0) {
    FUN_180621488(0x13,"LCIDToLocaleName",&DAT_1806b1148,"LCIDToLocaleName");
  }
  if (DAT_180d060a0 == 0) {
    FUN_180621488(0x14,"LocaleNameToLCID",&DAT_1806b1168,"LocaleNameToLCID");
  }
  return;
}



