// FUN_1802f1860 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802f1860 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802f1860(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  undefined1 auVar1 [16];
  int iVar2;
  ULONGLONG UVar3;
  float *pfVar4;
  longlong lVar5;
  float *pfVar6;
  uint *puVar7;
  uint *puVar8;
  ulonglong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [64];
  float fVar16;
  undefined1 auVar17 [64];
  uint uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auStack_198 [32];
  float local_178 [2];
  undefined8 local_170;
  float local_168;
  undefined8 local_160;
  float local_158 [4];
  float local_148;
  float local_144;
  float local_140 [2];
  undefined **local_138;
  float *local_130;
  undefined8 local_128;
  undefined ***local_100;
  float local_f8;
  float local_f4;
  float local_f0;
  ulonglong local_e8;
  
  local_e8 = DAT_1808d5f00 ^ (ulonglong)auStack_198;
  uVar9 = 0xffffffffffffffff;
  iVar2 = DAT_180c6ed08;
  if (DAT_180c6ed08 == 0) {
    UVar3 = GetTickCount64();
    if (UVar3 < DAT_180c6ed10) {
      iVar2 = 0;
    }
    else {
      local_170 = &DAT_1808fdcb0;
      iVar2 = FUN_1805f68d0(&DAT_1808fdcb0);
      if (iVar2 != 0) goto LAB_1802f1f85;
      if (DAT_1808fdcfc == 0x7fffffff) {
        DAT_1808fdcfc = 0x7ffffffe;
        goto LAB_1802f1f7a;
      }
      if ((DAT_180c6ed08 == 0) && (DAT_180c6ed10 <= UVar3)) {
        DAT_180c6ed08 = FUN_1804174b0("C_BaseCSGrenade",0x57c1b8da);
        if (DAT_180c6ed08 == 0) {
          DAT_180c6ed10 = UVar3 + 1000;
        }
        else {
          DAT_180c6ed10 = 0xffffffffffffffff;
        }
      }
      iVar2 = DAT_180c6ed08;
      FUN_1805f68fc(&DAT_1808fdcb0);
    }
  }
  fVar12 = 0.0;
  if (0.0 < *(float *)(iVar2 + param_4)) {
    fVar13 = 1.0;
    local_170 = (undefined *)CONCAT44(local_170._4_4_,0x3f800000);
    local_178[0] = 0.0;
    iVar2 = DAT_180c6ecf0;
    if (DAT_180c6ecf0 == 0) {
      UVar3 = GetTickCount64();
      if (UVar3 < DAT_180c6ecf8) {
        iVar2 = 0;
      }
      else {
        local_160 = &DAT_1808fdd00;
        iVar2 = FUN_1805f68d0(&DAT_1808fdd00);
        if (iVar2 != 0) {
LAB_1802f1f85:
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(5);
        }
        if (DAT_1808fdd4c == 0x7fffffff) {
          DAT_1808fdd4c = 0x7ffffffe;
LAB_1802f1f7a:
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(6);
        }
        if ((DAT_180c6ecf0 == 0) && (DAT_180c6ecf8 <= UVar3)) {
          DAT_180c6ecf0 = FUN_1804174b0("C_BaseCSGrenade",0xf4d38cf4);
          if (DAT_180c6ecf0 == 0) {
            uVar9 = UVar3 + 1000;
          }
          DAT_180c6ecf8 = uVar9;
        }
        iVar2 = DAT_180c6ecf0;
        FUN_1805f68fc(&DAT_1808fdd00);
      }
    }
    fVar11 = *(float *)(iVar2 + param_4);
    local_160 = (undefined *)CONCAT44(local_160._4_4_,fVar11);
    pfVar4 = local_178;
    if (fVar12 <= fVar11) {
      pfVar4 = (float *)&local_160;
    }
    pfVar6 = (float *)&local_170;
    if (fVar11 <= fVar13) {
      pfVar6 = pfVar4;
    }
    uVar18 = 0x7fffffff;
    auVar1 = vcmpss_avx(ZEXT416((uint)ABS(*pfVar6 - 0.5)),ZEXT416(0x3dcccccd),2);
    auVar1 = vblendvps_avx(ZEXT416((uint)*pfVar6),SUB6416(ZEXT464(0x3f000000),0),auVar1);
    local_158[2] = 750.0;
    local_158[0] = 15.0;
    local_158[1] = DAT_180b8f950 * 0.9;
    pfVar4 = local_158;
    if (15.0 <= local_158[1]) {
      pfVar4 = local_158 + 1;
    }
    pfVar6 = local_158 + 2;
    if (local_158[1] <= 750.0) {
      pfVar6 = pfVar4;
    }
    fVar11 = auVar1._0_4_ * 0.7;
    local_178[0] = (fVar11 + 0.3) * *pfVar6;
    local_170 = (undefined *)CONCAT44(fVar12,fVar12);
    local_168 = fVar12;
    FUN_1802f1f90(fVar11,&local_170);
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) | 1;
    lVar5 = *(longlong *)(param_2 + 0x40);
    puVar8 = (uint *)0x0;
    if (lVar5 != 0) {
      puVar8 = (uint *)(lVar5 + 0x10);
    }
    if (puVar8 != (uint *)0x0) {
      local_f8 = (float)DAT_180b8e118;
      local_f4 = DAT_180b8e118._4_4_;
      local_f0 = DAT_180b8e120;
      local_138 = std::
                  _Func_impl_no_alloc<`private:_void___cdecl_features::misc::projectile_trajectory::correct_throw_angles(systems::input::usercmd*___ptr64,systems::local::snapshot_const&___ptr64,unsigned___int64)___ptr64'::`2'::<lambda_3>,void>
                  ::vftable;
      local_130 = &local_f8;
      local_100 = &local_138;
      local_128 = param_3;
      FUN_180412b50(lVar5,param_2,param_3,&local_138);
      if (local_100 != (undefined ***)0x0) {
        (*(code *)(*local_100)[4])(local_100,local_100 != &local_138);
      }
      if (fVar13 <= local_f4 * local_f4 + local_f8 * local_f8 + local_f0 * local_f0) {
        fVar16 = local_f8 * 1.25;
        fVar19 = local_f4 * 1.25;
        fVar20 = local_f0 * 1.25;
        fVar11 = fVar19 * local_170._4_4_ + fVar16 * (float)local_170 + fVar20 * local_168;
        fVar10 = fVar16 - fVar11 * (float)local_170;
        fVar22 = fVar19 - fVar11 * local_170._4_4_;
        fVar21 = fVar20 - fVar11 * local_168;
        fVar10 = fVar22 * fVar22 + fVar10 * fVar10 + fVar21 * fVar21;
        if (fVar10 < local_178[0] * local_178[0]) {
          fVar10 = local_178[0] * local_178[0] - fVar10;
          fVar22 = (float)local_170;
          fVar21 = local_170._4_4_;
          fVar23 = local_168;
          if (fVar10 < 0.0) {
            fVar10 = (float)FUN_18061e150(fVar10);
          }
          else {
            fVar10 = SQRT(fVar10);
          }
          fVar10 = fVar10 + fVar11;
          if (fVar12 < fVar10) {
            fVar14 = fVar13 / local_178[0];
            fVar16 = (fVar22 * fVar10 - fVar16) * fVar14;
            fVar19 = (fVar21 * fVar10 - fVar19) * fVar14;
            fVar14 = (fVar23 * fVar10 - fVar20) * fVar14;
            fVar11 = fVar19 * fVar19 + fVar16 * fVar16 + fVar14 * fVar14;
            if (fVar11 != fVar12) {
              if (fVar11 < 0.0) {
                fVar11 = (float)FUN_18061e150(fVar11);
              }
              else {
                fVar11 = SQRT(fVar11);
              }
              if (0.001 <= fVar11) {
                fVar11 = fVar13 / fVar11;
                auVar15 = ZEXT464((uint)(fVar11 * fVar16));
                auVar17 = ZEXT464((uint)(fVar11 * fVar19));
                local_140[0] = fVar11 * fVar14;
                local_148 = fVar11 * fVar16;
                local_144 = fVar11 * fVar19;
                local_160._0_4_ = fVar13;
                local_170._0_4_ = -1.0;
                pfVar4 = (float *)&local_170;
                if (-1.0 <= local_140[0]) {
                  pfVar4 = local_140;
                }
                pfVar6 = (float *)&local_160;
                if (local_140[0] <= fVar13) {
                  pfVar6 = pfVar4;
                }
                fVar12 = (float)FUN_180636a60(*pfVar6);
                fVar12 = -fVar12 * 57.295776;
                fVar13 = (float)FUN_180636c80(auVar17._0_8_,auVar15._0_8_);
                lVar5 = 2;
                local_160._0_4_ = fVar12;
                do {
                  local_160._0_4_ =
                       ((90.0 - (float)((uint)(((90.0 - (float)((uint)(((90.0 - (float)((uint)(((
                                                  90.0 - (float)((uint)(((90.0 - (float)((uint)(((
                                                  90.0 - (float)((uint)(((90.0 - (float)((uint)(((
                                                  90.0 - (float)((uint)(float)local_160 & uVar18)) *
                                                  10.0) / 90.0 + fVar12) & uVar18)) * 10.0) / 90.0 +
                                                  fVar12) & uVar18)) * 10.0) / 90.0 + fVar12) &
                                                  uVar18)) * 10.0) / 90.0 + fVar12) & uVar18)) *
                                                  10.0) / 90.0 + fVar12) & uVar18)) * 10.0) / 90.0 +
                                                  fVar12) & uVar18)) * 10.0) / 90.0 + fVar12) &
                                       uVar18)) * 10.0) / 90.0 + fVar12;
                  lVar5 = lVar5 + -1;
                } while (lVar5 != 0);
                local_178[0] = 89.0;
                local_170 = (undefined *)CONCAT44(local_170._4_4_,0xc2b20000);
                pfVar4 = (float *)&local_170;
                if (-89.0 <= (float)local_160) {
                  pfVar4 = (float *)&local_160;
                }
                pfVar6 = local_178;
                if ((float)local_160 <= 89.0) {
                  pfVar6 = pfVar4;
                }
                fVar12 = *pfVar6;
                *puVar8 = *puVar8 | 4;
                puVar7 = (uint *)0x0;
                if (*(longlong *)(puVar8 + 0xc) != 0) {
                  puVar7 = (uint *)(*(longlong *)(puVar8 + 0xc) + 0x10);
                }
                *puVar7 = *puVar7 | 1;
                puVar7[2] = (uint)fVar12;
                *puVar8 = *puVar8 | 4;
                puVar7 = (uint *)0x0;
                if (*(longlong *)(puVar8 + 0xc) != 0) {
                  puVar7 = (uint *)(*(longlong *)(puVar8 + 0xc) + 0x10);
                }
                *puVar7 = *puVar7 | 2;
                puVar7[3] = (uint)(fVar13 * 57.295776);
              }
            }
          }
        }
      }
    }
  }
}



