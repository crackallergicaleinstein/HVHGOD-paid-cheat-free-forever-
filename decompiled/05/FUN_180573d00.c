// FUN_180573d00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180573d00 */

int FUN_180573d00(longlong *param_1,int param_2,int param_3)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  int local_res8 [2];
  
  lVar6 = *param_1;
  bVar2 = false;
  iVar3 = FUN_180574130();
  if (iVar3 == 0) {
    uVar1 = *(uint *)(param_1 + 1);
    uVar7 = (uint)*(ushort *)((longlong)param_1 + 0x62) +
            (uint)*(ushort *)((longlong)param_1 + 0x1a) + param_2;
    if (uVar1 < uVar7) {
      if (uVar7 < 0x10000) {
        lVar5 = param_1[4];
        uVar8 = (uVar1 >> 1) + uVar1;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        uVar7 = uVar8 + 7 & 0xfffffff8;
        uVar10 = (ulonglong)uVar7;
        if (0xffff < uVar7) {
          uVar10 = 0xffff;
        }
        if (-1 < (int)uVar1) {
          iVar9 = (int)uVar10;
          if (-1 < iVar9) {
            if (iVar9 == 0) {
              if (lVar5 != 0) {
                (**(code **)(lVar6 + 0x10))(lVar6,lVar5);
              }
              local_res8[0] = 0;
              param_1[4] = 0;
            }
            else {
              if (0xfffffff < iVar9) {
                param_1[4] = lVar5;
                iVar3 = 10;
                goto LAB_180573fa6;
              }
              if (uVar1 == 0) {
                lVar4 = (**(code **)(lVar6 + 8))(lVar6,iVar9 * 8);
                local_res8[0] = 0x40;
                if (lVar4 != 0) goto LAB_180573de3;
              }
              else {
                lVar4 = (**(code **)(lVar6 + 0x18))(lVar6,uVar1 * 8,iVar9 * 8,lVar5);
                if (lVar4 == 0) {
                  iVar3 = 0x40;
                  param_1[4] = lVar5;
                  goto LAB_180573fa6;
                }
LAB_180573de3:
                local_res8[0] = 0;
                if ((int)uVar1 < iVar9) {
                  FUN_18063ab10((int)(uVar1 * 8) + lVar4,0,(longlong)(int)((iVar9 - uVar1) * 8));
                }
              }
              param_1[4] = lVar4;
              iVar3 = local_res8[0];
              if (local_res8[0] != 0) goto LAB_180573fa6;
            }
            lVar5 = FUN_18057ad10(lVar6,1,uVar1,uVar10,param_1[5],local_res8);
            param_1[5] = lVar5;
            iVar3 = local_res8[0];
            if (local_res8[0] != 0) goto LAB_180573fa6;
            if (*(char *)((longlong)param_1 + 0x14) != '\0') {
              lVar5 = FUN_18057ad10(lVar6,8,uVar1 * 2,iVar9 * 2,param_1[8],local_res8);
              param_1[8] = lVar5;
              iVar3 = local_res8[0];
              if (local_res8[0] != 0) goto LAB_180573fa6;
              FUN_18063aed0(lVar5 + uVar10 * 8,(ulonglong)uVar1 * 8 + lVar5);
              param_1[9] = param_1[8] + uVar10 * 8;
            }
            bVar2 = true;
            *(int *)(param_1 + 1) = iVar9;
            goto LAB_180573f04;
          }
        }
        iVar3 = 6;
        param_1[4] = lVar5;
        goto LAB_180573fa6;
      }
LAB_180573f35:
      iVar3 = 10;
      goto LAB_180573fa6;
    }
LAB_180573f04:
    local_res8[0] = FUN_180574130(param_1);
    iVar3 = local_res8[0];
    if (local_res8[0] == 0) {
      uVar1 = *(uint *)((longlong)param_1 + 0xc);
      uVar7 = (uint)*(ushort *)(param_1 + 3) + (uint)*(ushort *)(param_1 + 0xc) + param_3;
      if (uVar1 < uVar7) {
        if (0xffff < uVar7) goto LAB_180573f35;
        uVar8 = (uVar1 >> 1) + uVar1;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        uVar7 = uVar8 + 3 & 0xfffffffc;
        if (0xffff < uVar7) {
          uVar7 = 0xffff;
        }
        lVar6 = FUN_18057ad10(lVar6,2,uVar1,uVar7,param_1[6],local_res8);
        param_1[6] = lVar6;
        iVar3 = local_res8[0];
        if (local_res8[0] != 0) goto LAB_180573fa6;
        *(uint *)((longlong)param_1 + 0xc) = uVar7;
      }
      else if (!bVar2) goto LAB_180573fa2;
      iVar3 = local_res8[0];
      FUN_180573c80(param_1);
    }
  }
LAB_180573fa2:
  if (iVar3 == 0) {
    return 0;
  }
LAB_180573fa6:
  FUN_1805742b0(param_1);
  return iVar3;
}



