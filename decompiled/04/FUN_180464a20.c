// FUN_180464a20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180464a20 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180464a20(undefined1 (*param_1) [16],longlong *param_2,longlong param_3)

{
  undefined1 (*pauVar1) [16];
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  undefined **ppuVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined1 (*pauVar8) [16];
  longlong lVar9;
  undefined1 *puVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  undefined1 auStack_108 [32];
  uint local_e8;
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 (*local_80) [16];
  undefined1 local_78 [32];
  undefined1 local_58 [16];
  ulonglong local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_108;
  uVar14 = 0;
  local_e8 = 0;
  uVar11 = 5;
  lVar13 = 0;
  do {
    lVar9 = lVar13 + 1;
    local_80 = param_1;
    if (*(char *)(*param_2 + lVar13) != (&DAT_1807c6a98)[lVar13]) goto LAB_180464ab1;
    lVar13 = lVar9;
  } while (lVar9 != 5);
  if (DAT_180cd6b78 == 0) {
LAB_180464ab1:
    ppuVar5 = &PTR_180700558;
    if ((undefined **)param_2[3] != (undefined **)0x0) {
      ppuVar5 = (undefined **)param_2[3];
    }
  }
  else {
    ppuVar5 = (undefined **)(**(code **)(*(longlong *)DAT_180cd6b78 + 0x10))();
  }
  *param_1 = (undefined1  [16])0x0;
  *(undefined8 *)param_1[1] = 0;
  *(undefined8 *)(param_1[1] + 8) = 0;
  lVar13 = -1;
  lVar9 = -1;
  do {
    lVar9 = lVar9 + 1;
  } while (*(char *)((longlong)ppuVar5 + lVar9) != '\0');
  FUN_18015ba30(param_1);
  local_e8 = 1;
  if ((((int)param_2[1] != 2) || (*(char *)((longlong)param_2 + 0xc) != '\x02')) ||
     (DAT_180cd6bf8 == 0)) goto LAB_180464d63;
  lVar9 = (**(code **)(*(longlong *)DAT_180cd6bf8 + 0x10))();
  local_58 = (undefined1  [16])0x0;
  local_48 = 0;
  local_40 = 0;
  do {
    lVar13 = lVar13 + 1;
  } while (*(char *)(lVar9 + lVar13) != '\0');
  FUN_18015ba30(local_58,lVar9,lVar13);
  uVar2 = local_48;
  pauVar8 = &local_58;
  if (0xf < local_40) {
    pauVar8 = (undefined1 (*) [16])local_58._0_8_;
  }
  if (local_48 == 4) {
    lVar13 = 0;
    do {
      lVar9 = lVar13 + 1;
      if ((*pauVar8)[lVar13] != (&DAT_1806bc17c)[lVar13]) {
        uVar3 = -(uint)((byte)(*pauVar8)[lVar13] < (byte)(&DAT_1806bc17c)[lVar13]) | 1;
        goto LAB_180464b9f;
      }
      lVar13 = lVar9;
    } while (lVar9 != 4);
    uVar3 = 0;
LAB_180464b9f:
    if (uVar3 != 0) goto LAB_180464bd6;
    local_a0 = (undefined1  [16])0x0;
    local_90 = (undefined1  [16])0x0;
    FUN_18015ba30(local_a0,"AK-47",5);
    pauVar8 = &local_a0;
    uVar11 = 3;
  }
  else {
LAB_180464bd6:
    pauVar8 = &local_58;
    if (0xf < local_40) {
      pauVar8 = (undefined1 (*) [16])local_58._0_8_;
    }
    if (local_48 == 4) {
      lVar13 = 0;
      do {
        lVar9 = lVar13 + 1;
        if ((*pauVar8)[lVar13] != (&DAT_1806bc3b8)[lVar13]) {
          uVar14 = -(uint)((byte)(*pauVar8)[lVar13] < (byte)(&DAT_1806bc3b8)[lVar13]) | 1;
          break;
        }
        lVar13 = lVar9;
      } while (lVar9 != 4);
      if (uVar14 != 0) goto LAB_180464c45;
      local_c0 = (undefined1  [16])0x0;
      local_b0 = (undefined1  [16])0x0;
      FUN_18015ba30(local_c0,&DAT_1806bc3a8,4);
      puVar10 = local_c0;
    }
    else {
LAB_180464c45:
      local_e0 = (undefined1  [16])0x0;
      local_d0 = (undefined1  [16])0x0;
      pauVar8 = &local_58;
      if (0xf < local_40) {
        pauVar8 = (undefined1 (*) [16])local_58._0_8_;
      }
      if (0x7fffffffffffffff < local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_18015bb70();
      }
      if (local_48 < 0x10) {
        local_d0._8_8_ = 0xf;
        local_d0._0_8_ = local_48;
        local_e0 = *pauVar8;
      }
      else {
        uVar6 = local_48 | 0xf;
        uVar12 = 0x7fffffffffffffff;
        if ((uVar6 < 0x8000000000000000) && (uVar12 = uVar6, uVar6 < 0x16)) {
          uVar12 = 0x16;
        }
        uVar7 = FUN_18015bca0(uVar12 + 1);
        local_e0._0_8_ = uVar7;
        local_d0._8_8_ = uVar12;
        local_d0._0_8_ = uVar2;
        FUN_18063aed0(uVar7,pauVar8,uVar2 + 1);
      }
      puVar10 = local_e0;
      uVar11 = 9;
    }
    local_e8 = uVar11;
    pauVar8 = (undefined1 (*) [16])FUN_18015b360(local_78,puVar10);
    uVar11 = uVar11 | 0x10;
  }
  local_e8 = uVar11;
  if (param_1 != pauVar8) {
    pauVar1 = pauVar8 + 1;
    if (0xf < *(ulonglong *)(pauVar8[1] + 8)) {
      pauVar8 = *(undefined1 (**) [16])*pauVar8;
    }
    FUN_180113930(param_1,pauVar8,*(undefined8 *)*pauVar1);
  }
  if ((uVar11 & 0x10) != 0) {
    uVar11 = uVar11 & 0xffffffef;
    FUN_18015c010(local_78);
  }
  if ((uVar11 & 8) != 0) {
    uVar11 = uVar11 & 0xfffffff7;
    FUN_18015c010(local_e0);
  }
  if ((uVar11 & 4) != 0) {
    uVar11 = uVar11 & 0xfffffffb;
    FUN_18015c010(local_c0);
  }
  if ((uVar11 & 2) != 0) {
    FUN_18015c010(local_a0);
  }
  FUN_18015c010(local_58);
LAB_180464d63:
  if (*(char *)(param_3 + 0x38) == '\x01') {
    if (*(ulonglong *)(param_1[1] + 8) < 0x10) {
      pauVar8 = param_1;
    }
    else {
      pauVar8 = *(undefined1 (**) [16])*param_1;
    }
    lVar13 = *(longlong *)param_1[1];
    puVar10 = *pauVar8;
    for (; pauVar8 != (undefined1 (*) [16])(puVar10 + lVar13);
        pauVar8 = (undefined1 (*) [16])(*pauVar8 + 1)) {
      iVar4 = toupper((uint)(byte)(*pauVar8)[0]);
      (*pauVar8)[0] = (char)iVar4;
    }
  }
  else if (*(char *)(param_3 + 0x38) == '\x02') {
    if (*(ulonglong *)(param_1[1] + 8) < 0x10) {
      pauVar8 = param_1;
    }
    else {
      pauVar8 = *(undefined1 (**) [16])*param_1;
    }
    lVar13 = *(longlong *)param_1[1];
    puVar10 = *pauVar8;
    for (; pauVar8 != (undefined1 (*) [16])(puVar10 + lVar13);
        pauVar8 = (undefined1 (*) [16])(*pauVar8 + 1)) {
      iVar4 = tolower((uint)(byte)(*pauVar8)[0]);
      (*pauVar8)[0] = (char)iVar4;
    }
  }
}



