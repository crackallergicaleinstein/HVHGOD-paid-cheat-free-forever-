// FUN_1805dd2c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805dd2c0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805dd2c0(longlong param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  uint *puVar2;
  uint uVar3;
  ulonglong uVar4;
  uint *puVar5;
  uint *puVar6;
  longlong lVar7;
  undefined1 auStack_1b8 [32];
  undefined *local_198;
  uint local_190;
  longlong local_188;
  undefined8 local_180;
  undefined4 local_178;
  uint local_168;
  uint local_164;
  uint local_160;
  uint local_15c;
  uint local_158;
  uint local_154 [3];
  undefined1 local_148 [64];
  undefined1 local_108 [80];
  undefined1 local_b8 [112];
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_1b8;
  puVar2 = (uint *)(param_3 + param_2);
  if (8 < param_3) {
    param_2 = param_2 + 8;
    lVar7 = 0;
    local_190 = 0;
    local_198 = (undefined *)0x2818;
    uVar4 = FUN_1805e37e0(param_1 + 0x2818,param_2,(longlong)puVar2 - param_2,param_1);
    if (uVar4 < 0xffffffffffffff89) {
      param_2 = param_2 + uVar4;
      local_168 = 0x1f;
      local_198 = (undefined *)((longlong)puVar2 - param_2);
      uVar4 = thunk_FUN_1805dd700(local_148,&local_168,&local_15c,param_2);
      if (((uVar4 < 0xffffffffffffff89) && (local_168 < 0x20)) && (local_15c < 9)) {
        local_178 = 0;
        local_180 = 0x274;
        lVar1 = param_1 + 0x6828;
        local_190 = local_15c;
        local_198 = &DAT_180686c90;
        local_188 = lVar1;
        thunk_FUN_1805e4460(param_1 + 0x1008,local_148,local_168,&DAT_180686c10);
        param_2 = param_2 + uVar4;
        local_164 = 0x34;
        local_198 = (undefined *)((longlong)puVar2 - param_2);
        uVar4 = thunk_FUN_1805dd700(local_b8,&local_164,&local_158,param_2);
        if (((uVar4 < 0xffffffffffffff89) && (local_164 < 0x35)) && (local_158 < 10)) {
          local_178 = 0;
          local_180 = 0x274;
          local_190 = local_158;
          local_198 = &DAT_180686a98;
          local_188 = lVar1;
          thunk_FUN_1805e4460(param_1 + 0x1810,local_b8,local_164,&DAT_180686cb0);
          param_2 = param_2 + uVar4;
          local_160 = 0x23;
          local_198 = (undefined *)((longlong)puVar2 - param_2);
          uVar4 = thunk_FUN_1805dd700(local_108,&local_160,local_154,param_2);
          if (((uVar4 < 0xffffffffffffff89) && (local_160 < 0x24)) && (local_154[0] < 10)) {
            local_178 = 0;
            local_180 = 0x274;
            local_190 = local_154[0];
            local_198 = &DAT_180686a20;
            local_188 = lVar1;
            thunk_FUN_1805e4460(param_1,local_108,local_160,&DAT_180686b80);
            puVar6 = (uint *)(param_2 + uVar4);
            if (puVar6 + 3 <= puVar2) {
              puVar5 = (uint *)(param_1 + 0x681c);
              lVar1 = -0xc - (longlong)puVar6;
              do {
                uVar3 = *puVar6;
                puVar6 = puVar6 + 1;
                if (uVar3 == 0) {
                }
                if ((ulonglong)((longlong)puVar2 + lVar1) < (ulonglong)uVar3) {
                }
                *puVar5 = uVar3;
                lVar7 = lVar7 + 1;
                puVar5 = puVar5 + 1;
              } while (lVar7 < 3);
            }
          }
        }
      }
    }
  }
}



