// FUN_1804c3600 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804c3600 */

undefined8 FUN_1804c3600(undefined8 *param_1,undefined8 *param_2,char param_3)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  float local_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  
  local_38 = (float)*param_1;
  fStack_34 = (float)((ulonglong)*param_1 >> 0x20);
  local_30 = (float)*param_2;
  fStack_2c = (float)((ulonglong)*param_2 >> 0x20);
  if (param_3 != '\0') {
    lVar1 = *(longlong *)(DAT_180bb8ae8 + 0x14d0);
    auVar2 = vmaxss_avx(ZEXT416((uint)local_38),ZEXT416(*(uint *)(lVar1 + 0x268)));
    local_38 = auVar2._0_4_;
    auVar2 = vmaxss_avx(ZEXT416((uint)fStack_34),ZEXT416(*(uint *)(lVar1 + 0x26c)));
    fStack_34 = auVar2._0_4_;
    auVar2 = vminss_avx(ZEXT416((uint)local_30),ZEXT416(*(uint *)(lVar1 + 0x270)));
    local_30 = auVar2._0_4_;
    auVar2 = vminss_avx(ZEXT416((uint)fStack_2c),ZEXT416(*(uint *)(lVar1 + 0x274)));
    fStack_2c = auVar2._0_4_;
  }
  if (local_38 - *(float *)(DAT_180bb8ae8 + 0xcec) <= *(float *)(DAT_180bb8ae8 + 0x110)) {
    if (((fStack_34 - *(float *)(DAT_180bb8ae8 + 0xcf0) <= *(float *)(DAT_180bb8ae8 + 0x114)) &&
        (*(float *)(DAT_180bb8ae8 + 0x110) < *(float *)(DAT_180bb8ae8 + 0xcec) + local_30)) &&
       (*(float *)(DAT_180bb8ae8 + 0x114) < *(float *)(DAT_180bb8ae8 + 0xcf0) + fStack_2c)) {
      return 1;
    }
  }
  return 0;
}



