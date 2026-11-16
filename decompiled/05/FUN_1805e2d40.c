// FUN_1805e2d40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805e2d40 */

void FUN_1805e2d40(longlong *param_1,char param_2,int param_3,longlong param_4,int param_5,
                  int param_6,longlong param_7,longlong param_8,int param_9,ushort param_10)

{
  byte *pbVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined1 auVar4 [14];
  undefined1 auVar5 [14];
  undefined1 auVar6 [14];
  uint uVar7;
  undefined1 auVar8 [13];
  undefined1 auVar9 [13];
  undefined1 auVar10 [13];
  undefined1 auVar11 [13];
  undefined1 auVar12 [13];
  undefined1 auVar13 [13];
  undefined1 auVar14 [13];
  undefined1 auVar15 [13];
  uint7 uVar16;
  undefined1 auVar17 [14];
  undefined1 auVar18 [13];
  undefined1 auVar19 [13];
  undefined1 auVar20 [13];
  undefined1 auVar21 [13];
  uint5 uVar22;
  int iVar23;
  longlong *plVar24;
  byte *pbVar25;
  longlong lVar26;
  uint uVar27;
  longlong lVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  int *piVar32;
  uint uVar33;
  byte *pbVar34;
  byte *pbVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  undefined4 uVar43;
  
  uVar31 = (ulonglong)param_5;
  uVar43 = CONCAT22(param_10,param_10);
  uVar33 = (uint)param_10;
  if (1 < param_5) {
    iVar36 = *(int *)(param_4 + uVar31 * 4);
    iVar23 = 1 << (param_2 - (char)param_3 & 0x1fU);
    lVar28 = (ulonglong)((param_3 + 0x100) * 0x10000 + uVar33) * 0x100000001;
    if (iVar23 != 2) {
      if (iVar23 != 4) {
        if (0 < iVar36) {
          plVar24 = param_1 + 2;
          lVar26 = ((longlong)iVar36 - 1U >> 3) + 1;
          do {
            plVar24[-2] = lVar28;
            plVar24[-1] = lVar28;
            *plVar24 = lVar28;
            plVar24[1] = lVar28;
            plVar24 = plVar24 + 4;
            lVar26 = lVar26 + -1;
          } while (lVar26 != 0);
        }
        goto LAB_1805e2df2;
      }
      param_1[1] = lVar28;
    }
    *param_1 = lVar28;
  }
LAB_1805e2df2:
  if ((longlong)uVar31 < (longlong)param_6) {
    lVar28 = (longlong)param_6 - uVar31;
    piVar32 = (int *)(param_8 + uVar31 * 4);
    do {
      iVar36 = (param_3 - (int)uVar31) + param_9;
      pbVar35 = (byte *)(piVar32[1] + param_7);
      uVar27 = 1 << (param_2 - (char)iVar36 & 0x1fU);
      pbVar34 = (byte *)(*piVar32 + param_7);
      pbVar25 = (byte *)((longlong)param_1 +
                        (ulonglong)*(uint *)((longlong)piVar32 + (param_4 - param_8)) * 4);
      if (uVar27 == 1) {
        uVar29 = (longlong)pbVar35 - (longlong)pbVar34;
        uVar30 = 0;
        if (pbVar35 < pbVar34) {
          uVar29 = 0;
        }
        if (((uVar29 != 0) && (0xf < uVar29)) &&
           ((pbVar34 + (uVar29 - 1) < pbVar25 || (pbVar25 + (uVar29 - 1) * 4 < pbVar34)))) {
          iVar23 = iVar36 + 0x200;
          iVar38 = iVar23 * 0x10000;
          iVar39 = iVar23 * 0x10000;
          iVar40 = iVar23 * 0x10000;
          iVar23 = iVar23 * 0x10000;
          auVar4._8_4_ = 0;
          auVar4._0_8_ = CONCAT44(uVar43,uVar43);
          auVar4._12_2_ = param_10;
          auVar5._8_2_ = param_10;
          auVar5._0_8_ = CONCAT44(uVar43,uVar43);
          auVar5._10_4_ = auVar4._10_4_;
          auVar17._6_8_ = 0;
          auVar17._0_6_ = auVar5._8_6_;
          auVar6._4_2_ = param_10;
          auVar6._0_4_ = uVar43;
          auVar6._6_8_ = SUB148(auVar17 << 0x40,6);
          uVar27 = (uint)param_10;
          do {
            uVar3 = *(undefined4 *)pbVar34;
            uVar30 = uVar30 + 0x10;
            uVar16 = (uint7)(ushort)uVar3 & 0xffffffffff00ff;
            auVar8._7_5_ = 0;
            auVar8._0_7_ = uVar16;
            auVar8[0xc] = (char)((uint)uVar3 >> 0x18);
            uVar22 = CONCAT32(auVar8._10_3_,(ushort)(byte)((uint)uVar3 >> 0x10));
            auVar18._5_8_ = 0;
            auVar18._0_5_ = uVar22;
            iVar37 = (int)uVar16;
            auVar9[4] = (char)((uint)uVar3 >> 8);
            auVar9._0_4_ = iVar37;
            auVar9[5] = 0;
            auVar9._6_7_ = SUB137(auVar18 << 0x40,6);
            iVar41 = auVar6._4_4_;
            iVar42 = auVar5._8_4_;
            uVar7 = auVar4._10_4_ >> 0x10;
            *(uint *)pbVar25 = iVar37 * 0x100 + uVar27 + iVar38;
            *(int *)(pbVar25 + 4) = auVar9._4_4_ * 0x100 + iVar41 + iVar39;
            *(int *)(pbVar25 + 8) = (int)uVar22 * 0x100 + iVar42 + iVar40;
            *(uint *)(pbVar25 + 0xc) = (uint)(uint3)(auVar8._10_3_ >> 0x10) * 0x100 + uVar7 + iVar23
            ;
            uVar3 = *(undefined4 *)(pbVar34 + 4);
            uVar16 = (uint7)(ushort)uVar3 & 0xffffffffff00ff;
            auVar10._7_5_ = 0;
            auVar10._0_7_ = uVar16;
            auVar10[0xc] = (char)((uint)uVar3 >> 0x18);
            uVar22 = CONCAT32(auVar10._10_3_,(ushort)(byte)((uint)uVar3 >> 0x10));
            auVar19._5_8_ = 0;
            auVar19._0_5_ = uVar22;
            iVar37 = (int)uVar16;
            auVar11[4] = (char)((uint)uVar3 >> 8);
            auVar11._0_4_ = iVar37;
            auVar11[5] = 0;
            auVar11._6_7_ = SUB137(auVar19 << 0x40,6);
            *(uint *)(pbVar25 + 0x10) = iVar37 * 0x100 + uVar27 + iVar38;
            *(int *)(pbVar25 + 0x14) = auVar11._4_4_ * 0x100 + iVar41 + iVar39;
            *(int *)(pbVar25 + 0x18) = (int)uVar22 * 0x100 + iVar42 + iVar40;
            *(uint *)(pbVar25 + 0x1c) =
                 (uint)(uint3)(auVar10._10_3_ >> 0x10) * 0x100 + uVar7 + iVar23;
            uVar3 = *(undefined4 *)(pbVar34 + 8);
            uVar16 = (uint7)(ushort)uVar3 & 0xffffffffff00ff;
            auVar12._7_5_ = 0;
            auVar12._0_7_ = uVar16;
            auVar12[0xc] = (char)((uint)uVar3 >> 0x18);
            uVar22 = CONCAT32(auVar12._10_3_,(ushort)(byte)((uint)uVar3 >> 0x10));
            auVar20._5_8_ = 0;
            auVar20._0_5_ = uVar22;
            iVar37 = (int)uVar16;
            auVar13[4] = (char)((uint)uVar3 >> 8);
            auVar13._0_4_ = iVar37;
            auVar13[5] = 0;
            auVar13._6_7_ = SUB137(auVar20 << 0x40,6);
            *(uint *)(pbVar25 + 0x20) = iVar37 * 0x100 + uVar27 + iVar38;
            *(int *)(pbVar25 + 0x24) = auVar13._4_4_ * 0x100 + iVar41 + iVar39;
            *(int *)(pbVar25 + 0x28) = (int)uVar22 * 0x100 + iVar42 + iVar40;
            *(uint *)(pbVar25 + 0x2c) =
                 (uint)(uint3)(auVar12._10_3_ >> 0x10) * 0x100 + uVar7 + iVar23;
            uVar3 = *(undefined4 *)(pbVar34 + 0xc);
            pbVar34 = pbVar34 + 0x10;
            uVar16 = (uint7)(ushort)uVar3 & 0xffffffffff00ff;
            auVar14._7_5_ = 0;
            auVar14._0_7_ = uVar16;
            auVar14[0xc] = (char)((uint)uVar3 >> 0x18);
            uVar22 = CONCAT32(auVar14._10_3_,(ushort)(byte)((uint)uVar3 >> 0x10));
            auVar21._5_8_ = 0;
            auVar21._0_5_ = uVar22;
            iVar37 = (int)uVar16;
            auVar15[4] = (char)((uint)uVar3 >> 8);
            auVar15._0_4_ = iVar37;
            auVar15[5] = 0;
            auVar15._6_7_ = SUB137(auVar21 << 0x40,6);
            *(uint *)(pbVar25 + 0x30) = iVar37 * 0x100 + uVar27 + iVar38;
            *(int *)(pbVar25 + 0x34) = auVar15._4_4_ * 0x100 + iVar41 + iVar39;
            *(int *)(pbVar25 + 0x38) = (int)uVar22 * 0x100 + iVar42 + iVar40;
            *(uint *)(pbVar25 + 0x3c) =
                 (uint)(uint3)(auVar14._10_3_ >> 0x10) * 0x100 + uVar7 + iVar23;
            pbVar25 = pbVar25 + 0x40;
          } while (uVar30 != (uVar29 & 0xfffffffffffffff0));
        }
        if (pbVar34 != pbVar35) {
          do {
            bVar2 = *pbVar34;
            pbVar34 = pbVar34 + 1;
            *(uint *)pbVar25 = ((uint)bVar2 + (iVar36 + 0x200) * 0x100) * 0x100 + uVar33;
            pbVar25 = pbVar25 + 4;
          } while (pbVar34 != pbVar35);
        }
      }
      else if (uVar27 == 2) {
        if (pbVar34 != pbVar35) {
          do {
            bVar2 = *pbVar34;
            pbVar34 = pbVar34 + 1;
            iVar23 = ((uint)bVar2 + (iVar36 + 0x200) * 0x100) * 0x100 + uVar33;
            *(int *)pbVar25 = iVar23;
            *(int *)(pbVar25 + 4) = iVar23;
            pbVar25 = pbVar25 + 8;
          } while (pbVar34 != pbVar35);
        }
      }
      else if (uVar27 == 4) {
        if (pbVar34 != pbVar35) {
          do {
            bVar2 = *pbVar34;
            pbVar34 = pbVar34 + 1;
            lVar26 = (ulonglong)(((uint)bVar2 + (iVar36 + 0x200) * 0x100) * 0x100 + uVar33) *
                     0x100000001;
            *(longlong *)pbVar25 = lVar26;
            *(longlong *)(pbVar25 + 8) = lVar26;
            pbVar25 = pbVar25 + 0x10;
          } while (pbVar34 != pbVar35);
        }
      }
      else if (uVar27 == 8) {
        if (pbVar34 != pbVar35) {
          do {
            bVar2 = *pbVar34;
            pbVar34 = pbVar34 + 1;
            lVar26 = (ulonglong)(((uint)bVar2 + (iVar36 + 0x200) * 0x100) * 0x100 + (uint)param_10)
                     * 0x100000001;
            *(longlong *)pbVar25 = lVar26;
            *(longlong *)(pbVar25 + 8) = lVar26;
            *(longlong *)(pbVar25 + 0x10) = lVar26;
            *(longlong *)(pbVar25 + 0x18) = lVar26;
            pbVar25 = pbVar25 + 0x20;
          } while (pbVar34 != pbVar35);
        }
      }
      else if (pbVar34 != pbVar35) {
        do {
          pbVar1 = pbVar25 + (ulonglong)uVar27 * 4;
          lVar26 = (ulonglong)(((uint)*pbVar34 + (iVar36 + 0x200) * 0x100) * 0x100 + (uint)param_10)
                   * 0x100000001;
          for (; pbVar25 != pbVar1; pbVar25 = pbVar25 + 0x20) {
            *(longlong *)pbVar25 = lVar26;
            *(longlong *)(pbVar25 + 8) = lVar26;
            *(longlong *)(pbVar25 + 0x10) = lVar26;
            *(longlong *)(pbVar25 + 0x18) = lVar26;
          }
          pbVar34 = pbVar34 + 1;
        } while (pbVar34 != pbVar35);
      }
      uVar31 = (ulonglong)((int)uVar31 + 1);
      piVar32 = piVar32 + 1;
      lVar28 = lVar28 + -1;
    } while (lVar28 != 0);
  }
  return;
}



