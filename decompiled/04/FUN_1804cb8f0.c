// FUN_1804cb8f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804cb8f0 */

void FUN_1804cb8f0(void)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  longlong lVar6;
  char cVar7;
  undefined8 uVar8;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  lVar6 = DAT_180bb8ae8;
  if (((*(uint *)(DAT_180bb8ae8 + 0x28) & 2) == 0) || ((*(byte *)(DAT_180bb8ae8 + 0x2c) & 1) == 0))
  {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (((*(uint *)(DAT_180bb8ae8 + 0x28) & 1) == 0) ||
     (cVar7 = FUN_1804c3390(0x20e,0,0xffffffff), cVar7 == '\0')) {
    if (!bVar5) {
      return;
    }
    uVar8 = 0x27b;
    if (*(char *)(lVar6 + 0x71) != '\0') {
      uVar8 = 0x27d;
    }
    cVar7 = FUN_1804c3390(uVar8,0,0xffffffff);
    if (cVar7 == '\0') {
      return;
    }
  }
  if ((*(byte *)(lVar6 + 0x28cc) & 0x10) != 0) {
    FUN_1804cf3e0("[nav] NavUpdateCancelRequest()\n");
  }
  if (*(int *)(lVar6 + 0x1550) != 0) {
    FUN_1804b7870(0,0);
    return;
  }
  if (*(int *)(lVar6 + 0x204c) != 0) {
    FUN_1804c9cb0(0);
    FUN_1804c8df0();
    return;
  }
  lVar2 = *(longlong *)(lVar6 + 0x2040);
  if ((((lVar2 != 0) && (lVar2 != *(longlong *)(lVar2 + 0x3d8))) &&
      (lVar3 = *(longlong *)(lVar2 + 0x3f0), (*(uint *)(lVar3 + 0x14) & 0x4000000) == 0)) &&
     (lVar4 = *(longlong *)(lVar3 + 0x3c8), lVar4 != 0)) {
    FUN_1804c8a10(lVar4,0);
    local_18 = *(float *)(lVar3 + 0x28) - *(float *)(lVar4 + 0x128);
    local_14 = *(float *)(lVar3 + 0x2c) - *(float *)(lVar4 + 300);
    local_10 = (*(float *)(lVar3 + 0x28) + *(float *)(lVar3 + 0x30)) - *(float *)(lVar4 + 0x128);
    local_c = (*(float *)(lVar3 + 0x2c) + *(float *)(lVar3 + 0x34)) - *(float *)(lVar4 + 300);
    FUN_1804c8f10(*(undefined4 *)(lVar3 + 0x90),0,0,&local_18);
    FUN_1804c8df0();
    return;
  }
  iVar1 = *(int *)(lVar6 + 0x1ff8);
  if (((0 < iVar1) &&
      (lVar3 = *(longlong *)((longlong)iVar1 * 0x38 + -0x30 + *(longlong *)(lVar6 + 0x2000)),
      lVar3 != 0)) && ((*(uint *)(lVar3 + 0x14) & 0x8000000) == 0)) {
    FUN_1804c7a50(iVar1 + -1,CONCAT71((int7)((ulonglong)lVar2 >> 8),1));
    return;
  }
  if (((*(char *)(lVar6 + 0x74) != '\0') || (*(char *)(lVar6 + 0x75) != '\0')) &&
     ((lVar2 != 0 && ((*(uint *)(lVar2 + 0x14) & 0x4000000) != 0)))) {
    *(undefined4 *)(lVar2 + 0x408) = 0;
  }
  if (((*(char *)(lVar6 + 0x74) != '\0') || (*(char *)(lVar6 + 0x75) != '\0')) &&
     (*(undefined4 *)(lVar6 + 0x203c) = 0, *(char *)(lVar6 + 0x75) != '\0')) {
    FUN_1804c8a10(0,0);
  }
  return;
}



