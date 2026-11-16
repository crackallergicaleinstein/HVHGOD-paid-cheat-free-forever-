// FUN_1800aa290 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800aa290 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800aa290(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auStack_148 [32];
  char local_128 [256];
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_148;
  FUN_18063ab10(local_128,0,0x100);
  uVar4 = param_1[1];
  uVar3 = param_2[1];
  if (0x78 < uVar4) {
    uVar4 = 0x78;
  }
  if (0x78 < uVar3) {
    uVar3 = 0x78;
  }
  FUN_18063aed0(local_128,*param_1,uVar4);
  uVar1 = *param_2;
  local_128[uVar4] = '.';
  FUN_18063aed0(local_128 + uVar4 + 1,uVar1);
  uVar3 = uVar4 + 1 + uVar3;
  if (0xff < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f5e50();
  }
  local_128[uVar3] = '\0';
  uVar4 = 0xffffffffffffffff;
  do {
    uVar3 = uVar4 + 1;
    lVar2 = uVar4 + 1;
    uVar4 = uVar3;
  } while (local_128[lVar2] != '\0');
  uVar4 = 0;
  if (uVar3 != 0) {
    do {
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
}



