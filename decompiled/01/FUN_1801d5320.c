// FUN_1801d5320 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801d5320 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801d5320(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,longlong param_6,longlong param_7,undefined1 param_8,
                  undefined1 param_9)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_228 [32];
  longlong local_208;
  longlong local_200;
  longlong local_1f8;
  undefined1 local_1f0;
  undefined1 local_1e8;
  longlong local_1d8;
  longlong local_1d0;
  undefined1 local_1c8 [32];
  undefined1 local_1a8 [32];
  undefined1 local_188 [32];
  undefined1 local_168 [32];
  undefined1 local_148 [32];
  undefined1 local_128 [32];
  undefined1 local_108 [40];
  undefined1 local_e0 [32];
  undefined1 local_c0 [32];
  undefined1 local_a0 [32];
  undefined1 local_80 [40];
  ulonglong local_58;
  
  if (param_1 == param_2) {
    return;
  }
  local_58 = DAT_1808d5f00 ^ (ulonglong)auStack_228;
  if (param_2 == param_3) {
  }
  cVar1 = FUN_1801d5040(param_1,param_2,param_1);
  while (cVar1 == '\0') {
    param_4 = param_4 + -1;
    param_1 = param_1 + 0x168;
    if (param_1 == param_2) {
    }
    cVar1 = FUN_1801d5040();
  }
LAB_1801d53b0:
  lVar6 = param_3;
  local_1d8 = param_5;
  param_3 = lVar6 + -0x168;
  if (param_2 != param_3) goto code_r0x0001801d53d2;
  FUN_18017a9c0(local_1c8,param_2);
  do {
    param_2 = param_2 + -0x168;
    lVar6 = lVar6 + -0x168;
    FUN_180175280(lVar6,param_2);
  } while (param_2 != param_1);
  goto LAB_1801d562e;
code_r0x0001801d53d2:
  param_5 = param_5 + -1;
  cVar1 = FUN_1801d5040(param_2 + -0x168,param_3,param_2 + -0x168);
  if (cVar1 != '\0') goto code_r0x0001801d53f2;
  goto LAB_1801d53b0;
code_r0x0001801d53f2:
  if (param_4 == 1) {
    FUN_18017a9c0(local_1c8,param_1);
    for (; param_2 != lVar6; param_2 = param_2 + 0x168) {
      FUN_180175280(param_1,param_2);
      param_1 = param_1 + 0x168;
    }
LAB_1801d562e:
    FUN_180175280(param_1,local_1c8);
    FUN_18015c010(local_80);
    FUN_18015c010(local_a0);
    FUN_18015c010(local_c0);
    FUN_18015c010(local_e0);
    FUN_18015c010(local_108);
    FUN_18015c010(local_128);
    FUN_18015c010(local_148);
    FUN_18015c010(local_168);
    FUN_18015c010(local_188);
    FUN_18015c010(local_1a8);
    FUN_18015c010(local_1c8);
  }
  else {
    if ((param_4 <= local_1d8) && (param_4 <= param_7)) {
      lVar4 = param_7 * 0x168 + param_6;
      lVar3 = param_1 - param_6;
      lVar5 = param_6;
      do {
        if (lVar5 == lVar4) break;
        FUN_18017a9c0(lVar5,lVar3 + lVar5);
        lVar5 = lVar5 + 0x168;
      } while (lVar3 + lVar5 != param_2);
      local_1d8 = param_6;
      local_1d0 = lVar5;
      FUN_180175280(param_1,param_2);
      param_2 = param_2 + 0x168;
      lVar3 = param_1 + 0x168;
      lVar4 = param_6;
      do {
        lVar2 = lVar3 + 0x168;
        cVar1 = FUN_1801d5040();
        if (cVar1 == '\0') {
          FUN_180175280(lVar3,lVar4);
          lVar4 = lVar4 + 0x168;
          if (lVar4 == lVar5 + -0x168) {
            for (; param_2 != lVar6; param_2 = param_2 + 0x168) {
              FUN_180175280(lVar2,param_2);
              lVar2 = lVar2 + 0x168;
            }
            FUN_180175280(lVar2,lVar4);
            for (; param_6 != lVar5; param_6 = param_6 + 0x168) {
              FUN_180152210(param_6);
            }
          }
        }
        else {
          FUN_180175280(lVar3,param_2);
          param_2 = param_2 + 0x168;
          if (param_2 == lVar6) {
            if (lVar4 != lVar5) {
              lVar2 = lVar2 - lVar4;
              do {
                FUN_180175280(lVar2 + lVar4,lVar4);
                lVar4 = lVar4 + 0x168;
              } while (lVar4 != lVar5);
            }
            for (; param_6 != lVar5; param_6 = param_6 + 0x168) {
              FUN_180152210(param_6);
            }
          }
        }
        lVar3 = lVar2;
      } while( true );
    }
    if (param_7 < local_1d8) {
      local_1e8 = param_9;
      local_1f0 = param_8;
      local_1f8 = param_7;
      local_200 = param_6;
      local_208 = local_1d8;
      FUN_1801d5cd0(param_1,param_2,lVar6,param_4);
    }
    else {
      local_200 = CONCAT71(local_200._1_7_,param_8);
      local_208 = param_7;
      FUN_1801d5b70(param_1,param_2,lVar6,param_6);
    }
  }
}



