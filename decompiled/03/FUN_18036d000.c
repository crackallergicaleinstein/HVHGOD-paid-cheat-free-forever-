// FUN_18036d000 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18036d000 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [16] FUN_18036d000(undefined8 param_1,undefined1 (*param_2) [16])

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  ulonglong *puVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined1 (*pauVar17) [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [64];
  ulonglong local_98;
  ulonglong uStack_90;
  undefined1 auStack_88 [16];
  undefined1 local_78 [16];
  undefined1 auStack_68 [16];
  longlong local_58;
  longlong local_50;
  longlong local_48;
  undefined1 (*local_40) [16];
  
  *param_2 = (undefined1  [16])0x0;
  *(undefined8 *)*param_2 = 0;
  *(undefined8 *)(*param_2 + 8) = 0;
  *(undefined8 *)param_2[1] = 0;
  local_40 = param_2;
  puVar12 = (undefined8 *)FUN_18036bf00();
  puVar1 = (ulonglong *)puVar12[1];
  auVar19 = ZEXT1664(_DAT_18086d450);
  for (puVar14 = (ulonglong *)*puVar12; puVar14 != puVar1; puVar14 = puVar14 + 8) {
                    /* WARNING: Read-only address (ram,0x00018086d450) is written */
    local_98 = *puVar14;
    uStack_90 = puVar14[1];
    uVar6 = *(ulonglong *)*(undefined1 (*) [16])(puVar14 + 2);
    uVar7 = puVar14[3];
    auStack_88 = *(undefined1 (*) [16])(puVar14 + 2);
    puVar14[3] = 0xf;
    *(undefined1 *)puVar14 = 0;
    puVar14[2] = 0;
    uVar3 = *(ulonglong *)*(undefined1 (*) [16])(puVar14 + 4);
    uVar16 = puVar14[5];
    local_78 = *(undefined1 (*) [16])(puVar14 + 4);
    uVar4 = *(ulonglong *)*(undefined1 (*) [16])(puVar14 + 6);
    uVar5 = puVar14[7];
    auStack_68 = *(undefined1 (*) [16])(puVar14 + 6);
    *(undefined1 *)(puVar14 + 4) = 0;
    puVar14[6] = 0;
    puVar14[7] = 0xf;
    puVar2 = *(ulonglong **)(*param_2 + 8);
    auVar18 = auVar19._0_16_;
    if (puVar2 == *(ulonglong **)param_2[1]) {
      auVar19 = ZEXT1664(auVar18);
      FUN_18036fc30(param_2);
      auVar18 = auVar19._0_16_;
    }
    else {
      *puVar2 = local_98;
      puVar2[1] = uStack_90;
      puVar2[2] = uVar6;
      puVar2[3] = uVar7;
      local_98 = local_98 & 0xffffffffffffff00;
      puVar2[4] = uVar3;
      puVar2[5] = uVar16;
      puVar2[6] = uVar4;
      puVar2[7] = uVar5;
      auVar8[0xf] = 0;
      auVar8._0_15_ = local_78._1_15_;
      local_78 = auVar8 << 8;
      *(longlong *)(*param_2 + 8) = *(longlong *)(*param_2 + 8) + 0x40;
      auStack_88 = auVar18;
      auStack_68 = auVar18;
    }
    auVar19 = ZEXT1664(auVar18);
    FUN_18015c010(local_78);
    FUN_18015c010();
  }
                    /* WARNING: Read-only address (ram,0x00018086d450) is written */
  lVar15 = DAT_180b90208;
  lVar10 = DAT_180b90210;
  if (local_58 != 0) {
    lVar15 = local_58;
    if (local_58 != local_50) {
      do {
        FUN_18015c010(lVar15 + 0x20);
        FUN_18015c010();
        lVar15 = lVar15 + 0x40;
      } while (lVar15 != local_50);
    }
    lVar15 = local_58;
    if ((0xfff < (local_48 - local_58 & 0xffffffffffffffc0U)) &&
       (lVar15 = *(longlong *)(local_58 + -8), 0x1f < (local_58 - lVar15) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(lVar15);
    lVar15 = DAT_180b90208;
    lVar10 = DAT_180b90210;
  }
  while( true ) {
    lVar11 = DAT_180b90210;
    if (lVar15 == DAT_180b90210) {
      DAT_180b90210 = lVar10;
      return param_2;
    }
    DAT_180b90210 = lVar10;
    if (0x7fffffffffffffffU - *(longlong *)(lVar15 + 0x10) < 0xd) break;
    FUN_18015a9c0(&local_98);
    local_78 = (undefined1  [16])0x0;
    auStack_68 = (undefined1  [16])0x0;
    uVar3 = *(ulonglong *)(lVar15 + 0x30);
    pauVar17 = (undefined1 (*) [16])(lVar15 + 0x20);
    if (0xf < *(ulonglong *)(lVar15 + 0x38)) {
      pauVar17 = *(undefined1 (**) [16])*pauVar17;
    }
    if (0x7fffffffffffffff < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bb70();
    }
    if (uVar3 < 0x10) {
      auStack_68._8_8_ = 0xf;
      auStack_68._0_8_ = uVar3;
      local_78 = *pauVar17;
    }
    else {
      uVar16 = uVar3 | 0xf;
      if (uVar16 < 0x8000000000000000) {
        if (uVar16 < 0x16) {
          uVar16 = 0x16;
        }
      }
      else {
        uVar16 = 0x7fffffffffffffff;
      }
      uVar13 = FUN_18015bca0(uVar16 + 1);
      local_78._0_8_ = uVar13;
      auStack_68._8_8_ = uVar16;
      auStack_68._0_8_ = uVar3;
      FUN_18063aed0(uVar13,pauVar17,uVar3 + 1);
    }
    auVar18 = auVar19._0_16_;
    puVar14 = *(ulonglong **)(*param_2 + 8);
    if (puVar14 == *(ulonglong **)param_2[1]) {
      FUN_18036fc30(param_2,puVar14,&local_98);
      auVar18 = auVar19._0_16_;
    }
    else {
      *puVar14 = local_98;
      puVar14[1] = uStack_90;
      puVar14[2] = auStack_88._0_8_;
      puVar14[3] = auStack_88._8_8_;
      local_98 = local_98 & 0xffffffffffffff00;
      puVar14[4] = local_78._0_8_;
      puVar14[5] = local_78._8_8_;
      puVar14[6] = auStack_68._0_8_;
      puVar14[7] = auStack_68._8_8_;
      auVar9[0xf] = 0;
      auVar9._0_15_ = local_78._1_15_;
      local_78 = auVar9 << 8;
      *(longlong *)(*param_2 + 8) = *(longlong *)(*param_2 + 8) + 0x40;
      auStack_88 = auVar18;
      auStack_68 = auVar18;
    }
    auVar19 = ZEXT1664(auVar18);
    FUN_18015c010(local_78);
    FUN_18015c010(&local_98);
    lVar15 = lVar15 + 0x40;
    lVar10 = DAT_180b90210;
    DAT_180b90210 = lVar11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_18015bb70();
}



