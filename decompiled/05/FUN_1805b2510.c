// FUN_1805b2510 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805b2510 */

ulonglong FUN_1805b2510(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  ushort *puVar1;
  int *piVar2;
  ushort uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  lVar4 = *(longlong *)(param_1 + 0x18);
  if (*(uint *)(lVar4 + 8) < *(ushort *)(lVar4 + 0x62) + 1 + (uint)*(ushort *)(lVar4 + 0x1a)) {
    uVar7 = FUN_180573d00(lVar4,1,0);
    uVar8 = uVar7 & 0xffffffff;
    if ((int)uVar7 != 0) {
      return uVar7;
    }
  }
  else {
    uVar8 = 0;
  }
  lVar4 = *(longlong *)(param_1 + 0x28);
  puVar1 = (ushort *)(lVar4 + 2);
  if (*(char *)(param_1 + 0x5c) != '\0') {
    uVar3 = *puVar1;
    lVar5 = *(longlong *)(lVar4 + 0x10);
    piVar2 = (int *)(*(longlong *)(lVar4 + 8) + (ulonglong)uVar3 * 8);
    iVar6 = FUN_1805778f0(param_2);
    *piVar2 = iVar6 >> 0x10;
    iVar6 = FUN_1805778f0(param_3);
    piVar2[1] = iVar6 >> 0x10;
    *(undefined1 *)(lVar5 + (ulonglong)uVar3) = 1;
  }
  *puVar1 = *puVar1 + 1;
  return uVar8;
}



