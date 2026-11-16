// FUN_1804ba7b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804ba7b0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804ba7b0(void)

{
  float fVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  uint uVar15;
  longlong *plVar16;
  longlong lVar17;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined1 local_68 [8];
  undefined8 uStack_60;
  undefined1 local_58 [8];
  float fStack_50;
  float fStack_4c;
  ulonglong local_48;
  
  lVar17 = DAT_180bb8ae8;
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_a8;
  iVar7 = *(int *)(DAT_180bb8ae8 + 0x1ff8) + -1;
  if (-1 < iVar7) {
    lVar13 = (longlong)iVar7;
    plVar16 = (longlong *)(*(longlong *)(DAT_180bb8ae8 + 0x2000) + 8 + lVar13 * 0x38);
    do {
      lVar12 = *plVar16;
      if ((((lVar12 != 0) && ((*(uint *)(lVar12 + 0x14) & 0x8000000) != 0)) &&
          (*(char *)(lVar12 + 0xcc) != '\0')) && (*(char *)(lVar12 + 0xd4) == '\0'))
      goto LAB_1804ba81f;
      plVar16 = plVar16 + -7;
      lVar13 = lVar13 + -1;
    } while (-1 < lVar13);
  }
  lVar12 = 0;
LAB_1804ba81f:
  fVar1 = *(float *)(DAT_180bb8ae8 + 0x2264);
  if ((0.0 < fVar1) || (0.0 < *(float *)(DAT_180bb8ae8 + 0x2244))) {
    lVar13 = *(longlong *)(DAT_180bb8ae8 + 0x2230);
    if ((lVar13 == 0) || (*(char *)(lVar13 + 0xcc) == '\0')) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (lVar12 == 0) {
      if (bVar6) {
        auVar2 = *(undefined1 (*) [16])(DAT_180bb8ae8 + 0x1178);
        auVar4 = vshufps_avx(auVar2,auVar2,0xff);
        _local_58 = auVar2._0_12_;
        fStack_4c = auVar4._0_4_ * fVar1 * *(float *)(DAT_180bb8ae8 + 0xc84);
        uVar8 = FUN_1804b1120(local_58);
        FUN_1804ba4b0(lVar13,uVar8);
        lVar13 = *(longlong *)(lVar17 + 0x2230);
        fVar1 = *(float *)(lVar17 + 0x11e0);
        local_58._0_4_ = *(float *)(lVar13 + 0x28) - fVar1;
        fStack_50 = fVar1 + *(float *)(lVar13 + 0x28) + *(float *)(lVar13 + 0x30);
        lVar12 = **(longlong **)(DAT_180bb8ae8 + 0x2030);
        local_58._4_4_ = *(float *)(lVar13 + 0x2c) - fVar1;
        fStack_4c = fVar1 + *(float *)(lVar13 + 0x2c) + *(float *)(lVar13 + 0x34);
        if ((*(float *)(lVar12 + 0x10) <= fStack_50 - (float)local_58._0_4_) &&
           (*(float *)(lVar12 + 0x14) <= fStack_4c - (float)local_58._4_4_)) {
          fVar1 = -fVar1 - 1.0;
          local_58._4_4_ = (float)local_58._4_4_ - fVar1;
          local_58._0_4_ = (float)local_58._0_4_ - fVar1;
          fStack_50 = fVar1 + fStack_50;
          fStack_4c = fVar1 + fStack_4c;
        }
        if (**(int **)(lVar13 + 0x2c8) == 0) {
          FUN_1804d90c0();
        }
        local_68._4_4_ = *(float *)(lVar12 + 0xc) + *(float *)(lVar12 + 0x14);
        local_68._0_4_ = *(float *)(lVar12 + 0x10) + *(float *)(lVar12 + 8);
        FUN_1804d9420(*(undefined8 *)(lVar13 + 0x2c8),(float *)(lVar12 + 8),local_68,0);
        auVar2 = *(undefined1 (*) [16])(DAT_180bb8ae8 + 0x1168);
        auVar4 = vshufps_avx(auVar2,auVar2,0xff);
        _local_68 = auVar2._0_12_;
        uStack_60._4_4_ =
             auVar4._0_4_ * *(float *)(DAT_180bb8ae8 + 0xc84) * *(float *)(lVar17 + 0x2244);
        uVar8 = FUN_1804b1120(local_68);
        local_78 = 0;
        local_80 = 0x40400000;
        local_88 = *(undefined4 *)(lVar13 + 0x60);
        FUN_1804de7c0(*(undefined8 *)(lVar13 + 0x2c8),local_58,&fStack_50,uVar8);
        lVar17 = *(longlong *)(lVar13 + 0x2c8);
        iVar7 = *(int *)(lVar17 + 0xa0);
        iVar9 = iVar7 + -1;
        *(int *)(lVar17 + 0xa0) = iVar9;
        if (iVar9 == 0) {
          uVar5 = *(undefined8 *)(*(longlong *)(lVar17 + 0x38) + 0x44);
          *(undefined8 *)(lVar17 + 0x60) = *(undefined8 *)(*(longlong *)(lVar17 + 0x38) + 0x3c);
          *(undefined8 *)(lVar17 + 0x68) = uVar5;
          FUN_1804d9200();
        }
        else {
          puVar10 = (undefined8 *)((longlong)(iVar7 + -2) * 0x10 + *(longlong *)(lVar17 + 0xa8));
          uVar5 = puVar10[1];
          *(undefined8 *)(lVar17 + 0x60) = *puVar10;
          *(undefined8 *)(lVar17 + 0x68) = uVar5;
          FUN_1804d9200();
        }
      }
    }
    else {
      plVar16 = *(longlong **)(DAT_180bb8ae8 + 0x1478);
      for (plVar14 = plVar16;
          (plVar14 < plVar16 + *(int *)(DAT_180bb8ae8 + 0x1470) && (*plVar14 != lVar12));
          plVar14 = plVar14 + 1) {
      }
      iVar7 = (int)((longlong)plVar14 - (longlong)plVar16 >> 3);
      lVar17 = lVar12;
      if (-1 < iVar7) {
        lVar13 = (longlong)iVar7;
        plVar16 = plVar16 + lVar13;
        do {
          lVar3 = *plVar16;
          if ((*(uint *)(lVar3 + 0x14) >> 0x18 & 1) == 0) {
            lVar11 = lVar3;
            if (*(longlong *)(lVar3 + 0x3d8) != lVar12) {
              while (lVar11 != lVar12) {
                lVar11 = *(longlong *)(lVar11 + 0x3d0);
                if (lVar11 == 0) goto LAB_1804bab55;
              }
            }
            if (((*(char *)(lVar3 + 0xcc) != '\0') && (*(char *)(lVar3 + 0xd4) == '\0')) &&
               ((*(uint *)(lVar3 + 0x14) & 0x2000000) <= (*(uint *)(lVar12 + 0x14) & 0x2000000))) {
              lVar17 = lVar3;
            }
          }
          plVar16 = plVar16 + -1;
          lVar13 = lVar13 + -1;
        } while (-1 < lVar13);
      }
LAB_1804bab55:
      fVar1 = fVar1 * *(float *)(DAT_180bb8ae8 + 0xc84);
      uVar15 = *(uint *)(lVar12 + 0x1dc);
      if (fVar1 < 1.0) {
        uVar15 = (int)(longlong)((float)(uVar15 >> 0x18) * fVar1) << 0x18 | uVar15 & 0xffffff;
      }
      FUN_1804ba4b0(lVar17,uVar15);
    }
  }
}



