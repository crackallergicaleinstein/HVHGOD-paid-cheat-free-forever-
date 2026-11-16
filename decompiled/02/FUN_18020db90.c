// FUN_18020db90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18020db90 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_18020db90(undefined8 param_1,undefined1 (*param_2) [16],longlong param_3,int *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 (*pauVar6) [16];
  ulonglong *puVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong *plVar14;
  undefined1 auStack_228 [32];
  ulonglong local_208;
  undefined *local_200;
  undefined8 local_1f8;
  undefined1 (*local_1e8) [16];
  undefined8 local_1d8;
  ulonglong uStack_1d0;
  ulonglong uStack_1c8;
  ulonglong uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  ulonglong local_1a8;
  ulonglong local_1a0;
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  undefined1 local_170 [16];
  undefined1 auStack_160 [16];
  undefined1 local_150 [16];
  undefined1 auStack_140 [16];
  undefined1 local_130 [16];
  undefined1 local_120 [16];
  undefined1 local_110 [16];
  undefined1 auStack_100 [16];
  undefined1 local_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 local_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined1 local_90 [40];
  ulonglong local_68;
  ulonglong uStack_60;
  ulonglong uStack_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_228;
  local_1e8 = param_2;
  if ((param_4 == (int *)0x0) || (*param_4 == 0)) {
    FUN_18015b360(param_2,param_3 + 0x88);
  }
  plVar14 = (longlong *)(param_3 + 0x88);
  if (0xf < *(ulonglong *)(param_3 + 0xa0)) {
    plVar14 = *(longlong **)(param_3 + 0x88);
  }
  uVar9 = *(ulonglong *)(param_3 + 0x98);
  if (uVar9 == 0) {
    plVar14 = (longlong *)(param_3 + 0x28);
    if (0xf < *(ulonglong *)(param_3 + 0x40)) {
      plVar14 = (longlong *)*plVar14;
    }
    uVar9 = *(ulonglong *)(param_3 + 0x38);
  }
  if (uVar9 != 0) {
    lVar4 = -1;
    if (uVar9 - 1 != -1) {
      lVar4 = uVar9 - 1;
    }
    lVar11 = lVar4 + 1 + (longlong)plVar14;
    lVar4 = thunk_FUN_1805f7d20(plVar14,lVar11,0x2f);
    if ((lVar4 != lVar11) && (lVar4 - (longlong)plVar14 != -1)) {
      uVar5 = (lVar4 - (longlong)plVar14) + 1;
      if (uVar9 < uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_18015ac40();
      }
      plVar14 = (longlong *)((longlong)plVar14 + uVar5);
      uVar13 = 0xffffffffffffffff;
      if (uVar9 - uVar5 != 0xffffffffffffffff) {
        uVar13 = uVar9 - uVar5;
      }
      goto LAB_18020dc6b;
    }
  }
  uVar13 = uVar9;
LAB_18020dc6b:
  local_1d8 = 0xdb35e39b27e1c185;
  local_1e8 = (undefined1 (*) [16])0xa05181ee77d57a06;
  uStack_1d0 = 0xa05181ee77d57a06;
  local_1b8 = (undefined8 *)0x746867696c5f;
  uStack_1b0 = 0;
  local_130 = (undefined1  [16])0x0;
  local_120 = (undefined1  [16])0x0;
  FUN_18015ba30(local_130,plVar14,uVar13);
  local_68 = 0xdb35e39b27e1c185;
  uStack_60 = 0xa05181ee77d57a06;
  uStack_58 = 0x929654b1461b7377;
  local_1e8 = (undefined1 (*) [16])0xa5cea54bfef7110;
  uStack_50 = 0xa5cea54bfef7110;
  local_1d8 = 0x6665642f6e6f6365;
  uStack_1d0 = 0x6e65675f746c7561;
  uStack_1c8 = 0x2f646574617265;
  uStack_1c0 = 0;
  local_198 = (undefined1  [16])0x0;
  local_188 = (undefined1  [16])0x0;
  lVar4 = -1;
  do {
    lVar11 = lVar4 + -0x3f;
    lVar4 = lVar4 + 1;
  } while (local_198[lVar11] != '\0');
  FUN_18015ba30(local_198,&local_1d8);
  FUN_18015a6e0(local_90);
  pauVar6 = (undefined1 (*) [16])FUN_18015b2a0(local_90,&DAT_1807cd428,1);
  local_150 = *pauVar6;
  auStack_140 = pauVar6[1];
  (*pauVar6)[0] = 0;
  *(undefined8 *)pauVar6[1] = 0;
  *(undefined8 *)(pauVar6[1] + 8) = 0xf;
  plVar14 = (longlong *)(param_4 + 2);
  plVar10 = plVar14;
  if (0xf < *(ulonglong *)(param_4 + 8)) {
    plVar10 = (longlong *)*plVar14;
  }
  pauVar6 = (undefined1 (*) [16])FUN_18015b2a0(local_150,plVar10,*(undefined8 *)(param_4 + 6));
  local_170 = *pauVar6;
  auStack_160 = pauVar6[1];
  *(undefined8 *)(pauVar6[1] + 8) = 0xf;
  (*pauVar6)[0] = 0;
  *(undefined8 *)pauVar6[1] = 0;
  lVar4 = -1;
  do {
    lVar11 = lVar4 + -0x1f;
    lVar4 = lVar4 + 1;
  } while (local_198[lVar11] != '\0');
  puVar7 = (ulonglong *)FUN_18015b2a0(local_170,&local_1b8);
  local_1d8 = *puVar7;
  uStack_1d0 = puVar7[1];
  uStack_1c8 = puVar7[2];
  uStack_1c0 = puVar7[3];
  *(undefined1 *)puVar7 = 0;
  puVar7[2] = 0;
  puVar7[3] = 0xf;
  local_68 = local_1d8;
  uStack_60 = uStack_1d0;
  uStack_58 = uStack_1c8;
  uStack_50 = uStack_1c0;
  FUN_18015c010(local_170);
  FUN_18015c010(local_150);
  FUN_18015c010(local_90);
  FUN_18015c010(local_198);
  FUN_18015c010(local_130);
  local_208 = uStack_1c8;
  if (0x7fffffffffffffff - uStack_1c8 < 4) {
                    /* WARNING: Subroutine does not return */
    FUN_18015bb70();
  }
  local_1f8 = 4;
  local_200 = &DAT_1807cd3f8;
  FUN_18015a9c0(&local_1b8);
  puVar8 = &local_1b8;
  if (0xf < local_1a0) {
    puVar8 = local_1b8;
  }
  uVar13 = 0xcbf29ce484222325;
  uVar9 = 0;
  if (local_1a8 != 0) {
    do {
      uVar13 = (uVar13 ^ *(byte *)((longlong)puVar8 + uVar9)) * 0x100000001b3;
      uVar9 = uVar9 + 1;
    } while (uVar9 < local_1a8);
  }
  lVar4 = FUN_180177b00(&DAT_180cc9d08,&local_1d8,&local_1b8,uVar13);
  lVar4 = *(longlong *)(lVar4 + 8);
  FUN_18015c010(&local_1b8);
  if (lVar4 == 0) {
    local_1b8 = (undefined8 *)0x746867696c5f;
    uStack_1b0 = 0;
    local_198._8_8_ = 0xa05181ee77d57a06;
    local_198._0_8_ = 0xdb35e39b27e1c185;
    local_1e8 = (undefined1 (*) [16])0xa5cea54bfef7110;
    local_188._8_8_ = 0xa5cea54bfef7110;
    local_188._0_8_ = 0x929654b1461b7377;
    local_1d8 = 0x6665642f6e6f6365;
    uStack_1d0 = 0x6e65675f746c7561;
    uStack_1c8 = 0x2f646574617265;
    uStack_1c0 = 0;
    local_b0 = (undefined1  [16])0x0;
    local_a0 = (undefined1  [16])0x0;
    lVar4 = -1;
    do {
      lVar11 = lVar4 + -0x3f;
      lVar4 = lVar4 + 1;
    } while (local_198[lVar11] != '\0');
    FUN_18015ba30(local_b0,&local_1d8);
    plVar10 = (longlong *)(param_3 + 0x28);
    if (0xf < *(ulonglong *)(param_3 + 0x40)) {
      plVar10 = (longlong *)*plVar10;
    }
    pauVar6 = (undefined1 (*) [16])FUN_18015b2a0(local_b0,plVar10,*(undefined8 *)(param_3 + 0x38));
    local_d0 = *pauVar6;
    auStack_c0 = pauVar6[1];
    *(undefined8 *)(pauVar6[1] + 8) = 0xf;
    (*pauVar6)[0] = 0;
    *(undefined8 *)pauVar6[1] = 0;
    pauVar6 = (undefined1 (*) [16])FUN_18015b2a0(local_d0,&DAT_1807cd428,1);
    local_f0 = *pauVar6;
    auStack_e0 = pauVar6[1];
    (*pauVar6)[0] = 0;
    *(undefined8 *)pauVar6[1] = 0;
    *(undefined8 *)(pauVar6[1] + 8) = 0xf;
    if (0xf < *(ulonglong *)(param_4 + 8)) {
      plVar14 = (longlong *)*plVar14;
    }
    pauVar6 = (undefined1 (*) [16])FUN_18015b2a0(local_f0,plVar14,*(undefined8 *)(param_4 + 6));
    local_110 = *pauVar6;
    auStack_100 = pauVar6[1];
    *(undefined8 *)(pauVar6[1] + 8) = 0xf;
    (*pauVar6)[0] = 0;
    *(undefined8 *)pauVar6[1] = 0;
    lVar4 = -1;
    do {
      lVar12 = lVar4 + 1;
      lVar11 = lVar4 + -0x1f;
      lVar4 = lVar12;
    } while (local_198[lVar11] != '\0');
    puVar8 = (undefined8 *)FUN_18015b2a0(local_110,&local_1b8,lVar12);
    *param_2 = (undefined1  [16])0x0;
    *(undefined8 *)param_2[1] = 0;
    *(undefined8 *)(param_2[1] + 8) = 0;
    uVar1 = puVar8[1];
    uVar2 = puVar8[2];
    uVar3 = puVar8[3];
    *(undefined8 *)*param_2 = *puVar8;
    *(undefined8 *)(*param_2 + 8) = uVar1;
    *(undefined8 *)param_2[1] = uVar2;
    *(undefined8 *)(param_2[1] + 8) = uVar3;
    *(undefined1 *)puVar8 = 0;
    puVar8[2] = 0;
    puVar8[3] = 0xf;
    FUN_18015c010(local_110);
    FUN_18015c010(local_f0);
    FUN_18015c010(local_d0);
    FUN_18015c010(local_b0);
    FUN_18015c010(&local_68);
  }
  else {
    *(ulonglong *)*param_2 = local_68;
    *(ulonglong *)(*param_2 + 8) = uStack_60;
    *(ulonglong *)param_2[1] = uStack_58;
    *(ulonglong *)(param_2[1] + 8) = uStack_50;
    uStack_58 = 0;
    uStack_50 = 0xf;
    local_68 = local_68 & 0xffffffffffffff00;
    FUN_18015c010(&local_68);
  }
}



