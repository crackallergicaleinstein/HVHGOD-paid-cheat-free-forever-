// FUN_18028ded0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18028ded0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18028ded0(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  float param_5)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  float *pfVar9;
  byte bVar10;
  float *pfVar11;
  float *pfVar12;
  undefined8 local_res18 [2];
  undefined1 auStack_168 [32];
  undefined1 local_148;
  undefined1 local_140;
  float local_128 [6];
  char **local_110;
  undefined8 *puStack_108;
  undefined8 *local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  char **local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 *local_90;
  undefined8 local_88;
  undefined1 *local_80;
  char **local_78;
  undefined8 *puStack_70;
  undefined8 *local_68;
  char *local_58;
  char *local_50;
  char *local_48;
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_168;
  local_58 = (char *)(param_2 + 0x68);
  local_40[0] = 0;
  local_50 = (char *)(param_2 + 0x170);
  local_48 = (char *)(param_2 + 0x278);
  local_38 = 0;
  local_28 = 0;
  local_30 = 0;
  local_20 = 0;
  local_res18[0] = param_3;
  GetTickCount64();
  uVar1 = *(uint *)(local_58 + 0x68);
  local_38 = CONCAT44(local_38._4_4_,uVar1);
  uVar2 = *(uint *)(local_58 + 0x6c);
  local_28 = CONCAT44(local_28._4_4_,uVar2);
  local_128[3] = 1.0;
  pfVar9 = local_128 + 2;
  if (0.0 <= param_5) {
    pfVar9 = &param_5;
  }
  local_128[2] = 0.0;
  pfVar12 = local_128 + 3;
  if (param_5 <= 1.0) {
    pfVar12 = pfVar9;
  }
  cVar3 = (char)(int)((float)(uVar1 >> 0x18) * *pfVar12);
  local_38._0_4_ = CONCAT13(cVar3,(int3)uVar1);
  pfVar9 = local_128 + 4;
  if (0.0 <= param_5) {
    pfVar9 = &param_5;
  }
  local_128[0] = 1.0;
  pfVar11 = local_128;
  if (param_5 <= 1.0) {
    pfVar11 = pfVar9;
  }
  local_128[4] = 0.0;
  cVar4 = (char)(int)((float)(uVar2 >> 0x18) * *pfVar11);
  local_28._0_4_ = CONCAT13(cVar4,(int3)uVar2);
  local_38 = CONCAT44(*(uint *)(local_50 + 0x68),(undefined4)local_38);
  local_28 = CONCAT44(*(uint *)(local_50 + 0x6c),(undefined4)local_28);
  cVar5 = (char)(int)((float)(*(uint *)(local_50 + 0x68) >> 0x18) * *pfVar12);
  local_38 = CONCAT17(cVar5,(undefined7)local_38);
  cVar6 = (char)(int)((float)(*(uint *)(local_50 + 0x6c) >> 0x18) * *pfVar11);
  local_28 = CONCAT17(cVar6,(undefined7)local_28);
  local_30 = *(uint *)(local_48 + 0x68);
  local_20 = *(uint *)(local_48 + 0x6c);
  cVar7 = (char)(int)((float)(local_30 >> 0x18) * *pfVar12);
  local_30 = CONCAT13(cVar7,(undefined3)local_30);
  cVar8 = (char)(int)((float)(local_20 >> 0x18) * *pfVar11);
  local_20 = CONCAT13(cVar8,(undefined3)local_20);
  if (*local_58 == '\0') {
LAB_18028e0ad:
    if (*local_50 == '\0') {
LAB_18028e0f3:
      if (*local_48 == '\0') {
LAB_18028e13e:
        local_148 = 1;
        goto LAB_18028e141;
      }
      bVar10 = local_48[0x78];
      if (cVar7 == '\0') {
        local_128[0] = 1.5399894e-36;
        local_128[1] = 1.6373235e-33;
        if (10 < bVar10) {
          if (0x12 < bVar10) goto LAB_18028e13e;
          bVar10 = *(byte *)((longlong)local_128 + (ulonglong)(bVar10 - 0xb));
        }
        if ((bVar10 != 6) || (cVar8 == '\0')) goto LAB_18028e13e;
      }
    }
    else {
      bVar10 = local_50[0x78];
      if (cVar5 == '\0') {
        local_128[0] = 1.5399894e-36;
        local_128[1] = 1.6373235e-33;
        if (10 < bVar10) {
          if (0x12 < bVar10) goto LAB_18028e0f3;
          bVar10 = *(byte *)((longlong)local_128 + (ulonglong)(bVar10 - 0xb));
        }
        if ((bVar10 != 6) || (cVar6 == '\0')) goto LAB_18028e0f3;
      }
    }
  }
  else {
    bVar10 = local_58[0x78];
    if (cVar3 == '\0') {
      local_128[0] = 1.5399894e-36;
      local_128[1] = 1.6373235e-33;
      if (10 < bVar10) {
        if (0x12 < bVar10) goto LAB_18028e0ad;
        bVar10 = *(byte *)((longlong)local_128 + (ulonglong)(bVar10 - 0xb));
      }
      if ((bVar10 != 6) || (cVar4 == '\0')) goto LAB_18028e0ad;
    }
  }
  local_148 = 0;
LAB_18028e141:
  local_f8 = param_1[2];
  local_110 = &local_58;
  local_f0 = param_1[3];
  local_e0 = param_1[4];
  local_d8 = param_1[1];
  puStack_108 = &local_38;
  local_100 = &local_28;
  local_e8 = local_res18;
  local_c8 = &local_58;
  local_c0 = &local_38;
  local_b8 = &local_28;
  local_b0 = *param_1;
  local_90 = local_res18;
  local_80 = local_40;
  local_140 = local_40[0];
  local_a8 = local_d8;
  local_a0 = local_f8;
  local_98 = local_f0;
  local_88 = local_e0;
  local_78 = local_110;
  puStack_70 = puStack_108;
  local_68 = local_100;
  FUN_180296930(&local_78,&local_58,&local_c8,&local_f8);
}



