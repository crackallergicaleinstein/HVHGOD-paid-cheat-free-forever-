// FUN_1804e8b20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804e8b20 */

undefined8 FUN_1804e8b20(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  int iVar4;
  longlong lVar5;
  float fVar6;
  
  if (*(char *)(param_2 + 0x35) == '\0') {
    lVar1 = *(longlong *)(param_2 + 0x90);
    lVar5 = (longlong)*(int *)(lVar1 + 0x24);
    lVar2 = *(longlong *)(lVar1 + 8);
    fVar6 = (*(float *)(lVar1 + 0xa0) * *(float *)(param_3 + 0x14)) / *(float *)(param_2 + 0x74);
    auVar3 = vroundss_avx(ZEXT816(0),
                          ZEXT416((uint)((float)(int)CONCAT11(*(undefined1 *)(lVar5 + 4 + lVar2),
                                                              *(undefined1 *)(lVar5 + 5 + lVar2)) *
                                        fVar6)),2);
    fVar6 = (float)(int)CONCAT11(*(undefined1 *)(lVar5 + 6 + lVar2),
                                 *(undefined1 *)(lVar5 + 7 + lVar2)) * fVar6;
    *(int *)(param_3 + 0x44) = auVar3._0_4_;
    iVar4 = (int)fVar6;
    if ((fVar6 < 0.0) && ((float)iVar4 != fVar6)) {
      iVar4 = iVar4 + -1;
    }
    *(float *)(param_3 + 0x48) = (float)iVar4;
  }
  return 1;
}



