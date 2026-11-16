// FUN_1800ca690 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800ca690 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800ca690(undefined8 *param_1,char *param_2)

{
  ulonglong uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  char *pcVar6;
  undefined8 *puVar7;
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  undefined1 auVar8 [64];
  undefined1 auVar9 [64];
  undefined1 auVar10 [64];
  undefined1 auVar11 [16];
  undefined1 auVar12 [64];
  undefined1 auVar13 [16];
  undefined1 auVar14 [64];
  undefined1 auStack_2a8 [32];
  undefined4 local_288 [2];
  undefined8 *local_280;
  ulonglong local_278;
  undefined8 *local_270;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  char *local_248;
  longlong *local_238;
  undefined1 local_230 [40];
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined1 local_178 [56];
  undefined1 local_140 [56];
  undefined1 local_108 [56];
  undefined1 local_d0 [56];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulonglong local_78;
  
  local_78 = DAT_1808d5f00 ^ (ulonglong)auStack_2a8;
  local_208 = 0;
  auVar11._12_4_ = 0;
  auVar11._0_12_ = ZEXT812(0);
  auVar12 = ZEXT1264(ZEXT812(0)) << 0x20;
  uStack_204 = 0;
  auVar14 = ZEXT464(0x3f800000);
  uStack_200 = 0x3f800000;
  uStack_1fc = 0;
  uStack_1f8 = 0;
  uStack_1f4 = 0;
  uStack_1f0 = 0xffffffff;
  uStack_1ec = 0;
  local_1e8 = 0x3f80000000000000;
  uStack_1e0 = 0;
  uStack_1d8 = 0;
  uStack_1d4 = 0xffffffff;
  uStack_1d0 = 0;
  uStack_1cc = 0;
  local_1c8 = 0x3f800000;
  uStack_1c0 = 0;
  uStack_1b8 = 0xffffffff;
  uStack_1b4 = 0;
  uStack_1b0 = 0;
  uStack_1ac = 0x3f800000;
  local_1a8 = 0;
  uStack_1a4 = 0;
  uStack_1a0 = 0;
  uStack_19c = 0xffffffff;
  uStack_198 = 0;
  uStack_194 = 0;
  uStack_190 = 0x3f800000;
  uStack_18c = 0;
  *param_1 = 0;
  param_1[1] = 0x3f800000;
  param_1[2] = 0;
  param_1[3] = 0xffffffff;
  param_1[4] = 0x3f80000000000000;
  param_1[5] = 0;
  param_1[6] = 0xffffffff00000000;
  param_1[7] = 0;
  param_1[8] = 0x3f800000;
  param_1[9] = 0;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0x3f80000000000000;
  param_1[0xc] = 0;
  param_1[0xd] = 0xffffffff00000000;
  param_1[0xe] = 0;
  param_1[0xf] = 0x3f800000;
  auVar11 = vunpcklps_avx(auVar11 << 0x20,auVar11 << 0x20);
  param_1[0x10] = auVar11._0_8_;
  *(undefined4 *)(param_1 + 0x11) = 0xffffffff;
  if (*param_2 == '\x02') {
    local_278 = 0;
    local_238 = (longlong *)(param_2 + 8);
    local_280 = param_1;
    local_270 = param_1;
    local_248 = param_2;
    while( true ) {
      uVar1 = local_278;
      switch(*param_2) {
      case '\0':
        uVar5 = 0;
        break;
      case '\x01':
        uVar5 = *(ulonglong *)(*local_238 + 8);
        break;
      case '\x02':
        uVar5 = ((longlong *)*local_238)[1] - *(longlong *)*local_238 >> 4;
        break;
      default:
        uVar5 = 1;
      }
      if (5 < uVar5) {
        uVar5 = 5;
      }
      if (uVar5 <= local_278) break;
      if (*param_2 != '\x02') {
        local_280 = (undefined8 *)FUN_180112a50(param_2);
        uVar4 = FUN_18010f410(local_230);
        FUN_1800f6ca0(local_d0,0x131,uVar4);
                    /* WARNING: Subroutine does not return */
        FUN_180606630(local_d0,&DAT_1808d1050);
      }
      pcVar6 = (char *)(local_278 * 0x10 + *(longlong *)*local_238);
      puVar7 = (undefined8 *)(local_278 * 0x1c + (longlong)local_280);
      local_288[0] = 0;
      auVar12 = ZEXT1664(auVar12._0_16_);
      auVar14 = ZEXT1664(auVar14._0_16_);
      local_268 = FUN_1800e63a0(pcVar6,&DAT_1806bdf80,local_288);
      if (*pcVar6 != '\x01') {
        local_280 = (undefined8 *)FUN_180112a50(pcVar6);
        uVar4 = FUN_1800f6bd0(local_230,"cannot use value() with ",&local_280);
        FUN_1800f6ca0(local_108,0x132,uVar4);
                    /* WARNING: Subroutine does not return */
        FUN_180606630(local_108,&DAT_1808d1050);
      }
      local_98 = 0;
      uStack_90 = 0;
      uStack_88 = 0;
      uStack_80 = 0;
      auVar12 = ZEXT1664(auVar12._0_16_);
      auVar14 = ZEXT1664(auVar14._0_16_);
      FUN_1800e6b50(pcVar6,&local_98,&DAT_1806bdf84);
      uVar4 = FUN_1800f3e20(pcVar6,local_230);
      cVar2 = FUN_1800e6ca0(&local_98,uVar4);
      auVar13 = auVar14._0_16_;
      auVar11 = auVar12._0_16_;
      if (cVar2 == '\0') {
        uVar4 = FUN_1800f34a0(&local_98);
        uStack_264 = FUN_1800e6880(uVar4);
        auVar13 = auVar14._0_16_;
        auVar11 = auVar12._0_16_;
      }
      else {
        uStack_264 = auVar12._0_4_;
      }
      if (*pcVar6 != '\x01') {
        local_280 = (undefined8 *)FUN_180112a50(pcVar6);
        uVar4 = FUN_1800f6bd0(local_230,"cannot use value() with ",&local_280);
        FUN_1800f6ca0(local_140,0x132,uVar4);
                    /* WARNING: Subroutine does not return */
        FUN_180606630(local_140,&DAT_1808d1050);
      }
      local_98 = 0;
      uStack_90 = 0;
      uStack_88 = 0;
      uStack_80 = 0;
      auVar12 = ZEXT1664(auVar11);
      auVar14 = ZEXT1664(auVar13);
      FUN_1800e6b50(pcVar6,&local_98,"scale");
      uVar4 = FUN_1800f3e20(pcVar6,local_230);
      cVar2 = FUN_1800e6ca0(&local_98,uVar4);
      auVar13 = auVar14._0_16_;
      auVar11 = auVar12._0_16_;
      if (cVar2 == '\0') {
        uVar4 = FUN_1800f34a0(&local_98);
        uStack_260 = FUN_1800e6880(uVar4);
        auVar13 = auVar14._0_16_;
        auVar11 = auVar12._0_16_;
      }
      else {
        uStack_260 = auVar14._0_4_;
      }
      if (*pcVar6 != '\x01') {
        local_280 = (undefined8 *)FUN_180112a50(pcVar6);
        uVar4 = FUN_1800f6bd0(local_230,"cannot use value() with ",&local_280);
        FUN_1800f6ca0(local_178,0x132,uVar4);
                    /* WARNING: Subroutine does not return */
        FUN_180606630(local_178,&DAT_1808d1050);
      }
      local_98 = 0;
      uStack_90 = 0;
      uStack_88 = 0;
      uStack_80 = 0;
      auVar12 = ZEXT1664(auVar11);
      auVar14 = ZEXT1664(auVar13);
      FUN_1800e6b50(pcVar6,&local_98,"rotation");
      uVar4 = FUN_1800f3e20(pcVar6,local_230);
      cVar2 = FUN_1800e6ca0(&local_98,uVar4);
      if (cVar2 == '\0') {
        uVar4 = FUN_1800f34a0(&local_98);
        uStack_25c = FUN_1800e6880(uVar4);
      }
      else {
        uStack_25c = auVar12._0_4_;
      }
      local_288[0] = auVar12._0_4_;
      auVar9._0_8_ = FUN_1800e9950(pcVar6,&DAT_1806bdfa4,local_288);
      auVar9._8_56_ = extraout_var;
      auVar10 = ZEXT1664(auVar9._0_16_);
      local_288[0] = auVar12._0_4_;
      auVar8._0_8_ = FUN_1800e9950(pcVar6,&DAT_1806bdfa8,local_288);
      auVar8._8_56_ = extraout_var_00;
      auVar9 = ZEXT1664(auVar8._0_16_);
      local_288[0] = 0xffffffff;
      uVar3 = FUN_1800e63a0(pcVar6,"anchor",local_288);
      *puVar7 = CONCAT44(uStack_264,local_268);
      puVar7[1] = CONCAT44(uStack_25c,uStack_260);
      auVar11 = vunpcklps_avx(auVar10._0_16_,auVar9._0_16_);
      puVar7[2] = auVar11._0_8_;
      *(undefined4 *)(puVar7 + 3) = uVar3;
      FUN_1800c9ee0(puVar7);
      local_278 = uVar1 + 1;
    }
  }
}



