// FUN_1803481f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803481f0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803481f0(void)

{
  undefined1 auStack_58 [32];
  undefined4 *local_38;
  undefined8 local_30;
  undefined4 local_28 [2];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_58;
  if ((DAT_180cd4080 & 1) == 0) {
    DAT_180cd4080 = DAT_180cd4080 | 1;
    local_28[0] = 0x58e37709;
    local_20 = 0;
    local_38 = local_28;
    local_30 = 1;
    FUN_18044c9c0(DAT_180c64058,&local_38);
    DAT_180cd4088 = local_20;
  }
}



