// FUN_1801b1ee0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801b1ee0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

char * FUN_1801b1ee0(void)

{
  DWORD dwTlsIndex;
  undefined8 *puVar1;
  BOOL BVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  longlong *plVar6;
  undefined1 local_res8 [8];
  char *local_18;
  code *local_10;
  
  if ((DAT_1808da804 == 0xffffffff) &&
     (BVar2 = InitOnceExecuteOnce((PINIT_ONCE)&DAT_180bbea50,FUN_1801ba9d0,(PVOID)0x0,(LPVOID *)0x0)
     , BVar2 == 0)) {
    pcVar4 = (char *)0x0;
  }
  else {
    dwTlsIndex = DAT_1808da804;
    pcVar4 = TlsGetValue(DAT_1808da804);
    if (pcVar4 == (char *)0x0) {
      pcVar5 = (char *)FUN_1805f6194(0x40,&DAT_1806898a0);
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
        pcVar5[8] = '\0';
        pcVar5[9] = '\0';
        pcVar5[10] = '\0';
        pcVar5[0xb] = '\0';
        pcVar5[0xc] = '\0';
        pcVar5[0xd] = '\0';
        pcVar5[0xe] = '\0';
        pcVar5[0xf] = '\0';
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
        pcVar5[0x1e] = '\0';
        pcVar5[0x1f] = '\0';
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
        pcVar5[0x2e] = '\0';
        pcVar5[0x2f] = '\0';
        FUN_18017bf40(pcVar5 + 0x30);
        plVar6 = (longlong *)FUN_18017bf40(local_res8);
        *(longlong *)(pcVar5 + 0x38) = *plVar6 + 5000000000;
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
          goto LAB_1801b2078;
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
LAB_1801b2078:
  pcVar5 = &DAT_180bb9100;
  if (pcVar4 != (char *)0x0) {
    pcVar5 = pcVar4;
  }
  return pcVar5;
}



