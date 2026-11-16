// FUN_180616ff8 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180616ff8 */

ulonglong FUN_180616ff8(longlong param_1,longlong *param_2,uint param_3,byte param_4)

{
  longlong lVar1;
  undefined1 *puVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined4 *puVar6;
  char *pcVar7;
  uint uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  byte bVar12;
  char cVar13;
  ulonglong uVar14;
  
  lVar1 = *param_2;
  if ((lVar1 == 0) || (param_2[3] == 0)) {
    puVar6 = (undefined4 *)FUN_18060fe00();
    *puVar6 = 0x16;
    FUN_18060aad4();
LAB_180617077:
    puVar2 = (undefined1 *)param_2[3];
    if ((puVar2 != (undefined1 *)0x0) && (param_2[2] == 0)) {
      *puVar2 = 0;
    }
    return 0;
  }
  if ((param_3 != 0) && (0x22 < param_3 - 2)) {
    *(undefined1 *)(param_1 + 0x30) = 1;
    *(undefined4 *)(param_1 + 0x2c) = 0x16;
    FUN_18060aa1c(0,0,0,0,0,param_1);
    goto LAB_180617077;
  }
  lVar3 = param_2[2];
  uVar14 = lVar3 + 1;
  param_2[2] = uVar14;
  if (((param_2[1] == 0) || (uVar14 <= (ulonglong)param_2[1])) &&
     (pcVar7 = *(char **)(lVar1 + 0x10), pcVar7 != *(char **)(lVar1 + 8))) {
    cVar4 = *pcVar7;
    *(char **)(lVar1 + 0x10) = pcVar7 + 1;
  }
  else {
    cVar4 = '\0';
  }
  if (*(char *)(param_1 + 0x28) == '\0') {
    FUN_18060e230();
  }
  while (iVar5 = FUN_18060f970(cVar4,8,param_1 + 0x18), iVar5 != 0) {
    lVar1 = param_2[2];
    param_2[2] = lVar1 + 1U;
    if ((param_2[1] == 0) || (lVar1 + 1U <= (ulonglong)param_2[1])) {
      lVar1 = *param_2;
      pcVar7 = *(char **)(lVar1 + 0x10);
      if (pcVar7 == *(char **)(lVar1 + 8)) goto LAB_1806170ee;
      cVar4 = *pcVar7;
      *(char **)(lVar1 + 0x10) = pcVar7 + 1;
    }
    else {
LAB_1806170ee:
      cVar4 = '\0';
    }
  }
  bVar12 = param_4 | 2;
  if (cVar4 != '-') {
    bVar12 = param_4;
  }
  if ((cVar4 - 0x2bU & 0xfd) == 0) {
    lVar1 = param_2[2];
    param_2[2] = lVar1 + 1U;
    if ((param_2[1] == 0) || (lVar1 + 1U <= (ulonglong)param_2[1])) {
      lVar1 = *param_2;
      pcVar7 = *(char **)(lVar1 + 0x10);
      if (pcVar7 != *(char **)(lVar1 + 8)) {
        cVar4 = *pcVar7;
        *(char **)(lVar1 + 0x10) = pcVar7 + 1;
        goto LAB_18061716b;
      }
    }
    cVar4 = '\0';
  }
LAB_18061716b:
  if ((param_3 & 0xffffffef) != 0) goto LAB_180617282;
  if ((byte)(cVar4 - 0x30U) < 10) {
    iVar5 = cVar4 + -0x30;
LAB_1806171b1:
    if (iVar5 == 0) {
      uVar14 = param_2[1];
      uVar10 = param_2[2] + 1;
      param_2[2] = uVar10;
      if ((uVar14 == 0) || (uVar10 <= uVar14)) {
        lVar1 = *param_2;
        pcVar7 = *(char **)(lVar1 + 0x10);
        if (pcVar7 == *(char **)(lVar1 + 8)) goto LAB_1806171df;
        cVar13 = *pcVar7;
        *(char **)(lVar1 + 0x10) = pcVar7 + 1;
        uVar10 = param_2[2];
        uVar14 = param_2[1];
        if ((cVar13 != 'x') && (cVar13 != 'X')) goto LAB_180617202;
        uVar8 = 0x10;
        if (param_3 != 0) {
          uVar8 = param_3;
        }
        param_3 = uVar8;
        param_2[2] = uVar10 + 1;
        if ((uVar14 != 0) && (uVar14 < uVar10 + 1)) {
LAB_18061725c:
          cVar4 = '\0';
          goto LAB_180617282;
        }
        plVar9 = (longlong *)*param_2;
        pcVar7 = (char *)plVar9[2];
        if (pcVar7 == (char *)plVar9[1]) goto LAB_18061725c;
        cVar4 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      }
      else {
LAB_1806171df:
        cVar13 = '\0';
LAB_180617202:
        uVar8 = 8;
        if (param_3 != 0) {
          uVar8 = param_3;
        }
        param_3 = uVar8;
        param_2[2] = uVar10 - 1;
        if (((uVar14 != 0) && (uVar14 < uVar10 - 1)) || ((byte)(cVar13 + 1U) < 2))
        goto LAB_180617282;
        plVar9 = (longlong *)*param_2;
        if (plVar9[2] == *plVar9) goto LAB_180617282;
        pcVar7 = (char *)(plVar9[2] + -1);
      }
      plVar9[2] = (longlong)pcVar7;
      goto LAB_180617282;
    }
  }
  else {
    if ((byte)(cVar4 + 0x9fU) < 0x1a) {
      iVar5 = cVar4 + -0x57;
      goto LAB_1806171b1;
    }
    if ((byte)(cVar4 + 0xbfU) < 0x1a) {
      iVar5 = cVar4 + -0x37;
      goto LAB_1806171b1;
    }
  }
  uVar8 = 10;
  if (param_3 != 0) {
    uVar8 = param_3;
  }
  param_3 = uVar8;
LAB_180617282:
  uVar14 = 0;
  do {
    while( true ) {
      if ((byte)(cVar4 - 0x30U) < 10) {
        uVar8 = (int)cVar4 - 0x30;
      }
      else if ((byte)(cVar4 + 0x9fU) < 0x1a) {
        uVar8 = (int)cVar4 - 0x57;
      }
      else if ((byte)(cVar4 + 0xbfU) < 0x1a) {
        uVar8 = (int)cVar4 - 0x37;
      }
      else {
        uVar8 = 0xffffffff;
      }
      if (param_3 <= uVar8) {
        lVar1 = param_2[2];
        param_2[2] = lVar1 - 1U;
        if (((param_2[1] == 0) || (lVar1 - 1U <= (ulonglong)param_2[1])) && (1 < (byte)(cVar4 + 1U))
           ) {
          plVar9 = (longlong *)*param_2;
          if (plVar9[2] != *plVar9) {
            plVar9[2] = plVar9[2] + -1;
          }
        }
        if ((bVar12 & 8) == 0) {
          if (lVar3 != param_2[2]) {
            *(undefined1 *)param_2[3] = 0;
          }
          if ((undefined1 *)param_2[3] == (undefined1 *)0x0) {
            return 0;
          }
          if (param_2[2] == 0) {
            *(undefined1 *)param_2[3] = 0;
            return 0;
          }
          return 0;
        }
        cVar4 = FUN_18060ebe4(bVar12);
        if (cVar4 == '\0') {
          if ((bVar12 & 2) != 0) {
            uVar14 = -uVar14;
          }
        }
        else {
          *(undefined1 *)(param_1 + 0x30) = 1;
          *(undefined4 *)(param_1 + 0x2c) = 0x22;
          if ((bVar12 & 1) != 0) {
            puVar2 = (undefined1 *)param_2[3];
            if ((bVar12 & 2) == 0) {
              if ((puVar2 != (undefined1 *)0x0) && (param_2[2] == 0)) {
                *puVar2 = 0;
              }
              return 0x7fffffffffffffff;
            }
            if ((puVar2 != (undefined1 *)0x0) && (param_2[2] == 0)) {
              *puVar2 = 0;
            }
            return 0x8000000000000000;
          }
          uVar14 = 0xffffffffffffffff;
        }
        if (((undefined1 *)param_2[3] != (undefined1 *)0x0) && (param_2[2] == 0)) {
          *(undefined1 *)param_2[3] = 0;
        }
        return uVar14;
      }
      uVar10 = (longlong)(int)param_3 * uVar14;
      uVar11 = uVar8 + uVar10;
      lVar1 = param_2[2];
      bVar12 = bVar12 | (uVar11 < uVar10 ||
                        0xffffffffffffffffU / (ulonglong)(longlong)(int)param_3 < uVar14) << 2 | 8U;
      param_2[2] = lVar1 + 1U;
      uVar14 = uVar11;
      if ((param_2[1] == 0) || (lVar1 + 1U <= (ulonglong)param_2[1])) break;
LAB_18061730d:
      cVar4 = '\0';
    }
    lVar1 = *param_2;
    pcVar7 = *(char **)(lVar1 + 0x10);
    if (pcVar7 == *(char **)(lVar1 + 8)) goto LAB_18061730d;
    cVar4 = *pcVar7;
    *(char **)(lVar1 + 0x10) = pcVar7 + 1;
  } while( true );
}



