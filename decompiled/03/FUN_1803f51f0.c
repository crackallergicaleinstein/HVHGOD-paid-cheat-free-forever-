// FUN_1803f51f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803f51f0 */

undefined8 * FUN_1803f51f0(longlong param_1,undefined8 *param_2,int *param_3)

{
  size_t _Size;
  ulonglong uVar1;
  int iVar2;
  ULONGLONG UVar3;
  int *_Buf1;
  undefined8 *_Buf2;
  undefined8 local_28;
  undefined8 uStack_20;
  uint local_18;
  
  _Buf2 = (undefined8 *)(param_1 + 0x90);
  _Buf1 = param_3 + 4;
  if (0xf < *(ulonglong *)(param_1 + 0xa8)) {
    _Buf2 = (undefined8 *)*_Buf2;
  }
  _Size = *(size_t *)(param_3 + 8);
  if (0xf < *(ulonglong *)(param_3 + 10)) {
    _Buf1 = *(int **)_Buf1;
  }
  if (((((_Size != *(size_t *)(param_1 + 0xa0)) ||
        (((_Size != 0 && (iVar2 = memcmp(_Buf1,_Buf2,_Size), iVar2 != 0)) ||
         (param_3[2] != *(int *)(param_1 + 0x88))))) ||
       (((param_3[0x3c] != *(int *)(param_1 + 0x170) || (param_3[0x43] != *(int *)(param_1 + 0x18c))
         ) || (param_3[0xe] != *(int *)(param_1 + 0xb8))))) ||
      ((param_3[0xf] != *(int *)(param_1 + 0xbc) ||
       ((float)param_3[0x14] != *(float *)(param_1 + 0xd0))))) ||
     (((float)param_3[0x3f] != *(float *)(param_1 + 0x17c) ||
      ((float)param_3[0x40] != *(float *)(param_1 + 0x180))))) {
    *(undefined1 *)(param_2 + 2) = 0;
    return param_2;
  }
  if ((((*(longlong *)(param_1 + 0x1a8) == *(longlong *)(param_1 + 400)) &&
       (*(int *)(param_1 + 0x80) == *param_3)) && (*(int *)(param_1 + 0x84) == param_3[1])) &&
     (uVar1 = *(ulonglong *)(param_1 + 0x418), UVar3 = GetTickCount64(), UVar3 < uVar1)) {
    local_28 = *(undefined8 *)(param_1 + 0x420);
    uStack_20 = *(undefined8 *)(param_1 + 0x428);
    local_18 = *(uint *)(param_1 + 0x430);
  }
  else {
    local_18 = local_18 & 0xffffff00;
  }
  *param_2 = local_28;
  param_2[1] = uStack_20;
  *(uint *)(param_2 + 2) = local_18;
  return param_2;
}



