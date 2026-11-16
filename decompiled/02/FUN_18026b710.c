// FUN_18026b710 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18026b710 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18026b710(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined1 extraout_var [56];
  undefined1 auVar3 [64];
  undefined1 extraout_var_00 [56];
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_68 [32];
  float local_48;
  float local_44;
  ulonglong local_40;
  
  local_40 = DAT_1808d5f00 ^ (ulonglong)auStack_68;
  fVar4 = 0.0;
  local_48 = 0.0;
  auVar3._0_8_ = FUN_180615710(param_1[1],&local_48);
  auVar3._8_56_ = extraout_var;
  fVar5 = 1.0;
  if ((float)auVar3._0_8_ < fVar4) {
    fVar6 = (float)auVar3._0_8_ + 1.0;
    auVar3 = ZEXT464((uint)fVar6);
    if (1.0 <= fVar6) {
      auVar3 = ZEXT864(0);
    }
    else {
      local_48 = local_48 + -1.0;
    }
  }
  fVar6 = 2.1474836e+09;
  iVar2 = 0;
  if ((local_48 < -2.1474836e+09) || (iVar1 = (int)local_48, 2.1474836e+09 <= local_48)) {
    iVar1 = 0;
  }
  if ((auVar3._0_4_ < fVar4) || (1.0 <= auVar3._0_4_)) {
    local_44 = fVar4;
    auVar3._0_8_ = FUN_180615710(auVar3._0_8_,&local_44);
    auVar3._8_56_ = extraout_var_00;
    if ((float)auVar3._0_8_ < fVar4) {
      fVar4 = (float)auVar3._0_8_ + fVar5;
      auVar3 = ZEXT464((uint)fVar4);
      if (fVar5 <= fVar4) {
        auVar3 = ZEXT864(0);
      }
      else {
        local_44 = local_44 + -1.0;
      }
    }
    if ((-2.1474836e+09 <= local_44) && (local_44 < fVar6)) {
      iVar2 = (int)local_44;
    }
    *param_1 = *param_1 + iVar2;
  }
  else {
    *param_1 = *param_1 + iVar1;
  }
  param_1[1] = auVar3._0_4_;
}



