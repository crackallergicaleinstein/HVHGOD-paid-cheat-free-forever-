// FUN_1805acea0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805acea0 */

int FUN_1805acea0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined *puVar11;
  uint uVar12;
  int *piVar13;
  ulonglong uVar14;
  uint uVar15;
  int local_res18 [2];
  longlong local_res20;
  longlong local_48;
  
  uVar3 = *(undefined8 *)(param_2 + 0x98);
  piVar4 = *(int **)(param_2 + 0x140);
  uVar5 = 0;
  local_res20 = 0;
  local_48 = 0;
  if (*(uint *)(param_2 + 0x13c) != 0) {
    piVar13 = piVar4;
    do {
      if (*piVar13 == 1) {
        if (((uint)piVar4[(ulonglong)uVar5 * 4 + 3] < *(uint *)(param_1 + 0xc)) ||
           (iVar6 = FUN_180578910(param_1,piVar4[(ulonglong)uVar5 * 4 + 3] -
                                          *(uint *)(param_1 + 0xc)), iVar6 != 0))
        goto LAB_1805ad070;
        uVar5 = piVar4[(ulonglong)uVar5 * 4 + 2];
        local_res18[0] = 0;
        uVar7 = FUN_1805785e0(param_1,local_res18);
        if ((local_res18[0] != 0) || ((uVar7 & 0xffffff00) != 0)) goto LAB_1805acf07;
        uVar7 = uVar7 & 4;
        if (uVar7 == 0) {
          uVar8 = FUN_1805785e0(param_1,local_res18);
        }
        else {
          uVar8 = FUN_180578540();
        }
        if (local_res18[0] != 0) goto LAB_1805acf07;
        if (uVar5 / 9 < uVar8) goto LAB_1805acfbb;
        uVar15 = uVar8;
        if (0x100 < uVar8) {
          uVar15 = 0x100;
        }
        *(uint *)(param_2 + 0x19c) = uVar15;
        local_res20 = FUN_18057ac40(uVar3,0xc,0,uVar15,0,local_res18);
        if (local_res18[0] != 0) goto LAB_1805acf07;
        uVar14 = 0;
        iVar6 = local_res18[0];
        if (uVar15 != 0) goto LAB_1805ad020;
        goto LAB_1805ad058;
      }
      uVar5 = uVar5 + 1;
      piVar13 = piVar13 + 4;
    } while (uVar5 < *(uint *)(param_2 + 0x13c));
  }
  local_res18[0] = 3;
  goto LAB_1805acf07;
  while( true ) {
    uVar12 = (int)uVar14 + 1;
    uVar14 = (ulonglong)uVar12;
    local_res18[0] = 0;
    iVar6 = 0;
    if (uVar15 <= uVar12) break;
LAB_1805ad020:
    local_res18[0] = iVar6;
    puVar11 = &DAT_180673980;
    if (uVar7 == 0) {
      puVar11 = &DAT_180673968;
    }
    local_res18[0] = FUN_180578280(param_1,puVar11,local_res20 + uVar14 * 0xc);
    if (local_res18[0] != 0) goto LAB_1805acf07;
  }
LAB_1805ad058:
  local_res18[0] = FUN_180578910(param_1,(uVar8 - uVar15) * 9);
  if (local_res18[0] == 0) {
    iVar6 = 0;
    if (((uVar8 & 3) == 0) || (iVar6 = FUN_180578910(param_1,4 - (uVar8 & 3)), iVar6 == 0)) {
      local_res18[0] = iVar6;
      if (uVar7 == 0) {
        uVar7 = FUN_1805785e0(param_1,local_res18);
      }
      else {
        uVar7 = FUN_180578540();
      }
      if (local_res18[0] == 0) {
        if (uVar5 + uVar8 * -9 < uVar7) {
LAB_1805acfbb:
          local_res18[0] = 8;
        }
        else {
          uVar14 = (ulonglong)uVar7;
          if (0x1000100 < uVar7) {
            uVar14 = 0x1000100;
          }
          uVar5 = (uint)uVar14;
          local_48 = FUN_18057abe0(uVar3,uVar5 + 1,local_res18);
          if ((local_res18[0] == 0) &&
             (local_res18[0] = FUN_180578100(param_1,local_48,uVar14), local_res18[0] == 0)) {
            *(undefined1 *)(uVar14 + local_48) = 0;
            lVar9 = FUN_18057ad10(uVar3,0x18,0,uVar15,0,local_res18);
            if (local_res18[0] == 0) {
              uVar14 = 0;
              *(longlong *)(param_2 + 0x1a0) = lVar9;
              if (uVar15 != 0) {
                do {
                  lVar1 = local_res20 + uVar14 * 0xc;
                  uVar7 = *(uint *)(local_res20 + uVar14 * 0xc);
                  if (((int)uVar7 < 0) || (uVar5 < uVar7)) {
LAB_1805ad20c:
                    local_res18[0] = 9;
                    goto LAB_1805acf07;
                  }
                  puVar2 = (undefined8 *)(lVar9 + uVar14 * 0x18);
                  uVar10 = FUN_18057ade0(uVar3,(int)uVar7 + local_48,local_res18);
                  *puVar2 = uVar10;
                  if (local_res18[0] != 0) goto LAB_1805acf07;
                  *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(lVar1 + 4);
                  uVar7 = *(uint *)(lVar1 + 8);
                  if (*(char *)(lVar1 + 4) == '\0') {
                    *(uint *)(puVar2 + 2) = uVar7;
                  }
                  else {
                    if (((int)uVar7 < 0) || (uVar5 < uVar7)) goto LAB_1805ad20c;
                    uVar10 = FUN_18057ade0(uVar3,(int)uVar7 + local_48,local_res18);
                    puVar2[2] = uVar10;
                    if (local_res18[0] != 0) goto LAB_1805acf07;
                  }
                  uVar7 = (int)uVar14 + 1;
                  uVar14 = (ulonglong)uVar7;
                } while (uVar7 < uVar15);
              }
              local_res18[0] = 0;
            }
          }
        }
      }
      goto LAB_1805acf07;
    }
  }
LAB_1805ad070:
  local_res18[0] = 0x53;
LAB_1805acf07:
  FUN_18057abd0(uVar3,local_res20);
  FUN_18057abd0(uVar3,local_48);
  return local_res18[0];
}



