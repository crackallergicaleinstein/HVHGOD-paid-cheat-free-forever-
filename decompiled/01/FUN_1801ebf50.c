// FUN_1801ebf50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801ebf50 */

undefined8 FUN_1801ebf50(undefined8 param_1,undefined8 *param_2)

{
  undefined *_Size;
  void *_Buf2;
  undefined *puVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined *local_c8;
  undefined8 local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  char *local_a8;
  undefined8 local_a0;
  undefined *local_98;
  undefined8 local_90;
  char *local_88;
  undefined8 local_80;
  char *local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  undefined1 *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  char *local_18;
  undefined *local_10;
  
  _Buf2 = (void *)*param_2;
  puVar1 = (undefined *)param_2[1];
  local_c0 = 4;
  local_c8 = &DAT_1807cc058;
  ppuVar3 = &local_c8;
  local_b0 = 3;
  local_b8 = &DAT_1807cc054;
  local_a8 = "hands";
  local_98 = &DAT_1807cc060;
  local_88 = "weapons";
  local_78 = "weapon";
  local_68 = "props";
  local_58 = &DAT_1807cc08c;
  local_48 = "viewmodel";
  local_38 = &DAT_1806bbee0;
  local_28 = "materials";
  local_18 = "particles";
  local_a0 = 5;
  local_90 = 4;
  local_80 = 7;
  local_70 = 6;
  local_60 = 5;
  local_50 = 4;
  local_40 = 9;
  local_30 = 1;
  local_20 = 9;
  local_10 = (undefined *)0x9;
  do {
    _Size = ppuVar3[1];
    if (_Size == puVar1) {
      if (_Size == (undefined *)0x0) break;
      iVar2 = memcmp(*ppuVar3,_Buf2,(size_t)_Size);
      if (iVar2 == 0) break;
    }
    ppuVar3 = ppuVar3 + 2;
  } while (ppuVar3 != (undefined **)((longlong)register0x00000020 + -8));
  return CONCAT71((int7)((ulonglong)((longlong)register0x00000020 + -8) >> 8),
                  ppuVar3 != (undefined **)((longlong)register0x00000020 + -8));
}



