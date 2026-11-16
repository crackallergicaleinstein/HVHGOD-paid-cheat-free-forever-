// FUN_1804cda80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804cda80 */

void FUN_1804cda80(longlong param_1,char *param_2,char *param_3)

{
  int iVar1;
  char *pcVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  char *pcVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  char *pcVar12;
  float fVar13;
  
  fVar13 = 1.0;
  do {
    lVar6 = DAT_180bb8ae8;
    lVar9 = *(longlong *)(DAT_180bb8ae8 + 0x2868);
    pcVar2 = *(char **)(DAT_180bb8ae8 + 0x2870);
    lVar3 = *(longlong *)(DAT_180bb8ae8 + 0x14d0);
    *(undefined8 *)(DAT_180bb8ae8 + 0x2870) = 0;
    *(undefined8 *)(lVar6 + 0x2868) = 0;
    if ((param_3 == (char *)0x0) && (param_3 = param_2, param_2 != (char *)0xffffffffffffffff)) {
      while (*param_3 != '\0') {
        pcVar12 = param_3 + 1;
        if (((*param_3 == '#') && (*pcVar12 == '#')) ||
           (param_3 = pcVar12, pcVar12 == (char *)0xffffffffffffffff)) break;
      }
    }
    if ((param_1 == 0) ||
       (auVar4 = vmaxss_avx(ZEXT416(*(uint *)(lVar6 + 0xcc8)),ZEXT416(*(uint *)(lVar6 + 0xcd8))),
       *(float *)(param_1 + 4) <= auVar4._0_4_ + *(float *)(lVar6 + 0x2878) + fVar13)) {
      bVar5 = false;
      if (param_1 != 0) goto LAB_1804cdb4f;
    }
    else {
      bVar5 = true;
LAB_1804cdb4f:
      *(float *)(lVar6 + 0x2878) = *(float *)(param_1 + 4);
      if (bVar5) {
        FUN_1804cda40(&DAT_18085b098);
        *(undefined1 *)(lVar6 + 0x2841) = 1;
      }
    }
    if (lVar9 != 0) {
      lVar7 = -1;
      do {
        pcVar12 = (char *)(lVar9 + 1 + lVar7);
        lVar7 = lVar7 + 1;
      } while (*pcVar12 != '\0');
      FUN_1804cda80(param_1,lVar9,lVar7 + lVar9);
    }
    iVar1 = *(int *)(lVar3 + 0x1a0);
    iVar10 = *(int *)(lVar6 + 0x287c);
    if (iVar1 < *(int *)(lVar6 + 0x287c)) {
      *(int *)(lVar6 + 0x287c) = iVar1;
      iVar10 = iVar1;
    }
    iVar1 = *(int *)(lVar3 + 0x1a0);
    while( true ) {
      pcVar8 = (char *)FUN_18063b630(param_2,10,(longlong)param_3 - (longlong)param_2);
      pcVar12 = param_3;
      if (pcVar8 != (char *)0x0) {
        pcVar12 = pcVar8;
      }
      if ((param_2 == pcVar12) && (pcVar12 == param_3)) break;
      iVar11 = (iVar1 - iVar10) * 4;
      if (*(char *)(lVar6 + 0x2841) == '\0') {
        iVar11 = 1;
      }
      FUN_1804cda40("%*s%.*s",iVar11,&PTR_180700558,(int)pcVar12 - (int)param_2,param_2);
      *(undefined1 *)(lVar6 + 0x2841) = 0;
      if (*pcVar12 == '\n') {
        FUN_1804cda40();
        *(undefined1 *)(lVar6 + 0x2841) = 1;
      }
      if (pcVar12 == param_3) break;
      param_2 = pcVar12 + 1;
    }
    if (pcVar2 == (char *)0x0) {
      return;
    }
    lVar9 = -1;
    do {
      lVar3 = lVar9 + 1;
      lVar9 = lVar9 + 1;
    } while (pcVar2[lVar3] != '\0');
    param_3 = pcVar2 + lVar9;
    param_2 = pcVar2;
  } while( true );
}



