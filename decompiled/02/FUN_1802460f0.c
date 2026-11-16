// FUN_1802460f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802460f0 */

undefined8 FUN_1802460f0(longlong param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  float local_res8;
  float fStackX_c;
  
  if ((*(char *)(param_1 + 0x571) == '\0') && (*(char *)(param_1 + 0x572) == '\0')) {
    uVar2 = FUN_180244af0(*(undefined8 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x50),param_2);
    local_res8 = (float)uVar2;
    fStackX_c = (float)((ulonglong)uVar2 >> 0x20);
    auVar1 = vunpcklps_avx(ZEXT416((uint)(local_res8 - *(float *)(param_1 + 100))),
                           ZEXT416((uint)(fStackX_c - *(float *)(param_1 + 0x68))));
    return auVar1._0_8_;
  }
  auVar1 = vunpcklps_avx(ZEXT816(0),ZEXT816(0));
  return auVar1._0_8_;
}



