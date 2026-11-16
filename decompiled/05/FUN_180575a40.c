// FUN_180575a40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180575a40 */

undefined8 FUN_180575a40(ushort *param_1,undefined8 *param_2,undefined8 param_3)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  byte *pbVar11;
  byte *pbVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int *piVar17;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  int local_80;
  int iStack_7c;
  undefined4 local_78;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  ulonglong local_48;
  longlong local_40;
  
  if (param_1 == (ushort *)0x0) {
    return 0x14;
  }
  if (param_2 == (undefined8 *)0x0) {
    return 6;
  }
  local_78 = *(undefined4 *)(param_2 + 4);
  uVar3 = 0xffffffff;
  iVar2 = *(int *)((longlong)param_2 + 0x24);
  local_48 = 0;
  if (*param_1 == 0) {
    return 0;
  }
  local_40 = 0;
LAB_180575ae0:
  lVar6 = (longlong)(int)uVar3;
  iVar5 = uVar3 + 1;
  uVar1 = *(ushort *)(local_40 + *(longlong *)(param_1 + 0xc));
  uVar3 = (uint)uVar1;
  if (iVar5 <= (int)uVar3) {
    piVar8 = (int *)(*(longlong *)(param_1 + 4) + (lVar6 + 1) * 8);
    pbVar11 = (byte *)(*(longlong *)(param_1 + 8) + lVar6 + 1);
    piVar17 = (int *)(*(longlong *)(param_1 + 4) + (ulonglong)uVar1 * 8);
    iVar10 = 1 << ((byte)local_78 & 0x1f);
    local_98._4_4_ = (int)((ulonglong)*(undefined8 *)piVar8 >> 0x20);
    iVar13 = iVar10 * local_98._4_4_ - iVar2;
    iVar5 = iVar10 * (int)*(undefined8 *)piVar8 - iVar2;
    local_98 = CONCAT44(iVar13,iVar5);
    local_88._4_4_ = (int)((ulonglong)*(undefined8 *)piVar17 >> 0x20);
    local_90 = local_98;
    iVar16 = iVar10 * local_88._4_4_ - iVar2;
    iVar15 = iVar10 * (int)*(undefined8 *)piVar17 - iVar2;
    local_88 = CONCAT44(iVar16,iVar15);
    if ((*pbVar11 & 3) != 2) {
      if ((*pbVar11 & 3) == 0) {
        if ((*(byte *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar1) & 3) == 1) {
          piVar17 = piVar17 + -2;
          local_98 = local_88;
        }
        else {
          local_98 = CONCAT44((iVar16 + iVar13) / 2,(iVar15 + iVar5) / 2);
        }
        piVar8 = piVar8 + -2;
        pbVar11 = pbVar11 + -1;
      }
      uVar4 = (*(code *)*param_2)(&local_98,param_3);
      iVar5 = (int)uVar4;
      do {
        if (iVar5 != 0) {
          return uVar4;
        }
        if (piVar17 <= piVar8) {
          uVar4 = (*(code *)param_2[1])(&local_98,param_3);
          goto LAB_180575d82;
        }
        pbVar12 = pbVar11 + 1;
        piVar9 = piVar8 + 2;
        if ((pbVar11[1] & 3) == 0) {
          iVar5 = iVar10 * *piVar9 - iVar2;
          iVar13 = iVar10 * piVar8[3] - iVar2;
          local_90 = CONCAT44(iVar13,iVar5);
          piVar8 = piVar9;
          while( true ) {
            if (piVar17 <= piVar8) {
              uVar4 = (*(code *)param_2[2])(&local_90,&local_98,param_3);
              goto LAB_180575d82;
            }
            pbVar11 = pbVar12 + 1;
            piVar9 = piVar8 + 2;
            pbVar12 = pbVar12 + 1;
            local_80 = iVar10 * *piVar9 - iVar2;
            iStack_7c = iVar10 * piVar8[3] - iVar2;
            if ((*pbVar11 & 3) == 1) break;
            if ((*pbVar11 & 3) != 0) {
              return 0x14;
            }
            local_50 = (local_80 + iVar5) / 2;
            local_4c = (iVar13 + iStack_7c) / 2;
            uVar4 = (*(code *)param_2[2])(&local_90,&local_50,param_3);
            if ((int)uVar4 != 0) {
              return uVar4;
            }
            local_90 = CONCAT44(iStack_7c,local_80);
            piVar8 = piVar9;
            iVar5 = local_80;
            iVar13 = iStack_7c;
          }
          uVar4 = (*(code *)param_2[2])(&local_90,&local_80,param_3);
        }
        else if ((pbVar11[1] & 3) == 1) {
          local_58 = iVar10 * *piVar9 - iVar2;
          local_54 = iVar10 * piVar8[3] - iVar2;
          uVar4 = (*(code *)param_2[1])(&local_58,param_3);
        }
        else {
          if (piVar17 < piVar8 + 4) {
            return 0x14;
          }
          if ((pbVar11[2] & 3) != 2) {
            return 0x14;
          }
          piVar7 = piVar8 + 6;
          pbVar12 = pbVar11 + 3;
          local_68 = iVar10 * *piVar9 - iVar2;
          local_64 = iVar10 * piVar8[3] - iVar2;
          local_70 = iVar10 * piVar8[4] - iVar2;
          local_6c = iVar10 * piVar8[5] - iVar2;
          if (piVar17 < piVar7) goto LAB_180575db5;
          local_60 = iVar10 * *piVar7 - iVar2;
          local_5c = iVar10 * piVar8[7] - iVar2;
          uVar4 = (*(code *)param_2[3])(&local_68,&local_70,&local_60);
          piVar9 = piVar7;
        }
        iVar5 = (int)uVar4;
        piVar8 = piVar9;
        pbVar11 = pbVar12;
      } while( true );
    }
  }
  return 0x14;
LAB_180575db5:
  uVar4 = (*(code *)param_2[3])(&local_68,&local_70,&local_98,param_3);
LAB_180575d82:
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  uVar14 = (int)local_48 + 1;
  local_48 = (ulonglong)uVar14;
  local_40 = local_40 + 2;
  if ((int)(uint)*param_1 <= (int)uVar14) {
    return 0;
  }
  goto LAB_180575ae0;
}



