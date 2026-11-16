// FUN_1805c6dd0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805c6dd0 */

int FUN_1805c6dd0(longlong param_1,uint param_2)

{
  uint *puVar1;
  undefined2 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  char *pcVar8;
  ushort uVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  ushort uVar13;
  char *pcVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int local_res8 [2];
  uint local_res18 [4];
  
  uVar17 = 0;
  puVar3 = *(undefined8 **)(param_1 + 0xe8);
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x4e8);
  uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x98);
  lVar6 = *(longlong *)(lVar4 + 8);
  uVar15 = *(ushort *)(lVar4 + 2) - 1;
  if (*(ushort *)(lVar4 + 2) != 0) {
    uVar7 = (ulonglong)(uVar15 * 0xc);
    if ((param_2 < CONCAT11(*(undefined1 *)(lVar6 + 2),*(undefined1 *)(lVar6 + 3))) ||
       ((CONCAT11(*(undefined1 *)(uVar7 + 2 + lVar6),*(undefined1 *)(uVar7 + 3 + lVar6)) <= param_2
        && (CONCAT11(*(undefined1 *)(uVar7 + 4 + lVar6),*(undefined1 *)(uVar7 + 5 + lVar6)) <
            param_2)))) {
      return 0x10;
    }
    do {
      uVar16 = uVar15 + uVar17 >> 1;
      lVar11 = (ulonglong)(uVar16 * 0xc) + lVar6;
      uVar9 = CONCAT11(*(undefined1 *)(lVar11 + 2),*(undefined1 *)(lVar11 + 3));
      uVar13 = CONCAT11(*(undefined1 *)(lVar11 + 4),*(undefined1 *)(lVar11 + 5));
      uVar10 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar11 + 6),*(undefined1 *)(lVar11 + 7)),
                                 *(undefined1 *)(lVar11 + 8)),*(undefined1 *)(lVar11 + 9));
      uVar12 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar11 + 10),*(undefined1 *)(lVar11 + 0xb)
                                         ),*(undefined1 *)(lVar11 + 0xc)),
                        *(undefined1 *)(lVar11 + 0xd));
      if (param_2 < uVar9) {
        uVar15 = uVar16 - 1;
      }
      else {
        if (param_2 <= uVar13) {
          local_res8[0] = 0;
          goto LAB_1805c6f2d;
        }
        uVar17 = uVar16 + 1;
      }
    } while (uVar17 <= uVar15);
    local_res8[0]._0_2_ = 0;
    uVar13 = (ushort)local_res8[0];
    local_res8[0]._0_2_ = 0;
    uVar12 = 0;
    uVar10 = 0;
    uVar9 = (ushort)local_res8[0];
    local_res8[0] = 0x10;
LAB_1805c6f2d:
    if (local_res8[0] != 0) {
      return local_res8[0];
    }
    uVar15 = (*(int *)(lVar4 + 0x18) + *(int *)(lVar4 + 0x10)) - (int)lVar6;
    if ((uVar10 <= uVar15) && (uVar12 <= uVar15 - uVar10)) {
      pcVar14 = (char *)((ulonglong)uVar10 + lVar6);
      pcVar8 = pcVar14;
      local_res18[0] = uVar12;
      if ((6 < uVar12) && (((*pcVar14 == '\x1f' && (pcVar14[1] == -0x75)) && (pcVar14[2] == '\b'))))
      {
        local_res18[0] =
             CONCAT31(CONCAT21(CONCAT11(pcVar14[uVar12 - 1],pcVar14[uVar12 - 2]),pcVar14[uVar12 - 3]
                              ),pcVar14[uVar12 - 4]);
        if (0x3ffffff < local_res18[0]) {
          return 10;
        }
        pcVar8 = (char *)FUN_18057abe0(uVar5,local_res18[0],local_res8);
        if (local_res8[0] != 0) {
          return local_res8[0];
        }
        local_res8[0] = FUN_1805d7720(uVar5,pcVar8,local_res18,pcVar14,uVar12);
        if (local_res8[0] != 0) {
          FUN_18057abd0(uVar5,pcVar8);
          return 8;
        }
        puVar1 = (uint *)(*(longlong *)(param_1 + 0xf0) + 8);
        *puVar1 = *puVar1 | 2;
      }
      *(uint *)(puVar3 + 1) = local_res18[0];
      *puVar3 = pcVar8;
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x80);
      uVar5 = *(undefined8 *)(lVar4 + 0x20);
      *(undefined8 *)((longlong)puVar3 + 0xc) = *(undefined8 *)(lVar4 + 0x18);
      *(undefined8 *)((longlong)puVar3 + 0x14) = uVar5;
      *(undefined8 *)((longlong)puVar3 + 0x1c) = *(undefined8 *)(lVar4 + 0x28);
      *(undefined4 *)((longlong)puVar3 + 0x24) = *(undefined4 *)(lVar4 + 0x30);
      uVar2 = *(undefined2 *)(*(longlong *)(param_1 + 8) + 0x68);
      *(undefined4 *)(puVar3 + 7) = 0;
      *(undefined4 *)((longlong)puVar3 + 0x44) = 0;
      *(undefined2 *)(puVar3 + 5) = uVar2;
      *(ushort *)((longlong)puVar3 + 0x2a) = uVar9;
      *(ushort *)((longlong)puVar3 + 0x2c) = uVar13;
      puVar3[6] = 0x10000;
      *(undefined8 *)((longlong)puVar3 + 0x3c) = 0x10000;
      *(undefined8 **)(param_1 + 0xe8) = puVar3;
      return 0;
    }
  }
  return 8;
}



