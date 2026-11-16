// FUN_1804169d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804169d0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

char * FUN_1804169d0(void)

{
  DWORD dwTlsIndex;
  undefined8 *puVar1;
  BOOL BVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *local_18;
  code *local_10;
  
  if ((DAT_1809bb6c4 == 0xffffffff) &&
     (BVar2 = InitOnceExecuteOnce((PINIT_ONCE)&DAT_180c7c908,FUN_180417300,(PVOID)0x0,(LPVOID *)0x0)
     , BVar2 == 0)) {
    pcVar4 = (char *)0x0;
  }
  else {
    dwTlsIndex = DAT_1809bb6c4;
    pcVar4 = TlsGetValue(DAT_1809bb6c4);
    if (pcVar4 == (char *)0x0) {
      pcVar5 = (char *)FUN_1805f6194(0x500,&DAT_1806898a0);
      if (pcVar5 == (char *)0x0) {
        pcVar5 = (char *)0x0;
      }
      else {
        FUN_18063ab10(pcVar5,0,0x500);
        FUN_180416160(pcVar5);
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
          goto LAB_180416b42;
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
LAB_180416b42:
  pcVar5 = &DAT_180cd4320;
  if (pcVar4 != (char *)0x0) {
    pcVar5 = pcVar4;
  }
  return pcVar5;
}



