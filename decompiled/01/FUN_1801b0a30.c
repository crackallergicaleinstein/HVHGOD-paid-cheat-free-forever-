// FUN_1801b0a30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801b0a30 */

longlong * FUN_1801b0a30(float *param_1,longlong *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  size_t _Size;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 *_Buf1;
  undefined8 *puVar8;
  undefined8 *_Buf2;
  undefined8 *puVar9;
  ulonglong uVar10;
  float *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  longlong local_40;
  
  puVar8 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    puVar8 = (undefined8 *)*param_3;
  }
  uVar10 = 0xcbf29ce484222325;
  uVar7 = 0;
  if (param_3[2] != 0) {
    do {
      uVar10 = (uVar10 ^ *(byte *)((longlong)puVar8 + uVar7)) * 0x100000001b3;
      uVar7 = uVar7 + 1;
    } while (uVar7 < (ulonglong)param_3[2]);
  }
  FUN_180177b00(param_1,&local_48,param_3,uVar10);
  if (local_40 != 0) {
    *param_2 = local_40;
    *(undefined1 *)(param_2 + 1) = 0;
    return param_2;
  }
  if (*(longlong *)(param_1 + 4) == 0x555555555555555) {
                    /* WARNING: Subroutine does not return */
    FUN_1805fa8b8("unordered_map/set too long");
  }
  local_50 = (undefined8 *)0x0;
  local_58 = param_1 + 2;
  FUN_1801ba720(&local_58);
  puVar8 = local_50;
  *(undefined1 (*) [16])(local_50 + 2) = (undefined1  [16])0x0;
  local_50[4] = 0;
  local_50[5] = 0;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  local_50[2] = *param_3;
  local_50[3] = uVar3;
  local_50[4] = uVar4;
  local_50[5] = uVar5;
  *(undefined1 *)param_3 = 0;
  param_3[2] = 0;
  param_3[3] = 0xf;
  if (*param_1 < (float)(*(longlong *)(param_1 + 4) + 1) / (float)*(ulonglong *)(param_1 + 0xe)) {
    FUN_1801b8aa0(param_1);
    puVar9 = *(undefined8 **)
              (*(longlong *)(param_1 + 6) + 8 + (*(ulonglong *)(param_1 + 0xc) & uVar10) * 0x10);
    local_48 = *(undefined8 **)(param_1 + 2);
    if (puVar9 != local_48) {
      puVar1 = *(undefined8 **)
                (*(longlong *)(param_1 + 6) + (*(ulonglong *)(param_1 + 0xc) & uVar10) * 0x10);
      _Size = puVar8[4];
      while( true ) {
        _Buf2 = puVar9 + 2;
        if (0xf < (ulonglong)puVar9[5]) {
          _Buf2 = (undefined8 *)*_Buf2;
        }
        _Buf1 = puVar8 + 2;
        if (0xf < (ulonglong)puVar8[5]) {
          _Buf1 = (undefined8 *)puVar8[2];
        }
        if ((_Size == puVar9[4]) &&
           ((_Size == 0 || (iVar6 = memcmp(_Buf1,_Buf2,_Size), iVar6 == 0)))) {
          local_48 = (undefined8 *)*puVar9;
          goto LAB_1801b0c06;
        }
        if (puVar9 == puVar1) break;
        puVar9 = (undefined8 *)puVar9[1];
      }
      local_48 = puVar9;
    }
  }
LAB_1801b0c06:
  puVar9 = (undefined8 *)local_48[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar8 = local_48;
  puVar8[1] = puVar9;
  *puVar9 = puVar8;
  local_48[1] = puVar8;
  uVar10 = *(ulonglong *)(param_1 + 0xc) & uVar10;
  lVar2 = *(longlong *)(param_1 + 6);
  puVar1 = *(undefined8 **)(lVar2 + uVar10 * 0x10);
  if (puVar1 == *(undefined8 **)(param_1 + 2)) {
    *(undefined8 **)(lVar2 + uVar10 * 0x10) = puVar8;
  }
  else {
    if (puVar1 == local_48) {
      *(undefined8 **)(lVar2 + uVar10 * 0x10) = puVar8;
      goto LAB_1801b0c50;
    }
    if (*(undefined8 **)(lVar2 + 8 + uVar10 * 0x10) != puVar9) goto LAB_1801b0c50;
  }
  *(undefined8 **)(lVar2 + 8 + uVar10 * 0x10) = puVar8;
LAB_1801b0c50:
  *param_2 = (longlong)puVar8;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



