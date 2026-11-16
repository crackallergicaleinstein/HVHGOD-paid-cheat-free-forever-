// FUN_180370680 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180370680 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

char * FUN_180370680(void)

{
  DWORD dwTlsIndex;
  undefined8 *puVar1;
  BOOL BVar2;
  int iVar3;
  char *pcVar4;
  char *lpTlsValue;
  char *pcVar5;
  char *local_18;
  code *local_10;
  
  if ((DAT_1808e3e18 == 0xffffffff) &&
     (BVar2 = InitOnceExecuteOnce((PINIT_ONCE)&DAT_180bda4c8,FUN_1803709b0,(PVOID)0x0,(LPVOID *)0x0)
     , BVar2 == 0)) {
    lpTlsValue = (char *)0x0;
  }
  else {
    dwTlsIndex = DAT_1808e3e18;
    pcVar4 = TlsGetValue(DAT_1808e3e18);
    lpTlsValue = pcVar4;
    if (pcVar4 == (char *)0x0) {
      lpTlsValue = (char *)FUN_1805f6194(0x188,&DAT_1806898a0);
      if (lpTlsValue == (char *)0x0) {
        pcVar5 = (char *)0x0;
        pcVar4 = (char *)0x0;
      }
      else {
        FUN_18063ab10(lpTlsValue,0,0x180);
        FUN_180370840(lpTlsValue);
        lpTlsValue[0x180] = '\0';
        lpTlsValue[0x181] = '\0';
        lpTlsValue[0x182] = '\0';
        lpTlsValue[0x183] = '\0';
        BVar2 = TlsSetValue(dwTlsIndex,lpTlsValue);
        pcVar5 = lpTlsValue;
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
          }
          else {
            *DAT_180b0b2f0 = lpTlsValue;
            puVar1[1] = FUN_1801b75b0;
            DAT_180b0b2f0 = DAT_180b0b2f0 + 2;
            FUN_1805f68fc(&DAT_1808d9bf0);
          }
          goto LAB_1803707f9;
        }
      }
      lpTlsValue = pcVar4;
      if (DAT_180c7df30 == (undefined8 *)0x0) {
        local_18 = "tier0.dll:g_pMemAlloc";
        local_10 = (code *)0x15;
        DAT_180c7df30 = (undefined8 *)FUN_180451750(&local_18);
      }
      (**(code **)(*(longlong *)*DAT_180c7df30 + 0x18))((longlong *)*DAT_180c7df30,pcVar5);
    }
  }
LAB_1803707f9:
  pcVar4 = &DAT_180bda340;
  if (lpTlsValue != (char *)0x0) {
    pcVar4 = lpTlsValue;
  }
  return pcVar4;
}



