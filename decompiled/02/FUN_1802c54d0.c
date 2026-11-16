// FUN_1802c54d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802c54d0 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802c54d0(undefined8 param_1,longlong param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [12];
  char cVar3;
  byte bVar4;
  byte bVar5;
  short sVar6;
  int iVar7;
  ULONGLONG UVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined4 uVar13;
  undefined1 extraout_var [56];
  undefined1 auVar14 [64];
  undefined1 auStack_19ca8 [32];
  undefined1 *puStack_19c88;
  undefined8 ***pppuStack_19c80;
  undefined4 uStack_19c78;
  undefined1 auStack_19c68 [12];
  undefined4 uStack_19c5c;
  undefined4 uStack_19c58;
  undefined1 auStack_19c48 [16];
  undefined8 uStack_19c38;
  undefined8 **ppuStack_19c28;
  longlong *plStack_19c20;
  undefined1 auStack_19c18 [52624];
  undefined1 local_ce88 [52624];
  undefined4 local_f8 [2];
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 *local_e0;
  longlong *local_d8;
  undefined4 *local_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulonglong local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_28;
  undefined8 uStack_10;
  
  uStack_10 = 0x1802c54ed;
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_19ca8;
  if (DAT_180b0d2d0 != '\0') {
    iVar7 = FUN_1805f68d0(&DAT_180b8e2e0);
    cVar3 = DAT_180b8e2dc;
    if (iVar7 != 0) {
LAB_1802c5987:
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_180b8e32c == 0x7fffffff) {
LAB_1802c5972:
      DAT_180b8e32c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    FUN_1805f68fc(&DAT_180b8e2e0);
    if ((cVar3 != '\0') && (DAT_180b0cc88 != '\0')) {
      iVar7 = FUN_1805f68d0(&DAT_180b8e2e0);
      if (iVar7 != 0) goto LAB_1802c5987;
      if (DAT_180b8e32c == 0x7fffffff) goto LAB_1802c5972;
      local_c8 = _DAT_180b8e330;
      uStack_c0 = uRam0000000180b8e338;
      uStack_b8 = uRam0000000180b8e340;
      uStack_b0 = uRam0000000180b8e348;
      local_a8 = _DAT_180b8e350;
      uStack_a0 = uRam0000000180b8e358;
      uStack_98 = uRam0000000180b8e360;
      uStack_90 = uRam0000000180b8e368;
      local_88 = _DAT_180b8e370;
      uStack_80 = uRam0000000180b8e378;
      uStack_78 = uRam0000000180b8e380;
      uStack_70 = uRam0000000180b8e388;
      local_68 = _DAT_180b8e390;
      uStack_60 = uRam0000000180b8e398;
      uStack_58 = uRam0000000180b8e3a0;
      uStack_50 = uRam0000000180b8e3a8;
      local_48 = _DAT_180b8e3b0;
      uStack_40 = uRam0000000180b8e3b8;
      local_38 = DAT_180b8e3c0;
      FUN_1805f68fc(&DAT_180b8e2e0);
      UVar8 = GetTickCount64();
      if ((((uStack_80._4_1_ != '\0') && (local_c8 == param_2)) && (local_88 <= UVar8)) &&
         (UVar8 - local_88 < 0x65)) {
        uVar13 = 0x40600000;
        bVar4 = 0;
        if (DAT_180b0d338 < 4) {
          bVar4 = DAT_180b0d338;
        }
        bVar5 = 0;
        if (bVar4 < 4) {
          bVar5 = bVar4;
        }
        uVar11 = (uint)bVar5;
        if (bVar5 == 0) {
          uStack_19c78 = 0x40b00000;
        }
        else if (uVar11 == 2) {
          uStack_19c78 = 0x40a80000;
        }
        else if (uVar11 == 3) {
          uStack_19c78 = 0x40b33333;
        }
        else {
          uStack_19c78 = 0x40600000;
        }
        if (bVar5 != 0) {
          auVar1 = vpcmpeqd_avx(ZEXT416(uVar11),SUB6416(ZEXT464(2),0));
          auVar1 = vblendvps_avx(SUB6416(ZEXT464(0x40400000),0),SUB6416(ZEXT464(0x40b66666),0),
                                 auVar1);
          uVar13 = auVar1._0_4_;
        }
        pppuStack_19c80 = (undefined8 ***)CONCAT44(pppuStack_19c80._4_4_,uVar13);
        puStack_19c88 = (undefined1 *)CONCAT44(puStack_19c88._4_4_,local_38._4_4_);
        FUN_1802c3850(auStack_19c68,&uStack_b8,(longlong)&uStack_b0 + 4,local_38 & 0xffffffff);
        if ((char)uStack_19c58 != '\0') {
          local_f8[0] = uStack_19c5c;
          local_f0 = auStack_19c68._0_8_;
          local_e8 = auStack_19c68._8_4_;
          local_e0 = &local_f0;
          local_d8 = &local_c8;
          local_d0 = local_f8;
          auVar14._0_8_ =
               FUN_180636c80(-local_48._4_4_ * (float)uStack_90 + -(float)local_48 * uStack_98._4_4_
                             + -(float)uStack_40 * uStack_90._4_4_,
                             -local_48._4_4_ * uStack_a0._4_4_ + -(float)local_48 * (float)uStack_a0
                             + -(float)uStack_40 * (float)uStack_98);
          auVar14._8_56_ = extraout_var;
          auVar14 = ZEXT1664(auVar14._0_16_);
          sVar6 = thunk_FUN_180624430();
          auVar1 = _auStack_19c68;
          auVar2._4_8_ = stack0xfffffffffffe63a0;
          auVar2._0_4_ = DAT_180b0d4bc;
          auStack_19c68._0_8_ = auVar2._0_8_ << 0x20;
          auStack_19c68._8_4_ = DAT_180b0d4c0;
          uStack_19c5c._0_1_ = DAT_180b0d3e0;
          uStack_19c5c._2_2_ = auVar1._14_2_;
          uStack_19c5c._1_1_ = DAT_180b0d448;
          auVar1 = vpcmpgtd_avx(ZEXT416((uint)(int)sVar6),SUB6416(ZEXT464(0),0));
          auVar1 = vblendvps_avx(auVar14._0_16_,ZEXT816(0),auVar1);
          auVar14 = ZEXT1664(auVar1);
          register0x00001204 = auStack_19c68._4_12_;
          auStack_19c68._0_4_ = auVar1._0_4_;
          uStack_19c58 = DAT_180b0d4b8;
          uVar9 = FUN_1802c3af0(local_ce88,bVar4,auStack_19c68);
          FUN_18063aed0(auStack_19c18,uVar9,0xcd90);
          auVar1 = auStack_19c48;
          bVar4 = 0;
          if (DAT_180b0d338 < 4) {
            bVar4 = DAT_180b0d338;
          }
          uVar10 = (ulonglong)bVar4;
          auStack_19c48._4_4_ = *(undefined4 *)(&DAT_180b0d340 + uVar10 * 0xc);
          auStack_19c48._0_4_ = *(undefined4 *)(&DAT_180b0d33c + uVar10 * 0xc);
          auStack_19c48._12_4_ = auVar1._12_4_;
          auStack_19c48._8_4_ = *(undefined4 *)(&DAT_180b0d344 + uVar10 * 0xc);
          ppuStack_19c28 = &local_e0;
          plStack_19c20 = &local_c8;
          auStack_19c48 = vinsertps_avx(auStack_19c48,ZEXT416(DAT_180b0d4b0),0x30);
          puVar12 = &DAT_180bbb038;
          uStack_19c78 = auVar14._0_4_;
          if (DAT_180b0d370 == '\0') {
            puVar12 = (undefined8 *)0x0;
          }
          stack0xfffffffffffe63a0 = &local_c8;
          auStack_19c68._0_8_ = &local_e0;
          pppuStack_19c80 = &ppuStack_19c28;
          puStack_19c88 = auStack_19c68;
          auVar1 = vunpcklps_avx(ZEXT416(DAT_180b0d4b4),ZEXT416(DAT_180b0d3d8));
          uStack_19c38 = auVar1._0_8_;
          FUN_1802c5ae0(auStack_19c18,param_1,puVar12,auStack_19c48);
        }
      }
    }
  }
}



