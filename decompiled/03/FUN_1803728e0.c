// FUN_1803728e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803728e0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

LPVOID FUN_1803728e0(void)

{
  DWORD dwTlsIndex;
  undefined8 *puVar1;
  BOOL BVar2;
  int iVar3;
  LPVOID pvVar4;
  char *lpTlsValue;
  char *pcVar5;
  longlong lVar6;
  longlong lVar7;
  char *pcVar8;
  char *local_18;
  code *local_10;
  
  if ((DAT_1808e4858 != 0xffffffff) ||
     (BVar2 = InitOnceExecuteOnce((PINIT_ONCE)&DAT_180c62510,FUN_180372fc0,(PVOID)0x0,(LPVOID *)0x0)
     , BVar2 != 0)) {
    dwTlsIndex = DAT_1808e4858;
    pvVar4 = TlsGetValue(DAT_1808e4858);
    if (pvVar4 != (LPVOID)0x0) {
      return pvVar4;
    }
    lpTlsValue = (char *)FUN_1805f6194(0x80028,&DAT_1806898a0);
    if (lpTlsValue == (char *)0x0) {
      lpTlsValue = (char *)0x0;
    }
    else {
      FUN_18063ab10(lpTlsValue,0,0x80020);
      pcVar8 = lpTlsValue + 0x20000;
      lVar7 = 4;
      do {
        FUN_18063ab10(pcVar8 + -0x20000,0,0x20000);
        pcVar5 = pcVar8 + -0x1fff0;
        lVar6 = 0x1000;
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
          pcVar5[0xe] = '\0';
          pcVar5[0xf] = '\0';
          pcVar5 = pcVar5 + 0x20;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
        pcVar8[0] = '\0';
        pcVar8[1] = '\0';
        pcVar8[2] = '\0';
        pcVar8[3] = '\0';
        pcVar8 = pcVar8 + 0x20008;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
      lpTlsValue[0x80020] = '\0';
      lpTlsValue[0x80021] = '\0';
      lpTlsValue[0x80022] = '\0';
      lpTlsValue[0x80023] = '\0';
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
        local_10 = FUN_1801b75b0;
        local_18 = lpTlsValue;
        if (DAT_180b0b2f0 == DAT_180b0b2f8) {
          FUN_1801bc530(&DAT_180b0b2e8,DAT_180b0b2f0,&local_18);
          FUN_1805f68fc(&DAT_1808d9bf0);
          return lpTlsValue;
        }
        *DAT_180b0b2f0 = lpTlsValue;
        puVar1[1] = FUN_1801b75b0;
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



