// FUN_18058b060 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18058b060 */

void FUN_18058b060(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  byte bVar8;
  longlong lVar9;
  short local_res10;
  longlong local_res18;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  uint local_40;
  
  uVar4 = *(uint *)(param_1 + 0x324);
  if (uVar4 != 7) {
    if (uVar4 != 0) {
      *(uint *)(param_1 + 0x324) = uVar4 | 1 << (*(byte *)(param_1 + 0x1f0) & 1);
    }
    if (*(short *)(param_1 + 0xea) != 0) {
      local_res18 = *(longlong *)(param_1 + 0xf0);
      local_48 = *(longlong *)(param_1 + 0x100);
      lVar9 = *(longlong *)(param_1 + 0xf8);
      if ((*(byte *)(param_1 + 0x1f0) & 1) == 0) {
        local_res18 = local_res18 + 4;
        lVar9 = lVar9 + 4;
        local_48 = local_48 + 4;
        bVar8 = 0x10;
      }
      else {
        bVar8 = 8;
      }
      uVar4 = 0;
      local_40 = (uint)*(ushort *)(param_1 + 0xe8);
      local_res10 = 0;
      local_58 = local_res18;
      local_50 = lVar9;
LAB_18058b132:
      uVar2 = (uint)*(ushort *)(*(longlong *)(param_1 + 0x110) + (longlong)local_res10 * 2) -
              (uint)*(ushort *)(param_1 + 0x118);
      uVar5 = *(ushort *)(param_1 + 0xe8) - 1;
      if (uVar2 < *(ushort *)(param_1 + 0xe8)) {
        uVar5 = uVar2;
      }
      uVar2 = uVar4;
      if (uVar4 <= uVar5) {
        uVar7 = uVar4;
        do {
          uVar2 = uVar7 + 1;
          if ((*(byte *)((ulonglong)uVar7 + *(longlong *)(param_1 + 0x108)) & bVar8) != 0) {
            uVar6 = (ulonglong)uVar7;
            if (uVar2 <= uVar5) goto LAB_18058b1a0;
            goto LAB_18058b21b;
          }
          uVar7 = uVar2;
        } while (uVar2 <= uVar5);
      }
      goto LAB_18058b26f;
    }
  }
  return;
LAB_18058b1a0:
  do {
    if ((*(byte *)((ulonglong)uVar2 + *(longlong *)(param_1 + 0x108)) & bVar8) != 0) {
      FUN_180592b70(&local_58,(int)uVar6 + 1,uVar2 - 1,uVar6,uVar2);
      uVar6 = (ulonglong)uVar2;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 <= uVar5);
  if ((uint)uVar6 == uVar7) {
LAB_18058b21b:
    uVar7 = (uint)uVar6;
    iVar3 = *(int *)(lVar9 + uVar6 * 8) - *(int *)(local_res18 + uVar6 * 8);
    if (iVar3 != 0) {
      if (uVar4 < uVar7) {
        piVar1 = (int *)((ulonglong)uVar4 * 8 + lVar9);
        uVar6 = (ulonglong)(uVar7 - uVar4);
        do {
          *piVar1 = *piVar1 + iVar3;
          piVar1 = piVar1 + 2;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      while( true ) {
        uVar7 = uVar7 + 1;
        if (uVar5 < uVar7) break;
        piVar1 = (int *)(lVar9 + (ulonglong)uVar7 * 8);
        *piVar1 = *piVar1 + iVar3;
      }
    }
  }
  else {
    FUN_180592b70(&local_58,(uint)uVar6 + 1 & 0xffff,uVar5,uVar6,uVar7);
    if (uVar7 != 0) {
      FUN_180592b70(&local_58,uVar4,uVar7 - 1,uVar6,uVar7);
    }
  }
LAB_18058b26f:
  uVar4 = uVar2;
  local_res10 = local_res10 + 1;
  if ((int)(uint)*(ushort *)(param_1 + 0xea) <= (int)local_res10) {
    return;
  }
  goto LAB_18058b132;
}



