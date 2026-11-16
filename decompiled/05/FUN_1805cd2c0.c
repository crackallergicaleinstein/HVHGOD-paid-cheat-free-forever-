// FUN_1805cd2c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805cd2c0 */

void FUN_1805cd2c0(longlong *param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 *puVar11;
  
  lVar3 = *param_1;
  uVar6 = *(uint *)(param_1 + 7);
  uVar2 = *(uint *)(lVar3 + 0x298);
  lVar4 = *(longlong *)(lVar3 + 0x290);
  uVar5 = (int)param_1[5] + 1;
  uVar9 = uVar6;
  if (uVar6 <= uVar5) {
    uVar9 = uVar5;
  }
  do {
    uVar5 = *(uint *)((longlong)param_1 + 0x3c);
    iVar7 = (int)param_1[8];
    if (uVar9 <= uVar5) {
      if (param_1[9] == 0) {
        do {
          uVar6 = iVar7 + uVar9;
          uVar8 = uVar6 & 0xffff;
          if (uVar8 < *(uint *)(lVar3 + 0x10)) {
            if (uVar8 != 0) goto LAB_1805cd3c5;
          }
          else {
            if ((int)uVar6 < 0) {
              if (-1 < (int)(iVar7 + uVar5)) {
                uVar9 = -iVar7;
                goto LAB_1805cd39c;
              }
            }
            else if (0xffff < (int)uVar6) break;
            if ((int)(iVar7 + uVar5) < 0x10000) break;
            uVar9 = 0x10000 - iVar7;
          }
LAB_1805cd39c:
          uVar9 = uVar9 + 1;
        } while (uVar9 <= uVar5);
      }
      else {
        uVar10 = param_1[9] + (ulonglong)((uVar9 - uVar6) * 2);
        if (uVar10 <= (ulonglong)uVar2 + lVar4) {
          puVar11 = (undefined1 *)(uVar10 - 1);
          do {
            puVar1 = puVar11 + 1;
            puVar11 = puVar11 + 2;
            if ((CONCAT11(*puVar1,*puVar11) != 0) &&
               (uVar8 = (uint)CONCAT11(*puVar1,*puVar11) + iVar7 & 0xffff, uVar8 != 0)) {
LAB_1805cd3c5:
              *(uint *)(param_1 + 5) = uVar9;
              *(uint *)((longlong)param_1 + 0x2c) = uVar8;
              return;
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 <= uVar5);
        }
      }
    }
    iVar7 = FUN_1805cd3f0(param_1,*(int *)((longlong)param_1 + 0x34) + 1);
    if (iVar7 < 0) {
      *(undefined4 *)(param_1 + 5) = 0xffffffff;
      *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
      return;
    }
    uVar6 = *(uint *)(param_1 + 7);
    uVar5 = uVar6;
    if (uVar6 <= uVar9) {
      uVar5 = uVar9;
    }
    uVar9 = uVar5;
  } while( true );
}



