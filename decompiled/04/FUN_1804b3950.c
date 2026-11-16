// FUN_1804b3950 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804b3950 */

void FUN_1804b3950(longlong param_1,undefined8 param_2,char *param_3,char *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  bool bVar6;
  longlong lVar7;
  longlong lVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  char *pcVar12;
  char *pcVar13;
  longlong lVar14;
  
  lVar2 = DAT_180bb8ae8;
  lVar14 = -1;
  pcVar12 = (char *)0xffffffffffffffff;
  if (param_4 != (char *)0x0) {
    pcVar12 = param_4;
  }
  pcVar13 = param_3;
  if (param_3 < pcVar12) {
    while (*pcVar13 != '\0') {
      if (((*pcVar13 == '#') && (pcVar13[1] == '#')) || (pcVar13 = pcVar13 + 1, pcVar12 <= pcVar13))
      break;
    }
  }
  if ((int)pcVar13 == (int)param_3) {
    return;
  }
  FUN_1804b3670(*(undefined8 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x2c8),param_1,param_2,
                param_3,pcVar13,param_5,param_6,param_7);
  lVar7 = DAT_180bb8ae8;
  if (*(char *)(lVar2 + 0x2840) == '\0') {
    return;
  }
  lVar2 = *(longlong *)(DAT_180bb8ae8 + 0x2868);
  lVar3 = *(longlong *)(DAT_180bb8ae8 + 0x2870);
  lVar4 = *(longlong *)(DAT_180bb8ae8 + 0x14d0);
  *(undefined8 *)(DAT_180bb8ae8 + 0x2870) = 0;
  *(undefined8 *)(lVar7 + 0x2868) = 0;
  pcVar12 = param_3;
  if (pcVar13 == (char *)0x0) {
    do {
      pcVar13 = pcVar12;
      if ((pcVar13 == (char *)0xffffffffffffffff) || (*pcVar13 == '\0')) break;
      pcVar12 = pcVar13 + 1;
    } while ((*pcVar13 != '#') || (*pcVar12 != '#'));
  }
  if ((param_1 == 0) ||
     (auVar5 = vmaxss_avx(ZEXT416(*(uint *)(lVar7 + 0xcc8)),ZEXT416(*(uint *)(lVar7 + 0xcd8))),
     *(float *)(param_1 + 4) <= auVar5._0_4_ + *(float *)(lVar7 + 0x2878) + 1.0)) {
    bVar6 = false;
    if (param_1 == 0) goto LAB_1804b3ac9;
  }
  else {
    bVar6 = true;
  }
  *(float *)(lVar7 + 0x2878) = *(float *)(param_1 + 4);
  if (bVar6) {
    FUN_1804cda40(&DAT_18085b098);
    *(undefined1 *)(lVar7 + 0x2841) = 1;
  }
LAB_1804b3ac9:
  if (lVar2 != 0) {
    lVar8 = -1;
    do {
      pcVar12 = (char *)(lVar2 + 1 + lVar8);
      lVar8 = lVar8 + 1;
    } while (*pcVar12 != '\0');
    FUN_1804cda80(param_1,lVar2,lVar8 + lVar2);
  }
  iVar1 = *(int *)(lVar4 + 0x1a0);
  iVar10 = *(int *)(lVar7 + 0x287c);
  if (iVar1 < *(int *)(lVar7 + 0x287c)) {
    *(int *)(lVar7 + 0x287c) = iVar1;
    iVar10 = iVar1;
  }
  iVar1 = *(int *)(lVar4 + 0x1a0);
  while( true ) {
    pcVar9 = (char *)FUN_18063b630(param_3,10,(longlong)pcVar13 - (longlong)param_3);
    pcVar12 = pcVar13;
    if (pcVar9 != (char *)0x0) {
      pcVar12 = pcVar9;
    }
    if ((param_3 == pcVar12) && (pcVar12 == pcVar13)) break;
    iVar11 = (iVar1 - iVar10) * 4;
    if (*(char *)(lVar7 + 0x2841) == '\0') {
      iVar11 = 1;
    }
    FUN_1804cda40("%*s%.*s",iVar11,&PTR_180700558,(int)pcVar12 - (int)param_3,param_3);
    *(undefined1 *)(lVar7 + 0x2841) = 0;
    if (*pcVar12 == '\n') {
      FUN_1804cda40(&DAT_18085b098);
      *(undefined1 *)(lVar7 + 0x2841) = 1;
    }
    if (pcVar12 == pcVar13) break;
    param_3 = pcVar12 + 1;
  }
  if (lVar3 != 0) {
    do {
      pcVar12 = (char *)(lVar3 + 1 + lVar14);
      lVar14 = lVar14 + 1;
    } while (*pcVar12 != '\0');
    FUN_1804cda80(param_1,lVar3,lVar14 + lVar3);
  }
  return;
}



