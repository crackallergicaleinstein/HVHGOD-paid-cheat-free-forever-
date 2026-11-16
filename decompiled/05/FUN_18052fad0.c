// FUN_18052fad0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18052fad0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18052fad0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  longlong lVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined8 uVar19;
  longlong lVar20;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  float local_80;
  float fStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 local_68;
  longlong lStack_60;
  ulonglong local_58;
  
  local_58 = DAT_1808d5f00 ^ (ulonglong)auStack_b8;
  piVar12 = (int *)param_2[6];
  piVar4 = (int *)param_2[7];
  do {
    if (piVar12 == piVar4) {
      FUN_180562cc0();
    }
    if ((piVar12[1] != 0) &&
       ((ulonglong)(uint)(*piVar12 + piVar12[1]) <= (ulonglong)(param_2[4] - param_2[3] >> 2))) {
      if ((char)piVar12[8] == '\0') {
        lVar20 = *(longlong *)(param_1 + 0x38);
        local_98 = *(undefined4 *)(lVar20 + 0x44);
        local_94 = *(undefined4 *)(lVar20 + 0x48);
        local_90 = *(undefined4 *)(lVar20 + 0x3c);
        local_8c = *(undefined4 *)(lVar20 + 0x40);
        FUN_1804d9420(param_1,&local_90,&local_98,0);
      }
      else {
        iVar7 = *(int *)(param_1 + 0xa4);
        piVar1 = (int *)(param_1 + 0xa0);
        auVar16._0_4_ = (float)piVar12[4];
        auVar16._4_12_ = SUB1612(ZEXT816(0),4);
        auVar15._0_4_ = (float)piVar12[6];
        auVar15._4_12_ = SUB1612(ZEXT816(0),4);
        auVar18._0_4_ = (float)piVar12[5];
        auVar18._4_12_ = SUB1612(ZEXT816(0),4);
        auVar17._0_4_ = (float)piVar12[7];
        auVar17._4_12_ = SUB1612(ZEXT816(0),4);
        auVar15 = vmaxss_avx(auVar16,auVar15);
        auVar17 = vmaxss_avx(auVar18,auVar17);
        uStack_74 = auVar17._0_4_;
        uStack_78 = auVar15._0_4_;
        local_80 = auVar16._0_4_;
        fStack_7c = auVar18._0_4_;
        if (*piVar1 == iVar7) {
          iVar9 = *piVar1 + 1;
          if (iVar7 == 0) {
            iVar7 = 8;
          }
          else {
            iVar7 = iVar7 / 2 + iVar7;
          }
          if (iVar9 < iVar7) {
            iVar9 = iVar7;
          }
          FUN_1804aec70(piVar1,iVar9);
        }
        puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0xa8) + (longlong)*piVar1 * 0x10);
        *puVar8 = CONCAT44(fStack_7c,local_80);
        puVar8[1] = CONCAT44(uStack_74,uStack_78);
        *piVar1 = *piVar1 + 1;
        *(ulonglong *)(param_1 + 0x60) = CONCAT44(fStack_7c,local_80);
        *(ulonglong *)(param_1 + 0x68) = CONCAT44(uStack_74,uStack_78);
        FUN_1804d9200(param_1);
      }
      lStack_60 = *(longlong *)(piVar12 + 2);
      if (lStack_60 == 0) {
        local_68 = *(undefined8 *)(*(longlong *)(DAT_180bb8ae8 + 0x60) + 0x28);
        lStack_60 = *(longlong *)(*(longlong *)(DAT_180bb8ae8 + 0x60) + 0x30);
      }
      else {
        local_68 = 0;
      }
      iVar7 = *(int *)(param_1 + 0xb4);
      piVar1 = (int *)(param_1 + 0xb0);
      uVar19 = local_68;
      lVar20 = lStack_60;
      if (*piVar1 == iVar7) {
        iVar9 = *piVar1 + 1;
        if (iVar7 == 0) {
          iVar7 = 8;
        }
        else {
          iVar7 = iVar7 / 2 + iVar7;
        }
        if (iVar9 < iVar7) {
          iVar9 = iVar7;
        }
        FUN_1804aec70(piVar1,iVar9);
      }
      puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0xb8) + (longlong)*piVar1 * 0x10);
      *puVar8 = uVar19;
      puVar8[1] = lVar20;
      *piVar1 = *piVar1 + 1;
      *(undefined8 *)(param_1 + 0x70) = uVar19;
      *(longlong *)(param_1 + 0x78) = lVar20;
      FUN_1804d92c0(param_1);
      uVar13 = piVar12[1];
      uVar11 = 0;
      if (uVar13 != 0) {
        do {
          uVar14 = 60000;
          if (uVar13 - uVar11 < 60000) {
            uVar14 = uVar13 - uVar11;
          }
          FUN_1804d9590(param_1,uVar14,uVar14);
          lVar20 = DAT_180bb8ae8;
          uVar13 = 0;
          if (uVar14 != 0) {
            do {
              uVar10 = (ulonglong)(*piVar12 + uVar13 + uVar11);
              if ((ulonglong)(param_2[4] - param_2[3] >> 2) <= uVar10) {
                    /* WARNING: Subroutine does not return */
                FUN_18047c010();
              }
              uVar10 = (ulonglong)*(uint *)(param_2[3] + uVar10 * 4);
              lVar5 = *param_2;
              if ((ulonglong)((param_2[1] - lVar5) / 0x14) <= uVar10) {
                    /* WARNING: Subroutine does not return */
                FUN_18047c010();
              }
              **(undefined2 **)(param_1 + 0x48) = *(undefined2 *)(param_1 + 0x34);
              *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 2;
              uVar3 = *(undefined4 *)(lVar5 + 0x10 + uVar10 * 0x14);
              if (*(longlong *)(piVar12 + 2) == 0) {
                local_70 = *(undefined8 *)(lVar20 + 0x11f8);
                puVar8 = &local_70;
              }
              else {
                local_88 = *(undefined4 *)(lVar5 + 8 + uVar10 * 0x14);
                uStack_84 = *(undefined4 *)(lVar5 + 0xc + uVar10 * 0x14);
                puVar8 = (undefined8 *)&local_88;
              }
              uVar2 = *(undefined4 *)(lVar5 + 4 + uVar10 * 0x14);
              uVar13 = uVar13 + 1;
              puVar6 = *(undefined4 **)(param_1 + 0x40);
              *puVar6 = *(undefined4 *)(lVar5 + uVar10 * 0x14);
              puVar6[1] = uVar2;
              *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 8) = *puVar8;
              *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x10) = uVar3;
              *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 0x14;
              *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
            } while (uVar13 < uVar14);
          }
          uVar13 = piVar12[1];
          uVar11 = uVar11 + uVar14;
        } while (uVar11 < uVar13);
      }
      FUN_1804d9530(param_1);
      iVar7 = *(int *)(param_1 + 0xa0);
      iVar9 = iVar7 + -1;
      *(int *)(param_1 + 0xa0) = iVar9;
      if (iVar9 == 0) {
        puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x3c);
      }
      else {
        puVar8 = (undefined8 *)((longlong)(iVar7 + -2) * 0x10 + *(longlong *)(param_1 + 0xa8));
      }
      uVar19 = puVar8[1];
      *(undefined8 *)(param_1 + 0x60) = *puVar8;
      *(undefined8 *)(param_1 + 0x68) = uVar19;
      FUN_1804d9200(param_1);
    }
    piVar12 = piVar12 + 10;
  } while( true );
}



