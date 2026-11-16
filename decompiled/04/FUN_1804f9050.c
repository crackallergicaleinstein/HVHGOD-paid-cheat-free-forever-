// FUN_1804f9050 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804f9050 */

ulonglong FUN_1804f9050(longlong *param_1,longlong param_2,int param_3)

{
  uint uVar1;
  char *pcVar2;
  longlong lVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 local_res8 [8];
  
  uVar1 = *(uint *)(param_1 + 3);
  uVar10 = (ulonglong)param_3;
  if (*(char *)(param_2 + 0x17) != '\0') {
    return (ulonglong)uVar1;
  }
  if (0.0 < *(float *)(param_1 + 0xd)) {
    pcVar2 = (char *)param_1[4];
    lVar3 = *param_1;
    pcVar7 = pcVar2 + uVar10;
    pcVar4 = pcVar7;
    do {
      pcVar6 = pcVar4;
      if (pcVar6 <= pcVar2) break;
      pcVar4 = pcVar6 + -1;
    } while (pcVar6[-1] != '\n');
    while (pcVar6 < pcVar2 + (int)uVar1) {
      pcVar6 = (char *)FUN_1804e9df0(*(undefined8 *)(lVar3 + 0x11d0),*(undefined4 *)(lVar3 + 0x11e0)
                                     ,pcVar6,pcVar2 + (int)uVar1,(int)param_1[0xd],2);
      uVar10 = (ulonglong)(uint)((int)pcVar6 - (int)param_1[4]);
      if ((pcVar6 == pcVar7) && (*(char *)((longlong)param_1 + 0x77) != '\0')) break;
      if (pcVar7 < pcVar6) goto LAB_1804f9151;
      if (*pcVar6 == '\n') {
        pcVar6 = pcVar6 + 1;
      }
    }
  }
  uVar9 = (uint)uVar10;
  while ((int)uVar9 < (int)uVar1) {
    iVar8 = (int)uVar10;
    pcVar7 = (char *)((longlong)iVar8 + param_1[4]);
    if (*pcVar7 == '\n') break;
    iVar5 = (int)param_1[3];
    if (iVar8 < iVar5) {
      iVar5 = FUN_1804b0e50(local_res8,pcVar7,param_1[4] + (longlong)iVar5);
      uVar9 = iVar8 + iVar5;
    }
    else {
      uVar9 = iVar5 + 1;
    }
    uVar10 = (ulonglong)uVar9;
  }
LAB_1804f9151:
  return uVar10 & 0xffffffff;
}



