// FUN_18027b660 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18027b660 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

char * FUN_18027b660(void)

{
  DWORD dwTlsIndex;
  undefined8 *puVar1;
  BOOL BVar2;
  int iVar3;
  undefined4 *puVar4;
  char *lpTlsValue;
  char *local_18;
  code *local_10;
  
  if ((DAT_1808efaa4 != 0xffffffff) ||
     (BVar2 = InitOnceExecuteOnce((PINIT_ONCE)&DAT_180c64af0,FUN_18027be00,(PVOID)0x0,(LPVOID *)0x0)
     , BVar2 != 0)) {
    dwTlsIndex = DAT_1808efaa4;
    puVar4 = TlsGetValue(DAT_1808efaa4);
    if (puVar4 != (undefined4 *)0x0) {
      return (char *)puVar4;
    }
    lpTlsValue = (char *)FUN_1805f6194(0x1d60,&DAT_1806898a0);
    if (lpTlsValue != (char *)0x0) {
      lpTlsValue[0] = '\0';
      lpTlsValue[1] = '\0';
      lpTlsValue[2] = '\0';
      lpTlsValue[3] = '\0';
      lpTlsValue[4] = '\0';
      lpTlsValue[5] = '\0';
      lpTlsValue[6] = 'P';
      lpTlsValue[7] = 'B';
      lpTlsValue[8] = '\0';
      lpTlsValue[9] = '\0';
      lpTlsValue[10] = '\0';
      lpTlsValue[0xb] = '\0';
      lpTlsValue[0xc] = '\0';
      lpTlsValue[0xd] = '\0';
      lpTlsValue[0xe] = '\0';
      lpTlsValue[0xf] = '\0';
      lpTlsValue[0x10] = -0x80;
      lpTlsValue[0x11] = '\0';
      lpTlsValue[0x12] = '\0';
      lpTlsValue[0x13] = '\0';
      lpTlsValue[0x14] = '\0';
      lpTlsValue[0x15] = '\0';
      lpTlsValue[0x16] = '\0';
      lpTlsValue[0x17] = -0x80;
      FUN_18063ab10(lpTlsValue + 0x18,0,0x1c00);
      lpTlsValue[0x1c18] = '\0';
      lpTlsValue[0x1c19] = '\0';
      lpTlsValue[0x1c1a] = '\0';
      lpTlsValue[0x1c1b] = '\0';
      lpTlsValue[0x1c1c] = '\0';
      lpTlsValue[0x1c1d] = '\0';
      lpTlsValue[0x1c1e] = '\0';
      lpTlsValue[0x1c1f] = '\0';
      *(undefined1 (*) [16])(lpTlsValue + 0x1c20) = (undefined1  [16])0x0;
      lpTlsValue[0x1c30] = '\b';
      lpTlsValue[0x1c31] = '\0';
      lpTlsValue[0x1c32] = '\0';
      lpTlsValue[0x1c33] = '\0';
      lpTlsValue[0x1c34] = '\0';
      lpTlsValue[0x1c35] = '\0';
      lpTlsValue[0x1c36] = '\0';
      lpTlsValue[0x1c37] = -0x80;
      FUN_18063ab10(lpTlsValue + 0x1c38,0,0xc0);
      lpTlsValue[0x1cf8] = '\0';
      lpTlsValue[0x1cf9] = '\0';
      lpTlsValue[0x1cfa] = '\0';
      lpTlsValue[0x1cfb] = '\0';
      lpTlsValue[0x1cfc] = '\0';
      lpTlsValue[0x1cfd] = '\0';
      lpTlsValue[0x1cfe] = '\0';
      lpTlsValue[0x1cff] = '\0';
      lpTlsValue[0x1d00] = '\0';
      lpTlsValue[0x1d01] = '\0';
      lpTlsValue[0x1d02] = '\0';
      lpTlsValue[0x1d03] = '\0';
      lpTlsValue[0x1d04] = '\0';
      lpTlsValue[0x1d05] = '\0';
      lpTlsValue[0x1d06] = '\0';
      lpTlsValue[0x1d07] = '\0';
      lpTlsValue[0x1d08] = '\0';
      lpTlsValue[0x1d09] = '\0';
      lpTlsValue[0x1d0a] = '\0';
      lpTlsValue[0x1d0b] = '\0';
      lpTlsValue[0x1d0c] = '\0';
      lpTlsValue[0x1d0d] = '\0';
      lpTlsValue[0x1d0e] = '\0';
      lpTlsValue[0x1d0f] = '\0';
      lpTlsValue[0x1d10] = '\0';
      lpTlsValue[0x1d11] = '\0';
      lpTlsValue[0x1d12] = -0x80;
      lpTlsValue[0x1d13] = '?';
      lpTlsValue[0x1d14] = '\0';
      lpTlsValue[0x1d15] = '\0';
      lpTlsValue[0x1d16] = '\0';
      lpTlsValue[0x1d17] = '\0';
      lpTlsValue[0x1d18] = '\0';
      lpTlsValue[0x1d19] = '\0';
      lpTlsValue[0x1d1a] = '\0';
      lpTlsValue[0x1d1b] = '\0';
      lpTlsValue[0x1d1c] = '\0';
      lpTlsValue[0x1d1d] = '\0';
      lpTlsValue[0x1d1e] = '\0';
      lpTlsValue[0x1d1f] = '\0';
      lpTlsValue[0x1d20] = '\0';
      lpTlsValue[0x1d21] = '\0';
      lpTlsValue[0x1d22] = '\0';
      lpTlsValue[0x1d23] = '\0';
      lpTlsValue[0x1d24] = '\0';
      lpTlsValue[0x1d25] = '\0';
      lpTlsValue[0x1d26] = '\0';
      lpTlsValue[0x1d27] = '\0';
      lpTlsValue[0x1d28] = '\0';
      lpTlsValue[0x1d29] = '\0';
      lpTlsValue[0x1d2a] = '\0';
      lpTlsValue[0x1d2b] = '\0';
      lpTlsValue[0x1d2c] = '\0';
      lpTlsValue[0x1d2d] = '\0';
      lpTlsValue[0x1d2e] = '\0';
      lpTlsValue[0x1d2f] = '\0';
      lpTlsValue[0x1d30] = '\0';
      lpTlsValue[0x1d31] = '\0';
      lpTlsValue[0x1d32] = '\0';
      lpTlsValue[0x1d33] = '\0';
      lpTlsValue[0x1d34] = '\0';
      lpTlsValue[0x1d35] = '\0';
      lpTlsValue[0x1d36] = '\0';
      lpTlsValue[0x1d37] = '\0';
      lpTlsValue[0x1d38] = '\0';
      lpTlsValue[0x1d39] = '\0';
      lpTlsValue[0x1d3a] = '\0';
      lpTlsValue[0x1d3b] = '\0';
      lpTlsValue[0x1d3c] = '\0';
      lpTlsValue[0x1d3d] = '\0';
      lpTlsValue[0x1d3e] = '\0';
      lpTlsValue[0x1d3f] = '\0';
      lpTlsValue[0x1d40] = '\0';
      lpTlsValue[0x1d41] = '\0';
      lpTlsValue[0x1d42] = '\0';
      lpTlsValue[0x1d43] = '\0';
      lpTlsValue[0x1d44] = '\0';
      lpTlsValue[0x1d45] = '\0';
      lpTlsValue[0x1d46] = '\0';
      lpTlsValue[0x1d47] = '\0';
      lpTlsValue[0x1d48] = '\0';
      lpTlsValue[0x1d49] = '\0';
      lpTlsValue[0x1d4a] = '\0';
      lpTlsValue[0x1d4b] = '\0';
      lpTlsValue[0x1d4c] = '\0';
      lpTlsValue[0x1d4d] = '\0';
      lpTlsValue[0x1d4e] = '\0';
      lpTlsValue[0x1d4f] = '\0';
      lpTlsValue[0x1d50] = '\0';
      lpTlsValue[0x1d51] = '\0';
      lpTlsValue[0x1d52] = '\0';
      lpTlsValue[0x1d53] = '\0';
      lpTlsValue[0x1d54] = '\0';
      lpTlsValue[0x1d55] = '\0';
      lpTlsValue[0x1d56] = '\0';
      lpTlsValue[0x1d57] = '\0';
      lpTlsValue[0x1d58] = '\0';
      lpTlsValue[0x1d59] = '\0';
      lpTlsValue[0x1d5a] = '\0';
      lpTlsValue[0x1d5b] = '\0';
      lpTlsValue[0x1d5c] = '\0';
      lpTlsValue[0x1d5d] = '\0';
      lpTlsValue[0x1d5e] = '\0';
      lpTlsValue[0x1d5f] = '\0';
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
  return (char *)(undefined4 *)0x0;
}



