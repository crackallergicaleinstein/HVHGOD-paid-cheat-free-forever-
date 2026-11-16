// FUN_18063163c - decompiled reference (Ghidra). Not original source, does not compile.

/* 18063163c */

undefined8 FUN_18063163c(uint param_1)

{
  int iVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  DWORD nStdHandle;
  
  if ((-1 < (int)param_1) && (param_1 < DAT_180bb2530)) {
    uVar2 = (ulonglong)(param_1 & 0x3f);
    if (((*(byte *)((&DAT_180bb2130)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x38 + uVar2 * 0x48)
         & 1) != 0) &&
       (*(longlong *)
         ((&DAT_180bb2130)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x28 + uVar2 * 0x48) != -1)) {
      iVar1 = FUN_1806351c8();
      if (iVar1 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_1806316bc;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_1806316bc:
      *(undefined8 *)
       ((&DAT_180bb2130)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x28 + uVar2 * 0x48) =
           0xffffffffffffffff;
      return 0;
    }
  }
  puVar3 = (undefined4 *)FUN_18060fe00();
  *puVar3 = 9;
  puVar3 = (undefined4 *)FUN_18060fddc();
  *puVar3 = 0;
  return 0xffffffff;
}



