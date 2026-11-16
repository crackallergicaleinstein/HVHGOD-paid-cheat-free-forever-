// FUN_18033db50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18033db50 */

void FUN_18033db50(longlong *param_1)

{
  longlong *plVar1;
  float fVar2;
  undefined1 local_res8 [32];
  
  plVar1 = (longlong *)FUN_18017bf40(local_res8);
  fVar2 = (float)(*plVar1 - *param_1) / 1e+06;
  if (0.2 < fVar2) {
    DAT_180bda1dc = fVar2 * 0.2 + DAT_180bda1dc * 0.8;
    return;
  }
  DAT_180bda1dc = DAT_180bda1dc * 0.97;
  return;
}



