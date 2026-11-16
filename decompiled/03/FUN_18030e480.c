// FUN_18030e480 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18030e480 */

void FUN_18030e480(void)

{
  undefined8 *local_18;
  undefined8 local_10;
  
  if (DAT_180cc88f0 != '\0') {
    local_18 = &DAT_180b0c168;
    if (0xf < DAT_180b0c180) {
      local_18 = DAT_180b0c168;
    }
    if (DAT_180cc8958 == 9) {
      local_10 = DAT_180b0c178;
      FUN_1802e0770(9,&local_18,DAT_180b0c164);
      return;
    }
    if (((ulonglong)(longlong)DAT_180cc8958 < 10) &&
       ((&PTR_s_sounds_ui_panorama_mainmenu_pres_180800448)[(longlong)DAT_180cc8958 * 2] !=
        (undefined *)0x0)) {
      FUN_1802e04f0((&PTR_s_sounds_ui_panorama_mainmenu_pres_180800448)[(longlong)DAT_180cc8958 * 2]
                    ,DAT_180b0c164);
      return;
    }
  }
  return;
}



