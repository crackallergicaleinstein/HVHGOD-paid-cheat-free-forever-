// FUN_1801c9120 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801c9120 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801c9120(LPCSTR param_1,undefined8 *param_2)

{
  size_t *psVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  DWORD DVar4;
  BOOL BVar5;
  NTSTATUS NVar6;
  HMODULE hModule;
  HANDLE hFile;
  ulonglong uVar7;
  undefined1 *_Buf1;
  byte *pbVar8;
  bool bVar9;
  char acStack_20098 [24];
  BCRYPT_HASH_HANDLE pvStack_20080;
  BCRYPT_ALG_HANDLE pvStack_20078;
  DWORD aDStack_20070 [2];
  undefined1 auStack_20068 [16];
  size_t sStack_20058;
  ulonglong uStack_20050;
  byte abStack_20048 [32];
  int aiStack_20028 [15];
  int iStack_1ffec;
  int aiStack_1ffd8 [16364];
  WCHAR aWStack_10028 [32776];
  
  if (param_2[2] != 0x40) {
  }
  if (0xf < *(ulonglong *)(param_1 + 0x18)) {
    param_1 = *(LPCSTR *)param_1;
  }
  hModule = GetModuleHandleA(param_1);
  if (hModule == (HMODULE)0x0) {
  }
  FUN_18063ab10(aWStack_10028,0,0x10000);
  DVar4 = GetModuleFileNameW(hModule,aWStack_10028,0x8000);
  if ((DVar4 & 0xffff7fff) == 0) {
  }
  hFile = CreateFileW(aWStack_10028,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffffffffffff) {
  }
  FUN_18063ab10(aiStack_20028,0,0x10000);
  aDStack_20070[0] = 0;
  BVar5 = ReadFile(hFile,aiStack_20028,0x10000,aDStack_20070,(LPOVERLAPPED)0x0);
  if (((((BVar5 == 0) || (aDStack_20070[0] < 0x1000)) || ((short)aiStack_20028[0] != 0x5a4d)) ||
      ((uVar7 = (ulonglong)iStack_1ffec, iStack_1ffec < 0x40 ||
       ((ulonglong)aDStack_20070[0] - 0x108 < uVar7)))) ||
     ((*(int *)((longlong)aiStack_20028 + uVar7) != 0x4550 ||
      ((*(int *)((longlong)aiStack_20028 + uVar7 + 8) !=
        *(int *)((longlong)&hModule[2].unused + (longlong)hModule[0xf].unused) ||
       (*(int *)((longlong)aiStack_1ffd8 + uVar7) !=
        *(int *)((longlong)&hModule[0x14].unused + (longlong)hModule[0xf].unused))))))) {
    pvStack_20078 = (BCRYPT_ALG_HANDLE)0x0;
    pvStack_20080 = (BCRYPT_HASH_HANDLE)0x0;
  }
  else {
    pvStack_20078 = (BCRYPT_ALG_HANDLE)0x0;
    pvStack_20080 = (BCRYPT_HASH_HANDLE)0x0;
    NVar6 = BCryptOpenAlgorithmProvider(&pvStack_20078,L"SHA256",(LPCWSTR)0x0,0);
    if ((-1 < NVar6) &&
       (NVar6 = BCryptCreateHash(pvStack_20078,&pvStack_20080,(PUCHAR)0x0,0,(PUCHAR)0x0,0,0),
       -1 < NVar6)) {
      bVar9 = true;
      do {
        if (aDStack_20070[0] == 0) break;
        NVar6 = BCryptHashData(pvStack_20080,(PUCHAR)aiStack_20028,aDStack_20070[0],0);
        bVar9 = false;
        if (-1 < NVar6) {
          BVar5 = ReadFile(hFile,aiStack_20028,0x10000,aDStack_20070,(LPOVERLAPPED)0x0);
          bVar9 = BVar5 != 0;
        }
      } while (bVar9);
      goto LAB_1801c9348;
    }
  }
  bVar9 = false;
LAB_1801c9348:
  abStack_20048[0] = 0;
  abStack_20048[1] = 0;
  abStack_20048[2] = 0;
  abStack_20048[3] = 0;
  abStack_20048[4] = 0;
  abStack_20048[5] = 0;
  abStack_20048[6] = 0;
  abStack_20048[7] = 0;
  abStack_20048[8] = 0;
  abStack_20048[9] = 0;
  abStack_20048[10] = 0;
  abStack_20048[0xb] = 0;
  abStack_20048[0xc] = 0;
  abStack_20048[0xd] = 0;
  abStack_20048[0xe] = 0;
  abStack_20048[0xf] = 0;
  abStack_20048[0x10] = 0;
  abStack_20048[0x11] = 0;
  abStack_20048[0x12] = 0;
  abStack_20048[0x13] = 0;
  abStack_20048[0x14] = 0;
  abStack_20048[0x15] = 0;
  abStack_20048[0x16] = 0;
  abStack_20048[0x17] = 0;
  abStack_20048[0x18] = 0;
  abStack_20048[0x19] = 0;
  abStack_20048[0x1a] = 0;
  abStack_20048[0x1b] = 0;
  abStack_20048[0x1c] = 0;
  abStack_20048[0x1d] = 0;
  abStack_20048[0x1e] = 0;
  abStack_20048[0x1f] = 0;
  if ((bVar9) && (NVar6 = BCryptFinishHash(pvStack_20080,abStack_20048,0x20,0), -1 < NVar6)) {
    bVar9 = true;
  }
  else {
    bVar9 = false;
  }
  if (pvStack_20080 != (BCRYPT_HASH_HANDLE)0x0) {
    BCryptDestroyHash(pvStack_20080);
  }
  if (pvStack_20078 != (BCRYPT_ALG_HANDLE)0x0) {
    BCryptCloseAlgorithmProvider(pvStack_20078,0);
  }
  CloseHandle(hFile);
  builtin_strncpy(acStack_20098,"0123456789abcdef",0x11);
  sStack_20058 = 0;
  uStack_20050 = 0xf;
  auStack_20068._1_15_ = SUB1615((undefined1  [16])0x0,1);
  auVar3[0xf] = 0;
  auVar3._0_15_ = auStack_20068._1_15_;
  auStack_20068 = auVar3 << 8;
  pbVar8 = abStack_20048;
  do {
    bVar2 = *pbVar8;
    FUN_18015af80(auStack_20068,acStack_20098[bVar2 >> 4]);
    FUN_18015af80(auStack_20068,acStack_20098[bVar2 & 0xf]);
    pbVar8 = pbVar8 + 1;
  } while (pbVar8 != (byte *)aiStack_20028);
  if (bVar9) {
    psVar1 = param_2 + 2;
    if (0xf < (ulonglong)param_2[3]) {
      param_2 = (undefined8 *)*param_2;
    }
    _Buf1 = auStack_20068;
    if (0xf < uStack_20050) {
      _Buf1 = (undefined1 *)auStack_20068._0_8_;
    }
    if ((sStack_20058 == *psVar1) && (sStack_20058 != 0)) {
      memcmp(_Buf1,param_2,sStack_20058);
    }
  }
  FUN_18015c010(auStack_20068);
}



