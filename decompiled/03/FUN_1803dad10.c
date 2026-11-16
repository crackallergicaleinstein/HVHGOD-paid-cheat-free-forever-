// FUN_1803dad10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803dad10 */

/* WARNING: Removing unreachable block (ram,0x0001803db149) */
/* WARNING: Removing unreachable block (ram,0x0001803db2da) */
/* WARNING: Removing unreachable block (ram,0x0001803db366) */

longlong FUN_1803dad10(ulonglong param_1,longlong param_2,longlong param_3,char param_4)

{
  float *pfVar1;
  undefined1 *puVar2;
  char *pcVar3;
  int *piVar4;
  uint *puVar5;
  short *psVar6;
  char cVar7;
  undefined1 uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  short sVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  undefined8 *puVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  int iVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  ulonglong local_res8;
  undefined1 local_res10;
  char local_res18;
  int local_b8;
  undefined1 local_84 [12];
  undefined1 local_78 [64];
  
  local_res8 = param_1;
  FUN_18063ab10(param_2,0,800);
  FUN_180233c60(param_2);
  lVar23 = 0;
  *(undefined4 *)(param_2 + 800) = 0;
  if (param_3 == 0) {
    return param_2;
  }
  lVar15 = FUN_1803db520(param_3 + 0x1e0,param_4);
  if ((lVar15 == 0) && (lVar15 = FUN_1803db520(param_3 + 0x210,param_4), lVar15 == 0)) {
    return param_2;
  }
  lVar15 = FUN_1803db520(lVar15,param_4);
  if (lVar15 == 0) {
    return param_2;
  }
  lVar16 = FUN_1803db520(lVar15 + 0x78,param_4);
  if (lVar16 == 0) {
    return param_2;
  }
  lVar16 = FUN_1803db520(lVar16,param_4);
  if (lVar16 == 0) {
    return param_2;
  }
  piVar4 = (int *)(lVar16 + 0x174);
  if (piVar4 != (int *)0x0) {
    if (param_4 == '\0') {
      iVar13 = *piVar4;
    }
    else {
      local_res8 = local_res8 & 0xffffffff00000000;
      lVar17 = FUN_18017ea70();
      *(int *)(lVar17 + 4) = *(int *)(lVar17 + 4) + 1;
      cVar7 = FUN_1804514c0(&local_res8,piVar4,4);
      lVar17 = FUN_18017ea70();
      if (*(int *)(lVar17 + 4) != 0) {
        *(int *)(lVar17 + 4) = *(int *)(lVar17 + 4) + -1;
      }
      iVar13 = (int)(float)local_res8;
      if (cVar7 == '\0') {
        iVar13 = 0;
      }
    }
    if (iVar13 - 1U < 0x20) {
      puVar5 = (uint *)(lVar16 + 0x164);
      if (puVar5 == (uint *)0x0) {
        lVar17 = lVar16 + 0x168;
      }
      else {
        if (param_4 == '\0') {
          uVar14 = *puVar5;
        }
        else {
          local_res8 = local_res8 & 0xffffffff00000000;
          lVar17 = FUN_18017ea70();
          *(int *)(lVar17 + 4) = *(int *)(lVar17 + 4) + 1;
          cVar7 = FUN_1804514c0(&local_res8,puVar5,4);
          lVar17 = FUN_18017ea70();
          if (*(int *)(lVar17 + 4) != 0) {
            *(int *)(lVar17 + 4) = *(int *)(lVar17 + 4) + -1;
          }
          uVar14 = (uint)(float)local_res8;
          if (cVar7 == '\0') {
            uVar14 = 0;
          }
        }
        lVar17 = lVar16 + 0x168;
        if ((uVar14 & 0x7fffffff) != 0) {
          lVar17 = FUN_1803db520(lVar17,param_4);
        }
      }
      if (lVar17 != 0) goto LAB_1803daee5;
    }
  }
  lVar17 = FUN_1803db520(lVar16 + 0x150,param_4);
  if (lVar17 == 0) {
    return param_2;
  }
LAB_1803daee5:
  piVar4 = (int *)(lVar17 + 0x28);
  if (piVar4 != (int *)0x0) {
    if (param_4 == '\0') {
      iVar13 = *piVar4;
    }
    else {
      local_res8 = local_res8 & 0xffffffff00000000;
      lVar16 = FUN_18017ea70();
      *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + 1;
      cVar7 = FUN_1804514c0(&local_res8,piVar4,4);
      lVar16 = FUN_18017ea70();
      if (*(int *)(lVar16 + 4) != 0) {
        *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + -1;
      }
      iVar13 = (int)(float)local_res8;
      if (cVar7 == '\0') {
        iVar13 = 0;
      }
    }
    if ((iVar13 - 1U < 0x14) && (lVar16 = FUN_1803db520(lVar17 + 0x30,param_4), lVar16 != 0)) {
      piVar4 = (int *)(lVar15 + 0x220);
      if (piVar4 == (int *)0x0) {
        iVar25 = 0;
      }
      else if (param_4 == '\0') {
        iVar25 = *piVar4;
      }
      else {
        local_res8 = local_res8 & 0xffffffff00000000;
        lVar17 = FUN_18017ea70();
        *(int *)(lVar17 + 4) = *(int *)(lVar17 + 4) + 1;
        cVar7 = FUN_1804514c0(&local_res8,piVar4,4);
        lVar17 = FUN_18017ea70();
        if (*(int *)(lVar17 + 4) != 0) {
          *(int *)(lVar17 + 4) = *(int *)(lVar17 + 4) + -1;
        }
        iVar25 = (int)(float)local_res8;
        if (cVar7 == '\0') {
          iVar25 = 0;
        }
      }
      lVar17 = FUN_1803db520(lVar15 + 0x228,param_4);
      lVar18 = FUN_1803db520(lVar15 + 0x240,param_4);
      lVar15 = FUN_1803db520(lVar15 + 0x2f0,param_4);
      local_b8 = 0;
      if (0 < iVar13) {
        fVar28 = 100.0;
        fVar27 = 0.0;
        do {
          lVar24 = lVar23 * 0x70 + lVar16;
          if ((((lVar17 != 0) && (lVar18 != 0)) && (lVar15 != 0)) && (0 < iVar25)) {
            uVar9 = FUN_1803db5c0(lVar24 + 0x48,param_4);
            uVar10 = FUN_1803db5c0(lVar18,param_4);
            uVar11 = FUN_1803db5c0(lVar15,param_4);
            uVar21 = (ulonglong)uVar11 + (ulonglong)uVar10 + (ulonglong)uVar9;
            if (uVar21 < (ulonglong)(longlong)iVar25) {
              psVar6 = (short *)(lVar17 + uVar21 * 2);
              if (psVar6 == (short *)0x0) {
                sVar12 = 0;
              }
              else if (param_4 == '\0') {
                sVar12 = *psVar6;
              }
              else {
                local_res8 = local_res8 & 0xffffffffffff0000;
                lVar22 = FUN_18017ea70();
                *(int *)(lVar22 + 4) = *(int *)(lVar22 + 4) + 1;
                cVar7 = FUN_1804514c0(&local_res8,psVar6,2);
                if (cVar7 == '\0') {
                  lVar22 = FUN_18017ea70();
                  if (*(int *)(lVar22 + 4) != 0) {
                    *(int *)(lVar22 + 4) = *(int *)(lVar22 + 4) + -1;
                  }
                  sVar12 = 0;
                }
                else {
                  sVar12 = (short)local_res8;
                  lVar22 = FUN_18017ea70();
                  if (*(int *)(lVar22 + 4) != 0) {
                    *(int *)(lVar22 + 4) = *(int *)(lVar22 + 4) + -1;
                  }
                }
              }
              if (-1 < sVar12) {
                pfVar1 = (float *)(lVar24 + 0x30);
                if (pfVar1 == (float *)0x0) {
                  fVar26 = fVar27;
                }
                else {
                  if (param_4 == '\0') {
                    fVar26 = *pfVar1;
                  }
                  else {
                    local_res8 = CONCAT44(local_res8._4_4_,fVar27);
                    lVar22 = FUN_18017ea70();
                    *(int *)(lVar22 + 4) = *(int *)(lVar22 + 4) + 1;
                    cVar7 = FUN_1804514c0(&local_res8,pfVar1,4);
                    if (cVar7 == '\0') {
                      lVar22 = FUN_18017ea70();
                      if (*(int *)(lVar22 + 4) != 0) {
                        *(int *)(lVar22 + 4) = *(int *)(lVar22 + 4) + -1;
                      }
                      fVar26 = fVar27;
                    }
                    else {
                      lVar22 = FUN_18017ea70();
                      if (*(int *)(lVar22 + 4) != 0) {
                        *(int *)(lVar22 + 4) = *(int *)(lVar22 + 4) + -1;
                      }
                      fVar26 = (float)local_res8;
                    }
                  }
                  if ((fVar26 < fVar27) || (fVar28 < fVar26)) goto LAB_1803db390;
                }
                lVar22 = (longlong)*(int *)(param_2 + 800);
                *(int *)(param_2 + 800) = *(int *)(param_2 + 800) + 1;
                *(int *)(param_2 + lVar22 * 0x28) = local_b8;
                *(int *)(param_2 + 4 + lVar22 * 0x28) = (int)sVar12;
                puVar19 = (undefined8 *)FUN_1803db650(local_84,lVar24 + 0x18,param_4);
                *(undefined8 *)(param_2 + 8 + lVar22 * 0x28) = *puVar19;
                *(undefined4 *)(param_2 + 0x10 + lVar22 * 0x28) = *(undefined4 *)(puVar19 + 1);
                puVar19 = (undefined8 *)FUN_1803db650(local_78,lVar24 + 0x24,param_4);
                puVar2 = (undefined1 *)(lVar24 + 0x3c);
                *(undefined8 *)(param_2 + 0x14 + lVar22 * 0x28) = *puVar19;
                *(undefined4 *)(param_2 + 0x1c + lVar22 * 0x28) = *(undefined4 *)(puVar19 + 1);
                *(float *)(param_2 + 0x20 + lVar22 * 0x28) = fVar26;
                if (puVar2 == (undefined1 *)0x0) {
                  uVar8 = 0;
                }
                else if (param_4 == '\0') {
                  uVar8 = *puVar2;
                }
                else {
                  local_res8 = local_res8 & 0xffffffffffffff00;
                  lVar20 = FUN_18017ea70();
                  *(int *)(lVar20 + 4) = *(int *)(lVar20 + 4) + 1;
                  cVar7 = FUN_1804514c0(&local_res8,puVar2,1);
                  if (cVar7 == '\0') {
                    lVar20 = FUN_18017ea70();
                    if (*(int *)(lVar20 + 4) != 0) {
                      *(int *)(lVar20 + 4) = *(int *)(lVar20 + 4) + -1;
                    }
                    uVar8 = 0;
                  }
                  else {
                    uVar8 = (char)local_res8;
                    local_res10 = (char)local_res8;
                    lVar20 = FUN_18017ea70();
                    if (*(int *)(lVar20 + 4) != 0) {
                      *(int *)(lVar20 + 4) = *(int *)(lVar20 + 4) + -1;
                    }
                  }
                }
                pcVar3 = (char *)(lVar24 + 0x3d);
                *(undefined1 *)(param_2 + 0x24 + lVar22 * 0x28) = uVar8;
                if (pcVar3 == (char *)0x0) {
                  cVar7 = '\0';
                }
                else if (param_4 == '\0') {
                  cVar7 = *pcVar3;
                }
                else {
                  local_res8 = local_res8 & 0xffffffffffffff00;
                  lVar24 = FUN_18017ea70();
                  *(int *)(lVar24 + 4) = *(int *)(lVar24 + 4) + 1;
                  cVar7 = FUN_1804514c0(&local_res8,pcVar3,1);
                  if (cVar7 == '\0') {
                    lVar24 = FUN_18017ea70();
                    if (*(int *)(lVar24 + 4) != 0) {
                      *(int *)(lVar24 + 4) = *(int *)(lVar24 + 4) + -1;
                    }
                    cVar7 = '\0';
                  }
                  else {
                    cVar7 = (char)local_res8;
                    local_res18 = (char)local_res8;
                    lVar24 = FUN_18017ea70();
                    if (*(int *)(lVar24 + 4) != 0) {
                      *(int *)(lVar24 + 4) = *(int *)(lVar24 + 4) + -1;
                    }
                  }
                }
                *(bool *)(param_2 + 0x25 + lVar22 * 0x28) = cVar7 != '\0';
              }
            }
          }
LAB_1803db390:
          local_b8 = local_b8 + 1;
          lVar23 = lVar23 + 1;
        } while (lVar23 < iVar13);
      }
    }
  }
  return param_2;
}



