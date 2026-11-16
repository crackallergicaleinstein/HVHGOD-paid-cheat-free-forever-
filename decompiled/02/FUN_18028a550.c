// FUN_18028a550 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18028a550 */

void FUN_18028a550(undefined8 *param_1,undefined8 *param_2,undefined1 (*param_3) [16],
                  undefined1 (*param_4) [16])

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  undefined1 (*pauVar6) [16];
  undefined8 *puVar7;
  longlong lVar8;
  undefined1 (*pauVar9) [16];
  undefined1 (*pauVar10) [16];
  undefined1 (*pauVar11) [16];
  undefined1 (*pauVar12) [16];
  
  if (param_1 == param_2) {
    pauVar12 = (undefined1 (*) [16])((longlong)param_4[-3] + 8);
    pauVar11 = param_4;
  }
  else {
    lVar8 = (longlong)param_4 - (longlong)param_1;
    puVar7 = param_1 + 2;
    pauVar11 = param_4;
    do {
      pauVar12 = pauVar11;
      *pauVar12 = (undefined1  [16])0x0;
      *(undefined8 *)((longlong)puVar7 + lVar8) = 0;
      *(undefined8 *)((longlong)puVar7 + lVar8 + 8) = 0;
      uVar2 = puVar7[-1];
      uVar3 = *puVar7;
      uVar4 = puVar7[1];
      *(undefined8 *)*pauVar12 = puVar7[-2];
      *(undefined8 *)((longlong)*pauVar12 + 8) = uVar2;
      *(undefined8 *)pauVar12[1] = uVar3;
      *(undefined8 *)((longlong)pauVar12[1] + 8) = uVar4;
      *(undefined1 *)(puVar7 + -2) = 0;
      *puVar7 = 0;
      puVar7[1] = 0xf;
      *(undefined8 *)((longlong)puVar7 + lVar8 + 0x10) = puVar7[2];
      puVar1 = puVar7 + 3;
      puVar7 = puVar7 + 5;
      pauVar11 = (undefined1 (*) [16])((longlong)pauVar12[2] + 8);
    } while (puVar1 != param_2);
    FUN_18015c010(param_1);
    uVar2 = param_2[1];
    uVar3 = param_2[2];
    uVar4 = param_2[3];
    *param_1 = *param_2;
    param_1[1] = uVar2;
    param_1[2] = uVar3;
    param_1[3] = uVar4;
    param_2[2] = 0;
    param_2[3] = 0xf;
    *(undefined1 *)param_2 = 0;
  }
  param_1[4] = param_2[4];
  pauVar9 = (undefined1 (*) [16])(param_1 + 5);
  pauVar10 = (undefined1 (*) [16])(param_2 + 5);
  pauVar6 = param_4;
  do {
    while (cVar5 = FUN_180114040(pauVar10,pauVar6), cVar5 < '\0') {
      if (pauVar9 != pauVar10) {
        FUN_18015c010(pauVar9);
        uVar2 = *(undefined8 *)((longlong)*pauVar10 + 8);
        uVar3 = *(undefined8 *)pauVar10[1];
        uVar4 = *(undefined8 *)((longlong)pauVar10[1] + 8);
        *(undefined8 *)*pauVar9 = *(undefined8 *)*pauVar10;
        *(undefined8 *)((longlong)*pauVar9 + 8) = uVar2;
        *(undefined8 *)pauVar9[1] = uVar3;
        *(undefined8 *)((longlong)pauVar9[1] + 8) = uVar4;
        *(undefined8 *)pauVar10[1] = 0;
        *(undefined8 *)((longlong)pauVar10[1] + 8) = 0xf;
        (*pauVar10)[0] = 0;
      }
      *(undefined8 *)pauVar9[2] = *(undefined8 *)pauVar10[2];
      pauVar9 = (undefined1 (*) [16])((longlong)pauVar9[2] + 8);
      pauVar10 = (undefined1 (*) [16])((longlong)pauVar10[2] + 8);
      if (pauVar10 == param_3) {
        FUN_18028a4d0(pauVar6,pauVar11,pauVar9);
joined_r0x00018028a6ef:
        for (; param_4 != pauVar11; param_4 = (undefined1 (*) [16])((longlong)param_4[2] + 8)) {
          FUN_18015c010(param_4);
        }
        return;
      }
    }
    if (pauVar9 != pauVar6) {
      FUN_18015c010(pauVar9);
      uVar2 = *(undefined8 *)((longlong)*pauVar6 + 8);
      uVar3 = *(undefined8 *)pauVar6[1];
      uVar4 = *(undefined8 *)((longlong)pauVar6[1] + 8);
      *(undefined8 *)*pauVar9 = *(undefined8 *)*pauVar6;
      *(undefined8 *)((longlong)*pauVar9 + 8) = uVar2;
      *(undefined8 *)pauVar9[1] = uVar3;
      *(undefined8 *)((longlong)pauVar9[1] + 8) = uVar4;
      *(undefined8 *)pauVar6[1] = 0;
      *(undefined8 *)((longlong)pauVar6[1] + 8) = 0xf;
      (*pauVar6)[0] = 0;
    }
    *(undefined8 *)pauVar9[2] = *(undefined8 *)pauVar6[2];
    pauVar9 = (undefined1 (*) [16])((longlong)pauVar9[2] + 8);
    pauVar6 = (undefined1 (*) [16])((longlong)pauVar6[2] + 8);
  } while (pauVar6 != pauVar12);
  pauVar6 = (undefined1 (*) [16])FUN_18028a4d0(pauVar10,param_3,pauVar9);
  if (pauVar6 != pauVar12) {
    FUN_18015c010(pauVar6);
    uVar2 = *(undefined8 *)((longlong)*pauVar12 + 8);
    uVar3 = *(undefined8 *)pauVar12[1];
    uVar4 = *(undefined8 *)((longlong)pauVar12[1] + 8);
    *(undefined8 *)*pauVar6 = *(undefined8 *)*pauVar12;
    *(undefined8 *)((longlong)*pauVar6 + 8) = uVar2;
    *(undefined8 *)pauVar6[1] = uVar3;
    *(undefined8 *)((longlong)pauVar6[1] + 8) = uVar4;
    *(undefined8 *)pauVar12[1] = 0;
    *(undefined8 *)((longlong)pauVar12[1] + 8) = 0xf;
    (*pauVar12)[0] = 0;
  }
  *(undefined8 *)pauVar6[2] = *(undefined8 *)pauVar12[2];
  goto joined_r0x00018028a6ef;
}



