// FUN_1804b2a10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804b2a10 */

void FUN_1804b2a10(int param_1,uint param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  int local_28;
  undefined8 local_24;
  undefined8 uStack_1c;
  
  lVar2 = DAT_180bb8ae8;
  lVar3 = (longlong)param_1;
  puVar1 = (undefined8 *)(DAT_180bb8ae8 + 0xdc8 + lVar3 * 0x10);
  local_24 = *puVar1;
  uStack_1c = puVar1[1];
  local_28 = param_1;
  FUN_1804d0810(DAT_180bb8ae8 + 0x1f98,&local_28);
  if (*(int *)(lVar2 + 0x1f94) != param_1) {
    *(float *)(lVar2 + 0xdc8 + lVar3 * 0x10) = (float)(param_2 & 0xff) * 0.003921569;
    *(float *)(lVar2 + 0xdcc + lVar3 * 0x10) = (float)(param_2 >> 8 & 0xff) * 0.003921569;
    *(float *)(lVar2 + 0xdd0 + lVar3 * 0x10) = (float)(param_2 >> 0x10 & 0xff) * 0.003921569;
    *(float *)(lVar2 + 0xdd4 + lVar3 * 0x10) = (float)(param_2 >> 0x18) * 0.003921569;
  }
  return;
}



