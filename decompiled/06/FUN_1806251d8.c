// FUN_1806251d8 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806251d8 */

undefined8
FUN_1806251d8(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  BOOL BVar1;
  DWORD DVar2;
  HANDLE hFile;
  DWORD *pDVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  
  __acrt_lowio_lock_fh(*param_2);
  if ((*(byte *)((&DAT_180bb2130)[(longlong)(int)*(uint *)*param_3 >> 6] + 0x38 +
                (ulonglong)(*(uint *)*param_3 & 0x3f) * 0x48) & 1) != 0) {
    hFile = (HANDLE)FUN_1806316f8();
    BVar1 = FlushFileBuffers(hFile);
    uVar5 = 0;
    if (BVar1 != 0) goto LAB_18062524f;
    DVar2 = GetLastError();
    pDVar3 = (DWORD *)FUN_18060fddc();
    *pDVar3 = DVar2;
  }
  puVar4 = (undefined4 *)FUN_18060fe00();
  *puVar4 = 9;
  uVar5 = 0xffffffff;
LAB_18062524f:
  __acrt_lowio_unlock_fh(*param_4);
  return uVar5;
}



