// FUN_18020f8e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18020f8e0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18020f8e0(longlong param_1,longlong param_2,longlong param_3,undefined1 param_4,int param_5
                  )

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_178 [32];
  int local_158;
  int local_150;
  int local_148;
  undefined1 local_138 [16];
  undefined1 local_128 [8];
  undefined1 local_120 [32];
  undefined1 local_100 [32];
  undefined1 local_e0 [32];
  undefined1 local_c0 [32];
  undefined1 local_a0 [32];
  undefined1 local_80 [40];
  ulonglong local_58;
  
  local_58 = DAT_1808d5f00 ^ (ulonglong)auStack_178;
  lVar6 = (longlong)param_5;
  lVar3 = param_2 - param_1;
  while (0x19c7 < lVar3) {
    if (param_3 < 1) {
      lVar3 = (param_2 - param_1) +
              SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(param_2 - param_1),8);
      lVar6 = (lVar3 >> 7) - (lVar3 >> 0x3f);
      lVar3 = lVar6 >> 1;
      if (0 < lVar3) {
        lVar5 = lVar3 * 200 + param_1;
        do {
          lVar5 = lVar5 + -200;
          lVar3 = lVar3 + -1;
          FUN_180212250(local_128,lVar5);
          local_148 = param_5;
          local_150 = param_5;
          local_158 = CONCAT31(local_158._1_3_,param_4);
          FUN_180212390(param_1,lVar3,lVar6,local_128);
          FUN_18015c010(local_80);
          FUN_18015c010(local_a0);
          FUN_18015c010(local_c0);
          FUN_18015c010(local_e0);
          FUN_18015c010(local_100);
          FUN_18015c010(local_120);
        } while (0 < lVar3);
      }
      if (lVar6 < 2) {
      }
      param_2 = param_2 + -200;
      do {
        if (399 < (200 - param_1) + param_2) {
          FUN_180212250(local_128,param_2);
          FUN_180206c30(param_2,param_1);
          local_148 = param_5;
          local_150 = param_5;
          local_158 = CONCAT31(local_158._1_3_,param_4);
          lVar3 = SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(param_2 - param_1),8) +
                  (param_2 - param_1);
          FUN_180212390(param_1,0,(lVar3 >> 7) - (lVar3 >> 0x3f),local_128);
          FUN_18015c010(local_80);
          FUN_18015c010(local_a0);
          FUN_18015c010(local_c0);
          FUN_18015c010(local_e0);
          FUN_18015c010(local_100);
          FUN_18015c010(local_120);
        }
        param_2 = param_2 + -200;
      } while (399 < (200 - param_1) + param_2);
    }
    local_158 = param_5;
    local_138 = (undefined1  [16])0x0;
    FUN_180210b50(local_138,param_1,param_2,param_4);
    uVar1 = local_138._8_8_;
    lVar5 = local_138._0_8_;
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    local_158 = param_5;
    lVar3 = (param_2 - local_138._8_8_) +
            SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(param_2 - local_138._8_8_),8);
    lVar4 = SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(local_138._0_8_ - param_1),8) +
            (local_138._0_8_ - param_1);
    if ((lVar4 >> 7) - (lVar4 >> 0x3f) < (lVar3 >> 7) - (lVar3 >> 0x3f)) {
      FUN_18020f8e0(param_1,local_138._0_8_,param_3,param_4);
      param_1 = uVar1;
      lVar5 = param_2;
    }
    else {
      FUN_18020f8e0(local_138._8_8_,param_2,param_3,param_4);
    }
    param_2 = lVar5;
    lVar3 = lVar5 - param_1;
  }
  if ((param_1 != param_2) && (lVar3 = param_1 + 200, lVar3 != param_2)) {
    do {
      FUN_180212250(local_128,lVar3);
      lVar5 = lVar3 + -200;
      cVar2 = FUN_180114040(local_128 + lVar6,lVar6 + -200 + lVar3);
      lVar4 = lVar3;
      while (cVar2 < '\0') {
        FUN_180206c30(lVar4,lVar5);
        lVar4 = lVar4 + -200;
        if (lVar4 == param_1) break;
        lVar5 = lVar5 + -200;
        cVar2 = FUN_180114040(local_128 + lVar6,lVar5 + lVar6);
      }
      FUN_180206c30(lVar4,local_128);
      FUN_18015c010(local_80);
      FUN_18015c010(local_a0);
      FUN_18015c010(local_c0);
      FUN_18015c010(local_e0);
      FUN_18015c010(local_100);
      FUN_18015c010(local_120);
      lVar3 = lVar3 + 200;
    } while (lVar3 != param_2);
  }
}



