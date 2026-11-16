// FUN_1802ee0a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802ee0a0 */

undefined8 * FUN_1802ee0a0(undefined8 *param_1,byte *param_2,byte *param_3,uint *param_4)

{
  byte bVar1;
  byte *pbVar2;
  byte bVar3;
  char *pcVar4;
  byte *pbVar5;
  longlong lVar6;
  bool bVar7;
  
  bVar3 = 0;
  if (param_2 != param_3) {
    pbVar5 = param_2;
    if (*param_2 == 0x2d) {
      pbVar5 = param_2 + 1;
      bVar3 = 1;
      if (pbVar5 == param_3) goto LAB_1802ee206;
    }
    bVar1 = *pbVar5 | 0x20;
    if (bVar1 < 0x67) {
      FUN_1802edba0();
      return param_1;
    }
    if (bVar1 == 0x69) {
      pbVar2 = pbVar5;
      for (pcVar4 = "nf"; (pbVar2 = pbVar2 + 1, pbVar2 != param_3 && (*pcVar4 != '\0'));
          pcVar4 = pcVar4 + 1) {
        if ((*pbVar2 | 0x20) != (int)*pcVar4) goto LAB_1802ee149;
      }
      if (*pcVar4 != '\0') {
LAB_1802ee149:
        *(undefined4 *)(param_1 + 1) = 0x16;
        *param_1 = param_2;
        return param_1;
      }
      pbVar2 = pbVar5 + 3;
      for (pcVar4 = "inity"; (pbVar2 != param_3 && (*pcVar4 != '\0')); pcVar4 = pcVar4 + 1) {
        if ((*pbVar2 | 0x20) != (int)*pcVar4) {
          bVar7 = false;
          goto LAB_1802ee19a;
        }
        pbVar2 = pbVar2 + 1;
      }
      bVar7 = *pcVar4 == '\0';
LAB_1802ee19a:
      *param_4 = (uint)bVar3 << 0x1f | 0x7f800000;
      *(undefined4 *)(param_1 + 1) = 0;
      lVar6 = 8;
      if (!bVar7) {
        lVar6 = 3;
      }
      *param_1 = pbVar5 + lVar6;
      return param_1;
    }
    if (bVar1 == 0x6e) {
      FUN_1802edf10();
      return param_1;
    }
  }
LAB_1802ee206:
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = 0x16;
  return param_1;
}



