// FUN_1805c4660 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805c4660 */

int FUN_1805c4660(longlong param_1,short param_2,undefined8 *param_3)

{
  short sVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ushort uVar8;
  short *psVar9;
  uint uVar10;
  code *pcVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  int local_res8 [2];
  
  uVar7 = *(undefined8 *)(param_1 + 0x98);
  psVar9 = *(short **)(param_1 + 0x1e8);
  uVar10 = 0xffffffff;
  local_res8[0] = 0;
  bVar15 = false;
  uVar12 = 0xffffffff;
  uVar13 = 0xffffffff;
  uVar14 = 0xffffffff;
  uVar8 = 0;
  uVar3 = 0xffffffff;
  uVar4 = 0xffffffff;
  uVar5 = 0xffffffff;
  if (*(ushort *)(param_1 + 0x1d0) != 0) {
    do {
      uVar14 = uVar5;
      uVar10 = uVar4;
      uVar12 = uVar3;
      if ((psVar9[3] == param_2) && (psVar9[4] != 0)) {
        sVar1 = *psVar9;
        if (sVar1 == 0) {
LAB_1805c4740:
          uVar14 = (uint)uVar8;
        }
        else if (sVar1 == 1) {
          if (psVar9[2] == 0) {
            uVar12 = (uint)uVar8;
          }
          else if (psVar9[1] == 0) {
            uVar10 = (uint)uVar8;
          }
        }
        else {
          if (sVar1 == 2) goto LAB_1805c4740;
          if (((sVar1 == 3) && ((uVar13 == 0xffffffff || ((psVar9[2] & 0x3ffU) == 9)))) &&
             ((sVar1 = psVar9[1], sVar1 == 0 || ((sVar1 == 1 || (sVar1 == 10)))))) {
            uVar13 = (uint)uVar8;
            bVar15 = (psVar9[2] & 0x3ffU) == 9;
          }
        }
      }
      uVar8 = uVar8 + 1;
      psVar9 = psVar9 + 0xc;
      uVar3 = uVar12;
      uVar4 = uVar10;
      uVar5 = uVar14;
    } while (uVar8 < *(ushort *)(param_1 + 0x1d0));
  }
  if ((int)uVar12 < 0) {
    uVar12 = uVar10;
  }
  pcVar11 = (code *)0x0;
  if ((int)uVar13 < 0) {
    if (-1 < (int)uVar12) goto LAB_1805c479d;
    if (-1 < (int)uVar14) {
      psVar9 = (short *)(*(longlong *)(param_1 + 0x1e8) + (longlong)(int)uVar14 * 0x18);
      goto LAB_1805c47cf;
    }
  }
  else if (((int)uVar12 < 0) || (bVar15)) {
    psVar9 = (short *)(*(longlong *)(param_1 + 0x1e8) + (longlong)(int)uVar13 * 0x18);
    sVar1 = *(short *)(*(longlong *)(param_1 + 0x1e8) + 2 + (longlong)(int)uVar13 * 0x18);
    if ((sVar1 == 0) || ((sVar1 == 1 || (sVar1 == 10)))) {
LAB_1805c47cf:
      pcVar11 = FUN_1805cdca0;
    }
  }
  else {
LAB_1805c479d:
    pcVar11 = FUN_1805cdbf0;
    psVar9 = (short *)(*(longlong *)(param_1 + 0x1e8) + (longlong)(int)uVar12 * 0x18);
  }
  if ((psVar9 == (short *)0x0) || (pcVar11 == (code *)0x0)) {
    local_res8[0] = 0;
LAB_1805c4880:
    *param_3 = 0;
  }
  else {
    if (*(longlong *)(psVar9 + 8) == 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x200);
      uVar6 = FUN_18057ac40(uVar7,1,0,psVar9[4],0,local_res8);
      *(undefined8 *)(psVar9 + 8) = uVar6;
      if (((local_res8[0] != 0) ||
          (local_res8[0] = FUN_1805788b0(uVar2,*(undefined4 *)(psVar9 + 6)), local_res8[0] != 0)) ||
         (local_res8[0] = FUN_180578100(uVar2,*(undefined8 *)(psVar9 + 8),psVar9[4]),
         local_res8[0] != 0)) {
        FUN_18057abd0(uVar7,*(undefined8 *)(psVar9 + 8));
        psVar9[8] = 0;
        psVar9[9] = 0;
        psVar9[10] = 0;
        psVar9[0xb] = 0;
        psVar9[4] = 0;
        goto LAB_1805c4880;
      }
    }
    uVar7 = (*pcVar11)(psVar9,uVar7);
    *param_3 = uVar7;
  }
  return local_res8[0];
}



