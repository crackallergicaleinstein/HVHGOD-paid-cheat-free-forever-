// FUN_1803e9030 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803e9030 */

uint FUN_1803e9030(longlong *param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  
  lVar3 = *param_1;
  uVar9 = (ulonglong)((**(int **)param_1[2] + 2U) % 3);
  uVar7 = (**(int **)param_1[2] + 1U) % 3;
  bVar1 = *(byte *)(uVar9 + lVar3);
  bVar5 = *(byte *)((ulonglong)uVar7 + lVar3);
  if (bVar5 < bVar1) {
    bVar5 = bVar1;
  }
  uVar4 = (uint)bVar5 * 2;
  bVar1 = *(byte *)((ulonglong)*(uint *)param_1[1] + lVar3);
  if (uVar4 < bVar1) {
    uVar8 = (uint)*(byte *)((ulonglong)*(uint *)param_1[1] + param_2);
    if ((float)bVar1 * 0.45 <= (float)uVar8) {
      bVar2 = *(byte *)(uVar9 + param_2);
      bVar6 = *(byte *)((ulonglong)uVar7 + param_2);
      if (bVar6 < bVar2) {
        bVar6 = bVar2;
      }
      uVar4 = 0;
      if ((float)(int)((uint)bVar1 - (uint)bVar5) * 0.25 <= (float)(int)(uVar8 - bVar6)) {
        return 1;
      }
    }
  }
  return uVar4 & 0xffffff00;
}



