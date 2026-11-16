// FUN_180493f00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180493f00 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180493f00(byte *param_1)

{
  byte *pbVar1;
  byte bVar2;
  undefined1 (*pauVar3) [16];
  byte *pbVar4;
  undefined1 auStack_48 [32];
  byte *local_28;
  byte *local_20;
  ulonglong local_18;
  
  pauVar3 = DAT_180c62d20;
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_48;
  pbVar4 = param_1;
  local_28 = param_1;
  if (param_1 != (byte *)0xffffffffffffffff) {
    while( true ) {
      bVar2 = *local_28;
      pbVar4 = (byte *)(ulonglong)bVar2;
      if (bVar2 == 0) break;
      pbVar1 = local_28 + 1;
      if (((bVar2 == 0x23) && (*pbVar1 == 0x23)) ||
         (local_28 = pbVar1, pbVar1 == (byte *)0xffffffffffffffff)) break;
    }
  }
  local_20 = param_1;
  if (DAT_180c62d20 == DAT_180c62d28) {
    FUN_180494440(pbVar4,DAT_180c62d20,&local_20,&local_28);
  }
  else {
    *DAT_180c62d20 = (undefined1  [16])0x0;
    *(undefined8 *)pauVar3[1] = 0;
    *(undefined8 *)(pauVar3[1] + 8) = 0;
    if (param_1 == local_28) {
      *(undefined8 *)(pauVar3[1] + 8) = 0xf;
      (*pauVar3)[0] = 0;
      DAT_180c62d20 = DAT_180c62d20 + 2;
    }
    else {
      FUN_18015ba30(pauVar3,param_1,(longlong)local_28 - (longlong)param_1);
      DAT_180c62d20 = DAT_180c62d20 + 2;
    }
  }
  DAT_1808e4e38 = 0xffffffff;
}



