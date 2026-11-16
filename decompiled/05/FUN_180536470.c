// FUN_180536470 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180536470 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180536470(void)

{
  undefined1 auVar1 [16];
  bool bVar2;
  char cVar3;
  char *pcVar4;
  uint uVar5;
  undefined8 in_stack_ffffffffffffff38;
  uint7 uVar6;
  undefined8 in_stack_ffffffffffffff40;
  undefined4 uVar7;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [16];
  undefined1 local_68;
  undefined7 uStack_67;
  undefined8 uStack_60;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffff40 >> 0x20);
  if ((DAT_180c62fe8 != 0) || (DAT_180c62fd8 != '\0')) {
    if (DAT_180bbef4d != '\0') {
      DAT_180bbef4d = '\0';
      FUN_180488320("##search_setting");
    }
    if (((DAT_180c62fe8 == 0) || (*(undefined1 **)(DAT_180c62fe8 + 8) < &DAT_180b0d7e0)) ||
       ((undefined1 *)((longlong)&DAT_180b0d994 + 3) < *(undefined1 **)(DAT_180c62fe8 + 8))) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (((DAT_180c62fe8 == 0) || (*(undefined1 **)(DAT_180c62fe8 + 8) < &DAT_180b0d2d0)) ||
       ((undefined1 *)0x180b0d4c7 < *(undefined1 **)(DAT_180c62fe8 + 8))) {
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
    if (bVar2) {
      pcVar4 = "Auto-buy";
    }
    else {
      pcVar4 = "Feature Configuration";
      auVar1 = vpcmpeqd_avx(ZEXT416(uVar5),SUB6416(ZEXT464(0),0));
      vblendvps_avx(SUB6416(ZEXT464(0x439f0000),0),SUB6416(ZEXT464(0x438c0000),0),auVar1);
      if ((char)uVar5 != '\0') {
        pcVar4 = "Hat HUD";
      }
    }
    cVar3 = FUN_180488630("##search_setting",pcVar4);
    if (cVar3 != '\0') {
      if (bVar2) {
        FUN_180532480();
      }
      else if ((char)uVar5 == '\0') {
        if (DAT_180c62fe8 != 0) {
          FUN_1805117c0();
        }
      }
      else {
        FUN_1805316c0();
      }
      if (DAT_180c62fd8 != '\0') {
        uVar6 = (uint7)((ulonglong)in_stack_ffffffffffffff38 >> 8);
        switch((int)DAT_180c62f80) {
        case 0:
          FUN_1804898a0(DAT_180c62f78,DAT_180c62f88,&DAT_180829dd4,1,(ulonglong)uVar6 << 8,0);
          break;
        case 1:
          FUN_180489c50(DAT_180c62f78,DAT_180c62f90,DAT_180c62f88,&DAT_18082a268,CONCAT71(uVar6,1));
          break;
        case 2:
          FUN_180489fc0(DAT_180c62f78,DAT_180c62f90,1,&DAT_18082a268);
          break;
        case 3:
          FUN_18048a250(DAT_180c62f78,DAT_180c62f98,DAT_180c62fa8,DAT_180c62fac,DAT_180c62fb8,
                        CONCAT44(uVar7,DAT_180c62fb0),1,&DAT_18082a254);
          break;
        case 4:
          auStack_78 = ZEXT816(0);
          local_88 = 0;
          uStack_80 = 0;
          local_48 = 0;
          uStack_40 = 0;
          uStack_38 = 0;
          uStack_30 = 0;
          auVar1 = vunpcklps_avx(ZEXT816(0),ZEXT816(0));
          local_18 = auVar1._0_8_;
          local_68 = 1;
          uStack_60 = 0;
          local_28 = CONCAT71(uStack_67,1);
          local_98 = _DAT_180c62fc0;
          uStack_90 = uRam0000000180c62fc8;
          uStack_20 = 0;
          FUN_18048d220(DAT_180c62f78,DAT_180c62fa0,&local_98,1,&DAT_180830b54,&local_48);
          break;
        case 5:
          local_98 = _DAT_180c62fc0;
          uStack_90 = uRam0000000180c62fc8;
          FUN_18048adf0(DAT_180c62f78,&local_98,DAT_180c62f88);
        }
        FUN_180520a30(0);
      }
      FUN_1804aeac0();
    }
  }
  return;
}



