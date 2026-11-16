// FUN_180360ce0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180360ce0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180360ce0(longlong param_1,int *param_2)

{
  ulonglong *puVar1;
  int iVar2;
  undefined1 auVar3 [16];
  ulonglong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  char cVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong lVar15;
  uint *puVar16;
  ulonglong uVar17;
  undefined1 auVar18 [16];
  undefined2 uStack_126;
  undefined1 local_108 [12];
  undefined2 uStack_fa;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  ulonglong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  iVar2 = *param_2;
  **(int **)(param_1 + 8) = **(int **)(param_1 + 8) + 1;
  uVar4 = ram0x000180b8e178;
  local_e8 = _DAT_180b8e110;
  uStack_e0 = DAT_180b8e118;
  uStack_d8 = _DAT_180b8e120;
  uStack_d0 = ram0x000180b8e128;
  local_c8 = _DAT_180b8e130;
  uStack_c0 = _DAT_180b8e138;
  uStack_b8 = _DAT_180b8e140;
  uStack_b0 = _DAT_180b8e148;
  local_a8 = _DAT_180b8e150;
  uStack_a0 = _DAT_180b8e158;
  uStack_98 = _DAT_180b8e160;
  uStack_90 = DAT_180b8e168;
  local_88 = _DAT_180b8e170;
  uVar13 = local_88;
  uStack_80 = ram0x000180b8e178;
  uStack_78 = _DAT_180b8e180;
  uVar5 = uStack_78;
  uStack_70 = _DAT_180b8e188;
  uVar6 = uStack_70;
  local_68 = _DAT_180b8e190;
  uStack_60 = _DAT_180b8e198;
  uVar7 = uStack_60;
  uStack_58 = _DAT_180b8e1a0;
  uVar8 = uStack_58;
  uStack_50 = _DAT_180b8e1a8;
  uVar9 = uStack_50;
  local_48 = _DAT_180b8e1b0;
  uVar10 = local_48;
  uStack_40 = _DAT_180b8e1b8;
  uVar11 = uStack_40;
  local_38 = DAT_180b8e1c0;
  local_88._4_4_ = (undefined4)((ulonglong)_DAT_180b8e170 >> 0x20);
  uStack_78._0_4_ = (undefined4)_DAT_180b8e180;
  uStack_60._0_4_ = (uint)_DAT_180b8e198;
  uStack_40._4_4_ = (uint)((ulonglong)_DAT_180b8e1b8 >> 0x20);
  local_48._0_4_ = (undefined4)_DAT_180b8e1b0;
  lVar14 = (longlong)iVar2 * 0x3c;
  uStack_58._4_4_ = (undefined4)((ulonglong)_DAT_180b8e1a0 >> 0x20);
  uStack_50._0_4_ = (undefined4)_DAT_180b8e1a8;
  uStack_58._0_1_ = (undefined1)_DAT_180b8e1a0;
  lVar15 = *(longlong *)(param_1 + 0x10);
  auVar3[0xc] = (undefined1)uStack_58;
  auVar3._0_12_ = local_108;
  auVar3[0xd] = (byte)((ulonglong)_DAT_180b8e188 >> 0x21) & 1;
  auVar3._14_2_ = uStack_fa;
  uStack_50._4_4_ = (undefined4)((ulonglong)_DAT_180b8e1a8 >> 0x20);
  auVar18._4_12_ = auVar3._4_12_;
  auVar18._0_4_ = (undefined4)uStack_78;
  uStack_78._4_4_ = (uint)((ulonglong)_DAT_180b8e180 >> 0x20);
  auVar3 = vinsertps_avx(auVar18,ZEXT416(uStack_78._4_4_),0x10);
  uStack_70._0_4_ = (uint)_DAT_180b8e188;
  auVar3 = vinsertps_avx(auVar3,ZEXT416((uint)uStack_70),0x20);
  uVar17 = CONCAT44(DAT_180b8e1c0,uStack_50._4_4_);
  puVar1 = (ulonglong *)(lVar14 + -0x3c + lVar15);
  *puVar1 = CONCAT44(local_88._4_4_,
                     CONCAT22(uStack_126,
                              CONCAT11((char)((ulonglong)_DAT_180b8e188 >> 0x20),
                                       (char)((ulonglong)_DAT_180b8e110 >> 8)))) &
            0xffffffffffff01ff;
  puVar1[1] = uVar4;
  puVar1[2] = CONCAT44((undefined4)uStack_50,uStack_58._4_4_);
  puVar1[3] = uVar17;
  *(undefined1 (*) [16])(lVar14 + -0x1c + lVar15) = auVar3;
  auVar3 = vunpcklps_avx(ZEXT416((uint)uStack_60),ZEXT416(uStack_40._4_4_));
  *(longlong *)(lVar14 + -0xc + lVar15) = auVar3._0_8_;
  *(undefined4 *)(lVar14 + -4 + lVar15) = (undefined4)local_48;
  if (iVar2 == 1) {
    local_88 = uVar13;
    uStack_78 = uVar5;
    uStack_70 = uVar6;
    uStack_60 = uVar7;
    uStack_58 = uVar8;
    uStack_50 = uVar9;
    local_48 = uVar10;
    uStack_40 = uVar11;
    FUN_18035e9f0(*(undefined8 *)(param_1 + 0x18),&local_e8);
    if (*(char *)(*(longlong *)(param_1 + 0x10) + 1) == '\0') {
      cVar12 = FUN_1803586d0(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
      if (cVar12 != '\0') {
        if (**(char **)(param_1 + 0x30) != '\0') {
          lVar15 = *(longlong *)(param_1 + 0x28);
          uVar17 = 0;
          if (*(longlong *)(lVar15 + 0x180) != 0) {
            lVar14 = 0;
            do {
              if (*(int *)(lVar14 + lVar15) == **(int **)(param_1 + 0x38)) {
                lVar15 = *(longlong *)
                          (*(longlong *)(**(longlong **)(param_1 + 0x40) + 0x18) + 0x10 +
                          (longlong)(int)uVar17 * 8);
                puVar16 = (uint *)0x0;
                if (lVar15 != 0) {
                  puVar16 = (uint *)(lVar15 + 0x10);
                }
                *puVar16 = *puVar16 | 0x18;
                puVar16[6] = 0;
                puVar16[7] = 0;
              }
              lVar15 = *(longlong *)(param_1 + 0x28);
              uVar17 = uVar17 + 1;
              lVar14 = lVar14 + 0xc;
            } while (uVar17 < *(ulonglong *)(lVar15 + 0x180));
          }
        }
        goto LAB_180360ec9;
      }
    }
    uVar13 = 1;
  }
  else {
LAB_180360ec9:
    uVar13 = 0;
  }
  return uVar13;
}



