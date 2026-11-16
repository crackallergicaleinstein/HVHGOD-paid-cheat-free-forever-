// FUN_18031e220 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18031e220 */

void FUN_18031e220(longlong param_1,undefined8 param_2,undefined8 param_3,char param_4,
                  undefined1 param_5,char param_6,char param_7,char param_8,undefined4 param_9)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint *puVar6;
  uint *puVar7;
  
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 1;
  lVar2 = *(longlong *)(param_1 + 0x40);
  puVar7 = (uint *)0x0;
  if (lVar2 != 0) {
    puVar7 = (uint *)(lVar2 + 0x10);
  }
  if (puVar7 == (uint *)0x0) {
    return;
  }
  if (DAT_180bbeabe == '\0') {
    if ((param_7 == '\0') || (param_4 != '\0')) {
      FUN_18030b660(param_1,param_2,param_5,param_3);
      goto LAB_18031e29c;
    }
    FUN_18030bbc0(param_9,param_2,lVar2,&DAT_180b8e118,param_9);
  }
  else {
LAB_18031e29c:
    if (param_4 != '\0') goto LAB_18031e302;
  }
  if (param_8 != '\0') {
    uVar3 = *(ulonglong *)(param_1 + 0x60);
    uVar5 = uVar3 | 2;
    *(ulonglong *)(param_1 + 0x60) = uVar5;
    *(ulonglong *)(param_1 + 0x68) =
         *(ulonglong *)(param_1 + 0x68) | (ulonglong)(((uint)uVar5 ^ (uint)uVar3) & 2);
    puVar6 = (uint *)0x0;
    if (*(longlong *)(puVar7 + 10) != 0) {
      puVar6 = (uint *)(*(longlong *)(puVar7 + 10) + 0x10);
    }
    if (puVar6 != (uint *)0x0) {
      *puVar7 = *puVar7 | 2;
      uVar4 = *(undefined8 *)(param_1 + 0x60);
      *puVar6 = *puVar6 | 1;
      uVar1 = *puVar6;
      *(undefined8 *)(puVar6 + 2) = uVar4;
      uVar4 = *(undefined8 *)(param_1 + 0x68);
      *puVar6 = uVar1 | 2;
      *(undefined8 *)(puVar6 + 4) = uVar4;
      uVar4 = *(undefined8 *)(param_1 + 0x70);
      *puVar6 = uVar1 | 6;
      *(undefined8 *)(puVar6 + 6) = uVar4;
    }
  }
LAB_18031e302:
  if (param_6 != '\0') {
    uVar3 = *(ulonglong *)(param_1 + 0x60);
    uVar5 = uVar3 | 4;
    *(ulonglong *)(param_1 + 0x60) = uVar5;
    *(ulonglong *)(param_1 + 0x68) =
         *(ulonglong *)(param_1 + 0x68) | (ulonglong)(((uint)uVar5 ^ (uint)uVar3) & 4);
    puVar6 = (uint *)0x0;
    if (*(longlong *)(puVar7 + 10) != 0) {
      puVar6 = (uint *)(*(longlong *)(puVar7 + 10) + 0x10);
    }
    if (puVar6 != (uint *)0x0) {
      *puVar7 = *puVar7 | 2;
      uVar4 = *(undefined8 *)(param_1 + 0x60);
      *puVar6 = *puVar6 | 1;
      uVar1 = *puVar6;
      *(undefined8 *)(puVar6 + 2) = uVar4;
      uVar4 = *(undefined8 *)(param_1 + 0x68);
      *puVar6 = uVar1 | 2;
      *(undefined8 *)(puVar6 + 4) = uVar4;
      uVar4 = *(undefined8 *)(param_1 + 0x70);
      *puVar6 = uVar1 | 6;
      *(undefined8 *)(puVar6 + 6) = uVar4;
    }
  }
  return;
}



