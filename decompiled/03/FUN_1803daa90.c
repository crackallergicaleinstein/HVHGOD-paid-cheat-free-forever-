// FUN_1803daa90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803daa90 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

char * FUN_1803daa90(void)

{
  DWORD dwTlsIndex;
  BOOL BVar1;
  int iVar2;
  undefined8 *puVar3;
  char *lpTlsValue;
  char *local_18;
  code *local_10;
  
  if ((DAT_1808e4a68 != 0xffffffff) ||
     (BVar1 = InitOnceExecuteOnce((PINIT_ONCE)&DAT_180c62930,FUN_1803dac80,(PVOID)0x0,(LPVOID *)0x0)
     , BVar1 != 0)) {
    dwTlsIndex = DAT_1808e4a68;
    puVar3 = TlsGetValue(DAT_1808e4a68);
    if (puVar3 != (undefined8 *)0x0) {
      return (char *)puVar3;
    }
    lpTlsValue = (char *)FUN_1805f6194(0xc0,&DAT_1806898a0);
    if (lpTlsValue != (char *)0x0) {
      lpTlsValue[0] = '\0';
      lpTlsValue[1] = '\0';
      lpTlsValue[2] = '\0';
      lpTlsValue[3] = '\0';
      lpTlsValue[4] = '\0';
      lpTlsValue[5] = '\0';
      lpTlsValue[6] = '\0';
      lpTlsValue[7] = '\0';
      lpTlsValue[8] = '\0';
      lpTlsValue[9] = '\0';
      lpTlsValue[10] = '\0';
      lpTlsValue[0xb] = '\0';
      lpTlsValue[0xc] = '\0';
      lpTlsValue[0xd] = '\0';
      lpTlsValue[0xe] = '\0';
      lpTlsValue[0xf] = '\0';
      lpTlsValue[0x10] = -1;
      lpTlsValue[0x11] = -1;
      lpTlsValue[0x12] = -1;
      lpTlsValue[0x13] = -1;
      lpTlsValue[0x14] = -1;
      lpTlsValue[0x15] = -1;
      lpTlsValue[0x16] = -1;
      lpTlsValue[0x17] = -1;
      lpTlsValue[0x18] = '\0';
      lpTlsValue[0x19] = '\0';
      lpTlsValue[0x1a] = '\0';
      lpTlsValue[0x1b] = '\0';
      lpTlsValue[0x1c] = '\0';
      lpTlsValue[0x1d] = '\0';
      lpTlsValue[0x1e] = '\0';
      lpTlsValue[0x1f] = '\0';
      lpTlsValue[0x20] = '\0';
      lpTlsValue[0x21] = '\0';
      lpTlsValue[0x22] = '\0';
      lpTlsValue[0x23] = '\0';
      lpTlsValue[0x24] = '\0';
      lpTlsValue[0x25] = '\0';
      lpTlsValue[0x26] = '\0';
      lpTlsValue[0x27] = '\0';
      lpTlsValue[0x28] = '\0';
      lpTlsValue[0x29] = '\0';
      lpTlsValue[0x2a] = '\0';
      lpTlsValue[0x2b] = '\0';
      lpTlsValue[0x2c] = '\0';
      lpTlsValue[0x2d] = '\0';
      lpTlsValue[0x2e] = '\0';
      lpTlsValue[0x2f] = '\0';
      lpTlsValue[0x30] = '\0';
      lpTlsValue[0x31] = '\0';
      lpTlsValue[0x32] = '\0';
      lpTlsValue[0x33] = '\0';
      lpTlsValue[0x34] = '\0';
      lpTlsValue[0x35] = '\0';
      lpTlsValue[0x38] = '\0';
      lpTlsValue[0x39] = '\0';
      lpTlsValue[0x3a] = '\0';
      lpTlsValue[0x3b] = '\0';
      lpTlsValue[0x3c] = '\0';
      lpTlsValue[0x3d] = '\0';
      lpTlsValue[0x3e] = '\0';
      lpTlsValue[0x3f] = '\0';
      lpTlsValue[100] = '\0';
      lpTlsValue[0x8c] = '\0';
      lpTlsValue[0x90] = -1;
      lpTlsValue[0x91] = -1;
      lpTlsValue[0x92] = -1;
      lpTlsValue[0x93] = -1;
      lpTlsValue[0x98] = '\0';
      lpTlsValue[0x99] = '\0';
      lpTlsValue[0x9a] = '\0';
      lpTlsValue[0x9b] = '\0';
      lpTlsValue[0x9c] = '\0';
      lpTlsValue[0x9d] = '\0';
      lpTlsValue[0x9e] = '\0';
      lpTlsValue[0x9f] = '\0';
      lpTlsValue[0xa0] = '\0';
      lpTlsValue[0xa1] = '\0';
      lpTlsValue[0xa2] = '\0';
      lpTlsValue[0xa3] = '\0';
      lpTlsValue[0xa4] = '\0';
      lpTlsValue[0xa5] = '\0';
      lpTlsValue[0xa6] = '\0';
      lpTlsValue[0xa7] = '\0';
      lpTlsValue[0xa8] = '\0';
      lpTlsValue[0xa9] = '\0';
      lpTlsValue[0xaa] = '\0';
      lpTlsValue[0xab] = '\0';
      lpTlsValue[0xac] = '\0';
      lpTlsValue[0xad] = '\0';
      lpTlsValue[0xae] = '\0';
      lpTlsValue[0xaf] = '\0';
      lpTlsValue[0xb0] = '\0';
      lpTlsValue[0xb1] = '\0';
      lpTlsValue[0xb2] = '\0';
      lpTlsValue[0xb3] = '\0';
      lpTlsValue[0xb8] = '\0';
      lpTlsValue[0xb9] = '\0';
      lpTlsValue[0xba] = '\0';
      lpTlsValue[0xbb] = '\0';
      lpTlsValue[0xbc] = '\0';
      lpTlsValue[0xbd] = '\0';
      lpTlsValue[0xbe] = '\0';
      lpTlsValue[0xbf] = '\0';
      BVar1 = TlsSetValue(dwTlsIndex,lpTlsValue);
      if (BVar1 != 0) {
        iVar2 = FUN_1805f68d0(&DAT_1808d9bf0);
        puVar3 = DAT_180b0b2f0;
        if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(5);
        }
        if (DAT_1808d9c3c == 0x7fffffff) {
          DAT_1808d9c3c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(6);
        }
        local_10 = FUN_1801b75b0;
        local_18 = lpTlsValue;
        if (DAT_180b0b2f0 == DAT_180b0b2f8) {
          FUN_1801bc530(&DAT_180b0b2e8,DAT_180b0b2f0,&local_18);
          FUN_1805f68fc(&DAT_1808d9bf0);
          return lpTlsValue;
        }
        *DAT_180b0b2f0 = lpTlsValue;
        puVar3[1] = FUN_1801b75b0;
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
  return (char *)(undefined8 *)0x0;
}



