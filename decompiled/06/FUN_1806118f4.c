// FUN_1806118f4 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806118f4 */

ulonglong FUN_1806118f4(longlong *param_1,longlong *param_2,int *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  ulonglong uVar9;
  char cVar10;
  int *piVar11;
  char *pcVar12;
  byte bVar13;
  int local_res10 [2];
  int *local_res18;
  
  pcVar12 = (char *)*param_2;
  local_res18 = param_3;
  if (pcVar12 == (char *)0x0) {
    puVar7 = (undefined4 *)FUN_18060fe00();
    *puVar7 = 0x16;
    FUN_18060aad4();
    return 7;
  }
  cVar10 = *pcVar12;
  *param_2 = (longlong)(pcVar12 + 1);
  local_res10[0] = CONCAT31(local_res10[0]._1_3_,cVar10);
  iVar5 = FUN_18060f970();
  if (iVar5 != 0) {
    do {
      cVar10 = *(char *)*param_2;
      *param_2 = (longlong)((char *)*param_2 + 1);
      local_res10[0] = CONCAT31(local_res10[0]._1_3_,cVar10);
      iVar5 = FUN_18060f970();
    } while (iVar5 != 0);
  }
  *(bool *)(param_3 + 0xc2) = cVar10 == '-';
  if ((cVar10 == '-') || (cVar10 == '+')) {
    cVar10 = *(char *)*param_2;
    *param_2 = (longlong)((char *)*param_2 + 1);
    local_res10[0] = CONCAT31(local_res10[0]._1_3_,cVar10);
  }
  if ((cVar10 == 'I') || (cVar10 == 'i')) {
    uVar9 = FUN_180611db8(local_res10,param_2,pcVar12);
    return uVar9;
  }
  if ((cVar10 + 0xb2U & 0xdf) == 0) {
    uVar9 = FUN_180611efc(local_res10,param_2,pcVar12);
    return uVar9;
  }
  bVar13 = 0;
  if (cVar10 == '0') {
    pcVar8 = (char *)*param_2;
    cVar2 = *pcVar8;
    *param_2 = (longlong)(pcVar8 + 1);
    if ((cVar2 + 0xa8U & 0xdf) == 0) {
      cVar10 = pcVar8[1];
      *param_2 = (longlong)(pcVar8 + 2);
      bVar13 = 1;
      pcVar12 = pcVar8;
    }
    else {
      *param_2 = (longlong)pcVar8;
      if ((cVar2 != '\0') && (*pcVar8 != cVar2)) {
        puVar7 = (undefined4 *)FUN_18060fe00();
        *puVar7 = 0x16;
        FUN_18060aad4();
      }
    }
  }
  param_3 = param_3 + 2;
  local_res10[0] = 0;
  bVar3 = false;
  if (cVar10 == '0') {
    bVar3 = true;
    do {
      cVar10 = *(char *)*param_2;
      *param_2 = (longlong)((char *)*param_2 + 1);
    } while (cVar10 == '0');
  }
  piVar11 = param_3;
  while( true ) {
    if ((byte)(cVar10 - 0x30U) < 10) {
      uVar6 = (int)cVar10 - 0x30;
    }
    else if ((byte)(cVar10 + 0x9fU) < 0x1a) {
      uVar6 = (int)cVar10 - 0x57;
    }
    else if ((byte)(cVar10 + 0xbfU) < 0x1a) {
      uVar6 = (int)cVar10 - 0x37;
    }
    else {
      uVar6 = 0xffffffff;
    }
    if ((-(uint)(bVar13 != 0) & 6) + 9 < uVar6) break;
    bVar3 = true;
    if (piVar11 != local_res18 + 0xc2) {
      *(char *)piVar11 = (char)uVar6;
      piVar11 = (int *)((longlong)piVar11 + 1);
    }
    local_res10[0] = local_res10[0] + 1;
    cVar10 = *(char *)*param_2;
    *param_2 = (longlong)((char *)*param_2 + 1);
  }
  if (cVar10 == *(char *)**(undefined8 **)(*param_1 + 0xf8)) {
    cVar10 = *(char *)*param_2;
    pcVar8 = (char *)*param_2 + 1;
    *param_2 = (longlong)pcVar8;
    if ((piVar11 == param_3) && (cVar10 == '0')) {
      bVar3 = true;
      do {
        cVar10 = *pcVar8;
        local_res10[0] = local_res10[0] + -1;
        pcVar8 = pcVar8 + 1;
        *param_2 = (longlong)pcVar8;
      } while (cVar10 == '0');
    }
    while( true ) {
      if ((cVar10 < '0') || ('9' < cVar10)) {
        if ((byte)(cVar10 + 0x9fU) < 0x1a) {
          uVar6 = (int)cVar10 - 0x57;
        }
        else if ((byte)(cVar10 + 0xbfU) < 0x1a) {
          uVar6 = (int)cVar10 - 0x37;
        }
        else {
          uVar6 = 0xffffffff;
        }
      }
      else {
        uVar6 = (int)cVar10 - 0x30;
      }
      if ((-(uint)(bVar13 != 0) & 6) + 9 < uVar6) break;
      bVar3 = true;
      if (piVar11 != local_res18 + 0xc2) {
        *(char *)piVar11 = (char)uVar6;
        piVar11 = (int *)((longlong)piVar11 + 1);
      }
      cVar10 = *(char *)*param_2;
      *param_2 = (longlong)((char *)*param_2 + 1);
    }
  }
  pcVar8 = (char *)(*param_2 + -1);
  *param_2 = (longlong)pcVar8;
  if (!bVar3) {
    if ((cVar10 != '\0') && (*pcVar8 != cVar10)) {
      puVar7 = (undefined4 *)FUN_18060fe00();
      *puVar7 = 0x16;
      FUN_18060aad4();
    }
    *param_2 = (longlong)pcVar12;
    if (bVar13 == 0) {
      return 7;
    }
    return 2;
  }
  if ((cVar10 != '\0') && (*pcVar8 != cVar10)) {
    puVar7 = (undefined4 *)FUN_18060fe00();
    *puVar7 = 0x16;
    FUN_18060aad4();
  }
  pcVar8 = (char *)*param_2;
  cVar10 = *pcVar8;
  pcVar12 = pcVar8 + 1;
  *param_2 = (longlong)pcVar12;
  if (cVar10 == 'E') {
LAB_180611bcd:
    bVar4 = bVar13 ^ 1;
  }
  else if (cVar10 == 'P') {
LAB_180611bc8:
    bVar4 = bVar13;
  }
  else {
    if (cVar10 == 'e') goto LAB_180611bcd;
    bVar4 = 0;
    if (cVar10 == 'p') goto LAB_180611bc8;
  }
  iVar5 = 0;
  if (bVar4 != 0) {
    cVar2 = *pcVar12;
    pcVar12 = pcVar8 + 2;
    *param_2 = (longlong)pcVar12;
    if ((cVar2 == '+') || (cVar10 = cVar2, cVar2 == '-')) {
      cVar10 = *pcVar12;
      pcVar12 = pcVar8 + 3;
      *param_2 = (longlong)pcVar12;
    }
    bVar3 = false;
    if (cVar10 != '0') goto LAB_180611c2f;
    do {
      cVar10 = *pcVar12;
      pcVar12 = pcVar12 + 1;
      *param_2 = (longlong)pcVar12;
    } while (cVar10 == '0');
    while( true ) {
      bVar3 = true;
LAB_180611c2f:
      if ((cVar10 < '0') || ('9' < cVar10)) {
        if ((byte)(cVar10 + 0x9fU) < 0x1a) {
          uVar6 = (int)cVar10 - 0x57;
        }
        else {
          if (0x19 < (byte)(cVar10 + 0xbfU)) goto LAB_180611c7f;
          uVar6 = (int)cVar10 - 0x37;
        }
      }
      else {
        uVar6 = (int)cVar10 - 0x30;
      }
      if (9 < uVar6) goto LAB_180611c7f;
      bVar3 = true;
      iVar5 = uVar6 + iVar5 * 10;
      if (0x1450 < iVar5) break;
      cVar10 = *pcVar12;
      pcVar12 = pcVar12 + 1;
      *param_2 = (longlong)pcVar12;
    }
    iVar5 = 0x1451;
LAB_180611c7f:
    do {
      if ((byte)(cVar10 - 0x30U) < 10) {
        uVar6 = (int)cVar10 - 0x30;
      }
      else if ((byte)(cVar10 + 0x9fU) < 0x1a) {
        uVar6 = (int)cVar10 - 0x57;
      }
      else {
        if (0x19 < (byte)(cVar10 + 0xbfU)) goto LAB_180611cbc;
        uVar6 = (int)cVar10 - 0x37;
      }
      if (9 < uVar6) goto LAB_180611cbc;
      cVar10 = *pcVar12;
      pcVar12 = pcVar12 + 1;
      *param_2 = (longlong)pcVar12;
    } while( true );
  }
LAB_180611cf2:
  *param_2 = (longlong)(pcVar12 + -1);
  if ((cVar10 != '\0') && (pcVar12[-1] != cVar10)) {
    puVar7 = (undefined4 *)FUN_18060fe00();
    *puVar7 = 0x16;
    FUN_18060aad4();
  }
  if (piVar11 != param_3) {
    do {
      piVar1 = (int *)((longlong)piVar11 + -1);
      if (*(char *)piVar1 != '\0') break;
      piVar11 = piVar1;
    } while (piVar1 != param_3);
    if (piVar11 != param_3) {
      if (0x1450 < iVar5) {
        return 9;
      }
      if (-0x1451 < iVar5) {
        iVar5 = iVar5 + ((-(uint)(bVar13 != 0) & 3) + 1) * local_res10[0];
        if (0x1450 < iVar5) {
          return 9;
        }
        if (-0x1451 < iVar5) {
          *local_res18 = iVar5;
          local_res18[1] = (int)piVar11 - (int)param_3;
          return (ulonglong)bVar13;
        }
      }
      return 8;
    }
  }
  return 2;
LAB_180611cbc:
  if (cVar2 == '-') {
    iVar5 = -iVar5;
  }
  if (!bVar3) {
    *param_2 = (longlong)(pcVar12 + -1);
    if ((cVar10 != '\0') && (pcVar12[-1] != cVar10)) {
      puVar7 = (undefined4 *)FUN_18060fe00();
      *puVar7 = 0x16;
      FUN_18060aad4();
    }
    *param_2 = (longlong)pcVar8;
    pcVar12 = pcVar8 + 1;
    cVar10 = *pcVar8;
  }
  goto LAB_180611cf2;
}



