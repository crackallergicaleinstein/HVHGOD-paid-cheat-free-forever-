// FUN_1801ae9d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801ae9d0 */

undefined8 FUN_1801ae9d0(longlong param_1,longlong param_2,undefined8 *param_3)

{
  size_t _Size;
  int iVar1;
  undefined8 *_Buf1;
  undefined8 *_Buf2;
  
  if (param_1 != param_2) {
    param_1 = param_1 - (longlong)param_3;
    do {
      _Buf2 = param_3;
      if (0xf < (ulonglong)param_3[3]) {
        _Buf2 = (undefined8 *)*param_3;
      }
      _Buf1 = (undefined8 *)(param_1 + (longlong)param_3);
      _Size = _Buf1[2];
      if (0xf < *(ulonglong *)(param_1 + 0x18 + (longlong)param_3)) {
        _Buf1 = (undefined8 *)*_Buf1;
      }
      if (_Size != param_3[2]) {
        return 0;
      }
      if ((_Size != 0) && (iVar1 = memcmp(_Buf1,_Buf2,_Size), iVar1 != 0)) {
        return 0;
      }
      param_3 = param_3 + 4;
    } while (param_1 + (longlong)param_3 != param_2);
  }
  return 1;
}



