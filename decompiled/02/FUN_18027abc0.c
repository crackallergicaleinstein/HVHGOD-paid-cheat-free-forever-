// FUN_18027abc0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18027abc0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

char * FUN_18027abc0(void)

{
  char *pcVar1;
  DWORD dwTlsIndex;
  undefined8 *puVar2;
  BOOL BVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  ulonglong uVar7;
  char *local_18;
  code *local_10;
  
  if ((DAT_1808efaac == 0xffffffff) &&
     (BVar3 = InitOnceExecuteOnce((PINIT_ONCE)&DAT_180c64af8,FUN_18027bd70,(PVOID)0x0,(LPVOID *)0x0)
     , BVar3 == 0)) {
    pcVar5 = (char *)0x0;
  }
  else {
    dwTlsIndex = DAT_1808efaac;
    pcVar5 = TlsGetValue(DAT_1808efaac);
    if (pcVar5 == (char *)0x0) {
      pcVar6 = (char *)FUN_1805f6194(0x820,&DAT_1806898a0);
      if (pcVar6 == (char *)0x0) {
        pcVar6 = (char *)0x0;
      }
      else {
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
        pcVar6[0x14] = -1;
        pcVar6[0x15] = -1;
        pcVar6[0x16] = -1;
        pcVar6[0x17] = -1;
        pcVar6[0x18] = '\0';
        pcVar6[0x19] = '\0';
        pcVar6[0x1a] = '\0';
        pcVar6[0x1b] = '\0';
        pcVar6[0x1c] = '\0';
        uVar7 = 0;
        do {
          pcVar1 = pcVar6 + uVar7 + 0x20;
          pcVar1[0] = '\0';
          pcVar1[1] = '\0';
          pcVar1[2] = '\0';
          pcVar1[3] = '\0';
          pcVar1[4] = '\0';
          pcVar1[5] = '\0';
          pcVar1[6] = '\0';
          pcVar1[7] = '\0';
          uVar7 = uVar7 + 8;
        } while (uVar7 < 0x800);
        BVar3 = TlsSetValue(dwTlsIndex,pcVar6);
        if (BVar3 != 0) {
          iVar4 = FUN_1805f68d0(&DAT_1808d9bf0);
          puVar2 = DAT_180b0b2f0;
          if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1805f6d44(5);
          }
          if (DAT_1808d9c3c == 0x7fffffff) {
            DAT_1808d9c3c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
            FUN_1805f6d44(6);
          }
          local_10 = FUN_1801b3980;
          pcVar5 = pcVar6;
          local_18 = pcVar6;
          if (DAT_180b0b2f0 == DAT_180b0b2f8) {
            FUN_1801bc530(&DAT_180b0b2e8,DAT_180b0b2f0,&local_18);
            FUN_1805f68fc(&DAT_1808d9bf0);
          }
          else {
            *DAT_180b0b2f0 = pcVar6;
            puVar2[1] = FUN_1801b3980;
            DAT_180b0b2f0 = DAT_180b0b2f0 + 2;
            FUN_1805f68fc(&DAT_1808d9bf0);
          }
          goto LAB_18027ad48;
        }
      }
      if (DAT_180c7df30 == (undefined8 *)0x0) {
        local_18 = "tier0.dll:g_pMemAlloc";
        local_10 = (code *)0x15;
        DAT_180c7df30 = (undefined8 *)FUN_180451750(&local_18);
      }
      (**(code **)(*(longlong *)*DAT_180c7df30 + 0x18))((longlong *)*DAT_180c7df30,pcVar6);
    }
  }
LAB_18027ad48:
  pcVar6 = &DAT_180b92740;
  if (pcVar5 != (char *)0x0) {
    pcVar6 = pcVar5;
  }
  return pcVar6;
}



