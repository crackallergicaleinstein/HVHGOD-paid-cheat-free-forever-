// FUN_180506d30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180506d30 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180506d30(longlong param_1,longlong *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  float **local_80;
  float *local_68 [2];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  float local_48;
  float local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_a8;
  if (DAT_180bb8ae8 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = *(longlong *)(DAT_180bb8ae8 + 0xd0);
  }
  local_48 = (float)(int)(*(float *)(param_1 + 0x30) * *(float *)(param_1 + 0x28) + 0.5);
  local_50 = 0;
  local_44 = (float)(int)(*(float *)(param_1 + 0x34) * *(float *)(param_1 + 0x2c) + 0.5);
  local_3c = 0x3f800000;
  local_4c = local_50;
  local_40 = local_50;
  (**(code **)(*param_2 + 0x160))(param_2,1,&local_50);
  local_80 = local_68;
  local_88 = (undefined4 *)((ulonglong)local_88._4_4_ << 0x20);
  iVar5 = (**(code **)(*param_2 + 0x70))(param_2,*(undefined8 *)(lVar6 + 0x38),0,4);
  if (iVar5 == 0) {
    fVar1 = *(float *)(param_1 + 0x20);
    fVar3 = fVar1 + *(float *)(param_1 + 0x28);
    fVar2 = *(float *)(param_1 + 0x24);
    fVar4 = fVar2 + *(float *)(param_1 + 0x2c);
    *local_68[0] = 2.0 / (fVar3 - fVar1);
    local_68[0][1] = 0.0;
    local_68[0][2] = 0.0;
    local_68[0][3] = 0.0;
    local_68[0][4] = 0.0;
    local_68[0][5] = 2.0 / (fVar2 - fVar4);
    local_68[0][6] = 0.0;
    local_68[0][7] = 0.0;
    local_68[0][8] = 0.0;
    local_68[0][9] = 0.0;
    local_68[0][10] = 0.5;
    local_68[0][0xb] = 0.0;
    local_68[0][0xc] = (fVar3 + fVar1) / (fVar1 - fVar3);
    local_68[0][0xd] = (fVar4 + fVar2) / (fVar4 - fVar2);
    local_68[0][0xe] = 0.5;
    local_68[0][0xf] = 1.0;
    (**(code **)(*param_2 + 0x78))(param_2,*(undefined8 *)(lVar6 + 0x38),0);
  }
  local_54 = 0x14;
  local_58 = 0;
  (**(code **)(*param_2 + 0x88))(param_2,*(undefined8 *)(lVar6 + 0x30));
  local_80 = (float **)&local_58;
  local_88 = &local_54;
  (**(code **)(*param_2 + 0x90))(param_2,0,1,lVar6 + 0x18);
  (**(code **)(*param_2 + 0x98))(param_2,*(undefined8 *)(lVar6 + 0x20),0x39,0);
  (**(code **)(*param_2 + 0xc0))(param_2,4);
  (**(code **)(*param_2 + 0x58))(param_2,*(undefined8 *)(lVar6 + 0x28),0,0);
  (**(code **)(*param_2 + 0x38))(param_2,0,1,lVar6 + 0x38);
  (**(code **)(*param_2 + 0x48))(param_2,*(undefined8 *)(lVar6 + 0x40),0,0);
  (**(code **)(*param_2 + 0x50))(param_2,0,1,lVar6 + 0x48);
  (**(code **)(*param_2 + 0xb8))(param_2,0,0,0);
  (**(code **)(*param_2 + 0x1e0))(param_2,0,0,0);
  (**(code **)(*param_2 + 0x200))(param_2,0,0,0);
  (**(code **)(*param_2 + 0x228))(param_2,0,0,0);
  local_38 = 0;
  uStack_30 = 0;
  (**(code **)(*param_2 + 0x118))(param_2,*(undefined8 *)(lVar6 + 0x60),&local_38,0xffffffff);
  (**(code **)(*param_2 + 0x120))(param_2,*(undefined8 *)(lVar6 + 0x68),0);
  (**(code **)(*param_2 + 0x158))(param_2,*(undefined8 *)(lVar6 + 0x58));
}



