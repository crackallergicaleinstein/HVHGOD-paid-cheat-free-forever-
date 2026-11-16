// FUN_18028a720 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18028a720 */

void FUN_18028a720(undefined1 (*param_1) [16],undefined8 *param_2,undefined8 *param_3,
                  undefined1 (*param_4) [16])

{
  undefined8 *puVar1;
  undefined1 (*pauVar2) [16];
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined1 (*pauVar9) [16];
  undefined1 (*pauVar10) [16];
  undefined1 (*pauVar11) [16];
  undefined1 (*pauVar12) [16];
  
  pauVar12 = param_4;
  if (param_2 != param_3) {
    lVar7 = (longlong)param_4 - (longlong)param_2;
    puVar8 = param_2 + 2;
    do {
      *pauVar12 = (undefined1  [16])0x0;
      *(undefined8 *)(lVar7 + (longlong)puVar8) = 0;
      *(undefined8 *)(lVar7 + 8 + (longlong)puVar8) = 0;
      uVar3 = puVar8[-1];
      uVar4 = *puVar8;
      uVar5 = puVar8[1];
      *(undefined8 *)*pauVar12 = puVar8[-2];
      *(undefined8 *)((longlong)*pauVar12 + 8) = uVar3;
      *(undefined8 *)pauVar12[1] = uVar4;
      *(undefined8 *)((longlong)pauVar12[1] + 8) = uVar5;
      *(undefined1 *)(puVar8 + -2) = 0;
      *puVar8 = 0;
      puVar8[1] = 0xf;
      *(undefined8 *)(lVar7 + 0x10 + (longlong)puVar8) = puVar8[2];
      pauVar12 = (undefined1 (*) [16])((longlong)pauVar12[2] + 8);
      puVar1 = puVar8 + 3;
      puVar8 = puVar8 + 5;
    } while (puVar1 != param_3);
  }
  pauVar10 = (undefined1 (*) [16])(param_2 + -5);
  pauVar11 = (undefined1 (*) [16])(param_3 + -5);
  if (pauVar11 != pauVar10) {
    FUN_18015c010(pauVar11);
    uVar3 = param_2[-4];
    uVar4 = param_2[-3];
    uVar5 = param_2[-2];
    *(undefined8 *)*pauVar11 = *(undefined8 *)*pauVar10;
    param_3[-4] = uVar3;
    param_3[-3] = uVar4;
    param_3[-2] = uVar5;
    param_2[-3] = 0;
    param_2[-2] = 0xf;
    (*pauVar10)[0] = 0;
  }
  param_3[-1] = param_2[-1];
  pauVar10 = (undefined1 (*) [16])((longlong)pauVar12[-3] + 8);
  pauVar9 = (undefined1 (*) [16])(param_2 + -10);
  do {
    while( true ) {
      pauVar2 = (undefined1 (*) [16])((longlong)pauVar11[-3] + 8);
      cVar6 = FUN_180114040(pauVar10,pauVar9);
      if (cVar6 < '\0') break;
      if (pauVar2 != pauVar10) {
        FUN_18015c010(pauVar2);
        uVar3 = *(undefined8 *)((longlong)*pauVar10 + 8);
        uVar4 = *(undefined8 *)pauVar10[1];
        uVar5 = *(undefined8 *)((longlong)pauVar10[1] + 8);
        *(undefined8 *)*pauVar2 = *(undefined8 *)*pauVar10;
        *(undefined8 *)pauVar11[-2] = uVar3;
        *(undefined8 *)((longlong)pauVar11[-2] + 8) = uVar4;
        *(undefined8 *)pauVar11[-1] = uVar5;
        *(undefined8 *)pauVar10[1] = 0;
        *(undefined8 *)((longlong)pauVar10[1] + 8) = 0xf;
        (*pauVar10)[0] = 0;
      }
      *(undefined8 *)((longlong)pauVar11[-1] + 8) = *(undefined8 *)pauVar10[2];
      pauVar10 = (undefined1 (*) [16])((longlong)pauVar10[-3] + 8);
      if (param_4 == pauVar10) {
        pauVar10 = pauVar11 + -5;
        if (pauVar10 != pauVar9) {
          FUN_18015c010(pauVar10);
          uVar3 = *(undefined8 *)((longlong)*pauVar9 + 8);
          uVar4 = *(undefined8 *)pauVar9[1];
          uVar5 = *(undefined8 *)((longlong)pauVar9[1] + 8);
          *(undefined8 *)*pauVar10 = *(undefined8 *)*pauVar9;
          *(undefined8 *)((longlong)pauVar11[-5] + 8) = uVar3;
          *(undefined8 *)pauVar11[-4] = uVar4;
          *(undefined8 *)((longlong)pauVar11[-4] + 8) = uVar5;
          *(undefined8 *)pauVar9[1] = 0;
          *(undefined8 *)((longlong)pauVar9[1] + 8) = 0xf;
          (*pauVar9)[0] = 0;
        }
        *(undefined8 *)pauVar11[-3] = *(undefined8 *)pauVar9[2];
        FUN_180289660(param_1,pauVar9,pauVar10);
        if (param_1 != param_4) {
          FUN_18015c010(param_1);
          uVar3 = *(undefined8 *)((longlong)*param_4 + 8);
          uVar4 = *(undefined8 *)param_4[1];
          uVar5 = *(undefined8 *)((longlong)param_4[1] + 8);
          *(undefined8 *)*param_1 = *(undefined8 *)*param_4;
          *(undefined8 *)((longlong)*param_1 + 8) = uVar3;
          *(undefined8 *)param_1[1] = uVar4;
          *(undefined8 *)((longlong)param_1[1] + 8) = uVar5;
          *(undefined8 *)param_4[1] = 0;
          *(undefined8 *)((longlong)param_4[1] + 8) = 0xf;
          (*param_4)[0] = 0;
        }
        *(undefined8 *)param_1[2] = *(undefined8 *)param_4[2];
joined_r0x00018028a92c:
        for (; param_4 != pauVar12; param_4 = (undefined1 (*) [16])((longlong)param_4[2] + 8)) {
          FUN_18015c010(param_4);
        }
        return;
      }
      pauVar11 = pauVar2;
    }
    if (pauVar2 != pauVar9) {
      FUN_18015c010(pauVar2);
      uVar3 = *(undefined8 *)((longlong)*pauVar9 + 8);
      uVar4 = *(undefined8 *)pauVar9[1];
      uVar5 = *(undefined8 *)((longlong)pauVar9[1] + 8);
      *(undefined8 *)*pauVar2 = *(undefined8 *)*pauVar9;
      *(undefined8 *)pauVar11[-2] = uVar3;
      *(undefined8 *)((longlong)pauVar11[-2] + 8) = uVar4;
      *(undefined8 *)pauVar11[-1] = uVar5;
      *(undefined8 *)pauVar9[1] = 0;
      *(undefined8 *)((longlong)pauVar9[1] + 8) = 0xf;
      (*pauVar9)[0] = 0;
    }
    *(undefined8 *)((longlong)pauVar11[-1] + 8) = *(undefined8 *)pauVar9[2];
    if (param_1 == pauVar9) {
      pauVar9 = pauVar11 + -5;
      if (pauVar9 != pauVar10) {
        FUN_18015c010(pauVar9);
        uVar3 = *(undefined8 *)((longlong)*pauVar10 + 8);
        uVar4 = *(undefined8 *)pauVar10[1];
        uVar5 = *(undefined8 *)((longlong)pauVar10[1] + 8);
        *(undefined8 *)*pauVar9 = *(undefined8 *)*pauVar10;
        *(undefined8 *)((longlong)pauVar11[-5] + 8) = uVar3;
        *(undefined8 *)pauVar11[-4] = uVar4;
        *(undefined8 *)((longlong)pauVar11[-4] + 8) = uVar5;
        *(undefined8 *)pauVar10[1] = 0;
        *(undefined8 *)((longlong)pauVar10[1] + 8) = 0xf;
        (*pauVar10)[0] = 0;
      }
      *(undefined8 *)pauVar11[-3] = *(undefined8 *)pauVar10[2];
      FUN_180289660(param_4,pauVar10,pauVar9);
      goto joined_r0x00018028a92c;
    }
    pauVar9 = (undefined1 (*) [16])((longlong)pauVar9[-3] + 8);
    pauVar11 = pauVar2;
  } while( true );
}



