// FUN_18026b840 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18026b840 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18026b840(undefined8 param_1)

{
  float fVar1;
  undefined1 auStack_58 [32];
  int local_38;
  float fStack_34;
  float local_30 [2];
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_58;
  fVar1 = 0.0;
  local_30[0] = 0.0;
  fStack_34 = (float)FUN_180615710(param_1,local_30);
  if (fStack_34 < fVar1) {
    fStack_34 = fStack_34 + 1.0;
    if (fStack_34 < 1.0) {
      local_30[0] = local_30[0] + -1.0;
    }
    else {
      fStack_34 = 0.0;
    }
  }
  if ((local_30[0] < -2.1474836e+09) || (2.1474836e+09 <= local_30[0])) {
    local_38 = 0;
  }
  else {
    local_38 = (int)local_30[0];
  }
  if ((fStack_34 < fVar1) || (1.0 <= fStack_34)) {
    FUN_18026b710(&local_38);
  }
}



