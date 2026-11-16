// FUN_1805ad4a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805ad4a0 */

undefined8 FUN_1805ad4a0(undefined8 param_1,undefined8 *param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  short *psVar7;
  short *psVar8;
  longlong lVar9;
  undefined8 uVar10;
  uint uVar11;
  int iVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short *psVar17;
  uint local_res10 [2];
  
  uVar10 = param_2[0x13];
  uVar5 = FUN_1805ad8f0();
  local_res10[0] = (uint)uVar5;
  if (local_res10[0] == 0) {
    sVar16 = 0;
    *param_2 = 1;
    if (param_3 < 0) {
      return uVar5;
    }
    local_res10[0] = FUN_1805acea0(param_1,param_2);
    if (local_res10[0] == 0) {
      uVar11 = 0;
      psVar17 = (short *)0x2;
      if (*(uint *)((longlong)param_2 + 0x13c) != 0) {
        do {
          if (*(int *)(param_2[0x28] + (ulonglong)uVar11 * 0x10) == 0x100) {
            bVar1 = true;
            local_res10[0] = 0;
            goto LAB_1805ad556;
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < *(uint *)((longlong)param_2 + 0x13c));
      }
      bVar1 = false;
      local_res10[0] = FUN_1805ac520(param_1,param_2,2);
      if (local_res10[0] == 0) {
LAB_1805ad556:
        local_res10[0] = FUN_1805acc60(param_1,param_2);
        if ((((local_res10[0] == 0) &&
             (local_res10[0] = FUN_1805ac6e0(param_1,param_2), local_res10[0] == 0)) &&
            (local_res10[0] = FUN_1805ac8e0(param_1,param_2), local_res10[0] == 0)) &&
           ((uVar11 = 0, !bVar1 || (uVar11 = FUN_1805ac520(param_1,param_2,0x100), uVar11 == 0)))) {
          local_res10[0] = uVar11;
          uVar11 = *(uint *)(param_2 + 1);
          *(uint *)(param_2 + 1) = uVar11 | 0x12;
          if (*(char *)((longlong)param_2 + 0x14b) != '\0') {
            *(uint *)(param_2 + 1) = uVar11 | 0x16;
          }
          local_res10[0] = FUN_1805ad220(param_2);
          if (local_res10[0] == 0) {
            lVar6 = FUN_1805ac480(param_2,"FAMILY_NAME");
            if ((lVar6 == 0) || (*(char *)(lVar6 + 8) == '\0')) {
              param_2[3] = 0;
            }
            else {
              uVar5 = FUN_18057ade0(uVar10,*(undefined8 *)(lVar6 + 0x10),local_res10);
              param_2[3] = uVar5;
              if (local_res10[0] != 0) {
                return 3;
              }
            }
            *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_2 + 0x35);
            *(undefined4 *)(param_2 + 5) = 1;
            psVar7 = (short *)FUN_18057aad0(uVar10,0x10,local_res10);
            param_2[6] = psVar7;
            if (local_res10[0] == 0) {
              sVar15 = 0;
              iVar2 = *(int *)((longlong)param_2 + 0x154) + *(int *)(param_2 + 0x2a);
              iVar12 = -iVar2;
              if (iVar12 < 0) {
                iVar12 = iVar2;
              }
              if (iVar12 < 0x8000) {
                sVar13 = (short)*(int *)(param_2 + 0x2a) +
                         (short)*(int *)((longlong)param_2 + 0x154);
                sVar14 = -sVar13;
                if (sVar14 < 0) {
                  sVar14 = sVar13;
                }
              }
              else {
                sVar14 = 0x7fff;
              }
              *psVar7 = sVar14;
              lVar6 = FUN_1805ac480(param_2,"AVERAGE_WIDTH");
              if (lVar6 == 0) {
                sVar14 = (short)((sVar14 * 2 + 1) / 3);
                psVar8 = psVar7;
              }
              else {
                iVar12 = *(int *)(lVar6 + 0x10);
                iVar2 = -iVar12;
                if (-iVar12 < 0) {
                  iVar2 = iVar12;
                }
                psVar17 = psVar7;
                if (iVar2 < 0x4fff2) {
                  sVar14 = (short)((iVar12 + 5) / 10);
                  if (sVar14 < 0) {
                    lVar6 = (longlong)(iVar12 + 5) * -0x66666667;
                    sVar14 = (short)(lVar6 >> 0x22) - (short)(lVar6 >> 0x3f);
                  }
                  psVar8 = (short *)0x2;
                }
                else {
                  sVar14 = 0x7fff;
                  psVar8 = (short *)0x2;
                }
              }
              *(short *)((longlong)psVar17 + (longlong)psVar8) = sVar14;
              lVar6 = FUN_1805ac480(param_2,"POINT_SIZE");
              if (lVar6 != 0) {
                iVar12 = -*(int *)(lVar6 + 0x10);
                if (-*(int *)(lVar6 + 0x10) < 0) {
                  iVar12 = *(int *)(lVar6 + 0x10);
                }
                if (iVar12 < 0x504c3) {
                  uVar3 = FUN_1805753e0(iVar12,0x70800,0x11a4e);
                  *(undefined4 *)(psVar7 + 2) = uVar3;
                }
                else {
                  psVar7[2] = 0x7fff;
                  psVar7[3] = 0;
                }
              }
              lVar6 = FUN_1805ac480(param_2,"PIXEL_SIZE");
              if (lVar6 != 0) {
                iVar12 = *(int *)(lVar6 + 0x10);
                iVar2 = -iVar12;
                if (-iVar12 < 0) {
                  iVar2 = iVar12;
                }
                if (iVar2 < 0x8000) {
                  sVar14 = (short)iVar12;
                  iVar12 = -(int)sVar14;
                  if (-1 < sVar14) {
                    iVar12 = (int)sVar14;
                  }
                  *(int *)(psVar7 + 6) = iVar12 << 6;
                }
                else {
                  psVar7[6] = -0x40;
                  psVar7[7] = 0x1f;
                }
              }
              lVar6 = FUN_1805ac480(param_2,"RESOLUTION_X");
              if (lVar6 != 0) {
                uVar11 = *(uint *)(lVar6 + 0x10);
                uVar4 = -uVar11;
                if ((int)-uVar11 < 0) {
                  uVar4 = uVar11;
                }
                if ((int)uVar4 < 0x8000) {
                  if ((short)uVar11 < 0) {
                    uVar11 = (uint)(ushort)-(short)uVar11;
                  }
                  sVar16 = (short)uVar11;
                }
                else {
                  sVar16 = 0x7fff;
                }
              }
              lVar6 = FUN_1805ac480(param_2,"RESOLUTION_Y");
              if (lVar6 != 0) {
                uVar11 = *(uint *)(lVar6 + 0x10);
                uVar4 = -uVar11;
                if ((int)-uVar11 < 0) {
                  uVar4 = uVar11;
                }
                if ((int)uVar4 < 0x8000) {
                  if ((short)uVar11 < 0) {
                    uVar11 = (uint)(ushort)-(short)uVar11;
                  }
                  sVar15 = (short)uVar11;
                }
                else {
                  sVar15 = 0x7fff;
                }
              }
              iVar12 = *(int *)(psVar7 + 6);
              if (iVar12 == 0) {
                iVar12 = *(int *)(psVar7 + 2);
                *(int *)(psVar7 + 6) = iVar12;
                if (sVar15 != 0) {
                  iVar12 = FUN_1805753e0(iVar12,(int)sVar15,0x48);
                  *(int *)(psVar7 + 6) = iVar12;
                }
              }
              if ((sVar16 != 0) && (sVar15 != 0)) {
                iVar12 = FUN_1805753e0(iVar12,(int)sVar16,(int)sVar15);
              }
              *(int *)(psVar7 + 4) = iVar12;
              lVar6 = FUN_1805ac480(param_2,"CHARSET_REGISTRY");
              lVar9 = FUN_1805ac480(param_2,"CHARSET_ENCODING");
              if ((((lVar6 != 0) && (*(char *)(lVar6 + 8) != '\0')) && (lVar9 != 0)) &&
                 (*(char *)(lVar9 + 8) != '\0')) {
                uVar5 = FUN_18057ade0(uVar10,*(undefined8 *)(lVar9 + 0x10),local_res10);
                param_2[0x25] = uVar5;
                if (local_res10[0] != 0) {
                  return 3;
                }
                uVar10 = FUN_18057ade0(uVar10,*(undefined8 *)(lVar6 + 0x10),local_res10);
                param_2[0x26] = uVar10;
              }
              if (local_res10[0] == 0) {
                return 0;
              }
            }
          }
        }
      }
    }
  }
  return 3;
}



