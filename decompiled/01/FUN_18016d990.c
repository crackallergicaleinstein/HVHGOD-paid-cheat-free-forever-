// FUN_18016d990 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18016d990 */

void FUN_18016d990(longlong param_1,undefined4 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  ULONGLONG UVar2;
  
  *(undefined4 *)(param_1 + 0x4a4) = param_2;
  if ((undefined8 *)(param_1 + 0x4a8) != param_3) {
    puVar1 = param_3 + 2;
    if (0xf < (ulonglong)param_3[3]) {
      param_3 = (undefined8 *)*param_3;
    }
    FUN_180113930((undefined8 *)(param_1 + 0x4a8),param_3,*puVar1);
  }
  if ((undefined8 *)(param_1 + 0x4c8) != param_4) {
    puVar1 = param_4 + 2;
    if (0xf < (ulonglong)param_4[3]) {
      param_4 = (undefined8 *)*param_4;
    }
    FUN_180113930((undefined8 *)(param_1 + 0x4c8),param_4,*puVar1);
  }
  if ((undefined8 *)(param_1 + 0x4e8) != param_5) {
    puVar1 = param_5 + 2;
    if (0xf < (ulonglong)param_5[3]) {
      param_5 = (undefined8 *)*param_5;
    }
    FUN_180113930((undefined8 *)(param_1 + 0x4e8),param_5,*puVar1);
  }
  UVar2 = GetTickCount64();
  *(ULONGLONG *)(param_1 + 0x508) = UVar2;
  return;
}



