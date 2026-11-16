// FUN_180121440 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180121440 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180121440(longlong param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 uVar4;
  char *pcVar5;
  short sVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  ulonglong uVar12;
  undefined1 auStack_248 [32];
  undefined1 *local_228;
  undefined1 local_218 [8];
  undefined8 local_210;
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined1 local_1c8 [32];
  undefined1 local_1a8;
  undefined8 local_1a0;
  undefined1 local_198;
  undefined8 local_190;
  undefined1 local_188 [56];
  undefined1 local_150 [64];
  undefined1 local_110 [72];
  longlong local_c8;
  ulonglong local_c0;
  longlong local_b8;
  ulonglong local_b0;
  longlong local_a8;
  ulonglong local_a0;
  longlong local_98;
  ulonglong local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined8 uStack_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_248;
  local_68 = (undefined1  [16])0x0;
  uStack_58 = 0;
  uStack_50 = 0;
LAB_1801214b0:
  switch(*(undefined4 *)(param_1 + 0x40)) {
  default:
    local_208 = (undefined1  [16])0x0;
    local_1f8 = (undefined1  [16])0x0;
    FUN_18015ba30(local_208,"value",5);
    uVar10 = FUN_18013fea0(param_1,local_188,0x10,local_208);
    local_1e8 = *(undefined8 *)(param_1 + 0x68);
    uStack_1e0 = *(undefined8 *)(param_1 + 0x70);
    local_1d8 = *(undefined8 *)(param_1 + 0x78);
    uVar10 = FUN_1801212b0(local_150,local_1d8,&local_1e8,uVar10);
    FUN_18013fdc0(param_1 + 0x48,local_1c8);
    *(undefined1 *)(param_2 + 5) = 1;
    if (*(char *)((longlong)param_2 + 0x29) != '\0') {
      FUN_1800a8410(local_110,uVar10);
                    /* WARNING: Subroutine does not return */
      FUN_180606630(local_110,&DAT_1808d1140);
    }
    FUN_18015c010(local_1c8);
    FUN_1800a7900(local_150);
    FUN_18015c010(local_188);
LAB_180122340:
    puVar11 = local_208;
LAB_180122345:
    FUN_18015c010(puVar11);
LAB_18012234c:
    FUN_180159650(local_68);
  case 1:
    local_218[0] = 1;
    FUN_180152940(param_2,local_218);
    break;
  case 2:
    local_218[0] = 0;
    FUN_180152940(param_2,local_218);
    break;
  case 3:
    if (param_2[1] == param_2[2]) {
      local_1a8 = 0;
      FUN_180111d10(&local_1a0,0);
      puVar11 = (undefined1 *)*param_2;
      uVar4 = *puVar11;
      *puVar11 = local_1a8;
      uVar10 = *(undefined8 *)(puVar11 + 8);
      *(undefined8 *)(puVar11 + 8) = local_1a0;
      local_1a8 = uVar4;
      local_1a0 = uVar10;
      FUN_1801409d0(&local_1a0);
    }
    else {
      pcVar5 = *(char **)(param_2[2] + -8);
      if (*pcVar5 == '\x02') {
        lVar3 = *(longlong *)(pcVar5 + 8);
        puVar11 = *(undefined1 **)(lVar3 + 8);
        if (puVar11 == *(undefined1 **)(lVar3 + 0x10)) {
          FUN_1801584c0(lVar3);
        }
        else {
          *puVar11 = 0;
          FUN_180111d10(puVar11 + 8,0);
          *(longlong *)(lVar3 + 8) = *(longlong *)(lVar3 + 8) + 0x10;
        }
      }
      else {
        local_198 = 0;
        FUN_180111d10(&local_190,0);
        puVar11 = (undefined1 *)param_2[4];
        uVar4 = *puVar11;
        *puVar11 = local_198;
        uVar10 = *(undefined8 *)(puVar11 + 8);
        *(undefined8 *)(puVar11 + 8) = local_190;
        local_198 = uVar4;
        local_190 = uVar10;
        FUN_1801409d0(&local_190);
      }
    }
    break;
  case 4:
    if ((*(int *)(param_1 + 0xd8) != 0x2e) && (*(longlong *)(param_1 + 0xe0) != -1)) {
      puVar9 = (undefined8 *)(param_1 + 0x98);
      if (0xf < *(ulonglong *)(param_1 + 0xb0)) {
        puVar9 = (undefined8 *)*puVar9;
      }
      *(undefined1 *)((longlong)puVar9 + *(longlong *)(param_1 + 0xe0)) = 0x2e;
    }
    if (param_2[1] == param_2[2]) {
      puVar8 = (undefined1 *)FUN_1800e64d0(local_88);
      puVar11 = (undefined1 *)*param_2;
      uVar4 = *puVar11;
      *puVar11 = *puVar8;
      *puVar8 = uVar4;
      uVar10 = *(undefined8 *)(puVar11 + 8);
      puVar9 = (undefined8 *)(puVar8 + 8);
      *(undefined8 *)(puVar11 + 8) = *puVar9;
      *puVar9 = uVar10;
      FUN_1801409d0(puVar9,*puVar8);
    }
    else {
      pcVar5 = *(char **)(param_2[2] + -8);
      if (*pcVar5 == '\x02') {
        lVar3 = *(longlong *)(pcVar5 + 8);
        lVar2 = *(longlong *)(lVar3 + 8);
        if (lVar2 == *(longlong *)(lVar3 + 0x10)) {
          FUN_180157c90(lVar3,lVar2,param_1 + 0x98);
        }
        else {
          FUN_1800e64d0(lVar2);
          *(longlong *)(lVar3 + 8) = *(longlong *)(lVar3 + 8) + 0x10;
        }
      }
      else {
        puVar8 = (undefined1 *)FUN_1800e64d0(local_78);
        puVar11 = (undefined1 *)param_2[4];
        uVar4 = *puVar11;
        *puVar11 = *puVar8;
        *puVar8 = uVar4;
        uVar10 = *(undefined8 *)(puVar11 + 8);
        puVar9 = (undefined8 *)(puVar8 + 8);
        *(undefined8 *)(puVar11 + 8) = *puVar9;
        *puVar9 = uVar10;
        FUN_1801409d0(puVar9,*puVar8);
      }
    }
    break;
  case 5:
    local_210 = *(undefined8 *)(param_1 + 200);
    FUN_1801526c0(param_2,&local_210);
    break;
  case 6:
    local_210 = *(undefined8 *)(param_1 + 0xc0);
    FUN_180152800(param_2,&local_210);
    break;
  case 7:
    uVar10 = *(undefined8 *)(param_1 + 0xd0);
    sVar6 = thunk_FUN_1806243d0();
    if (0 < sVar6) {
      local_218[0] = 0x27;
      FUN_18013fdc0(param_1 + 0x48,local_1c8);
      FUN_180141810(local_208);
      uVar10 = FUN_1801418b0(local_150);
      FUN_18013fdc0(param_1 + 0x48,&local_1e8);
      *(undefined1 *)(param_2 + 5) = 1;
      if (*(char *)((longlong)param_2 + 0x29) != '\0') {
        FUN_1800f66e0(local_188,uVar10);
                    /* WARNING: Subroutine does not return */
        FUN_180606630(local_188,&DAT_1808d0f80);
      }
      FUN_18015c010(&local_1e8);
      FUN_1800a7900(local_150);
      FUN_18015c010(local_208);
      puVar11 = local_1c8;
      goto LAB_180122345;
    }
    if ((*(int *)(param_1 + 0xd8) != 0x2e) && (*(longlong *)(param_1 + 0xe0) != -1)) {
      puVar9 = (undefined8 *)(param_1 + 0x98);
      if (0xf < *(ulonglong *)(param_1 + 0xb0)) {
        puVar9 = (undefined8 *)*puVar9;
      }
      *(undefined1 *)((longlong)puVar9 + *(longlong *)(param_1 + 0xe0)) = 0x2e;
    }
    local_210 = uVar10;
    FUN_180152570(param_2,&local_210);
    break;
  case 8:
    local_218[0] = 2;
    local_210 = FUN_180152460(param_2,local_218);
    FUN_1801543a0(param_2 + 1,&local_210);
    iVar7 = FUN_1801401f0(param_1);
    if (iVar7 != 10) {
      local_218[0] = 1;
      if (((longlong)uStack_50 < 0) && (uStack_50 != 0)) {
        local_b8 = -((~uStack_50 >> 5) * 4 + 4);
      }
      else {
        local_b8 = (uStack_50 >> 5) * 4;
      }
      local_b8 = local_68._0_8_ + local_b8;
      local_b0 = (ulonglong)((uint)uStack_50 & 0x1f);
      local_228 = local_218;
      FUN_180157500(local_68,local_1c8,&local_b8);
      goto LAB_1801214b0;
    }
    param_2[2] = param_2[2] + -8;
    break;
  case 9:
    local_218[0] = 1;
    local_210 = FUN_180152460(param_2,local_218);
    FUN_1801543a0(param_2 + 1,&local_210);
    iVar7 = FUN_1801401f0(param_1);
    if (iVar7 == 0xb) {
      param_2[2] = param_2[2] + -8;
      break;
    }
    if (*(int *)(param_1 + 0x40) == 4) {
      if ((*(int *)(param_1 + 0xd8) != 0x2e) && (*(longlong *)(param_1 + 0xe0) != -1)) {
        puVar9 = (undefined8 *)(param_1 + 0x98);
        if (0xf < *(ulonglong *)(param_1 + 0xb0)) {
          puVar9 = (undefined8 *)*puVar9;
        }
        *(undefined1 *)((longlong)puVar9 + *(longlong *)(param_1 + 0xe0)) = 0x2e;
      }
      uVar10 = FUN_180140e40(*(undefined8 *)(*(longlong *)(param_2[2] + -8) + 8),param_1 + 0x98);
      param_2[4] = uVar10;
      iVar7 = FUN_1801401f0(param_1);
      if (iVar7 == 0xc) goto code_r0x000180121572;
      local_208 = (undefined1  [16])0x0;
      local_1f8 = (undefined1  [16])0x0;
      FUN_18015ba30(local_208,"object separator",0x10);
      uVar10 = FUN_18013fea0(param_1,local_188,0xc,local_208);
      local_1e8 = *(undefined8 *)(param_1 + 0x68);
      uStack_1e0 = *(undefined8 *)(param_1 + 0x70);
      local_1d8 = *(undefined8 *)(param_1 + 0x78);
      uVar10 = FUN_1801212b0(local_110,local_1d8,&local_1e8,uVar10);
      FUN_18013fdc0(param_1 + 0x48,local_1c8);
      *(undefined1 *)(param_2 + 5) = 1;
      if (*(char *)((longlong)param_2 + 0x29) != '\0') {
        FUN_1800a8410(local_150,uVar10);
                    /* WARNING: Subroutine does not return */
        FUN_180606630(local_150,&DAT_1808d1140);
      }
      FUN_18015c010(local_1c8);
      FUN_1800a7900(local_110);
      FUN_18015c010(local_188);
    }
    else {
      local_208 = (undefined1  [16])0x0;
      local_1f8 = (undefined1  [16])0x0;
      FUN_18015ba30(local_208,"object key",10);
      uVar10 = FUN_18013fea0(param_1,local_188,4,local_208);
      local_1e8 = *(undefined8 *)(param_1 + 0x68);
      uStack_1e0 = *(undefined8 *)(param_1 + 0x70);
      local_1d8 = *(undefined8 *)(param_1 + 0x78);
      uVar10 = FUN_1801212b0(local_150,local_1d8,&local_1e8,uVar10);
      FUN_18013fdc0(param_1 + 0x48,local_1c8);
      *(undefined1 *)(param_2 + 5) = 1;
      if (*(char *)((longlong)param_2 + 0x29) != '\0') {
        FUN_1800a8410(local_110,uVar10);
                    /* WARNING: Subroutine does not return */
        FUN_180606630(local_110,&DAT_1808d1140);
      }
      FUN_18015c010(local_1c8);
      FUN_1800a7900(local_150);
      FUN_18015c010(local_188);
    }
    goto LAB_180122340;
  case 0xe:
    local_208 = (undefined1  [16])0x0;
    local_1f8 = (undefined1  [16])0x0;
    FUN_18015ba30(local_208,"value",5);
    uVar10 = FUN_18013fea0(param_1,local_188,0,local_208);
    local_1e8 = *(undefined8 *)(param_1 + 0x68);
    uStack_1e0 = *(undefined8 *)(param_1 + 0x70);
    local_1d8 = *(undefined8 *)(param_1 + 0x78);
    uVar10 = FUN_1801212b0(local_150,local_1d8,&local_1e8,uVar10);
    FUN_18013fdc0(param_1 + 0x48,local_1c8);
    *(undefined1 *)(param_2 + 5) = 1;
    if (*(char *)((longlong)param_2 + 0x29) != '\0') {
      FUN_1800a8410(local_110,uVar10);
                    /* WARNING: Subroutine does not return */
      FUN_180606630(local_110,&DAT_1808d1140);
    }
    FUN_18015c010(local_1c8);
    FUN_1800a7900(local_150);
    FUN_18015c010(local_188);
    goto LAB_180122340;
  case 0xf:
    local_1d8 = *(undefined8 *)(param_1 + 0x78);
    local_208 = (undefined1  [16])0x0;
    local_1f8 = (undefined1  [16])0x0;
    if (*(longlong *)(param_1 + 0x68) == 1) {
      FUN_18015ba30(local_208,
                    "attempting to parse an empty input; check that your input string or stream contains the expected JSON"
                    ,0x65);
      local_1e8 = *(undefined8 *)(param_1 + 0x68);
      uStack_1e0 = *(undefined8 *)(param_1 + 0x70);
      local_1d8 = *(undefined8 *)(param_1 + 0x78);
      uVar10 = FUN_1801212b0(local_150,local_1d8,&local_1e8,local_208);
      FUN_18013fdc0(param_1 + 0x48,local_1c8);
      *(undefined1 *)(param_2 + 5) = 1;
      if (*(char *)((longlong)param_2 + 0x29) != '\0') {
        FUN_1800a8410(local_110,uVar10);
                    /* WARNING: Subroutine does not return */
        FUN_180606630(local_110,&DAT_1808d1140);
      }
      FUN_18015c010(local_1c8);
      FUN_1800a7900(local_150);
    }
    else {
      FUN_18015ba30(local_208,"value",5);
      uVar10 = FUN_18013fea0(param_1,local_188,0x10,local_208);
      local_1e8 = *(undefined8 *)(param_1 + 0x68);
      uStack_1e0 = *(undefined8 *)(param_1 + 0x70);
      local_1d8 = *(undefined8 *)(param_1 + 0x78);
      uVar10 = FUN_1801212b0(local_150,local_1d8,&local_1e8,uVar10);
      FUN_18013fdc0(param_1 + 0x48,local_1c8);
      *(undefined1 *)(param_2 + 5) = 1;
      if (*(char *)((longlong)param_2 + 0x29) != '\0') {
        FUN_1800a8410(local_110,uVar10);
                    /* WARNING: Subroutine does not return */
        FUN_180606630(local_110,&DAT_1808d1140);
      }
      FUN_18015c010(local_1c8);
      FUN_1800a7900(local_150);
      FUN_18015c010(local_188);
    }
    goto LAB_180122340;
  }
  while( true ) {
    while( true ) {
      if (uStack_50 == 0) goto LAB_18012234c;
      if (((longlong)uStack_50 < 0) && (uStack_50 != 0)) {
        lVar3 = -((~uStack_50 >> 5) * 4 + 4);
      }
      else {
        lVar3 = (uStack_50 >> 5) * 4;
      }
      uVar12 = (ulonglong)((uint)uStack_50 & 0x1f);
      uVar1 = uVar12 - 1;
      if (uVar12 == 0) {
        lVar2 = -4;
      }
      else {
        lVar2 = (uVar1 >> 5) * 4;
      }
      if ((*(uint *)(local_68._0_8_ + lVar3 + lVar2) >> ((uint)uVar1 & 0x1f) & 1) == 0) break;
      iVar7 = FUN_1801401f0(param_1);
      if (iVar7 == 0xd) goto LAB_180121bd6;
      if (*(int *)(param_1 + 0x40) != 10) {
        local_208 = (undefined1  [16])0x0;
        local_1f8 = (undefined1  [16])0x0;
        FUN_18015ba30(local_208,"array",5);
        uVar10 = FUN_18013fea0(param_1,local_188,10,local_208);
        local_1e8 = *(undefined8 *)(param_1 + 0x68);
        uStack_1e0 = *(undefined8 *)(param_1 + 0x70);
        local_1d8 = *(undefined8 *)(param_1 + 0x78);
        uVar10 = FUN_1801212b0(local_150,local_1d8,&local_1e8,uVar10);
        FUN_18013fdc0(param_1 + 0x48,local_1c8);
        *(undefined1 *)(param_2 + 5) = 1;
        if (*(char *)((longlong)param_2 + 0x29) != '\0') {
          FUN_1800a8410(local_110,uVar10);
                    /* WARNING: Subroutine does not return */
          FUN_180606630(local_110,&DAT_1808d1140);
        }
        FUN_18015c010(local_1c8);
        FUN_1800a7900(local_150);
        FUN_18015c010(local_188);
        FUN_18015c010(local_208);
        goto LAB_18012234c;
      }
      param_2[2] = param_2[2] + -8;
      if (((longlong)uStack_50 < 0) && (uStack_50 != 0)) {
        lVar3 = -((~uStack_50 >> 5) * 4 + 4);
      }
      else {
        lVar3 = (uStack_50 >> 5) * 4;
      }
      uVar12 = (ulonglong)((uint)uStack_50 & 0x1f);
      uVar1 = uVar12 - 1;
      local_a0 = (ulonglong)((uint)uVar1 & 0x1f);
      if (uVar12 == 0) {
        local_a8 = -4;
      }
      else {
        local_a8 = (uVar1 >> 5) * 4;
      }
      local_a8 = local_68._0_8_ + lVar3 + local_a8;
      FUN_180156be0(local_68,local_208,&local_a8);
    }
    iVar7 = FUN_1801401f0(param_1);
    if (iVar7 == 0xd) break;
    if (*(int *)(param_1 + 0x40) != 0xb) {
      local_208 = (undefined1  [16])0x0;
      local_1f8 = (undefined1  [16])0x0;
      FUN_18015ba30(local_208,"object",6);
      uVar10 = FUN_18013fea0(param_1,local_188,0xb,local_208);
      local_1e8 = *(undefined8 *)(param_1 + 0x68);
      uStack_1e0 = *(undefined8 *)(param_1 + 0x70);
      local_1d8 = *(undefined8 *)(param_1 + 0x78);
      uVar10 = FUN_1801212b0(local_150,local_1d8,&local_1e8,uVar10);
      FUN_18013fdc0(param_1 + 0x48,local_1c8);
      *(undefined1 *)(param_2 + 5) = 1;
      if (*(char *)((longlong)param_2 + 0x29) != '\0') {
        FUN_1800a8410(local_110,uVar10);
                    /* WARNING: Subroutine does not return */
        FUN_180606630(local_110,&DAT_1808d1140);
      }
      FUN_18015c010(local_1c8);
      FUN_1800a7900(local_150);
      FUN_18015c010(local_188);
      FUN_18015c010(local_208);
      goto LAB_18012234c;
    }
    param_2[2] = param_2[2] + -8;
    if (((longlong)uStack_50 < 0) && (uStack_50 != 0)) {
      lVar3 = -((~uStack_50 >> 5) * 4 + 4);
    }
    else {
      lVar3 = (uStack_50 >> 5) * 4;
    }
    uVar12 = (ulonglong)((uint)uStack_50 & 0x1f);
    uVar1 = uVar12 - 1;
    local_90 = (ulonglong)((uint)uVar1 & 0x1f);
    if (uVar12 == 0) {
      local_98 = -4;
    }
    else {
      local_98 = (uVar1 >> 5) * 4;
    }
    local_98 = local_68._0_8_ + lVar3 + local_98;
    FUN_180156be0(local_68,&local_1e8,&local_98);
  }
  iVar7 = FUN_1801401f0(param_1);
  if (iVar7 != 4) {
    local_208 = (undefined1  [16])0x0;
    local_1f8 = (undefined1  [16])0x0;
    FUN_18015ba30(local_208,"object key",10);
    uVar10 = FUN_18013fea0(param_1,local_188,4,local_208);
    local_1e8 = *(undefined8 *)(param_1 + 0x68);
    uStack_1e0 = *(undefined8 *)(param_1 + 0x70);
    local_1d8 = *(undefined8 *)(param_1 + 0x78);
    uVar10 = FUN_1801212b0(local_150,local_1d8,&local_1e8,uVar10);
    FUN_18013fdc0(param_1 + 0x48,local_1c8);
    *(undefined1 *)(param_2 + 5) = 1;
    if (*(char *)((longlong)param_2 + 0x29) != '\0') {
      FUN_1800a8410(local_110,uVar10);
                    /* WARNING: Subroutine does not return */
      FUN_180606630(local_110,&DAT_1808d1140);
    }
    FUN_18015c010(local_1c8);
    FUN_1800a7900(local_150);
    FUN_18015c010(local_188);
    FUN_18015c010(local_208);
    goto LAB_18012234c;
  }
  if ((*(int *)(param_1 + 0xd8) != 0x2e) && (*(longlong *)(param_1 + 0xe0) != -1)) {
    puVar9 = (undefined8 *)(param_1 + 0x98);
    if (0xf < *(ulonglong *)(param_1 + 0xb0)) {
      puVar9 = (undefined8 *)*puVar9;
    }
    *(undefined1 *)((longlong)puVar9 + *(longlong *)(param_1 + 0xe0)) = 0x2e;
  }
  uVar10 = FUN_180140e40(*(undefined8 *)(*(longlong *)(param_2[2] + -8) + 8));
  param_2[4] = uVar10;
  iVar7 = FUN_1801401f0(param_1);
  if (iVar7 != 0xc) {
    local_208 = (undefined1  [16])0x0;
    local_1f8 = (undefined1  [16])0x0;
    FUN_18015ba30(local_208,"object separator",0x10);
    uVar10 = FUN_18013fea0(param_1,local_188,0xc,local_208);
    local_1e8 = *(undefined8 *)(param_1 + 0x68);
    uStack_1e0 = *(undefined8 *)(param_1 + 0x70);
    local_1d8 = *(undefined8 *)(param_1 + 0x78);
    uVar10 = FUN_1801212b0(local_150,local_1d8,&local_1e8,uVar10);
    FUN_18013fdc0(param_1 + 0x48,local_1c8);
    *(undefined1 *)(param_2 + 5) = 1;
    if (*(char *)((longlong)param_2 + 0x29) != '\0') {
      FUN_1800a8410(local_110,uVar10);
                    /* WARNING: Subroutine does not return */
      FUN_180606630(local_110,&DAT_1808d1140);
    }
    FUN_18015c010(local_1c8);
    FUN_1800a7900(local_150);
    FUN_18015c010(local_188);
    FUN_18015c010(local_208);
    goto LAB_18012234c;
  }
LAB_180121bd6:
  FUN_1801401f0(param_1);
  goto LAB_1801214b0;
code_r0x000180121572:
  local_218[0] = 0;
  if (((longlong)uStack_50 < 0) && (uStack_50 != 0)) {
    local_c8 = -((~uStack_50 >> 5) * 4 + 4);
  }
  else {
    local_c8 = (uStack_50 >> 5) * 4;
  }
  local_c8 = local_68._0_8_ + local_c8;
  local_c0 = (ulonglong)((uint)uStack_50 & 0x1f);
  local_228 = local_218;
  FUN_180157500(local_68,local_188,&local_c8);
  FUN_1801401f0(param_1);
  goto LAB_1801214b0;
}



