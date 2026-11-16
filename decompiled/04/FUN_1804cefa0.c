// FUN_1804cefa0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804cefa0 */

undefined8 FUN_1804cefa0(longlong param_1)

{
  BOOL BVar1;
  int cbMultiByte;
  int iVar2;
  int iVar3;
  HANDLE hMem;
  LPCWSTR lpWideCharStr;
  
  FUN_1804aeee0(param_1 + 0x26b8);
  BVar1 = OpenClipboard((HWND)0x0);
  if (BVar1 == 0) {
    return 0;
  }
  hMem = GetClipboardData(0xd);
  if (hMem == (HANDLE)0x0) {
    CloseClipboard();
    return 0;
  }
  lpWideCharStr = GlobalLock(hMem);
  if (lpWideCharStr != (LPCWSTR)0x0) {
    cbMultiByte = WideCharToMultiByte(0xfde9,0,lpWideCharStr,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0
                                     );
    iVar2 = *(int *)(param_1 + 0x26bc);
    if (iVar2 < cbMultiByte) {
      if (iVar2 == 0) {
        iVar2 = 8;
      }
      else {
        iVar2 = iVar2 / 2 + iVar2;
      }
      iVar3 = cbMultiByte;
      if (cbMultiByte < iVar2) {
        iVar3 = iVar2;
      }
      FUN_1804d0ea0(param_1 + 0x26b8,iVar3);
    }
    *(int *)(param_1 + 0x26b8) = cbMultiByte;
    WideCharToMultiByte(0xfde9,0,lpWideCharStr,-1,*(LPSTR *)(param_1 + 0x26c0),cbMultiByte,
                        (LPCSTR)0x0,(LPBOOL)0x0);
  }
  GlobalUnlock(hMem);
  CloseClipboard();
  return *(undefined8 *)(param_1 + 0x26c0);
}



