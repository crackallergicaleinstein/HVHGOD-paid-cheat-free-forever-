// FUN_180465230 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180465230 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180465230(longlong param_1,float *param_2,float *param_3,uint param_4,undefined4 param_5)

{
  char cVar1;
  uint uVar2;
  float *pfVar3;
  float fVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_238 [32];
  float **local_218;
  float **local_210;
  float local_1f8;
  float local_1f4;
  float local_1f0;
  float local_1ec;
  float local_1e8;
  float local_1e4;
  float local_1e0;
  float local_1dc;
  float *local_1d8;
  float *local_1d0;
  float *local_1c8;
  float *local_1c0;
  float local_1b8;
  float local_1b4;
  float local_1b0 [2];
  float local_1a8;
  float local_1a4 [3];
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  ulonglong local_d8 [22];
  
  local_d8[0] = DAT_1808d5f00 ^ (ulonglong)auStack_238;
  if (DAT_180cd6ef8 == 0) {
    local_194 = param_2[1];
    local_100 = *param_2;
    local_1b4 = *param_3 - local_100;
    local_1b8 = local_1b4 * 0.5 + local_100;
    fVar4 = param_3[1] - local_194;
    local_18c = fVar4 * 0.17 + local_194;
    local_1b0[0] = fVar4 * 0.5 + local_194;
    local_16c = fVar4 * 0.21 + local_194;
    local_170 = local_1b4 * 0.33 + local_100;
    local_160 = local_1b4 * 0.67 + local_100;
    local_14c = fVar4 * 0.36 + local_194;
    local_12c = fVar4 * 0.49 + local_194;
    local_150 = local_1b4 * 0.24 + local_100;
    local_140 = local_1b4 * 0.76 + local_100;
    local_110 = local_1b4 * 0.41 + local_100;
    local_100 = local_1b4 * 0.59 + local_100;
    local_10c = fVar4 * 0.72 + local_194;
    local_ec = fVar4 * 0.96 + local_194;
    local_194 = fVar4 * 0.09 + local_194;
    local_e0 = *param_2;
    local_130 = local_1b4 * 0.22 + local_e0;
    local_120 = local_1b4 * 0.78 + local_e0;
    local_f0 = local_1b4 * 0.39 + local_e0;
    local_e0 = local_1b4 * 0.61 + local_e0;
    pfVar5 = &local_198;
    local_198 = local_1b8;
    local_190 = local_1b8;
    local_188 = local_1b8;
    local_184 = local_18c;
    local_180 = local_1b8;
    local_17c = local_1b0[0];
    local_178 = local_1b8;
    local_174 = local_18c;
    local_168 = local_1b8;
    local_164 = local_18c;
    local_15c = local_16c;
    local_158 = local_170;
    local_154 = local_16c;
    local_148 = local_160;
    local_144 = local_16c;
    local_13c = local_14c;
    local_138 = local_150;
    local_134 = local_14c;
    local_128 = local_140;
    local_124 = local_14c;
    local_11c = local_12c;
    local_118 = local_1b8;
    local_114 = local_1b0[0];
    local_108 = local_1b8;
    local_104 = local_1b0[0];
    local_fc = local_10c;
    local_f8 = local_110;
    local_f4 = local_10c;
    local_e8 = local_100;
    local_e4 = local_10c;
    local_dc = local_ec;
    do {
      local_218 = (float **)CONCAT44(local_218._4_4_,param_5);
      FUN_1804dcf10(param_1,pfVar5,pfVar5 + 2,param_4);
      pfVar5 = pfVar5 + 4;
    } while (pfVar5 != (float *)local_d8);
  }
  else {
    fVar7 = 0.5;
    fVar4 = 0.0;
    fVar6 = 0.0;
    do {
      local_1d8 = local_1a4;
      local_1d0 = &local_1a8;
      local_1c8 = &local_1b8;
      local_1c0 = &local_1b4;
      local_1b8 = fVar6;
      local_1b4 = fVar6;
      local_1b0[0] = fVar4;
      local_1a8 = fVar6;
      local_1a4[0] = fVar6;
      if (DAT_180cd6ef8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1805fa874();
      }
      local_210 = &local_1d8;
      local_218 = &local_1d0;
      cVar1 = (**(code **)(*(longlong *)DAT_180cd6ef8 + 0x10))
                        (DAT_180cd6ef8,local_1b0,&local_1c0,&local_1c8);
      if (cVar1 != '\0') {
        local_1e0 = *param_2;
        local_1e4 = param_2[1];
        local_1e8 = (*param_3 - local_1e0) * local_1a8 + local_1e0;
        local_1e0 = (*param_3 - local_1e0) * local_1b4 + local_1e0;
        local_1dc = (param_3[1] - local_1e4) * local_1b8 + local_1e4;
        local_1e4 = (param_3[1] - local_1e4) * local_1a4[0] + local_1e4;
        if ((param_4 & 0xff000000) != 0) {
          uVar2 = *(uint *)(param_1 + 0x30) & 0xe0000;
          if ((uVar2 == 0) || (uVar2 != 0xe0000)) {
            pfVar5 = &local_1e8;
            pfVar3 = &local_1e0;
          }
          else {
            local_1f8 = local_1e8 + fVar7;
            local_1f4 = local_1e4 + fVar7;
            local_1f0 = local_1e0 + fVar7;
            local_1ec = local_1dc + fVar7;
            pfVar5 = &local_1f8;
            pfVar3 = &local_1f0;
          }
          local_210 = (float **)CONCAT44(local_210._4_4_,*(uint *)(param_1 + 0x30));
          local_218 = (float **)CONCAT44(local_218._4_4_,param_5);
          FUN_1804dc7e0(param_1,pfVar3,pfVar5,param_4);
        }
      }
      fVar4 = (float)((int)fVar4 + 1);
    } while ((int)fVar4 < 0x14);
  }
}



