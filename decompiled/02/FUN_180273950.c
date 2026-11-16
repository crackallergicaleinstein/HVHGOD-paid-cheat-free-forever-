// FUN_180273950 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180273950 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180273950(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  ULONGLONG UVar8;
  longlong lVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  code *pcVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  char *local_78;
  undefined8 local_70;
  char *local_68;
  longlong local_60;
  
  *(undefined4 *)(param_1 + 0x280) = 0;
  lVar12 = DAT_180c64e50;
  if (param_3 == 0) {
    return;
  }
  if (DAT_180c64e50 == 0) {
    return;
  }
  lVar6 = FUN_18017ea70();
  *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
  plVar7 = (longlong *)FUN_18027b1d0(&local_78,lVar12,0x17);
  if ((char)plVar7[1] == '\0') {
    lVar12 = 0;
  }
  else {
    lVar12 = *plVar7;
  }
  lVar6 = FUN_18017ea70();
  if (*(int *)(lVar6 + 4) != 0) {
    *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
  }
  if (lVar12 == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x28c) = *(undefined4 *)(lVar12 + 0x37c);
  lVar12 = DAT_180c64e58;
  uVar15 = *DAT_180c64e48;
  *(undefined4 *)(param_1 + 0x284) =
       *(undefined4 *)(DAT_180c64e58 + 0xc + (ulonglong)(uVar15 % 10) * 0x28);
  *(undefined4 *)(param_1 + 0x288) =
       *(undefined4 *)(lVar12 + 0x10 + (ulonglong)(uVar15 % 10) * 0x28);
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar6 = DAT_1808f0d00;
  lVar12 = DAT_1808da460;
  fVar17 = 0.0;
  if ((DAT_1808f0d00 == DAT_1808da460) && (pcVar13 = (code *)DAT_180c64e70, DAT_180c64e70 != 0)) {
LAB_180273b93:
    fVar19 = fVar17;
    fVar17 = (float)(*pcVar13)(param_2);
  }
  else {
    UVar8 = GetTickCount64();
    if ((lVar6 != lVar12) || (DAT_180c64e60 <= UVar8)) {
      iVar3 = FUN_1805f68d0(&DAT_1808f0d10);
      if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808f0d5c == 0x7fffffff) {
        DAT_1808f0d5c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      uVar11 = 1000;
      if (DAT_1808f0d00 == lVar12) {
        if ((DAT_180c64e70 == 0) && (DAT_180c64e60 <= UVar8)) goto LAB_180273aeb;
      }
      else {
        DAT_1808f0d08 = 1000;
LAB_180273aeb:
        lVar6 = -1;
        do {
          local_60 = lVar6 + 1;
          lVar16 = lVar6 + 1;
          lVar6 = local_60;
        } while ("client.dll:>E8????????418B9668030000"[lVar16] != '\0');
        local_68 = "client.dll:>E8????????418B9668030000";
        local_78 = "patterns::get_interp_amount";
        local_70 = 0x1b;
        DAT_180c64e70 = FUN_1800e5d20(&local_78,&local_68);
        DAT_1808f0d00 = lVar12;
        DAT_180c64e60 = 0xffffffffffffffff;
        if (DAT_180c64e70 == 0) {
          DAT_180c64e60 = DAT_1808f0d08 + UVar8;
          uVar11 = 60000;
          if (DAT_1808f0d08 < 60000) {
            uVar11 = DAT_1808f0d08 * 2;
          }
        }
        DAT_1808f0d08 = uVar11;
      }
      pcVar13 = (code *)DAT_180c64e70;
      FUN_1805f68fc(&DAT_1808f0d10);
      if (pcVar13 != (code *)0x0) goto LAB_180273b93;
    }
    fVar19 = fVar17;
  }
  iVar3 = 0;
  fVar17 = fVar17 * 64.0;
  auVar2 = vroundps_avx(ZEXT416((uint)ABS(fVar17)),0);
  auVar1 = vcmpss_avx(ZEXT416((uint)(ABS(fVar17) - auVar2._0_4_)),ZEXT416(0x3f000000),0);
  fVar18 = (float)((uint)((float)(auVar1._0_4_ & 0x3f800000) + auVar2._0_4_) |
                  (uint)fVar17 & 0x80000000);
  if (0.0001 <= ABS(fVar17 - fVar18)) {
    auVar1 = vroundss_avx(ZEXT816(0),ZEXT416((uint)fVar17),1);
    iVar4 = (int)auVar1._0_4_;
    fVar19 = fVar17 - (float)iVar4;
  }
  else {
    iVar4 = (int)fVar18;
  }
  *(int *)(param_1 + 0x290) = iVar4;
  *(float *)(param_1 + 0x294) = fVar19;
  uVar15 = *(uint *)(param_3 + 0x368);
  iVar4 = *(int *)(param_3 + 0x36c);
  lVar12 = (longlong)iVar4;
  if ((iVar4 - 1U < 0x20) && (uVar15 < 0x20)) {
    lVar6 = 0;
    if (3 < lVar12) {
      uVar14 = uVar15 + 2;
      puVar10 = (undefined4 *)(param_1 + 8);
      lVar16 = (lVar12 - 4U >> 2) + 1;
      iVar3 = (int)lVar16 * 4;
      lVar6 = lVar16 * 4;
      do {
        uVar5 = uVar14 - 2 & 0x8000001f;
        if ((int)uVar5 < 0) {
          uVar5 = (uVar5 - 1 | 0xffffffe0) + 1;
        }
        lVar9 = (longlong)(int)uVar5;
        puVar10[-2] = *(undefined4 *)(param_3 + 0xe8 + lVar9 * 0x14);
        puVar10[-1] = *(undefined4 *)(param_3 + 0xec + lVar9 * 0x14);
        *puVar10 = *(undefined4 *)(param_3 + 0xf0 + lVar9 * 0x14);
        puVar10[1] = *(undefined4 *)(param_3 + 0xf4 + lVar9 * 0x14);
        puVar10[2] = *(undefined4 *)(param_3 + 0xf8 + lVar9 * 0x14);
        uVar5 = uVar14 - 1 & 0x8000001f;
        if ((int)uVar5 < 0) {
          uVar5 = (uVar5 - 1 | 0xffffffe0) + 1;
        }
        lVar9 = (longlong)(int)uVar5;
        puVar10[3] = *(undefined4 *)(param_3 + 0xe8 + lVar9 * 0x14);
        puVar10[4] = *(undefined4 *)(param_3 + 0xec + lVar9 * 0x14);
        puVar10[5] = *(undefined4 *)(param_3 + 0xf0 + lVar9 * 0x14);
        puVar10[6] = *(undefined4 *)(param_3 + 0xf4 + lVar9 * 0x14);
        puVar10[7] = *(undefined4 *)(param_3 + 0xf8 + lVar9 * 0x14);
        uVar5 = uVar14 & 0x8000001f;
        if ((int)uVar5 < 0) {
          uVar5 = (uVar5 - 1 | 0xffffffe0) + 1;
        }
        lVar9 = (longlong)(int)uVar5;
        puVar10[8] = *(undefined4 *)(param_3 + 0xe8 + lVar9 * 0x14);
        puVar10[9] = *(undefined4 *)(param_3 + 0xec + lVar9 * 0x14);
        puVar10[10] = *(undefined4 *)(param_3 + 0xf0 + lVar9 * 0x14);
        puVar10[0xb] = *(undefined4 *)(param_3 + 0xf4 + lVar9 * 0x14);
        puVar10[0xc] = *(undefined4 *)(param_3 + 0xf8 + lVar9 * 0x14);
        uVar5 = uVar14 + 1 & 0x8000001f;
        if ((int)uVar5 < 0) {
          uVar5 = (uVar5 - 1 | 0xffffffe0) + 1;
        }
        lVar9 = (longlong)(int)uVar5;
        puVar10[0xd] = *(undefined4 *)(param_3 + 0xe8 + lVar9 * 0x14);
        puVar10[0xe] = *(undefined4 *)(param_3 + 0xec + lVar9 * 0x14);
        puVar10[0xf] = *(undefined4 *)(param_3 + 0xf0 + lVar9 * 0x14);
        puVar10[0x10] = *(undefined4 *)(param_3 + 0xf4 + lVar9 * 0x14);
        puVar10[0x11] = *(undefined4 *)(param_3 + 0xf8 + lVar9 * 0x14);
        uVar14 = uVar14 + 4;
        puVar10 = puVar10 + 0x14;
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
    }
    if (lVar6 < lVar12) {
      uVar15 = iVar3 + uVar15;
      puVar10 = (undefined4 *)(param_1 + 8 + lVar6 * 0x14);
      lVar12 = lVar12 - lVar6;
      do {
        uVar14 = uVar15 & 0x8000001f;
        if ((int)uVar14 < 0) {
          uVar14 = (uVar14 - 1 | 0xffffffe0) + 1;
        }
        lVar6 = (longlong)(int)uVar14;
        puVar10[-2] = *(undefined4 *)(param_3 + 0xe8 + lVar6 * 0x14);
        puVar10[-1] = *(undefined4 *)(param_3 + 0xec + lVar6 * 0x14);
        *puVar10 = *(undefined4 *)(param_3 + 0xf0 + lVar6 * 0x14);
        puVar10[1] = *(undefined4 *)(param_3 + 0xf4 + lVar6 * 0x14);
        puVar10[2] = *(undefined4 *)(param_3 + 0xf8 + lVar6 * 0x14);
        uVar15 = uVar15 + 1;
        puVar10 = puVar10 + 5;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
    }
    *(int *)(param_1 + 0x280) = iVar4;
  }
  return;
}



