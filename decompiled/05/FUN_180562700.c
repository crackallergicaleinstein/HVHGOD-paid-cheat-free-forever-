// FUN_180562700 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180562700 */

longlong * FUN_180562700(float *param_1,longlong *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined1 (*pauVar1) [16];
  undefined8 *puVar2;
  size_t _Size;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  ulonglong uVar8;
  undefined1 (*_Buf1) [16];
  undefined8 *puVar9;
  undefined8 *_Buf2;
  undefined8 *puVar10;
  ulonglong uVar11;
  float *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  longlong local_50;
  undefined1 (*local_48) [16];
  
  puVar9 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    puVar9 = (undefined8 *)*param_3;
  }
  uVar11 = 0xcbf29ce484222325;
  uVar8 = 0;
  if (param_3[2] != 0) {
    do {
      uVar11 = (uVar11 ^ *(byte *)((longlong)puVar9 + uVar8)) * 0x100000001b3;
      uVar8 = uVar8 + 1;
    } while (uVar8 < (ulonglong)param_3[2]);
  }
  FUN_180177b00(param_1,&local_58,param_3,uVar11);
  if (local_50 != 0) {
    *param_2 = local_50;
    *(undefined1 *)(param_2 + 1) = 0;
    return param_2;
  }
  local_68 = param_1 + 2;
  if (*(longlong *)(param_1 + 4) == 0x333333333333333) {
                    /* WARNING: Subroutine does not return */
    FUN_1805fa8b8("unordered_map/set too long");
  }
  local_60 = (undefined8 *)0x0;
  FUN_180156fd0(&local_68);
  puVar9 = local_60;
  pauVar1 = (undefined1 (*) [16])(local_60 + 2);
  *pauVar1 = (undefined1  [16])0x0;
  local_60[4] = 0;
  local_60[5] = 0;
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  uVar6 = param_3[3];
  *(undefined8 *)*pauVar1 = *param_3;
  local_60[3] = uVar4;
  local_60[4] = uVar5;
  local_60[5] = uVar6;
  *(undefined1 *)param_3 = 0;
  param_3[2] = 0;
  param_3[3] = 0xf;
  local_48 = pauVar1;
  FUN_18015b360(local_60 + 6,param_4);
  if (*param_1 < (float)(*(longlong *)(param_1 + 4) + 1) / (float)*(ulonglong *)(param_1 + 0xe)) {
    FUN_180179840(param_1);
    puVar10 = *(undefined8 **)
               (*(longlong *)(param_1 + 6) + 8 + (*(ulonglong *)(param_1 + 0xc) & uVar11) * 0x10);
    local_58 = *(undefined8 **)(param_1 + 2);
    if (puVar10 != *(undefined8 **)(param_1 + 2)) {
      puVar2 = *(undefined8 **)
                (*(longlong *)(param_1 + 6) + (*(ulonglong *)(param_1 + 0xc) & uVar11) * 0x10);
      _Size = puVar9[4];
      while( true ) {
        _Buf2 = puVar10 + 2;
        if (0xf < (ulonglong)puVar10[5]) {
          _Buf2 = (undefined8 *)*_Buf2;
        }
        _Buf1 = pauVar1;
        if (0xf < (ulonglong)puVar9[5]) {
          _Buf1 = *(undefined1 (**) [16])*pauVar1;
        }
        if ((_Size == puVar10[4]) &&
           ((_Size == 0 || (iVar7 = memcmp(_Buf1,_Buf2,_Size), iVar7 == 0)))) {
          local_58 = (undefined8 *)*puVar10;
          goto LAB_1805628dc;
        }
        if (puVar10 == puVar2) break;
        puVar10 = (undefined8 *)puVar10[1];
      }
      local_58 = puVar10;
    }
  }
LAB_1805628dc:
  puVar10 = (undefined8 *)local_58[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar9 = local_58;
  puVar9[1] = puVar10;
  *puVar10 = puVar9;
  local_58[1] = puVar9;
  uVar11 = *(ulonglong *)(param_1 + 0xc) & uVar11;
  lVar3 = *(longlong *)(param_1 + 6);
  puVar2 = *(undefined8 **)(lVar3 + uVar11 * 0x10);
  if (puVar2 == *(undefined8 **)(param_1 + 2)) {
    *(undefined8 **)(lVar3 + uVar11 * 0x10) = puVar9;
  }
  else {
    if (puVar2 == local_58) {
      *(undefined8 **)(lVar3 + uVar11 * 0x10) = puVar9;
      goto LAB_180562927;
    }
    if (*(undefined8 **)(lVar3 + 8 + uVar11 * 0x10) != puVar10) goto LAB_180562927;
  }
  *(undefined8 **)(lVar3 + 8 + uVar11 * 0x10) = puVar9;
LAB_180562927:
  *param_2 = (longlong)puVar9;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



