// FUN_1804b2af0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804b2af0 */

void FUN_1804b2af0(int param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  int local_28;
  undefined8 local_24;
  undefined8 uStack_1c;
  
  lVar3 = DAT_180bb8ae8;
  puVar1 = (undefined8 *)(DAT_180bb8ae8 + 0xdc8 + (longlong)param_1 * 0x10);
  local_24 = *puVar1;
  uStack_1c = puVar1[1];
  local_28 = param_1;
  FUN_1804d0810(DAT_180bb8ae8 + 0x1f98,&local_28);
  if (*(int *)(lVar3 + 0x1f94) != param_1) {
    uVar2 = param_2[1];
    puVar1 = (undefined8 *)(lVar3 + 0xdc8 + (longlong)param_1 * 0x10);
    *puVar1 = *param_2;
    puVar1[1] = uVar2;
  }
  return;
}



