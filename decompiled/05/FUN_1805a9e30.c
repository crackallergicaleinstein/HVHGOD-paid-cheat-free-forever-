// FUN_1805a9e30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805a9e30 */

void FUN_1805a9e30(longlong param_1,longlong *param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  bool bVar4;
  uint uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  undefined1 *puVar16;
  int local_res10 [2];
  uint local_res18;
  uint local_res20;
  int local_78;
  int local_74;
  uint local_70 [2];
  undefined1 *local_68;
  longlong local_60;
  byte *local_58;
  
  lVar13 = param_2[4];
  pbVar2 = (byte *)param_2[2];
  local_74 = 0;
  local_68 = (undefined1 *)0x0;
  bVar4 = false;
  local_60 = lVar13;
  local_58 = pbVar2;
  FUN_18057abd0(lVar13,*(undefined8 *)(param_1 + 0x2a8));
  *(undefined8 *)(param_1 + 0x2a8) = 0;
  *(undefined4 *)(param_1 + 0x2b0) = 0;
  (*(code *)param_2[7])(param_2);
  pbVar3 = (byte *)*param_2;
  if ((pbVar3 < pbVar2) && (bVar1 = *pbVar3, *param_2 = (longlong)(pbVar3 + 1), bVar1 == 0x5b)) {
    (*(code *)param_2[7])(param_2);
    iVar15 = 0;
    local_res18 = 0;
    local_78 = 0;
    iVar12 = 0;
    iVar9 = 0xc;
    uVar6 = FUN_18057abe0(lVar13,0xc,local_res10);
    *(undefined8 *)(param_1 + 0x2a8) = uVar6;
    if (local_res10[0] == 0) {
      pbVar3 = (byte *)*param_2;
      if (pbVar3 < pbVar2) {
        lVar13 = 0;
        bVar1 = *pbVar3;
        while (bVar1 != 0x5d) {
          iVar10 = (int)pbVar2;
          if (bVar1 == 0x3c) {
            if ((local_68 != (undefined1 *)0x0) && (!bVar4)) goto LAB_1805aa27a;
            (*(code *)param_2[8])(param_2);
            if ((int)param_2[3] != 0) goto LAB_1805aa291;
            uVar7 = (longlong)(~(ulonglong)pbVar3 + *param_2) / 2;
            if ((int)uVar7 == 0) goto LAB_1805aa27a;
            local_68 = (undefined1 *)
                       FUN_18057ac40(local_60,1,local_78,uVar7 & 0xffffffff,local_68,local_res10);
            if (local_res10[0] != 0) goto LAB_1805aa286;
            bVar4 = true;
            *param_2 = (longlong)pbVar3;
            (*(code *)param_2[0xb])(param_2,local_68,uVar7 & 0xffffffff,local_70,1);
            iVar10 = (int)local_58;
            local_res18 = local_70[0];
            local_78 = (int)uVar7;
          }
          else if (bVar1 - 0x30 < 10) {
            if ((bVar4) || (local_res18 = (*(code *)param_2[9])(param_2), (int)local_res18 < 0))
            goto LAB_1805aa27a;
            (*(code *)param_2[8])(param_2);
            if ((int)param_2[3] != 0) {
              return;
            }
            lVar14 = *param_2;
            local_68 = (undefined1 *)(lVar14 + 1);
            if ((uint)(iVar10 - (int)lVar14) <= local_res18) goto LAB_1805aa27a;
            *param_2 = (ulonglong)(local_res18 + 1) + lVar14;
          }
          if (local_68 == (undefined1 *)0x0) goto LAB_1805aa27a;
          if ((local_res18 & 1) != 0) {
            if (local_68[local_res18 - 1] == '\0') {
              local_res18 = local_res18 - 1;
            }
          }
          if (local_res18 == 0) goto LAB_1805aa27a;
          uVar11 = iVar10 - (int)*param_2;
          local_res20 = 0;
          if (local_res18 != 0) {
            puVar16 = local_68;
            uVar5 = local_res18;
            do {
              if (iVar15 == 0) {
                if (0xb < lVar13) {
                  lVar14 = *(longlong *)(param_1 + 0x2a8);
                  iVar15 = 1;
                  local_74 = (uint)*(byte *)(lVar14 + 5) + (uint)*(byte *)(lVar14 + 4) * 0x10;
                  iVar10 = local_74 * 0x10 + 0xc;
                  if (iVar10 <= (int)uVar11) {
                    uVar6 = FUN_18057ac40(local_60,1,iVar9,iVar10,lVar14,local_res10);
                    *(undefined8 *)(param_1 + 0x2a8) = uVar6;
                    if (local_res10[0] == 0) {
                      iVar9 = iVar10;
                      uVar5 = local_res18;
                      goto LAB_1805aa14f;
                    }
                    goto LAB_1805aa286;
                  }
                  goto LAB_1805aa27a;
                }
LAB_1805aa21e:
                iVar12 = iVar12 + 1;
                *(undefined1 *)(lVar13 + *(longlong *)(param_1 + 0x2a8)) = *puVar16;
                lVar13 = lVar13 + 1;
              }
              else {
                if (iVar15 == 1) {
LAB_1805aa14f:
                  if (iVar12 < iVar9) goto LAB_1805aa21e;
                  lVar14 = 0;
                  iVar10 = iVar9;
                  if (local_74 != 0) {
                    puVar8 = (undefined1 *)(*(longlong *)(param_1 + 0x2a8) + 0x1a);
                    do {
                      uVar5 = CONCAT31(CONCAT21(CONCAT11(puVar8[-2],puVar8[-1]),*puVar8),puVar8[1]);
                      if ((uVar11 < uVar5) || ((int)(uVar11 - uVar5) < iVar10)) goto LAB_1805aa27a;
                      lVar14 = lVar14 + 1;
                      puVar8 = puVar8 + 0x10;
                      iVar10 = iVar10 + (uVar5 + 3 & 0xfffffffc);
                    } while (lVar14 < local_74);
                  }
                  iVar15 = 2;
                  uVar6 = FUN_18057ac40(local_60,1,iVar9,iVar10 + 1,*(undefined8 *)(param_1 + 0x2a8)
                                        ,local_res10);
                  *(undefined8 *)(param_1 + 0x2a8) = uVar6;
                  if (local_res10[0] == 0) {
                    iVar9 = iVar10 + 1;
                    uVar5 = local_res18;
                    goto LAB_1805aa21a;
                  }
                  goto LAB_1805aa286;
                }
                if (iVar15 == 2) {
LAB_1805aa21a:
                  if (iVar12 < iVar9) goto LAB_1805aa21e;
                  goto LAB_1805aa27a;
                }
              }
              local_res20 = local_res20 + 1;
              puVar16 = puVar16 + 1;
            } while (local_res20 < uVar5);
          }
          (*(code *)param_2[7])(param_2);
          pbVar3 = (byte *)*param_2;
          if (local_58 <= pbVar3) goto LAB_1805aa27a;
          pbVar2 = local_58;
          bVar1 = *pbVar3;
        }
        *param_2 = (longlong)(pbVar3 + 1);
        *(int *)(param_1 + 0x2b0) = iVar12;
        goto LAB_1805aa28a;
      }
      goto LAB_1805aa27a;
    }
  }
  else {
LAB_1805aa27a:
    local_res10[0] = 3;
  }
LAB_1805aa286:
  *(int *)(param_2 + 3) = local_res10[0];
LAB_1805aa28a:
  if ((int)param_2[3] == 0) {
    lVar13 = local_60;
  }
  else {
LAB_1805aa291:
    lVar13 = local_60;
    FUN_18057abd0(local_60,*(undefined8 *)(param_1 + 0x2a8));
    *(undefined8 *)(param_1 + 0x2a8) = 0;
    *(undefined4 *)(param_1 + 0x2b0) = 0;
  }
  if (bVar4) {
    FUN_18057abd0(lVar13,local_68);
  }
  return;
}



