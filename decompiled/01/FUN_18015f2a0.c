// FUN_18015f2a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18015f2a0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18015f2a0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  short sVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  ulonglong uVar12;
  undefined1 auStack_268 [32];
  undefined1 *local_248;
  undefined1 local_238 [8];
  undefined1 local_230 [16];
  undefined1 local_220 [16];
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 local_1f0;
  undefined1 local_1e8 [32];
  undefined1 local_1c8 [56];
  undefined1 local_190 [64];
  undefined1 local_150 [72];
  longlong local_108;
  ulonglong local_100;
  longlong local_f8;
  ulonglong local_f0;
  longlong local_e8;
  ulonglong local_e0;
  longlong local_d8;
  ulonglong local_d0;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined8 uStack_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_268;
  local_58 = (undefined1  [16])0x0;
  uStack_48 = 0;
  uStack_40 = 0;
LAB_18015f310:
  do {
    switch(*(undefined4 *)(param_1 + 0x40)) {
    default:
      local_230 = (undefined1  [16])0x0;
      local_220 = (undefined1  [16])0x0;
      FUN_18015ba30(local_230,"value",5);
      uVar10 = FUN_18013fea0(param_1,local_1c8,0x10,local_230);
      local_210 = *(undefined8 *)(param_1 + 0x68);
      uStack_208 = *(undefined8 *)(param_1 + 0x70);
      local_200 = *(undefined8 *)(param_1 + 0x78);
      uVar10 = FUN_1801212b0(local_190,local_200,&local_210,uVar10);
      FUN_18013fdc0(param_1 + 0x48,local_1e8);
      *(undefined1 *)(param_2 + 0x68) = 1;
      if (*(char *)(param_2 + 0xb0) != '\0') {
        FUN_1800a8410(local_150,uVar10);
                    /* WARNING: Subroutine does not return */
        FUN_180606630(local_150,&DAT_1808d1140);
      }
      FUN_18015c010(local_1e8);
      FUN_1800a7900(local_190);
      FUN_18015c010(local_1c8);
LAB_180160085:
      puVar11 = local_230;
LAB_18016008a:
      FUN_18015c010(puVar11);
LAB_180160091:
      FUN_180159650(local_58);
    case 1:
      local_238[0] = 1;
      FUN_180153ab0(param_2,local_78,local_238);
      break;
    case 2:
      local_238[0] = 0;
      FUN_180153ab0(param_2,local_98,local_238);
      break;
    case 3:
      FUN_180153e00(param_2,local_88);
      break;
    case 4:
      if ((*(int *)(param_1 + 0xd8) != 0x2e) && (*(longlong *)(param_1 + 0xe0) != -1)) {
        puVar9 = (undefined8 *)(param_1 + 0x98);
        if (0xf < *(ulonglong *)(param_1 + 0xb0)) {
          puVar9 = (undefined8 *)*puVar9;
        }
        *(undefined1 *)((longlong)puVar9 + *(longlong *)(param_1 + 0xe0)) = 0x2e;
      }
      FUN_180152d60(param_2,local_1c8,param_1 + 0x98);
      break;
    case 5:
      local_1f0 = *(undefined8 *)(param_1 + 200);
      FUN_180153410(param_2,local_1e8,&local_1f0);
      break;
    case 6:
      local_1f0 = *(undefined8 *)(param_1 + 0xc0);
      FUN_180153760(param_2,local_68,&local_1f0);
      break;
    case 7:
      uVar10 = *(undefined8 *)(param_1 + 0xd0);
      sVar6 = thunk_FUN_1806243d0();
      if (0 < sVar6) {
        local_238[0] = 0x27;
        FUN_18013fdc0(param_1 + 0x48,local_1e8);
        FUN_180141810(local_230);
        uVar10 = FUN_1801418b0(local_190);
        FUN_18013fdc0(param_1 + 0x48,&local_210);
        *(undefined1 *)(param_2 + 0x68) = 1;
        if (*(char *)(param_2 + 0xb0) != '\0') {
          FUN_1800f66e0(local_1c8,uVar10);
                    /* WARNING: Subroutine does not return */
          FUN_180606630(local_1c8,&DAT_1808d0f80);
        }
        FUN_18015c010(&local_210);
        FUN_1800a7900(local_190);
        FUN_18015c010(local_230);
        puVar11 = local_1e8;
        goto LAB_18016008a;
      }
      if ((*(int *)(param_1 + 0xd8) != 0x2e) && (*(longlong *)(param_1 + 0xe0) != -1)) {
        puVar9 = (undefined8 *)(param_1 + 0x98);
        if (0xf < *(ulonglong *)(param_1 + 0xb0)) {
          puVar9 = (undefined8 *)*puVar9;
        }
        *(undefined1 *)((longlong)puVar9 + *(longlong *)(param_1 + 0xe0)) = 0x2e;
      }
      local_1f0 = uVar10;
      FUN_1801530b0(param_2,local_a8,&local_1f0);
      break;
    case 8:
      cVar5 = FUN_1801501c0(param_2,0xffffffffffffffff);
      if (cVar5 != '\0') {
        iVar7 = FUN_180161330(param_1 + 0x48);
        *(int *)(param_1 + 0x40) = iVar7;
        if (iVar7 != 10) goto LAB_18015f497;
        cVar5 = FUN_1801500b0(param_2);
        if (cVar5 != '\0') break;
      }
      goto LAB_180160091;
    case 9:
      cVar5 = FUN_180150860(param_2,0xffffffffffffffff);
      if (cVar5 == '\0') goto LAB_180160091;
      lVar1 = param_1 + 0x48;
      iVar7 = FUN_180161330(lVar1);
      *(int *)(param_1 + 0x40) = iVar7;
      if (iVar7 != 0xb) {
        if (iVar7 != 4) {
          local_230 = (undefined1  [16])0x0;
          local_220 = (undefined1  [16])0x0;
          FUN_18015ba30(local_230,"object key",10);
          uVar10 = FUN_18013fea0(param_1,local_1c8,4,local_230);
          local_210 = *(undefined8 *)(param_1 + 0x68);
          uStack_208 = *(undefined8 *)(param_1 + 0x70);
          local_200 = *(undefined8 *)(param_1 + 0x78);
          uVar10 = FUN_1801212b0(local_190,local_200,&local_210,uVar10);
          FUN_18013fdc0(lVar1,local_1e8);
          *(undefined1 *)(param_2 + 0x68) = 1;
          if (*(char *)(param_2 + 0xb0) != '\0') {
            FUN_1800a8410(local_150,uVar10);
                    /* WARNING: Subroutine does not return */
            FUN_180606630(local_150,&DAT_1808d1140);
          }
          FUN_18015c010(local_1e8);
          FUN_1800a7900(local_190);
          FUN_18015c010(local_1c8);
          goto LAB_180160085;
        }
        if ((*(int *)(param_1 + 0xd8) != 0x2e) && (*(longlong *)(param_1 + 0xe0) != -1)) {
          puVar9 = (undefined8 *)(param_1 + 0x98);
          if (0xf < *(ulonglong *)(param_1 + 0xb0)) {
            puVar9 = (undefined8 *)*puVar9;
          }
          *(undefined1 *)((longlong)puVar9 + *(longlong *)(param_1 + 0xe0)) = 0x2e;
        }
        cVar5 = FUN_1801506c0(param_2,param_1 + 0x98);
        if (cVar5 == '\0') goto LAB_180160091;
        iVar7 = FUN_180161330(lVar1);
        *(int *)(param_1 + 0x40) = iVar7;
        if (iVar7 != 0xc) {
          local_230 = (undefined1  [16])0x0;
          local_220 = (undefined1  [16])0x0;
          FUN_18015ba30(local_230,"object separator",0x10);
          uVar10 = FUN_18013fea0(param_1,local_1c8,0xc,local_230);
          local_210 = *(undefined8 *)(param_1 + 0x68);
          uStack_208 = *(undefined8 *)(param_1 + 0x70);
          local_200 = *(undefined8 *)(param_1 + 0x78);
          uVar10 = FUN_1801212b0(local_150,local_200,&local_210,uVar10);
          FUN_18013fdc0(lVar1,local_1e8);
          *(undefined1 *)(param_2 + 0x68) = 1;
          if (*(char *)(param_2 + 0xb0) != '\0') {
            FUN_1800a8410(local_190,uVar10);
                    /* WARNING: Subroutine does not return */
            FUN_180606630(local_190,&DAT_1808d1140);
          }
          FUN_18015c010(local_1e8);
          FUN_1800a7900(local_150);
          FUN_18015c010(local_1c8);
          goto LAB_180160085;
        }
        local_238[0] = 0;
        if (((longlong)uStack_40 < 0) && (uStack_40 != 0)) {
          local_108 = -((~uStack_40 >> 5) * 4 + 4);
        }
        else {
          local_108 = (uStack_40 >> 5) * 4;
        }
        local_108 = local_58._0_8_ + local_108;
        local_100 = (ulonglong)((uint)uStack_40 & 0x1f);
        local_248 = local_238;
        FUN_180157500(local_58,local_c8,&local_108);
LAB_18015f447:
        uVar8 = FUN_180161330(param_1 + 0x48);
        *(undefined4 *)(param_1 + 0x40) = uVar8;
        goto LAB_18015f310;
      }
      cVar5 = FUN_1801503b0(param_2);
      if (cVar5 == '\0') goto LAB_180160091;
      break;
    case 0xe:
      local_230 = (undefined1  [16])0x0;
      local_220 = (undefined1  [16])0x0;
      FUN_18015ba30(local_230,"value",5);
      uVar10 = FUN_18013fea0(param_1,local_1c8,0,local_230);
      local_210 = *(undefined8 *)(param_1 + 0x68);
      uStack_208 = *(undefined8 *)(param_1 + 0x70);
      local_200 = *(undefined8 *)(param_1 + 0x78);
      uVar10 = FUN_1801212b0(local_190,local_200,&local_210,uVar10);
      FUN_18013fdc0(param_1 + 0x48,local_1e8);
      *(undefined1 *)(param_2 + 0x68) = 1;
      if (*(char *)(param_2 + 0xb0) != '\0') {
        FUN_1800a8410(local_150,uVar10);
                    /* WARNING: Subroutine does not return */
        FUN_180606630(local_150,&DAT_1808d1140);
      }
      FUN_18015c010(local_1e8);
      FUN_1800a7900(local_190);
      FUN_18015c010(local_1c8);
      goto LAB_180160085;
    case 0xf:
      local_200 = *(undefined8 *)(param_1 + 0x78);
      local_230 = (undefined1  [16])0x0;
      local_220 = (undefined1  [16])0x0;
      if (*(longlong *)(param_1 + 0x68) == 1) {
        FUN_18015ba30(local_230,
                      "attempting to parse an empty input; check that your input string or stream contains the expected JSON"
                      ,0x65);
        local_210 = *(undefined8 *)(param_1 + 0x68);
        uStack_208 = *(undefined8 *)(param_1 + 0x70);
        local_200 = *(undefined8 *)(param_1 + 0x78);
        uVar10 = FUN_1801212b0(local_190,local_200,&local_210,local_230);
        FUN_18013fdc0(param_1 + 0x48,local_1e8);
        *(undefined1 *)(param_2 + 0x68) = 1;
        if (*(char *)(param_2 + 0xb0) != '\0') {
          FUN_1800a8410(local_150,uVar10);
                    /* WARNING: Subroutine does not return */
          FUN_180606630(local_150,&DAT_1808d1140);
        }
        FUN_18015c010(local_1e8);
        FUN_1800a7900(local_190);
      }
      else {
        FUN_18015ba30(local_230,"value",5);
        uVar10 = FUN_18013fea0(param_1,local_1c8,0x10,local_230);
        local_210 = *(undefined8 *)(param_1 + 0x68);
        uStack_208 = *(undefined8 *)(param_1 + 0x70);
        local_200 = *(undefined8 *)(param_1 + 0x78);
        uVar10 = FUN_1801212b0(local_190,local_200,&local_210,uVar10);
        FUN_18013fdc0(param_1 + 0x48,local_1e8);
        *(undefined1 *)(param_2 + 0x68) = 1;
        if (*(char *)(param_2 + 0xb0) != '\0') {
          FUN_1800a8410(local_150,uVar10);
                    /* WARNING: Subroutine does not return */
          FUN_180606630(local_150,&DAT_1808d1140);
        }
        FUN_18015c010(local_1e8);
        FUN_1800a7900(local_190);
        FUN_18015c010(local_1c8);
      }
      goto LAB_180160085;
    }
    while( true ) {
      while( true ) {
        if (uStack_40 == 0) goto LAB_180160091;
        if (((longlong)uStack_40 < 0) && (uStack_40 != 0)) {
          lVar1 = -((~uStack_40 >> 5) * 4 + 4);
        }
        else {
          lVar1 = (uStack_40 >> 5) * 4;
        }
        uVar12 = (ulonglong)((uint)uStack_40 & 0x1f);
        uVar2 = uVar12 - 1;
        if (uVar12 == 0) {
          lVar4 = -4;
        }
        else {
          lVar4 = (uVar2 >> 5) * 4;
        }
        lVar3 = param_1 + 0x48;
        if ((*(uint *)(local_58._0_8_ + lVar1 + lVar4) >> ((uint)uVar2 & 0x1f) & 1) == 0) break;
        iVar7 = FUN_180161330(lVar3);
        *(int *)(param_1 + 0x40) = iVar7;
        if (iVar7 == 0xd) goto LAB_18015f447;
        if (iVar7 != 10) {
          local_230 = (undefined1  [16])0x0;
          local_220 = (undefined1  [16])0x0;
          FUN_18015ba30(local_230,"array",5);
          uVar10 = FUN_18013fea0(param_1,local_1c8,10,local_230);
          local_210 = *(undefined8 *)(param_1 + 0x68);
          uStack_208 = *(undefined8 *)(param_1 + 0x70);
          local_200 = *(undefined8 *)(param_1 + 0x78);
          uVar10 = FUN_1801212b0(local_190,local_200,&local_210,uVar10);
          FUN_18013fdc0(lVar3,local_1e8);
          *(undefined1 *)(param_2 + 0x68) = 1;
          if (*(char *)(param_2 + 0xb0) != '\0') {
            FUN_1800a8410(local_150,uVar10);
                    /* WARNING: Subroutine does not return */
            FUN_180606630(local_150,&DAT_1808d1140);
          }
          FUN_18015c010(local_1e8);
          FUN_1800a7900(local_190);
          FUN_18015c010(local_1c8);
          FUN_18015c010(local_230);
          goto LAB_180160091;
        }
        cVar5 = FUN_1801500b0(param_2);
        if (cVar5 == '\0') goto LAB_180160091;
        if (((longlong)uStack_40 < 0) && (uStack_40 != 0)) {
          lVar1 = -((~uStack_40 >> 5) * 4 + 4);
        }
        else {
          lVar1 = (uStack_40 >> 5) * 4;
        }
        uVar12 = (ulonglong)((uint)uStack_40 & 0x1f);
        uVar2 = uVar12 - 1;
        local_e0 = (ulonglong)((uint)uVar2 & 0x1f);
        if (uVar12 == 0) {
          local_e8 = -4;
        }
        else {
          local_e8 = (uVar2 >> 5) * 4;
        }
        local_e8 = local_58._0_8_ + lVar1 + local_e8;
        FUN_180156be0(local_58,local_230,&local_e8);
      }
      iVar7 = FUN_180161330(lVar3);
      *(int *)(param_1 + 0x40) = iVar7;
      if (iVar7 == 0xd) break;
      if (iVar7 != 0xb) {
        local_230 = (undefined1  [16])0x0;
        local_220 = (undefined1  [16])0x0;
        FUN_18015ba30(local_230,"object",6);
        uVar10 = FUN_18013fea0(param_1,local_1c8,0xb,local_230);
        local_210 = *(undefined8 *)(param_1 + 0x68);
        uStack_208 = *(undefined8 *)(param_1 + 0x70);
        local_200 = *(undefined8 *)(param_1 + 0x78);
        uVar10 = FUN_1801212b0(local_190,local_200,&local_210,uVar10);
        FUN_18013fdc0(lVar3,local_1e8);
        *(undefined1 *)(param_2 + 0x68) = 1;
        if (*(char *)(param_2 + 0xb0) != '\0') {
          FUN_1800a8410(local_150,uVar10);
                    /* WARNING: Subroutine does not return */
          FUN_180606630(local_150,&DAT_1808d1140);
        }
        FUN_18015c010(local_1e8);
        FUN_1800a7900(local_190);
        FUN_18015c010(local_1c8);
        FUN_18015c010(local_230);
        goto LAB_180160091;
      }
      cVar5 = FUN_1801503b0(param_2);
      if (cVar5 == '\0') goto LAB_180160091;
      if (((longlong)uStack_40 < 0) && (uStack_40 != 0)) {
        lVar1 = -((~uStack_40 >> 5) * 4 + 4);
      }
      else {
        lVar1 = (uStack_40 >> 5) * 4;
      }
      uVar12 = (ulonglong)((uint)uStack_40 & 0x1f);
      uVar2 = uVar12 - 1;
      local_d0 = (ulonglong)((uint)uVar2 & 0x1f);
      if (uVar12 == 0) {
        local_d8 = -4;
      }
      else {
        local_d8 = (uVar2 >> 5) * 4;
      }
      local_d8 = local_58._0_8_ + lVar1 + local_d8;
      FUN_180156be0(local_58,&local_210,&local_d8);
    }
    iVar7 = FUN_180161330(lVar3);
    *(int *)(param_1 + 0x40) = iVar7;
    if (iVar7 != 4) {
      local_230 = (undefined1  [16])0x0;
      local_220 = (undefined1  [16])0x0;
      FUN_18015ba30(local_230,"object key",10);
      uVar10 = FUN_18013fea0(param_1,local_1c8,4,local_230);
      local_210 = *(undefined8 *)(param_1 + 0x68);
      uStack_208 = *(undefined8 *)(param_1 + 0x70);
      local_200 = *(undefined8 *)(param_1 + 0x78);
      uVar10 = FUN_1801212b0(local_190,local_200,&local_210,uVar10);
      FUN_18013fdc0(lVar3,local_1e8);
      *(undefined1 *)(param_2 + 0x68) = 1;
      if (*(char *)(param_2 + 0xb0) != '\0') {
        FUN_1800a8410(local_150,uVar10);
                    /* WARNING: Subroutine does not return */
        FUN_180606630(local_150,&DAT_1808d1140);
      }
      FUN_18015c010(local_1e8);
      FUN_1800a7900(local_190);
      FUN_18015c010(local_1c8);
      FUN_18015c010(local_230);
      goto LAB_180160091;
    }
    if ((*(int *)(param_1 + 0xd8) != 0x2e) && (*(longlong *)(param_1 + 0xe0) != -1)) {
      puVar9 = (undefined8 *)(param_1 + 0x98);
      if (0xf < *(ulonglong *)(param_1 + 0xb0)) {
        puVar9 = (undefined8 *)*puVar9;
      }
      *(undefined1 *)(*(longlong *)(param_1 + 0xe0) + (longlong)puVar9) = 0x2e;
    }
    cVar5 = FUN_1801506c0(param_2,param_1 + 0x98);
    if (cVar5 == '\0') goto LAB_180160091;
    iVar7 = FUN_180161330(lVar3);
    *(int *)(param_1 + 0x40) = iVar7;
    if (iVar7 != 0xc) {
      local_230 = (undefined1  [16])0x0;
      local_220 = (undefined1  [16])0x0;
      FUN_18015ba30(local_230,"object separator",0x10);
      uVar10 = FUN_18013fea0(param_1,local_1c8,0xc,local_230);
      local_210 = *(undefined8 *)(param_1 + 0x68);
      uStack_208 = *(undefined8 *)(param_1 + 0x70);
      local_200 = *(undefined8 *)(param_1 + 0x78);
      uVar10 = FUN_1801212b0(local_190,local_200,&local_210,uVar10);
      FUN_18013fdc0(lVar3,local_1e8);
      *(undefined1 *)(param_2 + 0x68) = 1;
      if (*(char *)(param_2 + 0xb0) != '\0') {
        FUN_1800a8410(local_150,uVar10);
                    /* WARNING: Subroutine does not return */
        FUN_180606630(local_150,&DAT_1808d1140);
      }
      FUN_18015c010(local_1e8);
      FUN_1800a7900(local_190);
      FUN_18015c010(local_1c8);
      FUN_18015c010(local_230);
      goto LAB_180160091;
    }
    uVar8 = FUN_180161330(lVar3);
    *(undefined4 *)(param_1 + 0x40) = uVar8;
  } while( true );
LAB_18015f497:
  local_238[0] = 1;
  if (((longlong)uStack_40 < 0) && (uStack_40 != 0)) {
    local_f8 = -((~uStack_40 >> 5) * 4 + 4);
  }
  else {
    local_f8 = (uStack_40 >> 5) * 4;
  }
  local_f8 = local_58._0_8_ + local_f8;
  local_f0 = (ulonglong)((uint)uStack_40 & 0x1f);
  local_248 = local_238;
  FUN_180157500(local_58,local_b8,&local_f8);
  goto LAB_18015f310;
}



