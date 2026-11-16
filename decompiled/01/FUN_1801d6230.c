// FUN_1801d6230 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801d6230 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801d6230(longlong param_1,longlong param_2)

{
  undefined1 auStack_1a8 [32];
  undefined1 local_188 [32];
  undefined1 local_168 [32];
  undefined1 local_148 [32];
  undefined1 local_128 [32];
  undefined1 local_108 [32];
  undefined1 local_e8 [32];
  undefined1 local_c8 [40];
  undefined1 local_a0 [32];
  undefined1 local_80 [32];
  undefined1 local_60 [32];
  undefined1 local_40 [40];
  ulonglong local_18;
  
  if (param_1 == param_2) {
    return;
  }
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_1a8;
  do {
    param_2 = param_2 + -0x168;
    if (param_1 == param_2) {
    }
    FUN_18017a9c0(local_188,param_1);
    FUN_180175280(param_1,param_2);
    FUN_180175280(param_2,local_188);
    FUN_18015c010(local_40);
    FUN_18015c010(local_60);
    FUN_18015c010(local_80);
    FUN_18015c010(local_a0);
    FUN_18015c010(local_c8);
    FUN_18015c010(local_e8);
    FUN_18015c010(local_108);
    FUN_18015c010(local_128);
    FUN_18015c010(local_148);
    FUN_18015c010(local_168);
    FUN_18015c010(local_188);
    param_1 = param_1 + 0x168;
  } while (param_1 != param_2);
}



