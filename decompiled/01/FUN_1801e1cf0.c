// FUN_1801e1cf0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801e1cf0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801e1cf0(undefined8 *param_1,undefined1 *param_2,undefined1 *param_3,ulonglong param_4,
                  int param_5)

{
  char cVar1;
  bool bVar2;
  ulonglong uVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  int iVar6;
  ulonglong *puVar7;
  longlong lVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  int iVar12;
  undefined1 *puVar13;
  undefined1 auStack_3a8 [32];
  int local_388;
  undefined1 *local_378;
  undefined4 uStack_370;
  undefined1 local_368 [773];
  undefined1 local_63 [11];
  ulonglong local_58;
  
  local_58 = DAT_1808d5f00 ^ (ulonglong)auStack_3a8;
  if (param_4 == 0) {
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
LAB_1801e1d8a:
    puVar11 = (ulonglong *)(&DAT_1806a93d0 + (longlong)(((param_5 + 10) * (param_5 + -1)) / 2) * 8);
    iVar12 = param_5;
  }
  else {
    if (param_5 == 0) {
      param_5 = 1;
      goto LAB_1801e1d8a;
    }
    if ((param_5 < 1000000) && (param_5 < 0x10)) goto LAB_1801e1d8a;
    iVar12 = 1000000;
    if (param_5 < 1000000) {
      iVar12 = param_5;
    }
    puVar11 = (ulonglong *)&DAT_1806a99f0;
    param_5 = iVar12;
    if (0x135 < iVar12) {
      param_5 = 0x135;
    }
  }
  puVar7 = puVar11;
  if (iVar12 < 0x9c) {
    for (; (puVar7 != puVar11 + (longlong)param_5 + 5 && (*puVar7 < param_4)); puVar7 = puVar7 + 1)
    {
    }
  }
  else {
    uVar10 = (longlong)(puVar11 + (longlong)param_5 + 5) - (longlong)puVar11 >> 3;
    while (uVar3 = uVar10, 0 < (longlong)uVar3) {
      uVar10 = uVar3 >> 1;
      if (puVar7[uVar10] < param_4) {
        puVar7 = puVar7 + uVar10 + 1;
        uVar10 = uVar3 + (-1 - uVar10);
      }
    }
  }
  iVar6 = (int)((longlong)puVar7 - (longlong)puVar11 >> 3) + -5;
  if ((iVar6 < iVar12) && (-5 < iVar6)) {
    bVar2 = true;
    iVar12 = (iVar12 - iVar6) + -1;
    if (0x42 < iVar12) {
      iVar12 = 0x42;
    }
    if (iVar12 < 0) {
      iVar6 = 6;
    }
    else {
      iVar6 = iVar12;
      if (999999999 < iVar12) {
        puVar5 = local_63;
        puVar9 = (undefined1 *)0x0;
        puVar13 = (undefined1 *)0x0;
        goto LAB_1801e1f52;
      }
    }
    local_388 = iVar6;
    plVar4 = (longlong *)FUN_1801e35f0(&local_378,local_368,local_63);
    puVar9 = (undefined1 *)0x0;
    puVar5 = (undefined1 *)*plVar4;
    puVar13 = (undefined1 *)0x0;
  }
  else {
    iVar12 = iVar12 + -1;
    bVar2 = false;
    if (0x2fe < iVar12) {
      iVar12 = 0x2fe;
    }
    if (iVar12 < 0) {
      iVar6 = 6;
LAB_1801e1ef4:
      local_388 = iVar6;
      FUN_1801e3e40(&local_378,local_368,local_63);
    }
    else {
      iVar6 = iVar12;
      if (iVar12 < 1000000000) goto LAB_1801e1ef4;
      local_378 = local_63;
      uStack_370 = 0x84;
    }
    puVar9 = local_378;
    puVar5 = (undefined1 *)thunk_FUN_1805f7e70(local_368,local_378,0x65);
    puVar13 = puVar5;
  }
LAB_1801e1f52:
  if (0 < iVar12) {
    cVar1 = puVar5[-1];
    while (cVar1 == '0') {
      cVar1 = puVar5[-2];
      puVar5 = puVar5 + -1;
    }
    if (puVar5[-1] == '.') {
      puVar5 = puVar5 + -1;
    }
  }
  lVar8 = (longlong)puVar5 - (longlong)local_368;
  if ((longlong)param_3 - (longlong)param_2 < lVar8) {
LAB_1801e1f8d:
    *param_1 = param_3;
    *(undefined4 *)(param_1 + 1) = 0x84;
  }
  else {
    FUN_18063aed0(param_2,local_368,lVar8);
    param_2 = param_2 + lVar8;
    if (!bVar2) {
      lVar8 = (longlong)puVar9 - (longlong)puVar13;
      if ((longlong)param_3 - (longlong)param_2 < lVar8) goto LAB_1801e1f8d;
      FUN_18063aed0(param_2,puVar13,lVar8);
      param_2 = param_2 + lVar8;
    }
    *param_1 = param_2;
    *(undefined4 *)(param_1 + 1) = 0;
  }
}



