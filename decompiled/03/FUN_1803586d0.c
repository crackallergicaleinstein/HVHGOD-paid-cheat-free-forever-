// FUN_1803586d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803586d0 */

undefined8 FUN_1803586d0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint *puVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  ulonglong uVar13;
  
  FUN_180358460(*param_1);
  if (0x1f < *(ulonglong *)(param_2 + 0x180)) {
    return 0;
  }
  uVar13 = 0;
  *(ulonglong *)(*(longlong *)param_1[1] + 0x60) =
       *(ulonglong *)(*(longlong *)param_1[1] + 0x60) & 0xfffffffffffffffd;
  *(ulonglong *)(*(longlong *)param_1[1] + 0x68) =
       *(ulonglong *)(*(longlong *)param_1[1] + 0x68) & 0xfffffffffffffffd;
  *(ulonglong *)(*(longlong *)param_1[1] + 0x70) =
       *(ulonglong *)(*(longlong *)param_1[1] + 0x70) & 0xfffffffffffffffd;
  lVar7 = *(longlong *)param_1[2];
  *(undefined4 *)(lVar7 + 8) = 0;
  puVar10 = (uint *)FUN_1803dfb00(lVar7,*(undefined8 *)param_1[2]);
  if (puVar10 == (uint *)0x0) {
    FUN_180358460(*param_1);
    return 0;
  }
  *puVar10 = *puVar10 | 7;
  puVar10[2] = 2;
  puVar10[3] = 0;
  *(undefined1 *)(puVar10 + 4) = 0;
  puVar10[5] = 0;
  if (*(longlong *)(param_2 + 0x180) != 0) {
    puVar12 = (undefined1 *)(param_2 + 9);
    do {
      puVar10 = (uint *)FUN_1803dfb00();
      if (puVar10 == (uint *)0x0) {
        FUN_180358460(*param_1);
        return 0;
      }
      iVar4 = *(int *)(puVar12 + -9);
      if (iVar4 < 0) {
        cVar2 = puVar12[-1];
        uVar11 = 4;
        *puVar10 = *puVar10 | 1;
        uVar5 = *puVar10;
        if (cVar2 == '\x01') {
          uVar11 = 2;
        }
        *(undefined8 *)(puVar10 + 2) = uVar11;
        uVar3 = *puVar12;
        *puVar10 = uVar5 | 2;
        *(undefined1 *)(puVar10 + 4) = uVar3;
        uVar6 = *(uint *)(puVar12 + -5);
        *puVar10 = uVar5 & 0xffffffe7 | 6;
        puVar10[5] = uVar6;
      }
      else {
        lVar7 = param_1[3];
        puVar1 = (undefined8 *)(lVar7 + (longlong)iVar4 * 0x28);
        uVar11 = puVar1[1];
        uVar8 = puVar1[2];
        uVar9 = puVar1[3];
        *(undefined8 *)puVar10 = *puVar1;
        *(undefined8 *)(puVar10 + 2) = uVar11;
        *(undefined8 *)(puVar10 + 4) = uVar8;
        *(undefined8 *)(puVar10 + 6) = uVar9;
        *(undefined8 *)(puVar10 + 8) = *(undefined8 *)(lVar7 + 0x20 + (longlong)iVar4 * 0x28);
        *puVar10 = *puVar10 | 1;
        *(ulonglong *)(puVar10 + 2) = *(ulonglong *)(puVar10 + 2) & 0xfffffffffffffff9;
      }
      uVar13 = uVar13 + 1;
      puVar12 = puVar12 + 0xc;
    } while (uVar13 < *(ulonglong *)(param_2 + 0x180));
  }
  return 1;
}



