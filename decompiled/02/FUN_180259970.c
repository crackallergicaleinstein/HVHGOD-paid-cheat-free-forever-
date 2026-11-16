// FUN_180259970 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180259970 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180259970(longlong *param_1,undefined8 *param_2,float *param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  float *pfVar2;
  char cVar3;
  undefined1 *puVar4;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  undefined4 local_68;
  undefined8 *local_60;
  float local_58;
  float fStack_54;
  float local_50;
  undefined1 local_48 [16];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_1808d5f00 ^ (ulonglong)auStack_a8;
  local_68 = 0;
  local_60 = param_2;
  cVar3 = FUN_1802531c0(*param_1);
  if (cVar3 == '\0') {
    *(undefined1 *)(*param_1 + 0x5d) = 1;
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  else {
    pfVar2 = (float *)param_1[1];
    local_50 = pfVar2[2] + param_3[2];
    fStack_54 = pfVar2[1] + param_3[1];
    local_58 = *param_3 + *pfVar2;
    local_48 = (undefined1  [16])0x0;
    local_38 = 0;
    local_70 = *param_1;
    local_78 = param_1[5];
    local_80 = param_1[4];
    local_88 = param_1[3];
    FUN_18025a6d0(param_1[2],local_48,&local_58,param_4);
    if (local_48._0_8_ != local_48._8_8_) {
      puVar4 = (undefined1 *)(local_48._0_8_ + 0x7c);
      do {
        *(ulonglong *)(puVar4 + -0x1c) = CONCAT44(fStack_54,local_58);
        *(float *)(puVar4 + -0x14) = local_50;
        *puVar4 = 1;
        puVar1 = puVar4 + 0x1c;
        puVar4 = puVar4 + 0x98;
      } while (puVar1 != (undefined1 *)local_48._8_8_);
    }
    *param_2 = local_48._0_8_;
    param_2[1] = local_48._8_8_;
    param_2[2] = local_38;
  }
}



