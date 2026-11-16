// FUN_180631414 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180631414 */

undefined8 FUN_180631414(uint param_1,HANDLE param_2)

{
  int iVar1;
  undefined4 *puVar2;
  DWORD nStdHandle;
  
  if ((-1 < (int)param_1) && (param_1 < DAT_180bb2530)) {
    if (*(longlong *)
         ((&DAT_180bb2130)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x28 +
         (ulonglong)(param_1 & 0x3f) * 0x48) == -1) {
      iVar1 = FUN_1806351c8();
      if (iVar1 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_180631495;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,param_2);
      }
LAB_180631495:
      *(HANDLE *)
       ((&DAT_180bb2130)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x28 +
       (ulonglong)(param_1 & 0x3f) * 0x48) = param_2;
      return 0;
    }
  }
  puVar2 = (undefined4 *)FUN_18060fe00();
  *puVar2 = 9;
  puVar2 = (undefined4 *)FUN_18060fddc();
  *puVar2 = 0;
  return 0xffffffff;
}



