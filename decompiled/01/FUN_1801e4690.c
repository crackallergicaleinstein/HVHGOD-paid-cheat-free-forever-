// FUN_1801e4690 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801e4690 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801e4690(undefined8 *param_1,undefined1 *param_2,undefined1 *param_3,float param_4,
                  int param_5)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  float *pfVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  float *pfVar7;
  longlong lVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 auStack_118 [32];
  int local_f8;
  undefined1 *local_e8;
  undefined4 uStack_e0;
  undefined1 local_d8 [117];
  undefined1 local_63 [11];
  ulonglong local_58;
  
  local_58 = DAT_1808d5f00 ^ (ulonglong)auStack_118;
  if (param_4 == 0.0) {
    if (param_2 == param_3) {
      *param_1 = param_3;
      *(undefined4 *)(param_1 + 1) = 0x84;
    }
    *param_2 = 0x30;
    *param_1 = param_2 + 1;
    *(undefined4 *)(param_1 + 1) = 0;
  }
  if (param_5 < 0) {
    param_5 = 6;
LAB_1801e472a:
    pfVar7 = (float *)(&DAT_1806a9220 + (longlong)(((param_5 + 10) * (param_5 + -1)) / 2) * 4);
    iVar9 = param_5;
  }
  else {
    if (param_5 == 0) {
      param_5 = 1;
      goto LAB_1801e472a;
    }
    if ((param_5 < 1000000) && (param_5 < 8)) goto LAB_1801e472a;
    iVar9 = 1000000;
    if (param_5 < 1000000) {
      iVar9 = param_5;
    }
    pfVar7 = (float *)&DAT_1806a9320;
    param_5 = iVar9;
    if (0x27 < iVar9) {
      param_5 = 0x27;
    }
  }
  for (pfVar4 = pfVar7;
      (pfVar4 != pfVar7 + (longlong)param_5 + 5 && ((uint)*pfVar4 < (uint)param_4));
      pfVar4 = pfVar4 + 1) {
  }
  iVar3 = (int)((longlong)pfVar4 - (longlong)pfVar7 >> 2) + -5;
  if ((iVar3 < iVar9) && (-5 < iVar3)) {
    bVar2 = true;
    iVar9 = (iVar9 - iVar3) + -1;
    if (0x25 < iVar9) {
      iVar9 = 0x25;
    }
    if (iVar9 < 0) {
      iVar3 = 6;
    }
    else {
      iVar3 = iVar9;
      if (999999999 < iVar9) {
        puVar6 = local_63;
        puVar11 = (undefined1 *)0x0;
        puVar10 = (undefined1 *)0x0;
        goto LAB_1801e48b2;
      }
    }
    local_f8 = iVar3;
    plVar5 = (longlong *)FUN_1801e35f0(&local_e8,local_d8,local_63,(double)param_4);
    puVar11 = (undefined1 *)0x0;
    puVar6 = (undefined1 *)*plVar5;
    puVar10 = (undefined1 *)0x0;
  }
  else {
    iVar9 = iVar9 + -1;
    bVar2 = false;
    if (0x6f < iVar9) {
      iVar9 = 0x6f;
    }
    if (iVar9 < 0) {
      iVar3 = 6;
LAB_1801e4850:
      local_f8 = iVar3;
      FUN_1801e3e40(&local_e8,local_d8,local_63,(double)param_4);
    }
    else {
      iVar3 = iVar9;
      if (iVar9 < 1000000000) goto LAB_1801e4850;
      local_e8 = local_63;
      uStack_e0 = 0x84;
    }
    puVar11 = local_e8;
    puVar6 = (undefined1 *)thunk_FUN_1805f7e70(local_d8,local_e8,0x65);
    puVar10 = puVar6;
  }
LAB_1801e48b2:
  if (0 < iVar9) {
    cVar1 = puVar6[-1];
    while (cVar1 == '0') {
      cVar1 = puVar6[-2];
      puVar6 = puVar6 + -1;
    }
    if (puVar6[-1] == '.') {
      puVar6 = puVar6 + -1;
    }
  }
  lVar8 = (longlong)puVar6 - (longlong)local_d8;
  if ((longlong)param_3 - (longlong)param_2 < lVar8) {
LAB_1801e48ec:
    *param_1 = param_3;
    *(undefined4 *)(param_1 + 1) = 0x84;
  }
  else {
    FUN_18063aed0(param_2,local_d8,lVar8);
    param_2 = param_2 + lVar8;
    if (!bVar2) {
      lVar8 = (longlong)puVar11 - (longlong)puVar10;
      if ((longlong)param_3 - (longlong)param_2 < lVar8) goto LAB_1801e48ec;
      FUN_18063aed0(param_2,puVar10,lVar8);
      param_2 = param_2 + lVar8;
    }
    *param_1 = param_2;
    *(undefined4 *)(param_1 + 1) = 0;
  }
}



