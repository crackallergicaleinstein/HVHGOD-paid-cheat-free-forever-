// FUN_1804c8400 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804c8400 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804c8400(float *param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  float fVar6;
  undefined1 auStack_c8 [32];
  float *local_a8;
  float *local_a0;
  undefined4 local_98;
  float local_88;
  float local_84;
  float local_80;
  undefined4 local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  ulonglong local_58;
  
  lVar5 = DAT_180bb8ae8;
  local_58 = DAT_1808d5f00 ^ (ulonglong)auStack_c8;
  FUN_1804c8330(&local_68);
  uVar1 = *(uint *)(param_2 + 0x14);
  if ((uVar1 >> 0x1c & 1) == 0) {
    if ((uVar1 >> 0x1a & 1) == 0) {
      if ((uVar1 >> 0x19 & 1) == 0) {
        *(undefined8 *)param_1 = *(undefined8 *)(param_2 + 0x28);
      }
      fVar6 = *(float *)(lVar5 + 0xdac);
      FUN_1804c9f10(&local_88,0x2000000);
      if ((*(int *)(lVar5 + 0x128) == 1) &&
         (((*(char *)(lVar5 + 0x2038) == '\0' || (*(char *)(lVar5 + 0x2039) == '\0')) ||
          (*(longlong *)(lVar5 + 0x2040) == 0)))) {
        fVar3 = (fVar6 * 0.0 + local_88) - *(float *)(param_2 + 0x30) * 0.5;
        fVar4 = (local_84 - fVar6 * 20.0) - *(float *)(param_2 + 0x34);
        if ((((local_68 <= fVar3) && (local_64 <= fVar4)) &&
            (fVar3 + *(float *)(param_2 + 0x30) <= local_60)) &&
           (fVar4 + *(float *)(param_2 + 0x34) <= local_5c)) {
          *param_1 = fVar3;
          param_1[1] = fVar4;
        }
      }
      if (((*(char *)(lVar5 + 0x2038) == '\0') || (*(char *)(lVar5 + 0x2039) == '\0')) ||
         (*(char *)(lVar5 + 0x72) != '\0')) {
        local_70 = fVar6 * 24.0 + local_88;
        local_6c = fVar6 * 24.0 + local_84;
      }
      else {
        local_6c = local_84 + 8.0;
        local_70 = local_88 + 16.0;
      }
      local_74 = local_84 - 8.0;
      local_78 = local_88 - 16.0;
      local_a0 = &local_78;
      local_98 = 2;
      local_a8 = &local_68;
      local_88 = fVar6 * 16.0 + local_88;
      local_84 = fVar6 * 10.0 + local_84;
      FUN_1804c7fe0(param_1,&local_88,param_2 + 0x30,param_2 + 0xe4);
    }
    local_78 = *(float *)(param_2 + 0x28);
    local_74 = *(float *)(param_2 + 0x2c);
    local_a0 = &local_78;
    local_70 = local_78;
    local_6c = local_74;
  }
  else {
    lVar2 = *(longlong *)
             (((longlong)*(int *)(lVar5 + 0x14a0) + -2) * 0x88 + *(longlong *)(lVar5 + 0x14a8));
    if (*(char *)(lVar2 + 0x17b) == '\0') {
      local_88 = *(float *)(lVar5 + 0xcdc) + *(float *)(lVar2 + 0x28);
      local_84 = -3.4028235e+38;
      local_80 = ((*(float *)(lVar2 + 0x28) + *(float *)(lVar2 + 0x30)) - *(float *)(lVar5 + 0xcdc))
                 - *(float *)(lVar2 + 0xc0);
      local_7c = 0x7f7fffff;
    }
    else {
      local_84 = *(float *)(lVar2 + 0x26c);
      local_88 = -3.4028235e+38;
      local_7c = *(undefined4 *)(lVar2 + 0x274);
      local_80 = 3.4028235e+38;
    }
    local_a0 = &local_88;
  }
  local_98 = 0;
  local_a8 = &local_68;
  FUN_1804c7fe0(param_1,param_2 + 0x28,param_2 + 0x30,param_2 + 0xe4);
}



