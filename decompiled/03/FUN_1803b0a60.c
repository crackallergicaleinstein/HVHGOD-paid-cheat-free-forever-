// FUN_1803b0a60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803b0a60 */

undefined1 * FUN_1803b0a60(void)

{
  DWORD dwTlsIndex;
  undefined8 *puVar1;
  BOOL BVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *local_18;
  code *local_10;
  
  if ((DAT_180903d58 == 0xffffffff) &&
     (BVar2 = InitOnceExecuteOnce((PINIT_ONCE)&DAT_180c719a8,FUN_1803b0f20,(PVOID)0x0,(LPVOID *)0x0)
     , BVar2 == 0)) {
    puVar4 = (undefined1 *)0x0;
  }
  else {
    dwTlsIndex = DAT_180903d58;
    puVar4 = TlsGetValue(DAT_180903d58);
    if (puVar4 == (undefined1 *)0x0) {
      puVar5 = (undefined1 *)FUN_1805f6194(1,&DAT_1806898a0);
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = (undefined1 *)0x0;
      }
      else {
        *puVar5 = 0;
        BVar2 = TlsSetValue(dwTlsIndex,puVar5);
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
          local_10 = FUN_1803b0f10;
          puVar4 = puVar5;
          local_18 = puVar5;
          if (DAT_180b0b2f0 == DAT_180b0b2f8) {
            FUN_1801bc530(&DAT_180b0b2e8,DAT_180b0b2f0,&local_18);
            FUN_1805f68fc(&DAT_1808d9bf0);
          }
          else {
            *DAT_180b0b2f0 = puVar5;
            puVar1[1] = FUN_1803b0f10;
            DAT_180b0b2f0 = DAT_180b0b2f0 + 2;
            FUN_1805f68fc(&DAT_1808d9bf0);
          }
          goto LAB_1803b0b86;
        }
      }
      FUN_1804547d0(puVar5,1);
    }
  }
LAB_1803b0b86:
  puVar5 = &DAT_180c719b0;
  if (puVar4 != (undefined1 *)0x0) {
    puVar5 = puVar4;
  }
  return puVar5;
}



