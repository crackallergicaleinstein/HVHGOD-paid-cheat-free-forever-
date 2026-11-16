// FUN_18031e8f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18031e8f0 */

void FUN_18031e8f0(undefined8 *param_1,int param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint *puVar7;
  
  if (((-1 < *(int *)*param_1) && (*(int *)*param_1 <= param_2 + *(int *)param_1[1])) &&
     ((*(int *)param_1[2] < 0 || (param_2 + *(int *)param_1[1] < *(int *)param_1[2])))) {
    uVar3 = *(ulonglong *)(*(longlong *)param_1[3] + 0x60);
    *(ulonglong *)(*(longlong *)param_1[3] + 0x60) = uVar3 | 4;
    puVar1 = (ulonglong *)(*(longlong *)param_1[3] + 0x68);
    *puVar1 = *puVar1 | (ulonglong)
                        (((uint)uVar3 ^ (uint)*(undefined8 *)(*(longlong *)param_1[3] + 0x60)) & 4);
    puVar4 = *(uint **)param_1[4];
    lVar5 = *(longlong *)param_1[3];
    puVar7 = (uint *)0x0;
    if (*(longlong *)(puVar4 + 10) != 0) {
      puVar7 = (uint *)(*(longlong *)(puVar4 + 10) + 0x10);
    }
    if (puVar7 != (uint *)0x0) {
      *puVar4 = *puVar4 | 2;
      uVar6 = *(undefined8 *)(lVar5 + 0x60);
      *puVar7 = *puVar7 | 1;
      uVar2 = *puVar7;
      *(undefined8 *)(puVar7 + 2) = uVar6;
      uVar6 = *(undefined8 *)(lVar5 + 0x68);
      *puVar7 = uVar2 | 2;
      *(undefined8 *)(puVar7 + 4) = uVar6;
      uVar6 = *(undefined8 *)(lVar5 + 0x70);
      *puVar7 = uVar2 | 6;
      *(undefined8 *)(puVar7 + 6) = uVar6;
    }
  }
  return;
}



