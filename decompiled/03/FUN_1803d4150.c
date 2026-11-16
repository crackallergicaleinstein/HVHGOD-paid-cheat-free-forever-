// FUN_1803d4150 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803d4150 */

longlong FUN_1803d4150(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  bool bVar2;
  uint uVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  longlong local_res8;
  uint local_res10 [2];
  
  lVar9 = DAT_180c71e90;
  if (param_2 - 1 < 0xfffffffe) {
    uVar10 = param_2 & 0x7fff;
    if (uVar10 < 0x4000) {
      uVar8 = (ulonglong)uVar10;
      uVar1 = (&DAT_180b0e108)[uVar8 * 4];
      if (((uVar1 & 1) == 0) && ((&DAT_180b0e110)[uVar8 * 8] == param_2)) {
        if (((&DAT_180b0e108)[uVar8 * 4] == uVar1) &&
           ((((&DAT_180b0e110)[uVar8 * 8] == param_2 && ((&DAT_180b0e118)[uVar8 * 4] != 0)) &&
            ((&DAT_180b0e120)[uVar8 * 8] != 0)))) {
          return (&DAT_180b0e118)[uVar8 * 4];
        }
      }
    }
    local_res8 = param_1;
    lVar5 = FUN_18017ea70();
    *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
    if (lVar9 == 0) {
      bVar2 = false;
    }
    else {
      local_res8 = 0;
      cVar4 = FUN_1804514f0(&local_res8,lVar9,8);
      if (cVar4 == '\0') {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
    }
    lVar9 = local_res8;
    lVar5 = FUN_18017ea70();
    if (*(int *)(lVar5 + 4) != 0) {
      *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + -1;
    }
    if (((bVar2) && (lVar9 != 0)) && (uVar10 != 0x7fff)) {
      lVar5 = FUN_18017ea70();
      *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
      lVar9 = lVar9 + (ulonglong)(uVar10 >> 9) * 8 + 0x10;
      if (lVar9 == 0) {
        bVar2 = false;
      }
      else {
        local_res8 = 0;
        cVar4 = FUN_1804514f0(&local_res8,lVar9,8);
        if (cVar4 == '\0') {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
      }
      lVar9 = local_res8;
      lVar5 = FUN_18017ea70();
      if (*(int *)(lVar5 + 4) != 0) {
        *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + -1;
      }
      if ((bVar2) && (lVar9 - 1U < 0xfffffffffffffffe)) {
        lVar5 = FUN_18017ea70();
        *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
        lVar9 = (ulonglong)(param_2 & 0x1ff) * 0x70 + lVar9;
        if (lVar9 == 0) {
          bVar2 = false;
        }
        else {
          local_res8 = 0;
          cVar4 = FUN_1804514f0(&local_res8,lVar9,8);
          if (cVar4 == '\0') {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
        }
        lVar5 = local_res8;
        lVar6 = FUN_18017ea70();
        if (*(int *)(lVar6 + 4) != 0) {
          *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
        }
        if ((bVar2) && (lVar5 - 0x10000U < 0xfffffffffffeffff)) {
          lVar6 = FUN_18017ea70();
          *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
          bVar2 = false;
          if (lVar9 + 0x10 != 0) {
            local_res10[0] = 0;
            cVar4 = FUN_1804514f0(local_res10,lVar9 + 0x10,4);
            if (cVar4 == '\0') {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
          }
          uVar3 = local_res10[0];
          lVar6 = FUN_18017ea70();
          if (*(int *)(lVar6 + 4) != 0) {
            *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
          }
          uVar11 = 0xffffffff;
          if (bVar2) {
            uVar11 = uVar3;
          }
          lVar6 = FUN_18017ea70();
          *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
          if (lVar5 + 0x10 == 0) {
            bVar2 = false;
          }
          else {
            local_res8 = 0;
            cVar4 = FUN_1804514f0(&local_res8,lVar5 + 0x10,8);
            if (cVar4 == '\0') {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
          }
          lVar6 = local_res8;
          lVar7 = FUN_18017ea70();
          if (*(int *)(lVar7 + 4) != 0) {
            *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
          }
          if (!bVar2) {
            lVar6 = 0;
          }
          if (((lVar6 == lVar9) && ((uVar11 & 0x7fff) == uVar10)) &&
             (((param_2 & 0xffff8000) == 0 || (uVar11 == param_2)))) {
            return lVar5;
          }
        }
      }
    }
  }
  return 0;
}



