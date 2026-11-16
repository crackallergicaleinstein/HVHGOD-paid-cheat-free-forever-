// FUN_1804aaa10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804aaa10 */

ulonglong FUN_1804aaa10(undefined4 param_1,ulonglong param_2,float param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  ulonglong uVar4;
  float fVar5;
  
  pfVar1 = (float *)FUN_1804b15a0(*(undefined8 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x1c0),
                                  param_1,0x7f7fffff);
  fVar5 = *pfVar1;
  if (fVar5 == 3.4028235e+38) {
    *pfVar1 = (float)param_2;
  }
  else {
    uVar4 = param_2;
    fVar2 = (float)FUN_180627ae0(-param_3 * *(float *)(DAT_180bb8ae8 + 0x40));
    fVar3 = (float)uVar4;
    fVar5 = (1.0 - fVar2) * (fVar3 - fVar5) + fVar5;
    *pfVar1 = fVar5;
    param_2 = (ulonglong)(uint)fVar5;
    if (ABS(fVar5 - fVar3) < 0.002) {
      *pfVar1 = fVar3;
      param_2 = uVar4;
    }
  }
  return param_2;
}



