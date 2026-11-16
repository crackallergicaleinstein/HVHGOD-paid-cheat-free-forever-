// FUN_1801b9680 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801b9680 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801b9680(undefined1 (*param_1) [32],undefined1 (*param_2) [32])

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  int iVar7;
  undefined1 *puVar8;
  undefined1 (*pauVar9) [32];
  undefined1 (*_Buf2) [32];
  undefined1 (*pauVar10) [32];
  ulonglong uVar11;
  ulonglong _Size;
  undefined1 (*pauVar12) [32];
  undefined1 *puVar13;
  ulonglong uVar14;
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  undefined1 (*local_80) [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_a8;
  if ((param_1 == param_2) || (pauVar12 = param_1 + 1, local_80 = param_2, pauVar12 == param_2)) {
  }
LAB_1801b96e0:
  local_78 = *pauVar12;
  (*pauVar12)[0] = 0;
  *(undefined8 *)(*pauVar12 + 0x10) = 0;
  *(undefined8 *)(*pauVar12 + 0x18) = 0xf;
  uVar1 = *(ulonglong *)(*param_1 + 0x10);
  pauVar9 = param_1;
  if (0xf < *(ulonglong *)(*param_1 + 0x18)) {
    pauVar9 = *(undefined1 (**) [32])*param_1;
  }
  puVar13 = local_78._0_8_;
  uVar14 = local_78._16_8_;
  local_88 = local_78._24_8_;
  puVar8 = local_58;
  if (0xf < local_88) {
    puVar8 = puVar13;
  }
  uVar11 = uVar14;
  if (uVar1 < uVar14) {
    uVar11 = uVar1;
  }
  local_58 = local_78;
  iVar7 = memcmp(puVar8,pauVar9,uVar11);
  uVar11 = local_88;
  if (iVar7 == 0) {
    if (uVar1 <= uVar14) {
LAB_1801b9766:
      pauVar9 = pauVar12;
      do {
        uVar1 = *(ulonglong *)(pauVar9[-1] + 0x10);
        pauVar10 = pauVar9 + -1;
        _Buf2 = pauVar10;
        if (0xf < *(ulonglong *)(pauVar9[-1] + 0x18)) {
          _Buf2 = *(undefined1 (**) [32])*pauVar10;
        }
        puVar8 = local_58;
        if (0xf < uVar11) {
          puVar8 = puVar13;
        }
        _Size = uVar14;
        if (uVar1 < uVar14) {
          _Size = uVar1;
        }
        iVar7 = memcmp(puVar8,_Buf2,_Size);
        param_2 = local_80;
        if (iVar7 == 0) {
          if (uVar1 <= uVar14) goto LAB_1801b97b5;
        }
        else if (-1 < iVar7) goto LAB_1801b97b5;
        if (pauVar9 != pauVar10) {
          FUN_18015c010(pauVar9);
          uVar2 = *(undefined8 *)(pauVar9[-1] + 8);
          uVar3 = *(undefined8 *)(pauVar9[-1] + 0x10);
          uVar4 = *(undefined8 *)(pauVar9[-1] + 0x18);
          *(undefined8 *)*pauVar9 = *(undefined8 *)*pauVar10;
          *(undefined8 *)(*pauVar9 + 8) = uVar2;
          *(undefined8 *)(*pauVar9 + 0x10) = uVar3;
          *(undefined8 *)(*pauVar9 + 0x18) = uVar4;
          *(undefined8 *)(pauVar9[-1] + 0x10) = 0;
          *(undefined8 *)(pauVar9[-1] + 0x18) = 0xf;
          (*pauVar10)[0] = 0;
        }
        pauVar9 = pauVar10;
      } while( true );
    }
  }
  else if (-1 < iVar7) goto LAB_1801b9766;
  FUN_18017bc30(param_1,pauVar12,pauVar12 + 1);
  if (param_1 != &local_58) {
    FUN_18015c010(param_1);
    *(undefined8 *)*param_1 = local_78._0_8_;
    *(undefined8 *)(*param_1 + 8) = local_78._8_8_;
    *(undefined8 *)(*param_1 + 0x10) = local_78._16_8_;
    *(undefined8 *)(*param_1 + 0x18) = local_78._24_8_;
    local_58._16_8_ = 0;
    local_58._24_8_ = 0xf;
    auVar6[0x1f] = 0;
    auVar6._0_31_ = local_58._1_31_;
    local_58 = auVar6 << 8;
  }
  goto LAB_1801b9870;
LAB_1801b97b5:
  if (pauVar9 != &local_58) {
    FUN_18015c010(pauVar9);
    *(undefined8 *)*pauVar9 = local_78._0_8_;
    *(undefined8 *)(*pauVar9 + 8) = local_78._8_8_;
    *(undefined8 *)(*pauVar9 + 0x10) = local_78._16_8_;
    *(undefined8 *)(*pauVar9 + 0x18) = local_78._24_8_;
    local_58._16_8_ = 0;
    local_58._24_8_ = 0xf;
    auVar5[0x1f] = 0;
    auVar5._0_31_ = local_58._1_31_;
    local_58 = auVar5 << 8;
  }
LAB_1801b9870:
  FUN_18015c010(local_58);
  pauVar12 = pauVar12 + 1;
  if (pauVar12 == param_2) {
  }
  goto LAB_1801b96e0;
}



