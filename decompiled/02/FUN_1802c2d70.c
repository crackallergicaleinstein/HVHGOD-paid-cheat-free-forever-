// FUN_1802c2d70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802c2d70 */

void FUN_1802c2d70(undefined8 *param_1,undefined8 *param_2,undefined1 (*param_3) [16],
                  undefined1 (*param_4) [16])

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 (*pauVar6) [16];
  byte bVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined1 (*pauVar10) [16];
  undefined1 (*pauVar11) [16];
  undefined1 (*pauVar12) [16];
  undefined1 (*pauVar13) [16];
  
  if (param_1 == param_2) {
    pauVar13 = (undefined1 (*) [16])((longlong)param_4[-3] + 8);
    pauVar12 = param_4;
  }
  else {
    lVar9 = (longlong)param_4 - (longlong)param_1;
    puVar8 = param_1 + 2;
    pauVar12 = param_4;
    do {
      pauVar13 = pauVar12;
      *pauVar13 = (undefined1  [16])0x0;
      *(undefined8 *)((longlong)puVar8 + lVar9) = 0;
      *(undefined8 *)((longlong)puVar8 + lVar9 + 8) = 0;
      uVar3 = puVar8[-1];
      uVar4 = *puVar8;
      uVar5 = puVar8[1];
      *(undefined8 *)*pauVar13 = puVar8[-2];
      *(undefined8 *)((longlong)*pauVar13 + 8) = uVar3;
      *(undefined8 *)pauVar13[1] = uVar4;
      *(undefined8 *)((longlong)pauVar13[1] + 8) = uVar5;
      *(undefined1 *)(puVar8 + -2) = 0;
      *puVar8 = 0;
      puVar8[1] = 0xf;
      *(undefined4 *)((longlong)puVar8 + lVar9 + 0x10) = *(undefined4 *)(puVar8 + 2);
      puVar1 = puVar8 + 3;
      puVar8 = puVar8 + 5;
      pauVar12 = (undefined1 (*) [16])((longlong)pauVar13[2] + 8);
    } while (puVar1 != param_2);
    FUN_18015c010(param_1);
    uVar3 = param_2[1];
    uVar4 = param_2[2];
    uVar5 = param_2[3];
    *param_1 = *param_2;
    param_1[1] = uVar3;
    param_1[2] = uVar4;
    param_1[3] = uVar5;
    param_2[2] = 0;
    param_2[3] = 0xf;
    *(undefined1 *)param_2 = 0;
  }
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  pauVar10 = (undefined1 (*) [16])(param_1 + 5);
  pauVar11 = (undefined1 (*) [16])(param_2 + 5);
  pauVar6 = param_4;
  do {
    while( true ) {
      iVar2 = *(int *)pauVar11[2];
      if ((iVar2 == 2) || (iVar2 - 3U < 4)) {
        bVar7 = 0;
      }
      else {
        bVar7 = (iVar2 != 1) + 1;
      }
      iVar2 = *(int *)pauVar6[2];
      if (((iVar2 != 2) && (3 < iVar2 - 3U)) && (bVar7 < (byte)((iVar2 != 1) + 1U))) break;
      if (pauVar10 != pauVar6) {
        FUN_18015c010(pauVar10);
        uVar3 = *(undefined8 *)((longlong)*pauVar6 + 8);
        uVar4 = *(undefined8 *)pauVar6[1];
        uVar5 = *(undefined8 *)((longlong)pauVar6[1] + 8);
        *(undefined8 *)*pauVar10 = *(undefined8 *)*pauVar6;
        *(undefined8 *)((longlong)*pauVar10 + 8) = uVar3;
        *(undefined8 *)pauVar10[1] = uVar4;
        *(undefined8 *)((longlong)pauVar10[1] + 8) = uVar5;
        *(undefined8 *)pauVar6[1] = 0;
        *(undefined8 *)((longlong)pauVar6[1] + 8) = 0xf;
        (*pauVar6)[0] = 0;
      }
      *(undefined4 *)pauVar10[2] = *(undefined4 *)pauVar6[2];
      pauVar10 = (undefined1 (*) [16])((longlong)pauVar10[2] + 8);
      pauVar6 = (undefined1 (*) [16])((longlong)pauVar6[2] + 8);
      if (pauVar6 == pauVar13) {
        pauVar6 = (undefined1 (*) [16])FUN_1802c2cf0(pauVar11,param_3,pauVar10);
        if (pauVar6 != pauVar13) {
          FUN_18015c010(pauVar6);
          uVar3 = *(undefined8 *)((longlong)*pauVar13 + 8);
          uVar4 = *(undefined8 *)pauVar13[1];
          uVar5 = *(undefined8 *)((longlong)pauVar13[1] + 8);
          *(undefined8 *)*pauVar6 = *(undefined8 *)*pauVar13;
          *(undefined8 *)((longlong)*pauVar6 + 8) = uVar3;
          *(undefined8 *)pauVar6[1] = uVar4;
          *(undefined8 *)((longlong)pauVar6[1] + 8) = uVar5;
          *(undefined8 *)pauVar13[1] = 0;
          *(undefined8 *)((longlong)pauVar13[1] + 8) = 0xf;
          (*pauVar13)[0] = 0;
        }
        *(undefined4 *)pauVar6[2] = *(undefined4 *)pauVar13[2];
        goto joined_r0x0001802c2f2f;
      }
    }
    if (pauVar10 != pauVar11) {
      FUN_18015c010(pauVar10);
      uVar3 = *(undefined8 *)((longlong)*pauVar11 + 8);
      uVar4 = *(undefined8 *)pauVar11[1];
      uVar5 = *(undefined8 *)((longlong)pauVar11[1] + 8);
      *(undefined8 *)*pauVar10 = *(undefined8 *)*pauVar11;
      *(undefined8 *)((longlong)*pauVar10 + 8) = uVar3;
      *(undefined8 *)pauVar10[1] = uVar4;
      *(undefined8 *)((longlong)pauVar10[1] + 8) = uVar5;
      *(undefined8 *)pauVar11[1] = 0;
      *(undefined8 *)((longlong)pauVar11[1] + 8) = 0xf;
      (*pauVar11)[0] = 0;
    }
    *(undefined4 *)pauVar10[2] = *(undefined4 *)pauVar11[2];
    pauVar10 = (undefined1 (*) [16])((longlong)pauVar10[2] + 8);
    pauVar11 = (undefined1 (*) [16])((longlong)pauVar11[2] + 8);
  } while (pauVar11 != param_3);
  FUN_1802c2cf0(pauVar6,pauVar12,pauVar10);
joined_r0x0001802c2f2f:
  for (; param_4 != pauVar12; param_4 = (undefined1 (*) [16])((longlong)param_4[2] + 8)) {
    FUN_18015c010(param_4);
  }
  return;
}



