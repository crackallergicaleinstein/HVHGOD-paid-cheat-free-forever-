// FUN_1800e9100 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800e9100 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800e9100(longlong param_1,undefined1 *param_2,undefined8 param_3,char param_4)

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
  undefined1 auStack_148 [32];
  undefined1 local_128;
  undefined7 uStack_127;
  ulonglong uStack_120;
  undefined1 local_118;
  undefined7 uStack_117;
  ulonglong uStack_110;
  undefined1 *local_108;
  undefined1 local_100 [16];
  undefined8 local_f0;
  undefined8 local_e8;
  undefined1 local_e0 [16];
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_b8;
  undefined7 uStack_b7;
  ulonglong uStack_b0;
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined8 local_58;
  longlong local_50;
  undefined1 local_48 [16];
  char local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_148;
  if (param_4 == '\0') {
    *param_2 = 2;
  }
  else {
    local_a8 = (undefined1  [16])0x0;
    local_98 = 0;
    local_80 = 0;
    local_78 = 0xf;
    local_90._1_15_ = SUB1615((undefined1  [16])0x0,1);
    auVar3[0xf] = 0;
    auVar3._0_15_ = local_90._1_15_;
    local_90 = auVar3 << 8;
    local_60 = 0;
    local_58 = 0xf;
    local_70._1_15_ = SUB1615((undefined1  [16])0x0,1);
    auVar4[0xf] = 0;
    auVar4._0_15_ = local_70._1_15_;
    local_70 = auVar4 << 8;
    local_50 = 0;
    local_48 = (undefined1  [16])0x0;
    plVar6 = (longlong *)FUN_1800aa200();
    puVar8 = (undefined5 *)*plVar6;
    if (puVar8 != (undefined5 *)plVar6[1]) {
LAB_1800e9190:
      if (*(undefined1 **)(puVar8 + 1) != param_2) goto code_r0x0001800e9196;
      local_a8._0_5_ = *puVar8;
      local_a8._8_8_ = *(undefined8 *)(puVar8 + 1);
      local_98 = CONCAT44(local_98._4_4_,*(undefined4 *)(puVar8 + 2));
      plVar6 = (longlong *)(puVar8 + 3);
      if ((longlong *)local_90 != plVar6) {
        if (0xf < *(ulonglong *)(puVar8 + 6)) {
          plVar6 = (longlong *)*plVar6;
        }
        FUN_180113930(local_90,plVar6,*(undefined8 *)(puVar8 + 5));
      }
      plVar6 = (longlong *)(puVar8 + 7);
      if ((longlong *)local_70 != plVar6) {
        if (0xf < *(ulonglong *)(puVar8 + 10)) {
          plVar6 = (longlong *)*plVar6;
        }
        FUN_180113930(local_70,plVar6,*(undefined8 *)(puVar8 + 9));
      }
      if (&local_50 != (longlong *)(puVar8 + 0xb)) {
        lVar10 = *(longlong *)(puVar8 + 0xb);
        FUN_18013ef90(&local_50,lVar10,*(longlong *)(puVar8 + 0xc) - lVar10 >> 5);
      }
      local_38[0] = '\0';
      local_38[1] = '\0';
      local_38[2] = '\0';
      local_38[3] = '\0';
      local_38[4] = '\0';
      local_38[5] = '\0';
      local_38[6] = '\0';
      local_38[7] = '\0';
      local_38[8] = '\0';
      local_38[9] = '\0';
      local_38[10] = '\0';
      local_38[0xb] = '\0';
      FUN_18015abc0(local_38,0xc,&DAT_1806bbf8c,local_a8._0_4_);
      FUN_1800aab50(&local_b8,local_a8);
      FUN_1800f4a50(&local_118,&local_b8);
      if (local_a8[4] == '\x03') {
        local_100 = ZEXT816(0);
        FUN_1801409d0(local_100 + 8,0);
        uVar2 = uStack_110;
        uVar1 = local_118;
        local_118 = 5;
        local_100[0] = uVar1;
        uStack_110 = 0;
        local_100._8_8_ = uVar2;
        FUN_1801409d0(local_100 + 8);
      }
      else if (local_a8[4] == '\x01') {
        local_100 = ZEXT816(0);
        FUN_1801409d0(local_100 + 8,0);
        uVar2 = uStack_110;
        uVar1 = local_118;
        local_108 = (undefined1 *)((ulonglong)local_108 & 0xffffffffffffff00);
        local_118 = 4;
        local_100[0] = uVar1;
        uStack_110 = (ulonglong)local_108;
        local_100._8_8_ = uVar2;
        FUN_1801409d0(local_100 + 8);
      }
      local_108 = &local_128;
      local_128 = local_b8;
      uStack_127 = uStack_b7;
      uStack_120 = uStack_b0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_100 = (undefined1  [16])0x0;
      local_f0 = 0;
      local_e8 = 0;
      lVar10 = -1;
      do {
        lVar5 = lVar10 + 1;
        lVar10 = lVar10 + 1;
      } while (local_38[lVar5] != '\0');
      FUN_18015ba30(local_100,local_38);
      puVar7 = (undefined1 *)FUN_1800f43d0(param_1 + 0x1a368,local_100);
      uVar1 = *puVar7;
      *puVar7 = local_128;
      _local_128 = CONCAT71(uStack_127,uVar1);
      uVar2 = *(ulonglong *)(puVar7 + 8);
      *(ulonglong *)(puVar7 + 8) = uStack_120;
      uStack_120 = uVar2;
      FUN_1801409d0(&uStack_120,uVar1);
      local_100._0_8_ = &local_128;
      local_128 = local_118;
      uStack_127 = uStack_117;
      uStack_120 = uStack_110;
      local_118 = 0;
      uStack_110 = 0;
      local_e0 = (undefined1  [16])0x0;
      local_d0 = 0;
      local_c8 = 0;
      lVar10 = -1;
      do {
        lVar9 = lVar10 + 1;
        lVar5 = lVar10 + 1;
        lVar10 = lVar9;
      } while (local_38[lVar5] != '\0');
      FUN_18015ba30(local_e0,local_38,lVar9);
      puVar7 = (undefined1 *)FUN_1800f43d0(param_1 + 0x1a378,local_e0);
      uVar1 = *puVar7;
      *puVar7 = local_128;
      _local_128 = CONCAT71(uStack_127,uVar1);
      uVar2 = *(ulonglong *)(puVar7 + 8);
      *(ulonglong *)(puVar7 + 8) = uStack_120;
      uStack_120 = uVar2;
      FUN_1801409d0(&uStack_120,uVar1);
      FUN_1801409d0(&uStack_110,local_118);
      FUN_1801409d0(&uStack_b0,local_b8);
    }
LAB_1800e945c:
    FUN_180111b90(&local_50);
    FUN_18015c010(local_70);
    FUN_18015c010(local_90);
    *param_2 = 2;
  }
code_r0x0001800e9196:
  puVar8 = puVar8 + 0xe;
  if (puVar8 == (undefined5 *)plVar6[1]) goto LAB_1800e945c;
  goto LAB_1800e9190;
}



