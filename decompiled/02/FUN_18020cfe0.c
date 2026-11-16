// FUN_18020cfe0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18020cfe0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18020cfe0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined8 *local_138;
  undefined1 local_128 [16];
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_e0 [16];
  undefined1 local_d0 [32];
  undefined1 local_b0 [16];
  undefined8 local_a0;
  undefined1 local_98 [16];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 uStack_60;
  char local_58 [32];
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_168;
  puVar11 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    puVar11 = (undefined8 *)*param_3;
  }
  uVar13 = 0xcbf29ce484222325;
  uVar10 = 0;
  if (param_3[2] != 0) {
    do {
      uVar13 = (uVar13 ^ *(byte *)((longlong)puVar11 + uVar10)) * 0x100000001b3;
      uVar10 = uVar10 + 1;
    } while (uVar10 < (ulonglong)param_3[2]);
  }
  local_138 = param_2;
  lVar8 = FUN_180177b00(&DAT_180cc9d08,local_e0,param_3,uVar13);
  lVar14 = DAT_180cc9d10;
  if (*(longlong *)(lVar8 + 8) != 0) {
    lVar14 = *(longlong *)(lVar8 + 8);
  }
  if (lVar14 == DAT_180cc9d10) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  else {
    local_88 = 0;
    uStack_80 = 7;
    local_98._2_14_ = SUB1614((undefined1  [16])0x0,2);
    auVar1._14_2_ = 0;
    auVar1._0_14_ = local_98._2_14_;
    local_98 = auVar1 << 0x10;
    if (*(short *)(lVar14 + 0x30) == 0x7fff) {
      local_128 = (undefined1  [16])0x0;
      local_118 = 0;
      local_110 = 0;
      FUN_180159e60(local_128,L"pak01_dir.vpk",0xd);
      uVar9 = FUN_1800a7e60(local_58,&DAT_180cc9d50,local_128);
      FUN_180176c30(local_98,uVar9);
      FUN_18015b930(local_58);
      puVar11 = (undefined8 *)local_128;
    }
    else {
      local_138 = (undefined8 *)0xa05181ee77d57a06;
      local_128._0_8_ = 0xdb35e39b27e1c185;
      local_128._8_8_ = 0xa05181ee77d57a06;
      local_108 = 0x30255f31306b6170;
      uStack_100 = 0x6b70762e7533;
      FUN_18015abc0(local_58,0x20,&local_108,*(short *)(lVar14 + 0x30));
      lVar8 = -1;
      do {
        lVar12 = lVar8 + 1;
        lVar3 = lVar8 + 1;
        lVar8 = lVar12;
      } while (local_58[lVar3] != '\0');
      uVar7 = __std_fs_code_page();
      local_128._8_8_ = lVar12;
      local_128._0_8_ = local_58;
      FUN_1801628d0(&local_108,uVar7,local_128);
      uVar9 = FUN_1800a7e60(local_d0,&DAT_180cc9d50,&local_108);
      FUN_180176c30(local_98,uVar9);
      FUN_18015b930(local_d0);
      puVar11 = &local_108;
    }
    FUN_18015b930(puVar11);
    local_b0 = (undefined1  [16])0x0;
    local_a0 = 0;
    local_68 = 0;
    uStack_60 = 0xf;
    local_78._1_15_ = SUB1615((undefined1  [16])0x0,1);
    auVar2[0xf] = 0;
    auVar2._0_15_ = local_78._1_15_;
    local_78 = auVar2 << 8;
    local_148 = local_78;
    cVar6 = FUN_180205be0(local_98,*(undefined8 *)(lVar14 + 0x38),*(undefined4 *)(lVar14 + 0x40),
                          local_b0);
    uVar9 = local_a0;
    if (cVar6 == '\0') {
      local_128._8_8_ = 0x27;
      local_128._0_8_ = "[econ] VPK entry read failed for {}: {}";
      FUN_18020f580(local_128,param_3,local_78);
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
    }
    else {
      local_a0 = 0;
      uVar5 = local_b0._8_8_;
      uVar4 = local_b0._0_8_;
      local_b0 = ZEXT816(0);
      *param_2 = uVar4;
      param_2[1] = uVar5;
      param_2[2] = uVar9;
    }
    FUN_18015c010(local_78);
    FUN_180113710(local_b0);
    FUN_18015b930(local_98);
  }
}



