// FUN_1803b2030 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803b2030 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1803b2030(undefined8 param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  ulonglong uVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  DWORD DVar7;
  longlong *plVar8;
  ULONGLONG UVar9;
  longlong lVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar15;
  undefined1 auVar16 [64];
  undefined1 auStack_758 [32];
  undefined **local_738;
  char *local_730;
  ulonglong local_728;
  double local_720;
  ulonglong local_718;
  undefined1 local_710 [16];
  longlong local_700;
  double local_6f8;
  undefined8 local_6f0;
  undefined8 local_6e8;
  uint local_6e0;
  undefined1 local_6d8 [16];
  longlong *local_6c8;
  longlong *local_6c0;
  longlong local_6b8;
  longlong lStack_6b0;
  float local_6a8;
  undefined4 uStack_6a4;
  double local_6a0;
  double local_698;
  double local_690;
  double local_688;
  char local_680;
  undefined *local_678;
  undefined1 local_670 [24];
  longlong local_658;
  char local_648 [1536];
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_758;
  local_6d8 = ZEXT816(0x180806d58);
  FUN_18017bf40(local_6d8 + 8);
  local_678 = &DAT_180902da0;
  iVar6 = FUN_1805f68d0(&DAT_180902da0);
  if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_180902dec == 0x7fffffff) {
    DAT_180902dec = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  if ((param_2 != (longlong *)0x0) && (param_3 != (longlong *)0x0)) {
    if (((longlong *)DAT_180902df8 != param_3) || ((longlong *)DAT_180902df0 != param_2)) {
      FUN_1803829b0();
      DAT_180902df0 = (longlong)param_2;
      DAT_180902df8 = (longlong)param_3;
      (**(code **)(*param_2 + 8))(param_2);
      (**(code **)(*param_3 + 8))(param_3);
      DAT_180902e00 = GetCurrentThreadId();
    }
    DVar7 = GetCurrentThreadId();
    if (DAT_180902e00 == DVar7) {
      local_6c8 = param_2;
      local_6c0 = param_3;
      plVar8 = (longlong *)FUN_18017bf40(local_670);
      lVar1 = *plVar8;
      local_658 = param_4[2];
      if ((uint)DAT_180903018 < 6) {
        lVar10 = (ulonglong)(uint)DAT_180903018 * 0x58;
        if (((((*(char *)(lVar10 + 0x180902e5c) == '\0') ||
              (*param_4 != *(longlong *)(lVar10 + 0x180902e28))) ||
             (param_4[1] != *(longlong *)(lVar10 + 0x180902e30))) ||
            (((int)local_658 != *(int *)(lVar10 + 0x180902e38) ||
             (cVar4 = (char)((ulonglong)local_658 >> 0x20), cVar4 != *(char *)(lVar10 + 0x180902e3c)
             )))) || (cVar4 == '\0')) {
          uVar5 = 0;
        }
        else {
          uVar5 = 1;
        }
        *(undefined1 *)(lVar10 + 0x180902e5c) = uVar5;
        *(longlong *)(lVar10 + 0x180902e48) = lVar1 / 1000;
        *(undefined1 *)(lVar10 + 0x180902e5d) = 1;
        (**(code **)(*param_3 + 0xe0))(param_3,*(undefined8 *)(lVar10 + 0x180902e18));
      }
      FUN_1803baa20(&DAT_180902e08,&local_6b8,&local_6c8);
      if (local_680 != '\0') {
        if (((DAT_180903050 == 0) || (DAT_180903038 != local_6b8)) ||
           ((DAT_180903040 != lStack_6b0 ||
            ((DAT_180903048 != local_6a8 || (DAT_18090304c != (char)uStack_6a4)))))) {
          DAT_180903038 = local_6b8;
          DAT_180903040 = lStack_6b0;
          _DAT_180903048 = CONCAT44(uStack_6a4,local_6a8);
          auVar13 = ZEXT816(0);
          auVar14 = ZEXT816(0);
          DAT_180903078 = 0.0;
          DAT_180903070 = 0.0;
          _DAT_180903068 = 0.0;
          DAT_180903060 = 0.0;
          DAT_180903050 = 0;
        }
        else {
          auVar13._8_8_ = 0;
          auVar13._0_8_ = DAT_180903088;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = DAT_180903080;
        }
        DAT_180903050 = DAT_180903050 + 1;
        auVar12._8_8_ = 0;
        auVar12._0_8_ = local_6a0;
        DAT_180903060 = DAT_180903060 + local_6a0;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = local_698;
        _DAT_180903068 = _DAT_180903068 + local_698;
        DAT_180903070 = DAT_180903070 + local_690;
        DAT_180903078 = DAT_180903078 + local_688;
        auVar14 = vmaxsd_avx(auVar12,auVar14);
        DAT_180903080 = auVar14._0_8_;
        auVar13 = vmaxsd_avx(auVar11,auVar13);
        DAT_180903088 = auVar13._0_8_;
      }
      UVar9 = GetTickCount64();
      uVar3 = DAT_180903050;
      if (DAT_180903058 == 0) {
        DAT_180903058 = UVar9 + 5000;
      }
      if (DAT_180903058 <= UVar9) {
        if (DAT_180903050 == 0) {
          dVar15 = 1.0;
        }
        else if ((longlong)DAT_180903050 < 0) {
          dVar15 = (double)DAT_180903050;
        }
        else {
          dVar15 = (double)(longlong)DAT_180903050;
        }
        auVar16 = ZEXT1664(CONCAT88(dVar15,dVar15));
        FUN_18063ab10(local_648,0,0x600);
        local_6e0 = (uint)DAT_180903025;
        local_6f8 = (double)DAT_180903048;
        auVar2._8_8_ = DAT_180903078;
        auVar2._0_8_ = DAT_180903070;
        local_710 = vdivpd_avx(auVar2,auVar16._0_16_);
        local_720 = _DAT_180903068 / auVar16._0_8_;
        local_730 = (char *)(DAT_180903060 / auVar16._0_8_);
        local_6e8 = DAT_180903030;
        local_6f0 = DAT_180903028;
        local_700 = DAT_180903038;
        local_718 = DAT_180903088;
        local_728 = DAT_180903080;
        local_738 = (undefined **)uVar3;
        FUN_18015ad60(local_648,0x600,0xffffffffffffffff,
                      "samples=%llu native_gap_avg_ms=%.3f native_gap_max_ms=%.3f overlay_avg_ms=%.3f overlay_max_ms=%.3f cpu_native_gap_avg_ms=%.3f cpu_overlay_avg_ms=%.3f flags=0x%llx radius=%.1f skipped=%llu invalid=%llu disabled=%d sample_stride=16 slots=6 result_wait_loops=0 forced_flush=0 native_gap_includes_queue_idle=1 per_feature_attribution=0 tracked_flags_only=1"
                     );
        local_738 = &PTR_180700558;
        if (local_648[0] != '\0') {
          local_738 = (undefined **)&DAT_1806bcfc0;
        }
        local_730 = local_648;
        FUN_1800f6900(0,local_730,"Performance","GPU_INTERVAL_STATUS");
        DAT_180903050 = 0;
        DAT_180903058 = UVar9 + 5000;
      }
    }
  }
  FUN_1805f68fc(&DAT_180902da0);
  FUN_1803847d0(local_6d8);
}



