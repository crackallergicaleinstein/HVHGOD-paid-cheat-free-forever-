// FUN_1805c51d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805c51d0 */

int FUN_1805c51d0(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined1 *puVar4;
  int iVar5;
  short *psVar6;
  uint uVar7;
  uint uVar8;
  undefined1 *puVar9;
  short sVar10;
  uint uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  uint uVar14;
  uint uVar15;
  undefined8 uVar16;
  uint local_res8 [2];
  undefined8 local_res10;
  int local_res18 [2];
  int local_res20;
  undefined1 *local_68;
  undefined8 local_60;
  longlong local_58;
  
  uVar16 = *(undefined8 *)(param_1 + 0x98);
  psVar6 = (short *)0x0;
  local_68 = (undefined1 *)0x0;
  if (*(longlong *)(param_1 + 0x4d8) == 0) {
    return 3;
  }
  local_res10 = param_2;
  local_60 = uVar16;
  local_res18[0] = (**(code **)(param_1 + 0x2a0))(param_1,0x434f4c52,param_2,local_res8);
  if ((local_res18[0] != 0) || (local_res20 = FUN_1805780f0(param_2), local_res8[0] < 0xe))
  goto LAB_1805c5669;
  local_res18[0] = FUN_180577d80(param_2,local_res8[0],&local_68);
  puVar4 = local_68;
  if ((local_res18[0] != 0) ||
     (psVar6 = (short *)FUN_18057aad0(uVar16,0x90,local_res18), local_res18[0] != 0))
  goto LAB_1805c5669;
  sVar10 = CONCAT11(*puVar4,puVar4[1]);
  *psVar6 = sVar10;
  if ((sVar10 == 0) || (sVar10 == 1)) {
    uVar1 = puVar4[3];
    uVar2 = puVar4[2];
    psVar6[1] = CONCAT11(uVar2,uVar1);
    uVar14 = CONCAT31(CONCAT21(CONCAT11(puVar4[4],puVar4[5]),puVar4[6]),puVar4[7]);
    if ((uVar14 < local_res8[0]) && ((uint)CONCAT11(uVar2,uVar1) <= (local_res8[0] - uVar14) / 6)) {
      uVar1 = puVar4[0xc];
      uVar15 = CONCAT31(CONCAT21(CONCAT11(puVar4[8],puVar4[9]),puVar4[10]),puVar4[0xb]);
      uVar2 = puVar4[0xd];
      psVar6[2] = CONCAT11(uVar1,uVar2);
      if ((uVar15 < local_res8[0]) && ((uint)CONCAT11(uVar1,uVar2) <= local_res8[0] - uVar15 >> 2))
      {
        if (sVar10 != 1) goto LAB_1805c5601;
        if (0x21 < local_res8[0]) {
          uVar8 = CONCAT31(CONCAT21(CONCAT11(puVar4[0xe],puVar4[0xf]),puVar4[0x10]),puVar4[0x11]);
          if (uVar8 < local_res8[0] - 4) {
            puVar12 = local_68 + uVar8;
            uVar11 = CONCAT31(CONCAT21(CONCAT11(*puVar12,puVar12[1]),puVar12[2]),puVar12[3]);
            if (uVar11 <= ((local_res8[0] - uVar8) - 4) / 6) {
              *(uint *)(psVar6 + 0xc) = uVar11;
              *(undefined1 **)(psVar6 + 0x10) = puVar12;
              uVar8 = CONCAT31(CONCAT21(CONCAT11(puVar4[0x12],puVar4[0x13]),puVar4[0x14]),
                               puVar4[0x15]);
              if (uVar8 < local_res8[0]) {
                if (uVar8 == 0) {
                  psVar6[0x14] = 0;
                  psVar6[0x15] = 0;
                  psVar6[0x18] = 0;
                  psVar6[0x19] = 0;
                  psVar6[0x1a] = 0;
                  psVar6[0x1b] = 0;
                  puVar9 = puVar12 + uVar11 * 6;
LAB_1805c54b0:
                  puVar12 = (undefined1 *)0x0;
                  *(undefined1 **)(psVar6 + 0x20) = puVar9;
                  uVar8 = CONCAT31(CONCAT21(CONCAT11(puVar4[0x16],puVar4[0x17]),puVar4[0x18]),
                                   puVar4[0x19]);
                  if (uVar8 < local_res8[0]) {
                    if (uVar8 != 0) {
                      puVar12 = local_68 + uVar8;
                    }
                    *(undefined1 **)(psVar6 + 0x1c) = puVar12;
                    psVar6[0x24] = 0;
                    psVar6[0x25] = 0;
                    psVar6[0x28] = 0;
                    psVar6[0x29] = 0;
                    psVar6[0x2a] = 0;
                    psVar6[0x2b] = 0;
                    psVar6[0x2c] = 0;
                    psVar6[0x2e] = 0;
                    psVar6[0x2f] = 0;
                    psVar6[0x30] = 0;
                    psVar6[0x31] = 0;
                    psVar6[0x32] = 0;
                    psVar6[0x33] = 0;
                    psVar6[0x34] = 0;
                    psVar6[0x35] = 0;
                    psVar6[0x38] = 0;
                    psVar6[0x39] = 0;
                    psVar6[0x3a] = 0;
                    psVar6[0x3b] = 0;
                    psVar6[0x3c] = 0;
                    psVar6[0x3d] = 0;
                    psVar6[0x3e] = 0;
                    psVar6[0x3f] = 0;
                    if ((*(byte *)(param_1 + 0x410) & 1) == 0) goto LAB_1805c5601;
                    local_58 = *(longlong *)(param_1 + 0x2e0);
                    uVar8 = CONCAT31(CONCAT21(CONCAT11(puVar4[0x1a],puVar4[0x1b]),puVar4[0x1c]),
                                     puVar4[0x1d]);
                    if (uVar8 < local_res8[0]) {
                      uVar11 = CONCAT31(CONCAT21(CONCAT11(puVar4[0x1e],puVar4[0x1f]),puVar4[0x20]),
                                        puVar4[0x21]);
                      if (uVar11 < local_res8[0]) {
                        if (uVar11 == 0) {
                          iVar5 = local_res20;
LAB_1805c55d5:
                          if (((psVar6[0x2c] == 0) || (uVar8 == 0)) ||
                             (local_res18[0] =
                                   (**(code **)(local_58 + 0x60))
                                             (param_1,uVar8 + iVar5,psVar6 + 0x34,psVar6 + 0x24,
                                              local_res8[0]), local_res18[0] == 0)) {
LAB_1805c5601:
                            *(undefined1 **)(psVar6 + 4) = local_68 + uVar14;
                            *(undefined1 **)(psVar6 + 8) = local_68 + uVar15;
                            *(undefined1 **)(psVar6 + 0x40) = local_68;
                            *(uint *)(psVar6 + 0x44) = local_res8[0];
                            *(short **)(param_1 + 0x4e0) = psVar6;
                            return 0;
                          }
                        }
                        else if ((*(longlong *)(param_1 + 0x408) != 0) ||
                                (iVar5 = (**(code **)(local_58 + 0x20))(param_1,0), iVar5 == 0)) {
                          iVar5 = local_res20;
                          local_res18[0] =
                               (**(code **)(local_58 + 0x68))
                                         (param_1,uVar11 + local_res20,psVar6 + 0x24);
                          if (local_res18[0] == 0) {
                            local_res18[0] = 0;
                            goto LAB_1805c55d5;
                          }
                        }
                      }
                      param_2 = local_res10;
                    }
                    uVar16 = local_60;
                  }
                }
                else if (uVar8 < local_res8[0] - 4) {
                  puVar13 = local_68 + uVar8;
                  uVar7 = CONCAT31(CONCAT21(CONCAT11(*puVar13,puVar13[1]),puVar13[2]),puVar13[3]);
                  if (uVar7 <= local_res8[0] - uVar8 >> 2) {
                    *(uint *)(psVar6 + 0x14) = uVar7;
                    *(undefined1 **)(psVar6 + 0x18) = puVar13;
                    puVar9 = puVar13 + uVar7 * 4;
                    if (puVar12 + uVar11 * 6 < puVar13 + uVar7 * 4) {
                      puVar9 = puVar12 + uVar11 * 6;
                    }
                    goto LAB_1805c54b0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x2e0);
  (**(code **)(lVar3 + 0x80))(param_1,psVar6 + 0x34);
  (**(code **)(lVar3 + 0x78))(param_1,psVar6 + 0x24);
  local_res18[0] = 8;
LAB_1805c5669:
  FUN_180578860(param_2,&local_68);
  FUN_18057abd0(uVar16,psVar6);
  return local_res18[0];
}



