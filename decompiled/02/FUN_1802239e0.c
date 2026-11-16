// FUN_1802239e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802239e0 */

undefined8 FUN_1802239e0(longlong param_1)

{
  undefined1 auVar1 [16];
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  ULONGLONG UVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 in_ZMM9 [64];
  undefined1 auVar21 [64];
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined *local_118;
  longlong local_110;
  undefined8 *local_108;
  undefined1 *local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8 [16];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined1 local_94 [44];
  undefined1 local_68 [16];
  
  local_68 = in_ZMM9._0_16_;
  local_110 = param_1;
  lVar5 = FUN_1802196a0(param_1,0x1d);
  lVar9 = 0;
  iVar13 = 0;
  if (lVar5 != 0) {
    uVar15 = 0xffffffff00000085;
    uVar16 = 0xffffffffffffffff;
    uVar17 = 0xffffffffffffffff;
    uVar18 = 0xfffffffff;
    uVar19 = 0x3900000048;
    uVar20 = 0xffffffff0000009e;
    auVar1 = vpcmpeqd_avx(in_ZMM9._0_16_,in_ZMM9._0_16_);
    auVar21 = ZEXT1664(auVar1);
    uVar22 = 0xffffffffffffffff;
    uVar23 = 0x850000000f;
    uVar24 = 0x9e00000038;
    uVar25 = 0xffffffffffffffff;
    iVar12 = (int)local_118;
    iVar14 = (int)local_118;
    for (; iVar13 < 0x2e7; iVar13 = iVar13 + 1) {
      lVar11 = iVar13 + lVar5;
      local_d8 = auVar21._0_16_;
      local_98 = 0xffffffff;
      local_108 = &local_f8;
      local_100 = local_94;
      local_f8 = uVar24;
      uStack_f0 = uVar25;
      local_e8 = uVar22;
      uStack_e0 = uVar23;
      local_c8 = uVar19;
      uStack_c0 = uVar20;
      local_b8 = uVar17;
      uStack_b0 = uVar18;
      local_a8 = uVar15;
      uStack_a0 = uVar16;
      cVar3 = FUN_1802197b0(lVar11,&local_108);
      if (cVar3 != '\0') {
        lVar6 = FUN_18017ea70();
        *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
        bVar2 = false;
        if (lVar11 + 2 != 0) {
          local_118 = (undefined *)((ulonglong)local_118 & 0xffffffff00000000);
          cVar3 = FUN_1804514f0(&local_118,lVar11 + 2,4);
          if (cVar3 == '\0') {
            bVar2 = false;
          }
          else {
            bVar2 = true;
            iVar12 = (int)local_118;
          }
        }
        lVar6 = FUN_18017ea70();
        if (*(int *)(lVar6 + 4) != 0) {
          *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
        }
        iVar8 = iVar12;
        if (!bVar2) {
          iVar8 = 0;
        }
        lVar6 = FUN_18017ea70();
        *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
        bVar2 = false;
        if (lVar11 + 0xf != 0) {
          local_118 = (undefined *)((ulonglong)local_118 & 0xffffffff00000000);
          cVar3 = FUN_1804514f0(&local_118,lVar11 + 0xf,4);
          if (cVar3 == '\0') {
            bVar2 = false;
          }
          else {
            bVar2 = true;
            iVar14 = (int)local_118;
          }
        }
        lVar11 = FUN_18017ea70();
        if (*(int *)(lVar11 + 4) != 0) {
          *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + -1;
        }
        iVar10 = iVar14;
        if (!bVar2) {
          iVar10 = 0;
        }
        if (lVar9 != 0) {
          return 0;
        }
        iVar4 = DAT_180c63f28;
        if (DAT_180c63f28 == 0) {
          UVar7 = GetTickCount64();
          if (UVar7 < DAT_180c63f30) {
            iVar4 = 0;
          }
          else {
            local_118 = &DAT_1808ec2a0;
            iVar4 = FUN_1805f68d0(&DAT_1808ec2a0);
            if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_1805f6d44(5);
            }
            if (DAT_1808ec2ec == 0x7fffffff) {
              DAT_1808ec2ec = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
              FUN_1805f6d44(6);
            }
            if ((DAT_180c63f28 == 0) && (DAT_180c63f30 <= UVar7)) {
              DAT_180c63f28 = FUN_1804174b0("C_EconItemView",0x216db5e3);
              if (DAT_180c63f28 == 0) {
                DAT_180c63f30 = UVar7 + 1000;
              }
              else {
                DAT_180c63f30 = 0xffffffffffffffff;
              }
            }
            iVar4 = DAT_180c63f28;
            FUN_1805f68fc(&DAT_1808ec2a0);
          }
        }
        if (iVar8 != iVar4) {
          return 0;
        }
        if (iVar10 < 1) {
          return 0;
        }
        if (iVar8 < iVar10 + 8) {
          return 0;
        }
        if (0x10 < iVar8 - iVar10) {
          return 0;
        }
        lVar9 = (longlong)iVar10;
      }
    }
    if (lVar9 != 0) {
      local_118 = (undefined *)0x0;
      lVar9 = local_110 + lVar9;
      cVar3 = FUN_1804513c0(lVar9,8,1);
      if (cVar3 != '\0') {
        lVar5 = FUN_18017ea70();
        *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
        cVar3 = FUN_1801fde60(lVar9,&local_118);
        lVar5 = FUN_18017ea70();
        if (*(int *)(lVar5 + 4) != 0) {
          *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + -1;
        }
        if (cVar3 != '\0') {
          return 1;
        }
      }
    }
  }
  return 0;
}



