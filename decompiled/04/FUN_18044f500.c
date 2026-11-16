// FUN_18044f500 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18044f500 */

FARPROC FUN_18044f500(void)

{
  byte bVar1;
  HMODULE hModule;
  FARPROC pFVar2;
  FARPROC pFVar3;
  
  pFVar3 = DAT_180c62be0;
  if ((DAT_180c62be0 == (FARPROC)0x0) &&
     (pFVar3 = (FARPROC)(ulonglong)DAT_180bbec8e, DAT_180bbec8e == 0)) {
    hModule = GetModuleHandleA("tier0.dll");
    pFVar3 = (FARPROC)0x0;
    if (hModule != (HMODULE)0x0) {
      DAT_180c62be0 = GetProcAddress(hModule,"?ConMsg@@YAXPEBDZZ");
      LOCK();
      UNLOCK();
      pFVar2 = GetProcAddress(hModule,"?ConColorMsg@@YAXAEBVColor@@PEBDZZ");
      bVar1 = DAT_180bbec8e;
      LOCK();
      UNLOCK();
      pFVar3 = DAT_180c62be8;
      DAT_180c62be8 = pFVar2;
      if (DAT_180c62be0 == (FARPROC)0x0) {
        LOCK();
        DAT_180bbec8e = 1;
        pFVar3 = (FARPROC)(ulonglong)bVar1;
        UNLOCK();
        if (bVar1 == 0) {
          pFVar3 = (FARPROC)FUN_1800a9e50(2,
                                          "Named CS2 console export unavailable; events retained in diagnostics."
                                         );
          return pFVar3;
        }
      }
    }
  }
  return pFVar3;
}



