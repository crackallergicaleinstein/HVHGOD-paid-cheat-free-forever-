// FUN_18058a8c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18058a8c0 */

void FUN_18058a8c0(longlong param_1,uint *param_2)

{
  undefined4 *puVar1;
  byte bVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  
  if (*(int *)(param_1 + 0x1d8) == 3) {
    *(undefined4 *)(param_1 + 0x20) = 0x9c;
    return;
  }
  puVar4 = *(undefined4 **)(param_1 + 0x240);
  if (puVar4 == (undefined4 *)0x0) {
LAB_18058a914:
    if (*(uint *)(param_1 + 0x23c) <= *(uint *)(param_1 + 0x238)) goto LAB_18058aa3b;
    *(uint *)(param_1 + 0x238) = *(uint *)(param_1 + 0x238) + 1;
  }
  else {
    puVar1 = puVar4 + (ulonglong)*(uint *)(param_1 + 0x238) * 5;
    if (puVar4 < puVar1) {
      do {
        if (puVar4[3] == *param_2) break;
        puVar4 = puVar4 + 5;
      } while (puVar4 < puVar1);
    }
    if (puVar4 == puVar1) goto LAB_18058a914;
  }
  if (*param_2 < 0x100) {
    puVar4[3] = *param_2 & 0xff;
    puVar4[1] = *(int *)(param_1 + 0x1e8) + 1;
    *puVar4 = *(undefined4 *)(param_1 + 0x1dc);
    *(undefined1 *)(puVar4 + 4) = 1;
    if (*(uint *)(param_1 + 0x24c) < *param_2) {
      *(uint *)(param_1 + 0x24c) = *param_2 & 0xff;
    }
    do {
      iVar5 = *(int *)(param_1 + 500) + *(int *)(param_1 + 0x1e8);
      *(int *)(param_1 + 0x1e8) = iVar5;
      if (*(int *)(param_1 + 0x1ec) <= iVar5) {
LAB_18058aa26:
        *(undefined4 *)(param_1 + 0x20) = 0x83;
        return;
      }
      pbVar3 = (byte *)((longlong)iVar5 + *(longlong *)(param_1 + 0x1e0));
      bVar2 = *pbVar3;
      *(byte *)(param_1 + 0x1f0) = bVar2;
      iVar6 = (int)(char)(&DAT_18066f000)[bVar2];
      *(int *)(param_1 + 500) = iVar6;
      if (iVar6 < 0) {
        if (*(int *)(param_1 + 0x1ec) <= iVar5 + 1) goto LAB_18058aa26;
        *(uint *)(param_1 + 500) = 2 - (uint)pbVar3[1] * iVar6;
      }
      if (bVar2 == 0x2c) break;
      if (bVar2 == 0x2d) {
        puVar4[2] = iVar5;
        return;
      }
    } while (bVar2 != 0x89);
    *(undefined4 *)(param_1 + 0x20) = 0x89;
    return;
  }
LAB_18058aa3b:
  *(undefined4 *)(param_1 + 0x20) = 0x8d;
  return;
}



