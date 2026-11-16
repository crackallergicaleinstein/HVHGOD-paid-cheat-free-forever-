// FUN_180570550 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180570550 */

longlong * FUN_180570550(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  size_t _Size;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 *_Buf1;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  longlong local_50;
  undefined8 *local_48;
  
  puVar6 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    puVar6 = (undefined8 *)*param_3;
  }
  uVar8 = 0xcbf29ce484222325;
  uVar5 = 0;
  if (param_3[2] != 0) {
    do {
      uVar8 = (uVar8 ^ *(byte *)((longlong)puVar6 + uVar5)) * 0x100000001b3;
      uVar5 = uVar5 + 1;
    } while (uVar5 < (ulonglong)param_3[2]);
  }
  FUN_180177b00(&DAT_180cd7320,&local_58,param_3,uVar8);
  if (local_50 != 0) {
    *param_2 = local_50;
    *(undefined1 *)(param_2 + 1) = 0;
    return param_2;
  }
  if (DAT_180cd7330 == 0x333333333333333) {
                    /* WARNING: Subroutine does not return */
    FUN_1805fa8b8("unordered_map/set too long");
  }
  local_68 = &DAT_180cd7328;
  local_60 = (undefined8 *)0x0;
  FUN_180156fd0(&local_68);
  puVar3 = local_60;
  puVar6 = local_60 + 2;
  local_48 = puVar6;
  FUN_18015b360(puVar6,param_3);
  FUN_18015b360(puVar3 + 6,param_3 + 4);
  if (DAT_180cd7320 < (float)(DAT_180cd7330 + 1) / (float)DAT_180cd7358) {
    FUN_180179840(&DAT_180cd7320);
    puVar7 = *(undefined8 **)(DAT_180cd7338 + 8 + (DAT_180cd7350 & uVar8) * 0x10);
    local_58 = DAT_180cd7328;
    if (puVar7 != DAT_180cd7328) {
      puVar1 = *(undefined8 **)(DAT_180cd7338 + (DAT_180cd7350 & uVar8) * 0x10);
      uVar5 = puVar3[5];
      _Size = puVar3[4];
      local_58 = puVar7;
      while( true ) {
        puVar7 = local_58 + 2;
        if (0xf < (ulonglong)local_58[5]) {
          puVar7 = (undefined8 *)*puVar7;
        }
        _Buf1 = puVar6;
        if (0xf < uVar5) {
          _Buf1 = (undefined8 *)*puVar6;
        }
        if ((_Size == local_58[4]) &&
           ((_Size == 0 || (iVar4 = memcmp(_Buf1,puVar7,_Size), iVar4 == 0)))) break;
        if (local_58 == puVar1) goto LAB_180570749;
        local_58 = (undefined8 *)local_58[1];
      }
      local_58 = (undefined8 *)*local_58;
    }
  }
LAB_180570749:
  puVar6 = (undefined8 *)local_58[1];
  DAT_180cd7330 = DAT_180cd7330 + 1;
  *puVar3 = local_58;
  puVar3[1] = puVar6;
  *puVar6 = puVar3;
  local_58[1] = puVar3;
  lVar2 = DAT_180cd7338;
  uVar8 = DAT_180cd7350 & uVar8;
  puVar7 = *(undefined8 **)(DAT_180cd7338 + uVar8 * 0x10);
  if (puVar7 == DAT_180cd7328) {
    *(undefined8 **)(DAT_180cd7338 + uVar8 * 0x10) = puVar3;
  }
  else {
    if (puVar7 == local_58) {
      *(undefined8 **)(DAT_180cd7338 + uVar8 * 0x10) = puVar3;
      goto LAB_1805707a3;
    }
    if (*(undefined8 **)(DAT_180cd7338 + 8 + uVar8 * 0x10) != puVar6) goto LAB_1805707a3;
  }
  *(undefined8 **)(lVar2 + 8 + uVar8 * 0x10) = puVar3;
LAB_1805707a3:
  *param_2 = (longlong)puVar3;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



