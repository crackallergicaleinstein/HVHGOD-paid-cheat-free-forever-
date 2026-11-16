// FUN_180177bd0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180177bd0 */

longlong * FUN_180177bd0(float *param_1,longlong *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  size_t _Size;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 *_Buf1;
  undefined8 *puVar5;
  undefined8 *_Buf2;
  undefined8 *puVar6;
  ulonglong uVar7;
  float *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  longlong local_40;
  
  puVar5 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    puVar5 = (undefined8 *)*param_3;
  }
  uVar7 = 0xcbf29ce484222325;
  uVar4 = 0;
  if (param_3[2] != 0) {
    do {
      uVar7 = (uVar7 ^ *(byte *)((longlong)puVar5 + uVar4)) * 0x100000001b3;
      uVar4 = uVar4 + 1;
    } while (uVar4 < (ulonglong)param_3[2]);
  }
  FUN_180177b00(param_1,&local_48,param_3,uVar7);
  if (local_40 != 0) {
    *param_2 = local_40;
    *(undefined1 *)(param_2 + 1) = 0;
    return param_2;
  }
  if (*(longlong *)(param_1 + 4) == 0x333333333333333) {
                    /* WARNING: Subroutine does not return */
    FUN_1805fa8b8("unordered_map/set too long");
  }
  local_50 = (undefined8 *)0x0;
  local_58 = param_1 + 2;
  FUN_180156fd0(&local_58);
  puVar5 = local_50;
  FUN_18015b360(local_50 + 2,param_3);
  *(undefined1 (*) [16])(puVar5 + 6) = (undefined1  [16])0x0;
  puVar5[8] = 0;
  puVar5[9] = 0xf;
  *(undefined1 *)(puVar5 + 6) = 0;
  if (*param_1 < (float)(*(longlong *)(param_1 + 4) + 1) / (float)*(ulonglong *)(param_1 + 0xe)) {
    FUN_180179840(param_1);
    puVar6 = *(undefined8 **)
              (*(longlong *)(param_1 + 6) + 8 + (*(ulonglong *)(param_1 + 0xc) & uVar7) * 0x10);
    local_48 = *(undefined8 **)(param_1 + 2);
    if (puVar6 != local_48) {
      puVar1 = *(undefined8 **)
                (*(longlong *)(param_1 + 6) + (*(ulonglong *)(param_1 + 0xc) & uVar7) * 0x10);
      _Size = puVar5[4];
      while( true ) {
        _Buf2 = puVar6 + 2;
        if (0xf < (ulonglong)puVar6[5]) {
          _Buf2 = (undefined8 *)*_Buf2;
        }
        _Buf1 = puVar5 + 2;
        if (0xf < (ulonglong)puVar5[5]) {
          _Buf1 = (undefined8 *)puVar5[2];
        }
        if ((_Size == puVar6[4]) &&
           ((_Size == 0 || (iVar3 = memcmp(_Buf1,_Buf2,_Size), iVar3 == 0)))) {
          local_48 = (undefined8 *)*puVar6;
          goto LAB_180177d99;
        }
        if (puVar6 == puVar1) break;
        puVar6 = (undefined8 *)puVar6[1];
      }
      local_48 = puVar6;
    }
  }
LAB_180177d99:
  puVar6 = (undefined8 *)local_48[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar5 = local_48;
  puVar5[1] = puVar6;
  *puVar6 = puVar5;
  local_48[1] = puVar5;
  uVar7 = *(ulonglong *)(param_1 + 0xc) & uVar7;
  lVar2 = *(longlong *)(param_1 + 6);
  puVar1 = *(undefined8 **)(lVar2 + uVar7 * 0x10);
  if (puVar1 == *(undefined8 **)(param_1 + 2)) {
    *(undefined8 **)(lVar2 + uVar7 * 0x10) = puVar5;
  }
  else {
    if (puVar1 == local_48) {
      *(undefined8 **)(lVar2 + uVar7 * 0x10) = puVar5;
      goto LAB_180177de3;
    }
    if (*(undefined8 **)(lVar2 + 8 + uVar7 * 0x10) != puVar6) goto LAB_180177de3;
  }
  *(undefined8 **)(lVar2 + 8 + uVar7 * 0x10) = puVar5;
LAB_180177de3:
  *param_2 = (longlong)puVar5;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



