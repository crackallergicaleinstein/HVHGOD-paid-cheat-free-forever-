// FUN_1800f3780 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800f3780 */

/* WARNING: Type propagation algorithm not settling */

bool FUN_1800f3780(char *param_1,char *param_2)

{
  size_t *psVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  char cVar5;
  undefined1 uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  size_t sVar12;
  bool bVar13;
  bool bVar14;
  double dVar15;
  
  cVar5 = *param_2;
  cVar2 = *param_1;
  if (cVar2 == cVar5) {
    switch(cVar2) {
    case '\0':
      return true;
    case '\x01':
      uVar6 = FUN_18010f160(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_2 + 8));
      return (bool)uVar6;
    case '\x02':
      lVar3 = (*(longlong **)(param_1 + 8))[1];
      lVar11 = **(longlong **)(param_2 + 8);
      lVar10 = **(longlong **)(param_1 + 8);
      if ((((*(longlong **)(param_2 + 8))[1] - lVar11 ^ lVar3 - lVar10) & 0xfffffffffffffff0U) == 0)
      {
        while( true ) {
          if (lVar10 == lVar3) {
            return true;
          }
          cVar5 = FUN_1800f3780(lVar10,lVar11);
          if (cVar5 == '\0') break;
          lVar10 = lVar10 + 0x10;
          lVar11 = lVar11 + 0x10;
        }
      }
      return false;
    case '\x03':
      puVar9 = *(undefined8 **)(param_2 + 8);
      puVar8 = *(undefined8 **)(param_1 + 8);
      psVar1 = puVar9 + 2;
      if (0xf < (ulonglong)puVar9[3]) {
        puVar9 = (undefined8 *)*puVar9;
      }
      sVar12 = puVar8[2];
      if (0xf < (ulonglong)puVar8[3]) {
        puVar8 = (undefined8 *)*puVar8;
      }
      if (sVar12 != *psVar1) {
        return false;
      }
      if (sVar12 == 0) {
        return true;
      }
      iVar7 = memcmp(puVar8,puVar9,sVar12);
      return iVar7 == 0;
    case '\x04':
      return param_1[8] == param_2[8];
    case '\x05':
    case '\x06':
      goto switchD_1800f37b6_caseD_5;
    case '\a':
      dVar15 = *(double *)(param_1 + 8);
      break;
    case '\b':
      puVar9 = *(undefined8 **)(param_1 + 8);
      puVar8 = *(undefined8 **)(param_2 + 8);
      sVar12 = puVar9[1] - (longlong)*puVar9;
      if ((((sVar12 == puVar8[1] - (longlong)*puVar8) &&
           (iVar7 = memcmp((void *)*puVar9,(void *)*puVar8,sVar12), iVar7 == 0)) &&
          (puVar9[3] == puVar8[3])) && (*(char *)(puVar9 + 4) == *(char *)(puVar8 + 4))) {
        return true;
      }
    default:
      return false;
    }
  }
  else if (cVar2 == '\x05') {
    if (cVar5 != '\a') {
      bVar14 = cVar5 == '\x06';
LAB_1800f3a02:
      if (!bVar14) {
LAB_1800f3a08:
        FUN_1801130e0(param_1);
        return false;
      }
switchD_1800f37b6_caseD_5:
      return *(longlong *)(param_1 + 8) == *(longlong *)(param_2 + 8);
    }
    dVar15 = (double)*(longlong *)(param_1 + 8);
  }
  else {
    if (cVar2 == '\a') {
      if (cVar5 == '\x05') {
        bVar13 = NAN(*(double *)(param_1 + 8)) || NAN((double)*(longlong *)(param_2 + 8));
        bVar14 = *(double *)(param_1 + 8) == (double)*(longlong *)(param_2 + 8);
      }
      else {
        if (cVar5 != '\x06') goto LAB_1800f3a08;
        uVar4 = *(ulonglong *)(param_2 + 8);
        if ((longlong)uVar4 < 0) {
          bVar13 = NAN(*(double *)(param_1 + 8)) || NAN((double)uVar4);
          bVar14 = *(double *)(param_1 + 8) == (double)uVar4;
        }
        else {
          bVar13 = NAN(*(double *)(param_1 + 8)) || NAN((double)(longlong)uVar4);
          bVar14 = *(double *)(param_1 + 8) == (double)(longlong)uVar4;
        }
      }
      goto LAB_1800f38c5;
    }
    if (cVar2 != '\x06') goto LAB_1800f3a08;
    if (cVar5 != '\a') {
      bVar14 = cVar5 == '\x05';
      goto LAB_1800f3a02;
    }
    uVar4 = *(ulonglong *)(param_1 + 8);
    if ((longlong)uVar4 < 0) {
      dVar15 = (double)uVar4;
    }
    else {
      dVar15 = (double)(longlong)uVar4;
    }
  }
  bVar13 = NAN(dVar15) || NAN(*(double *)(param_2 + 8));
  bVar14 = dVar15 == *(double *)(param_2 + 8);
LAB_1800f38c5:
  if (bVar13) {
    return false;
  }
  if (bVar14) {
    return true;
  }
  return false;
}



