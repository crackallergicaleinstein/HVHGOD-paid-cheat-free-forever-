// FUN_1800e94b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800e94b0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800e94b0(longlong param_1,undefined4 *param_2,undefined4 param_3,char param_4)

{
  undefined1 uVar1;
  ulonglong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  longlong lVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  undefined5 *puVar8;
  longlong lVar10;
  longlong lVar9;
  undefined1 auStack_158 [32];
  undefined1 local_138;
  undefined7 uStack_137;
  ulonglong uStack_130;
  undefined1 local_128;
  undefined7 uStack_127;
  ulonglong uStack_120;
  undefined1 *local_118;
  undefined1 local_110 [16];
  undefined8 local_100;
  undefined8 local_f8;
  undefined1 local_f0 [16];
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_c8;
  undefined7 uStack_c7;
  ulonglong uStack_c0;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined1 local_a0 [16];
  undefined8 local_90;
  undefined8 local_88;
  undefined1 local_80 [16];
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  undefined1 local_58 [16];
  char local_48 [16];
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_158;
  if (param_4 == '\0') {
    *param_2 = param_3;
  }
  else {
    local_b8 = (undefined1  [16])0x0;
    local_a8 = 0;
    local_90 = 0;
    local_88 = 0xf;
    local_a0._1_15_ = SUB1615((undefined1  [16])0x0,1);
    auVar3[0xf] = 0;
    auVar3._0_15_ = local_a0._1_15_;
    local_a0 = auVar3 << 8;
    local_70 = 0;
    local_68 = 0xf;
    local_80._1_15_ = SUB1615((undefined1  [16])0x0,1);
    auVar4[0xf] = 0;
    auVar4._0_15_ = local_80._1_15_;
    local_80 = auVar4 << 8;
    local_60 = 0;
    local_58 = (undefined1  [16])0x0;
    plVar6 = (longlong *)FUN_1800aa200();
    puVar8 = (undefined5 *)*plVar6;
    if (puVar8 != (undefined5 *)plVar6[1]) {
LAB_1800e9540:
      if (*(undefined4 **)(puVar8 + 1) != param_2) goto code_r0x0001800e9546;
      local_b8._0_5_ = *puVar8;
      local_b8._8_8_ = *(undefined8 *)(puVar8 + 1);
      local_a8 = CONCAT44(local_a8._4_4_,*(undefined4 *)(puVar8 + 2));
      plVar6 = (longlong *)(puVar8 + 3);
      if ((longlong *)local_a0 != plVar6) {
        if (0xf < *(ulonglong *)(puVar8 + 6)) {
          plVar6 = (longlong *)*plVar6;
        }
        FUN_180113930(local_a0,plVar6,*(undefined8 *)(puVar8 + 5));
      }
      plVar6 = (longlong *)(puVar8 + 7);
      if ((longlong *)local_80 != plVar6) {
        if (0xf < *(ulonglong *)(puVar8 + 10)) {
          plVar6 = (longlong *)*plVar6;
        }
        FUN_180113930(local_80,plVar6,*(undefined8 *)(puVar8 + 9));
      }
      if (&local_60 != (longlong *)(puVar8 + 0xb)) {
        lVar10 = *(longlong *)(puVar8 + 0xb);
        FUN_18013ef90(&local_60,lVar10,*(longlong *)(puVar8 + 0xc) - lVar10 >> 5);
      }
      local_48[0] = '\0';
      local_48[1] = '\0';
      local_48[2] = '\0';
      local_48[3] = '\0';
      local_48[4] = '\0';
      local_48[5] = '\0';
      local_48[6] = '\0';
      local_48[7] = '\0';
      local_48[8] = '\0';
      local_48[9] = '\0';
      local_48[10] = '\0';
      local_48[0xb] = '\0';
      FUN_18015abc0(local_48,0xc,&DAT_1806bbf8c,local_b8._0_4_);
      FUN_1800aab50(&local_c8,local_b8);
      FUN_1800f4a50(&local_128,&local_c8);
      if (local_b8[4] == '\x03') {
        local_110 = ZEXT816(0);
        FUN_1801409d0(local_110 + 8,0);
        uVar2 = uStack_120;
        uVar1 = local_128;
        local_128 = 5;
        local_110[0] = uVar1;
        uStack_120 = 0;
        local_110._8_8_ = uVar2;
        FUN_1801409d0(local_110 + 8);
      }
      else if (local_b8[4] == '\x01') {
        local_110 = ZEXT816(0);
        FUN_1801409d0(local_110 + 8,0);
        uVar2 = uStack_120;
        uVar1 = local_128;
        local_118 = (undefined1 *)((ulonglong)local_118 & 0xffffffffffffff00);
        local_128 = 4;
        local_110[0] = uVar1;
        uStack_120 = (ulonglong)local_118;
        local_110._8_8_ = uVar2;
        FUN_1801409d0(local_110 + 8);
      }
      local_118 = &local_138;
      local_138 = local_c8;
      uStack_137 = uStack_c7;
      uStack_130 = uStack_c0;
      local_c8 = 0;
      uStack_c0 = 0;
      local_110 = (undefined1  [16])0x0;
      local_100 = 0;
      local_f8 = 0;
      lVar10 = -1;
      do {
        lVar5 = lVar10 + 1;
        lVar10 = lVar10 + 1;
      } while (local_48[lVar5] != '\0');
      FUN_18015ba30(local_110,local_48);
      puVar7 = (undefined1 *)FUN_1800f43d0(param_1 + 0x1a368,local_110);
      uVar1 = *puVar7;
      *puVar7 = local_138;
      _local_138 = CONCAT71(uStack_137,uVar1);
      uVar2 = *(ulonglong *)(puVar7 + 8);
      *(ulonglong *)(puVar7 + 8) = uStack_130;
      uStack_130 = uVar2;
      FUN_1801409d0(&uStack_130,uVar1);
      local_110._0_8_ = &local_138;
      local_138 = local_128;
      uStack_137 = uStack_127;
      uStack_130 = uStack_120;
      local_128 = 0;
      uStack_120 = 0;
      local_f0 = (undefined1  [16])0x0;
      local_e0 = 0;
      local_d8 = 0;
      lVar10 = -1;
      do {
        lVar9 = lVar10 + 1;
        lVar5 = lVar10 + 1;
        lVar10 = lVar9;
      } while (local_48[lVar5] != '\0');
      FUN_18015ba30(local_f0,local_48,lVar9);
      puVar7 = (undefined1 *)FUN_1800f43d0(param_1 + 0x1a378,local_f0);
      uVar1 = *puVar7;
      *puVar7 = local_138;
      _local_138 = CONCAT71(uStack_137,uVar1);
      uVar2 = *(ulonglong *)(puVar7 + 8);
      *(ulonglong *)(puVar7 + 8) = uStack_130;
      uStack_130 = uVar2;
      FUN_1801409d0(&uStack_130,uVar1);
      FUN_1801409d0(&uStack_120,local_128);
      FUN_1801409d0(&uStack_c0,local_c8);
    }
LAB_1800e980c:
    FUN_180111b90(&local_60);
    FUN_18015c010(local_80);
    FUN_18015c010(local_a0);
    *param_2 = param_3;
  }
code_r0x0001800e9546:
  puVar8 = puVar8 + 0xe;
  if (puVar8 == (undefined5 *)plVar6[1]) goto LAB_1800e980c;
  goto LAB_1800e9540;
}



