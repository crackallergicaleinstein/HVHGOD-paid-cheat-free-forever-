// FUN_180329b50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180329b50 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180329b50(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  undefined1 auStack_298 [32];
  longlong local_278;
  uint *local_270;
  longlong local_268;
  longlong local_260;
  longlong local_258;
  double *local_250;
  double *local_248;
  longlong local_240;
  longlong local_238;
  int *local_230;
  int *local_228;
  double *local_220;
  char *local_218;
  longlong local_210;
  int local_208;
  int local_204;
  uint local_200 [2];
  char local_1f8 [224];
  double local_118;
  double local_110 [30];
  ulonglong local_20;
  
  local_20 = DAT_1808d5f00 ^ (ulonglong)auStack_298;
  lVar1 = *param_1;
  local_110[0x1d] = (double)param_2;
  if (-1 < *(int *)(lVar1 + 0xac)) {
    fVar5 = *(float *)(lVar1 + 0xd0) - *(float *)(lVar1 + 0xc4);
    fVar2 = *(float *)(lVar1 + 0xd4) - *(float *)(lVar1 + 200);
    local_208 = DAT_180bda1b4 - *(int *)(lVar1 + 0xb4);
    local_118 = (double)DAT_180bda1bc;
    local_204 = DAT_180bda1b0 - *(int *)(lVar1 + 0xb0);
    fVar5 = fVar2 * fVar2 + fVar5 * fVar5;
    if (fVar5 < 0.0) {
      fVar5 = (float)FUN_18061e150();
    }
    else {
      fVar5 = SQRT(fVar5);
    }
    local_200[0] = (uint)(*(char *)(lVar1 + 0x6c) == '\0');
    local_110[0] = (double)fVar5;
    local_110[1] = -2.4276482419246583e+131;
    local_110[2] = -5.22308943443478e-153;
    local_110[3] = -3.953739307045667e-219;
    local_110[4] = 9.40312645103265e-259;
    local_110[5] = -1.385566929773549e-120;
    local_110[6] = 1.0511117445176366e-100;
    local_110[7] = -167.4244464561419;
    local_110[8] = -3.556985518663326e+302;
    local_110[9] = -1.8874895726522932e-292;
    local_110[10] = -8.352252075014592e+271;
    local_110[0xb] = 1.9650860493281535e+109;
    local_110[0xc] = 8.991407610715072e+192;
    local_110[0xd] = -3.397329245786183e+202;
    local_110[0xe] = 1.256394364812279e-131;
    local_110[0xf] = -3.274053720118996e+157;
    local_110[0x10] = 9.219521739633918e-27;
    local_110[0x11] = -3.785023793442884e-206;
    local_110[0x12] = -8.922102202732586e+28;
    local_110[0x13] = -1.1134988385222154e-184;
    local_110[0x14] = 3.0479808347199787e-230;
    local_110[0x15] = -2.3351055037742689e-181;
    local_110[0x16] = -2.2008689844990567e-222;
    local_110[0x17] = 2.3235235783738836e+75;
    local_110[0x18] = -1.6598802858345226e-72;
    local_110[0x19] = 2.8065396463777433e-50;
    local_110[0x1a] = 1.1618937714270376e+132;
    local_110[0x1b] = -1.1320105378298542e-119;
    builtin_strncpy(local_1f8,
                    "[pixelsurf-attempt] #{} jump_cmd={} plan(duck_from={} duck_to={} wish={}) predicted_catch={} actual_catch={} ride={} cmds / {:.1f} units end={} steers={} set_searches={} proofs={} proof_steps={} cmd_cost={:.2"
                    ,0xd0);
    local_110[0x1c] = -4.491507929222064e-237;
    builtin_strncpy(local_1f8 + 0xd0,"f}ms\n",6);
    local_1f8[0xd6] = '\0';
    local_1f8[0xd7] = '\0';
    local_1f8[0xd8] = '\0';
    local_1f8[0xd9] = '\0';
    local_1f8[0xda] = '\0';
    local_1f8[0xdb] = '\0';
    local_1f8[0xdc] = '\0';
    local_1f8[0xdd] = '\0';
    local_1f8[0xde] = '\0';
    local_1f8[0xdf] = '\0';
    lVar4 = -1;
    do {
      local_210 = lVar4 + 1;
      lVar3 = lVar4 + 1;
      lVar4 = local_210;
    } while (local_1f8[lVar3] != '\0');
    local_220 = &local_118;
    local_218 = local_1f8;
    local_228 = &local_208;
    local_238 = lVar1 + 0xbc;
    local_230 = &local_204;
    local_240 = lVar1 + 0xb8;
    local_258 = lVar1 + 0x24;
    local_248 = local_110 + 0x1d;
    local_260 = lVar1 + 0xc0;
    local_250 = local_110;
    local_268 = lVar1 + 0x48;
    local_270 = local_200;
    local_278 = lVar1 + 100;
    FUN_180333070(&local_218,local_258,lVar1 + 0xac,lVar1 + 0x68);
    *(undefined4 *)(*param_1 + 0xac) = 0xffffffff;
  }
}



