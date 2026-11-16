// FUN_1805045e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805045e0 */

undefined4 * FUN_1805045e0(undefined4 *param_1,char *param_2,char param_3)

{
  char *pcVar1;
  float fVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  char *pcVar5;
  float fVar6;
  float fVar7;
  float local_res8;
  float local_resc;
  
  lVar4 = DAT_180bb8ae8;
  pcVar5 = param_2;
  if (param_2 != (char *)0xffffffffffffffff) {
    while (*pcVar5 != '\0') {
      pcVar1 = pcVar5 + 1;
      if (((*pcVar5 == '#') && (*pcVar1 == '#')) ||
         (pcVar5 = pcVar1, pcVar1 == (char *)0xffffffffffffffff)) break;
    }
  }
  if (param_2 == pcVar5) {
    fVar6 = 0.0;
    local_resc = *(float *)(DAT_180bb8ae8 + 0x11e0);
  }
  else {
    FUN_1804ea040(&local_res8,*(undefined8 *)(DAT_180bb8ae8 + 0x11d0),
                  *(float *)(DAT_180bb8ae8 + 0x11e0),0x7f7fffff,0xbf800000,param_2,pcVar5,pcVar5,0);
    fVar6 = (float)(int)((uint)((float)(int)local_res8 < local_res8) + (int)local_res8);
  }
  fVar2 = *(float *)(lVar4 + 0xcc8);
  if (param_3 == '\0') {
    fVar7 = 1.0;
  }
  else {
    fVar7 = *(float *)(lVar4 + 0xcdc) + *(float *)(lVar4 + 0x11e0);
  }
  auVar3 = vminss_avx(ZEXT416((uint)(fVar7 + *(float *)(lVar4 + 0xcc4) +
                                    *(float *)(lVar4 + 0xcc4) + fVar6)),
                      ZEXT416((uint)(*(float *)(DAT_180bb8ae8 + 0x11e0) * 20.0)));
  *param_1 = auVar3._0_4_;
  param_1[1] = fVar2 + fVar2 + local_resc;
  return param_1;
}



