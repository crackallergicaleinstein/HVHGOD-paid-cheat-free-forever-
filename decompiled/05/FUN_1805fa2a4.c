// FUN_1805fa2a4 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805fa2a4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1805fa2a4(uint param_1)

{
  HMODULE hModule;
  FARPROC pFVar1;
  FARPROC pFVar2;
  FARPROC pFVar3;
  uint uVar4;
  bool bVar5;
  
  while( true ) {
    LOCK();
    bVar5 = param_1 == DAT_180bb1398;
    if (bVar5) {
      DAT_180bb1398 = 1;
    }
    else {
      param_1 = DAT_180bb1398;
    }
    UNLOCK();
    if (bVar5) break;
    if (1 < param_1) {
      return param_1;
    }
  }
  uVar4 = 2;
  hModule = GetModuleHandleW(L"api-ms-win-core-synch-l1-2-0.dll");
  if (hModule != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(hModule,"WaitOnAddress");
    pFVar2 = GetProcAddress(hModule,"WakeByAddressSingle");
    pFVar3 = GetProcAddress(hModule,"WakeByAddressAll");
    if (((pFVar1 != (FARPROC)0x0) && (pFVar2 != (FARPROC)0x0)) && (pFVar3 != (FARPROC)0x0)) {
      uVar4 = 3;
      DAT_180bb1380 = pFVar1;
      _DAT_180bb1388 = pFVar2;
      DAT_180bb1390 = pFVar3;
    }
  }
  DAT_180bb1398 = uVar4;
  return uVar4;
}



