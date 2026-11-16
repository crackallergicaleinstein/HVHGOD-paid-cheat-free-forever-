// FUN_1804bc560 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804bc560 */

void FUN_1804bc560(longlong param_1,float *param_2,float *param_3)

{
  undefined1 auVar1 [16];
  float fVar2;
  
  if ((((*(char *)(param_1 + 0xcf) != '\0') && (*(char *)(param_1 + 0xe8) < '\x01')) &&
      (*(char *)(param_1 + 0xe9) < '\x01')) ||
     (((*(char *)(param_1 + 0xd4) != '\0' && (*(char *)(param_1 + 0xec) == '\0')) &&
      ('\0' < *(char *)(param_1 + 0xeb))))) {
    *(undefined8 *)param_2 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)param_3 = *(undefined8 *)(param_1 + 0x48);
    return;
  }
  fVar2 = *(float *)(param_1 + 0x50);
  if (fVar2 == 0.0) {
    fVar2 = (float)(longlong)(*(float *)(param_1 + 0x130) - *(float *)(param_1 + 0x128));
  }
  *param_2 = fVar2;
  fVar2 = *(float *)(param_1 + 0x54);
  if (fVar2 == 0.0) {
    fVar2 = (float)(longlong)(*(float *)(param_1 + 0x134) - *(float *)(param_1 + 300));
  }
  param_2[1] = fVar2;
  fVar2 = *(float *)(param_1 + 0x50);
  if (fVar2 == 0.0) {
    auVar1 = vmaxss_avx(ZEXT416(*(uint *)(param_1 + 0x130)),ZEXT416(*(uint *)(param_1 + 0x138)));
    fVar2 = (float)(longlong)(auVar1._0_4_ - *(float *)(param_1 + 0x128));
  }
  *param_3 = fVar2;
  fVar2 = *(float *)(param_1 + 0x54);
  if (fVar2 == 0.0) {
    auVar1 = vmaxss_avx(ZEXT416(*(uint *)(param_1 + 0x134)),ZEXT416(*(uint *)(param_1 + 0x13c)));
    fVar2 = (float)(longlong)(auVar1._0_4_ - *(float *)(param_1 + 300));
  }
  param_3[1] = fVar2;
  return;
}



