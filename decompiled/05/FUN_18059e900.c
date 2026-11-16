// FUN_18059e900 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18059e900 */

longlong FUN_18059e900(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = FUN_18057bbb0(&PTR_s_font_format_180670bc0);
  if (lVar1 == 0) {
    if ((param_1 != 0) && (*(longlong *)(param_1 + 8) != 0)) {
      plVar2 = (longlong *)FUN_180573a00(*(longlong *)(param_1 + 8),&DAT_18066f8b4);
      if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00018059e957. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar1 = (**(code **)(*plVar2 + 0x30))(plVar2,param_2,*(code **)(*plVar2 + 0x30));
        return lVar1;
      }
    }
    lVar1 = 0;
  }
  return lVar1;
}



