// FUN_1802e92c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802e92c0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

LPVOID FUN_1802e92c0(void)

{
  DWORD dwTlsIndex;
  undefined8 *puVar1;
  BOOL BVar2;
  int iVar3;
  LPVOID pvVar4;
  char *lpTlsValue;
  char *pcVar5;
  longlong lVar6;
  char *local_28;
  code *local_20;
  
  if ((DAT_1808f5b04 != 0xffffffff) ||
     (BVar2 = InitOnceExecuteOnce((PINIT_ONCE)&DAT_180c6e8f8,FUN_1802eb6c0,(PVOID)0x0,(LPVOID *)0x0)
     , BVar2 != 0)) {
    dwTlsIndex = DAT_1808f5b04;
    pvVar4 = TlsGetValue(DAT_1808f5b04);
    if (pvVar4 != (LPVOID)0x0) {
      return pvVar4;
    }
    lpTlsValue = (char *)FUN_1805f6194(0x6a08,&DAT_1806898a0);
    if (lpTlsValue == (char *)0x0) {
      lpTlsValue = (char *)0x0;
    }
    else {
      FUN_18063ab10(lpTlsValue,0,0x6a00);
      pcVar5 = lpTlsValue + 0x10;
      lVar6 = 0x10;
      do {
        pcVar5[-0x10] = '\0';
        pcVar5[-0xf] = '\0';
        pcVar5[-0xe] = '\0';
        pcVar5[-0xd] = '\0';
        pcVar5[-0xc] = '\0';
        pcVar5[-0xb] = '\0';
        pcVar5[-10] = '\0';
        pcVar5[-9] = '\0';
        pcVar5[-8] = '\0';
        pcVar5[-7] = '\0';
        pcVar5[-6] = '\0';
        pcVar5[-5] = '\0';
        pcVar5[-4] = '\0';
        pcVar5[-3] = '\0';
        pcVar5[-2] = '\0';
        pcVar5[-1] = '\0';
        pcVar5[0] = '\0';
        pcVar5[1] = '\0';
        pcVar5[2] = '\0';
        pcVar5[3] = '\0';
        pcVar5[4] = '\0';
        pcVar5[5] = '\0';
        pcVar5[6] = '\0';
        pcVar5[7] = '\0';
        pcVar5[8] = '\0';
        pcVar5[9] = '\0';
        pcVar5[10] = '\0';
        pcVar5[0xb] = '\0';
        pcVar5[0xc] = '\0';
        pcVar5[0xd] = '\0';
        pcVar5[0x10] = '\0';
        pcVar5[0x11] = '\0';
        pcVar5[0x12] = '\0';
        pcVar5[0x13] = '\0';
        pcVar5[0x14] = '\0';
        pcVar5[0x15] = '\0';
        pcVar5[0x16] = '\0';
        pcVar5[0x17] = '\0';
        pcVar5[0x18] = '\0';
        pcVar5[0x19] = '\0';
        pcVar5[0x1a] = '\0';
        pcVar5[0x1b] = '\0';
        pcVar5[0x1c] = '\0';
        pcVar5[0x1d] = '\0';
        pcVar5[0x1e] = -0x80;
        pcVar5[0x1f] = '?';
        pcVar5[0x20] = '\0';
        pcVar5[0x21] = '\0';
        pcVar5[0x22] = '\0';
        pcVar5[0x23] = '\0';
        pcVar5[0x24] = '\0';
        pcVar5[0x25] = '\0';
        pcVar5[0x26] = '\0';
        pcVar5[0x27] = '\0';
        pcVar5[0x28] = '\0';
        pcVar5[0x29] = '\0';
        pcVar5[0x2a] = '\0';
        pcVar5[0x2b] = '\0';
        pcVar5[0x2c] = '\0';
        pcVar5[0x2d] = '\0';
        pcVar5[0x2e] = -0x80;
        pcVar5[0x2f] = '?';
        pcVar5[0x30] = '\0';
        pcVar5[0x34] = '\0';
        pcVar5[0x35] = '\0';
        FUN_18063ab10(pcVar5 + 0x38,0,0x654);
        FUN_1802e33d0(pcVar5 + 0x38);
        pcVar5[0x68c] = '\0';
        pcVar5[0x68d] = '\0';
        pcVar5[0x68e] = '\0';
        pcVar5[0x68f] = '\0';
        pcVar5 = pcVar5 + 0x6a0;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      lpTlsValue[0x6a00] = '\0';
      lpTlsValue[0x6a01] = '\0';
      lpTlsValue[0x6a02] = '\0';
      lpTlsValue[0x6a03] = '\0';
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
        local_20 = FUN_1801b3980;
        local_28 = lpTlsValue;
        if (DAT_180b0b2f0 == DAT_180b0b2f8) {
          FUN_1801bc530(&DAT_180b0b2e8,DAT_180b0b2f0,&local_28);
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
      local_28 = "tier0.dll:g_pMemAlloc";
      local_20 = (code *)0x15;
      DAT_180c7df30 = (undefined8 *)FUN_180451750(&local_28);
    }
    (**(code **)(*(longlong *)*DAT_180c7df30 + 0x18))((longlong *)*DAT_180c7df30,lpTlsValue);
  }
  return (LPVOID)0x0;
}



