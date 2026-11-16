// FUN_1805e2950 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805e2950 */

void FUN_1805e2950(byte *param_1,byte *param_2,byte *param_3,int param_4,char param_5,ushort param_6
                  ,int param_7)

{
  byte bVar1;
  undefined4 uVar2;
  unkuint10 Var3;
  undefined1 auVar4 [13];
  undefined1 auVar5 [11];
  undefined1 auVar6 [13];
  undefined1 auVar7 [11];
  undefined1 auVar8 [13];
  undefined1 auVar9 [11];
  undefined1 auVar10 [13];
  undefined1 auVar11 [11];
  undefined1 auVar12 [14];
  undefined1 auVar13 [14];
  undefined1 auVar14 [14];
  undefined1 auVar15 [14];
  uint6 uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  longlong lVar20;
  byte *pbVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ushort uVar40;
  undefined1 auVar26 [16];
  undefined1 auVar25 [16];
  undefined1 auVar24 [16];
  undefined1 auVar27 [16];
  undefined1 auVar30 [16];
  undefined1 auVar29 [16];
  undefined1 auVar28 [16];
  undefined1 auVar31 [16];
  undefined1 auVar34 [16];
  undefined1 auVar33 [16];
  undefined1 auVar32 [16];
  undefined1 auVar35 [16];
  undefined1 auVar38 [16];
  undefined1 auVar37 [16];
  undefined1 auVar36 [16];
  undefined1 auVar39 [16];
  int iVar41;
  int iVar42;
  int iVar43;
  
  uVar17 = 1 << (param_5 - (char)param_4 & 0x1fU);
  if (uVar17 != 1) {
    if (uVar17 == 2) {
      if (param_2 == param_3) {
        return;
      }
      if (param_7 == 1) {
        do {
          iVar19 = (uint)*param_2 + (param_4 + 0x100) * 0x10000;
          param_2 = param_2 + 1;
          *(int *)param_1 = iVar19;
          *(int *)(param_1 + 4) = iVar19;
          param_1 = param_1 + 8;
        } while (param_2 != param_3);
        return;
      }
      do {
        bVar1 = *param_2;
        param_2 = param_2 + 1;
        iVar19 = ((uint)bVar1 + (param_7 * 0x100 + param_4) * 0x100) * 0x100 + (uint)param_6;
        *(int *)param_1 = iVar19;
        *(int *)(param_1 + 4) = iVar19;
        param_1 = param_1 + 8;
      } while (param_2 != param_3);
      return;
    }
    if (uVar17 == 4) {
      if (param_2 == param_3) {
        return;
      }
      if (param_7 == 1) {
        do {
          bVar1 = *param_2;
          param_2 = param_2 + 1;
          lVar20 = (ulonglong)((uint)bVar1 + (param_4 + 0x100) * 0x10000) * 0x100000001;
          *(longlong *)param_1 = lVar20;
          *(longlong *)(param_1 + 8) = lVar20;
          param_1 = param_1 + 0x10;
        } while (param_2 != param_3);
        return;
      }
      do {
        bVar1 = *param_2;
        param_2 = param_2 + 1;
        lVar20 = (ulonglong)
                 (((uint)bVar1 + (param_7 * 0x100 + param_4) * 0x100) * 0x100 + (uint)param_6) *
                 0x100000001;
        *(longlong *)param_1 = lVar20;
        *(longlong *)(param_1 + 8) = lVar20;
        param_1 = param_1 + 0x10;
      } while (param_2 != param_3);
      return;
    }
    if (uVar17 != 8) {
      if (param_2 == param_3) {
        return;
      }
      do {
        uVar18 = (uint)*param_2;
        if (param_7 != 1) {
          uVar18 = (uint)*param_2 * 0x100 + (uint)param_6;
        }
        pbVar21 = param_1 + (ulonglong)uVar17 * 4;
        lVar20 = (ulonglong)(uVar18 + (param_7 * 0x100 + param_4) * 0x10000) * 0x100000001;
        for (; param_1 != pbVar21; param_1 = param_1 + 0x20) {
          *(longlong *)param_1 = lVar20;
          *(longlong *)(param_1 + 8) = lVar20;
          *(longlong *)(param_1 + 0x10) = lVar20;
          *(longlong *)(param_1 + 0x18) = lVar20;
        }
        param_2 = param_2 + 1;
      } while (param_2 != param_3);
      return;
    }
    if (param_2 == param_3) {
      return;
    }
    if (param_7 == 1) {
      pbVar21 = param_1 + 0x10;
      do {
        bVar1 = *param_2;
        param_2 = param_2 + 1;
        lVar20 = (ulonglong)((uint)bVar1 + (param_4 + 0x100) * 0x10000) * 0x100000001;
        *(longlong *)(pbVar21 + -0x10) = lVar20;
        *(longlong *)(pbVar21 + -8) = lVar20;
        *(longlong *)pbVar21 = lVar20;
        *(longlong *)(pbVar21 + 8) = lVar20;
        pbVar21 = pbVar21 + 0x20;
      } while (param_2 != param_3);
      return;
    }
    pbVar21 = param_1 + 0x10;
    do {
      bVar1 = *param_2;
      param_2 = param_2 + 1;
      lVar20 = (ulonglong)
               (((uint)bVar1 + (param_7 * 0x100 + param_4) * 0x100) * 0x100 + (uint)param_6) *
               0x100000001;
      *(longlong *)(pbVar21 + -0x10) = lVar20;
      *(longlong *)(pbVar21 + -8) = lVar20;
      *(longlong *)pbVar21 = lVar20;
      *(longlong *)(pbVar21 + 8) = lVar20;
      pbVar21 = pbVar21 + 0x20;
    } while (param_2 != param_3);
    return;
  }
  uVar23 = 0;
  uVar22 = (longlong)param_3 - (longlong)param_2;
  if (param_3 < param_2) {
    uVar22 = 0;
  }
  if ((uVar22 != 0) && (0xf < uVar22)) {
    if (param_7 != 1) {
      if (param_2 == param_3) {
        return;
      }
      goto LAB_1805e2d02;
    }
    if ((param_2 + (uVar22 - 1) < param_1) || (param_1 + uVar22 * 4 + -4 < param_2)) {
      iVar19 = (param_4 + 0x100) * 0x10000;
      iVar41 = (param_4 + 0x100) * 0x10000;
      iVar42 = (param_4 + 0x100) * 0x10000;
      iVar43 = (param_4 + 0x100) * 0x10000;
      do {
        uVar2 = *(undefined4 *)param_2;
        Var3 = CONCAT91((unkuint9)0,(char)((uint)uVar2 >> 0x18));
        auVar5[10] = 0;
        auVar5._0_10_ = Var3;
        auVar26[4] = (char)((uint)uVar2 >> 0x10);
        auVar26._0_4_ = uVar2;
        auVar26._5_11_ = auVar5 << 8;
        auVar4[0xc] = 0;
        auVar4._0_12_ = auVar26._4_12_;
        auVar25._0_2_ = (ushort)uVar2;
        auVar25[2] = (char)((uint)uVar2 >> 8);
        auVar25._3_13_ = auVar4 << 8;
        auVar24._2_14_ = auVar25._2_14_;
        auVar24._0_2_ = auVar25._0_2_ & 0xff;
        uVar23 = uVar23 + 0x10;
        uVar40 = (ushort)Var3;
        auVar12._10_2_ = 0;
        auVar12._0_10_ = auVar24._0_10_;
        auVar12._12_2_ = uVar40;
        uVar16 = CONCAT42(auVar12._10_4_,auVar26._4_2_);
        auVar27._0_4_ = auVar24._0_4_;
        auVar27._4_2_ = auVar25._2_2_;
        auVar27._6_10_ = (unkuint10)uVar16 << 0x10;
        *(uint *)param_1 = (auVar27._0_4_ & 0xffff) + iVar19;
        *(int *)(param_1 + 4) = auVar27._4_4_ + iVar41;
        *(int *)(param_1 + 8) = (int)uVar16 + iVar42;
        *(uint *)(param_1 + 0xc) = (uint)uVar40 + iVar43;
        uVar2 = *(undefined4 *)(param_2 + 4);
        Var3 = CONCAT91((unkuint9)0,(char)((uint)uVar2 >> 0x18));
        auVar7[10] = 0;
        auVar7._0_10_ = Var3;
        auVar30[4] = (char)((uint)uVar2 >> 0x10);
        auVar30._0_4_ = uVar2;
        auVar30._5_11_ = auVar7 << 8;
        auVar6[0xc] = 0;
        auVar6._0_12_ = auVar30._4_12_;
        auVar29._0_2_ = (ushort)uVar2;
        auVar29[2] = (char)((uint)uVar2 >> 8);
        auVar29._3_13_ = auVar6 << 8;
        auVar28._2_14_ = auVar29._2_14_;
        auVar28._0_2_ = auVar29._0_2_ & 0xff;
        uVar40 = (ushort)Var3;
        auVar13._10_2_ = 0;
        auVar13._0_10_ = auVar28._0_10_;
        auVar13._12_2_ = uVar40;
        uVar16 = CONCAT42(auVar13._10_4_,auVar30._4_2_);
        auVar31._0_4_ = auVar28._0_4_;
        auVar31._4_2_ = auVar29._2_2_;
        auVar31._6_10_ = (unkuint10)uVar16 << 0x10;
        *(uint *)(param_1 + 0x10) = (auVar31._0_4_ & 0xffff) + iVar19;
        *(int *)(param_1 + 0x14) = auVar31._4_4_ + iVar41;
        *(int *)(param_1 + 0x18) = (int)uVar16 + iVar42;
        *(uint *)(param_1 + 0x1c) = (uint)uVar40 + iVar43;
        uVar2 = *(undefined4 *)(param_2 + 8);
        Var3 = CONCAT91((unkuint9)0,(char)((uint)uVar2 >> 0x18));
        auVar9[10] = 0;
        auVar9._0_10_ = Var3;
        auVar34[4] = (char)((uint)uVar2 >> 0x10);
        auVar34._0_4_ = uVar2;
        auVar34._5_11_ = auVar9 << 8;
        auVar8[0xc] = 0;
        auVar8._0_12_ = auVar34._4_12_;
        auVar33._0_2_ = (ushort)uVar2;
        auVar33[2] = (char)((uint)uVar2 >> 8);
        auVar33._3_13_ = auVar8 << 8;
        auVar32._2_14_ = auVar33._2_14_;
        auVar32._0_2_ = auVar33._0_2_ & 0xff;
        uVar40 = (ushort)Var3;
        auVar14._10_2_ = 0;
        auVar14._0_10_ = auVar32._0_10_;
        auVar14._12_2_ = uVar40;
        uVar16 = CONCAT42(auVar14._10_4_,auVar34._4_2_);
        auVar35._0_4_ = auVar32._0_4_;
        auVar35._4_2_ = auVar33._2_2_;
        auVar35._6_10_ = (unkuint10)uVar16 << 0x10;
        *(uint *)(param_1 + 0x20) = (auVar35._0_4_ & 0xffff) + iVar19;
        *(int *)(param_1 + 0x24) = auVar35._4_4_ + iVar41;
        *(int *)(param_1 + 0x28) = (int)uVar16 + iVar42;
        *(uint *)(param_1 + 0x2c) = (uint)uVar40 + iVar43;
        uVar2 = *(undefined4 *)(param_2 + 0xc);
        param_2 = param_2 + 0x10;
        Var3 = CONCAT91((unkuint9)0,(char)((uint)uVar2 >> 0x18));
        auVar11[10] = 0;
        auVar11._0_10_ = Var3;
        auVar38[4] = (char)((uint)uVar2 >> 0x10);
        auVar38._0_4_ = uVar2;
        auVar38._5_11_ = auVar11 << 8;
        auVar10[0xc] = 0;
        auVar10._0_12_ = auVar38._4_12_;
        auVar37._0_2_ = (ushort)uVar2;
        auVar37[2] = (char)((uint)uVar2 >> 8);
        auVar37._3_13_ = auVar10 << 8;
        auVar36._2_14_ = auVar37._2_14_;
        auVar36._0_2_ = auVar37._0_2_ & 0xff;
        uVar40 = (ushort)Var3;
        auVar15._10_2_ = 0;
        auVar15._0_10_ = auVar36._0_10_;
        auVar15._12_2_ = uVar40;
        uVar16 = CONCAT42(auVar15._10_4_,auVar38._4_2_);
        auVar39._0_4_ = auVar36._0_4_;
        auVar39._4_2_ = auVar37._2_2_;
        auVar39._6_10_ = (unkuint10)uVar16 << 0x10;
        *(uint *)(param_1 + 0x30) = (auVar39._0_4_ & 0xffff) + iVar19;
        *(int *)(param_1 + 0x34) = auVar39._4_4_ + iVar41;
        *(int *)(param_1 + 0x38) = (int)uVar16 + iVar42;
        *(uint *)(param_1 + 0x3c) = (uint)uVar40 + iVar43;
        param_1 = param_1 + 0x40;
      } while (uVar23 != (uVar22 & 0xfffffffffffffff0));
    }
  }
  if (param_2 == param_3) {
    return;
  }
  if (param_7 == 1) {
    do {
      bVar1 = *param_2;
      param_2 = param_2 + 1;
      *(uint *)param_1 = (uint)bVar1 + (param_4 + 0x100) * 0x10000;
      param_1 = param_1 + 4;
    } while (param_2 != param_3);
    return;
  }
LAB_1805e2d02:
  do {
    bVar1 = *param_2;
    param_2 = param_2 + 1;
    *(uint *)param_1 = ((uint)bVar1 + (param_7 * 0x100 + param_4) * 0x100) * 0x100 + (uint)param_6;
    param_1 = param_1 + 4;
  } while (param_2 != param_3);
  return;
}



