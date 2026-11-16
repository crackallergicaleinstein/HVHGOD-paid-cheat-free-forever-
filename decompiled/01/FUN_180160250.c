// FUN_180160250 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180160250 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180160250(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 uVar5;
  char *pcVar6;
  short sVar7;
  int iVar8;
  undefined4 uVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined1 *puVar13;
  ulonglong uVar14;
  undefined1 auStack_238 [32];
  undefined1 *local_218;
  undefined1 local_208 [8];
  undefined8 local_200;
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [16];
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined1 local_1b8 [32];
  undefined1 local_198;
  undefined8 local_190;
  undefined1 local_188;
  undefined8 local_180;
  undefined1 local_178 [56];
  undefined1 local_140 [64];
  undefined1 local_100 [72];
  longlong local_b8;
  ulonglong local_b0;
  longlong local_a8;
  ulonglong local_a0;
  longlong local_98;
  ulonglong local_90;
  longlong local_88;
  ulonglong local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined8 uStack_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_238;
  local_58 = (undefined1  [16])0x0;
  uStack_48 = 0;
  uStack_40 = 0;
LAB_1801602c0:
  switch(*(undefined4 *)(param_1 + 0x40)) {
  default:
    goto switchD_1801602d8_caseD_0;
  case 1:
    local_208[0] = 1;
    FUN_180152940(param_2,local_208);
    break;
  case 2:
    local_208[0] = 0;
    FUN_180152940(param_2,local_208);
    break;
  case 3:
    if (param_2[1] == param_2[2]) {
      local_198 = 0;
      FUN_180111d10(&local_190,0);
      puVar13 = (undefined1 *)*param_2;
      uVar5 = *puVar13;
      *puVar13 = local_198;
      uVar12 = *(undefined8 *)(puVar13 + 8);
      *(undefined8 *)(puVar13 + 8) = local_190;
      local_198 = uVar5;
      local_190 = uVar12;
      FUN_1801409d0(&local_190);
    }
    else {
      pcVar6 = *(char **)(param_2[2] + -8);
      if (*pcVar6 == '\x02') {
        lVar1 = *(longlong *)(pcVar6 + 8);
        puVar13 = *(undefined1 **)(lVar1 + 8);
        if (puVar13 == *(undefined1 **)(lVar1 + 0x10)) {
          FUN_1801584c0(lVar1);
        }
        else {
          *puVar13 = 0;
          FUN_180111d10(puVar13 + 8,0);
          *(longlong *)(lVar1 + 8) = *(longlong *)(lVar1 + 8) + 0x10;
        }
      }
      else {
        local_188 = 0;
        FUN_180111d10(&local_180,0);
        puVar13 = (undefined1 *)param_2[4];
        uVar5 = *puVar13;
        *puVar13 = local_188;
        uVar12 = *(undefined8 *)(puVar13 + 8);
        *(undefined8 *)(puVar13 + 8) = local_180;
        local_188 = uVar5;
        local_180 = uVar12;
        FUN_1801409d0(&local_180);
      }
    }
    break;
  case 4:
    if ((*(int *)(param_1 + 0xd8) != 0x2e) && (*(longlong *)(param_1 + 0xe0) != -1)) {
      puVar11 = (undefined8 *)(param_1 + 0x98);
      if (0xf < *(ulonglong *)(param_1 + 0xb0)) {
        puVar11 = (undefined8 *)*puVar11;
      }
      *(undefined1 *)(*(longlong *)(param_1 + 0xe0) + (longlong)puVar11) = 0x2e;
    }
    if (param_2[1] == param_2[2]) {
      puVar10 = (undefined1 *)FUN_1800e64d0(local_78);
      puVar13 = (undefined1 *)*param_2;
      uVar5 = *puVar13;
      *puVar13 = *puVar10;
      *puVar10 = uVar5;
      uVar12 = *(undefined8 *)(puVar13 + 8);
      puVar11 = (undefined8 *)(puVar10 + 8);
      *(undefined8 *)(puVar13 + 8) = *puVar11;
      *puVar11 = uVar12;
      FUN_1801409d0(puVar11,*puVar10);
    }
    else {
      pcVar6 = *(char **)(param_2[2] + -8);
      if (*pcVar6 == '\x02') {
        lVar1 = *(longlong *)(pcVar6 + 8);
        lVar4 = *(longlong *)(lVar1 + 8);
        if (lVar4 == *(longlong *)(lVar1 + 0x10)) {
          FUN_180157c90(lVar1,lVar4,param_1 + 0x98);
        }
        else {
          FUN_1800e64d0(lVar4);
          *(longlong *)(lVar1 + 8) = *(longlong *)(lVar1 + 8) + 0x10;
        }
      }
      else {
        puVar10 = (undefined1 *)FUN_1800e64d0(local_68);
        puVar13 = (undefined1 *)param_2[4];
        uVar5 = *puVar13;
        *puVar13 = *puVar10;
        *puVar10 = uVar5;
        uVar12 = *(undefined8 *)(puVar13 + 8);
        puVar11 = (undefined8 *)(puVar10 + 8);
        *(undefined8 *)(puVar13 + 8) = *puVar11;
        *puVar11 = uVar12;
        FUN_1801409d0(puVar11,*puVar10);
      }
    }
    break;
  case 5:
    local_200 = *(undefined8 *)(param_1 + 200);
    FUN_1801526c0(param_2,&local_200);
    break;
  case 6:
    local_200 = *(undefined8 *)(param_1 + 0xc0);
    FUN_180152800(param_2,&local_200);
    break;
  case 7:
    uVar12 = *(undefined8 *)(param_1 + 0xd0);
    sVar7 = thunk_FUN_1806243d0();
    if (0 < sVar7) {
      local_208[0] = 0x27;
      FUN_18013fdc0(param_1 + 0x48,local_1b8);
      FUN_180141810(local_1f8);
      uVar12 = FUN_1801418b0(local_140);
      FUN_18013fdc0(param_1 + 0x48,&local_1d8);
      *(undefined1 *)(param_2 + 5) = 1;
      if (*(char *)((longlong)param_2 + 0x29) != '\0') {
        FUN_1800f66e0(local_178,uVar12);
                    /* WARNING: Subroutine does not return */
        FUN_180606630(local_178,&DAT_1808d0f80);
      }
      FUN_18015c010(&local_1d8);
      FUN_1800a7900(local_140);
      FUN_18015c010(local_1f8);
      puVar13 = local_1b8;
      goto LAB_180161168;
    }
    if ((*(int *)(param_1 + 0xd8) != 0x2e) && (*(longlong *)(param_1 + 0xe0) != -1)) {
      puVar11 = (undefined8 *)(param_1 + 0x98);
      if (0xf < *(ulonglong *)(param_1 + 0xb0)) {
        puVar11 = (undefined8 *)*puVar11;
      }
      *(undefined1 *)((longlong)puVar11 + *(longlong *)(param_1 + 0xe0)) = 0x2e;
    }
    local_200 = uVar12;
    FUN_180152570(param_2,&local_200);
    break;
  case 8:
    local_208[0] = 2;
    local_200 = FUN_180152460(param_2,local_208);
    FUN_1801543a0(param_2 + 1,&local_200);
    iVar8 = FUN_180161330(param_1 + 0x48);
    *(int *)(param_1 + 0x40) = iVar8;
    if (iVar8 == 10) {
      param_2[2] = param_2[2] + -8;
      break;
    }
    local_208[0] = 1;
    if (((longlong)uStack_40 < 0) && (uStack_40 != 0)) {
      local_a8 = -((~uStack_40 >> 5) * 4 + 4);
    }
    else {
      local_a8 = (uStack_40 >> 5) * 4;
    }
    local_a8 = local_58._0_8_ + local_a8;
    local_a0 = (ulonglong)((uint)uStack_40 & 0x1f);
    local_218 = local_208;
    FUN_180157500(local_58,local_1b8,&local_a8);
    goto LAB_1801602c0;
  case 9:
    local_208[0] = 1;
    local_200 = FUN_180152460(param_2,local_208);
    FUN_1801543a0(param_2 + 1,&local_200);
    lVar1 = param_1 + 0x48;
    iVar8 = FUN_180161330(lVar1);
    *(int *)(param_1 + 0x40) = iVar8;
    if (iVar8 != 0xb) {
      if (iVar8 != 4) {
        local_1f8 = (undefined1  [16])0x0;
        local_1e8 = (undefined1  [16])0x0;
        FUN_18015ba30(local_1f8,"object key",10);
        uVar12 = FUN_18013fea0(param_1,local_178,4,local_1f8);
        local_1d8 = *(undefined8 *)(param_1 + 0x68);
        uStack_1d0 = *(undefined8 *)(param_1 + 0x70);
        local_1c8 = *(undefined8 *)(param_1 + 0x78);
        uVar12 = FUN_1801212b0(local_140,local_1c8,&local_1d8,uVar12);
        FUN_18013fdc0(lVar1,local_1b8);
        *(undefined1 *)(param_2 + 5) = 1;
        if (*(char *)((longlong)param_2 + 0x29) != '\0') {
          FUN_1800a8410(local_100,uVar12);
                    /* WARNING: Subroutine does not return */
          FUN_180606630(local_100,&DAT_1808d1140);
        }
        FUN_18015c010(local_1b8);
        FUN_1800a7900(local_140);
        FUN_18015c010(local_178);
        goto LAB_180161163;
      }
      if ((*(int *)(param_1 + 0xd8) != 0x2e) && (*(longlong *)(param_1 + 0xe0) != -1)) {
        puVar11 = (undefined8 *)(param_1 + 0x98);
        if (0xf < *(ulonglong *)(param_1 + 0xb0)) {
          puVar11 = (undefined8 *)*puVar11;
        }
        *(undefined1 *)((longlong)puVar11 + *(longlong *)(param_1 + 0xe0)) = 0x2e;
      }
      uVar12 = FUN_180140e40(*(undefined8 *)(*(longlong *)(param_2[2] + -8) + 8),param_1 + 0x98);
      param_2[4] = uVar12;
      iVar8 = FUN_180161330(lVar1);
      *(int *)(param_1 + 0x40) = iVar8;
      if (iVar8 != 0xc) {
        local_1f8 = (undefined1  [16])0x0;
        local_1e8 = (undefined1  [16])0x0;
        FUN_18015ba30(local_1f8,"object separator",0x10);
        uVar12 = FUN_18013fea0(param_1,local_178,0xc,local_1f8);
        local_1d8 = *(undefined8 *)(param_1 + 0x68);
        uStack_1d0 = *(undefined8 *)(param_1 + 0x70);
        local_1c8 = *(undefined8 *)(param_1 + 0x78);
        uVar12 = FUN_1801212b0(local_100,local_1c8,&local_1d8,uVar12);
        FUN_18013fdc0(lVar1,local_1b8);
        *(undefined1 *)(param_2 + 5) = 1;
        if (*(char *)((longlong)param_2 + 0x29) != '\0') {
          FUN_1800a8410(local_140,uVar12);
                    /* WARNING: Subroutine does not return */
          FUN_180606630(local_140,&DAT_1808d1140);
        }
        FUN_18015c010(local_1b8);
        FUN_1800a7900(local_100);
        FUN_18015c010(local_178);
        goto LAB_180161163;
      }
      local_208[0] = 0;
      if (((longlong)uStack_40 < 0) && (uStack_40 != 0)) {
        local_b8 = -((~uStack_40 >> 5) * 4 + 4);
      }
      else {
        local_b8 = (uStack_40 >> 5) * 4;
      }
      local_b8 = local_58._0_8_ + local_b8;
      local_b0 = (ulonglong)((uint)uStack_40 & 0x1f);
      local_218 = local_208;
      FUN_180157500(local_58,local_178,&local_b8);
LAB_180160405:
      uVar9 = FUN_180161330(param_1 + 0x48);
      *(undefined4 *)(param_1 + 0x40) = uVar9;
      goto LAB_1801602c0;
    }
    param_2[2] = param_2[2] + -8;
    break;
  case 0xe:
    local_1f8 = (undefined1  [16])0x0;
    local_1e8 = (undefined1  [16])0x0;
    FUN_18015ba30(local_1f8,"value",5);
    uVar12 = FUN_18013fea0(param_1,local_178,0,local_1f8);
    local_1d8 = *(undefined8 *)(param_1 + 0x68);
    uStack_1d0 = *(undefined8 *)(param_1 + 0x70);
    local_1c8 = *(undefined8 *)(param_1 + 0x78);
    uVar12 = FUN_1801212b0(local_140,local_1c8,&local_1d8,uVar12);
    FUN_18013fdc0(param_1 + 0x48,local_1b8);
    *(undefined1 *)(param_2 + 5) = 1;
    if (*(char *)((longlong)param_2 + 0x29) != '\0') {
      FUN_1800a8410(local_100,uVar12);
                    /* WARNING: Subroutine does not return */
      FUN_180606630(local_100,&DAT_1808d1140);
    }
    FUN_18015c010(local_1b8);
    FUN_1800a7900(local_140);
    FUN_18015c010(local_178);
    goto LAB_180161163;
  case 0xf:
    local_1c8 = *(undefined8 *)(param_1 + 0x78);
    local_1f8 = (undefined1  [16])0x0;
    local_1e8 = (undefined1  [16])0x0;
    if (*(longlong *)(param_1 + 0x68) == 1) {
      FUN_18015ba30(local_1f8,
                    "attempting to parse an empty input; check that your input string or stream contains the expected JSON"
                    ,0x65);
      local_1d8 = *(undefined8 *)(param_1 + 0x68);
      uStack_1d0 = *(undefined8 *)(param_1 + 0x70);
      local_1c8 = *(undefined8 *)(param_1 + 0x78);
      uVar12 = FUN_1801212b0(local_140,local_1c8,&local_1d8,local_1f8);
      FUN_18013fdc0(param_1 + 0x48,local_1b8);
      *(undefined1 *)(param_2 + 5) = 1;
      if (*(char *)((longlong)param_2 + 0x29) != '\0') {
        FUN_1800a8410(local_100,uVar12);
                    /* WARNING: Subroutine does not return */
        FUN_180606630(local_100,&DAT_1808d1140);
      }
      FUN_18015c010(local_1b8);
      FUN_1800a7900(local_140);
    }
    else {
      FUN_18015ba30(local_1f8,"value",5);
      uVar12 = FUN_18013fea0(param_1,local_178,0x10,local_1f8);
      local_1d8 = *(undefined8 *)(param_1 + 0x68);
      uStack_1d0 = *(undefined8 *)(param_1 + 0x70);
      local_1c8 = *(undefined8 *)(param_1 + 0x78);
      uVar12 = FUN_1801212b0(local_140,local_1c8,&local_1d8,uVar12);
      FUN_18013fdc0(param_1 + 0x48,local_1b8);
      *(undefined1 *)(param_2 + 5) = 1;
      if (*(char *)((longlong)param_2 + 0x29) != '\0') {
        FUN_1800a8410(local_100,uVar12);
                    /* WARNING: Subroutine does not return */
        FUN_180606630(local_100,&DAT_1808d1140);
      }
      FUN_18015c010(local_1b8);
      FUN_1800a7900(local_140);
      FUN_18015c010(local_178);
    }
    goto LAB_180161163;
  }
  while( true ) {
    while( true ) {
      if (uStack_40 == 0) goto LAB_18016116f;
      if (((longlong)uStack_40 < 0) && (uStack_40 != 0)) {
        lVar1 = -((~uStack_40 >> 5) * 4 + 4);
      }
      else {
        lVar1 = (uStack_40 >> 5) * 4;
      }
      uVar14 = (ulonglong)((uint)uStack_40 & 0x1f);
      uVar2 = uVar14 - 1;
      if (uVar14 == 0) {
        lVar4 = -4;
      }
      else {
        lVar4 = (uVar2 >> 5) * 4;
      }
      lVar3 = param_1 + 0x48;
      if ((*(uint *)(local_58._0_8_ + lVar1 + lVar4) >> ((uint)uVar2 & 0x1f) & 1) == 0) break;
      iVar8 = FUN_180161330(lVar3);
      *(int *)(param_1 + 0x40) = iVar8;
      if (iVar8 == 0xd) goto LAB_180160405;
      if (iVar8 != 10) {
        local_1f8 = (undefined1  [16])0x0;
        local_1e8 = (undefined1  [16])0x0;
        FUN_18015ba30(local_1f8,"array",5);
        uVar12 = FUN_18013fea0(param_1,local_178,10,local_1f8);
        local_1d8 = *(undefined8 *)(param_1 + 0x68);
        uStack_1d0 = *(undefined8 *)(param_1 + 0x70);
        local_1c8 = *(undefined8 *)(param_1 + 0x78);
        uVar12 = FUN_1801212b0(local_140,local_1c8,&local_1d8,uVar12);
        FUN_18013fdc0(lVar3,local_1b8);
        *(undefined1 *)(param_2 + 5) = 1;
        if (*(char *)((longlong)param_2 + 0x29) != '\0') {
          FUN_1800a8410(local_100,uVar12);
                    /* WARNING: Subroutine does not return */
          FUN_180606630(local_100,&DAT_1808d1140);
        }
        FUN_18015c010(local_1b8);
        FUN_1800a7900(local_140);
        FUN_18015c010(local_178);
        FUN_18015c010(local_1f8);
        goto LAB_18016116f;
      }
      param_2[2] = param_2[2] + -8;
      if (((longlong)uStack_40 < 0) && (uStack_40 != 0)) {
        lVar1 = -((~uStack_40 >> 5) * 4 + 4);
      }
      else {
        lVar1 = (uStack_40 >> 5) * 4;
      }
      uVar14 = (ulonglong)((uint)uStack_40 & 0x1f);
      uVar2 = uVar14 - 1;
      local_90 = (ulonglong)((uint)uVar2 & 0x1f);
      if (uVar14 == 0) {
        local_98 = -4;
      }
      else {
        local_98 = (uVar2 >> 5) * 4;
      }
      local_98 = local_58._0_8_ + lVar1 + local_98;
      FUN_180156be0(local_58,local_1f8,&local_98);
    }
    iVar8 = FUN_180161330(lVar3);
    *(int *)(param_1 + 0x40) = iVar8;
    if (iVar8 == 0xd) break;
    if (iVar8 != 0xb) {
      local_1f8 = (undefined1  [16])0x0;
      local_1e8 = (undefined1  [16])0x0;
      FUN_18015ba30(local_1f8,"object",6);
      uVar12 = FUN_18013fea0(param_1,local_178,0xb,local_1f8);
      local_1d8 = *(undefined8 *)(param_1 + 0x68);
      uStack_1d0 = *(undefined8 *)(param_1 + 0x70);
      local_1c8 = *(undefined8 *)(param_1 + 0x78);
      uVar12 = FUN_1801212b0(local_140,local_1c8,&local_1d8,uVar12);
      FUN_18013fdc0(lVar3,local_1b8);
      *(undefined1 *)(param_2 + 5) = 1;
      if (*(char *)((longlong)param_2 + 0x29) != '\0') {
        FUN_1800a8410(local_100,uVar12);
                    /* WARNING: Subroutine does not return */
        FUN_180606630(local_100,&DAT_1808d1140);
      }
      FUN_18015c010(local_1b8);
      FUN_1800a7900(local_140);
      FUN_18015c010(local_178);
      FUN_18015c010(local_1f8);
      goto LAB_18016116f;
    }
    param_2[2] = param_2[2] + -8;
    if (((longlong)uStack_40 < 0) && (uStack_40 != 0)) {
      lVar1 = -((~uStack_40 >> 5) * 4 + 4);
    }
    else {
      lVar1 = (uStack_40 >> 5) * 4;
    }
    uVar14 = (ulonglong)((uint)uStack_40 & 0x1f);
    uVar2 = uVar14 - 1;
    local_80 = (ulonglong)((uint)uVar2 & 0x1f);
    if (uVar14 == 0) {
      local_88 = -4;
    }
    else {
      local_88 = (uVar2 >> 5) * 4;
    }
    local_88 = local_58._0_8_ + lVar1 + local_88;
    FUN_180156be0(local_58,&local_1d8,&local_88);
  }
  iVar8 = FUN_180161330(lVar3);
  *(int *)(param_1 + 0x40) = iVar8;
  if (iVar8 != 4) {
    local_1f8 = (undefined1  [16])0x0;
    local_1e8 = (undefined1  [16])0x0;
    FUN_18015ba30(local_1f8,"object key",10);
    uVar12 = FUN_18013fea0(param_1,local_178,4,local_1f8);
    local_1d8 = *(undefined8 *)(param_1 + 0x68);
    uStack_1d0 = *(undefined8 *)(param_1 + 0x70);
    local_1c8 = *(undefined8 *)(param_1 + 0x78);
    uVar12 = FUN_1801212b0(local_140,local_1c8,&local_1d8,uVar12);
    FUN_18013fdc0(lVar3,local_1b8);
    *(undefined1 *)(param_2 + 5) = 1;
    if (*(char *)((longlong)param_2 + 0x29) != '\0') {
      FUN_1800a8410(local_100,uVar12);
                    /* WARNING: Subroutine does not return */
      FUN_180606630(local_100,&DAT_1808d1140);
    }
    FUN_18015c010(local_1b8);
    FUN_1800a7900(local_140);
    FUN_18015c010(local_178);
    FUN_18015c010(local_1f8);
    goto LAB_18016116f;
  }
  if ((*(int *)(param_1 + 0xd8) != 0x2e) && (*(longlong *)(param_1 + 0xe0) != -1)) {
    puVar11 = (undefined8 *)(param_1 + 0x98);
    if (0xf < *(ulonglong *)(param_1 + 0xb0)) {
      puVar11 = (undefined8 *)*puVar11;
    }
    *(undefined1 *)((longlong)puVar11 + *(longlong *)(param_1 + 0xe0)) = 0x2e;
  }
  uVar12 = FUN_180140e40(*(undefined8 *)(*(longlong *)(param_2[2] + -8) + 8));
  param_2[4] = uVar12;
  iVar8 = FUN_180161330(lVar3);
  *(int *)(param_1 + 0x40) = iVar8;
  if (iVar8 != 0xc) {
    local_1f8 = (undefined1  [16])0x0;
    local_1e8 = (undefined1  [16])0x0;
    FUN_18015ba30(local_1f8,"object separator",0x10);
    uVar12 = FUN_18013fea0(param_1,local_178,0xc,local_1f8);
    local_1d8 = *(undefined8 *)(param_1 + 0x68);
    uStack_1d0 = *(undefined8 *)(param_1 + 0x70);
    local_1c8 = *(undefined8 *)(param_1 + 0x78);
    uVar12 = FUN_1801212b0(local_140,local_1c8,&local_1d8,uVar12);
    FUN_18013fdc0(lVar3,local_1b8);
    *(undefined1 *)(param_2 + 5) = 1;
    if (*(char *)((longlong)param_2 + 0x29) != '\0') {
      FUN_1800a8410(local_100,uVar12);
                    /* WARNING: Subroutine does not return */
      FUN_180606630(local_100,&DAT_1808d1140);
    }
    FUN_18015c010(local_1b8);
    FUN_1800a7900(local_140);
    FUN_18015c010(local_178);
    FUN_18015c010(local_1f8);
    goto LAB_18016116f;
  }
  uVar9 = FUN_180161330(lVar3);
  *(undefined4 *)(param_1 + 0x40) = uVar9;
  goto LAB_1801602c0;
switchD_1801602d8_caseD_0:
  local_1f8 = (undefined1  [16])0x0;
  local_1e8 = (undefined1  [16])0x0;
  FUN_18015ba30(local_1f8,"value",5);
  uVar12 = FUN_18013fea0(param_1,local_178,0x10,local_1f8);
  local_1d8 = *(undefined8 *)(param_1 + 0x68);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x70);
  local_1c8 = *(undefined8 *)(param_1 + 0x78);
  uVar12 = FUN_1801212b0(local_140,local_1c8,&local_1d8,uVar12);
  FUN_18013fdc0(param_1 + 0x48,local_1b8);
  *(undefined1 *)(param_2 + 5) = 1;
  if (*(char *)((longlong)param_2 + 0x29) != '\0') {
    FUN_1800a8410(local_100,uVar12);
                    /* WARNING: Subroutine does not return */
    FUN_180606630(local_100,&DAT_1808d1140);
  }
  FUN_18015c010(local_1b8);
  FUN_1800a7900(local_140);
  FUN_18015c010(local_178);
LAB_180161163:
  puVar13 = local_1f8;
LAB_180161168:
  FUN_18015c010(puVar13);
LAB_18016116f:
  FUN_180159650(local_58);
}



