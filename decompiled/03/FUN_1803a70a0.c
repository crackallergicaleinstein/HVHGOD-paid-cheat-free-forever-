// FUN_1803a70a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803a70a0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 * FUN_1803a70a0(void)

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
  
  if ((DAT_1809031c0 != 0xffffffff) ||
     (BVar1 = InitOnceExecuteOnce((PINIT_ONCE)&DAT_180c710f8,FUN_1803a7720,(PVOID)0x0,(LPVOID *)0x0)
     , BVar1 != 0)) {
    dwTlsIndex = DAT_1809031c0;
    puVar3 = TlsGetValue(DAT_1809031c0);
    if (puVar3 != (undefined8 *)0x0) {
      return puVar3;
    }
    lpTlsValue = (char *)FUN_1805f6194(0x2b68,&DAT_1806898a0);
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
      lpTlsValue[0x60] = '\0';
      lpTlsValue[0x61] = '\0';
      lpTlsValue[0x62] = '\0';
      lpTlsValue[99] = '\0';
      *(undefined1 (*) [16])(lpTlsValue + 0x6c) = (undefined1  [16])0x0;
      lpTlsValue[0x68] = '\0';
      lpTlsValue[0x69] = '\0';
      lpTlsValue[0x6a] = '\0';
      lpTlsValue[0x6b] = '\0';
      lpTlsValue[0x7c] = '\0';
      lpTlsValue[0x7d] = '\0';
      lpTlsValue[0x7e] = '\0';
      lpTlsValue[0x7f] = '\0';
      lpTlsValue[0x80] = '\0';
      lpTlsValue[0x81] = '\0';
      lpTlsValue[0x82] = '\0';
      lpTlsValue[0x83] = '\0';
      lpTlsValue[0x84] = '\0';
      lpTlsValue[0x85] = '\0';
      lpTlsValue[0x86] = '\0';
      lpTlsValue[0x87] = '\0';
      lpTlsValue[0x88] = '\0';
      lpTlsValue[0x89] = '\0';
      lpTlsValue[0x8a] = '\0';
      lpTlsValue[0x8b] = '\0';
      lpTlsValue[0x8c] = '\0';
      lpTlsValue[0x8d] = '\0';
      lpTlsValue[0x8e] = '\0';
      lpTlsValue[0x8f] = '\0';
      lpTlsValue[0x90] = -1;
      lpTlsValue[0x91] = -1;
      lpTlsValue[0x92] = -1;
      lpTlsValue[0x93] = -1;
      lpTlsValue[0x94] = '\0';
      lpTlsValue[0x95] = '\0';
      lpTlsValue[0x96] = '\0';
      lpTlsValue[0x97] = '\0';
      lpTlsValue[0x98] = '\0';
      lpTlsValue[0x99] = '\0';
      lpTlsValue[0x9a] = '\0';
      lpTlsValue[0x9b] = '\x01';
      FUN_18063ab10(lpTlsValue + 0xa0,0,0x2900);
      FUN_180382020(lpTlsValue + 0xa0);
      pcVar5 = lpTlsValue + 0x29a0;
      FUN_18063ab10(pcVar5,0,0x140);
      lVar4 = 8;
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
      lpTlsValue[0x2ae0] = '\0';
      lpTlsValue[0x2ae1] = '\0';
      lpTlsValue[0x2ae2] = '\0';
      lpTlsValue[0x2ae3] = '\0';
      lpTlsValue[0x2ae4] = '\0';
      lpTlsValue[0x2ae5] = '\0';
      lpTlsValue[0x2ae6] = '\0';
      lpTlsValue[0x2ae7] = '\0';
      lpTlsValue[0x2ae8] = '\0';
      lpTlsValue[0x2ae9] = '\0';
      lpTlsValue[0x2aea] = '\0';
      lpTlsValue[0x2aeb] = '\0';
      lpTlsValue[0x2aec] = '\0';
      lpTlsValue[0x2aed] = '\0';
      lpTlsValue[0x2aee] = '\0';
      lpTlsValue[0x2aef] = '\0';
      lpTlsValue[0x2af0] = '\0';
      lpTlsValue[0x2af1] = '\0';
      lpTlsValue[0x2af2] = '\0';
      lpTlsValue[0x2af3] = '\0';
      lpTlsValue[0x2af4] = '\0';
      lpTlsValue[0x2af5] = '\0';
      lpTlsValue[0x2af6] = '\0';
      lpTlsValue[10999] = '\0';
      lpTlsValue[11000] = '\0';
      lpTlsValue[0x2af9] = '\0';
      lpTlsValue[0x2afa] = '\0';
      lpTlsValue[0x2afb] = '\0';
      lpTlsValue[0x2afc] = '\0';
      lpTlsValue[0x2afd] = '\0';
      lpTlsValue[0x2afe] = '\0';
      lpTlsValue[0x2aff] = '\0';
      lpTlsValue[0x2b00] = -1;
      lpTlsValue[0x2b01] = -1;
      lpTlsValue[0x2b02] = -1;
      lpTlsValue[0x2b03] = -1;
      lpTlsValue[0x2b04] = -1;
      lpTlsValue[0x2b05] = -1;
      lpTlsValue[0x2b06] = -1;
      lpTlsValue[0x2b07] = -1;
      lpTlsValue[0x2b08] = '\0';
      lpTlsValue[0x2b09] = '\0';
      lpTlsValue[0x2b0a] = '\0';
      lpTlsValue[0x2b0b] = '\0';
      lpTlsValue[0x2b0c] = '\0';
      lpTlsValue[0x2b0d] = '\0';
      lpTlsValue[0x2b0e] = '\0';
      lpTlsValue[0x2b0f] = '\0';
      lpTlsValue[0x2b10] = '\0';
      lpTlsValue[0x2b11] = '\0';
      lpTlsValue[0x2b12] = '\0';
      lpTlsValue[0x2b13] = '\0';
      lpTlsValue[0x2b14] = '\0';
      lpTlsValue[0x2b15] = '\0';
      lpTlsValue[0x2b16] = '\0';
      lpTlsValue[0x2b17] = '\0';
      lpTlsValue[0x2b18] = '\0';
      lpTlsValue[0x2b19] = '\0';
      lpTlsValue[0x2b1a] = '\0';
      lpTlsValue[0x2b1b] = '\0';
      lpTlsValue[0x2b1c] = '\0';
      lpTlsValue[0x2b1d] = '\0';
      lpTlsValue[0x2b1e] = '\0';
      lpTlsValue[0x2b1f] = '\0';
      lpTlsValue[0x2b20] = '\0';
      lpTlsValue[0x2b21] = '\0';
      lpTlsValue[0x2b22] = '\0';
      lpTlsValue[0x2b23] = '\0';
      lpTlsValue[0x2b24] = '\0';
      lpTlsValue[0x2b25] = '\0';
      lpTlsValue[0x2b26] = '\0';
      lpTlsValue[0x2b27] = '\0';
      lpTlsValue[0x2b28] = '\0';
      lpTlsValue[0x2b29] = '\0';
      lpTlsValue[0x2b2a] = '\0';
      lpTlsValue[0x2b2b] = '\0';
      lpTlsValue[0x2b2c] = '\0';
      lpTlsValue[0x2b2d] = '\0';
      lpTlsValue[0x2b2e] = '\0';
      lpTlsValue[0x2b2f] = '\0';
      lpTlsValue[0x2b30] = -1;
      lpTlsValue[0x2b31] = -1;
      lpTlsValue[0x2b32] = -1;
      lpTlsValue[0x2b33] = -1;
      lpTlsValue[0x2b34] = -1;
      lpTlsValue[0x2b35] = -1;
      lpTlsValue[0x2b36] = -1;
      lpTlsValue[0x2b37] = -1;
      lpTlsValue[0x2b38] = '\0';
      lpTlsValue[0x2b39] = '\0';
      lpTlsValue[0x2b3a] = '\0';
      lpTlsValue[0x2b3b] = '\0';
      lpTlsValue[0x2b3c] = '\0';
      lpTlsValue[0x2b3d] = '\0';
      lpTlsValue[0x2b3e] = '\0';
      lpTlsValue[0x2b3f] = '\0';
      lpTlsValue[0x2b40] = '\0';
      lpTlsValue[0x2b41] = '\0';
      lpTlsValue[0x2b42] = '\0';
      lpTlsValue[0x2b43] = '\0';
      lpTlsValue[0x2b44] = '\0';
      lpTlsValue[0x2b45] = '\0';
      lpTlsValue[0x2b46] = '\0';
      lpTlsValue[0x2b47] = '\0';
      lpTlsValue[0x2b48] = '\0';
      lpTlsValue[0x2b49] = '\0';
      lpTlsValue[0x2b4a] = '\0';
      lpTlsValue[0x2b4b] = '\0';
      lpTlsValue[0x2b4c] = '\0';
      lpTlsValue[0x2b4d] = '\0';
      lpTlsValue[0x2b4e] = '\0';
      lpTlsValue[0x2b4f] = '\0';
      lpTlsValue[0x2b50] = '\0';
      lpTlsValue[0x2b51] = '\0';
      lpTlsValue[0x2b52] = '\0';
      lpTlsValue[0x2b53] = '\0';
      lpTlsValue[0x2b54] = '\0';
      lpTlsValue[0x2b55] = '\0';
      lpTlsValue[0x2b56] = '\0';
      *(undefined1 (*) [16])(lpTlsValue + 0x2b58) = (undefined1  [16])0x0;
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
        local_10 = FUN_1801b3980;
        local_18 = lpTlsValue;
        if (DAT_180b0b2f0 == DAT_180b0b2f8) {
          FUN_1801bc530(&DAT_180b0b2e8,DAT_180b0b2f0,&local_18);
          FUN_1805f68fc(&DAT_1808d9bf0);
          return (undefined8 *)lpTlsValue;
        }
        *DAT_180b0b2f0 = lpTlsValue;
        puVar3[1] = FUN_1801b3980;
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



