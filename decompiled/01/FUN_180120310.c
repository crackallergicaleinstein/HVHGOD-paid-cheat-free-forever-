// FUN_180120310 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180120310 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180120310(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  short sVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  undefined1 auStack_278 [32];
  undefined1 *local_258;
  undefined1 local_248 [8];
  undefined1 local_240 [16];
  undefined1 local_230 [16];
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 local_200;
  undefined1 local_1f8 [32];
  undefined1 local_1d8 [56];
  undefined1 local_1a0 [64];
  undefined1 local_160 [72];
  longlong local_118;
  ulonglong local_110;
  longlong local_108;
  ulonglong local_100;
  longlong local_f8;
  ulonglong local_f0;
  longlong local_e8;
  ulonglong local_e0;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined8 uStack_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_278;
  local_68 = (undefined1  [16])0x0;
  uStack_58 = 0;
  uStack_50 = 0;
LAB_180120380:
  switch(*(undefined4 *)(param_1 + 0x40)) {
  default:
    local_240 = (undefined1  [16])0x0;
    local_230 = (undefined1  [16])0x0;
    FUN_18015ba30(local_240,"value",5);
    uVar8 = FUN_18013fea0(param_1,local_1d8,0x10,local_240);
    local_220 = *(undefined8 *)(param_1 + 0x68);
    uStack_218 = *(undefined8 *)(param_1 + 0x70);
    local_210 = *(undefined8 *)(param_1 + 0x78);
    uVar8 = FUN_1801212b0(local_1a0,local_210,&local_220,uVar8);
    FUN_18013fdc0(param_1 + 0x48,local_1f8);
    *(undefined1 *)(param_2 + 0x68) = 1;
    if (*(char *)(param_2 + 0xb0) != '\0') {
      FUN_1800a8410(local_160,uVar8);
                    /* WARNING: Subroutine does not return */
      FUN_180606630(local_160,&DAT_1808d1140);
    }
    FUN_18015c010(local_1f8);
    FUN_1800a7900(local_1a0);
    FUN_18015c010(local_1d8);
LAB_1801210e2:
    puVar9 = local_240;
LAB_1801210e7:
    FUN_18015c010(puVar9);
LAB_1801210ee:
    FUN_180159650(local_68);
  case 1:
    local_248[0] = 1;
    FUN_180153ab0(param_2,local_88,local_248);
    break;
  case 2:
    local_248[0] = 0;
    FUN_180153ab0(param_2,local_a8,local_248);
    break;
  case 3:
    FUN_180153e00(param_2,local_98);
    break;
  case 4:
    if ((*(int *)(param_1 + 0xd8) != 0x2e) && (*(longlong *)(param_1 + 0xe0) != -1)) {
      puVar7 = (undefined8 *)(param_1 + 0x98);
      if (0xf < *(ulonglong *)(param_1 + 0xb0)) {
        puVar7 = (undefined8 *)*puVar7;
      }
      *(undefined1 *)((longlong)puVar7 + *(longlong *)(param_1 + 0xe0)) = 0x2e;
    }
    FUN_180152d60(param_2,local_1d8,param_1 + 0x98);
    break;
  case 5:
    local_200 = *(undefined8 *)(param_1 + 200);
    FUN_180153410(param_2,local_1f8,&local_200);
    break;
  case 6:
    local_200 = *(undefined8 *)(param_1 + 0xc0);
    FUN_180153760(param_2,local_78,&local_200);
    break;
  case 7:
    uVar8 = *(undefined8 *)(param_1 + 0xd0);
    sVar5 = thunk_FUN_1806243d0();
    if (0 < sVar5) {
      local_248[0] = 0x27;
      FUN_18013fdc0(param_1 + 0x48,local_1f8);
      FUN_180141810(local_240);
      uVar8 = FUN_1801418b0(local_1a0);
      FUN_18013fdc0(param_1 + 0x48,&local_220);
      *(undefined1 *)(param_2 + 0x68) = 1;
      if (*(char *)(param_2 + 0xb0) != '\0') {
        FUN_1800f66e0(local_1d8,uVar8);
                    /* WARNING: Subroutine does not return */
        FUN_180606630(local_1d8,&DAT_1808d0f80);
      }
      FUN_18015c010(&local_220);
      FUN_1800a7900(local_1a0);
      FUN_18015c010(local_240);
      puVar9 = local_1f8;
      goto LAB_1801210e7;
    }
    if ((*(int *)(param_1 + 0xd8) != 0x2e) && (*(longlong *)(param_1 + 0xe0) != -1)) {
      puVar7 = (undefined8 *)(param_1 + 0x98);
      if (0xf < *(ulonglong *)(param_1 + 0xb0)) {
        puVar7 = (undefined8 *)*puVar7;
      }
      *(undefined1 *)((longlong)puVar7 + *(longlong *)(param_1 + 0xe0)) = 0x2e;
    }
    local_200 = uVar8;
    FUN_1801530b0(param_2,local_b8,&local_200);
    break;
  case 8:
    cVar4 = FUN_1801501c0(param_2,0xffffffffffffffff);
    if (cVar4 == '\0') goto LAB_1801210ee;
    iVar6 = FUN_1801401f0(param_1);
    if (iVar6 != 10) {
      local_248[0] = 1;
      if (((longlong)uStack_50 < 0) && (uStack_50 != 0)) {
        local_108 = -((~uStack_50 >> 5) * 4 + 4);
      }
      else {
        local_108 = (uStack_50 >> 5) * 4;
      }
      local_108 = local_68._0_8_ + local_108;
      local_100 = (ulonglong)((uint)uStack_50 & 0x1f);
      local_258 = local_248;
      FUN_180157500(local_68,local_c8,&local_108);
      goto LAB_180120380;
    }
    cVar4 = FUN_1801500b0(param_2);
    if (cVar4 == '\0') goto LAB_1801210ee;
    break;
  case 9:
    cVar4 = FUN_180150860(param_2,0xffffffffffffffff);
    if (cVar4 == '\0') goto LAB_1801210ee;
    iVar6 = FUN_1801401f0(param_1);
    if (iVar6 == 0xb) {
      cVar4 = FUN_1801503b0(param_2);
      if (cVar4 != '\0') break;
      goto LAB_1801210ee;
    }
    if (*(int *)(param_1 + 0x40) == 4) {
      if ((*(int *)(param_1 + 0xd8) != 0x2e) && (*(longlong *)(param_1 + 0xe0) != -1)) {
        puVar7 = (undefined8 *)(param_1 + 0x98);
        if (0xf < *(ulonglong *)(param_1 + 0xb0)) {
          puVar7 = (undefined8 *)*puVar7;
        }
        *(undefined1 *)((longlong)puVar7 + *(longlong *)(param_1 + 0xe0)) = 0x2e;
      }
      cVar4 = FUN_1801506c0(param_2,param_1 + 0x98);
      if (cVar4 == '\0') goto LAB_1801210ee;
      iVar6 = FUN_1801401f0(param_1);
      if (iVar6 == 0xc) goto code_r0x00018012043a;
      local_240 = (undefined1  [16])0x0;
      local_230 = (undefined1  [16])0x0;
      FUN_18015ba30(local_240,"object separator",0x10);
      uVar8 = FUN_18013fea0(param_1,local_1d8,0xc,local_240);
      local_220 = *(undefined8 *)(param_1 + 0x68);
      uStack_218 = *(undefined8 *)(param_1 + 0x70);
      local_210 = *(undefined8 *)(param_1 + 0x78);
      uVar8 = FUN_1801212b0(local_160,local_210,&local_220,uVar8);
      FUN_18013fdc0(param_1 + 0x48,local_1f8);
      *(undefined1 *)(param_2 + 0x68) = 1;
      if (*(char *)(param_2 + 0xb0) != '\0') {
        FUN_1800a8410(local_1a0,uVar8);
                    /* WARNING: Subroutine does not return */
        FUN_180606630(local_1a0,&DAT_1808d1140);
      }
      FUN_18015c010(local_1f8);
      FUN_1800a7900(local_160);
      FUN_18015c010(local_1d8);
    }
    else {
      local_240 = (undefined1  [16])0x0;
      local_230 = (undefined1  [16])0x0;
      FUN_18015ba30(local_240,"object key",10);
      uVar8 = FUN_18013fea0(param_1,local_1d8,4,local_240);
      local_220 = *(undefined8 *)(param_1 + 0x68);
      uStack_218 = *(undefined8 *)(param_1 + 0x70);
      local_210 = *(undefined8 *)(param_1 + 0x78);
      uVar8 = FUN_1801212b0(local_1a0,local_210,&local_220,uVar8);
      FUN_18013fdc0(param_1 + 0x48,local_1f8);
      *(undefined1 *)(param_2 + 0x68) = 1;
      if (*(char *)(param_2 + 0xb0) != '\0') {
        FUN_1800a8410(local_160,uVar8);
                    /* WARNING: Subroutine does not return */
        FUN_180606630(local_160,&DAT_1808d1140);
      }
      FUN_18015c010(local_1f8);
      FUN_1800a7900(local_1a0);
      FUN_18015c010(local_1d8);
    }
    goto LAB_1801210e2;
  case 0xe:
    local_240 = (undefined1  [16])0x0;
    local_230 = (undefined1  [16])0x0;
    FUN_18015ba30(local_240,"value",5);
    uVar8 = FUN_18013fea0(param_1,local_1d8,0,local_240);
    local_220 = *(undefined8 *)(param_1 + 0x68);
    uStack_218 = *(undefined8 *)(param_1 + 0x70);
    local_210 = *(undefined8 *)(param_1 + 0x78);
    uVar8 = FUN_1801212b0(local_1a0,local_210,&local_220,uVar8);
    FUN_18013fdc0(param_1 + 0x48,local_1f8);
    *(undefined1 *)(param_2 + 0x68) = 1;
    if (*(char *)(param_2 + 0xb0) != '\0') {
      FUN_1800a8410(local_160,uVar8);
                    /* WARNING: Subroutine does not return */
      FUN_180606630(local_160,&DAT_1808d1140);
    }
    FUN_18015c010(local_1f8);
    FUN_1800a7900(local_1a0);
    FUN_18015c010(local_1d8);
    goto LAB_1801210e2;
  case 0xf:
    local_210 = *(undefined8 *)(param_1 + 0x78);
    local_240 = (undefined1  [16])0x0;
    local_230 = (undefined1  [16])0x0;
    if (*(longlong *)(param_1 + 0x68) == 1) {
      FUN_18015ba30(local_240,
                    "attempting to parse an empty input; check that your input string or stream contains the expected JSON"
                    ,0x65);
      local_220 = *(undefined8 *)(param_1 + 0x68);
      uStack_218 = *(undefined8 *)(param_1 + 0x70);
      local_210 = *(undefined8 *)(param_1 + 0x78);
      uVar8 = FUN_1801212b0(local_1a0,local_210,&local_220,local_240);
      FUN_18013fdc0(param_1 + 0x48,local_1f8);
      *(undefined1 *)(param_2 + 0x68) = 1;
      if (*(char *)(param_2 + 0xb0) != '\0') {
        FUN_1800a8410(local_160,uVar8);
                    /* WARNING: Subroutine does not return */
        FUN_180606630(local_160,&DAT_1808d1140);
      }
      FUN_18015c010(local_1f8);
      FUN_1800a7900(local_1a0);
    }
    else {
      FUN_18015ba30(local_240,"value",5);
      uVar8 = FUN_18013fea0(param_1,local_1d8,0x10,local_240);
      local_220 = *(undefined8 *)(param_1 + 0x68);
      uStack_218 = *(undefined8 *)(param_1 + 0x70);
      local_210 = *(undefined8 *)(param_1 + 0x78);
      uVar8 = FUN_1801212b0(local_1a0,local_210,&local_220,uVar8);
      FUN_18013fdc0(param_1 + 0x48,local_1f8);
      *(undefined1 *)(param_2 + 0x68) = 1;
      if (*(char *)(param_2 + 0xb0) != '\0') {
        FUN_1800a8410(local_160,uVar8);
                    /* WARNING: Subroutine does not return */
        FUN_180606630(local_160,&DAT_1808d1140);
      }
      FUN_18015c010(local_1f8);
      FUN_1800a7900(local_1a0);
      FUN_18015c010(local_1d8);
    }
    goto LAB_1801210e2;
  }
  while( true ) {
    while( true ) {
      if (uStack_50 == 0) goto LAB_1801210ee;
      if (((longlong)uStack_50 < 0) && (uStack_50 != 0)) {
        lVar3 = -((~uStack_50 >> 5) * 4 + 4);
      }
      else {
        lVar3 = (uStack_50 >> 5) * 4;
      }
      uVar10 = (ulonglong)((uint)uStack_50 & 0x1f);
      uVar1 = uVar10 - 1;
      if (uVar10 == 0) {
        lVar2 = -4;
      }
      else {
        lVar2 = (uVar1 >> 5) * 4;
      }
      if ((*(uint *)(local_68._0_8_ + lVar3 + lVar2) >> ((uint)uVar1 & 0x1f) & 1) == 0) break;
      iVar6 = FUN_1801401f0(param_1);
      if (iVar6 == 0xd) goto LAB_180120957;
      if (*(int *)(param_1 + 0x40) != 10) {
        local_240 = (undefined1  [16])0x0;
        local_230 = (undefined1  [16])0x0;
        FUN_18015ba30(local_240,"array",5);
        uVar8 = FUN_18013fea0(param_1,local_1d8,10,local_240);
        local_220 = *(undefined8 *)(param_1 + 0x68);
        uStack_218 = *(undefined8 *)(param_1 + 0x70);
        local_210 = *(undefined8 *)(param_1 + 0x78);
        uVar8 = FUN_1801212b0(local_1a0,local_210,&local_220,uVar8);
        FUN_18013fdc0(param_1 + 0x48,local_1f8);
        *(undefined1 *)(param_2 + 0x68) = 1;
        if (*(char *)(param_2 + 0xb0) != '\0') {
          FUN_1800a8410(local_160,uVar8);
                    /* WARNING: Subroutine does not return */
          FUN_180606630(local_160,&DAT_1808d1140);
        }
        FUN_18015c010(local_1f8);
        FUN_1800a7900(local_1a0);
        FUN_18015c010(local_1d8);
        FUN_18015c010(local_240);
        goto LAB_1801210ee;
      }
      cVar4 = FUN_1801500b0(param_2);
      if (cVar4 == '\0') goto LAB_1801210ee;
      if (((longlong)uStack_50 < 0) && (uStack_50 != 0)) {
        lVar3 = -((~uStack_50 >> 5) * 4 + 4);
      }
      else {
        lVar3 = (uStack_50 >> 5) * 4;
      }
      uVar10 = (ulonglong)((uint)uStack_50 & 0x1f);
      uVar1 = uVar10 - 1;
      local_f0 = (ulonglong)((uint)uVar1 & 0x1f);
      if (uVar10 == 0) {
        local_f8 = -4;
      }
      else {
        local_f8 = (uVar1 >> 5) * 4;
      }
      local_f8 = local_68._0_8_ + lVar3 + local_f8;
      FUN_180156be0(local_68,local_240,&local_f8);
    }
    iVar6 = FUN_1801401f0(param_1);
    if (iVar6 == 0xd) break;
    if (*(int *)(param_1 + 0x40) != 0xb) {
      local_240 = (undefined1  [16])0x0;
      local_230 = (undefined1  [16])0x0;
      FUN_18015ba30(local_240,"object",6);
      uVar8 = FUN_18013fea0(param_1,local_1d8,0xb,local_240);
      local_220 = *(undefined8 *)(param_1 + 0x68);
      uStack_218 = *(undefined8 *)(param_1 + 0x70);
      local_210 = *(undefined8 *)(param_1 + 0x78);
      uVar8 = FUN_1801212b0(local_1a0,local_210,&local_220,uVar8);
      FUN_18013fdc0(param_1 + 0x48,local_1f8);
      *(undefined1 *)(param_2 + 0x68) = 1;
      if (*(char *)(param_2 + 0xb0) != '\0') {
        FUN_1800a8410(local_160,uVar8);
                    /* WARNING: Subroutine does not return */
        FUN_180606630(local_160,&DAT_1808d1140);
      }
      FUN_18015c010(local_1f8);
      FUN_1800a7900(local_1a0);
      FUN_18015c010(local_1d8);
      FUN_18015c010(local_240);
      goto LAB_1801210ee;
    }
    cVar4 = FUN_1801503b0(param_2);
    if (cVar4 == '\0') goto LAB_1801210ee;
    if (((longlong)uStack_50 < 0) && (uStack_50 != 0)) {
      lVar3 = -((~uStack_50 >> 5) * 4 + 4);
    }
    else {
      lVar3 = (uStack_50 >> 5) * 4;
    }
    uVar10 = (ulonglong)((uint)uStack_50 & 0x1f);
    uVar1 = uVar10 - 1;
    local_e0 = (ulonglong)((uint)uVar1 & 0x1f);
    if (uVar10 == 0) {
      local_e8 = -4;
    }
    else {
      local_e8 = (uVar1 >> 5) * 4;
    }
    local_e8 = local_68._0_8_ + lVar3 + local_e8;
    FUN_180156be0(local_68,&local_220,&local_e8);
  }
  iVar6 = FUN_1801401f0(param_1);
  if (iVar6 != 4) {
    local_240 = (undefined1  [16])0x0;
    local_230 = (undefined1  [16])0x0;
    FUN_18015ba30(local_240,"object key",10);
    uVar8 = FUN_18013fea0(param_1,local_1d8,4,local_240);
    local_220 = *(undefined8 *)(param_1 + 0x68);
    uStack_218 = *(undefined8 *)(param_1 + 0x70);
    local_210 = *(undefined8 *)(param_1 + 0x78);
    uVar8 = FUN_1801212b0(local_1a0,local_210,&local_220,uVar8);
    FUN_18013fdc0(param_1 + 0x48,local_1f8);
    *(undefined1 *)(param_2 + 0x68) = 1;
    if (*(char *)(param_2 + 0xb0) != '\0') {
      FUN_1800a8410(local_160,uVar8);
                    /* WARNING: Subroutine does not return */
      FUN_180606630(local_160,&DAT_1808d1140);
    }
    FUN_18015c010(local_1f8);
    FUN_1800a7900(local_1a0);
    FUN_18015c010(local_1d8);
    FUN_18015c010(local_240);
    goto LAB_1801210ee;
  }
  if ((*(int *)(param_1 + 0xd8) != 0x2e) && (*(longlong *)(param_1 + 0xe0) != -1)) {
    puVar7 = (undefined8 *)(param_1 + 0x98);
    if (0xf < *(ulonglong *)(param_1 + 0xb0)) {
      puVar7 = (undefined8 *)*puVar7;
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0xe0) + (longlong)puVar7) = 0x2e;
  }
  cVar4 = FUN_1801506c0(param_2,param_1 + 0x98);
  if (cVar4 == '\0') goto LAB_1801210ee;
  iVar6 = FUN_1801401f0(param_1);
  if (iVar6 != 0xc) {
    local_240 = (undefined1  [16])0x0;
    local_230 = (undefined1  [16])0x0;
    FUN_18015ba30(local_240,"object separator",0x10);
    uVar8 = FUN_18013fea0(param_1,local_1d8,0xc,local_240);
    local_220 = *(undefined8 *)(param_1 + 0x68);
    uStack_218 = *(undefined8 *)(param_1 + 0x70);
    local_210 = *(undefined8 *)(param_1 + 0x78);
    uVar8 = FUN_1801212b0(local_1a0,local_210,&local_220,uVar8);
    FUN_18013fdc0(param_1 + 0x48,local_1f8);
    *(undefined1 *)(param_2 + 0x68) = 1;
    if (*(char *)(param_2 + 0xb0) != '\0') {
      FUN_1800a8410(local_160,uVar8);
                    /* WARNING: Subroutine does not return */
      FUN_180606630(local_160,&DAT_1808d1140);
    }
    FUN_18015c010(local_1f8);
    FUN_1800a7900(local_1a0);
    FUN_18015c010(local_1d8);
    FUN_18015c010(local_240);
    goto LAB_1801210ee;
  }
LAB_180120957:
  FUN_1801401f0(param_1);
  goto LAB_180120380;
code_r0x00018012043a:
  local_248[0] = 0;
  if (((longlong)uStack_50 < 0) && (uStack_50 != 0)) {
    local_118 = -((~uStack_50 >> 5) * 4 + 4);
  }
  else {
    local_118 = (uStack_50 >> 5) * 4;
  }
  local_118 = local_68._0_8_ + local_118;
  local_110 = (ulonglong)((uint)uStack_50 & 0x1f);
  local_258 = local_248;
  FUN_180157500(local_68,local_d8,&local_118);
  FUN_1801401f0(param_1);
  goto LAB_180120380;
}



