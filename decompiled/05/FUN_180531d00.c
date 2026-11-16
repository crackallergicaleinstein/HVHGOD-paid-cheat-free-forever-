// FUN_180531d00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180531d00 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180531d00(undefined8 param_1,undefined8 param_2,uint *param_3,undefined8 param_4,
                  undefined1 param_5)

{
  uint uVar1;
  char cVar2;
  float fVar3;
  undefined1 auStack_68 [40];
  undefined1 local_40;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  ulonglong local_20;
  
  local_20 = DAT_1808d5f00 ^ (ulonglong)auStack_68;
  fVar3 = 255.0;
  local_40 = 1;
  uVar1 = *param_3;
  local_30 = (float)(uVar1 & 0xff) / 255.0;
  local_2c = (float)(uVar1 >> 8 & 0xff) / 255.0;
  local_28 = (float)(uVar1 >> 0x10 & 0xff) / 255.0;
  local_24 = (float)(uVar1 >> 0x18) / 255.0;
  cVar2 = FUN_180489fc0(param_2,&local_30,param_5);
  if (cVar2 != '\0') {
    *param_3 = CONCAT13((char)(int)(fVar3 * local_24),
                        CONCAT12((char)(int)(fVar3 * local_28),
                                 CONCAT11((char)(int)(fVar3 * local_2c),
                                          (char)(int)(fVar3 * local_30))));
  }
}



