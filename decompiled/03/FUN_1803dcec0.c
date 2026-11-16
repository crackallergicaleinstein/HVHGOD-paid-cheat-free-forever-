// FUN_1803dcec0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803dcec0 */

undefined8 *
FUN_1803dcec0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,ulonglong param_4)

{
  int iVar1;
  undefined8 *puVar2;
  size_t _Size;
  int iVar3;
  undefined8 *_Buf1;
  longlong *plVar4;
  undefined8 *_Buf2;
  undefined8 *puVar5;
  
  plVar4 = (longlong *)((DAT_180cc92a0 & param_4) * 0x10 + DAT_180cc9288);
  puVar5 = (undefined8 *)plVar4[1];
  if (puVar5 == DAT_180cc9278) {
    *param_2 = DAT_180cc9278;
    param_2[1] = 0;
    return param_2;
  }
  puVar2 = (undefined8 *)*plVar4;
  iVar1 = *(int *)(param_3 + 4);
  do {
    _Buf2 = puVar5 + 2;
    if (iVar1 == *(int *)(puVar5 + 6)) {
      if (0xf < (ulonglong)puVar5[5]) {
        _Buf2 = (undefined8 *)*_Buf2;
      }
      _Size = param_3[2];
      _Buf1 = param_3;
      if (0xf < (ulonglong)param_3[3]) {
        _Buf1 = (undefined8 *)*param_3;
      }
      if ((_Size == puVar5[4]) && ((_Size == 0 || (iVar3 = memcmp(_Buf1,_Buf2,_Size), iVar3 == 0))))
      {
        *param_2 = *puVar5;
        param_2[1] = puVar5;
        return param_2;
      }
    }
    if (puVar5 == puVar2) {
      *param_2 = puVar5;
      param_2[1] = 0;
      return param_2;
    }
    puVar5 = (undefined8 *)puVar5[1];
  } while( true );
}



