// FUN_18032b900 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18032b900 */

void FUN_18032b900(longlong *param_1)

{
  longlong *plVar1;
  float fVar2;
  undefined1 local_res8 [32];
  
  plVar1 = (longlong *)FUN_18017bf40(local_res8);
  fVar2 = (float)(*plVar1 - *param_1) / 1e+06;
  if (0.2 < fVar2) {
    DAT_180bda1bc = fVar2 * 0.2 + DAT_180bda1bc * 0.8;
    return;
  }
  DAT_180bda1bc = DAT_180bda1bc * 0.97;
  return;
}



