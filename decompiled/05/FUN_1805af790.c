// FUN_1805af790 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805af790 */

undefined8
FUN_1805af790(uint *param_1,uint param_2,undefined8 param_3,longlong param_4,undefined8 *param_5)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  
  lVar1 = *(longlong *)(param_4 + 0x28);
  uVar5 = *(int *)(lVar1 + 0x28) * 2;
  pbVar4 = (byte *)((ulonglong)(uint)(*(int *)(lVar1 + 0x28) * *(int *)(param_4 + 8)) +
                   *(longlong *)(lVar1 + 0x20));
  if (param_2 < uVar5) {
    uVar5 = param_2;
  }
  uVar3 = 0;
  if (uVar5 != 0) {
    do {
      bVar2 = (char)((*param_1 & 0x40) * 9 >> 6) + (char)*param_1;
      if ((uVar3 & 1) == 0) {
        *pbVar4 = bVar2 * '\x10';
      }
      else {
        *pbVar4 = *pbVar4 | bVar2 & 0xf;
        pbVar4 = pbVar4 + 1;
      }
      uVar3 = uVar3 + 1;
      param_1 = (uint *)((longlong)param_1 + 1);
    } while (uVar3 < uVar5);
  }
  *(int *)(param_4 + 8) = *(int *)(param_4 + 8) + 1;
  if ((uint)*(ushort *)(lVar1 + 0x12) <= *(uint *)(param_4 + 8)) {
    *param_5 = FUN_1805af820;
  }
  return 0;
}



