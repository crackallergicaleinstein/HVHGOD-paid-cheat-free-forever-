// FUN_1800b5ac0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800b5ac0 */

void FUN_1800b5ac0(longlong param_1,byte param_2,int param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  uint7 uStack_1f;
  
  if (param_3 == 0) {
    lVar2 = 0x5a0;
    if (param_2 == 0) {
      lVar2 = 0x530;
    }
    puVar1 = (undefined8 *)(lVar2 + 8 + param_1);
    *puVar1 = 0;
    puVar1[1] = (ulonglong)uStack_1f << 8;
    *(undefined1 *)(lVar2 + param_1) = 0;
    *(undefined8 *)(lVar2 + 0x18 + param_1) = 0;
    lVar2 = 0x598;
    if (param_2 == 0) {
      lVar2 = 0x52c;
    }
    *(uint *)(lVar2 + param_1) = (uint)param_2 * 0x40 + 0xb;
    return;
  }
  lVar2 = (longlong)(param_3 + -1);
  if (param_2 != 0) {
    lVar2 = lVar2 + 3;
  }
  lVar2 = lVar2 * 0x70;
  puVar1 = (undefined8 *)(lVar2 + 8 + param_1);
  *puVar1 = 0;
  puVar1[1] = (ulonglong)uStack_1f << 8;
  *(undefined8 *)(lVar2 + 0x18 + param_1) = 0;
  *(undefined1 *)(lVar2 + param_1) = 0;
  lVar2 = param_1 + 0x150;
  if (param_2 == 0) {
    lVar2 = param_1;
  }
  *(uint *)(lVar2 + 0x68 + (longlong)(param_3 + -1) * 0x70) = (uint)param_2 * 0x40 + 0xb;
  return;
}



