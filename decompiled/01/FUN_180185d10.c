// FUN_180185d10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180185d10 */

void FUN_180185d10(undefined8 *param_1)

{
  HANDLE hObject;
  
  hObject = (HANDLE)*param_1;
  if ((hObject != (HANDLE)0x0) && (hObject != (HANDLE)0xffffffffffffffff)) {
    CloseHandle(hObject);
    *param_1 = 0xffffffffffffffff;
  }
  return;
}



