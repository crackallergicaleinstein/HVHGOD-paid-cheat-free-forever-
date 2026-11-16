// FUN_18018de50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18018de50 */

void FUN_18018de50(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 local_28 [32];
  
  if ((HANDLE)*param_1 != (HANDLE)0xffffffffffffffff) {
    CloseHandle((HANDLE)*param_1);
  }
  puVar1 = (undefined8 *)FUN_180186ef0(local_28,param_1 + 1);
  if (7 < (ulonglong)puVar1[3]) {
    puVar1 = (undefined8 *)*puVar1;
  }
  FUN_1805fb9a8(puVar1);
  FUN_18015b930(local_28);
  FUN_18015b930(param_1 + 1);
  return;
}



