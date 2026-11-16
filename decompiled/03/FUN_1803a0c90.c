// FUN_1803a0c90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803a0c90 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803a0c90(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_1058 [32];
  undefined8 local_1038 [2];
  undefined4 local_1028;
  undefined1 local_1024 [8];
  undefined1 local_101c [8];
  undefined8 local_1014;
  undefined8 uStack_100c;
  undefined8 uStack_1004;
  undefined8 uStack_ffc;
  undefined8 local_ff4;
  undefined8 uStack_fec;
  undefined8 uStack_fe4;
  undefined8 uStack_fdc;
  undefined8 local_fd4;
  undefined8 uStack_fcc;
  undefined8 uStack_fc4;
  undefined8 uStack_fbc;
  undefined8 local_fb4;
  undefined8 uStack_fac;
  undefined8 uStack_fa4;
  undefined8 uStack_f9c;
  undefined8 local_f94;
  undefined8 uStack_f8c;
  undefined8 local_f84;
  undefined8 local_f7c;
  undefined8 uStack_f74;
  undefined8 uStack_f6c;
  undefined8 uStack_f64;
  undefined8 local_f5c;
  undefined8 uStack_f54;
  undefined8 uStack_f4c;
  undefined8 uStack_f44;
  undefined8 local_f3c;
  undefined8 uStack_f34;
  undefined8 uStack_f2c;
  undefined8 uStack_f24;
  undefined8 local_f1c;
  undefined8 uStack_f14;
  undefined8 uStack_f0c;
  undefined8 uStack_f04;
  undefined8 local_efc;
  undefined8 uStack_ef4;
  undefined8 uStack_eec;
  undefined8 uStack_ee4;
  undefined8 local_edc;
  undefined8 uStack_ed4;
  undefined4 local_ecc;
  undefined8 local_ec8;
  undefined8 uStack_ec0;
  undefined8 uStack_eb8;
  undefined8 uStack_eb0;
  undefined8 local_ea8;
  undefined8 uStack_ea0;
  undefined8 uStack_e98;
  undefined8 uStack_e90;
  undefined8 local_e88;
  undefined8 uStack_e80;
  undefined8 uStack_e78;
  undefined8 uStack_e70;
  undefined8 local_e68;
  undefined8 uStack_e60;
  undefined8 local_e58;
  undefined8 local_e50;
  undefined8 uStack_e48;
  undefined4 local_e40;
  undefined1 local_e3c;
  undefined8 local_e3b;
  undefined8 uStack_e33;
  undefined8 uStack_e2b;
  undefined8 uStack_e23;
  longlong local_38;
  undefined1 local_30;
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x1803a0cb0;
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_1058;
  FUN_18063ab10(&local_1014,0,0xfdc);
  local_1014 = *param_2;
  uStack_100c = param_2[1];
  uStack_1004 = param_2[2];
  uStack_ffc = param_2[3];
  local_ff4 = param_2[4];
  uStack_fec = param_2[5];
  uStack_fe4 = param_2[6];
  uStack_fdc = param_2[7];
  local_fd4 = param_2[8];
  uStack_fcc = param_2[9];
  uStack_fc4 = param_2[10];
  uStack_fbc = param_2[0xb];
  local_f94 = param_2[0x10];
  uStack_f8c = param_2[0x11];
  local_fb4 = param_2[0xc];
  uStack_fac = param_2[0xd];
  uStack_fa4 = param_2[0xe];
  uStack_f9c = param_2[0xf];
  local_1038[1] = param_5;
  local_f7c = *param_3;
  uStack_f74 = param_3[1];
  uStack_f6c = param_3[2];
  uStack_f64 = param_3[3];
  local_1028 = param_6;
  local_f84 = param_2[0x12];
  local_1024 = (undefined1  [8])param_7;
  local_ecc = *(undefined4 *)(param_3 + 0x16);
  local_efc = param_3[0x10];
  uStack_ef4 = param_3[0x11];
  uStack_eec = param_3[0x12];
  uStack_ee4 = param_3[0x13];
  local_30 = 1;
  local_f5c = param_3[4];
  uStack_f54 = param_3[5];
  uStack_f4c = param_3[6];
  uStack_f44 = param_3[7];
  local_f3c = param_3[8];
  uStack_f34 = param_3[9];
  uStack_f2c = param_3[10];
  uStack_f24 = param_3[0xb];
  local_f1c = param_3[0xc];
  uStack_f14 = param_3[0xd];
  uStack_f0c = param_3[0xe];
  uStack_f04 = param_3[0xf];
  local_edc = param_3[0x14];
  uStack_ed4 = param_3[0x15];
  local_38 = 0x170;
  puVar6 = (undefined8 *)0x0;
  if (param_2[8] != 0) {
    puVar6 = (undefined8 *)(param_2[8] + 0x10);
  }
  if (puVar6 != (undefined8 *)0x0) {
    puVar7 = (undefined8 *)0x0;
    if (puVar6[6] != 0) {
      puVar7 = (undefined8 *)(puVar6[6] + 0x10);
    }
    if (puVar7 != (undefined8 *)0x0) {
      local_e40 = *(undefined4 *)(puVar7 + 2);
      lVar8 = 0x1fd;
      local_ea8 = puVar6[4];
      uStack_ea0 = puVar6[5];
      uStack_e98 = puVar6[6];
      uStack_e90 = puVar6[7];
      local_ec8 = *puVar6;
      uStack_ec0 = puVar6[1];
      uStack_eb8 = puVar6[2];
      uStack_eb0 = puVar6[3];
      local_e68 = puVar6[0xc];
      uStack_e60 = puVar6[0xd];
      local_e88 = puVar6[8];
      uStack_e80 = puVar6[9];
      uStack_e78 = puVar6[10];
      uStack_e70 = puVar6[0xb];
      local_e50 = *puVar7;
      uStack_e48 = puVar7[1];
      local_38 = 0x1fd;
      puVar7 = (undefined8 *)0x0;
      if (puVar6[5] != 0) {
        puVar7 = (undefined8 *)(puVar6[5] + 0x10);
      }
      local_e3c = puVar7 != (undefined8 *)0x0;
      local_e58 = puVar6[0xe];
      if (puVar7 != (undefined8 *)0x0) {
        local_e3b = *puVar7;
        uStack_e33 = puVar7[1];
        uStack_e2b = puVar7[2];
        uStack_e23 = puVar7[3];
        lVar8 = 0x21d;
        local_38 = 0x21d;
      }
      iVar2 = *(int *)(puVar6 + 2);
      if ((-1 < iVar2) && (iVar2 < 0x21)) {
        if (iVar2 == 0) goto LAB_1803a0f3a;
        plVar9 = (longlong *)puVar6[3];
        if ((plVar9 != (longlong *)0x0) && (iVar2 <= (int)*plVar9)) {
          if (0 < iVar2) {
            lVar10 = 0;
            do {
              plVar9 = plVar9 + 1;
              puVar6 = (undefined8 *)0x0;
              if (*plVar9 != 0) {
                puVar6 = (undefined8 *)(*plVar9 + 0x10);
              }
              if (puVar6 == (undefined8 *)0x0) goto LAB_1803a0f33;
              if (0x1000U - lVar8 < 0x28) {
                local_30 = 0;
              }
              else {
                uVar3 = puVar6[1];
                uVar4 = puVar6[2];
                uVar5 = puVar6[3];
                uVar1 = puVar6[4];
                *(undefined8 *)((longlong)local_1038 + lVar8) = *puVar6;
                *(undefined8 *)((longlong)local_1038 + lVar8 + 8) = uVar3;
                *(undefined8 *)((longlong)local_1038 + lVar8 + 0x10) = uVar4;
                *(undefined8 *)(local_1024 + lVar8 + 4) = uVar5;
                *(undefined8 *)(local_101c + lVar8 + 4) = uVar1;
                lVar8 = local_38 + 0x28;
                local_38 = lVar8;
              }
              lVar10 = lVar10 + 1;
            } while (lVar10 < iVar2);
          }
          goto LAB_1803a0f3a;
        }
      }
    }
  }
LAB_1803a0f33:
  local_30 = 0;
LAB_1803a0f3a:
  local_1038[0] = param_4;
  local_101c = (undefined1  [8])param_2;
  FUN_18063aed0(param_1,local_1038,0x1010);
}



