// FUN_1805a07c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805a07c0 */

ulonglong FUN_1805a07c0(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  uint *puVar1;
  byte *pbVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  byte local_res8 [8];
  
  uVar7 = 0;
  uVar9 = (ulonglong)param_2;
  if ((param_1 == (longlong *)0x0) || (*(uint *)(param_1 + 2) <= param_2)) {
    return 6;
  }
  lVar10 = param_1[4];
  uVar11 = 0;
  lVar4 = *param_1;
  if (lVar10 == 0) {
    uVar7 = FUN_1805788b0(lVar4,*(byte *)((longlong)param_1 + 0x14) * param_2 +
                                *(int *)((longlong)param_1 + 0xc) + (int)param_1[1]);
    if ((int)uVar7 != 0) {
      return uVar7;
    }
    uVar5 = 0;
    uVar8 = FUN_180578100(*param_1,local_res8,*(undefined1 *)((longlong)param_1 + 0x14));
    uVar7 = uVar8 & 0xffffffff;
    if (((int)uVar8 == 0) && ((ulonglong)*(byte *)((longlong)param_1 + 0x14) != 0)) {
      lVar10 = 0;
      do {
        pbVar2 = local_res8 + lVar10;
        lVar10 = lVar10 + 1;
        uVar5 = (uint)*pbVar2 | uVar5 << 8;
      } while (lVar10 < (longlong)(ulonglong)*(byte *)((longlong)param_1 + 0x14));
    }
    else {
      uVar5 = 0;
      if ((int)uVar8 != 0) {
        return uVar8;
      }
    }
    if (uVar5 != 0) {
      do {
        uVar12 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar12;
        uVar11 = 0;
        uVar6 = FUN_180578100(*param_1,local_res8,*(undefined1 *)((longlong)param_1 + 0x14));
        uVar7 = (ulonglong)uVar6;
        if (uVar6 == 0) {
          lVar10 = 0;
          if ((ulonglong)*(byte *)((longlong)param_1 + 0x14) != 0) {
            do {
              pbVar2 = local_res8 + lVar10;
              lVar10 = lVar10 + 1;
              uVar11 = uVar11 << 8 | (uint)*pbVar2;
            } while (lVar10 < (longlong)(ulonglong)*(byte *)((longlong)param_1 + 0x14));
          }
        }
      } while ((uVar11 == 0) && (uVar12 < *(uint *)(param_1 + 2)));
    }
  }
  else {
    uVar5 = *(uint *)(lVar10 + uVar9 * 4);
    if (uVar5 != 0) {
      do {
        uVar6 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar6;
        uVar11 = *(uint *)(lVar10 + uVar9 * 4);
        if (uVar11 != 0) break;
      } while (uVar6 < *(uint *)(param_1 + 2));
    }
  }
  iVar3 = *(int *)(lVar4 + 8);
  puVar1 = (uint *)(param_1 + 3);
  if ((iVar3 + 1U < uVar11) || ((iVar3 - uVar11) + 1 < *puVar1)) {
    uVar11 = (iVar3 - *puVar1) + 1;
  }
  if ((uVar5 == 0) || (uVar11 <= uVar5)) {
    *param_3 = 0;
    *param_4 = 0;
  }
  else {
    *param_4 = uVar11 - uVar5;
    if (param_1[5] == 0) {
      uVar9 = FUN_1805788b0(lVar4,(*puVar1 - 1) + uVar5);
      if ((int)uVar9 == 0) {
        uVar9 = FUN_180577d80(lVar4,uVar11 - uVar5,param_3);
        return uVar9;
      }
      return uVar9;
    }
    *param_3 = ((ulonglong)uVar5 - 1) + param_1[5];
  }
  return uVar7;
}



