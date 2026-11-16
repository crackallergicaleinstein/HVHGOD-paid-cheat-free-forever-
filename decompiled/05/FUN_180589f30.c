// FUN_180589f30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180589f30 */

longlong FUN_180589f30(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = FUN_18057bbb0(&PTR_s_font_format_18066f780);
  if (lVar1 == 0) {
    if ((param_1 != 0) && (*(longlong *)(param_1 + 8) != 0)) {
      plVar2 = (longlong *)FUN_180573a00(*(longlong *)(param_1 + 8),&DAT_18066f8b4);
      if ((plVar2 != (longlong *)0x0) && (*(longlong *)(*plVar2 + 0x18) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000180589f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar1 = (**(code **)(*(longlong *)(*plVar2 + 0x18) + 0x20))(param_1,param_2);
        return lVar1;
      }
    }
    lVar1 = 0;
  }
  return lVar1;
}



