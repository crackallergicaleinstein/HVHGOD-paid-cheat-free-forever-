// FUN_180255670 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180255670 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180255670(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 uVar6;
  longlong lVar7;
  undefined1 uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [64];
  undefined1 auVar11 [64];
  undefined1 auVar12 [64];
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_b8;
  float local_b0;
  float local_ac;
  undefined *local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulonglong local_58;
  
  local_58 = DAT_1808d5f00 ^ (ulonglong)auStack_f8;
  FUN_180263e30();
  lVar5 = FUN_180252d60(&DAT_180c7e1f0);
  if (*(char *)(lVar5 + 0x678) != '\0') {
    local_a8 = &DAT_180b8e688;
    iVar4 = FUN_1805f68d0(&DAT_180b8e688);
    lVar5 = DAT_180b8e678;
    if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_180b8e6d4 == 0x7fffffff) {
      DAT_180b8e6d4 = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if (DAT_180b8e670 != DAT_180b8e678) {
      auVar10 = ZEXT464(0x475ead00);
      auVar11 = ZEXT464(0x40000000);
      auVar12 = ZEXT464(0x40600000);
      lVar7 = DAT_180b8e670;
      do {
        if (DAT_180b8e2b0 == '\0') {
          local_b0 = auVar10._0_4_;
          local_ac = local_b0;
          goto LAB_180255881;
        }
        iVar4 = FUN_1805f68d0(&DAT_180b8e260);
        if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(5);
        }
        if (DAT_180b8e2ac == 0x7fffffff) {
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
        auVar10 = ZEXT1664(auVar10._0_16_);
        auVar11 = ZEXT1664(auVar11._0_16_);
        auVar12 = ZEXT1664(auVar12._0_16_);
        uVar9 = FUN_1805f68fc(&DAT_180b8e260);
        FUN_180419d90(uVar9,&local_b0,lVar7,&local_98);
        if ((local_b0 == auVar10._0_4_) || (local_ac == auVar10._0_4_)) goto LAB_180255881;
        switch(*(undefined4 *)(lVar7 + 0xc)) {
        case 0:
          uVar2 = 0xff;
          uVar6 = 0x50;
          uVar8 = 0x50;
          break;
        default:
          uVar2 = 200;
          uVar8 = 200;
          goto LAB_180255836;
        case 2:
        case 3:
          uVar2 = 0xdc;
          uVar8 = 0x3c;
LAB_180255836:
          uVar6 = uVar2;
          break;
        case 4:
        case 5:
        case 6:
          uVar2 = 0xff;
          uVar6 = 0xa0;
          uVar8 = 0x3c;
          break;
        case 7:
        case 8:
        case 9:
        case 10:
        case 0xb:
        case 0xc:
          uVar2 = 0x50;
          uVar6 = 0xa0;
          uVar8 = 0xff;
          break;
        case 0xd:
        case 0xe:
        case 0xf:
        case 0x10:
        case 0x11:
        case 0x12:
          uVar2 = 0xb4;
          uVar6 = 0x50;
          uVar8 = 0xff;
        }
        uVar3 = 0xa0;
        if (*(byte *)(lVar7 + 0x10) != 0) {
          uVar3 = 0xff;
        }
        local_b8 = CONCAT13(uVar3,CONCAT12(uVar8,CONCAT11(uVar6,uVar2)));
        auVar1 = vpcmpeqd_avx(ZEXT116(*(byte *)(lVar7 + 0x10)),SUB6416(ZEXT464(0),0));
        auVar1 = vblendvps_avx(auVar12._0_16_,auVar11._0_16_,auVar1);
        local_d0 = 0;
        local_d8 = local_b8;
        FUN_180432510(param_2,local_b0,local_ac,auVar1._0_8_);
LAB_180255881:
        lVar7 = lVar7 + 0x14;
      } while (lVar7 != lVar5);
    }
    FUN_1805f68fc(&DAT_180b8e688);
  }
}



