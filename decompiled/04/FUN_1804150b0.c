// FUN_1804150b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804150b0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804150b0(longlong *param_1)

{
  double dVar1;
  longlong lVar2;
  double dVar3;
  longlong lVar4;
  double dVar5;
  longlong lVar6;
  double dVar7;
  longlong *plVar8;
  longlong lVar9;
  double dVar10;
  double *pdVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_868 [32];
  undefined **local_848;
  double *local_840;
  double local_838;
  double local_830;
  double local_828;
  double local_820;
  double local_818;
  double local_810;
  double local_808;
  double local_800;
  double local_7f8;
  double local_7f0;
  double local_7e8;
  double local_7e0;
  double local_7d8;
  double local_7d0;
  double local_7c8;
  double local_7c0;
  double local_7b8;
  double local_7b0;
  double local_7a8;
  double local_7a0;
  double local_798;
  double local_790;
  double local_788;
  double local_780;
  double local_778;
  double local_770;
  double local_768;
  double local_760;
  double local_758;
  double local_750;
  double local_748;
  double local_740;
  longlong local_738;
  double local_730;
  double local_728;
  double local_720;
  double local_718;
  double local_710;
  double *local_708;
  char *local_700 [5];
  double local_6d8;
  double dStack_6d0;
  double dStack_6c8;
  double dStack_6c0;
  double local_6b8;
  double dStack_6b0;
  double dStack_6a8;
  double dStack_6a0;
  double local_698;
  double dStack_690;
  double dStack_688;
  double dStack_680;
  double local_678;
  double dStack_670;
  double dStack_668;
  double dStack_660;
  undefined1 local_658 [16];
  double dStack_648;
  double adStack_640 [173];
  ulonglong local_d8;
  
  local_d8 = DAT_1808d5f00 ^ (ulonglong)auStack_868;
  FUN_18017bf40(&local_798);
  param_1[(ulonglong)*(uint *)(param_1 + 4) + 5] =
       param_1[(ulonglong)*(uint *)(param_1 + 4) + 5] + ((longlong)local_798 - param_1[3]);
  lVar9 = *param_1;
  param_1[3] = (longlong)local_798;
  *(undefined4 *)(param_1 + 4) = 0;
  plVar8 = (longlong *)FUN_180416b80();
  *plVar8 = lVar9;
  dVar1 = (double)param_1[3];
  dVar10 = (double)((longlong)dVar1 - param_1[2]);
  lVar9 = FUN_1804169d0();
  pdVar11 = (double *)((ulonglong)((uint)(*param_1 != 0) + (int)param_1[1] * 2) * 0xa0 + lVar9);
  local_798 = (double)((longlong)*pdVar11 + 1);
  *pdVar11 = local_798;
  local_710 = (double)((longlong)pdVar11[1] + (ulonglong)((char)param_1[0x14] == '\0'));
  local_730 = (double)((longlong)pdVar11[2] + (longlong)dVar10);
  pdVar11[1] = local_710;
  pdVar11[2] = local_730;
  dVar12 = pdVar11[3];
  if ((ulonglong)pdVar11[3] < (ulonglong)dVar10) {
    pdVar11[3] = dVar10;
    dVar12 = dVar10;
  }
  lVar9 = param_1[5];
  local_708 = pdVar11 + 0x13;
  dVar10 = pdVar11[4];
  pdVar11[4] = (double)(lVar9 + (longlong)dVar10);
  local_740 = (double)(param_1[6] + (longlong)pdVar11[5]);
  pdVar11[5] = local_740;
  local_748 = (double)(param_1[7] + (longlong)pdVar11[6]);
  pdVar11[6] = local_748;
  local_750 = (double)(param_1[8] + (longlong)pdVar11[7]);
  pdVar11[7] = local_750;
  local_758 = (double)(param_1[9] + (longlong)pdVar11[8]);
  pdVar11[8] = local_758;
  local_760 = (double)(param_1[10] + (longlong)pdVar11[9]);
  pdVar11[9] = local_760;
  local_768 = (double)(param_1[0xb] + (longlong)pdVar11[10]);
  pdVar11[10] = local_768;
  local_770 = (double)(param_1[0xc] + (longlong)pdVar11[0xb]);
  pdVar11[0xb] = local_770;
  local_778 = (double)(param_1[0xd] + (longlong)pdVar11[0xc]);
  pdVar11[0xc] = local_778;
  local_780 = (double)(param_1[0xe] + (longlong)pdVar11[0xd]);
  pdVar11[0xd] = local_780;
  local_788 = (double)(param_1[0xf] + (longlong)pdVar11[0xe]);
  pdVar11[0xe] = local_788;
  local_790 = (double)(param_1[0x10] + (longlong)pdVar11[0xf]);
  pdVar11[0xf] = local_790;
  lVar2 = param_1[0x11];
  dVar3 = pdVar11[0x10];
  pdVar11[0x10] = (double)(lVar2 + (longlong)dVar3);
  lVar4 = param_1[0x12];
  dVar5 = pdVar11[0x11];
  pdVar11[0x11] = (double)(lVar4 + (longlong)dVar5);
  lVar6 = param_1[0x13];
  dVar7 = pdVar11[0x12];
  pdVar11[0x12] = (double)(lVar6 + (longlong)dVar7);
  local_738 = (longlong)dVar1 - (longlong)*local_708;
  if ((local_738 == 5000000000) || (4999999999 < local_738)) {
    local_700[0] = "shared";
    local_700[1] = "steered";
    local_700[2] = "isolated";
    local_700[3] = "lookahead";
    FUN_18063ab10(&local_6d8,0,0x600);
    dVar13 = (double)(ulonglong)local_798;
    local_7a0 = ((double)(ulonglong)(lVar9 + (longlong)dVar10) / dVar13) / 1000.0;
    local_7a8 = ((double)(ulonglong)(lVar6 + (longlong)dVar7) / dVar13) / 1000.0;
    local_7b0 = ((double)(ulonglong)(lVar4 + (longlong)dVar5) / dVar13) / 1000.0;
    local_7b8 = ((double)(ulonglong)(lVar2 + (longlong)dVar3) / dVar13) / 1000.0;
    local_7c0 = ((double)(ulonglong)local_790 / dVar13) / 1000.0;
    local_7c8 = ((double)(ulonglong)local_788 / dVar13) / 1000.0;
    local_7d0 = ((double)(ulonglong)local_780 / dVar13) / 1000.0;
    local_7d8 = ((double)(ulonglong)local_778 / dVar13) / 1000.0;
    local_7e0 = ((double)(ulonglong)local_770 / dVar13) / 1000.0;
    local_7e8 = ((double)(ulonglong)local_768 / dVar13) / 1000.0;
    local_7f0 = ((double)(ulonglong)local_760 / dVar13) / 1000.0;
    local_7f8 = ((double)(ulonglong)local_758 / dVar13) / 1000.0;
    local_800 = ((double)(ulonglong)local_750 / dVar13) / 1000.0;
    local_808 = ((double)(ulonglong)local_748 / dVar13) / 1000.0;
    local_818 = (double)local_738 / 1000000.0;
    local_810 = ((double)(ulonglong)local_740 / dVar13) / 1000.0;
    local_820 = (double)(ulonglong)dVar12 / 1000.0;
    local_828 = ((double)(ulonglong)local_730 / dVar13) / 1000.0;
    local_848 = (undefined **)local_700[*(uint *)(param_1 + 1)];
    local_830 = local_710;
    local_838 = local_798;
    local_840 = (double *)CONCAT44(local_840._4_4_,(uint)(*param_1 != 0));
    local_798 = local_7a0;
    local_790 = local_7c0;
    local_728 = local_7a8;
    local_720 = local_7b0;
    local_718 = local_7b8;
    FUN_18015ad60(&local_6d8,0x600,0xffffffffffffffff,
                  "query=%s nested=%d calls=%llu failed=%llu avg_us=%.2f max_us=%.2f window_ms=%.2f lock_us=%.2f command_us=%.2f validation_us=%.2f snapshot_us=%.2f setup_us=%.2f movement_us=%.2f postmove_us=%.2f finish_us=%.2f readback_us=%.2f cleanup_us=%.2f scalar_restore_us=%.2f body_restore_us=%.2f notifications_us=%.2f callback_us=%.2f other_us=%.2f matched_transactions=1 exclusive_phases=1 includes_waits=1 nested_transactions=overlap gpu_timing=0"
                 );
    local_848 = &PTR_180700558;
    if (local_6d8._0_1_ != '\0') {
      local_848 = (undefined **)&DAT_1806bcfc0;
    }
    local_840 = &local_6d8;
    FUN_1800f6900(0);
    local_6d8 = 0.0;
    local_6b8 = 0.0;
    dStack_6b0 = 0.0;
    dStack_6a8 = 0.0;
    dStack_6a0 = 0.0;
    local_698 = 0.0;
    dStack_690 = 0.0;
    dStack_688 = 0.0;
    dStack_680 = 0.0;
    local_678 = 0.0;
    dStack_670 = 0.0;
    dStack_668 = 0.0;
    dStack_660 = 0.0;
    local_658 = (undefined1  [16])0x0;
    dStack_648 = 0.0;
    dStack_6d0 = 0.0;
    dStack_6c8 = 0.0;
    dStack_6c0 = 0.0;
    FUN_18017bf40(adStack_640);
    *pdVar11 = local_6d8;
    pdVar11[1] = dStack_6d0;
    pdVar11[2] = dStack_6c8;
    pdVar11[3] = dStack_6c0;
    pdVar11[4] = local_6b8;
    pdVar11[5] = dStack_6b0;
    pdVar11[6] = dStack_6a8;
    pdVar11[7] = dStack_6a0;
    pdVar11[8] = local_698;
    pdVar11[9] = dStack_690;
    pdVar11[10] = dStack_688;
    pdVar11[0xb] = dStack_680;
    pdVar11[0xc] = local_678;
    pdVar11[0xd] = dStack_670;
    pdVar11[0xe] = dStack_668;
    pdVar11[0xf] = dStack_660;
    pdVar11[0x10] = (double)local_658._0_8_;
    pdVar11[0x11] = (double)local_658._8_8_;
    pdVar11[0x12] = dStack_648;
    pdVar11[0x13] = adStack_640[0];
    *local_708 = dVar1;
  }
}



