// FUN_1802c2f60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802c2f60 */

void FUN_1802c2f60(undefined1 (*param_1) [16],undefined8 *param_2,undefined8 *param_3,
                  undefined1 (*param_4) [16])

{
  undefined8 *puVar1;
  undefined1 (*pauVar2) [16];
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte bVar7;
  byte bVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined1 (*pauVar11) [16];
  undefined1 (*pauVar12) [16];
  undefined1 (*pauVar13) [16];
  undefined1 (*pauVar14) [16];
  
  pauVar14 = param_4;
  if (param_2 != param_3) {
    lVar9 = (longlong)param_4 - (longlong)param_2;
    puVar10 = param_2 + 2;
    do {
      *pauVar14 = (undefined1  [16])0x0;
      *(undefined8 *)(lVar9 + (longlong)puVar10) = 0;
      *(undefined8 *)(lVar9 + 8 + (longlong)puVar10) = 0;
      uVar4 = puVar10[-1];
      uVar5 = *puVar10;
      uVar6 = puVar10[1];
      *(undefined8 *)*pauVar14 = puVar10[-2];
      *(undefined8 *)((longlong)*pauVar14 + 8) = uVar4;
      *(undefined8 *)pauVar14[1] = uVar5;
      *(undefined8 *)((longlong)pauVar14[1] + 8) = uVar6;
      *(undefined1 *)(puVar10 + -2) = 0;
      *puVar10 = 0;
      puVar10[1] = 0xf;
      *(undefined4 *)(lVar9 + 0x10 + (longlong)puVar10) = *(undefined4 *)(puVar10 + 2);
      pauVar14 = (undefined1 (*) [16])((longlong)pauVar14[2] + 8);
      puVar1 = puVar10 + 3;
      puVar10 = puVar10 + 5;
    } while (puVar1 != param_3);
  }
  pauVar12 = (undefined1 (*) [16])(param_2 + -5);
  pauVar13 = (undefined1 (*) [16])(param_3 + -5);
  if (pauVar13 != pauVar12) {
    FUN_18015c010(pauVar13);
    uVar4 = param_2[-4];
    uVar5 = param_2[-3];
    uVar6 = param_2[-2];
    *(undefined8 *)*pauVar13 = *(undefined8 *)*pauVar12;
    param_3[-4] = uVar4;
    param_3[-3] = uVar5;
    param_3[-2] = uVar6;
    param_2[-3] = 0;
    param_2[-2] = 0xf;
    (*pauVar12)[0] = 0;
  }
  *(undefined4 *)(param_3 + -1) = *(undefined4 *)(param_2 + -1);
  pauVar12 = (undefined1 (*) [16])((longlong)pauVar14[-3] + 8);
  pauVar11 = (undefined1 (*) [16])(param_2 + -10);
  do {
    while( true ) {
      iVar3 = *(int *)pauVar12[2];
      if ((iVar3 == 2) || (iVar3 - 3U < 4)) {
        bVar8 = 0;
      }
      else {
        bVar8 = (iVar3 != 1) + 1;
      }
      iVar3 = *(int *)pauVar11[2];
      if ((iVar3 == 2) || (iVar3 - 3U < 4)) {
        bVar7 = 0;
      }
      else {
        bVar7 = (iVar3 != 1) + 1;
      }
      pauVar2 = (undefined1 (*) [16])((longlong)pauVar13[-3] + 8);
      if (bVar7 <= bVar8) break;
      if (pauVar2 != pauVar11) {
        FUN_18015c010(pauVar2);
        uVar4 = *(undefined8 *)((longlong)*pauVar11 + 8);
        uVar5 = *(undefined8 *)pauVar11[1];
        uVar6 = *(undefined8 *)((longlong)pauVar11[1] + 8);
        *(undefined8 *)*pauVar2 = *(undefined8 *)*pauVar11;
        *(undefined8 *)pauVar13[-2] = uVar4;
        *(undefined8 *)((longlong)pauVar13[-2] + 8) = uVar5;
        *(undefined8 *)pauVar13[-1] = uVar6;
        *(undefined8 *)pauVar11[1] = 0;
        *(undefined8 *)((longlong)pauVar11[1] + 8) = 0xf;
        (*pauVar11)[0] = 0;
      }
      *(undefined4 *)((longlong)pauVar13[-1] + 8) = *(undefined4 *)pauVar11[2];
      if (param_1 == pauVar11) {
        pauVar11 = pauVar13 + -5;
        if (pauVar11 != pauVar12) {
          FUN_18015c010(pauVar11);
          uVar4 = *(undefined8 *)((longlong)*pauVar12 + 8);
          uVar5 = *(undefined8 *)pauVar12[1];
          uVar6 = *(undefined8 *)((longlong)pauVar12[1] + 8);
          *(undefined8 *)*pauVar11 = *(undefined8 *)*pauVar12;
          *(undefined8 *)((longlong)pauVar13[-5] + 8) = uVar4;
          *(undefined8 *)pauVar13[-4] = uVar5;
          *(undefined8 *)((longlong)pauVar13[-4] + 8) = uVar6;
          *(undefined8 *)pauVar12[1] = 0;
          *(undefined8 *)((longlong)pauVar12[1] + 8) = 0xf;
          (*pauVar12)[0] = 0;
        }
        *(undefined4 *)pauVar13[-3] = *(undefined4 *)pauVar12[2];
        FUN_1802c2290(param_4,pauVar12,pauVar11);
joined_r0x0001802c3194:
        for (; param_4 != pauVar14; param_4 = (undefined1 (*) [16])((longlong)param_4[2] + 8)) {
          FUN_18015c010(param_4);
        }
        return;
      }
      pauVar11 = (undefined1 (*) [16])((longlong)pauVar11[-3] + 8);
      pauVar13 = pauVar2;
    }
    if (pauVar2 != pauVar12) {
      FUN_18015c010(pauVar2);
      uVar4 = *(undefined8 *)((longlong)*pauVar12 + 8);
      uVar5 = *(undefined8 *)pauVar12[1];
      uVar6 = *(undefined8 *)((longlong)pauVar12[1] + 8);
      *(undefined8 *)*pauVar2 = *(undefined8 *)*pauVar12;
      *(undefined8 *)pauVar13[-2] = uVar4;
      *(undefined8 *)((longlong)pauVar13[-2] + 8) = uVar5;
      *(undefined8 *)pauVar13[-1] = uVar6;
      *(undefined8 *)pauVar12[1] = 0;
      *(undefined8 *)((longlong)pauVar12[1] + 8) = 0xf;
      (*pauVar12)[0] = 0;
    }
    *(undefined4 *)((longlong)pauVar13[-1] + 8) = *(undefined4 *)pauVar12[2];
    pauVar12 = (undefined1 (*) [16])((longlong)pauVar12[-3] + 8);
    if (param_4 == pauVar12) {
      pauVar12 = pauVar13 + -5;
      if (pauVar12 != pauVar11) {
        FUN_18015c010(pauVar12);
        uVar4 = *(undefined8 *)((longlong)*pauVar11 + 8);
        uVar5 = *(undefined8 *)pauVar11[1];
        uVar6 = *(undefined8 *)((longlong)pauVar11[1] + 8);
        *(undefined8 *)*pauVar12 = *(undefined8 *)*pauVar11;
        *(undefined8 *)((longlong)pauVar13[-5] + 8) = uVar4;
        *(undefined8 *)pauVar13[-4] = uVar5;
        *(undefined8 *)((longlong)pauVar13[-4] + 8) = uVar6;
        *(undefined8 *)pauVar11[1] = 0;
        *(undefined8 *)((longlong)pauVar11[1] + 8) = 0xf;
        (*pauVar11)[0] = 0;
      }
      *(undefined4 *)pauVar13[-3] = *(undefined4 *)pauVar11[2];
      FUN_1802c2290(param_1,pauVar11,pauVar12);
      if (param_1 != param_4) {
        FUN_18015c010(param_1);
        uVar4 = *(undefined8 *)((longlong)*param_4 + 8);
        uVar5 = *(undefined8 *)param_4[1];
        uVar6 = *(undefined8 *)((longlong)param_4[1] + 8);
        *(undefined8 *)*param_1 = *(undefined8 *)*param_4;
        *(undefined8 *)((longlong)*param_1 + 8) = uVar4;
        *(undefined8 *)param_1[1] = uVar5;
        *(undefined8 *)((longlong)param_1[1] + 8) = uVar6;
        *(undefined8 *)param_4[1] = 0;
        *(undefined8 *)((longlong)param_4[1] + 8) = 0xf;
        (*param_4)[0] = 0;
      }
      *(undefined4 *)param_1[2] = *(undefined4 *)param_4[2];
      goto joined_r0x0001802c3194;
    }
    pauVar13 = pauVar2;
  } while( true );
}



