// FUN_1802909c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802909c0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802909c0(longlong *param_1,int param_2,undefined1 param_3,undefined1 param_4)

{
  float fVar1;
  longlong lVar2;
  float *pfVar3;
  ulonglong uVar4;
  float *pfVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  char cVar9;
  float fVar10;
  float fVar11;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined8 local_100;
  float *local_f8;
  undefined1 local_f0;
  undefined1 local_e8;
  undefined1 local_e0;
  undefined2 local_d8;
  float local_c8 [2];
  float local_c0;
  undefined1 uStack_bd;
  undefined8 local_b8;
  undefined1 *local_b0;
  undefined4 local_a8;
  undefined1 *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined1 *local_68;
  undefined1 local_58 [8];
  ulonglong local_50;
  
  local_50 = DAT_1808d5f00 ^ (ulonglong)auStack_128;
  lVar2 = *(longlong *)(*param_1 + (longlong)param_2 * 8);
  local_res18[0] = param_3;
  local_res20[0] = param_4;
  GetTickCount64();
  fVar10 = 1.0;
  local_a8 = *(float *)(lVar2 + 0x68);
  bVar6 = *(byte *)(lVar2 + 0x78);
  uVar7 = (uint)bVar6;
  fVar1 = *(float *)(param_1[1] + 0x88 + *(longlong *)param_1[2] * 4);
  local_c8[0] = 1.5399894e-36;
  fVar11 = 0.0;
  local_c8[1] = 1.6373235e-33;
  pfVar3 = &stack0xffffffffffffff40;
  if (0.0 <= fVar1) {
    pfVar3 = (float *)(param_1[1] + 0x88 + *(longlong *)param_1[2] * 4);
  }
  pfVar5 = (float *)&local_b8;
  if (fVar1 <= 1.0) {
    pfVar5 = pfVar3;
  }
  local_b8._0_4_ = 1.0;
  local_c0 = 0.0;
  cVar9 = (char)(int)((float)((uint)local_a8 >> 0x18) * *pfVar5);
  local_a8 = (float)CONCAT13(cVar9,SUB43(local_a8,0));
  if (10 < bVar6) {
    if (bVar6 < 0x13) {
      uVar7 = (uint)*(byte *)((longlong)local_c8 + (ulonglong)(bVar6 - 0xb));
    }
    else {
      uVar7 = 2;
    }
  }
  bVar6 = (byte)uVar7;
  GetTickCount64();
  local_c0 = *(float *)(lVar2 + 0x6c);
  local_70 = (undefined8 *)param_1[7];
  fVar1 = *(float *)(param_1[1] + 0x88 + *(longlong *)param_1[2] * 4);
  pfVar3 = (float *)&local_b8;
  if (fVar11 <= fVar1) {
    pfVar3 = (float *)(param_1[1] + 0x88 + *(longlong *)param_1[2] * 4);
  }
  local_80 = (undefined8 *)param_1[5];
  pfVar5 = local_c8;
  if (fVar1 <= fVar10) {
    pfVar5 = pfVar3;
  }
  local_78 = (undefined8 *)param_1[6];
  local_c8[0] = fVar10;
  local_b8 = (undefined1 **)CONCAT44(local_b8._4_4_,fVar11);
  local_88 = (undefined8 *)param_1[4];
  local_c0 = (float)CONCAT13((char)(int)((float)((uint)local_c0 >> 0x18) * *pfVar5),
                             SUB43(local_c0,0));
  local_90 = (undefined8 *)param_1[3];
  uVar8 = *(uint *)(lVar2 + 0x74);
  if (uVar8 == 0) {
    uVar8 = (uint)*(byte *)(lVar2 + 0x70);
  }
  local_98 = local_res20;
  local_68 = local_res18;
  uVar4 = (ulonglong)(uint)local_a8;
  local_c8[0] = local_a8;
  local_58[0] = FUN_18028c7b0(uVar7);
  local_b8 = &local_98;
  local_b0 = local_58;
  FUN_180297ff0(local_58[0],uVar4 & 0xffffffff,local_c0,&local_b8);
  if (uVar8 - 1 < 3) {
LAB_180290bc4:
    if ((uVar8 != 0) && (cVar9 != '\0')) {
      local_d8 = 0x100;
      local_e0 = 1;
      local_e8 = *local_68;
      local_f0 = *(undefined1 *)
                  ((longlong)std::_Ref_count_obj2<int>::vftable + (longlong)(int)uVar8 + 0x1f);
      local_f8 = local_c8;
      local_100 = *local_70;
      local_108 = *local_78;
      FUN_180296090(&DAT_180cc9690,*local_90,*local_88,*local_80);
    }
  }
  else {
    local_b8 = (undefined1 **)0x908060504030200;
    if (10 < bVar6) {
      if (bVar6 < 0x13) {
        bVar6 = *(byte *)((longlong)local_c8 + (ulonglong)(uVar7 - 0xb) + 0x10);
      }
      else {
        bVar6 = 2;
      }
    }
    uVar4 = 0;
    do {
      if ((&DAT_1807d1130)[uVar4] == bVar6) {
        uVar8 = (int)uVar4 + 1;
        goto LAB_180290bc4;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 3);
  }
}



