// FUN_18018f9a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18018f9a0 */

undefined8 FUN_18018f9a0(longlong param_1,undefined8 *param_2)

{
  size_t sVar1;
  int iVar2;
  int iVar3;
  ulonglong *_Buf1;
  void *pvVar4;
  char *pcVar5;
  undefined8 uVar6;
  ulonglong *puVar7;
  
  iVar2 = FUN_1805f68d0();
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (*(int *)(param_1 + 0x4c) == 0x7fffffff) {
    *(undefined4 *)(param_1 + 0x4c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  pcVar5 = (char *)(param_1 + 0x358);
  iVar2 = 0;
  puVar7 = (ulonglong *)(param_1 + 0x70);
  do {
    if ((((char)puVar7[0x18] != '\0') && ((char)puVar7[0x15] != '\0')) && (*pcVar5 != '\0')) {
      pvVar4 = (void *)(param_1 + 0x238 + (longlong)iVar2 * 0x128);
      if (0xf < *(ulonglong *)(pcVar5 + -0x108)) {
        pvVar4 = *(void **)(pcVar5 + -0x120);
      }
      _Buf1 = puVar7 + -3;
      sVar1 = puVar7[-1];
      if (0xf < *puVar7) {
        _Buf1 = (ulonglong *)*_Buf1;
      }
      if (sVar1 == *(size_t *)(pcVar5 + -0x110)) {
        if (sVar1 != 0) {
          iVar3 = memcmp(_Buf1,pvVar4,sVar1);
          if (iVar3 != 0) goto LAB_18018faaa;
        }
        if ((puVar7[0x16] == *(ulonglong *)(pcVar5 + -0x58)) &&
           (puVar7[0x17] == *(ulonglong *)(pcVar5 + -0x50))) {
          pvVar4 = (void *)(param_1 + 0x310 + (longlong)iVar2 * 0x128);
          if (0xf < *(ulonglong *)(pcVar5 + -0x30)) {
            pvVar4 = *(void **)(pcVar5 + -0x48);
          }
          sVar1 = param_2[1];
          if (sVar1 == *(size_t *)(pcVar5 + -0x38)) {
            if (sVar1 != 0) {
              iVar3 = memcmp((void *)*param_2,pvVar4,sVar1);
              if (iVar3 != 0) goto LAB_18018faaa;
            }
            uVar6 = 1;
            goto LAB_18018fac5;
          }
        }
      }
    }
LAB_18018faaa:
    iVar2 = iVar2 + 1;
    puVar7 = puVar7 + 0x1c;
    pcVar5 = pcVar5 + 0x128;
    if (1 < iVar2) {
      uVar6 = 0;
LAB_18018fac5:
      FUN_1805f68fc(param_1);
      return uVar6;
    }
  } while( true );
}



