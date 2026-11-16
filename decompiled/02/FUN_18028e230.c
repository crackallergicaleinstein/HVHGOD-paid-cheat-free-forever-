// FUN_18028e230 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18028e230 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18028e230(longlong *param_1,int param_2,undefined1 param_3,undefined1 param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined8 local_110;
  uint *local_108;
  undefined1 local_100;
  undefined1 local_f8;
  undefined1 local_f0;
  undefined2 local_e8;
  uint local_d8 [4];
  undefined1 **local_c8;
  undefined1 *local_c0;
  undefined4 local_b8;
  undefined1 *local_a8;
  longlong local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 local_58 [8];
  ulonglong local_50;
  
  local_50 = DAT_1808d5f00 ^ (ulonglong)auStack_138;
  lVar6 = (longlong)param_2;
  local_d8[0] = 0x4030200;
  local_d8[1] = 0x9080605;
  lVar1 = *(longlong *)(*param_1 + lVar6 * 8);
  bVar3 = *(byte *)(lVar1 + 0x78);
  uVar4 = (uint)bVar3;
  if (10 < bVar3) {
    if (bVar3 < 0x13) {
      uVar4 = (uint)*(byte *)((longlong)local_d8 + (ulonglong)(bVar3 - 0xb));
    }
    else {
      uVar4 = 2;
    }
  }
  bVar3 = (byte)uVar4;
  uVar5 = *(uint *)(lVar1 + 0x74);
  local_a0 = param_1[3];
  local_98 = (undefined8 *)param_1[4];
  local_90 = (undefined8 *)param_1[5];
  local_88 = (undefined8 *)param_1[6];
  local_80 = (undefined8 *)param_1[7];
  local_78 = (undefined8 *)param_1[8];
  local_68 = (undefined1 *)param_1[9];
  if (uVar5 == 0) {
    uVar5 = (uint)*(byte *)(lVar1 + 0x70);
  }
  local_a8 = local_res20;
  uVar7 = (ulonglong)*(uint *)(param_1[2] + lVar6 * 4);
  local_d8[0] = *(uint *)(param_1[1] + lVar6 * 4);
  uVar2 = (ulonglong)local_d8[0];
  local_70 = local_res18;
  local_res18[0] = param_3;
  local_res20[0] = param_4;
  local_b8 = local_d8[0];
  local_58[0] = FUN_18028c7b0(uVar4);
  local_c8 = &local_a8;
  local_c0 = local_58;
  FUN_180297e80(local_58[0],uVar2 & 0xffffffff,uVar7 & 0xffffffff,&local_c8);
  if (uVar5 - 1 < 3) {
LAB_18028e376:
    if ((uVar5 != 0) && (local_b8._3_1_ != '\0')) {
      local_e8 = 0x100;
      local_f0 = *local_68;
      local_f8 = *local_70;
      local_100 = *(undefined1 *)
                   ((longlong)std::_Ref_count_obj2<int>::vftable + (longlong)(int)uVar5 + 0x1f);
      local_108 = local_d8;
      local_110 = *local_78;
      local_118 = *local_80;
      FUN_180296090(local_a0,*local_98,*local_90,*local_88);
    }
  }
  else {
    local_c8 = (undefined1 **)0x908060504030200;
    if (10 < bVar3) {
      if (bVar3 < 0x13) {
        bVar3 = *(byte *)((longlong)local_d8 + (ulonglong)(uVar4 - 0xb) + 0x10);
      }
      else {
        bVar3 = 2;
      }
    }
    uVar2 = 0;
    do {
      if ((&DAT_1807d1130)[uVar2] == bVar3) {
        uVar5 = (int)uVar2 + 1;
        goto LAB_18028e376;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 3);
  }
}



