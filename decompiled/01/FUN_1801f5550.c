// FUN_1801f5550 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801f5550 */

undefined8 *
FUN_1801f5550(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,ulonglong param_4)

{
  undefined8 *puVar1;
  size_t _Size;
  ulonglong uVar2;
  int iVar3;
  undefined8 *_Buf1;
  undefined8 *_Buf2;
  undefined8 *puVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)((DAT_180bbeb90 & param_4) * 0x10 + DAT_180bbeb78);
  puVar4 = (undefined8 *)plVar5[1];
  if (puVar4 == DAT_180bbeb68) {
    *param_2 = DAT_180bbeb68;
    param_2[1] = 0;
    return param_2;
  }
  puVar1 = (undefined8 *)*plVar5;
  _Size = param_3[2];
  uVar2 = param_3[3];
  while( true ) {
    _Buf2 = puVar4 + 2;
    if (0xf < (ulonglong)puVar4[5]) {
      _Buf2 = (undefined8 *)*_Buf2;
    }
    _Buf1 = param_3;
    if (0xf < uVar2) {
      _Buf1 = (undefined8 *)*param_3;
    }
    if ((_Size == puVar4[4]) && ((_Size == 0 || (iVar3 = memcmp(_Buf1,_Buf2,_Size), iVar3 == 0))))
    break;
    if (puVar4 == puVar1) {
      *param_2 = puVar4;
      param_2[1] = 0;
      return param_2;
    }
    puVar4 = (undefined8 *)puVar4[1];
  }
  *param_2 = *puVar4;
  param_2[1] = puVar4;
  return param_2;
}



