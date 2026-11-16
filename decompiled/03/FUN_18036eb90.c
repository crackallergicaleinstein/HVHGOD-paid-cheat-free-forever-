// FUN_18036eb90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18036eb90 */

undefined4 FUN_18036eb90(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  size_t sVar3;
  size_t _Size;
  int iVar4;
  undefined8 *_Buf1;
  undefined8 *_Buf2;
  longlong lVar5;
  
  lVar1 = param_1[1];
  lVar5 = *param_1;
  if (lVar5 != lVar1) {
    uVar2 = param_2[3];
    sVar3 = param_2[2];
    do {
      _Buf2 = param_2;
      if (0xf < uVar2) {
        _Buf2 = (undefined8 *)*param_2;
      }
      _Buf1 = (undefined8 *)(lVar5 + 0x20);
      _Size = *(size_t *)(lVar5 + 0x30);
      if (0xf < *(ulonglong *)(lVar5 + 0x38)) {
        _Buf1 = (undefined8 *)*_Buf1;
      }
      if ((_Size == sVar3) && ((_Size == 0 || (iVar4 = memcmp(_Buf1,_Buf2,_Size), iVar4 == 0)))) {
        return 1;
      }
      lVar5 = lVar5 + 0x40;
    } while (lVar5 != lVar1);
  }
  return 0;
}



