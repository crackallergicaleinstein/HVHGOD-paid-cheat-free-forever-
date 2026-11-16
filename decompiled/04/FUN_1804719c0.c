// FUN_1804719c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804719c0 */

undefined8
FUN_1804719c0(undefined8 *param_1,longlong param_2,int param_3,undefined8 param_4,int param_5,
             undefined4 param_6,int param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  undefined8 unaff_XMM6_Qa;
  undefined8 unaff_XMM6_Qb;
  undefined8 uVar17;
  undefined8 unaff_XMM7_Qa;
  undefined8 uVar18;
  undefined8 unaff_XMM7_Qb;
  undefined8 uVar19;
  undefined8 unaff_XMM8_Qa;
  undefined8 uVar20;
  undefined8 unaff_XMM8_Qb;
  undefined8 uVar21;
  undefined8 unaff_XMM9_Qa;
  undefined8 uVar22;
  undefined8 unaff_XMM9_Qb;
  undefined8 uVar23;
  longlong local_res10;
  int local_res18;
  int local_148;
  int local_144;
  longlong local_120;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  
  piVar4 = (int *)*param_1;
  iVar14 = ((param_5 == 0x10) + 1) * (int)param_4;
  if (param_7 == 0) {
    uVar8 = FUN_180470e10(param_1,param_2,param_3,param_4,*piVar4,piVar4[1],param_5,param_6);
    return uVar8;
  }
  iVar15 = piVar4[1];
  iVar10 = *piVar4;
  if ((((((iVar10 < 0) || (iVar15 < 0)) ||
        ((iVar15 != 0 && ((int)(0x7fffffff / (longlong)iVar15) < iVar10)))) ||
       ((iVar10 = iVar10 * iVar15, iVar10 < 0 || (iVar14 < 0)))) ||
      ((iVar14 != 0 && ((int)(0x7fffffff / (longlong)iVar14) < iVar10)))) ||
     (lVar9 = _malloc_base((longlong)(iVar10 * iVar14)), lVar9 == 0)) {
    uVar8 = 0;
  }
  else {
    local_58 = unaff_XMM6_Qa;
    uStack_50 = unaff_XMM6_Qb;
    uVar8 = 0x800000008;
    uVar17 = 0x400000008;
    local_68 = unaff_XMM7_Qa;
    uStack_60 = unaff_XMM7_Qb;
    uVar18 = 0x800000008;
    uVar19 = 0x400000004;
    local_78 = unaff_XMM8_Qa;
    uStack_70 = unaff_XMM8_Qb;
    uVar20 = 0;
    uVar21 = 4;
    local_88 = unaff_XMM9_Qa;
    uStack_80 = unaff_XMM9_Qb;
    uVar22 = 0x400000000;
    uVar23 = 0x200000000;
    local_144 = 0;
    local_120 = 0;
    local_res10 = param_2;
    local_res18 = param_3;
    do {
      piVar4 = (int *)*param_1;
      local_f0 = uVar22;
      uStack_e8 = uVar23;
      local_e0 = 0;
      local_dc = 1;
      uVar1 = *(uint *)((longlong)&local_f0 + local_120);
      local_d0 = uVar18;
      uStack_c8 = uVar19;
      local_c0 = 2;
      local_bc = 2;
      local_b8 = 1;
      uVar2 = *(uint *)((longlong)&local_d0 + local_120);
      uVar6 = (ulonglong)(~uVar1 + uVar2 + *piVar4) / (ulonglong)uVar2;
      local_b0 = uVar20;
      uStack_a8 = uVar21;
      local_a0 = 2;
      local_98 = 1;
      uVar3 = *(uint *)((longlong)&local_b0 + local_120);
      local_100 = 4;
      local_fc = 2;
      local_f8 = 2;
      iVar15 = (int)uVar6;
      local_110 = uVar8;
      uStack_108 = uVar17;
      if ((iVar15 != 0) &&
         (uVar7 = (piVar4[1] + *(uint *)((longlong)&local_110 + local_120) + ~uVar3) /
                  *(uint *)((longlong)&local_110 + local_120), uVar7 != 0)) {
        uVar11 = ((iVar15 * piVar4[2] * param_5 + 7 >> 3) + 1) * uVar7;
        iVar10 = FUN_180470e10(param_1,local_res10,local_res18,(int)param_4,iVar15,uVar7,param_5,
                               param_6);
        if (iVar10 == 0) {
          thunk_FUN_180621380(lVar9);
          return 0;
        }
        param_7 = 0;
        if (0 < (int)uVar7) {
          local_148 = 0;
          do {
            if (0 < iVar15) {
              piVar4 = (int *)*param_1;
              lVar5 = param_1[3];
              iVar10 = *(int *)((longlong)&local_110 + local_120);
              iVar12 = uVar1 * iVar14;
              uVar16 = uVar6;
              iVar13 = local_148;
              do {
                FUN_18063aed0((longlong)iVar12 +
                              (ulonglong)((iVar10 * param_7 + uVar3) * *piVar4 * iVar14) + lVar9,
                              iVar13 + lVar5,(longlong)iVar14);
                iVar13 = iVar13 + iVar14;
                iVar12 = iVar12 + uVar2 * iVar14;
                uVar16 = uVar16 - 1;
              } while (uVar16 != 0);
            }
            param_7 = param_7 + 1;
            local_148 = local_148 + iVar15 * iVar14;
          } while (param_7 < (int)uVar7);
        }
        thunk_FUN_180621380(param_1[3]);
        local_res18 = local_res18 - uVar11;
        local_res10 = local_res10 + (ulonglong)uVar11;
      }
      local_144 = local_144 + 1;
      local_120 = local_120 + 4;
    } while (local_144 < 7);
    param_1[3] = lVar9;
    uVar8 = 1;
  }
  return uVar8;
}



