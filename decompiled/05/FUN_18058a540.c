// FUN_18058a540 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18058a540 */

void FUN_18058a540(longlong param_1,uint *param_2)

{
  undefined4 *puVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  
  if (*(int *)(param_1 + 0x1d8) == 3) {
    *(undefined4 *)(param_1 + 0x20) = 0x9c;
    return;
  }
  puVar5 = *(undefined4 **)(param_1 + 0x230);
  if (puVar5 == (undefined4 *)0x0) {
    uVar3 = *param_2;
LAB_18058a595:
    if (*(uint *)(param_1 + 0x22c) <= *(uint *)(param_1 + 0x228)) goto LAB_18058a6b1;
    *(uint *)(param_1 + 0x228) = *(uint *)(param_1 + 0x228) + 1;
  }
  else {
    puVar1 = puVar5 + (ulonglong)*(uint *)(param_1 + 0x228) * 5;
    uVar3 = *param_2;
    for (; puVar5 < puVar1; puVar5 = puVar5 + 5) {
      if (puVar5[3] == uVar3) goto LAB_18058a5af;
    }
    if (puVar5 == puVar1) goto LAB_18058a595;
  }
LAB_18058a5af:
  if (uVar3 < 0x10000) {
    *puVar5 = *(undefined4 *)(param_1 + 0x1dc);
    puVar5[3] = uVar3 & 0xffff;
    iVar6 = *(int *)(param_1 + 0x1e8);
    *(undefined1 *)(puVar5 + 4) = 1;
    puVar5[1] = iVar6 + 1;
    if (*(uint *)(param_1 + 0x248) < uVar3) {
      *(uint *)(param_1 + 0x248) = uVar3 & 0xffff;
    }
    do {
      iVar6 = *(int *)(param_1 + 500) + *(int *)(param_1 + 0x1e8);
      *(int *)(param_1 + 0x1e8) = iVar6;
      if (*(int *)(param_1 + 0x1ec) <= iVar6) {
LAB_18058a69c:
        *(undefined4 *)(param_1 + 0x20) = 0x83;
        return;
      }
      pbVar4 = (byte *)((longlong)iVar6 + *(longlong *)(param_1 + 0x1e0));
      bVar2 = *pbVar4;
      *(byte *)(param_1 + 0x1f0) = bVar2;
      iVar7 = (int)(char)(&DAT_18066f000)[bVar2];
      *(int *)(param_1 + 500) = iVar7;
      if (iVar7 < 0) {
        if (*(int *)(param_1 + 0x1ec) <= iVar6 + 1) goto LAB_18058a69c;
        *(uint *)(param_1 + 500) = 2 - (uint)pbVar4[1] * iVar7;
      }
      if (bVar2 == 0x2c) break;
      if (bVar2 == 0x2d) {
        puVar5[2] = iVar6;
        return;
      }
    } while (bVar2 != 0x89);
    *(undefined4 *)(param_1 + 0x20) = 0x89;
    return;
  }
LAB_18058a6b1:
  *(undefined4 *)(param_1 + 0x20) = 0x8c;
  return;
}



