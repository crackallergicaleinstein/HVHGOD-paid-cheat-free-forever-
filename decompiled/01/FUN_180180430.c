// FUN_180180430 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180180430 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180180430(undefined8 *param_1,char *param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  char *pcVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  char *pcVar6;
  undefined8 uVar7;
  longlong *plVar8;
  int iVar9;
  undefined1 auVar10 [64];
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auVar13 [64];
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auVar18 [64];
  undefined1 auStack_238 [32];
  undefined8 local_218;
  uint local_208 [2];
  undefined1 local_200;
  undefined7 uStack_1ff;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined1 local_1e0 [16];
  char *local_1d0;
  longlong lStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined1 local_18c;
  undefined4 local_188;
  undefined1 local_180 [32];
  undefined1 local_160 [4];
  undefined8 local_15c;
  undefined4 local_154;
  longlong local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  uint local_130;
  undefined4 uStack_12c;
  uint uStack_128;
  uint uStack_124;
  uint uStack_120;
  undefined4 uStack_11c;
  longlong lStack_118;
  undefined4 local_110;
  uint uStack_10c;
  uint uStack_108;
  uint uStack_104;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  uint uStack_e8;
  undefined4 uStack_e4;
  longlong lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined8 local_c4;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  undefined1 local_b0;
  undefined4 local_ac;
  ulonglong local_a8;
  
  local_a8 = DAT_1808d5f00 ^ (ulonglong)auStack_238;
  if (*param_2 != '\x01') {
  }
  local_1d0 = (char *)0x0;
  lStack_1c8 = 0;
  uStack_1c0 = 0;
  uStack_1b8 = 0;
  FUN_1800f3f60(param_2,&local_1d0);
  uVar11 = 0x3f800000;
  uVar12 = 0;
  uVar14 = 0x3f80000000000000;
  uVar15 = 0;
  uVar16 = 0;
  uVar17 = 0xf;
  auVar18 = ZEXT464(0x3c23d70a);
  auVar10 = ZEXT864(0);
  auVar13 = ZEXT464(0x3f800000);
  do {
    local_200 = SUB81(param_2,0);
    uStack_1ff = (undefined7)((ulonglong)param_2 >> 8);
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    uStack_1e8 = 0x8000000000000000;
    switch(*param_2) {
    case '\0':
    case '\x03':
    case '\x04':
    case '\x05':
    case '\x06':
    case '\a':
    case '\b':
    case '\t':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*param_2) {
      case '\x01':
        goto switchD_180180524_caseD_1;
      case '\x02':
        goto switchD_180180524_caseD_2;
      }
    default:
      uStack_1e8 = 1;
      break;
    case '\x01':
switchD_180180524_caseD_1:
      uStack_1f8 = **(undefined8 **)(param_2 + 8);
      break;
    case '\x02':
switchD_180180524_caseD_2:
      uStack_1f0 = *(undefined8 *)(*(longlong *)(param_2 + 8) + 8);
    }
    cVar3 = FUN_1800e6ca0(&local_1d0,&local_200);
    pcVar2 = local_1d0;
    if (cVar3 != '\0') {
    }
    if (*local_1d0 != '\x01') {
      FUN_18015bae0(&local_200,"cannot use key() for non-object iterators");
      FUN_1800f6e80(&local_1d0,0xcf,&local_200);
                    /* WARNING: Subroutine does not return */
      FUN_180606630(&local_1d0,&DAT_1808d0fe8);
    }
    plVar8 = (longlong *)(lStack_1c8 + 0x20);
    plVar4 = plVar8;
    if (0xf < *(ulonglong *)(lStack_1c8 + 0x38)) {
      plVar4 = (longlong *)*plVar8;
    }
    if (*(longlong *)(lStack_1c8 + 0x30) == 6) {
      iVar9 = *(int *)plVar4 + -0x6165745f;
      if (iVar9 == 0) {
        iVar9 = *(ushort *)((longlong)plVar4 + 4) - 0x736d;
      }
      if (iVar9 != 0) goto LAB_1801805b8;
    }
    else {
LAB_1801805b8:
      puVar1 = (ulonglong *)*param_1;
      *puVar1 = *puVar1 + 1;
      if (0xc0 < *puVar1) {
      }
      if (*local_1d0 != '\x01') {
        FUN_18015bae0(&local_200,"cannot use key() for non-object iterators");
        FUN_1800f6e80(&local_1d0,0xcf,&local_200);
                    /* WARNING: Subroutine does not return */
        FUN_180606630(&local_1d0,&DAT_1808d0fe8);
      }
      if (*(ulonglong *)(lStack_1c8 + 0x30) == 0) {
      }
      if (5 < *(ulonglong *)(lStack_1c8 + 0x30)) {
      }
      plVar4 = plVar8;
      if (0xf < *(ulonglong *)(lStack_1c8 + 0x38)) {
        plVar4 = (longlong *)*plVar8;
      }
      local_218 = 10;
      lVar5 = FUN_1801b16b0(plVar4);
      if (lVar5 != -1) {
      }
      pcVar6 = (char *)FUN_1800f34a0(&local_1d0);
      if (*pcVar6 != '\x01') {
      }
      if (*pcVar2 != '\x01') {
        FUN_18015bae0(&local_200,"cannot use key() for non-object iterators");
        FUN_1800f6e80(&local_1d0,0xcf,&local_200);
                    /* WARNING: Subroutine does not return */
        FUN_180606630(&local_1d0,&DAT_1808d0fe8);
      }
      iVar9 = FUN_18015a650(plVar8);
      if (0x7ffe < iVar9 - 1U) {
      }
      uVar7 = FUN_1800f34a0(&local_1d0);
      local_208[0] = 0;
      local_198 = FUN_1800e63a0(uVar7,&DAT_1806bdfc0,local_208);
      uVar7 = FUN_1800f34a0(&local_1d0);
      local_208[0] = auVar18._0_4_;
      local_194 = FUN_1800e9950(uVar7,&DAT_1806bdfc4,local_208);
      uVar7 = FUN_1800f34a0(&local_1d0);
      local_208[0] = 0;
      local_190 = FUN_1800e63a0(uVar7,&DAT_1806bdfc8,local_208);
      uVar7 = FUN_1800f34a0(&local_1d0);
      local_208[0] = local_208[0] & 0xffffff00;
      local_18c = FUN_1800e9c30(uVar7);
      uVar7 = FUN_1800f34a0(&local_1d0);
      local_208[0] = 0;
      local_188 = FUN_1800e63a0(uVar7,"count",local_208);
      uVar7 = FUN_1800f34a0(&local_1d0);
      uStack_1ff = 0;
      uStack_1f8 = 0;
      local_200 = 0;
      uStack_1f0 = uVar16;
      uStack_1e8 = uVar17;
      FUN_1800e9d60(uVar7,local_180);
      FUN_18015c010(&local_200);
      local_160[0] = 0;
      local_15c = 0xffffffffffffffff;
      local_154 = 0xffffffff;
      local_bc = auVar10._0_4_;
      local_150 = (ulonglong)local_bc << 0x20;
      uStack_138 = 0xffffffff;
      _local_130 = CONCAT44(auVar13._0_4_,local_bc);
      _uStack_128 = CONCAT44(local_bc,local_bc);
      _uStack_120 = CONCAT44(0xffffffff,local_bc);
      lStack_118 = (ulonglong)local_bc << 0x20;
      _local_110 = CONCAT44(local_bc,auVar13._0_4_);
      _uStack_108 = CONCAT44(local_bc,local_bc);
      uStack_100 = 0xffffffff;
      _uStack_e8 = CONCAT44(0xffffffff,local_bc);
      lStack_e0 = (ulonglong)local_bc << 0x20;
      local_c8 = 0xffffffff;
      local_c4 = 0;
      local_b0 = 0;
      local_ac = 0;
      auVar10 = ZEXT1664(auVar10._0_16_);
      auVar13 = ZEXT1664(auVar13._0_16_);
      auVar18 = ZEXT1664(auVar18._0_16_);
      uStack_148 = uVar11;
      uStack_140 = uVar12;
      uStack_f8 = uVar14;
      uStack_f0 = uVar15;
      uStack_d8 = uVar11;
      uStack_d0 = uVar12;
      local_b8 = local_bc;
      local_b4 = local_bc;
      uVar7 = FUN_1800f34a0(&local_1d0);
      cVar3 = FUN_1800e9e90(uVar7);
      if (cVar3 != '\0') {
        uVar7 = FUN_1800f3560(&local_1d0);
        local_200 = 0;
        uStack_1ff = 0;
        uStack_1f8 = 0;
        uStack_1f0 = 0;
        uStack_1e8 = 0;
        FUN_18015ba30(&local_200,"appearance",10);
        uVar7 = FUN_180113610(uVar7,&local_200);
        FUN_18015c010(&local_200);
        FUN_1800c9c00(local_160,uVar7);
      }
      uVar7 = FUN_1800f34a0(&local_1d0);
      cVar3 = FUN_1800e6540(uVar7,"stickers");
      if (cVar3 != '\0') {
        uVar7 = FUN_1800f3560(&local_1d0);
        local_200 = 0;
        uStack_1ff = 0;
        uStack_1f8 = 0;
        uStack_1f0 = 0;
        uStack_1e8 = 0;
        FUN_18015ba30(&local_200,"stickers",8);
        uVar7 = FUN_180113610(uVar7,&local_200);
        FUN_18015c010(&local_200);
        FUN_1800ca690(&local_150,uVar7);
      }
      uVar7 = FUN_1800f34a0(&local_1d0);
      cVar3 = FUN_1800e6540(uVar7,"charm");
      if (cVar3 != '\0') {
        uVar7 = FUN_1800f3560(&local_1d0);
        local_200 = 0;
        uStack_1ff = 0;
        uStack_1f8 = 0;
        uStack_1f0 = 0;
        uStack_1e8 = 0;
        FUN_18015ba30(&local_200,"charm",5);
        uVar7 = FUN_180113610(uVar7,&local_200);
        FUN_18015c010(&local_200);
        FUN_1800cb250(&local_c4,uVar7);
      }
      FUN_1800cb400(&local_198);
      local_208[0] = CONCAT22(local_208[0]._2_2_,(short)iVar9);
      plVar8 = (longlong *)FUN_1800f9910(param_3,local_1e0,local_208);
      FUN_1800cf9c0(*plVar8 + 0x18,&local_198);
      FUN_18015c010(local_180);
    }
    FUN_1800f33e0(&local_1d0);
  } while( true );
}



