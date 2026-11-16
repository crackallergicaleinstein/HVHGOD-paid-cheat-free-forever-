// FUN_1804f3a30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804f3a30 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804f3a30(void)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  char cVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  float fVar18;
  undefined1 auVar19 [64];
  undefined1 auVar20 [64];
  float fVar21;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  float local_e0;
  undefined4 local_d8;
  undefined1 local_c8;
  longlong local_c0;
  undefined1 local_b8 [12];
  float fStack_ac;
  char local_a8;
  char local_a7 [7];
  float local_a0;
  undefined4 local_9c;
  float local_98;
  undefined4 local_94;
  ulonglong local_90;
  
  lVar4 = DAT_180bb8ae8;
  local_90 = DAT_1808d5f00 ^ (ulonglong)auStack_108;
  local_c0 = DAT_180bb8ae8;
  *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
  lVar4 = *(longlong *)(lVar4 + 0x14d0);
  iVar12 = *(int *)(lVar4 + 0x1f8);
  piVar5 = *(int **)(lVar4 + 0x1c8);
  if (iVar12 < 1) {
    FUN_1804c5a40("Calling PopItemWidth() too many times!");
  }
  else {
    uVar1 = *(undefined4 *)(*(longlong *)(lVar4 + 0x200) + -4 + (longlong)iVar12 * 4);
    *(int *)(lVar4 + 0x1f8) = iVar12 + -1;
    *(undefined4 *)(lVar4 + 0x1e8) = uVar1;
  }
  if (1 < piVar5[4]) {
    FUN_1804ba3f0();
    FUN_1804e19a0(piVar5 + 0x1c,*(undefined8 *)(lVar4 + 0x2c8));
  }
  auVar17 = vmaxss_avx(ZEXT416((uint)piVar5[8]),ZEXT416(*(uint *)(lVar4 + 0x11c)));
  uVar2 = piVar5[1];
  piVar5[8] = auVar17._0_4_;
  *(int *)(lVar4 + 0x11c) = auVar17._0_4_;
  if ((uVar2 & 0x10) == 0) {
    *(int *)(lVar4 + 0x130) = piVar5[10];
  }
  local_c8 = 0;
  fVar18 = 0.0;
  if (((uVar2 & 1) == 0) && (*(char *)(lVar4 + 0xd1) == '\0')) {
    iVar12 = -1;
    iVar13 = 1;
    auVar8 = vmaxss_avx(ZEXT416((uint)piVar5[9]),ZEXT416(*(uint *)(lVar4 + 0x26c)));
    auVar19 = ZEXT1664(auVar8);
    auVar17 = vminss_avx(auVar17,ZEXT416(*(uint *)(lVar4 + 0x274)));
    auVar20 = ZEXT1664(auVar17);
    fVar18 = 0.0;
    if (1 < piVar5[4]) {
      lVar14 = 0x1c;
      fVar16 = 1.0;
      fVar21 = 4.0;
      fVar18 = 0.0;
      do {
        lVar6 = *(longlong *)(piVar5 + 0x1a);
        lVar11 = *(longlong *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x1c8);
        if (lVar11 == 0) {
          fVar15 = fVar18;
        }
        else {
          iVar3 = iVar13;
          if (iVar13 < 0) {
            iVar3 = *(int *)(lVar11 + 0xc);
          }
          fVar15 = (*(float *)(lVar11 + 0x18) - *(float *)(lVar11 + 0x14)) *
                   *(float *)((longlong)iVar3 * 0x1c + *(longlong *)(lVar11 + 0x68)) +
                   *(float *)(lVar11 + 0x14);
        }
        fVar15 = fVar15 + *(float *)(lVar4 + 0x28);
        iVar3 = *piVar5;
        local_98 = (float)(int)(fVar21 * *(float *)(local_c0 + 0x11f0));
        local_a0 = fVar15 - local_98;
        local_98 = local_98 + fVar15;
        local_9c = auVar19._0_4_;
        local_94 = auVar20._0_4_;
        cVar9 = FUN_1804c6190(&local_a0,iVar3 + iVar13,0,2);
        if (cVar9 != '\0') {
          local_a7[0] = '\0';
          local_a8 = '\0';
          if ((uVar2 & 2) == 0) {
            local_e8 = 0;
            FUN_1804f4d40(&local_a0,iVar3 + iVar13,local_a7,&local_a8);
            lVar11 = DAT_180bb8ae8;
            if ((local_a7[0] == '\0') && (local_a8 == '\0')) goto LAB_1804f3ccd;
            *(undefined4 *)(DAT_180bb8ae8 + 0x24d8) = 4;
            if (local_a8 == '\0') {
              goto LAB_1804f3cd4;
            }
            lVar10 = 0x1e;
            if ((*(byte *)(lVar14 + 8 + lVar6) & 2) == 0) {
              iVar12 = iVar13;
            }
          }
          else {
LAB_1804f3ccd:
            lVar11 = DAT_180bb8ae8;
LAB_1804f3cd4:
            lVar10 = (ulonglong)(local_a7[0] != '\0') + 0x1c;
          }
          auVar17 = *(undefined1 (*) [16])(lVar11 + 0xc78 + (lVar10 + 0x15) * 0x10);
          auVar8 = vshufps_avx(auVar17,auVar17,0xff);
          local_b8 = auVar17._0_12_;
          fStack_ac = auVar8._0_4_ * *(float *)(lVar11 + 0xc84);
          local_e8 = FUN_1804b1120(local_b8);
          auVar17._0_4_ = (float)(int)fVar15;
          auVar17._4_12_ = SUB1612(ZEXT816(0),4);
          local_d8 = 0;
          local_e0 = fVar16;
          FUN_1804dd220(*(undefined8 *)(lVar4 + 0x2c8),auVar17._0_8_,auVar19._0_4_ + fVar16,
                        auVar20._0_8_);
        }
        iVar13 = iVar13 + 1;
        lVar14 = lVar14 + 0x1c;
      } while (iVar13 < piVar5[4]);
      if (iVar12 == -1) {
        local_c8 = 0;
      }
      else {
        if ((*(char *)((longlong)piVar5 + 9) == '\0') && (iVar13 = 0, 0 < piVar5[4] + 1)) {
          lVar14 = 0;
          do {
            lVar14 = lVar14 + 0x1c;
            iVar13 = iVar13 + 1;
            *(undefined4 *)(*(longlong *)(piVar5 + 0x1a) + -0x18 + lVar14) =
                 *(undefined4 *)(*(longlong *)(piVar5 + 0x1a) + -0x1c + lVar14);
          } while (iVar13 < piVar5[4] + 1);
        }
        lVar6 = DAT_180bb8ae8;
        *(undefined1 *)((longlong)piVar5 + 9) = 1;
        local_c8 = 1;
        lVar14 = *(longlong *)(*(longlong *)(lVar6 + 0x14d0) + 0x1c8);
        iVar13 = iVar12 + -1;
        fVar16 = fVar18;
        if (lVar14 != 0) {
          if (iVar13 < 0) {
            iVar13 = *(int *)(lVar14 + 0xc);
          }
          fVar16 = (*(float *)(lVar14 + 0x18) - *(float *)(lVar14 + 0x14)) *
                   *(float *)((longlong)iVar13 * 0x1c + *(longlong *)(lVar14 + 0x68)) +
                   *(float *)(lVar14 + 0x14);
        }
        auVar17 = vmaxss_avx(ZEXT416((uint)(((*(float *)(lVar6 + 0x110) - *(float *)(lVar6 + 0x156c)
                                             ) + (float)(int)(fVar21 * *(float *)(lVar6 + 0x11f0)))
                                           - *(float *)(*(longlong *)(lVar6 + 0x14d0) + 0x28))),
                             ZEXT416((uint)(fVar16 + *(float *)(lVar6 + 0xcf8))));
        uVar7 = auVar17._0_8_;
        if ((*(byte *)(piVar5 + 1) & 4) != 0) {
          iVar13 = iVar12 + 1;
          fVar16 = fVar18;
          if (lVar14 != 0) {
            if (iVar13 < 0) {
              iVar13 = *(int *)(lVar14 + 0xc);
            }
            fVar16 = (*(float *)(lVar14 + 0x18) - *(float *)(lVar14 + 0x14)) *
                     *(float *)((longlong)iVar13 * 0x1c + *(longlong *)(lVar14 + 0x68)) +
                     *(float *)(lVar14 + 0x14);
          }
          auVar17 = vminss_avx(auVar17,ZEXT416((uint)(fVar16 - *(float *)(lVar6 + 0xcf8))));
          uVar7 = auVar17._0_8_;
        }
        FUN_1804f37a0(iVar12,uVar7);
      }
    }
  }
  *(undefined1 *)((longlong)piVar5 + 9) = local_c8;
  *(undefined8 *)(lVar4 + 0x248) = *(undefined8 *)(lVar4 + 600);
  *(undefined8 *)(lVar4 + 0x250) = *(undefined8 *)(lVar4 + 0x260);
  uVar7 = *(undefined8 *)(piVar5 + 0x15);
  *(undefined8 *)(lVar4 + 600) = *(undefined8 *)(piVar5 + 0x13);
  *(undefined8 *)(lVar4 + 0x260) = uVar7;
  *(undefined8 *)(lVar4 + 0x1c8) = 0;
  *(undefined4 *)(lVar4 + 0x160) = 0;
  lVar14 = DAT_180bb8ae8;
  *(float *)(lVar4 + 0x118) =
       (float)(int)(*(float *)(lVar4 + 0x15c) + *(float *)(lVar4 + 0x28) + fVar18);
  lVar4 = *(longlong *)(lVar14 + 0x14d0);
  if ((*(longlong *)(lVar14 + 0x2338) == 0) && (*(longlong *)(lVar4 + 0x1c8) == 0)) {
    *(undefined1 *)(lVar4 + 0x178) = 1;
  }
  *(undefined1 *)(lVar4 + 0x178) = 0;
}



