// FUN_1803dba10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803dba10 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1803dba10(undefined8 param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  bool bVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 *puVar9;
  undefined8 uVar10;
  char cVar11;
  int iVar12;
  undefined4 uVar13;
  ulonglong uVar14;
  int *piVar15;
  undefined1 *puVar16;
  ulonglong uVar17;
  longlong lVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  byte bVar21;
  uint uVar22;
  undefined8 *puVar23;
  longlong lVar24;
  ulonglong *puVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  uint uVar28;
  undefined8 uVar29;
  undefined1 in_ZMM6 [64];
  undefined1 auVar30 [64];
  undefined8 uVar31;
  undefined8 uVar32;
  undefined1 auStack_278 [32];
  undefined8 local_258;
  char local_248;
  uint local_244;
  int local_240;
  int local_23c;
  uint local_238;
  char *local_228;
  ulonglong *puStack_220;
  char *local_218;
  undefined8 uStack_210;
  char *local_208;
  undefined8 uStack_200;
  ulonglong local_1f8 [3];
  int local_1e0;
  uint local_1dc;
  int local_1d8 [2];
  undefined1 local_1d0 [32];
  undefined1 local_1b0 [16];
  undefined1 local_1a0 [16];
  undefined1 local_190 [16];
  ulonglong local_180;
  ulonglong local_178;
  undefined1 local_170 [16];
  longlong local_160;
  ulonglong local_158;
  undefined1 local_150 [16];
  undefined8 local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  longlong lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 local_118 [16];
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  ulonglong local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined1 local_d8 [16];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98 [32];
  char local_78 [32];
  ulonglong local_58;
  undefined1 local_38 [16];
  
  local_38 = in_ZMM6._0_16_;
  local_58 = DAT_1808d5f00 ^ (ulonglong)auStack_278;
  iVar12 = 0;
  local_238 = 0;
  local_244 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_150 = (undefined1  [16])0x0;
  local_140 = 0;
  local_a8 = 0;
  uStack_a0 = 0xf;
  local_b8._1_15_ = SUB1615((undefined1  [16])0x0,1);
  auVar2[0xf] = 0;
  auVar2._0_15_ = local_b8._1_15_;
  local_b8 = auVar2 << 8;
  cVar11 = FUN_180185df0(param_2,&local_f8,local_150,local_b8);
  if (cVar11 == '\0') {
    local_218 = "[icons] VPK directory load failed: {}";
    uStack_210 = 0x25;
    FUN_18020e970(&local_218,local_b8);
    goto LAB_1803dc4a9;
  }
  FUN_18015c130(param_2,local_98);
  uStack_134 = 0;
  uStack_120 = 0;
  local_118 = ZEXT816(0);
  uStack_108 = 0;
  uStack_100 = 0;
  local_138 = 0;
  lStack_130 = 0;
  uStack_128 = 0;
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_218 = "tier0.dll:g_pMemAlloc";
    uStack_210 = 0x15;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_218);
  }
  lStack_130 = (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x30);
  *(longlong *)lStack_130 = lStack_130;
  *(longlong *)(lStack_130 + 8) = lStack_130;
  uStack_120 = 0;
  local_118 = (undefined1  [16])0x0;
  uStack_108 = 7;
  uStack_100 = 8;
  local_138 = 0x3f800000;
  FUN_1801406e0(&uStack_120,0x10,lStack_130);
  local_1b0 = (undefined1  [16])0x0;
  local_1a0 = (undefined1  [16])0x0;
  FUN_18015ba30(local_1b0,"defuser",7);
  FUN_1801b0a30(&local_138,&local_208,local_1b0);
  FUN_18015c010(local_1b0);
  local_1b0 = (undefined1  [16])0x0;
  local_1a0 = (undefined1  [16])0x0;
  FUN_18015ba30(local_1b0,"kevlar",6);
  FUN_1801b0a30(&local_138,&local_208,local_1b0);
  FUN_18015c010(local_1b0);
  local_1b0 = (undefined1  [16])0x0;
  local_1a0 = (undefined1  [16])0x0;
  FUN_18015ba30(local_1b0,"assaultsuit",0xb);
  FUN_1801b0a30(&local_138,&local_208,local_1b0);
  FUN_18015c010(local_1b0);
  local_1b0 = (undefined1  [16])0x0;
  local_1a0 = (undefined1  [16])0x0;
  FUN_18015ba30(local_1b0,"ct_logo",7);
  FUN_1801b0a30(&local_138,&local_208,local_1b0);
  FUN_18015c010(local_1b0);
  local_1b0 = (undefined1  [16])0x0;
  local_1a0 = (undefined1  [16])0x0;
  FUN_18015ba30(local_1b0,&DAT_180812070,6);
  FUN_1801b0a30(&local_138,&local_208,local_1b0);
  FUN_18015c010(local_1b0);
  puVar9 = DAT_180cc92b8;
  for (puVar23 = (undefined8 *)*DAT_180cc92b8; puVar23 != puVar9; puVar23 = (undefined8 *)*puVar23)
  {
    FUN_1801d4690(&local_138,&local_208,puVar23 + 3);
  }
  uVar10 = local_150._0_8_;
  uVar26 = local_150._8_8_ - local_150._0_8_;
  uVar27 = 0;
  local_23c = 0;
  local_244 = 0;
  local_240 = 0;
  uVar22 = 0;
  uVar28 = 0;
  if (uVar26 != 0) {
    uVar31 = 0;
    uVar32 = 7;
LAB_1803dbd70:
    local_160 = 0;
    local_158 = 0xf;
    local_170._1_15_ = SUB1615((undefined1  [16])0x0,1);
    auVar3[0xf] = 0;
    auVar3._0_15_ = local_170._1_15_;
    local_170 = auVar3 << 8;
    if (uVar26 <= uVar27) {
LAB_1803dbdd7:
      local_228 = "[icons] VPK extension table is truncated";
      puStack_220 = (ulonglong *)&DAT_00000028;
      FUN_18020e620(&local_228);
LAB_1803dbdf7:
      FUN_18015c010(local_170);
      goto LAB_1803dc492;
    }
    uVar17 = uVar27;
    while( true ) {
      uVar14 = uVar17 + 1;
      if (0x10000 < uVar17 - uVar27) goto LAB_1803dbdd7;
      if (*(char *)(uVar10 + uVar17) == '\0') break;
      uVar17 = uVar14;
      if (uVar26 <= uVar14) goto LAB_1803dbdd7;
    }
    FUN_180113930(local_170,uVar10 + uVar27,uVar17 - uVar27);
    uVar17 = uVar17 + 1;
    if (local_160 != 0) {
      piVar15 = (int *)local_170;
      if (0xf < local_158) {
        piVar15 = (int *)local_170._0_8_;
      }
      if (((local_160 != 6) || (*piVar15 != 0x67767376)) || ((short)piVar15[1] != 0x635f)) {
        piVar15 = (int *)local_170;
        if (0xf < local_158) {
          piVar15 = (int *)local_170._0_8_;
        }
        if ((local_160 != 4) || (*piVar15 != 0x67767376)) {
          local_248 = '\0';
          goto LAB_1803dbe80;
        }
      }
      local_248 = '\x01';
LAB_1803dbe80:
      do {
        cVar11 = local_248;
        local_180 = 0;
        local_178 = 0xf;
        local_190._1_15_ = SUB1615((undefined1  [16])0x0,1);
        auVar4[0xf] = 0;
        auVar4._0_15_ = local_190._1_15_;
        local_190 = auVar4 << 8;
        if (uVar26 <= uVar17) {
LAB_1803dbee7:
          local_228 = "[icons] VPK path table is truncated";
          puStack_220 = (ulonglong *)0x23;
          FUN_18020e620(&local_228);
LAB_1803dbf07:
          FUN_18015c010(local_190);
          goto LAB_1803dbdf7;
        }
        uVar27 = uVar17;
        while( true ) {
          uVar14 = uVar27 + 1;
          if (0x10000 < uVar27 - uVar17) goto LAB_1803dbee7;
          if (*(char *)(uVar10 + uVar27) == '\0') break;
          uVar27 = uVar14;
          if (uVar26 <= uVar14) goto LAB_1803dbee7;
        }
        FUN_180113930(local_190,uVar10 + uVar17,uVar27 - uVar17);
        uVar27 = uVar27 + 1;
        if (local_180 == 0) goto LAB_1803dc2d7;
        if (cVar11 == '\0') {
LAB_1803dbfb8:
          bVar6 = false;
        }
        else {
          puVar20 = local_190;
          if (0xf < local_178) {
            puVar20 = (undefined1 *)local_190._0_8_;
          }
          if (local_180 < 9) {
LAB_1803dbf8b:
            puVar20 = local_190;
            if (0xf < local_178) {
              puVar20 = (undefined1 *)local_190._0_8_;
            }
            if ((local_180 != 0x15) ||
               (iVar12 = memcmp(puVar20,"panorama/images/icons",0x15), iVar12 != 0))
            goto LAB_1803dbfb8;
          }
          else {
            puVar19 = puVar20 + local_180;
            puVar16 = (undefined1 *)thunk_FUN_1805f9970(puVar20,puVar19,"equipment",9);
            if ((puVar16 == puVar19) || ((longlong)puVar16 - (longlong)puVar20 == -1)) {
              goto LAB_1803dbf8b;
            }
          }
          bVar6 = true;
        }
        iVar12 = local_240;
LAB_1803dbfc2:
        local_1a0 = ZEXT816(0xf) << 0x40;
        local_1b0._1_15_ = SUB1615((undefined1  [16])0x0,1);
        auVar5[0xf] = 0;
        auVar5._0_15_ = local_1b0._1_15_;
        local_1b0 = auVar5 << 8;
        if (uVar26 <= uVar27) {
LAB_1803dc027:
          local_228 = "[icons] VPK filename table is truncated";
          puStack_220 = (ulonglong *)0x27;
LAB_1803dc037:
          FUN_18020e620(&local_228);
          FUN_18015c010(local_1b0);
          goto LAB_1803dbf07;
        }
        uVar14 = uVar27;
        while( true ) {
          uVar17 = uVar14 + 1;
          if (0x10000 < uVar14 - uVar27) goto LAB_1803dc027;
          if (*(char *)(uVar10 + uVar14) == '\0') break;
          uVar14 = uVar17;
          if (uVar26 <= uVar17) goto LAB_1803dc027;
        }
        FUN_180113930(local_1b0,uVar10 + uVar27,uVar14 - uVar27);
        uVar17 = uVar14 + 1;
        if (local_1a0._0_8_ != 0) {
          if (uVar26 - uVar17 < 0x12) {
LAB_1803dc3c5:
            local_228 = "[icons] VPK entry table is invalid";
            puStack_220 = (ulonglong *)0x22;
            goto LAB_1803dc037;
          }
          auVar30 = ZEXT1664(*(undefined1 (*) [16])(uVar10 + uVar17));
          if ((*(short *)(uVar10 + 0x10 + uVar17) != -1) ||
             (uVar27 = (ulonglong)SUB162(*(undefined1 (*) [16])(uVar10 + uVar17),4),
             uVar26 - (uVar14 + 0x13) < uVar27)) goto LAB_1803dc3c5;
          uVar27 = uVar14 + 0x13 + uVar27;
          if (bVar6) {
            local_23c = local_23c + 1;
            puVar20 = local_1b0;
            if (0xf < (ulonglong)local_1a0._8_8_) {
              puVar20 = (undefined1 *)local_1b0._0_8_;
            }
            uVar14 = 0xcbf29ce484222325;
            uVar17 = 0;
            if (local_1a0._0_8_ != 0) {
              do {
                uVar14 = (uVar14 ^ (byte)puVar20[uVar17]) * 0x100000001b3;
                uVar17 = uVar17 + 1;
              } while (uVar17 < (ulonglong)local_1a0._0_8_);
              iVar12 = local_240;
            }
            lVar18 = FUN_180177b00(&local_138,&local_208,local_1b0,uVar14);
            lVar24 = lStack_130;
            if (*(longlong *)(lVar18 + 8) != 0) {
              lVar24 = *(longlong *)(lVar18 + 8);
            }
            if (lVar24 == lStack_130) {
              FUN_18015c010(local_1b0);
            }
            else {
              local_244 = local_244 + 1;
              local_d8._2_14_ = SUB1614((undefined1  [16])0x0,2);
              auVar7._14_2_ = 0;
              auVar7._0_14_ = local_d8._2_14_;
              local_d8 = auVar7 << 0x10;
              uVar17 = (ulonglong)auVar30._8_4_;
              uVar29 = 0;
              local_c8 = uVar31;
              uStack_c0 = uVar32;
              if (auVar30._6_2_ == 0x7fff) {
                if ((undefined8 *)local_d8 != param_2) {
                  puVar23 = param_2;
                  if (7 < (ulonglong)param_2[3]) {
                    puVar23 = (undefined8 *)*param_2;
                  }
                  uVar29 = FUN_1800f5190(local_d8,puVar23,param_2[2]);
                }
                uVar17 = uVar17 + (local_f0 & 0xffffffff) + 0x1c;
              }
              else {
                FUN_18015abc0(local_78,0x20,"pak01_%03u.vpk",auVar30._6_2_);
                puVar25 = (ulonglong *)0xffffffffffffffff;
                do {
                  puVar25 = (ulonglong *)((longlong)puVar25 + 1);
                } while (local_78[(longlong)puVar25] != '\0');
                uVar13 = __std_fs_code_page();
                local_228 = local_78;
                puStack_220 = puVar25;
                FUN_1801628d0(local_1d0,uVar13,&local_228);
                local_238 = local_238 | 3;
                uVar29 = FUN_1800a7e60(local_1f8,local_98,local_1d0);
                FUN_180176c30(local_d8,uVar29);
                FUN_18015b930(local_1f8);
                uVar29 = FUN_18015b930(local_1d0);
              }
              local_258 = CONCAT44(local_258._4_4_,auVar30._12_4_);
              cVar11 = FUN_1803dc500(uVar29,local_d8,local_1b0,uVar17);
              iVar12 = local_240 + 1;
              if (cVar11 == '\0') {
                iVar12 = local_240;
              }
              local_240 = iVar12;
              FUN_18015b930(local_d8);
              FUN_18015c010(local_1b0);
            }
          }
          else {
            FUN_18015c010(local_1b0);
          }
          goto LAB_1803dbfc2;
        }
        FUN_18015c010(local_1b0);
        FUN_18015c010(local_190);
      } while( true );
    }
    FUN_18015c010(local_170);
    goto LAB_1803dc2f3;
  }
  goto LAB_1803dc307;
LAB_1803dc2d7:
  FUN_18015c010(local_190);
  FUN_18015c010(local_170);
  if (uVar26 <= uVar27) goto LAB_1803dc2f3;
  goto LAB_1803dbd70;
LAB_1803dc2f3:
  uVar22 = local_244;
  uVar28 = local_238;
LAB_1803dc307:
  local_218 = "[icons] VPK parsed: equipment={} targets={} cached={}";
  uStack_210 = 0x35;
  local_1e0 = local_23c;
  local_1f8[0] = 0x2000000000000000;
  local_1dc = uVar22;
  local_1f8[1] = 0x2000000000000004;
  local_1d8[0] = iVar12;
  local_1f8[2] = 0x2000000000000008;
  local_228 = (char *)0x3;
  puStack_220 = local_1f8;
  local_1a0 = ZEXT816(0xf) << 0x40;
  local_1b0._1_15_ = SUB1615((undefined1  [16])0x0,1);
  auVar8[0xf] = 0;
  auVar8._0_15_ = local_1b0._1_15_;
  local_1b0 = auVar8 << 8;
  local_244 = uVar28 | 4;
  uVar27 = 0;
  uVar26 = 0;
  do {
    bVar21 = (byte)(local_1f8[uVar26] >> 0x3c);
    if (bVar21 == 0xc) {
      uVar27 = uVar27 + *(longlong *)((longlong)local_1d8 + (local_1f8[uVar26] & 0xfffffffffffffff))
      ;
    }
    else if (bVar21 == 0xb) {
      uVar27 = uVar27 + 0x20;
    }
    else {
      uVar27 = uVar27 + 8;
    }
    uVar26 = uVar26 + 1;
  } while (uVar26 < 3);
  lVar24 = uVar27 + 0x35;
  if (0xffffffffffffffca < uVar27) {
    lVar24 = -1;
  }
  FUN_1800f5540(local_1b0,lVar24);
  local_208 = local_218;
  uStack_200 = uStack_210;
  local_258 = 0;
  FUN_1801da050(&local_218,local_1b0,&local_208,&local_228);
  puVar20 = local_1b0;
  if ((ulonglong)local_1a0._8_8_ < 0x10) {
LAB_1803dc45a:
    puVar19 = (undefined1 *)FUN_1803b0a60();
    uVar1 = *puVar19;
    puVar19 = (undefined1 *)FUN_1803b0a60();
    *puVar19 = 1;
    FUN_1800a9e50(1,puVar20);
    puVar20 = (undefined1 *)FUN_1803b0a60();
    *puVar20 = uVar1;
  }
  else {
    puVar20 = (undefined1 *)local_1b0._0_8_;
    if ((undefined1 *)local_1b0._0_8_ != (undefined1 *)0x0) goto LAB_1803dc45a;
  }
  FUN_18015c010(local_1b0);
LAB_1803dc492:
  FUN_1801868f0(&local_138);
  FUN_18015b930(local_98);
LAB_1803dc4a9:
  FUN_18015c010(local_b8);
  FUN_180113710(local_150);
}



