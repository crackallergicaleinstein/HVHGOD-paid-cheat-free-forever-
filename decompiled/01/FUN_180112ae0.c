// FUN_180112ae0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180112ae0 */

char * FUN_180112ae0(byte *param_1,char *param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  char cVar10;
  char *pcVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  bool bVar18;
  bool bVar19;
  double dVar20;
  double dVar21;
  undefined1 local_48 [16];
  
  bVar1 = *param_1;
  bVar2 = *param_3;
  if (bVar1 != bVar2) {
    if (bVar1 == 5) {
      if (bVar2 == 7) {
        dVar20 = *(double *)(param_3 + 8);
        dVar21 = (double)*(longlong *)(param_1 + 8);
        if (dVar21 < dVar20) {
LAB_180112e83:
          *param_2 = -1;
          return param_2;
        }
        goto LAB_180112e95;
      }
      if (bVar2 == 6) {
        lVar15 = *(longlong *)(param_3 + 8);
        lVar8 = *(longlong *)(param_1 + 8);
        bVar19 = SBORROW8(lVar8,lVar15);
        bVar18 = lVar8 - lVar15 < 0;
        if (lVar8 == lVar15) {
          *param_2 = '\0';
          return param_2;
        }
        goto LAB_180112d2a;
      }
    }
    else {
      if (bVar1 == 7) {
        if (bVar2 == 5) {
          dVar21 = *(double *)(param_1 + 8);
          dVar20 = (double)*(longlong *)(param_3 + 8);
          if (dVar21 < dVar20) {
            *param_2 = -1;
            return param_2;
          }
        }
        else {
          if (bVar2 != 6) goto LAB_180113029;
          dVar20 = (double)*(ulonglong *)(param_3 + 8);
          dVar21 = *(double *)(param_1 + 8);
          if (dVar21 < dVar20) {
            *param_2 = -1;
            return param_2;
          }
        }
LAB_180112e95:
        if (dVar21 <= dVar20) {
          if (dVar21 == dVar20) {
            *param_2 = '\0';
            return param_2;
          }
LAB_180112ec7:
          *param_2 = -0x80;
          return param_2;
        }
LAB_180112e9b:
        *param_2 = '\x01';
        return param_2;
      }
      if (bVar1 == 6) {
        if (bVar2 == 7) {
          dVar20 = *(double *)(param_3 + 8);
          dVar21 = (double)*(ulonglong *)(param_1 + 8);
          if (dVar21 < dVar20) goto LAB_180112e83;
          if (dVar21 <= dVar20) {
            if (dVar21 == dVar20) {
              *param_2 = '\0';
              return param_2;
            }
            goto LAB_180112ec7;
          }
          goto LAB_180112e9b;
        }
        if (bVar2 == 5) {
          lVar15 = *(longlong *)(param_3 + 8);
          lVar8 = *(longlong *)(param_1 + 8);
          bVar19 = SBORROW8(lVar8,lVar15);
          bVar18 = lVar8 - lVar15 < 0;
          if (lVar8 == lVar15) {
            *param_2 = '\0';
            return param_2;
          }
          goto LAB_180112d2a;
        }
      }
    }
LAB_180113029:
    cVar10 = FUN_1801130e0(param_1,param_3);
    if (cVar10 != '\0') {
switchD_180112b1c_caseD_9:
      *param_2 = -0x80;
      return param_2;
    }
    if ((8 < bVar1) || (8 < (ulonglong)bVar2)) {
      cVar10 = -0x80;
LAB_1801130a2:
      *param_2 = cVar10;
      return param_2;
    }
    bVar18 = (byte)(&DAT_1807005b8)[bVar1] < (byte)(&DAT_1807005b8)[bVar2];
    if ((&DAT_1807005b8)[bVar1] == (&DAT_1807005b8)[bVar2]) {
LAB_18011306c:
      *param_2 = '\0';
      return param_2;
    }
    goto LAB_18011307e;
  }
  switch((ulonglong)bVar1) {
  case 0:
    *param_2 = '\0';
    return param_2;
  case 1:
    puVar4 = (undefined8 *)**(longlong **)(param_3 + 8);
    puVar5 = (undefined8 *)*puVar4;
    puVar6 = (undefined8 *)**(longlong **)(param_1 + 8);
    puVar16 = (undefined8 *)*puVar6;
    do {
      if (puVar16 == puVar6) {
        cVar10 = (puVar5 == puVar4) + -1;
LAB_180112cb0:
        *param_2 = cVar10;
        return param_2;
      }
      if (puVar5 == puVar4) {
        cVar10 = '\x01';
        goto LAB_180112cb0;
      }
      cVar10 = FUN_180114040(puVar16 + 4,puVar5 + 4);
      if (cVar10 != '\0') goto LAB_180112cb0;
      pcVar11 = (char *)FUN_180112ae0(puVar16 + 8,local_48,puVar5 + 8);
      cVar10 = *pcVar11;
      if (cVar10 != '\0') goto LAB_180112cb0;
      puVar7 = (undefined8 *)puVar16[2];
      if (*(char *)((longlong)puVar7 + 0x19) == '\0') {
        cVar10 = *(char *)((longlong)*puVar7 + 0x19);
        puVar16 = puVar7;
        puVar7 = (undefined8 *)*puVar7;
        while (cVar10 == '\0') {
          cVar10 = *(char *)((longlong)*puVar7 + 0x19);
          puVar16 = puVar7;
          puVar7 = (undefined8 *)*puVar7;
        }
      }
      else {
        cVar10 = *(char *)((longlong)puVar16[1] + 0x19);
        puVar9 = (undefined8 *)puVar16[1];
        puVar7 = puVar16;
        while ((puVar16 = puVar9, cVar10 == '\0' && (puVar7 == (undefined8 *)puVar16[2]))) {
          cVar10 = *(char *)((longlong)puVar16[1] + 0x19);
          puVar9 = (undefined8 *)puVar16[1];
          puVar7 = puVar16;
        }
      }
      puVar7 = (undefined8 *)puVar5[2];
      if (*(char *)((longlong)puVar7 + 0x19) == '\0') {
        cVar10 = *(char *)((longlong)*puVar7 + 0x19);
        puVar5 = puVar7;
        puVar7 = (undefined8 *)*puVar7;
        while (cVar10 == '\0') {
          cVar10 = *(char *)((longlong)*puVar7 + 0x19);
          puVar5 = puVar7;
          puVar7 = (undefined8 *)*puVar7;
        }
      }
      else {
        cVar10 = *(char *)((longlong)puVar5[1] + 0x19);
        puVar9 = (undefined8 *)puVar5[1];
        puVar7 = puVar5;
        while ((puVar5 = puVar9, cVar10 == '\0' && (puVar7 == (undefined8 *)puVar5[2]))) {
          cVar10 = *(char *)((longlong)puVar5[1] + 0x19);
          puVar9 = (undefined8 *)puVar5[1];
          puVar7 = puVar5;
        }
      }
    } while( true );
  case 2:
    lVar15 = **(longlong **)(param_1 + 8);
    lVar8 = (*(longlong **)(param_1 + 8))[1];
    lVar13 = **(longlong **)(param_3 + 8);
    lVar3 = (*(longlong **)(param_3 + 8))[1];
    while( true ) {
      if (lVar15 == lVar8) {
        *param_2 = (lVar13 == lVar3) + -1;
        return param_2;
      }
      if (lVar13 == lVar3) break;
      pcVar11 = (char *)FUN_180112ae0(lVar15,local_48,lVar13);
      cVar10 = *pcVar11;
      if (cVar10 != '\0') goto LAB_1801130a2;
      lVar15 = lVar15 + 0x10;
      lVar13 = lVar13 + 0x10;
    }
    break;
  case 3:
    cVar10 = FUN_180114040(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_3 + 8));
    *param_2 = cVar10;
    return param_2;
  case 4:
    bVar18 = param_1[8] < param_3[8];
    if (param_1[8] == param_3[8]) {
      *param_2 = '\0';
      return param_2;
    }
    goto LAB_18011307e;
  case 5:
    lVar15 = *(longlong *)(param_3 + 8);
    lVar8 = *(longlong *)(param_1 + 8);
    bVar19 = SBORROW8(lVar8,lVar15);
    bVar18 = lVar8 - lVar15 < 0;
    if (lVar8 != lVar15) {
LAB_180112d2a:
      cVar10 = -1;
      if (bVar19 == bVar18) {
        cVar10 = '\x01';
      }
      *param_2 = cVar10;
      return param_2;
    }
    goto LAB_18011306c;
  case 6:
    bVar18 = *(ulonglong *)(param_1 + 8) < *(ulonglong *)(param_3 + 8);
    if (*(ulonglong *)(param_1 + 8) == *(ulonglong *)(param_3 + 8)) {
      *param_2 = '\0';
      return param_2;
    }
LAB_18011307e:
    cVar10 = -1;
    if (!bVar18) {
      cVar10 = '\x01';
    }
    *param_2 = cVar10;
    return param_2;
  case 7:
    dVar20 = *(double *)(param_3 + 8);
    dVar21 = *(double *)(param_1 + 8);
    if (dVar21 < dVar20) {
      *param_2 = -1;
      return param_2;
    }
    if (dVar21 <= dVar20) {
      if (dVar21 != dVar20) {
        *param_2 = -0x80;
        return param_2;
      }
      goto LAB_18011306c;
    }
    break;
  case 8:
    lVar15 = **(longlong **)(param_3 + 8);
    lVar8 = **(longlong **)(param_1 + 8);
    uVar17 = (*(longlong **)(param_3 + 8))[1] - lVar15;
    uVar14 = (*(longlong **)(param_1 + 8))[1] - lVar8;
    uVar12 = uVar14;
    if (uVar17 < uVar14) {
      uVar12 = uVar17;
    }
    uVar12 = thunk_FUN_1805f9850(lVar8,lVar15,uVar12);
    if (uVar12 == uVar14) {
      cVar10 = '\0';
      if (uVar12 != uVar17) {
        cVar10 = -1;
      }
      *param_2 = cVar10;
      return param_2;
    }
    if (uVar12 == uVar17) {
      *param_2 = '\x01';
      return param_2;
    }
    if (*(byte *)(uVar12 + lVar8) == *(byte *)(uVar12 + lVar15)) {
      *param_2 = '\0';
      return param_2;
    }
    cVar10 = -1;
    if (*(byte *)(uVar12 + lVar15) <= *(byte *)(uVar12 + lVar8)) {
      cVar10 = '\x01';
    }
    *param_2 = cVar10;
    return param_2;
  default:
    goto switchD_180112b1c_caseD_9;
  }
  *param_2 = '\x01';
  return param_2;
}



