// FUN_180288cb0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180288cb0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180288cb0(undefined1 (*param_1) [32],undefined1 (*param_2) [32])

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  int iVar7;
  undefined1 *puVar8;
  undefined1 *_Buf1;
  undefined1 (*pauVar9) [32];
  undefined1 (*_Buf2) [32];
  undefined1 (*pauVar10) [32];
  ulonglong uVar11;
  ulonglong _Size;
  undefined1 (*pauVar12) [32];
  ulonglong uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [64];
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  ulonglong local_a0;
  undefined1 (*local_98) [32];
  undefined1 (*local_90) [32];
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_1808d5f00 ^ (ulonglong)auStack_c8;
  if ((param_1 == param_2) ||
     (pauVar12 = (undefined1 (*) [32])(param_1[1] + 8), pauVar12 == param_2)) {
                    /* WARNING: Read-only address (ram,0x00018086d450) is written */
  }
  auVar15 = ZEXT1664(_DAT_18086d450);
  local_98 = param_1;
  local_90 = param_2;
LAB_180288d20:
  local_88 = *pauVar12;
  (*pauVar12)[0] = 0;
  *(undefined8 *)(*pauVar12 + 0x10) = 0;
  *(undefined8 *)(*pauVar12 + 0x18) = 0xf;
  uVar1 = *(undefined8 *)pauVar12[1];
  uVar2 = *(ulonglong *)(*param_1 + 0x10);
  pauVar9 = param_1;
  if (0xf < *(ulonglong *)(*param_1 + 0x18)) {
    pauVar9 = *(undefined1 (**) [32])*param_1;
  }
  local_a8 = local_88._0_8_;
  uVar13 = local_88._16_8_;
  local_a0 = local_88._24_8_;
  puVar8 = local_68;
  if (0xf < local_a0) {
    puVar8 = local_a8;
  }
  uVar11 = uVar13;
  if (uVar2 < uVar13) {
    uVar11 = uVar2;
  }
  auVar15 = ZEXT1664(auVar15._0_16_);
  local_68 = local_88;
  local_48 = uVar1;
  iVar7 = memcmp(puVar8,pauVar9,uVar11);
  uVar11 = local_a0;
  puVar8 = local_a8;
  if (iVar7 == 0) {
    if (uVar2 <= uVar13) {
LAB_180288dbb:
      pauVar9 = pauVar12;
      do {
        uVar2 = *(ulonglong *)(pauVar9[-1] + 8);
        pauVar10 = (undefined1 (*) [32])(pauVar9[-2] + 0x18);
        _Buf2 = pauVar10;
        if (0xf < *(ulonglong *)(pauVar9[-1] + 0x10)) {
          _Buf2 = *(undefined1 (**) [32])*pauVar10;
        }
        _Buf1 = local_68;
        if (0xf < uVar11) {
          _Buf1 = puVar8;
        }
        _Size = uVar13;
        if (uVar2 < uVar13) {
          _Size = uVar2;
        }
        auVar15 = ZEXT1664(auVar15._0_16_);
        iVar7 = memcmp(_Buf1,_Buf2,_Size);
        param_2 = local_90;
        param_1 = local_98;
        auVar14 = auVar15._0_16_;
        if (iVar7 == 0) {
          if (uVar2 <= uVar13) goto LAB_180288e15;
        }
        else if (-1 < iVar7) goto LAB_180288e15;
        if (pauVar9 != pauVar10) {
          FUN_18015c010(pauVar9);
          uVar3 = *(undefined8 *)(pauVar9[-1] + 8);
          uVar4 = *(undefined8 *)(pauVar9[-1] + 0x10);
          *(undefined8 *)*pauVar9 = *(undefined8 *)*pauVar10;
          *(undefined8 *)(*pauVar9 + 8) = *(undefined8 *)pauVar9[-1];
          *(undefined8 *)(*pauVar9 + 0x10) = uVar3;
          *(undefined8 *)(*pauVar9 + 0x18) = uVar4;
          *(undefined8 *)(pauVar9[-1] + 8) = 0;
          *(undefined8 *)(pauVar9[-1] + 0x10) = 0xf;
          (*pauVar10)[0] = 0;
        }
        *(undefined8 *)pauVar9[1] = *(undefined8 *)(pauVar9[-1] + 0x18);
        pauVar9 = pauVar10;
      } while( true );
    }
  }
  else if (-1 < iVar7) goto LAB_180288dbb;
  FUN_180289660(param_1,pauVar12,pauVar12[1] + 8);
  auVar14 = auVar15._0_16_;
  if (param_1 != &local_68) {
    FUN_18015c010(param_1);
    *(undefined8 *)*param_1 = local_88._0_8_;
    *(undefined8 *)(*param_1 + 8) = local_88._8_8_;
    *(undefined8 *)(*param_1 + 0x10) = local_88._16_8_;
    *(undefined8 *)(*param_1 + 0x18) = local_88._24_8_;
    auVar14 = auVar15._0_16_;
    local_68._16_16_ = auVar14;
    auVar6[0x1f] = 0;
    auVar6._0_31_ = local_68._1_31_;
    local_68 = auVar6 << 8;
  }
  *(undefined8 *)param_1[1] = uVar1;
  goto LAB_180288e4a;
LAB_180288e15:
  if (pauVar9 != &local_68) {
    FUN_18015c010(pauVar9);
    *(undefined8 *)*pauVar9 = local_88._0_8_;
    *(undefined8 *)(*pauVar9 + 8) = local_88._8_8_;
    *(undefined8 *)(*pauVar9 + 0x10) = local_88._16_8_;
    *(undefined8 *)(*pauVar9 + 0x18) = local_88._24_8_;
    auVar14 = auVar15._0_16_;
    local_68._16_16_ = auVar14;
    auVar5[0x1f] = 0;
    auVar5._0_31_ = local_68._1_31_;
    local_68 = auVar5 << 8;
  }
  *(undefined8 *)pauVar9[1] = uVar1;
LAB_180288e4a:
  auVar15 = ZEXT1664(auVar14);
  FUN_18015c010(local_68);
  pauVar12 = (undefined1 (*) [32])(pauVar12[1] + 8);
  if (pauVar12 == param_2) {
  }
  goto LAB_180288d20;
}



