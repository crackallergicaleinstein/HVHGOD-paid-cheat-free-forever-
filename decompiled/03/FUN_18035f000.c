// FUN_18035f000 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18035f000 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

char * FUN_18035f000(void)

{
  DWORD dwTlsIndex;
  undefined8 *puVar1;
  BOOL BVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *local_18;
  code *local_10;
  
  if ((DAT_1808e3ac8 == 0xffffffff) &&
     (BVar2 = InitOnceExecuteOnce((PINIT_ONCE)&DAT_180bda1e0,FUN_180360f70,(PVOID)0x0,(LPVOID *)0x0)
     , BVar2 == 0)) {
    pcVar4 = (char *)0x0;
  }
  else {
    dwTlsIndex = DAT_1808e3ac8;
    pcVar4 = TlsGetValue(DAT_1808e3ac8);
    if (pcVar4 == (char *)0x0) {
      pcVar5 = (char *)FUN_1805f6194(0x9a8,&DAT_1806898a0);
      if (pcVar5 == (char *)0x0) {
        pcVar5 = (char *)0x0;
      }
      else {
        pcVar5[0] = '\0';
        pcVar5[1] = '\0';
        pcVar5[2] = '\0';
        pcVar5[3] = '\0';
        pcVar5[4] = '\0';
        pcVar5[5] = '\0';
        pcVar5[6] = '\0';
        pcVar5[7] = '\0';
        FUN_18063ab10(pcVar5 + 8,0,0x980);
        FUN_18035d410(pcVar5 + 8);
        pcVar5[0x988] = '\0';
        pcVar5[0x989] = '\0';
        pcVar5[0x98a] = '\0';
        pcVar5[0x98b] = '\0';
        pcVar5[0x98c] = '\0';
        pcVar5[0x98d] = '\0';
        pcVar5[0x98e] = '\0';
        pcVar5[0x98f] = '\0';
        pcVar5[0x990] = '\0';
        pcVar5[0x991] = '\0';
        pcVar5[0x992] = '\0';
        pcVar5[0x993] = '\0';
        pcVar5[0x994] = '\0';
        pcVar5[0x995] = '\0';
        pcVar5[0x996] = '\0';
        pcVar5[0x997] = '\0';
        pcVar5[0x998] = '\0';
        pcVar5[0x999] = '\0';
        pcVar5[0x99a] = '\0';
        pcVar5[0x99b] = '\0';
        pcVar5[0x99c] = '\0';
        pcVar5[0x99d] = '\0';
        pcVar5[0x99e] = '\0';
        pcVar5[0x99f] = '\0';
        pcVar5[0x9a0] = '\0';
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
          local_10 = FUN_1801b75b0;
          pcVar4 = pcVar5;
          local_18 = pcVar5;
          if (DAT_180b0b2f0 == DAT_180b0b2f8) {
            FUN_1801bc530(&DAT_180b0b2e8,DAT_180b0b2f0,&local_18);
            FUN_1805f68fc(&DAT_1808d9bf0);
          }
          else {
            *DAT_180b0b2f0 = pcVar5;
            puVar1[1] = FUN_1801b75b0;
            DAT_180b0b2f0 = DAT_180b0b2f0 + 2;
            FUN_1805f68fc(&DAT_1808d9bf0);
          }
          goto LAB_18035f198;
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
LAB_18035f198:
  pcVar5 = &DAT_1808e3eb0;
  if (pcVar4 != (char *)0x0) {
    pcVar5 = pcVar4;
  }
  return pcVar5;
}



