// FUN_180177b00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180177b00 */

longlong * FUN_180177b00(longlong param_1,longlong *param_2,undefined8 *param_3,ulonglong param_4)

{
  longlong *plVar1;
  size_t _Size;
  ulonglong uVar2;
  int iVar3;
  longlong *_Buf2;
  longlong *plVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)
           ((*(ulonglong *)(param_1 + 0x30) & param_4) * 0x10 + *(longlong *)(param_1 + 0x18));
  plVar4 = (longlong *)puVar5[1];
  if (plVar4 == *(longlong **)(param_1 + 8)) {
    *param_2 = (longlong)*(longlong **)(param_1 + 8);
    param_2[1] = 0;
    return param_2;
  }
  plVar1 = (longlong *)*puVar5;
  _Size = param_3[2];
  uVar2 = param_3[3];
  while( true ) {
    _Buf2 = plVar4 + 2;
    if (0xf < (ulonglong)plVar4[5]) {
      _Buf2 = (longlong *)*_Buf2;
    }
    puVar5 = param_3;
    if (0xf < uVar2) {
      puVar5 = (undefined8 *)*param_3;
    }
    if ((_Size == plVar4[4]) && ((_Size == 0 || (iVar3 = memcmp(puVar5,_Buf2,_Size), iVar3 == 0))))
    break;
    if (plVar4 == plVar1) {
      *param_2 = (longlong)plVar4;
      param_2[1] = 0;
      return param_2;
    }
    plVar4 = (longlong *)plVar4[1];
  }
  *param_2 = *plVar4;
  param_2[1] = (longlong)plVar4;
  return param_2;
}



