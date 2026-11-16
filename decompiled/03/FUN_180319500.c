// FUN_180319500 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180319500 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180319500(longlong *param_1,byte param_2)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  longlong lVar9;
  longlong *plVar10;
  undefined1 (*pauVar11) [32];
  byte bVar12;
  char *pcVar13;
  undefined1 *puVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  undefined1 auStack_258 [32];
  undefined8 local_238;
  undefined8 local_228;
  byte local_220;
  ulonglong local_218 [6];
  undefined8 uStack_1e8;
  undefined1 *puStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined *local_1b8 [2];
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined1 uStack_198;
  undefined4 local_197;
  double local_193;
  char *local_18b;
  char local_178 [96];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  char *local_f8;
  ulonglong *puStack_f0;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  char *local_b8;
  ulonglong *puStack_b0;
  longlong lStack_a8;
  longlong lStack_a0;
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [16];
  undefined8 local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_258;
  uVar17 = (ulonglong)param_2;
  local_228 = local_228 & 0xffffffff00000000;
  lVar18 = *param_1;
  local_220 = param_2;
  if ((*(char *)(lVar18 + 2) == '\x01') || ((byte)(*(char *)(lVar18 + 2) - 2U) < 4)) {
    cVar1 = *(char *)(lVar18 + 3);
    uVar3 = *(undefined4 *)(lVar18 + 4);
    uVar19 = uVar17;
    if (0x26 < uVar17) {
      uVar19 = 0x26;
    }
    FUN_1803190b0(param_1[1],6,(&PTR_DAT_180803050)[uVar19 * 2]);
    *(int *)(*param_1 + 0x1d8) = *(int *)(*param_1 + 0x1d8) + 1;
    if (cVar1 != '\0') {
      *(int *)(*param_1 + 0x1dc) = *(int *)(*param_1 + 0x1dc) + 1;
    }
    uVar16 = uVar17;
    if (0x2f < uVar17) {
      uVar16 = 0x2f;
    }
    sVar2 = *(short *)(*(longlong *)param_1[2] + 0x1e8 + uVar16 * 2);
    if (sVar2 != -1) {
      *(short *)(*(longlong *)param_1[2] + 0x1e8 + uVar16 * 2) = sVar2 + 1;
    }
    lVar18 = *param_1;
    pcVar13 = "none";
    if (*(char *)(lVar18 + 0x5c) != '\0') {
      pcVar13 = "learned";
    }
    local_118._8_8_ = 0x56e1a881c7edbdfb;
    local_118._0_8_ = 0x81dbc02ce45a5a11;
    local_108._8_8_ = 0x3a86d9b9935ba511;
    local_108._0_8_ = 0x86903df743bd4376;
    local_218[0] = 0xdb35e39b27e1c185;
    local_218[1] = 0xa05181ee77d57a06;
    local_218[2] = 0x929654b1461b7377;
    local_218[3] = 0xa5cea54bfef7110;
    local_218[4] = 0xa70c9f7f916b7e19;
    local_218[5] = 0x2b2d6d82aa402c0a;
    uStack_1e8 = 0xc064ed9510bc010b;
    puStack_1e0 = (undefined1 *)0xfec09918395f26c4;
    local_1d8 = 0x835e2313e2c48f8d;
    uStack_1d0 = 0xf863c3261a551f0e;
    uStack_1c8 = 0x56a0bc092c25563f;
    uStack_1c0 = 0x67ff882c0a9bdf38;
    local_1b8[0] = (undefined *)0xe9fbbd57d9292e61;
    local_1b8[1] = (undefined *)0x24c1d5fafa9ec992;
    local_1a8 = 0x38802513;
    uStack_1a4 = 0xe0a313cd;
    local_228 = 0x3a86d390ee208d6c;
    uStack_1a0 = 0xee208d6c;
    uStack_19c = 0x3a86d390;
    builtin_strncpy(local_178,
                    "[pixelsurf] attempt over cmd={} reason={} ({}) owned_ticks={} best_ride={}/{} confirmed={} attem"
                    ,0x60);
    auVar4._8_8_ = 0x24c1d5fafa9ec992;
    auVar4._0_8_ = 0xe9fbbd57d9292e61;
    local_118 = auVar4 ^ local_118;
    auVar5._8_4_ = 0xee208d6c;
    auVar5._0_8_ = 0xe0a313cd38802513;
    auVar5._12_4_ = 0x3a86d390;
    local_108 = local_108 ^ auVar5;
    uVar16 = 0xffffffffffffffff;
    do {
      puStack_f0 = (ulonglong *)(uVar16 + 1);
      lVar9 = uVar16 + 1;
      uVar16 = (ulonglong)puStack_f0;
    } while (local_178[lVar9] != '\0');
    local_f8 = local_178;
    if (DAT_180bbeabc != '\0') {
      uStack_1c0 = *(undefined8 *)param_1[3];
      local_218[0] = 0x3000000000000000;
      local_1b8[0] = (&PTR_DAT_180803050)[uVar19 * 2];
      local_218[1] = 0xb000000000000008;
      local_1b8[1] = (&PTR_s_no_event_180803058)[uVar19 * 2];
      local_218[2] = 0xb000000000000010;
      local_1a8 = uVar3;
      local_218[3] = 0x1000000000000018;
      uStack_1a4 = *(undefined4 *)(lVar18 + 0xc);
      local_218[4] = 0x100000000000001c;
      uStack_1a0 = *(undefined4 *)param_1[4];
      local_218[5] = 0x1000000000000020;
      uStack_1e8 = 0x5000000000000024;
      uStack_19c = CONCAT31((int3)*(undefined4 *)(lVar18 + 0x1d8),cVar1);
      uStack_198 = (undefined1)((uint)*(undefined4 *)(lVar18 + 0x1d8) >> 0x18);
      puStack_1e0 = (undefined1 *)0x1000000000000025;
      local_197 = *(undefined4 *)(lVar18 + 0x1dc);
      local_1d8 = 0x1000000000000029;
      local_193 = (double)*(float *)(lVar18 + 0x60);
      uStack_1d0 = 0x800000000000002d;
      local_18b = pcVar13;
      uStack_1c8 = 0xb000000000000035;
      local_b8 = (char *)0xb;
      puStack_b0 = local_218;
      local_48 = 0;
      uStack_40 = 0xf;
      local_58._1_15_ = SUB1615((undefined1  [16])0x0,1);
      auVar6[0xf] = 0;
      auVar6._0_15_ = local_58._1_15_;
      local_58 = auVar6 << 8;
      local_228 = 0x3a86d39000000010;
      uVar19 = 0;
      uVar16 = 0;
      do {
        bVar12 = (byte)(local_218[uVar16] >> 0x3c);
        if (bVar12 == 0xc) {
          uVar19 = uVar19 + *(longlong *)
                             ((longlong)local_1b8 + (local_218[uVar16] & 0xfffffffffffffff));
        }
        else if (bVar12 == 0xb) {
          uVar19 = uVar19 + 0x20;
        }
        else {
          uVar19 = uVar19 + 8;
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 < 0xb);
      lVar18 = (longlong)puStack_f0 + uVar19;
      if (CARRY8((ulonglong)puStack_f0,uVar19)) {
        lVar18 = -1;
      }
      FUN_1800f5540(local_58,lVar18);
      local_98._8_8_ = puStack_b0;
      local_98._0_8_ = local_b8;
      local_238 = 0;
      FUN_1801da050(&local_b8,local_58,&local_f8,local_98);
      FUN_18030e280(local_58);
      FUN_18015c010(local_58);
    }
    uVar15 = 0;
    uVar19 = 0;
    if (*(int *)(*param_1 + 0x1d8) == (*(int *)(*param_1 + 0x1d8) / 0x14) * 0x14) {
      local_48 = 0;
      uStack_40 = 0xf;
      local_58._1_15_ = SUB1615((undefined1  [16])0x0,1);
      auVar7[0xf] = 0;
      auVar7._0_15_ = local_58._1_15_;
      local_58 = auVar7 << 8;
      uVar17 = 0x1ea;
      bVar12 = 1;
      do {
        if (*(short *)(uVar17 + *param_1) != 0) {
          FUN_18015bea0(local_78,*(short *)(uVar17 + *param_1));
          uVar16 = (ulonglong)bVar12;
          if (0x26 < uVar16) {
            uVar16 = 0x26;
          }
          local_d8 = (undefined1  [16])0x0;
          local_c8 = (undefined1  [16])0x0;
          lVar18 = -1;
          do {
            lVar18 = lVar18 + 1;
          } while ((&PTR_DAT_180803050)[uVar16 * 2][lVar18] != '\0');
          FUN_18015ba30(local_d8);
          plVar10 = (longlong *)FUN_18015b2a0(local_d8,&DAT_1808028f0,1);
          local_b8 = (char *)*plVar10;
          puStack_b0 = (ulonglong *)plVar10[1];
          lStack_a8 = plVar10[2];
          lStack_a0 = plVar10[3];
          plVar10[3] = 0xf;
          *(undefined1 *)plVar10 = 0;
          plVar10[2] = 0;
          FUN_18015a6e0(&local_f8);
          local_228 = CONCAT44(local_228._4_4_,uVar15) | 6;
          pauVar11 = (undefined1 (*) [32])FUN_18015b2a0(&local_f8,&DAT_1806bcfc0,1);
          local_98 = *pauVar11;
          (*pauVar11)[0] = 0;
          *(undefined8 *)(*pauVar11 + 0x10) = 0;
          *(undefined8 *)(*pauVar11 + 0x18) = 0xf;
          uVar15 = 0xe;
          puVar14 = local_98;
          if (0xf < local_98._24_8_) {
            puVar14 = local_98._0_8_;
          }
          FUN_18015b2a0(local_58,puVar14,local_98._16_8_);
          FUN_18015c010(local_98);
          FUN_18015c010(&local_f8);
          FUN_18015c010(&local_b8);
          FUN_18015c010(local_d8);
          FUN_18015c010(local_78);
        }
        bVar12 = bVar12 + 1;
        uVar17 = uVar17 + 2;
      } while (uVar17 < 0x236);
      lVar18 = *param_1;
      local_218[0] = 0xdb35e39b27e1c185;
      local_218[1] = 0xa05181ee77d57a06;
      local_218[2] = 0x929654b1461b7377;
      local_218[3] = 0xa5cea54bfef7110;
      local_218[4] = 0xa70c9f7f916b7e19;
      local_218[5] = 0x2b2d6d82aa402c0a;
      uStack_1e8 = 0xc064ed9510bc010b;
      puStack_1e0 = (undefined1 *)0xfec09918395f26c4;
      local_1d8 = 0x835e2313e2c48f8d;
      local_228 = 0xf863c3261a551f0e;
      uStack_1d0 = 0xf863c3261a551f0e;
      builtin_strncpy(local_178,
                      "[pixelsurf] stats: attempts={} hits={} divergences={}/{} reasons: {}\n",0x46)
      ;
      local_178[0x46] = '\0';
      local_178[0x47] = '\0';
      local_178[0x48] = '\0';
      local_178[0x49] = '\0';
      local_178[0x4a] = '\0';
      local_178[0x4b] = '\0';
      local_178[0x4c] = '\0';
      local_178[0x4d] = '\0';
      local_178[0x4e] = '\0';
      local_178[0x4f] = '\0';
      puStack_b0 = (ulonglong *)0xffffffffffffffff;
      uVar17 = (ulonglong)local_220;
      do {
        puStack_b0 = (ulonglong *)((longlong)puStack_b0 + 1);
      } while (local_178[(longlong)puStack_b0] != '\0');
      local_b8 = local_178;
      if (DAT_180bbeabc != '\0') {
        local_218[0] = 0x1000000000000000;
        local_218[5] = *(undefined8 *)(lVar18 + 0x1d8);
        local_218[1] = 0x1000000000000004;
        local_218[2] = 0x1000000000000008;
        uStack_1e8 = CONCAT44(*(undefined4 *)(lVar18 + 0x1e0),
                              *(int *)(lVar18 + 0x1e0) - *(int *)(lVar18 + 0x1e4));
        local_218[3] = 0x100000000000000c;
        puStack_1e0 = local_58;
        if (0xf < uStack_40) {
          puStack_1e0 = (undefined1 *)local_58._0_8_;
        }
        local_1d8 = local_48;
        local_218[4] = 0xc000000000000010;
        local_f8 = (char *)0x5;
        puStack_f0 = local_218;
        local_c8 = ZEXT816(0xf) << 0x40;
        local_d8._1_15_ = SUB1615((undefined1  [16])0x0,1);
        auVar8[0xf] = 0;
        auVar8._0_15_ = local_d8._1_15_;
        local_d8 = auVar8 << 8;
        local_228 = CONCAT44(0xf863c326,uVar15 | 1);
        uVar16 = uVar19;
        do {
          bVar12 = (byte)(local_218[uVar16] >> 0x3c);
          if (bVar12 == 0xc) {
            uVar19 = uVar19 + *(longlong *)
                               ((longlong)local_218 + (local_218[uVar16] & 0xfffffffffffffff) + 0x30
                               );
          }
          else if (bVar12 == 0xb) {
            uVar19 = uVar19 + 0x20;
          }
          else {
            uVar19 = uVar19 + 8;
          }
          uVar16 = uVar16 + 1;
        } while (uVar16 < 5);
        lVar18 = (longlong)puStack_b0 + uVar19;
        if (CARRY8((ulonglong)puStack_b0,uVar19)) {
          lVar18 = -1;
        }
        FUN_1800f5540(local_d8,lVar18);
        local_98._8_8_ = puStack_f0;
        local_98._0_8_ = local_f8;
        puStack_f0 = puStack_b0;
        local_f8 = local_b8;
        local_238 = 0;
        FUN_1801da050(&local_b8,local_d8,&local_f8,local_98);
        FUN_18030e280(local_d8);
        FUN_18015c010(local_d8);
      }
      FUN_18015c010(local_58);
    }
    FUN_1803190b0(param_1[1],0,"released");
  }
  *(undefined1 *)(*param_1 + 3) = 0;
  *(undefined4 *)(*param_1 + 4) = 0;
  *(undefined4 *)(*param_1 + 8) = 0;
  *(undefined4 *)(*param_1 + 0xc) = 0;
  *(undefined4 *)(*param_1 + 0x10) = 0;
  *(undefined4 *)(*param_1 + 0x18) = 0;
  *(undefined1 *)(*param_1 + 0xa6) = 0;
  *(undefined1 *)(*param_1 + 0xee) = 0;
  *(undefined1 *)(*param_1 + 0x5c) = 0;
  FUN_180318260(param_1[5],uVar17);
}



