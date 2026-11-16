// FUN_1804f8ed0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804f8ed0 */

ulonglong FUN_1804f8ed0(longlong *param_1,longlong param_2,int param_3)

{
  byte *pbVar1;
  char *pcVar2;
  longlong lVar3;
  char *pcVar4;
  ulonglong uVar5;
  longlong lVar6;
  char *pcVar7;
  uint uVar8;
  ulonglong uVar9;
  char *pcVar10;
  ulonglong uVar11;
  char *pcVar12;
  
  uVar11 = (ulonglong)param_3;
  if (*(char *)(param_2 + 0x17) != '\0') {
    return 0;
  }
  if (0.0 < *(float *)(param_1 + 0xd)) {
    lVar3 = *param_1;
    pcVar4 = (char *)param_1[4];
    pcVar2 = pcVar4 + uVar11;
    pcVar10 = pcVar2;
    if (pcVar4 < pcVar2) {
      do {
        pcVar12 = pcVar10 + -1;
        if (pcVar10[-1] == '\n') break;
        pcVar10 = pcVar12;
      } while (pcVar4 < pcVar12);
    }
    lVar6 = param_1[3];
    pcVar12 = pcVar10;
    do {
      pcVar7 = (char *)FUN_1804e9df0(*(undefined8 *)(lVar3 + 0x11d0),*(undefined4 *)(lVar3 + 0x11e0)
                                     ,pcVar12,pcVar4 + (int)lVar6,(int)param_1[0xd],2);
      if (pcVar12 == pcVar2) {
        uVar11 = (ulonglong)(uint)((int)pcVar10 - (int)param_1[4]);
        goto LAB_1804f901b;
      }
      if (pcVar7 == pcVar2) {
        if (*(char *)(param_1[4] + uVar11) == '\n') goto LAB_1804f8fcd;
        if (*(char *)((longlong)param_1 + 0x77) == '\0') {
          return (ulonglong)(uint)((int)pcVar10 - (int)param_1[4]);
        }
      }
      if (pcVar2 <= pcVar7) {
LAB_1804f8fcd:
        return (ulonglong)(uint)((int)pcVar12 - (int)param_1[4]);
      }
      pcVar12 = pcVar7 + 1;
      if (*pcVar7 != '\n') {
        pcVar12 = pcVar7;
      }
    } while (pcVar10 <= pcVar12);
  }
  if (0 < param_3) {
    uVar5 = param_1[4];
    do {
      uVar9 = (uVar11 & 0xffffffff) + uVar5;
      do {
        if (uVar9 <= uVar5) {
          uVar9 = uVar5;
          break;
        }
        pbVar1 = (byte *)(uVar9 - 1);
        uVar9 = uVar9 - 1;
      } while ((*pbVar1 & 0xc0) == 0x80);
      uVar8 = (int)uVar9 - (int)uVar5;
    } while ((*(char *)((longlong)(int)uVar8 + uVar5) != '\n') &&
            (uVar11 = (ulonglong)uVar8, 0 < (int)uVar8));
  }
  uVar11 = uVar11 & 0xffffffff;
LAB_1804f901b:
  return uVar11;
}



