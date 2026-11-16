// FUN_1804cd3b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804cd3b0 */

ulonglong FUN_1804cd3b0(void)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  ulonglong in_RAX;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  if (*(char *)(DAT_180bb8ae8 + 0x2268) != '\0') {
    uVar1 = *(uint *)(DAT_180bb8ae8 + 0x1ec8);
    in_RAX = (ulonglong)uVar1;
    lVar6 = *(longlong *)(DAT_180bb8ae8 + 0x14d0);
    if (((((uVar1 & 1) != 0) && (in_RAX = 0, *(longlong *)(DAT_180bb8ae8 + 0x14e0) != 0)) &&
        (in_RAX = *(ulonglong *)(*(longlong *)(DAT_180bb8ae8 + 0x14e0) + 0x3d8),
        *(ulonglong *)(lVar6 + 0x3d8) == in_RAX)) && (*(char *)(lVar6 + 0xd1) == '\0')) {
      iVar3 = *(int *)(DAT_180bb8ae8 + 0x1ec0);
      puVar7 = (undefined8 *)(((ulonglong)(uVar1 & 2) << 4 | 0x1ecc) + DAT_180bb8ae8);
      lVar5 = DAT_180bb8ae8;
      if (iVar3 == 0) {
        in_RAX = FUN_1804c2720(lVar6,puVar7);
        iVar3 = (int)in_RAX;
        if (*(int *)(lVar5 + 0x1550) == iVar3) {
          *(int *)(lVar5 + 0x1554) = iVar3;
        }
        if (*(int *)(lVar5 + 0x1584) == iVar3) {
          *(undefined1 *)(lVar5 + 0x158d) = 1;
        }
      }
      if (*(int *)(lVar5 + 0x2284) != iVar3) {
        uVar2 = puVar7[1];
        puVar4 = (undefined8 *)(lVar5 + 0x1efc);
        if ((*(uint *)(lVar5 + 0x1ec8) & 0x200) == 0) {
          puVar4 = (undefined8 *)(lVar6 + 0x268);
        }
        *(undefined8 *)(lVar5 + 0x22b8) = *puVar7;
        *(undefined8 *)(lVar5 + 0x22c0) = uVar2;
        uVar2 = puVar4[1];
        *(undefined8 *)(lVar5 + 0x22c8) = *puVar4;
        *(undefined8 *)(lVar5 + 0x22d0) = uVar2;
        *(int *)(lVar5 + 0x22d8) = iVar3;
        *(undefined1 *)(lVar5 + 0x226a) = 1;
        return CONCAT71((int7)((ulonglong)(lVar6 + 0x268) >> 8),1);
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



