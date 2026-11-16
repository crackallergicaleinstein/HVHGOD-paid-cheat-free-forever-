// FUN_1801aaf40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801aaf40 */

longlong * FUN_1801aaf40(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  byte *pbVar1;
  ulonglong uVar2;
  ulonglong _Size;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 *_Buf1;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  uVar2 = param_3[3];
  _Size = param_3[2];
  puVar6 = param_3;
  if (0xf < uVar2) {
    puVar6 = (undefined8 *)*param_3;
  }
  uVar9 = 0xcbf29ce484222325;
  uVar5 = 0;
  if (_Size != 0) {
    do {
      pbVar1 = (byte *)((longlong)puVar6 + uVar5);
      uVar5 = uVar5 + 1;
      uVar9 = (uVar9 ^ *pbVar1) * 0x100000001b3;
    } while (uVar5 < _Size);
  }
  uVar9 = *(ulonglong *)(param_1 + 0x30) & uVar9;
  lVar10 = *(longlong *)(param_1 + 8);
  lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 8 + uVar9 * 0x10);
  lVar8 = 0;
  if (lVar7 != lVar10) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x18) + uVar9 * 0x10);
    while( true ) {
      puVar6 = (undefined8 *)(lVar7 + 0x10);
      if (0xf < *(ulonglong *)(lVar7 + 0x28)) {
        puVar6 = (undefined8 *)*puVar6;
      }
      _Buf1 = param_3;
      if (0xf < uVar2) {
        _Buf1 = (undefined8 *)*param_3;
      }
      if (((_Size == *(ulonglong *)(lVar7 + 0x20)) &&
          ((lVar8 = lVar7, _Size == 0 || (iVar4 = memcmp(_Buf1,puVar6,_Size), iVar4 == 0)))) ||
         (lVar8 = 0, lVar7 == lVar3)) break;
      lVar7 = *(longlong *)(lVar7 + 8);
    }
  }
  if (lVar8 != 0) {
    lVar10 = lVar8;
  }
  *param_2 = lVar10;
  return param_2;
}



