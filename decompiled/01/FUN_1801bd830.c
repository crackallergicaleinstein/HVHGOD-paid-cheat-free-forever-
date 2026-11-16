// FUN_1801bd830 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801bd830 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801bd830(undefined1 (*param_1) [16],longlong *param_2,undefined8 param_3)

{
  char *_Buf2;
  undefined1 auVar1 [16];
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  byte *pbVar7;
  longlong lVar8;
  byte *pbVar9;
  char **ppcVar10;
  ulonglong uVar11;
  size_t _Size;
  byte *pbVar12;
  ulonglong uVar13;
  undefined1 auStack_b8 [32];
  ulonglong local_98;
  undefined1 local_88;
  undefined1 (*local_80) [16];
  undefined1 local_78 [16];
  ulonglong uStack_68;
  ulonglong uStack_60;
  char *local_58 [3];
  char *local_40;
  
  local_40 = (char *)(DAT_1808d5f00 ^ (ulonglong)auStack_b8);
  uVar13 = param_2[1];
  lVar4 = *param_2;
  local_98 = 2;
  local_80 = param_1;
  lVar3 = FUN_1801c56a0(lVar4,uVar13,param_3,&DAT_1807c5c68);
  uVar6 = 0;
  if (lVar3 != -1) {
    uVar6 = lVar3 + 1;
  }
  if (uVar13 < uVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_18015ac40();
  }
  local_78 = (undefined1  [16])0x0;
  uStack_68 = 0;
  uStack_60 = 0;
  lVar8 = -1;
  lVar3 = -1;
  if (uVar13 - uVar6 != -1) {
    lVar3 = uVar13 - uVar6;
  }
  FUN_18015ba30(local_78,uVar6 + lVar4,lVar3);
  pbVar7 = local_78;
  if (0xf < uStack_60) {
    pbVar7 = (byte *)local_78._0_8_;
  }
  pbVar9 = pbVar7 + uStack_68;
  pbVar12 = (byte *)local_78._0_8_;
  if (pbVar7 != pbVar9) {
    do {
      iVar2 = tolower((uint)*pbVar7);
      *pbVar7 = (byte)iVar2;
      pbVar7 = pbVar7 + 1;
    } while (pbVar7 != pbVar9);
    pbVar12 = (byte *)local_78._0_8_;
  }
  uVar6 = uStack_60;
  uVar13 = uStack_68;
  local_58[0] = ".vpk";
  local_58[1] = ".vmap_c";
  local_58[2] = ".vmap";
  ppcVar10 = local_58;
  do {
    _Buf2 = *ppcVar10;
    pbVar7 = local_78;
    if (0xf < uVar6) {
      pbVar7 = pbVar12;
    }
    _Size = 0xffffffffffffffff;
    do {
      _Size = _Size + 1;
    } while (_Buf2[_Size] != '\0');
    if ((_Size <= uVar13) && (iVar2 = memcmp(pbVar7 + (uVar13 - _Size),_Buf2,_Size), iVar2 == 0))
    goto LAB_1801bd990;
    ppcVar10 = ppcVar10 + 1;
  } while (ppcVar10 != local_58 + 3);
LAB_1801bda16:
  if (uVar13 - 2 < 0x3f) {
    pbVar7 = local_78;
    if (0xf < uVar6) {
      pbVar7 = pbVar12;
    }
    local_98 = 0x25;
    lVar4 = FUN_1801b16b0(pbVar7,uVar13);
    if (lVar4 == -1) {
      *(undefined8 *)*param_1 = local_78._0_8_;
      *(undefined8 *)(*param_1 + 8) = local_78._8_8_;
      *(ulonglong *)param_1[1] = uStack_68;
      *(ulonglong *)(param_1[1] + 8) = uStack_60;
      uStack_68 = 0;
      uStack_60 = 0xf;
      auVar1[0xf] = 0;
      auVar1._0_15_ = local_78._1_15_;
      local_78 = auVar1 << 8;
      goto LAB_1801bda8c;
    }
  }
  *param_1 = (undefined1  [16])0x0;
  *(undefined8 *)param_1[1] = 0;
  *(undefined8 *)(param_1[1] + 8) = 0xf;
  (*param_1)[0] = 0;
LAB_1801bda8c:
  FUN_18015c010(local_78);
LAB_1801bd990:
  do {
    lVar8 = lVar8 + 1;
  } while (_Buf2[lVar8] != '\0');
  uVar5 = uVar13 - lVar8;
  if (uVar13 < uVar5) {
    uVar11 = uVar5 - uVar13;
    if (uVar6 - uVar13 < uVar11) {
      local_98 = local_98 & 0xffffffffffffff00;
      FUN_18013fa60(local_78,uVar11,local_88,uVar11);
    }
    else {
      pbVar7 = local_78;
      if (0xf < uVar6) {
        pbVar7 = pbVar12;
      }
      uStack_68 = uVar5;
      FUN_18063ab10(pbVar7 + uVar13,0,uVar11);
      (pbVar7 + uVar13)[uVar11] = 0;
    }
  }
  else {
    pbVar7 = local_78;
    if (0xf < uVar6) {
      pbVar7 = pbVar12;
    }
    uStack_68 = uVar5;
    pbVar7[uVar5] = 0;
  }
  uVar6 = uStack_60;
  pbVar12 = (byte *)local_78._0_8_;
  uVar13 = uStack_68;
  goto LAB_1801bda16;
}



