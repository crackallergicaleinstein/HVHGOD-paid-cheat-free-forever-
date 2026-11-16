// FUN_1804748b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804748b0 */

undefined1 (*) [16] FUN_1804748b0(undefined1 (*param_1) [16],short *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined **ppuVar5;
  undefined1 (*pauVar6) [16];
  undefined8 *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  longlong lVar10;
  short sVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined1 local_50 [16];
  undefined1 auStack_40 [16];
  undefined1 local_30 [16];
  undefined1 local_20 [16];
  
  uVar13 = (ulonglong)*param_2;
  ppuVar14 = &PTR_s_Glock_18_180797be0;
  if (DAT_180b909b0 == 0) {
    ppuVar15 = &PTR_s_Glock_18_180797be0 + uVar13 * 2;
    sVar11 = param_2[1];
    ppuVar9 = &PTR_s_No_Skin_18078acd0 + (longlong)sVar11 * 3;
  }
  else {
    if ((ulonglong)(*(longlong *)(DAT_180b909b0 + 0x30) - *(longlong *)(DAT_180b909b0 + 0x28) >> 4)
        <= uVar13) goto LAB_180474b49;
    ppuVar15 = (undefined **)(uVar13 * 0x10 + *(longlong *)(DAT_180b909b0 + 0x28));
    sVar11 = param_2[1];
    if ((ulonglong)
        ((*(longlong *)(DAT_180b909b0 + 0x48) - *(longlong *)(DAT_180b909b0 + 0x40)) / 0x18) <=
        (ulonglong)(longlong)sVar11) {
                    /* WARNING: Subroutine does not return */
      FUN_18047c010();
    }
    ppuVar9 = (undefined **)(*(longlong *)(DAT_180b909b0 + 0x40) + (longlong)sVar11 * 0x18);
  }
  if ((*(char *)(ppuVar15 + 1) == '\x06') || ((byte)(*(char *)(ppuVar15 + 1) - 7U) < 2)) {
    puVar8 = *ppuVar9;
    *param_1 = (undefined1  [16])0x0;
    *(undefined8 *)param_1[1] = 0;
    *(undefined8 *)(param_1[1] + 8) = 0;
    lVar10 = -1;
    do {
      lVar10 = lVar10 + 1;
    } while (puVar8[lVar10] != '\0');
LAB_180474b20:
    FUN_18015ba30(param_1,puVar8,lVar10);
  }
  else {
    if (DAT_180b909b0 == 0) {
      ppuVar5 = &PTR_s_Glock_18_180797be0 + uVar13 * 2;
    }
    else {
      if ((ulonglong)
          (*(longlong *)(DAT_180b909b0 + 0x30) - *(longlong *)(DAT_180b909b0 + 0x28) >> 4) <= uVar13
         ) goto LAB_180474b49;
      ppuVar5 = (undefined **)(uVar13 * 0x10 + *(longlong *)(DAT_180b909b0 + 0x28));
    }
    if (*(char *)((longlong)ppuVar5 + 0xe) != '\0') {
      if ((DAT_180b909b0 != 0) &&
         (ppuVar14 = *(undefined ***)(DAT_180b909b0 + 0x28),
         (ulonglong)(*(longlong *)(DAT_180b909b0 + 0x30) - (longlong)ppuVar14 >> 4) <= uVar13)) {
LAB_180474b49:
                    /* WARNING: Subroutine does not return */
        FUN_18047c010();
      }
      if (sVar11 == *(short *)(uVar13 * 0x10 + 10 + (longlong)ppuVar14)) {
        iVar4 = strncmp(*ppuVar9,"Default ",8);
        if (iVar4 != 0) {
          ppuVar9 = ppuVar15;
        }
        puVar8 = *ppuVar9;
        *param_1 = (undefined1  [16])0x0;
        *(undefined8 *)param_1[1] = 0;
        *(undefined8 *)(param_1[1] + 8) = 0;
        lVar10 = -1;
        do {
          lVar10 = lVar10 + 1;
        } while (puVar8[lVar10] != '\0');
        goto LAB_180474b20;
      }
    }
    puVar8 = *ppuVar9;
    local_30 = (undefined1  [16])0x0;
    local_20 = (undefined1  [16])0x0;
    lVar10 = -1;
    lVar12 = -1;
    do {
      lVar12 = lVar12 + 1;
    } while ((*ppuVar15)[lVar12] != '\0');
    FUN_18015ba30(local_30);
    pauVar6 = (undefined1 (*) [16])FUN_18015b2a0(local_30,&DAT_1807c6c50,3);
    local_50 = *pauVar6;
    auStack_40 = pauVar6[1];
    *(undefined8 *)(pauVar6[1] + 8) = 0xf;
    (*pauVar6)[0] = 0;
    *(undefined8 *)pauVar6[1] = 0;
    do {
      lVar10 = lVar10 + 1;
    } while (puVar8[lVar10] != '\0');
    puVar7 = (undefined8 *)FUN_18015b2a0(local_50,puVar8,lVar10);
    *param_1 = (undefined1  [16])0x0;
    *(undefined8 *)param_1[1] = 0;
    *(undefined8 *)(param_1[1] + 8) = 0;
    uVar1 = puVar7[1];
    uVar2 = puVar7[2];
    uVar3 = puVar7[3];
    *(undefined8 *)*param_1 = *puVar7;
    *(undefined8 *)(*param_1 + 8) = uVar1;
    *(undefined8 *)param_1[1] = uVar2;
    *(undefined8 *)(param_1[1] + 8) = uVar3;
    *(undefined1 *)puVar7 = 0;
    puVar7[2] = 0;
    puVar7[3] = 0xf;
    FUN_18015c010(local_50);
    FUN_18015c010(local_30);
  }
  return param_1;
}



