// FUN_1803ab5f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803ab5f0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

char * FUN_1803ab5f0(void)

{
  DWORD dwTlsIndex;
  undefined8 *puVar1;
  BOOL BVar2;
  int iVar3;
  LPVOID pvVar4;
  char *lpTlsValue;
  char *local_18;
  code *local_10;
  
  if ((DAT_180903594 != 0xffffffff) ||
     (BVar2 = InitOnceExecuteOnce((PINIT_ONCE)&DAT_180c71378,FUN_1803ab7c0,(PVOID)0x0,(LPVOID *)0x0)
     , BVar2 != 0)) {
    dwTlsIndex = DAT_180903594;
    pvVar4 = TlsGetValue(DAT_180903594);
    if (pvVar4 != (LPVOID)0x0) {
      return pvVar4;
    }
    lpTlsValue = (char *)FUN_1805f6194(0x430,&DAT_1806898a0);
    if (lpTlsValue != (char *)0x0) {
      lpTlsValue[0x40c] = '\0';
      lpTlsValue[0x40d] = '\0';
      lpTlsValue[0x40e] = '\0';
      lpTlsValue[0x40f] = '\0';
      FUN_18063ab10(lpTlsValue,0,0x400);
      lpTlsValue[0x400] = '\0';
      lpTlsValue[0x401] = '\0';
      lpTlsValue[0x402] = '\0';
      lpTlsValue[0x403] = '\0';
      lpTlsValue[0x404] = '\0';
      lpTlsValue[0x405] = '\0';
      lpTlsValue[0x406] = '\0';
      lpTlsValue[0x407] = '\0';
      lpTlsValue[0x408] = '\0';
      lpTlsValue[0x409] = '\0';
      lpTlsValue[0x40a] = '\0';
      lpTlsValue[0x40b] = '\0';
      lpTlsValue[0x410] = '\0';
      lpTlsValue[0x411] = '\0';
      lpTlsValue[0x412] = '\0';
      lpTlsValue[0x413] = '\0';
      lpTlsValue[0x414] = '\0';
      lpTlsValue[0x415] = '\0';
      lpTlsValue[0x416] = '\0';
      lpTlsValue[0x417] = '\0';
      lpTlsValue[0x418] = '\0';
      lpTlsValue[0x419] = '\0';
      lpTlsValue[0x41a] = '\0';
      lpTlsValue[0x41b] = '\0';
      lpTlsValue[0x41c] = '\0';
      lpTlsValue[0x41d] = '\0';
      lpTlsValue[0x41e] = '\0';
      lpTlsValue[0x41f] = '\0';
      lpTlsValue[0x420] = '\0';
      lpTlsValue[0x421] = '\0';
      lpTlsValue[0x422] = '\0';
      lpTlsValue[0x423] = '\0';
      lpTlsValue[0x424] = '\0';
      lpTlsValue[0x425] = '\0';
      lpTlsValue[0x426] = '\0';
      lpTlsValue[0x427] = '\0';
      lpTlsValue[0x428] = '\0';
      lpTlsValue[0x429] = '\0';
      lpTlsValue[0x42a] = '\0';
      lpTlsValue[0x42b] = '\0';
      lpTlsValue[0x42c] = '\0';
      lpTlsValue[0x42d] = '\0';
      lpTlsValue[0x42e] = '\0';
      lpTlsValue[0x42f] = '\0';
      BVar2 = TlsSetValue(dwTlsIndex,lpTlsValue);
      if (BVar2 != 0) {
        iVar3 = FUN_1805f68d0(&DAT_1808d9bf0);
        puVar1 = DAT_180b0b2f0;
        if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(5);
        }
        if (DAT_1808d9c3c == 0x7fffffff) {
          DAT_1808d9c3c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(6);
        }
        local_10 = FUN_1801b3980;
        local_18 = lpTlsValue;
        if (DAT_180b0b2f0 == DAT_180b0b2f8) {
          FUN_1801bc530(&DAT_180b0b2e8,DAT_180b0b2f0,&local_18);
          FUN_1805f68fc(&DAT_1808d9bf0);
          return lpTlsValue;
        }
        *DAT_180b0b2f0 = lpTlsValue;
        puVar1[1] = FUN_1801b3980;
        DAT_180b0b2f0 = DAT_180b0b2f0 + 2;
        FUN_1805f68fc(&DAT_1808d9bf0);
        return lpTlsValue;
      }
    }
    if (DAT_180c7df30 == (undefined8 *)0x0) {
      local_18 = "tier0.dll:g_pMemAlloc";
      local_10 = (code *)0x15;
      DAT_180c7df30 = (undefined8 *)FUN_180451750(&local_18);
    }
    (**(code **)(*(longlong *)*DAT_180c7df30 + 0x18))((longlong *)*DAT_180c7df30,lpTlsValue);
  }
  return (LPVOID)0x0;
}



