// FUN_18032fb00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18032fb00 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18032fb00(ulonglong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [64];
  undefined1 auVar8 [64];
  undefined8 uVar9;
  undefined1 auVar10 [64];
  undefined1 auVar11 [64];
  undefined1 auVar12 [64];
  undefined8 local_res8;
  float local_a8;
  float local_a4;
  float local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  if (((DAT_180cc8600 != '\0') && (DAT_180cc8750 != '\0')) && (DAT_180b8fd20 != '\0')) {
    auVar7 = ZEXT464(0x475ead00);
    local_res8 = param_1;
    if (DAT_180b8e2b0 == '\0') {
      auVar11 = ZEXT1664(auVar7._0_16_);
      auVar12 = ZEXT1664(auVar7._0_16_);
    }
    else {
      iVar2 = FUN_1805f68d0(&DAT_180b8e260);
      if (iVar2 != 0) goto LAB_18032ff35;
      if (DAT_180b8e2ac == 0x7fffffff) goto LAB_18032ff20;
      local_98 = _DAT_180b8e220;
      uStack_90 = uRam0000000180b8e228;
      uStack_88 = uRam0000000180b8e230;
      uStack_80 = uRam0000000180b8e238;
      local_78 = _DAT_180b8e240;
      uStack_70 = uRam0000000180b8e248;
      uStack_68 = uRam0000000180b8e250;
      uStack_60 = uRam0000000180b8e258;
      auVar7 = ZEXT1664(auVar7._0_16_);
      uVar3 = FUN_1805f68fc(&DAT_180b8e260);
      FUN_180419d90(uVar3,&local_res8,&DAT_180b8fd28,&local_98);
      auVar12 = ZEXT464((uint)local_res8._4_4_);
      auVar11 = ZEXT464((uint)local_res8);
    }
    if (DAT_180b8e2b0 == '\0') {
      auVar8 = ZEXT1664(auVar7._0_16_);
      auVar10 = ZEXT1664(auVar7._0_16_);
    }
    else {
      iVar2 = FUN_1805f68d0(&DAT_180b8e260);
      if (iVar2 != 0) goto LAB_18032ff35;
      if (DAT_180b8e2ac == 0x7fffffff) goto LAB_18032ff20;
      local_98 = _DAT_180b8e220;
      uStack_90 = uRam0000000180b8e228;
      uStack_88 = uRam0000000180b8e230;
      uStack_80 = uRam0000000180b8e238;
      local_78 = _DAT_180b8e240;
      uStack_70 = uRam0000000180b8e248;
      uStack_68 = uRam0000000180b8e250;
      uStack_60 = uRam0000000180b8e258;
      auVar7 = ZEXT1664(auVar7._0_16_);
      auVar11 = ZEXT1664(auVar11._0_16_);
      auVar12 = ZEXT1664(auVar12._0_16_);
      uVar3 = FUN_1805f68fc(&DAT_180b8e260);
      FUN_180419d90(uVar3,&local_res8,&DAT_180b8fd34,&local_98);
      auVar10 = ZEXT464((uint)local_res8._4_4_);
      auVar8 = ZEXT464((uint)local_res8);
    }
    fVar5 = auVar7._0_4_;
    if (auVar11._0_4_ == fVar5) {
      return;
    }
    if (auVar12._0_4_ == fVar5) {
      return;
    }
    if (auVar8._0_4_ == fVar5) {
      return;
    }
    if (auVar10._0_4_ == fVar5) {
      return;
    }
    if (DAT_180b8fd24 == 2) {
      local_res8._0_4_ = 0xff96ff78;
    }
    else {
      local_res8._0_4_ = 0xff78ffbe;
      if (DAT_180b8fd24 != 1) {
        local_res8._0_4_ = 0xffffffff;
      }
    }
    uVar1 = (uint)local_res8;
    local_res8 = CONCAT44(local_res8._4_4_,0xc8000000);
    FUN_180433450(param_2,auVar11._0_8_,auVar12._0_8_,auVar8._0_8_,auVar10._0_4_,0xc8000000,
                  0x40800000);
    FUN_180433450(param_2,auVar11._0_8_,auVar12._0_8_,auVar8._0_8_,auVar10._0_4_,uVar1,0x3fc00000);
    local_a8 = (DAT_180b8fd34 + DAT_180b8fd28) * 0.5;
    local_a4 = (DAT_180b8fd38 + DAT_180b8fd2c) * 0.5;
    local_a0 = (DAT_180b8fd3c + DAT_180b8fd30) * 0.5;
    if (DAT_180b8e2b0 == '\0') {
      auVar11 = ZEXT1664(auVar7._0_16_);
      auVar12 = ZEXT1664(auVar7._0_16_);
    }
    else {
      iVar2 = FUN_1805f68d0(&DAT_180b8e260);
      if (iVar2 != 0) goto LAB_18032ff35;
      if (DAT_180b8e2ac == 0x7fffffff) goto LAB_18032ff20;
      local_98 = _DAT_180b8e220;
      uStack_90 = uRam0000000180b8e228;
      uStack_88 = uRam0000000180b8e230;
      uStack_80 = uRam0000000180b8e238;
      local_78 = _DAT_180b8e240;
      uStack_70 = uRam0000000180b8e248;
      uStack_68 = uRam0000000180b8e250;
      uStack_60 = uRam0000000180b8e258;
      auVar7 = ZEXT1664(auVar7._0_16_);
      uVar3 = FUN_1805f68fc(&DAT_180b8e260);
      FUN_180419d90(uVar3,&local_res8,&local_a8,&local_98);
      auVar12 = ZEXT464((uint)local_res8._4_4_);
      auVar11 = ZEXT464((uint)local_res8);
    }
    uVar9 = auVar12._0_8_;
    uVar3 = auVar11._0_8_;
    if (DAT_180b8e2b0 == '\0') {
      uVar4 = auVar7._0_8_;
      fVar5 = auVar7._0_4_;
    }
    else {
      iVar2 = FUN_1805f68d0(&DAT_180b8e260);
      if (iVar2 != 0) {
LAB_18032ff35:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_180b8e2ac == 0x7fffffff) {
LAB_18032ff20:
        DAT_180b8e2ac = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      local_98 = _DAT_180b8e220;
      uStack_90 = uRam0000000180b8e228;
      uStack_88 = uRam0000000180b8e230;
      uStack_80 = uRam0000000180b8e238;
      local_78 = _DAT_180b8e240;
      uStack_70 = uRam0000000180b8e248;
      uStack_68 = uRam0000000180b8e250;
      uStack_60 = uRam0000000180b8e258;
      auVar7 = ZEXT1664(auVar7._0_16_);
      auVar11 = ZEXT1664(auVar11._0_16_);
      auVar12 = ZEXT1664(auVar12._0_16_);
      uVar3 = FUN_1805f68fc(&DAT_180b8e260);
      FUN_180419d90(uVar3,&local_res8,&DAT_180b8fd40,&local_98);
      uVar9 = auVar12._0_8_;
      uVar3 = auVar11._0_8_;
      uVar4 = local_res8 & 0xffffffff;
      fVar5 = local_res8._4_4_;
    }
    fVar6 = auVar7._0_4_;
    if ((((float)uVar3 != fVar6) && ((float)uVar9 != fVar6)) &&
       (((float)uVar4 != fVar6 && (fVar5 != fVar6)))) {
      local_res8._0_4_ = CONCAT13(0x96,(int3)uVar1);
      FUN_180433450(param_2,uVar3,uVar9,uVar4,fVar5,(uint)local_res8,0x3f800000);
    }
  }
  return;
}



