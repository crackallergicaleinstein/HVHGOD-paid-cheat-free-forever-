// FUN_180245df0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180245df0 */

undefined8 FUN_180245df0(longlong param_1,longlong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  short sVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  ulonglong *puVar12;
  int iVar13;
  uint *puVar14;
  int iVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [64];
  undefined1 auVar19 [64];
  float fVar20;
  uint local_88;
  undefined4 uStack_84;
  uint uStack_78;
  
  iVar15 = 0;
  iVar8 = 0;
  iVar13 = 0;
  if (0 < *(int *)(param_1 + 0x3c)) {
    puVar11 = (ulonglong *)(param_1 + 0x70);
    puVar12 = puVar11;
    do {
      uVar10 = *puVar12;
      uVar6 = puVar12[1];
      uVar3 = puVar12[2];
      uVar4 = puVar12[3];
      uVar1 = puVar12[4];
      local_88 = (uint)uVar10;
      uStack_84 = (undefined4)(uVar10 >> 0x20);
      if (((uVar10 & 1) == 0) || ((param_3 & uVar6) == 0)) {
LAB_180245e66:
        *puVar11 = uVar10;
        puVar11[1] = uVar6;
        puVar11[2] = uVar3;
        puVar11[3] = uVar4;
        iVar8 = iVar8 + 1;
        puVar11[4] = uVar1;
        puVar11 = puVar11 + 5;
      }
      else {
        uVar6 = ~param_3 & uVar6;
        if ((uVar6 != 0) || (local_88 = local_88 & 0xfffffffc, (uVar10 & 0xfffffff8) != 0)) {
          uVar10 = CONCAT44(uStack_84,local_88);
          goto LAB_180245e66;
        }
      }
      iVar13 = iVar13 + 1;
      puVar12 = puVar12 + 5;
    } while (iVar13 < *(int *)(param_1 + 0x3c));
  }
  *(int *)(param_1 + 0x3c) = iVar8;
  if (0 < *(int *)(param_2 + 0x3c)) {
    fVar20 = 1.0;
    puVar14 = (uint *)(param_2 + 0x84);
    auVar19 = ZEXT864(0);
    do {
      uVar2 = puVar14[-5];
      if (((uVar2 & 1) != 0) && (uVar1 = *(ulonglong *)(puVar14 + -3), (param_3 & uVar1) != 0)) {
        if ((uVar2 & 4) == 0) {
          auVar17 = auVar19._0_16_;
        }
        else {
          auVar17 = ZEXT416(*puVar14);
        }
        iVar8 = *(int *)(param_1 + 0x3c);
        uVar10 = (ulonglong)iVar8;
        if (iVar8 == 0x20) {
          return 0;
        }
        auVar18 = ZEXT1664(auVar17);
        auVar19 = ZEXT1664(auVar19._0_16_);
        sVar5 = thunk_FUN_180624430();
        if (0 < sVar5) {
          return 0;
        }
        fVar16 = auVar18._0_4_;
        if (fVar16 < auVar19._0_4_) {
          return 0;
        }
        if (fVar20 < fVar16) {
          return 0;
        }
        uStack_78 = (uint)(byte)puVar14[-1];
        *(int *)(param_1 + 0x3c) = iVar8 + 1;
        uVar6 = uVar10;
        if (3 < (longlong)uVar10) {
          puVar7 = (undefined8 *)(param_1 + 0x70 + uVar10 * 0x28);
          do {
            uVar9 = (uint)uVar6;
            if (*(float *)((longlong)puVar7 + -0x14) <= fVar16) goto LAB_180246064;
            *puVar7 = puVar7[-5];
            puVar7[1] = puVar7[-4];
            puVar7[2] = puVar7[-3];
            puVar7[3] = puVar7[-2];
            puVar7[4] = puVar7[-1];
            if (*(float *)((longlong)puVar7 + -0x3c) <= fVar16) {
              uVar9 = uVar9 - 1;
              goto LAB_180246064;
            }
            puVar7[-5] = puVar7[-10];
            puVar7[-4] = puVar7[-9];
            puVar7[-3] = puVar7[-8];
            puVar7[-2] = puVar7[-7];
            puVar7[-1] = puVar7[-6];
            if (*(float *)((longlong)puVar7 + -100) <= fVar16) {
              uVar9 = uVar9 - 2;
              goto LAB_180246064;
            }
            puVar7[-10] = puVar7[-0xf];
            puVar7[-9] = puVar7[-0xe];
            puVar7[-8] = puVar7[-0xd];
            puVar7[-7] = puVar7[-0xc];
            puVar7[-6] = puVar7[-0xb];
            if (*(float *)((longlong)puVar7 + -0x8c) <= fVar16) {
              uVar9 = uVar9 - 3;
              goto LAB_180246064;
            }
            uVar6 = (ulonglong)(uVar9 - 4);
            uVar10 = uVar10 - 4;
            puVar7[-0xf] = puVar7[-0x14];
            puVar7[-0xe] = puVar7[-0x13];
            puVar7[-0xd] = puVar7[-0x12];
            puVar7[-0xc] = puVar7[-0x11];
            puVar7[-0xb] = puVar7[-0x10];
            puVar7 = puVar7 + -0x14;
          } while (3 < (longlong)uVar10);
        }
        uVar9 = (uint)uVar6;
        if (0 < (longlong)uVar10) {
          puVar7 = (undefined8 *)(param_1 + 0x48 + uVar10 * 0x28);
          do {
            uVar9 = (uint)uVar6;
            if (*(float *)((longlong)puVar7 + 0x14) <= fVar16) break;
            puVar7[5] = *puVar7;
            puVar7[6] = puVar7[1];
            puVar7[7] = puVar7[2];
            puVar7[8] = puVar7[3];
            puVar7[9] = puVar7[4];
            puVar7 = puVar7 + -5;
            uVar9 = uVar9 - 1;
            uVar6 = (ulonglong)uVar9;
            uVar10 = uVar10 - 1;
          } while (0 < (longlong)uVar10);
        }
LAB_180246064:
        puVar11 = (ulonglong *)(param_1 + 0x70 + (longlong)(int)uVar9 * 0x28);
        *puVar11 = (ulonglong)(uVar2 & 7);
        puVar11[1] = param_3 & uVar1;
        puVar11[2] = CONCAT44(fVar16,uStack_78);
        puVar11[3] = 0;
        *(undefined8 *)(param_1 + 0x90 + (longlong)(int)uVar9 * 0x28) = 0;
      }
      iVar15 = iVar15 + 1;
      puVar14 = puVar14 + 10;
    } while (iVar15 < *(int *)(param_2 + 0x3c));
  }
  return 1;
}



