// FUN_1803d44c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803d44c0 */

undefined8 FUN_1803d44c0(undefined8 param_1,undefined8 param_2,byte param_3)

{
  undefined1 *puVar1;
  undefined1 local_40 [16];
  undefined8 local_30;
  undefined1 local_28 [32];
  
  AcquireSRWLockShared((PSRWLOCK)&DAT_180b0e0f8);
  if (4 < param_3) {
    local_40 = (undefined1  [16])0x0;
    local_30 = 0;
    puVar1 = local_40;
  }
  else {
    puVar1 = (undefined1 *)FUN_1803d4910(local_28,&DAT_180b0e068 + (ulonglong)param_3 * 3);
  }
  FUN_1803d4910(param_2,puVar1);
  if (4 < param_3) {
    FUN_1801abba0(local_40);
  }
  else {
    FUN_1801abba0(local_28);
  }
  ReleaseSRWLockShared((PSRWLOCK)&DAT_180b0e0f8);
  return param_2;
}



