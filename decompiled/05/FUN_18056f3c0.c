// FUN_18056f3c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18056f3c0 */

longlong * FUN_18056f3c0(longlong param_1,longlong *param_2,undefined8 *param_3,ulonglong param_4)

{
  longlong *plVar1;
  void *_Buf1;
  size_t _Size;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)
           ((*(ulonglong *)(param_1 + 0x30) & param_4) * 0x10 + *(longlong *)(param_1 + 0x18));
  plVar3 = (longlong *)puVar4[1];
  if (plVar3 == *(longlong **)(param_1 + 8)) {
    *param_2 = (longlong)*(longlong **)(param_1 + 8);
    param_2[1] = 0;
    return param_2;
  }
  _Buf1 = (void *)*param_3;
  _Size = param_3[1];
  plVar1 = (longlong *)*puVar4;
  while ((_Size != plVar3[3] ||
         ((_Size != 0 && (iVar2 = memcmp(_Buf1,(void *)plVar3[2],_Size), iVar2 != 0))))) {
    if (plVar3 == plVar1) {
      *param_2 = (longlong)plVar3;
      param_2[1] = 0;
      return param_2;
    }
    plVar3 = (longlong *)plVar3[1];
  }
  *param_2 = *plVar3;
  param_2[1] = (longlong)plVar3;
  return param_2;
}



