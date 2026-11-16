// FUN_1802c7330 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802c7330 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802c7330(undefined8 *param_1,undefined1 (*param_2) [16])

{
  char *_Buf2;
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 (*pauVar8) [16];
  ulonglong uVar9;
  char **ppcVar10;
  ulonglong uVar11;
  size_t _Size;
  undefined1 (*pauVar12) [16];
  ulonglong uVar13;
  undefined1 auStack_108 [32];
  undefined1 local_e8 [16];
  ulonglong local_d8;
  ulonglong local_d0;
  undefined4 local_c8;
  undefined1 local_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 (*local_a0 [2]) [16];
  ulonglong local_90;
  ulonglong local_88;
  char *local_80 [7];
  char *local_48 [2];
  
  local_48[0] = (char *)(DAT_1808d5f00 ^ (ulonglong)auStack_108);
  local_c8 = 0;
  local_e8 = *param_2;
  FUN_1802c7200(local_a0,local_e8,0x200);
  uVar9 = local_88;
  uVar13 = local_90;
  pauVar12 = local_a0[0];
  local_80[0] = "Got hit by ";
  local_80[1] = "Got hurt by ";
  local_80[2] = "Missed shot due to ";
  local_80[3] = "Mismatched due to ";
  local_80[4] = "Hit ";
  local_80[5] = "Hurt ";
  local_80[6] = "Took ";
  ppcVar10 = local_80;
  uVar11 = 0xffffffffffffffff;
  do {
    _Buf2 = *ppcVar10;
    pauVar8 = (undefined1 (*) [16])local_a0;
    if (0xf < uVar9) {
      pauVar8 = pauVar12;
    }
    _Size = 0xffffffffffffffff;
    do {
      _Size = _Size + 1;
    } while (_Buf2[_Size] != '\0');
    if ((_Size <= uVar13) && (iVar5 = memcmp(pauVar8,_Buf2,_Size), iVar5 == 0)) goto LAB_1802c7430;
    ppcVar10 = ppcVar10 + 1;
  } while (ppcVar10 != local_80 + 7);
LAB_1802c7468:
  if (uVar13 == 0) {
    local_c0 = (undefined1  [16])0x0;
    auStack_b0 = (undefined1  [16])0x0;
    FUN_18015ba30(local_c0,"Event confirmed",0xf);
    puVar7 = (undefined8 *)local_c0;
    bVar4 = true;
    bVar3 = false;
  }
  else {
    local_e8 = (undefined1  [16])0x0;
    pauVar8 = (undefined1 (*) [16])local_a0;
    if (0xf < uVar9) {
      pauVar8 = pauVar12;
    }
    if (0x7fffffffffffffff < uVar13) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bb70();
    }
    if (uVar13 < 0x10) {
      local_d8 = uVar13;
      local_d0 = 0xf;
      local_e8 = *pauVar8;
    }
    else {
      uVar11 = uVar13 | 0xf;
      uVar9 = 0x7fffffffffffffff;
      if ((uVar11 < 0x8000000000000000) && (uVar9 = uVar11, uVar11 < 0x16)) {
        uVar9 = 0x16;
      }
      uVar6 = FUN_18015bca0(uVar9 + 1);
      local_e8._0_8_ = uVar6;
      local_d8 = uVar13;
      local_d0 = uVar9;
      FUN_18063aed0(uVar6,pauVar8,uVar13 + 1);
    }
    puVar7 = (undefined8 *)local_e8;
    bVar4 = false;
    bVar3 = true;
  }
  uVar6 = puVar7[1];
  uVar1 = puVar7[2];
  uVar2 = puVar7[3];
  *param_1 = *puVar7;
  param_1[1] = uVar6;
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  *(undefined1 *)puVar7 = 0;
  puVar7[2] = 0;
  puVar7[3] = 0xf;
  if (bVar3) {
    FUN_18015c010(local_e8);
  }
  if (bVar4) {
    FUN_18015c010(local_c0);
  }
  FUN_18015c010(local_a0);
LAB_1802c7430:
  do {
    uVar11 = uVar11 + 1;
  } while (_Buf2[uVar11] != '\0');
  if (uVar13 < uVar11) {
    uVar11 = uVar13;
  }
  pauVar8 = (undefined1 (*) [16])local_a0;
  if (0xf < uVar9) {
    pauVar8 = pauVar12;
  }
  uVar13 = uVar13 - uVar11;
  FUN_18063aed0(pauVar8,*pauVar8 + uVar11,uVar13 + 1);
  local_90 = uVar13;
  pauVar12 = local_a0[0];
  uVar9 = local_88;
  goto LAB_1802c7468;
}



