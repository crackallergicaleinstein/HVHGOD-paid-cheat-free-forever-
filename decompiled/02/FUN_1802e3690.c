// FUN_1802e3690 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802e3690 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_1802e3690(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  size_t _Size;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *_Buf1;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  longlong local_40;
  
  local_58 = &DAT_180cd3e48;
  uVar6 = 0;
  local_50 = (undefined8 *)0x0;
  FUN_1801ba720(&local_58);
  puVar3 = local_50;
  lVar1 = *param_3;
  *(undefined1 (*) [16])(local_50 + 2) = (undefined1  [16])0x0;
  local_50[4] = 0;
  local_50[5] = 0;
  lVar8 = -1;
  do {
    lVar8 = lVar8 + 1;
  } while (*(char *)(lVar1 + lVar8) != '\0');
  FUN_18015ba30(local_50 + 2);
  puVar5 = puVar3 + 2;
  if (0xf < (ulonglong)puVar3[5]) {
    puVar5 = (undefined8 *)puVar3[2];
  }
  uVar7 = 0xcbf29ce484222325;
  if (puVar3[4] != 0) {
    do {
      uVar7 = (uVar7 ^ *(byte *)((longlong)puVar5 + uVar6)) * 0x100000001b3;
      uVar6 = uVar6 + 1;
    } while (uVar6 < (ulonglong)puVar3[4]);
  }
  FUN_180177b00(&DAT_180cd3e40,&local_48,puVar3 + 2,uVar7);
  if (local_40 != 0) {
    *param_2 = local_40;
    *(undefined1 *)(param_2 + 1) = 0;
    if (puVar3 == (undefined8 *)0x0) {
      return param_2;
    }
    FUN_18015c010(puVar3 + 2);
    FUN_1804547d0(puVar3,0x30);
    return param_2;
  }
  if (DAT_180cd3e50 == 0x555555555555555) {
                    /* WARNING: Subroutine does not return */
    FUN_1805fa8b8("unordered_map/set too long");
  }
  if (DAT_180cd3e40 < (float)(DAT_180cd3e50 + 1) / (float)DAT_180cd3e78) {
    FUN_1801b8aa0(&DAT_180cd3e40);
    puVar5 = *(undefined8 **)(DAT_180cd3e58 + 8 + (uVar7 & _DAT_180cd3e70) * 0x10);
    local_48 = DAT_180cd3e48;
    if (puVar5 != DAT_180cd3e48) {
      puVar2 = *(undefined8 **)(DAT_180cd3e58 + (uVar7 & _DAT_180cd3e70) * 0x10);
      uVar6 = puVar3[5];
      _Size = puVar3[4];
      local_48 = puVar5;
      while( true ) {
        puVar5 = local_48 + 2;
        if (0xf < (ulonglong)local_48[5]) {
          puVar5 = (undefined8 *)*puVar5;
        }
        _Buf1 = puVar3 + 2;
        if (0xf < uVar6) {
          _Buf1 = (undefined8 *)puVar3[2];
        }
        if ((_Size == local_48[4]) &&
           ((_Size == 0 || (iVar4 = memcmp(_Buf1,puVar5,_Size), iVar4 == 0)))) break;
        if (local_48 == puVar2) goto LAB_1802e38ad;
        local_48 = (undefined8 *)local_48[1];
      }
      local_48 = (undefined8 *)*local_48;
    }
  }
LAB_1802e38ad:
  puVar5 = (undefined8 *)local_48[1];
  DAT_180cd3e50 = DAT_180cd3e50 + 1;
  *puVar3 = local_48;
  puVar3[1] = puVar5;
  *puVar5 = puVar3;
  local_48[1] = puVar3;
  lVar1 = DAT_180cd3e58;
  uVar7 = uVar7 & _DAT_180cd3e70;
  puVar2 = *(undefined8 **)(DAT_180cd3e58 + uVar7 * 0x10);
  if (puVar2 == DAT_180cd3e48) {
    *(undefined8 **)(DAT_180cd3e58 + uVar7 * 0x10) = puVar3;
  }
  else {
    if (puVar2 == local_48) {
      *(undefined8 **)(DAT_180cd3e58 + uVar7 * 0x10) = puVar3;
      goto LAB_1802e3904;
    }
    if (*(undefined8 **)(DAT_180cd3e58 + 8 + uVar7 * 0x10) != puVar5) goto LAB_1802e3904;
  }
  *(undefined8 **)(lVar1 + 8 + uVar7 * 0x10) = puVar3;
LAB_1802e3904:
  *param_2 = (longlong)puVar3;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



