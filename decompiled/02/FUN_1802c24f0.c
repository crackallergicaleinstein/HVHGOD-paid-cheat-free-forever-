// FUN_1802c24f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802c24f0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802c24f0(ulonglong *param_1,ulonglong *param_2,ulonglong *param_3,longlong param_4,
                  longlong param_5,undefined8 param_6,longlong param_7,undefined8 param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  byte bVar7;
  ulonglong *puVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  undefined8 local_d0;
  longlong local_c8;
  undefined8 local_c0;
  ulonglong local_b8;
  ulonglong uStack_b0;
  ulonglong uStack_a8;
  ulonglong uStack_a0;
  ulonglong local_98;
  ulonglong uStack_90;
  ulonglong uStack_88;
  ulonglong uStack_80;
  int local_78;
  ulonglong local_70;
  ulonglong uStack_68;
  ulonglong uStack_60;
  ulonglong uStack_58;
  int local_50;
  ulonglong local_48;
  
  if (param_2 == param_3) {
    return;
  }
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_f8;
  if (param_1 == param_2) {
  }
  iVar1 = (int)param_2[4];
  while( true ) {
    if ((iVar1 == 2) || (iVar1 - 3U < 4)) {
      bVar7 = 0;
    }
    else {
      bVar7 = (iVar1 != 1) + 1;
    }
    iVar2 = (int)param_1[4];
    if (((iVar2 != 2) && (3 < iVar2 - 3U)) && (bVar7 < (byte)((iVar2 != 1) + 1U))) break;
    param_1 = param_1 + 5;
    param_4 = param_4 + -1;
    if (param_1 == param_2) {
    }
  }
  do {
    local_d8 = param_5;
    puVar8 = param_3;
    param_5 = local_d8 + -1;
    param_3 = puVar8 + -5;
    if (param_2 == param_3) {
      local_b8 = *param_2;
      uStack_b0 = param_2[1];
      uStack_a8 = param_2[2];
      uStack_a0 = param_2[3];
      *(undefined1 *)param_2 = 0;
      param_2[2] = 0;
      param_2[3] = 0xf;
      local_70 = local_b8;
      uStack_68 = uStack_b0;
      uStack_60 = uStack_a8;
      uStack_58 = uStack_a0;
      local_50 = iVar1;
      FUN_1802c2290(param_1,param_2,puVar8);
      if (param_1 != &local_70) {
        FUN_18015c010(param_1);
        *param_1 = local_b8;
        param_1[1] = uStack_b0;
        param_1[2] = uStack_a8;
        param_1[3] = uStack_a0;
        uStack_60 = 0;
        uStack_58 = 0xf;
        local_70 = local_70 & 0xffffffffffffff00;
      }
      *(int *)(param_1 + 4) = iVar1;
      puVar8 = &local_70;
      goto LAB_1802c27b8;
    }
    iVar3 = (int)puVar8[-1];
    if ((iVar3 == 2) || (iVar3 - 3U < 4)) {
      bVar7 = 0;
    }
    else {
      bVar7 = (iVar3 != 1) + 1;
    }
    iVar3 = (int)param_2[-1];
  } while (((iVar3 == 2) || (iVar3 == 3)) ||
          ((iVar3 == 4 || (((iVar3 == 5 || (iVar3 == 6)) || ((byte)((iVar3 != 1) + 1U) <= bVar7)))))
          );
  if (param_4 == 1) {
    local_b8 = *param_1;
    uStack_b0 = param_1[1];
    uStack_a8 = param_1[2];
    uStack_a0 = param_1[3];
    *(undefined1 *)param_1 = 0;
    param_1[2] = 0;
    param_1[3] = 0xf;
    puVar10 = param_1;
    local_98 = local_b8;
    uStack_90 = uStack_b0;
    uStack_88 = uStack_a8;
    uStack_80 = uStack_a0;
    local_78 = iVar2;
    if (param_2 != puVar8) {
      puVar9 = param_2;
      do {
        if (puVar10 != puVar9) {
          FUN_18015c010(puVar10);
          uVar4 = puVar9[1];
          uVar5 = puVar9[2];
          uVar6 = puVar9[3];
          *puVar10 = *puVar9;
          puVar10[1] = uVar4;
          puVar10[2] = uVar5;
          puVar10[3] = uVar6;
          puVar9[2] = 0;
          puVar9[3] = 0xf;
          *(undefined1 *)puVar9 = 0;
        }
        puVar10 = puVar10 + 5;
        *(int *)((undefined1 *)((longlong)param_1 + (0x20 - (longlong)param_2)) + (longlong)puVar9)
             = (int)puVar9[4];
        puVar9 = puVar9 + 5;
      } while (puVar9 != puVar8);
    }
    if (puVar10 != &local_98) {
      FUN_18015c010(puVar10);
      *puVar10 = local_b8;
      puVar10[1] = uStack_b0;
      puVar10[2] = uStack_a8;
      puVar10[3] = uStack_a0;
      uStack_88 = 0;
      uStack_80 = 0xf;
      local_98 = local_98 & 0xffffffffffffff00;
    }
    *(int *)(puVar10 + 4) = iVar2;
    puVar8 = &local_98;
LAB_1802c27b8:
    FUN_18015c010(puVar8);
  }
  else if ((local_d8 < param_4) || (param_7 < param_4)) {
    if (param_7 < local_d8) {
      local_c0 = param_8;
      local_c8 = param_7;
      local_d0 = param_6;
      FUN_1802c31d0(param_1,param_2,puVar8,param_4);
    }
    else {
      FUN_1802c2f60(param_1,param_2,puVar8,param_6);
    }
  }
  else {
    FUN_1802c2d70(param_1,param_2,puVar8,param_6);
  }
}



