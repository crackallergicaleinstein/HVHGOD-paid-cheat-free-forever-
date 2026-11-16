// FUN_1804130e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804130e0 */

ulonglong FUN_1804130e0(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  uint *puVar6;
  uint *puVar7;
  longlong lVar8;
  int iVar9;
  
  if (*(char *)((longlong)param_1 + 0xec) != '\0') {
    uVar4 = thunk_FUN_180624430((int)param_1[0x1d]);
    if (0 < (short)uVar4) {
      return uVar4 & 0xffffffffffffff00;
    }
    puVar6 = (uint *)param_1[1];
    *puVar6 = *puVar6 | 4;
    uVar1 = *(uint *)(param_1 + 0x1d);
    puVar7 = (uint *)0x0;
    if (*(longlong *)(puVar6 + 0xc) != 0) {
      puVar7 = (uint *)(*(longlong *)(puVar6 + 0xc) + 0x10);
    }
    *puVar7 = *puVar7 | 2;
    puVar7[3] = uVar1;
  }
  iVar9 = 0;
  *(ulonglong *)(*param_1 + 0x60) = *(ulonglong *)(*param_1 + 0x60) & 0xfffffffffffff7fe;
  *(ulonglong *)(*param_1 + 0x68) = *(ulonglong *)(*param_1 + 0x68) & 0xfffffffffffff7fe;
  *(ulonglong *)(*param_1 + 0x70) = *(ulonglong *)(*param_1 + 0x70) & 0xfffffffffffff7fe;
  lVar8 = *param_1;
  puVar6 = (uint *)(lVar8 + 0x20);
  *puVar6 = *puVar6 | 0x20;
  *(undefined4 *)(lVar8 + 0x4c) = 0xffffffff;
  lVar8 = *param_1;
  puVar6 = (uint *)(lVar8 + 0x20);
  *puVar6 = *puVar6 | 0x40;
  *(undefined4 *)(lVar8 + 0x50) = 0xffffffff;
  puVar6 = (uint *)param_1[1];
  if (0 < (int)puVar6[4]) {
    lVar8 = 0;
    do {
      lVar8 = lVar8 + 8;
      lVar2 = *(longlong *)(*(longlong *)(puVar6 + 6) + lVar8);
      puVar5 = (ulonglong *)&DAT_00000008;
      puVar6 = (uint *)0x0;
      if (lVar2 != 0) {
        puVar5 = (ulonglong *)(lVar2 + 0x18);
        puVar6 = (uint *)(lVar2 + 0x10);
      }
      iVar9 = iVar9 + 1;
      uVar4 = *puVar5;
      *puVar6 = *puVar6 | 1;
      *(ulonglong *)(puVar6 + 2) = uVar4 & 0xfffffffffffff7fe;
      puVar6 = (uint *)param_1[1];
    } while (iVar9 < (int)puVar6[4]);
  }
  *puVar6 = *puVar6 | 2;
  lVar8 = *(longlong *)(puVar6 + 10);
  puVar6 = (uint *)0x0;
  if (lVar8 != 0) {
    puVar6 = (uint *)(lVar8 + 0x10);
  }
  if (puVar6 != (uint *)0x0) {
    uVar3 = *(undefined8 *)(*param_1 + 0x60);
    *puVar6 = *puVar6 | 1;
    uVar1 = *puVar6;
    *(undefined8 *)(puVar6 + 2) = uVar3;
    uVar3 = *(undefined8 *)(*param_1 + 0x68);
    *puVar6 = uVar1 | 2;
    *(undefined8 *)(puVar6 + 4) = uVar3;
    lVar8 = *(longlong *)(*param_1 + 0x70);
    *(longlong *)(puVar6 + 6) = lVar8;
    *puVar6 = uVar1 | 6;
  }
  uVar4 = FUN_1803de710(lVar8,*param_1,0);
  return uVar4;
}



