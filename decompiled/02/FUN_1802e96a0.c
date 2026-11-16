// FUN_1802e96a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802e96a0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined4 * FUN_1802e96a0(void)

{
  DWORD dwTlsIndex;
  undefined8 *puVar1;
  BOOL BVar2;
  int iVar3;
  undefined4 *puVar4;
  char *lpTlsValue;
  longlong lVar5;
  char *pcVar6;
  char *local_18;
  code *local_10;
  
  if ((DAT_1808f5b00 != 0xffffffff) ||
     (BVar2 = InitOnceExecuteOnce((PINIT_ONCE)&DAT_180c6e8f0,FUN_1802eb750,(PVOID)0x0,(LPVOID *)0x0)
     , BVar2 != 0)) {
    dwTlsIndex = DAT_1808f5b00;
    puVar4 = TlsGetValue(DAT_1808f5b00);
    if (puVar4 != (undefined4 *)0x0) {
      return puVar4;
    }
    lpTlsValue = (char *)FUN_1805f6194(0x10060,&DAT_1806898a0);
    if (lpTlsValue == (char *)0x0) {
      lpTlsValue = (char *)0x0;
    }
    else {
      lpTlsValue[0] = -0x40;
      lpTlsValue[1] = '\0';
      lpTlsValue[2] = '\0';
      lpTlsValue[3] = '\0';
      lpTlsValue[4] = '\x01';
      lpTlsValue[0x14] = '\0';
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
      lpTlsValue[0x36] = '\0';
      lpTlsValue[0x37] = '\0';
      lpTlsValue[0x38] = '\0';
      lpTlsValue[0x39] = '\0';
      lpTlsValue[0x3a] = '\0';
      lpTlsValue[0x3b] = '\0';
      lpTlsValue[0x3c] = '\0';
      lpTlsValue[0x3d] = '\0';
      lpTlsValue[0x3e] = '\0';
      lpTlsValue[0x3f] = '\0';
      lpTlsValue[0x40] = '\0';
      lpTlsValue[0x41] = '\0';
      lpTlsValue[0x42] = '\0';
      lpTlsValue[0x43] = '\0';
      lpTlsValue[0x44] = '\0';
      lpTlsValue[0x45] = '\0';
      lpTlsValue[0x46] = '\0';
      lpTlsValue[0x47] = '\0';
      lpTlsValue[0x48] = '\0';
      lpTlsValue[0x49] = '\0';
      lpTlsValue[0x4a] = '\0';
      lpTlsValue[0x4b] = '\0';
      lpTlsValue[0x4c] = '\0';
      lpTlsValue[0x4d] = '\0';
      lpTlsValue[0x4e] = '\0';
      lpTlsValue[0x4f] = '\0';
      lpTlsValue[0x50] = '\0';
      lpTlsValue[0x51] = '\0';
      lpTlsValue[0x52] = '\0';
      lpTlsValue[0x53] = '\0';
      lpTlsValue[0x54] = '\0';
      lpTlsValue[0x55] = '\0';
      lpTlsValue[0x56] = '\0';
      lpTlsValue[0x57] = '\0';
      lpTlsValue[0x58] = '\0';
      lpTlsValue[0x59] = '\0';
      lpTlsValue[0x5a] = '\0';
      lpTlsValue[0x5b] = '\0';
      lpTlsValue[0x5c] = '\0';
      lpTlsValue[0x5d] = '\0';
      lpTlsValue[0x5e] = '\0';
      lpTlsValue[0x5f] = '\0';
      FUN_18063ab10(lpTlsValue + 0x60,0,0x10000);
      pcVar6 = lpTlsValue + 0x68;
      lVar5 = 0x400;
      do {
        pcVar6[-8] = '\0';
        pcVar6[-7] = '\0';
        pcVar6[-6] = '\0';
        pcVar6[-5] = '\0';
        pcVar6[-4] = '\0';
        pcVar6[-3] = '\0';
        pcVar6[-2] = '\0';
        pcVar6[-1] = '\0';
        pcVar6[0] = '\0';
        pcVar6[1] = '\0';
        pcVar6[2] = '\0';
        pcVar6[3] = '\0';
        pcVar6[4] = '\0';
        pcVar6[5] = '\0';
        pcVar6[6] = '\0';
        pcVar6[7] = '\0';
        pcVar6[8] = '\0';
        pcVar6[9] = '\0';
        pcVar6[10] = '\0';
        pcVar6[0xb] = '\0';
        pcVar6[0xc] = '\0';
        pcVar6[0xd] = '\0';
        pcVar6[0xe] = '\0';
        pcVar6[0xf] = '\0';
        pcVar6[0x10] = '\0';
        pcVar6[0x11] = '\0';
        pcVar6[0x12] = '\0';
        pcVar6[0x13] = '\0';
        pcVar6[0x14] = '\0';
        pcVar6[0x15] = '\0';
        pcVar6[0x16] = '\0';
        pcVar6[0x17] = '\0';
        pcVar6[0x18] = '\0';
        pcVar6[0x19] = '\0';
        pcVar6[0x1a] = '\0';
        pcVar6[0x1b] = '\0';
        pcVar6[0x1c] = '\0';
        pcVar6[0x1d] = '\0';
        pcVar6[0x1e] = '\0';
        pcVar6[0x1f] = '\0';
        pcVar6[0x20] = '\0';
        pcVar6[0x21] = '\0';
        pcVar6[0x28] = '\0';
        pcVar6[0x29] = '\0';
        pcVar6[0x2a] = '\0';
        pcVar6[0x2b] = '\0';
        pcVar6[0x2c] = '\0';
        pcVar6[0x2d] = '\0';
        pcVar6[0x2e] = '\0';
        pcVar6[0x2f] = '\0';
        pcVar6[0x30] = '\0';
        pcVar6[0x31] = '\0';
        pcVar6 = pcVar6 + 0x40;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
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
          return (undefined4 *)lpTlsValue;
        }
        *DAT_180b0b2f0 = lpTlsValue;
        puVar1[1] = FUN_1801b3980;
        DAT_180b0b2f0 = DAT_180b0b2f0 + 2;
        FUN_1805f68fc(&DAT_1808d9bf0);
        return (undefined4 *)lpTlsValue;
      }
    }
    if (DAT_180c7df30 == (undefined8 *)0x0) {
      local_18 = "tier0.dll:g_pMemAlloc";
      local_10 = (code *)0x15;
      DAT_180c7df30 = (undefined8 *)FUN_180451750(&local_18);
    }
    (**(code **)(*(longlong *)*DAT_180c7df30 + 0x18))((longlong *)*DAT_180c7df30,lpTlsValue);
  }
  return (undefined4 *)0x0;
}



