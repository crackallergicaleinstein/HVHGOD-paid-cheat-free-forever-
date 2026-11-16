// FUN_1802124d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802124d0 */

void FUN_1802124d0(longlong param_1,longlong param_2,ulonglong param_3,short *param_4)

{
  short *psVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  short *psVar10;
  bool bVar11;
  bool bVar12;
  
  lVar9 = (longlong)(param_3 - 1) >> 1;
  lVar7 = param_2;
  while (lVar7 < lVar9) {
    psVar1 = (short *)(param_1 + 0x10 + lVar7 * 0x10);
    sVar2 = psVar1[-4];
    sVar3 = *psVar1;
    bVar12 = SBORROW2(sVar3,sVar2);
    bVar11 = (short)(sVar3 - sVar2) < 0;
    if (sVar3 == sVar2) {
      iVar4 = *(int *)(psVar1 + -2);
      iVar5 = *(int *)(psVar1 + 2);
      bVar12 = SBORROW4(iVar5,iVar4);
      bVar11 = iVar5 - iVar4 < 0;
      if (iVar5 != iVar4) goto LAB_180212538;
      cVar6 = '\0';
    }
    else {
LAB_180212538:
      cVar6 = -1;
      if (bVar12 == bVar11) {
        cVar6 = '\x01';
      }
    }
    psVar10 = psVar1 + -4;
    if (-1 < cVar6) {
      psVar10 = psVar1;
    }
    *(undefined8 *)(param_1 + lVar7 * 8) = *(undefined8 *)psVar10;
    lVar7 = lVar7 * 2 + ((longlong)cVar6 >> 0x3f) + 2;
  }
  lVar8 = lVar7;
  if ((lVar7 == lVar9) && ((param_3 & 1) == 0)) {
    lVar8 = param_3 - 1;
    *(undefined8 *)(param_1 + lVar7 * 8) = *(undefined8 *)(param_1 + -8 + param_3 * 8);
  }
  if (lVar8 <= param_2) {
LAB_1802125e4:
    *(undefined8 *)(param_1 + lVar8 * 8) = *(undefined8 *)param_4;
    return;
  }
  do {
    sVar2 = *param_4;
    lVar7 = lVar8 + -1 >> 1;
    sVar3 = *(short *)(param_1 + lVar7 * 8);
    bVar12 = SBORROW2(sVar3,sVar2);
    bVar11 = (short)(sVar3 - sVar2) < 0;
    if (sVar3 == sVar2) {
      iVar4 = *(int *)(param_4 + 2);
      iVar5 = *(int *)(param_1 + 4 + lVar7 * 8);
      bVar12 = SBORROW4(iVar5,iVar4);
      bVar11 = iVar5 - iVar4 < 0;
      if (iVar5 != iVar4) goto LAB_1802125b1;
      cVar6 = '\0';
    }
    else {
LAB_1802125b1:
      cVar6 = -1;
      if (bVar12 == bVar11) {
        cVar6 = '\x01';
      }
    }
    if (-1 < cVar6) goto LAB_1802125e4;
    *(undefined8 *)(param_1 + lVar8 * 8) = *(undefined8 *)(param_1 + lVar7 * 8);
    lVar8 = lVar7;
    if (lVar7 <= param_2) {
      *(undefined8 *)(param_1 + lVar7 * 8) = *(undefined8 *)param_4;
      return;
    }
  } while( true );
}



