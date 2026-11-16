// FUN_180250780 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180250780 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 * FUN_180250780(void)

{
  DWORD dwTlsIndex;
  BOOL BVar1;
  int iVar2;
  undefined8 *puVar3;
  char *lpTlsValue;
  longlong lVar4;
  char *pcVar5;
  char *local_18;
  code *local_10;
  
  if ((DAT_1808db6b8 != 0xffffffff) ||
     (BVar1 = InitOnceExecuteOnce((PINIT_ONCE)&DAT_180bbef08,FUN_1802513a0,(PVOID)0x0,(LPVOID *)0x0)
     , BVar1 != 0)) {
    dwTlsIndex = DAT_1808db6b8;
    puVar3 = TlsGetValue(DAT_1808db6b8);
    if (puVar3 != (undefined8 *)0x0) {
      return puVar3;
    }
    lpTlsValue = (char *)FUN_1805f6194(0x598,&DAT_1806898a0);
    if (lpTlsValue == (char *)0x0) {
      lpTlsValue = (char *)0x0;
    }
    else {
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
      *(undefined1 (*) [16])(lpTlsValue + 0x48) = (undefined1  [16])0x0;
      lpTlsValue[0x44] = '\0';
      lpTlsValue[0x45] = '\0';
      lpTlsValue[0x46] = '\0';
      lpTlsValue[0x47] = '\0';
      lpTlsValue[0x58] = '\0';
      lpTlsValue[0x59] = '\0';
      lpTlsValue[0x5a] = '\0';
      lpTlsValue[0x5b] = '\0';
      lpTlsValue[0x5c] = '\0';
      lpTlsValue[0x5d] = '\0';
      lpTlsValue[0x5e] = '\0';
      lpTlsValue[0x5f] = '\0';
      lpTlsValue[0x60] = '\0';
      lpTlsValue[0x61] = '\0';
      lpTlsValue[0x62] = '\0';
      lpTlsValue[99] = '\0';
      lpTlsValue[100] = '\0';
      lpTlsValue[0x65] = '\0';
      lpTlsValue[0x66] = '\0';
      lpTlsValue[0x67] = '\0';
      lpTlsValue[0x68] = '\0';
      lpTlsValue[0x69] = '\0';
      lpTlsValue[0x6a] = '\0';
      lpTlsValue[0x6b] = '\0';
      lpTlsValue[0x6c] = '\0';
      lpTlsValue[0x6d] = '\0';
      lpTlsValue[0x6e] = '\0';
      lpTlsValue[0x6f] = '\0';
      pcVar5 = lpTlsValue + 0x70;
      FUN_18063ab10(pcVar5,0,0x500);
      lVar4 = 0x20;
      do {
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
        pcVar5[0] = '\0';
        pcVar5[1] = '\0';
        pcVar5[2] = '\0';
        pcVar5[3] = '\0';
        pcVar5 = pcVar5 + 0x28;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
      lpTlsValue[0x570] = '\0';
      lpTlsValue[0x571] = '\x01';
      lpTlsValue[0x572] = '\0';
      lpTlsValue[0x573] = '\x01';
      lpTlsValue[0x578] = '\0';
      lpTlsValue[0x579] = '\0';
      lpTlsValue[0x57a] = '\0';
      lpTlsValue[0x57b] = '\0';
      lpTlsValue[0x57c] = '\0';
      lpTlsValue[0x57d] = '\0';
      lpTlsValue[0x57e] = '\0';
      lpTlsValue[0x57f] = '\0';
      lpTlsValue[0x580] = '\0';
      lpTlsValue[0x581] = '\0';
      lpTlsValue[0x582] = '\0';
      lpTlsValue[0x583] = '\0';
      lpTlsValue[0x584] = '\0';
      lpTlsValue[0x585] = '\0';
      lpTlsValue[0x586] = '\0';
      lpTlsValue[0x587] = '\0';
      lpTlsValue[0x588] = '\0';
      lpTlsValue[0x589] = '\0';
      lpTlsValue[0x58a] = '\0';
      lpTlsValue[0x58b] = '\0';
      lpTlsValue[0x58c] = '\0';
      lpTlsValue[0x58d] = '\0';
      lpTlsValue[0x58e] = '\0';
      lpTlsValue[0x58f] = '\0';
      lpTlsValue[0x590] = '\0';
      lpTlsValue[0x591] = '\0';
      lpTlsValue[0x592] = '\0';
      lpTlsValue[0x593] = '\0';
      lpTlsValue[0x594] = '\0';
      lpTlsValue[0x595] = '\0';
      lpTlsValue[0x596] = '\0';
      lpTlsValue[0x597] = '\0';
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
          return (undefined8 *)lpTlsValue;
        }
        *DAT_180b0b2f0 = lpTlsValue;
        puVar3[1] = FUN_1801b75b0;
        DAT_180b0b2f0 = DAT_180b0b2f0 + 2;
        FUN_1805f68fc(&DAT_1808d9bf0);
        return (undefined8 *)lpTlsValue;
      }
    }
    if (DAT_180c7df30 == (undefined8 *)0x0) {
      local_18 = "tier0.dll:g_pMemAlloc";
      local_10 = (code *)0x15;
      DAT_180c7df30 = (undefined8 *)FUN_180451750(&local_18);
    }
    (**(code **)(*(longlong *)*DAT_180c7df30 + 0x18))((longlong *)*DAT_180c7df30,lpTlsValue);
  }
  return (undefined8 *)0x0;
}



