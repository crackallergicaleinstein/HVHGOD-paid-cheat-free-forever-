// FUN_1804b2b70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804b2b70 */

void FUN_1804b2b70(int param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  lVar5 = DAT_180bb8ae8;
  iVar3 = *(int *)(DAT_180bb8ae8 + 0x1f98);
  if (iVar3 < param_1) {
    FUN_1804c5a40("Calling PopStyleColor() too many times!");
    iVar3 = *(int *)(lVar5 + 0x1f98);
    param_1 = iVar3;
  }
  for (; 0 < param_1; param_1 = param_1 + -1) {
    puVar1 = (undefined8 *)(*(longlong *)(lVar5 + 0x1fa0) + -0x10 + (longlong)iVar3 * 0x14);
    uVar4 = puVar1[1];
    puVar2 = (undefined8 *)
             (lVar5 + 0xdc8 +
             (longlong)*(int *)(*(longlong *)(lVar5 + 0x1fa0) + -0x14 + (longlong)iVar3 * 0x14) *
             0x10);
    *puVar2 = *puVar1;
    puVar2[1] = uVar4;
    *(int *)(lVar5 + 0x1f98) = *(int *)(lVar5 + 0x1f98) + -1;
    iVar3 = *(int *)(lVar5 + 0x1f98);
  }
  return;
}



