// FUN_18017b210 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18017b210 */

undefined8 FUN_18017b210(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uStackX_c;
  
  lVar1 = *param_1;
  if (lVar1 == 86400000000000) {
    uStackX_c = uStackX_c & 0xffffff00;
    return CONCAT44(uStackX_c,86400000);
  }
  if (86399999999999 < lVar1) {
    uStackX_c = CONCAT31(uStackX_c._1_3_,1);
    return CONCAT44(uStackX_c,86400000);
  }
  lVar2 = lVar1 / 1000000;
  if (lVar2 * 1000000 < lVar1) {
    lVar2 = lVar2 + 1;
  }
  uStackX_c = (uint)uStackX_c._1_3_ << 8;
  return CONCAT44(uStackX_c,(int)lVar2);
}



