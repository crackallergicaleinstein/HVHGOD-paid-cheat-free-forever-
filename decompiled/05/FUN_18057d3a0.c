// FUN_18057d3a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18057d3a0 */

undefined8 FUN_18057d3a0(longlong *param_1,LPCSTR param_2)

{
  BOOL BVar1;
  HANDLE hFile;
  HANDLE hFileMappingObject;
  LPVOID pvVar2;
  code *pcVar3;
  uint uVar4;
  DWORD local_res8 [2];
  LARGE_INTEGER local_res18;
  
  if (param_1 == (longlong *)0x0) {
    return 0x28;
  }
  hFile = CreateFileA(param_2,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffffffffffff) {
    return 1;
  }
  BVar1 = GetFileSizeEx(hFile,&local_res18);
  if ((((BVar1 == 0) || (0x7fffffff < CONCAT44(local_res18.s.HighPart,local_res18.s.LowPart))) ||
      (CONCAT44(local_res18.s.HighPart,local_res18.s.LowPart) == 0)) ||
     (hFileMappingObject = CreateFileMappingA(hFile,(LPSECURITY_ATTRIBUTES)0x0,2,0,0,(LPCSTR)0x0),
     hFileMappingObject == (HANDLE)0x0)) {
LAB_18057d536:
    CloseHandle(hFile);
    *param_1 = 0;
    param_1[1] = 0;
    return 0x51;
  }
  *(DWORD *)(param_1 + 1) = local_res18.s.LowPart;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  pvVar2 = MapViewOfFile(hFileMappingObject,4,0,0,0);
  *param_1 = (longlong)pvVar2;
  CloseHandle(hFileMappingObject);
  if (*param_1 == 0) {
    pvVar2 = HeapAlloc(*(HANDLE *)param_1[6],0,(longlong)(int)param_1[1]);
    *param_1 = (longlong)pvVar2;
    if (pvVar2 == (LPVOID)0x0) goto LAB_18057d536;
    uVar4 = 0;
    do {
      BVar1 = ReadFile(hFile,(LPVOID)((ulonglong)uVar4 + *param_1),(int)param_1[1] - uVar4,
                       local_res8,(LPOVERLAPPED)0x0);
      if (BVar1 == 0) {
        HeapFree(*(HANDLE *)param_1[6],0,(LPVOID)*param_1);
        goto LAB_18057d536;
      }
      uVar4 = uVar4 + local_res8[0];
    } while (uVar4 != *(uint *)(param_1 + 1));
    pcVar3 = FUN_18057d580;
  }
  else {
    pcVar3 = FUN_18057d5b0;
  }
  param_1[5] = (longlong)pcVar3;
  CloseHandle(hFile);
  param_1[2] = *param_1;
  param_1[3] = (longlong)param_2;
  param_1[4] = 0;
  return 0;
}



