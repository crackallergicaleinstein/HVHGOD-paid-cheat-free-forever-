// FUN_1805d46c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805d46c0 */

undefined8 FUN_1805d46c0(int *param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  int iVar13;
  ulonglong uVar14;
  int local_res18;
  undefined8 *local_68;
  ulonglong local_60;
  
  if ((param_1 == (int *)0x0) || (param_2 == (undefined8 *)0x0)) {
    return 6;
  }
  iVar2 = param_1[1];
  uVar3 = *(uint *)(param_2 + 1);
  uVar14 = (ulonglong)(int)uVar3;
  if ((int)uVar3 < iVar2) {
    return 6;
  }
  iVar4 = *param_1;
  uVar10 = *(uint *)((longlong)param_2 + 0xc);
  local_60 = (ulonglong)uVar10;
  if ((int)uVar10 < iVar4) {
    return 6;
  }
  cVar1 = *(char *)((longlong)param_1 + 0x1a);
  if (cVar1 == '\0') {
    return 6;
  }
  lVar5 = *(longlong *)(param_1 + 4);
  local_68 = (undefined8 *)*param_2;
  iVar6 = (int)(uVar3 - iVar2) / 2;
  local_res18 = (int)(uVar10 - iVar4) / 2;
  if (cVar1 == '\x01') {
    if (0 < (int)uVar10) {
      iVar13 = -local_res18;
      local_res18 = iVar4 + -1 + local_res18;
      uVar12 = uVar14;
      do {
        if (0 < (int)uVar12) {
          uVar12 = uVar12 & 0xffffffff;
          iVar9 = -iVar6;
          puVar11 = local_68;
          do {
            *puVar11 = 0;
            puVar11[1] = 0;
            if ((((-1 < iVar9) && (iVar9 < iVar2)) && (-1 < iVar13)) && (iVar13 < iVar4)) {
              iVar7 = iVar13;
              if (*(char *)((longlong)param_2 + 0x65) != '\0') {
                iVar7 = local_res18;
              }
              uVar10 = iVar9 >> 0x1f & 7;
              iVar8 = iVar9 + uVar10;
              *(char *)((longlong)puVar11 + 0xc) =
                   -(('\x01' << (7 - (((byte)iVar8 & 7) - (char)uVar10) & 0x1f) &
                     *(byte *)(((iVar8 >> 3) + param_1[2] * iVar7) + lVar5)) != 0);
            }
            puVar11 = puVar11 + 2;
            iVar9 = iVar9 + 1;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
          uVar12 = (ulonglong)uVar3;
        }
        local_68 = local_68 + uVar14 * 2;
        local_res18 = local_res18 + -1;
        iVar13 = iVar13 + 1;
        local_60 = local_60 - 1;
      } while (local_60 != 0);
    }
  }
  else {
    if (cVar1 != '\x02') {
      return 7;
    }
    if (0 < (int)uVar10) {
      iVar13 = -local_res18;
      local_res18 = iVar4 + -1 + local_res18;
      do {
        iVar9 = 0;
        if (0 < (int)uVar3) {
          puVar11 = local_68;
          do {
            *puVar11 = 0;
            puVar11[1] = 0;
            if (((-1 < iVar9 - iVar6) && (iVar9 - iVar6 < iVar2)) &&
               ((-1 < iVar13 && (iVar13 < iVar4)))) {
              iVar7 = iVar13;
              if (*(char *)((longlong)param_2 + 0x65) != '\0') {
                iVar7 = local_res18;
              }
              *(undefined1 *)((longlong)puVar11 + 0xc) =
                   *(undefined1 *)(((iVar7 * iVar2 - iVar6) + iVar9) + lVar5);
            }
            iVar9 = iVar9 + 1;
            puVar11 = puVar11 + 2;
          } while (iVar9 < (int)uVar3);
        }
        iVar13 = iVar13 + 1;
        local_68 = local_68 + uVar14 * 2;
        local_res18 = local_res18 + -1;
        local_60 = local_60 - 1;
      } while (local_60 != 0);
    }
  }
  return 0;
}



