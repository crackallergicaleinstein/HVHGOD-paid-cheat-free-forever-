// FUN_180627354 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180627354 */

undefined8 FUN_180627354(uint param_1,undefined8 param_2)

{
  BOOL BVar1;
  DWORD DVar2;
  longlong lVar3;
  longlong lVar4;
  HANDLE hObject;
  undefined8 uVar5;
  
  lVar3 = FUN_1806316f8(param_1);
  if (lVar3 != -1) {
    if (((param_1 == 1) && ((*(byte *)(DAT_180bb2130 + 200) & 1) != 0)) ||
       ((param_1 == 2 && ((*(byte *)(DAT_180bb2130 + 0x80) & 1) != 0)))) {
      lVar3 = FUN_1806316f8();
      lVar4 = FUN_1806316f8(1);
      if (lVar4 == lVar3) goto LAB_180627376;
    }
    hObject = (HANDLE)FUN_1806316f8(param_1);
    BVar1 = CloseHandle(hObject);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
      goto LAB_1806273d4;
    }
  }
LAB_180627376:
  DVar2 = 0;
LAB_1806273d4:
  FUN_18063163c(param_1);
  *(undefined1 *)
   ((&DAT_180bb2130)[(longlong)(int)param_1 >> 6] + 0x38 + (ulonglong)(param_1 & 0x3f) * 0x48) = 0;
  if (DVar2 == 0) {
    uVar5 = 0;
  }
  else {
    FUN_18060fdb8(DVar2,param_2);
    uVar5 = 0xffffffff;
  }
  return uVar5;
}



