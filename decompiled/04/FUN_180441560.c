// FUN_180441560 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180441560 */

undefined8
FUN_180441560(longlong param_1,longlong param_2,byte param_3,char param_4,char param_5,
             undefined1 param_6)

{
  longlong lVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  
  uVar8 = (ulonglong)param_3;
  lVar1 = param_2 + uVar8 * 0x18;
  *(char *)(lVar1 + 0x128) = param_4;
  *(undefined1 *)(lVar1 + 0x129) = *(undefined1 *)(param_2 + 8);
  *(undefined1 *)(lVar1 + 0x119) = param_6;
  *(char *)(lVar1 + 0x118) = param_5;
  bVar2 = *(byte *)(param_2 + 8);
  if (param_4 == '\b') {
    if (0xe < bVar2) {
      return 0x80200002;
    }
    if (*(longlong *)(param_1 + 0x18) != 0) {
      bVar2 = **(byte **)(param_1 + 0x10);
      uVar6 = (ulonglong)bVar2;
      *(byte **)(param_1 + 0x10) = *(byte **)(param_1 + 0x10) + 1;
      *(char *)(param_2 + 8) = *(char *)(param_2 + 8) + '\x01';
      *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + -1;
      puVar7 = (ulonglong *)(param_2 + (uVar8 + 0xc) * 0x18);
      if (param_5 != '\0') {
        *puVar7 = (longlong)(char)bVar2;
        return 0x100000;
      }
LAB_1804416f8:
      *puVar7 = uVar6;
      return 0x100000;
    }
  }
  else if (param_4 == '\x10') {
    if (0xf < bVar2 + 2) {
      return 0x80200002;
    }
    if (1 < *(ulonglong *)(param_1 + 0x18)) {
      *(byte *)(param_2 + 8) = bVar2 + 2;
      uVar3 = **(ushort **)(param_1 + 0x10);
      uVar6 = (ulonglong)uVar3;
      *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + -2;
      *(ushort **)(param_1 + 0x10) = *(ushort **)(param_1 + 0x10) + 1;
      puVar7 = (ulonglong *)(param_2 + (uVar8 + 0xc) * 0x18);
      if (param_5 != '\0') {
        *puVar7 = (longlong)(short)uVar3;
        return 0x100000;
      }
      goto LAB_1804416f8;
    }
  }
  else if (param_4 == ' ') {
    if (0xf < bVar2 + 4) {
      return 0x80200002;
    }
    if (3 < *(ulonglong *)(param_1 + 0x18)) {
      *(byte *)(param_2 + 8) = bVar2 + 4;
      uVar4 = **(uint **)(param_1 + 0x10);
      uVar6 = (ulonglong)uVar4;
      *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + -4;
      *(uint **)(param_1 + 0x10) = *(uint **)(param_1 + 0x10) + 1;
      puVar7 = (ulonglong *)(param_2 + (uVar8 + 0xc) * 0x18);
      if (param_5 != '\0') {
        *puVar7 = (longlong)(int)uVar4;
        return 0x100000;
      }
      goto LAB_1804416f8;
    }
  }
  else {
    if (0xf < bVar2 + 8) {
      return 0x80200002;
    }
    if (7 < *(ulonglong *)(param_1 + 0x18)) {
      *(byte *)(param_2 + 8) = bVar2 + 8;
      uVar5 = **(undefined8 **)(param_1 + 0x10);
      *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + -8;
      *(undefined8 **)(param_1 + 0x10) = *(undefined8 **)(param_1 + 0x10) + 1;
      *(undefined8 *)(param_2 + 0x120 + uVar8 * 0x18) = uVar5;
      return 0x100000;
    }
  }
  return 0x80200000;
}



