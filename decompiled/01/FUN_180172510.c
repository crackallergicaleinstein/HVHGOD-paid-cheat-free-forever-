// FUN_180172510 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180172510 */

undefined8 * FUN_180172510(longlong param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  int iVar2;
  byte *pbVar3;
  void *_Buf1;
  
  if ((*(char *)(param_1 + 0x54c) == '\0') || (*(longlong *)(param_1 + 400) == 0)) {
    param_2[1] = 0x34;
    *param_2 = "Connect the Internal loader to access private forks.";
    return param_2;
  }
  _Buf1 = (void *)(param_1 + 0x1a0);
  if (0xf < *(ulonglong *)(param_1 + 0x1b8)) {
    _Buf1 = *(void **)(param_1 + 0x1a0);
  }
  uVar1 = *(ulonglong *)(param_1 + 0x1b0);
  if (((0x15 < uVar1) && (iVar2 = memcmp(_Buf1,"hvhgod-internal-forks-",0x16), iVar2 == 0)) &&
     (uVar1 == 0x36)) {
    pbVar3 = (byte *)((longlong)_Buf1 + 0x16);
    while( true ) {
      if (pbVar3 == (byte *)((longlong)_Buf1 + 0x36)) {
        *param_2 = 0;
        param_2[1] = 0;
        return param_2;
      }
      iVar2 = isxdigit((uint)*pbVar3);
      if (iVar2 == 0) break;
      pbVar3 = pbVar3 + 1;
    }
  }
  *param_2 = "Update the Internal loader to access private forks and migrate existing ones.";
  param_2[1] = 0x4d;
  return param_2;
}



