// FUN_1803554a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803554a0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803554a0(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [64];
  undefined1 auVar15 [64];
  undefined1 auVar16 [64];
  undefined1 auVar17 [64];
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 auStack_878 [32];
  undefined **local_858;
  char *local_850;
  undefined8 local_848;
  undefined8 local_840;
  undefined8 local_838;
  undefined8 local_830;
  undefined8 local_828;
  undefined4 local_820;
  undefined1 local_818;
  undefined1 local_810;
  undefined1 local_808;
  undefined1 local_800;
  undefined1 local_7f8;
  undefined1 local_7f0;
  undefined1 local_7e8;
  undefined1 local_7e0;
  undefined1 local_7d8;
  undefined1 local_7d0;
  undefined1 local_7c8;
  undefined4 local_7c0;
  undefined4 local_7b8;
  undefined4 local_7b0;
  undefined4 local_7a8;
  undefined4 local_7a0;
  undefined4 local_798;
  undefined4 local_790;
  undefined4 local_788;
  undefined4 local_780;
  undefined4 local_778;
  undefined4 local_770;
  undefined1 local_768;
  undefined1 local_760;
  undefined4 local_758;
  undefined4 local_750;
  undefined4 local_748;
  undefined4 local_740;
  undefined1 local_738;
  undefined4 local_730;
  undefined4 local_728;
  undefined4 local_720;
  undefined4 local_718;
  undefined8 local_710;
  undefined4 local_708;
  undefined8 local_700;
  undefined1 local_6f8;
  undefined4 local_6f0;
  undefined4 local_6e8;
  undefined4 local_6e0;
  undefined4 local_6d8;
  ulonglong local_6c8;
  char local_6b8 [1536];
  ulonglong local_b8;
  
  local_b8 = DAT_1808d5f00 ^ (ulonglong)auStack_878;
  lVar3 = FUN_18035f000();
  if ((*(char *)(lVar3 + 0x9a0) != '\0') && (lVar10 = *(longlong *)(lVar3 + 0x988), lVar10 != 0)) {
    *(undefined1 *)(lVar3 + 0x9a0) = 0;
    lVar12 = (ulonglong)((int)*(undefined8 *)(lVar3 + 0x990) - 1U & 7) * 0x130;
    uVar18 = *(undefined4 *)(lVar12 + 0xec + lVar3);
    if (*(char *)(lVar12 + 0x38 + lVar3) == '\0') {
      uVar4 = 0xffffffffffffffff;
    }
    else {
      uVar4 = *(undefined8 *)(lVar12 + 0x30 + lVar3);
    }
    FUN_18063ab10(local_6b8,0,0x600);
    local_840 = CONCAT44(local_840._4_4_,uVar18);
    local_858 = (undefined **)CONCAT44(local_858._4_4_,*(undefined4 *)(lVar12 + 8 + lVar3));
    local_850 = (char *)lVar10;
    local_848 = uVar4;
    FUN_18015ad60(local_6b8,0x600,0xffffffffffffffff,
                  "command=%u samples=%zu jump_tick=%lld landed_tick=%d source=client_command_start server_ack=unverified"
                 );
    local_858 = &PTR_180700558;
    if (local_6b8[0] != '\0') {
      local_858 = (undefined **)&DAT_1806bcfc0;
    }
    local_850 = local_6b8;
    FUN_1800f6900(0);
    uVar8 = *(ulonglong *)(lVar3 + 0x988);
    uVar11 = 0;
    if (uVar8 != 0) {
      auVar14 = ZEXT464(0x7fc00000);
      do {
        lVar10 = (ulonglong)(((int)uVar11 - (int)uVar8) + *(int *)(lVar3 + 0x990) & 7) * 0x130 +
                 lVar3;
        if (*(char *)(lVar10 + 0xd8) == '\0') {
          auVar13 = auVar14._0_16_;
          auVar17 = ZEXT1664(auVar13);
          auVar15 = ZEXT1664(auVar13);
        }
        else {
          local_6c8 = *(ulonglong *)(lVar10 + 0xcc);
          auVar13._8_8_ = 0;
          auVar13._0_8_ = local_6c8;
          auVar15 = ZEXT464(*(uint *)(lVar10 + 0xd4));
          auVar17 = ZEXT464((uint)local_6c8);
          auVar13 = vshufps_avx(auVar13,auVar13,0x55);
        }
        auVar16 = ZEXT1664(auVar13);
        uVar18 = *(undefined4 *)(lVar10 + 0x108);
        uVar19 = *(undefined4 *)(lVar10 + 0x104);
        uVar20 = *(undefined4 *)(lVar10 + 0x100);
        uVar21 = *(undefined4 *)(lVar10 + 0xfc);
        uVar1 = *(undefined1 *)(lVar10 + 0xfa);
        uVar4 = FUN_180352db0(*(undefined1 *)(lVar10 + 0xf8));
        if (*(char *)(lVar10 + 0x38) == '\0') {
          uVar9 = 0xffffffffffffffff;
        }
        else {
          uVar9 = *(undefined8 *)(lVar10 + 0x30);
        }
        uVar2 = FUN_1803531c0(lVar10 + 8);
        uVar5 = FUN_180352db0(*(undefined1 *)(lVar10 + 0xde));
        uVar6 = FUN_180352db0(*(undefined1 *)(lVar10 + 0xdd));
        uVar7 = FUN_180352db0(*(undefined1 *)(lVar10 + 0x9c));
        local_840 = FUN_180352db0(*(undefined1 *)(lVar10 + 0xdc));
        local_730 = *(undefined4 *)(lVar10 + 0xf0);
        local_748 = *(undefined4 *)(lVar10 + 0xa8);
        local_708 = *(undefined4 *)(lVar10 + 0xec);
        local_738 = *(undefined1 *)(lVar10 + 0xb1);
        local_760 = *(undefined1 *)(lVar10 + 0x9e);
        local_718 = auVar15._0_4_;
        local_720 = auVar16._0_4_;
        local_728 = auVar17._0_4_;
        local_740 = *(undefined4 *)(lVar10 + 0xac);
        local_750 = *(undefined4 *)(lVar10 + 0xa4);
        local_758 = *(undefined4 *)(lVar10 + 0xa0);
        local_770 = *(undefined4 *)(lVar10 + 0x94);
        local_778 = *(undefined4 *)(lVar10 + 0x90);
        local_768 = *(undefined1 *)(lVar10 + 0x9d);
        local_7c0 = *(undefined4 *)(lVar10 + 0xe4);
        local_780 = *(undefined4 *)(lVar10 + 0x8c);
        local_788 = *(undefined4 *)(lVar10 + 0x80);
        local_790 = *(undefined4 *)(lVar10 + 0x74);
        local_798 = *(undefined4 *)(lVar10 + 0x70);
        local_7a0 = *(undefined4 *)(lVar10 + 0x6c);
        local_7a8 = *(undefined4 *)(lVar10 + 0x68);
        local_7b0 = *(undefined4 *)(lVar10 + 100);
        local_7b8 = *(undefined4 *)(lVar10 + 0x60);
        local_7c8 = *(undefined1 *)(lVar10 + 0xf4);
        local_7d8 = *(undefined1 *)(lVar10 + 0x15);
        local_7e0 = *(undefined1 *)(lVar10 + 0xf6);
        local_7e8 = *(undefined1 *)(lVar10 + 0xf5);
        local_7f0 = *(undefined1 *)(lVar10 + 0x10);
        local_7f8 = *(undefined1 *)(lVar10 + 0xf);
        local_800 = *(undefined1 *)(lVar10 + 0x12);
        local_808 = *(undefined1 *)(lVar10 + 0xe);
        local_810 = *(undefined1 *)(lVar10 + 0xc);
        local_818 = *(undefined1 *)(lVar10 + 0x11);
        local_820 = *(undefined4 *)(lVar10 + 0xe8);
        local_848 = CONCAT44(local_848._4_4_,*(undefined4 *)(lVar10 + 0xe0));
        local_850 = (char *)CONCAT44(local_850._4_4_,*(undefined4 *)(lVar10 + 8));
        local_858 = (undefined **)CONCAT44(local_858._4_4_,*(undefined4 *)(lVar12 + 8 + lVar3));
        local_838 = uVar7;
        local_830 = uVar6;
        local_828 = uVar5;
        local_7d0 = uVar2;
        local_710 = uVar9;
        local_700 = uVar4;
        local_6f8 = uVar1;
        local_6f0 = uVar21;
        local_6e8 = uVar20;
        local_6e0 = uVar19;
        local_6d8 = uVar18;
        FUN_18035d8c0();
        uVar8 = *(ulonglong *)(lVar3 + 0x988);
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar8);
    }
  }
}



