// FUN_1802564c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802564c0 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802564c0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  uint *puVar4;
  uint *puVar5;
  float *pfVar6;
  float *pfVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar10;
  undefined1 auVar11 [64];
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [64];
  undefined1 auStack_1108 [32];
  undefined **local_10e8;
  char *local_10e0;
  double local_10d8;
  double local_10d0;
  undefined4 local_10c8;
  undefined1 local_10b8;
  float local_10b4;
  float local_10b0 [2];
  undefined1 local_10a8 [2] [16];
  undefined1 local_1088 [16];
  undefined8 local_1078;
  char local_1068;
  undefined7 uStack_1067;
  ulonglong local_1060;
  ulonglong local_58;
  
  auVar13 = local_10a8[0];
  local_58 = DAT_1808d5f00 ^ (ulonglong)auStack_1108;
  auVar11 = ZEXT1664(_DAT_180b8e630);
  local_1088 = _DAT_180b8e630;
  local_1078 = DAT_180b8e640;
  local_10a8[0]._0_4_ = local_10a8[0]._1_4_ << 8;
  local_10a8[0]._4_4_ = 0xffffffff;
  local_10a8[0]._12_4_ = auVar13._12_4_;
  local_10a8[0]._8_4_ = 0;
  auVar13._12_4_ = 0;
  auVar13._0_12_ = ZEXT812(0);
  auVar13 = auVar13 << 0x20;
  auVar14 = ZEXT1264(ZEXT812(0)) << 0x20;
  local_10a8[0] = vinsertps_avx(local_10a8[0],auVar13,0x30);
  auVar13 = vunpcklps_avx(auVar13,auVar13);
  DAT_180b8e640 = auVar13._0_8_;
  auVar13 = local_10a8[0];
  if (((DAT_180b8e630 != '\0') && (-1 < (longlong)DAT_180b8e630)) &&
     (DAT_180b8e630._4_4_ < *(int *)(param_2 + 0x30))) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x38) + 8 + (longlong)DAT_180b8e630._4_4_ * 8);
    lVar9 = 0;
    if (lVar3 != 0) {
      lVar9 = lVar3 + 0x10;
    }
    if (lVar9 != 0) {
      _DAT_180b8e630 = local_10a8[0];
      *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) | 1;
      lVar3 = *(longlong *)(param_2 + 0x40);
      lVar9 = 0;
      if (lVar3 != 0) {
        lVar9 = lVar3 + 0x10;
      }
      auVar13 = _DAT_180b8e630;
      if (((lVar9 != 0) && (lVar1 = lVar9 + 8, lVar1 != 0)) &&
         (iVar2 = *(int *)(lVar9 + 0x10), iVar2 < 0x1f)) {
        puVar4 = (uint *)FUN_1803dfb00(lVar3,lVar1);
        puVar5 = (uint *)FUN_1803dfb00(extraout_XMM0_Qa,lVar1);
        if ((puVar4 == (uint *)0x0) || (puVar5 == (uint *)0x0)) {
          *(int *)(lVar9 + 0x10) = iVar2;
          FUN_18063ab10(&local_1068,0,0x600);
          local_10e8 = (undefined **)CONCAT44(local_10e8._4_4_,auVar11._4_4_);
          FUN_18015ad60(&local_1068,0x600,0xffffffffffffffff,"reason=subtick_allocation history=%d")
          ;
          local_10e8 = &PTR_180700558;
          if (local_1068 != '\0') {
            local_10e8 = (undefined **)&DAT_1806bcfc0;
          }
          local_10e0 = &local_1068;
          FUN_1800f6900(2);
          auVar13 = _DAT_180b8e630;
        }
        else {
          uVar10 = FUN_180615620(0x3f800000,0);
          local_10b0[0] = (float)FUN_180615620(uVar10,0);
          local_10b4 = auVar14._0_4_;
          auVar13 = vshufps_avx(auVar11._0_16_,auVar11._0_16_,0xff);
          pfVar7 = &local_10b4;
          if (auVar14._0_4_ <= auVar13._0_4_) {
            pfVar7 = (float *)(local_1088 + 0xc);
          }
          pfVar6 = local_10b0;
          if (auVar13._0_4_ <= local_10b0[0]) {
            pfVar6 = pfVar7;
          }
          fVar12 = *pfVar6;
          puVar4[2] = 1;
          puVar4[3] = 0;
          *(undefined1 *)(puVar4 + 4) = 1;
          *puVar4 = *puVar4 | 7;
          puVar4[5] = (uint)fVar12;
          puVar5[2] = 1;
          puVar5[3] = 0;
          *(undefined1 *)(puVar5 + 4) = 0;
          *puVar5 = *puVar5 | 7;
          puVar5[5] = (uint)uVar10;
          lVar1 = *(longlong *)(lVar9 + 0x18) + ((longlong)*(int *)(lVar9 + 0x10) + 1) * 8;
          lVar3 = *(longlong *)(lVar9 + 0x18) + 8;
          lVar9 = lVar1 - lVar3 >> 3;
          if (lVar9 < 0x21) {
            FUN_180250340(lVar3,lVar1);
          }
          else {
            FUN_180250440(&local_1068,lVar9 - (lVar9 - (lVar1 - lVar3 >> 0x3f) >> 1));
            local_10e0 = (char *)CONCAT71(local_10e0._1_7_,local_10b8);
            local_10e8 = (undefined **)local_1060;
            FUN_180250540(lVar3,lVar1,lVar9,CONCAT71(uStack_1067,local_1068));
            if (0x200 < local_1060) {
              uVar10 = CONCAT71(uStack_1067,local_1068);
              if (DAT_180c7df30 == (undefined8 *)0x0) {
                local_10a8[0]._8_8_ = 0x15;
                local_10a8[0]._0_8_ = "tier0.dll:g_pMemAlloc";
                DAT_180c7df30 = (undefined8 *)FUN_180451750(local_10a8);
              }
              (**(code **)(*(longlong *)*DAT_180c7df30 + 0x18))((longlong *)*DAT_180c7df30,uVar10);
            }
          }
          if (param_2 != 0) {
            *(ulonglong *)(param_2 + 0x60) = *(ulonglong *)(param_2 + 0x60) & 0xfffffffffffffffe;
            *(ulonglong *)(param_2 + 0x68) = *(ulonglong *)(param_2 + 0x68) | 1;
            *(ulonglong *)(param_2 + 0x70) = *(ulonglong *)(param_2 + 0x70) & 0xfffffffffffffffe;
          }
          *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) | 0x20;
          uVar8 = auVar11._4_4_;
          *(undefined4 *)(param_2 + 0x4c) = uVar8;
          FUN_18063ab10(&local_1068,0,0x600);
          local_10d0 = (double)local_1078._4_4_;
          local_10d8 = (double)(float)local_1078;
          local_10e0 = (char *)(double)fVar12;
          local_10e8 = (undefined **)CONCAT44(local_10e8._4_4_,auVar11._8_4_);
          local_10c8 = uVar8;
          FUN_18015ad60(&local_1068,0x600,0xffffffffffffffff,
                        "ready_tick=%d press_fraction=%.6f ratio=%.6f render_offset=%.6f history=%d"
                       );
          local_10e8 = &PTR_180700558;
          if (local_1068 != '\0') {
            local_10e8 = (undefined **)&DAT_1806bcfc0;
          }
          local_10e0 = &local_1068;
          FUN_1800f6900(0);
          auVar13 = _DAT_180b8e630;
        }
      }
    }
  }
  _DAT_180b8e630 = auVar13;
}



