// FUN_1802ee830 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802ee830 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802ee830(undefined8 param_1,longlong param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ULONGLONG UVar4;
  longlong *plVar5;
  undefined8 **ppuVar6;
  float *pfVar7;
  char *pcVar8;
  undefined8 **ppuVar9;
  float *pfVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  char *pcVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_168 [32];
  float local_148;
  float local_144 [3];
  undefined8 *local_138;
  undefined8 local_130;
  undefined **local_128;
  float *local_120;
  undefined8 *local_118;
  undefined ***local_f0;
  undefined8 local_e8;
  longlong local_e0;
  float local_d8;
  float local_d4;
  longlong local_d0;
  undefined8 local_c8;
  longlong lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  ulonglong local_98;
  
  local_98 = DAT_1808d5f00 ^ (ulonglong)auStack_168;
  DAT_180b8f989 = 0;
  DAT_180b8f98d = 0;
  if ((((DAT_180b0bd28 == '\0') && (DAT_180cc76f0 == '\0')) && (DAT_180cc78b8 == '\0')) ||
     (DAT_180bb88c9 != '\0')) {
    DAT_180b8f994 = 0;
    DAT_180b8f98d = 0;
    DAT_180b8f98b = '\0';
    DAT_180b8f989 = 0;
  }
  AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  local_c8 = _DAT_180bb8890;
  lStack_c0 = lRam0000000180bb8898;
  uStack_b8 = uRam0000000180bb88a0;
  uStack_b0 = uRam0000000180bb88a8;
  local_a8 = _DAT_180bb88b0;
  uStack_a0 = uRam0000000180bb88b8;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  if (lStack_c0 == 0) {
    DAT_180b8f98b = '\0';
    DAT_180b8f994 = 0;
  }
  if ((char)uStack_a0 == '\0') {
    DAT_180b8f98b = '\0';
    DAT_180b8f994 = 0;
  }
  lVar12 = 1;
  if ((DAT_180cd3ea0 & 1) == 0) {
    DAT_180cd3ea0 = DAT_180cd3ea0 | 1;
    local_d8 = 2.0008031e+15;
    local_d0 = 0;
    local_e8 = &local_d8;
    local_e0 = 1;
    FUN_18044c9c0(DAT_180c64058,&local_e8);
    DAT_180cd3ea8 = local_d0;
  }
  DAT_180b8f95c = *(undefined4 *)(DAT_180cd3ea8 + 0x58);
  if ((DAT_180cd3eb0 & 1) == 0) {
    DAT_180cd3eb0 = DAT_180cd3eb0 | 1;
    local_e8 = (float *)CONCAT44(local_e8._4_4_,0x1aef2a38);
    local_e0 = 0;
    local_138 = &local_e8;
    local_130 = 1;
    FUN_18044c9c0(DAT_180c64058,&local_138);
    DAT_180cd3eb8 = local_e0;
  }
  uVar16 = FUN_180637540((*(float *)(DAT_180cd3eb8 + 0x58) * 3.1415927) / 180.0);
  DAT_180b8f960 = (undefined4)uVar16;
  FUN_1802f0660(uVar16,&local_c8);
  if (DAT_180b0bd28 == '\0') {
    DAT_180b8f98b = '\0';
    DAT_180b8f994 = 0;
  }
  if (DAT_180cc9348 != 9) {
    DAT_180b8f98b = '\0';
    DAT_180b8f994 = 0;
  }
  FUN_1802f0330();
  if (DAT_180b8f948 == 0xbbe43941) {
    lVar12 = 0;
  }
  else if (DAT_180b8f948 != 0xc243cce2) {
    if (DAT_180b8f948 == 0x937fcfa3) {
      lVar12 = 2;
    }
    else if ((DAT_180b8f948 == 0x1d8fded0) || (DAT_180b8f948 == 0xf7b68f78)) {
      lVar12 = 3;
    }
    else {
      if (DAT_180b8f948 != 0x488e8052) {
        DAT_180b8f98b = '\0';
        DAT_180b8f994 = 0;
      }
      lVar12 = 4;
    }
  }
  if (DAT_180b0bd20 == 0) {
    pcVar8 = &DAT_180b0bbd0;
    pcVar14 = &DAT_180b0bc38;
  }
  else {
    pcVar14 = &DAT_180b0b5a8 + lVar12 * 0x150;
    pcVar8 = &DAT_180b0b540 + lVar12 * 0x150;
    if (pcVar8 == (char *)0x0) {
      DAT_180b8f98b = '\0';
      DAT_180b8f994 = 0;
    }
  }
  if (*pcVar8 == '\0') {
    DAT_180b8f98b = '\0';
    DAT_180b8f994 = 0;
  }
  uVar13 = 0xffffffffffffffff;
  iVar3 = DAT_180c6ee64;
  if (DAT_180c6ee64 == 0) {
    UVar4 = GetTickCount64();
    if (UVar4 < DAT_180c6ee68) {
      iVar3 = 0;
    }
    else {
      local_e8 = (float *)&DAT_1808fe4d0;
      iVar3 = FUN_1805f68d0(&DAT_1808fe4d0);
      if (iVar3 != 0) goto LAB_1802ef0cd;
      if (DAT_1808fe51c == 0x7fffffff) {
        DAT_1808fe51c = 0x7ffffffe;
        goto LAB_1802ef0e2;
      }
      if ((DAT_180c6ee64 == 0) && (DAT_180c6ee68 <= UVar4)) {
        DAT_180c6ee64 = FUN_1804174b0("C_BaseCSGrenade",0xb3d8aaba);
        if (DAT_180c6ee64 == 0) {
          DAT_180c6ee68 = UVar4 + 1000;
        }
        else {
          DAT_180c6ee68 = 0xffffffffffffffff;
        }
      }
      iVar3 = DAT_180c6ee64;
      FUN_1805f68fc(&DAT_1808fe4d0);
    }
  }
  cVar1 = *(char *)(iVar3 + DAT_180cc9330);
  iVar3 = DAT_180c6ee50;
  if (DAT_180c6ee50 == 0) {
    UVar4 = GetTickCount64();
    if (UVar4 < DAT_180c6ee58) {
      iVar3 = 0;
    }
    else {
      local_e8 = (float *)&DAT_1808fe480;
      iVar3 = FUN_1805f68d0(&DAT_1808fe480);
      if (iVar3 != 0) {
LAB_1802ef0cd:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808fe4cc == 0x7fffffff) {
        DAT_1808fe4cc = 0x7ffffffe;
LAB_1802ef0e2:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if ((DAT_180c6ee50 == 0) && (DAT_180c6ee58 <= UVar4)) {
        DAT_180c6ee50 = FUN_1804174b0("C_BaseCSGrenade",0x57c1b8da);
        if (DAT_180c6ee50 == 0) {
          DAT_180c6ee58 = UVar4 + 1000;
        }
        else {
          DAT_180c6ee58 = 0xffffffffffffffff;
        }
      }
      iVar3 = DAT_180c6ee50;
      FUN_1805f68fc(&DAT_1808fe480);
    }
  }
  uVar11 = *(ulonglong *)(param_2 + 0x60);
  if (((uVar11 & 1) == 0) && ((uVar11 & 0x800) == 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  fVar15 = 0.0;
  if (0.0 < *(float *)(iVar3 + DAT_180cc9330)) {
    DAT_180b8f98b = '\0';
    DAT_180b8f994 = 0;
    DAT_180b8f98e = '\x01';
    if (*pcVar14 == '\0') {
      DAT_180b8f98b = '\0';
      DAT_180b8f98e = '\x01';
      DAT_180b8f994 = 0;
    }
    DAT_180b8f98d = DAT_180b8f98a == '\0';
    FUN_1802f1860(*(float *)(iVar3 + DAT_180cc9330),param_2,&local_c8);
  }
  if (DAT_180b8f98e != '\0') {
    plVar5 = (longlong *)FUN_18017bf40(&local_e8);
    _DAT_180b8f980 = *plVar5;
  }
  iVar3 = DAT_180c6ee60;
  DAT_180b8f98e = '\0';
  if (cVar1 != '\0') {
    if (bVar2) {
      DAT_180b8f988 = cVar1;
      DAT_180b8f989 = 1;
      DAT_180b8f98a = (*(uint *)(param_2 + 0x60) & 0x618) == 8;
      DAT_180b8f98b = '\0';
      DAT_180b8f98e = '\0';
      DAT_180b8f994 = 0;
    }
    if (*pcVar14 != '\0') {
      if (DAT_180b8f98b == '\0') {
        DAT_180b8f98b = '\x01';
        DAT_180b8f994 = 0;
        fVar17 = 1.0;
        local_e8 = (float *)CONCAT44(local_e8._4_4_,0x3f800000);
        local_148 = fVar15;
        if (DAT_180c6ee60 == 0) {
          fVar17 = 1.0;
          UVar4 = GetTickCount64();
          if (DAT_180c6ee38 <= UVar4) {
            local_138 = (undefined8 *)&DAT_1808fe430;
            iVar3 = FUN_1805f68d0(&DAT_1808fe430);
            if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_1805f6d44(5);
            }
            if (DAT_1808fe47c == 0x7fffffff) {
              DAT_1808fe47c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
              FUN_1805f6d44(6);
            }
            if ((DAT_180c6ee60 == 0) && (DAT_180c6ee38 <= UVar4)) {
              DAT_180c6ee60 = FUN_1804174b0("C_BaseCSGrenade",0xf4d38cf4);
              if (DAT_180c6ee60 == 0) {
                uVar13 = UVar4 + 1000;
              }
              DAT_180c6ee38 = uVar13;
            }
            iVar3 = DAT_180c6ee60;
            FUN_1805f68fc(&DAT_1808fe430);
          }
        }
        fVar18 = *(float *)(iVar3 + DAT_180cc9330);
        local_138 = (undefined8 *)CONCAT44(local_138._4_4_,fVar18);
        ppuVar9 = (undefined8 **)&local_148;
        if (fVar15 <= fVar18) {
          ppuVar9 = &local_138;
        }
        ppuVar6 = (undefined8 **)&local_e8;
        if (fVar18 <= fVar17) {
          ppuVar6 = ppuVar9;
        }
        DAT_180b8f990 = *(float *)ppuVar6;
        if (((uVar11 & 1) == 0) && ((uVar11 & 0x800) != 0)) {
          DAT_180b8f98c = '\x01';
        }
        else {
          DAT_180b8f98c = '\0';
        }
      }
      local_d8 = (float)DAT_180b8e118;
      local_d4 = DAT_180b8e118._4_4_;
      local_d0 = CONCAT44(local_d0._4_4_,DAT_180b8e120);
      local_128 = std::
                  _Func_impl_no_alloc<`public:_void___cdecl_features::misc::projectile_trajectory::on_create_move(systems::input::usercmd*___ptr64)___ptr64'::`35'::<lambda_6>,void>
                  ::vftable;
      local_120 = &local_d8;
      local_118 = &local_c8;
      local_f0 = &local_128;
      FUN_180412b50(DAT_180b8e120,param_2,&local_c8,&local_128);
      if (local_f0 != (undefined ***)0x0) {
        (*(code *)(*local_f0)[4])(local_f0,local_f0 != &local_128);
      }
      fVar17 = local_d8 * 1.25;
      fVar18 = local_d4 * 1.25;
      fVar19 = (float)local_d0 * 1.25;
      local_144[2] = 750.0;
      local_144[0] = 15.0;
      local_144[1] = DAT_180b8f950 * 0.9;
      pfVar7 = local_144;
      if (15.0 <= local_144[1]) {
        pfVar7 = local_144 + 1;
      }
      pfVar10 = local_144 + 2;
      if (local_144[1] <= 750.0) {
        pfVar10 = pfVar7;
      }
      fVar20 = (DAT_180b8f990 * 0.7 + 0.3) * *pfVar10;
      local_e0 = CONCAT44(local_e0._4_4_,fVar15);
      local_e8._0_4_ = fVar15;
      local_e8._4_4_ = fVar15;
      FUN_1802f1f90(DAT_180b8f990,&local_e8);
      fVar15 = fVar18 * local_e8._4_4_ + fVar17 * (float)local_e8 + fVar19 * (float)local_e0;
      fVar17 = fVar17 - fVar15 * (float)local_e8;
      fVar18 = fVar18 - fVar15 * local_e8._4_4_;
      fVar19 = fVar19 - fVar15 * (float)local_e0;
      fVar15 = fVar18 * fVar18 + fVar17 * fVar17 + fVar19 * fVar19;
      if (fVar15 < 0.0) {
        fVar15 = (float)FUN_18061e150();
      }
      else {
        fVar15 = SQRT(fVar15);
      }
      if (((fVar20 <= fVar15) && (DAT_180b8f98a == '\0')) && (DAT_180b8f994 < 0x20)) {
        if (DAT_180b8f98c == '\0') {
          uVar13 = *(ulonglong *)(param_2 + 0x68) | 1;
          uVar11 = *(ulonglong *)(param_2 + 0x60) | 1;
        }
        else {
          uVar13 = *(ulonglong *)(param_2 + 0x68) | 0x800;
          uVar11 = *(ulonglong *)(param_2 + 0x60) | 0x800;
        }
        *(ulonglong *)(param_2 + 0x60) = uVar11;
        *(ulonglong *)(param_2 + 0x68) = uVar13;
        DAT_180b8f994 = DAT_180b8f994 + 1;
        DAT_180b8f989 = 1;
        DAT_180b8f98d = 1;
      }
      DAT_180b8f988 = cVar1;
      DAT_180b8f989 = 1;
      DAT_180b8f98b = '\0';
      DAT_180b8f98d = DAT_180b8f98a == '\0';
      DAT_180b8f994 = 0;
    }
  }
  DAT_180b8f988 = cVar1;
  if ((cVar1 == '\0') &&
     (plVar5 = (longlong *)FUN_18017bf40(&local_e8),
     (float)(*plVar5 - _DAT_180b8f980) / 1e+09 < 0.75)) {
  }
  DAT_180b8f989 = 1;
}



