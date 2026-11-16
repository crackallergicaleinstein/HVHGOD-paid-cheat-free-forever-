// FUN_1801b98e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801b98e0 */

void FUN_1801b98e0(undefined8 *param_1,undefined1 (*param_2) [32],undefined1 (*param_3) [32])

{
  undefined1 auVar1 [32];
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  undefined1 (*pauVar6) [32];
  undefined1 (*pauVar7) [32];
  undefined1 (*pauVar8) [32];
  undefined1 (*pauVar9) [32];
  undefined1 (*pauVar10) [32];
  undefined1 (*pauVar11) [32];
  undefined1 (*pauVar12) [32];
  longlong lVar13;
  
  pauVar7 = param_2 + ((longlong)param_3 - (longlong)param_2 >> 6);
  lVar13 = (longlong)param_3 + (-0x20 - (longlong)param_2) >> 5;
  if (lVar13 < 0x29) {
    pauVar12 = param_3 + -1;
    pauVar6 = param_2;
  }
  else {
    lVar13 = lVar13 + 1 >> 3;
    FUN_1801bc970(param_2,param_2 + lVar13,param_2 + lVar13 * 2);
    FUN_1801bc970(pauVar7 + -lVar13,pauVar7,pauVar7 + lVar13);
    pauVar12 = param_3 + (-1 - lVar13);
    FUN_1801bc970(param_3 + lVar13 * -2 + -1,pauVar12,param_3 + -1);
    pauVar6 = param_2 + lVar13;
  }
  FUN_1801bc970(pauVar6,pauVar7,pauVar12);
  pauVar6 = pauVar7;
  while (pauVar12 = pauVar6, param_2 < pauVar12) {
    pauVar6 = pauVar12 + -1;
    cVar5 = FUN_180114040(pauVar6,pauVar12);
    if ((cVar5 < '\0') || (cVar5 = FUN_180114040(pauVar12,pauVar6), cVar5 < '\0')) break;
  }
  do {
    pauVar7 = pauVar7 + 1;
    pauVar6 = pauVar7;
    pauVar9 = pauVar12;
    if (param_3 <= pauVar7) break;
    cVar5 = FUN_180114040(pauVar7,pauVar12);
    if ((cVar5 < '\0') || (cVar5 = FUN_180114040(pauVar12,pauVar7), cVar5 < '\0')) break;
  } while( true );
joined_r0x0001801b99f3:
  pauVar8 = pauVar9;
  pauVar11 = pauVar6;
  pauVar6 = pauVar12;
  if (param_3 <= pauVar7) {
joined_r0x0001801b9a46:
    for (; param_2 < pauVar12; pauVar12 = pauVar12 + -1) {
      pauVar10 = pauVar6 + -1;
      cVar5 = FUN_180114040(pauVar10,pauVar8);
      pauVar9 = pauVar8;
      if (-1 < cVar5) {
        cVar5 = FUN_180114040(pauVar8,pauVar10);
        if (cVar5 < '\0') break;
        pauVar9 = pauVar8 + -1;
        if (pauVar9 != pauVar10) {
          uVar2 = *(undefined8 *)(pauVar6[-1] + 8);
          uVar3 = *(undefined8 *)(pauVar6[-1] + 0x10);
          uVar4 = *(undefined8 *)(pauVar6[-1] + 0x18);
          auVar1 = *pauVar9;
          *(undefined8 *)*pauVar9 = *(undefined8 *)*pauVar10;
          *(undefined8 *)(pauVar8[-1] + 8) = uVar2;
          *(undefined8 *)(pauVar8[-1] + 0x10) = uVar3;
          *(undefined8 *)(pauVar8[-1] + 0x18) = uVar4;
          *pauVar10 = auVar1;
        }
      }
      pauVar8 = pauVar9;
      pauVar6 = pauVar10;
    }
    if (pauVar12 == param_2) {
      if (pauVar7 == param_3) {
        *param_1 = pauVar8;
        param_1[1] = pauVar11;
        return;
      }
      if ((pauVar11 != pauVar7) && (pauVar8 != pauVar11)) {
        uVar2 = *(undefined8 *)(*pauVar11 + 8);
        uVar3 = *(undefined8 *)(*pauVar11 + 0x10);
        uVar4 = *(undefined8 *)(*pauVar11 + 0x18);
        auVar1 = *pauVar8;
        *(undefined8 *)*pauVar8 = *(undefined8 *)*pauVar11;
        *(undefined8 *)(*pauVar8 + 8) = uVar2;
        *(undefined8 *)(*pauVar8 + 0x10) = uVar3;
        *(undefined8 *)(*pauVar8 + 0x18) = uVar4;
        *pauVar11 = auVar1;
      }
      if (pauVar8 != pauVar7) {
        uVar2 = *(undefined8 *)(*pauVar7 + 8);
        uVar3 = *(undefined8 *)(*pauVar7 + 0x10);
        uVar4 = *(undefined8 *)(*pauVar7 + 0x18);
        auVar1 = *pauVar8;
        *(undefined8 *)*pauVar8 = *(undefined8 *)*pauVar7;
        *(undefined8 *)(*pauVar8 + 8) = uVar2;
        *(undefined8 *)(*pauVar8 + 0x10) = uVar3;
        *(undefined8 *)(*pauVar8 + 0x18) = uVar4;
        *pauVar7 = auVar1;
      }
      pauVar7 = pauVar7 + 1;
      pauVar6 = pauVar11 + 1;
      pauVar9 = pauVar8 + 1;
    }
    else {
      pauVar10 = pauVar12 + -1;
      if (pauVar7 == param_3) {
        pauVar9 = pauVar8 + -1;
        if (pauVar10 != pauVar9) {
          uVar2 = *(undefined8 *)(pauVar8[-1] + 8);
          uVar3 = *(undefined8 *)(pauVar8[-1] + 0x10);
          uVar4 = *(undefined8 *)(pauVar8[-1] + 0x18);
          auVar1 = *pauVar10;
          *(undefined8 *)*pauVar10 = *(undefined8 *)*pauVar9;
          *(undefined8 *)(pauVar12[-1] + 8) = uVar2;
          *(undefined8 *)(pauVar12[-1] + 0x10) = uVar3;
          *(undefined8 *)(pauVar12[-1] + 0x18) = uVar4;
          *pauVar9 = auVar1;
        }
        pauVar6 = pauVar11 + -1;
        pauVar12 = pauVar10;
        if (pauVar9 != pauVar6) {
          uVar2 = *(undefined8 *)(pauVar11[-1] + 8);
          uVar3 = *(undefined8 *)(pauVar11[-1] + 0x10);
          uVar4 = *(undefined8 *)(pauVar11[-1] + 0x18);
          auVar1 = *pauVar9;
          *(undefined8 *)*pauVar9 = *(undefined8 *)*pauVar6;
          *(undefined8 *)(pauVar8[-1] + 8) = uVar2;
          *(undefined8 *)(pauVar8[-1] + 0x10) = uVar3;
          *(undefined8 *)(pauVar8[-1] + 0x18) = uVar4;
          *pauVar6 = auVar1;
        }
      }
      else {
        if (pauVar7 != pauVar10) {
          uVar2 = *(undefined8 *)(pauVar12[-1] + 8);
          uVar3 = *(undefined8 *)(pauVar12[-1] + 0x10);
          uVar4 = *(undefined8 *)(pauVar12[-1] + 0x18);
          auVar1 = *pauVar7;
          *(undefined8 *)*pauVar7 = *(undefined8 *)*pauVar10;
          *(undefined8 *)(*pauVar7 + 8) = uVar2;
          *(undefined8 *)(*pauVar7 + 0x10) = uVar3;
          *(undefined8 *)(*pauVar7 + 0x18) = uVar4;
          *pauVar10 = auVar1;
        }
        pauVar7 = pauVar7 + 1;
        pauVar6 = pauVar11;
        pauVar12 = pauVar10;
        pauVar9 = pauVar8;
      }
    }
    goto joined_r0x0001801b99f3;
  }
  cVar5 = FUN_180114040(pauVar8,pauVar7);
  if (-1 < cVar5) {
    cVar5 = FUN_180114040(pauVar7,pauVar8);
    if (cVar5 < '\0') goto joined_r0x0001801b9a46;
    if (pauVar11 != pauVar7) {
      uVar2 = *(undefined8 *)(*pauVar7 + 8);
      uVar3 = *(undefined8 *)(*pauVar7 + 0x10);
      uVar4 = *(undefined8 *)(*pauVar7 + 0x18);
      auVar1 = *pauVar11;
      *(undefined8 *)*pauVar11 = *(undefined8 *)*pauVar7;
      *(undefined8 *)(*pauVar11 + 8) = uVar2;
      *(undefined8 *)(*pauVar11 + 0x10) = uVar3;
      *(undefined8 *)(*pauVar11 + 0x18) = uVar4;
      *pauVar7 = auVar1;
    }
    pauVar11 = pauVar11 + 1;
  }
  pauVar7 = pauVar7 + 1;
  pauVar6 = pauVar11;
  pauVar9 = pauVar8;
  goto joined_r0x0001801b99f3;
}



