// FUN_18059f140 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18059f140 */

int FUN_18059f140(longlong param_1,longlong param_2,uint param_3)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  int *piVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int local_res8 [2];
  uint local_res10;
  uint local_res18;
  uint local_res20;
  
  uVar15 = param_3 * *(int *)(param_1 + 0x250);
  local_res10 = 0;
  local_res8[0] = 0;
  uVar14 = (uint)((*(longlong *)(param_2 + 0x28) - *(longlong *)(param_2 + 0x20)) + -8 >> 3);
  if (uVar14 < uVar15) {
    return 0xa1;
  }
  iVar13 = param_3 * 5;
  uVar12 = *(uint *)(param_1 + 0x284);
  local_res18 = param_3;
  if (uVar12 < (uint)(*(int *)(param_1 + 0x280) + iVar13)) {
    uVar3 = *(ulonglong *)(param_1 + 0x270);
    uVar4 = *(ulonglong *)(param_1 + 0x278);
    uVar9 = FUN_18057ac40(*(undefined8 *)(*(longlong *)(param_1 + 0x238) + 0x10),1,uVar12,
                          uVar12 + iVar13,uVar3,local_res8);
    *(ulonglong *)(param_1 + 0x270) = uVar9;
    if (local_res8[0] != 0) {
      return local_res8[0];
    }
    *(int *)(param_1 + 0x284) = *(int *)(param_1 + 0x284) + iVar13;
    *(ulonglong *)(param_1 + 0x278) = *(uint *)(param_1 + 0x280) + uVar9;
    if ((uVar3 != 0) && (uVar9 != uVar3)) {
      puVar10 = *(ulonglong **)(param_2 + 0x20);
      if (puVar10 < *(ulonglong **)(param_2 + 0x28)) {
        do {
          uVar5 = *puVar10;
          if ((uVar3 <= uVar5) && (uVar5 < uVar4)) {
            *puVar10 = uVar5 + (uVar9 - uVar3);
          }
          puVar10 = puVar10 + 1;
        } while (puVar10 < *(ulonglong **)(param_2 + 0x28));
      }
    }
  }
  uVar12 = 0;
  *(int *)(param_1 + 0x280) = *(int *)(param_1 + 0x280) + iVar13;
  iVar13 = uVar14 - uVar15;
  local_res20 = param_3 + iVar13;
  uVar14 = local_res20;
  if (param_3 != 0) {
    do {
      piVar11 = *(int **)(param_1 + 600);
      lVar1 = (ulonglong)(uVar12 + iVar13) * 8;
      iVar7 = FUN_1805a1260(param_2,*(longlong *)(param_2 + 0x20) + lVar1);
      if (1 < *(uint *)(param_1 + 0x250)) {
        uVar15 = 1;
        do {
          piVar11 = piVar11 + 1;
          iVar2 = *piVar11;
          pcVar6 = *(char **)(*(longlong *)(param_2 + 0x20) + (ulonglong)uVar14 * 8);
          if (*pcVar6 == '\x1e') {
            iVar8 = FUN_1805a1430(pcVar6,*(undefined8 *)(param_2 + 0x10),0,0);
          }
          else if (*pcVar6 == -1) {
            iVar8 = CONCAT31(CONCAT21(CONCAT11(pcVar6[1],pcVar6[2]),pcVar6[3]),pcVar6[4]);
          }
          else {
            iVar8 = FUN_1805a12f0(pcVar6,*(undefined8 *)(param_2 + 0x10));
            if (iVar8 < 0x8000) {
              if (iVar8 < -0x7fff) {
                iVar8 = -0x7fffffff;
              }
              else {
                iVar8 = iVar8 << 0x10;
              }
            }
            else {
              iVar8 = 0x7fffffff;
            }
          }
          uVar14 = uVar14 + 1;
          uVar15 = uVar15 + 1;
          iVar7 = iVar7 + (int)((ulonglong)
                                ((longlong)iVar2 * (longlong)iVar8 + 0x8000 +
                                ((longlong)iVar2 * (longlong)iVar8 >> 0x3f)) >> 0x10);
        } while (uVar15 < *(uint *)(param_1 + 0x250));
        param_3 = local_res18;
      }
      local_res10 = local_res10 + 1;
      *(undefined8 *)(lVar1 + *(longlong *)(param_2 + 0x20)) = *(undefined8 *)(param_1 + 0x278);
      **(undefined1 **)(param_1 + 0x278) = 0xff;
      *(longlong *)(param_1 + 0x278) = *(longlong *)(param_1 + 0x278) + 1;
      **(undefined1 **)(param_1 + 0x278) = (char)((uint)iVar7 >> 0x18);
      *(longlong *)(param_1 + 0x278) = *(longlong *)(param_1 + 0x278) + 1;
      **(undefined1 **)(param_1 + 0x278) = (char)((uint)iVar7 >> 0x10);
      *(longlong *)(param_1 + 0x278) = *(longlong *)(param_1 + 0x278) + 1;
      **(undefined1 **)(param_1 + 0x278) = (char)((uint)iVar7 >> 8);
      *(longlong *)(param_1 + 0x278) = *(longlong *)(param_1 + 0x278) + 1;
      **(undefined1 **)(param_1 + 0x278) = (char)iVar7;
      *(longlong *)(param_1 + 0x278) = *(longlong *)(param_1 + 0x278) + 1;
      uVar12 = local_res10;
    } while (local_res10 < param_3);
  }
  *(ulonglong *)(param_2 + 0x28) = *(longlong *)(param_2 + 0x20) + (ulonglong)local_res20 * 8;
  return local_res8[0];
}



