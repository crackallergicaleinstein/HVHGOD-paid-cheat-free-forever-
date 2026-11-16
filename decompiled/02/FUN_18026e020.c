// FUN_18026e020 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18026e020 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

char * FUN_18026e020(void)

{
  DWORD dwTlsIndex;
  undefined8 *puVar1;
  BOOL BVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *local_18;
  code *local_10;
  
  if ((DAT_1808efaa8 == 0xffffffff) &&
     (BVar2 = InitOnceExecuteOnce((PINIT_ONCE)&DAT_180c64ae8,FUN_18027be90,(PVOID)0x0,(LPVOID *)0x0)
     , BVar2 == 0)) {
    pcVar4 = (char *)0x0;
  }
  else {
    dwTlsIndex = DAT_1808efaa8;
    pcVar4 = TlsGetValue(DAT_1808efaa8);
    if (pcVar4 == (char *)0x0) {
      pcVar5 = (char *)FUN_1805f6194(0x10,&DAT_1806898a0);
      if (pcVar5 == (char *)0x0) {
        pcVar5 = (char *)0x0;
      }
      else {
        *pcVar5 = '\0';
        pcVar5[8] = '\0';
        pcVar5[9] = '\0';
        pcVar5[10] = '\0';
        pcVar5[0xb] = '\0';
        pcVar5[0xc] = '\0';
        pcVar5[0xd] = '\0';
        pcVar5[0xe] = '\0';
        pcVar5[0xf] = '\0';
        BVar2 = TlsSetValue(dwTlsIndex,pcVar5);
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
          pcVar4 = pcVar5;
          local_18 = pcVar5;
          if (DAT_180b0b2f0 == DAT_180b0b2f8) {
            FUN_1801bc530(&DAT_180b0b2e8,DAT_180b0b2f0,&local_18);
            FUN_1805f68fc(&DAT_1808d9bf0);
          }
          else {
            *DAT_180b0b2f0 = pcVar5;
            puVar1[1] = FUN_1801b3980;
            DAT_180b0b2f0 = DAT_180b0b2f0 + 2;
            FUN_1805f68fc(&DAT_1808d9bf0);
          }
          goto LAB_18026e180;
        }
      }
      if (DAT_180c7df30 == (undefined8 *)0x0) {
        local_18 = "tier0.dll:g_pMemAlloc";
        local_10 = (code *)0x15;
        DAT_180c7df30 = (undefined8 *)FUN_180451750(&local_18);
      }
      (**(code **)(*(longlong *)*DAT_180c7df30 + 0x18))((longlong *)*DAT_180c7df30,pcVar5);
    }
  }
LAB_18026e180:
  pcVar5 = &DAT_180c64b08;
  if (pcVar4 != (char *)0x0) {
    pcVar5 = pcVar4;
  }
  return pcVar5;
}



