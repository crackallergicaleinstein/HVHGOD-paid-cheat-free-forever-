// FUN_18055a970 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18055a970 */

void FUN_18055a970(void)

{
  undefined1 auVar1 [16];
  char cVar2;
  undefined1 uVar3;
  longlong in_R9;
  undefined *puVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined **local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [16];
  undefined1 local_68;
  uint7 uStack_67;
  undefined8 uStack_60;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  longlong local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  cVar2 = FUN_18048b0e0("Scope Colors",&DAT_18082a268,1);
  if (cVar2 != '\0') {
    FUN_1805303d0("##scope_colors",0x43af0000);
  }
  cVar2 = FUN_180488630("##scope_colors","Scope Colors");
  if (cVar2 != '\0') {
    FUN_180488c60();
    local_90 = 2;
    auStack_78 = ZEXT816(0);
    local_88 = 0;
    uStack_80 = 0;
    local_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    auVar1 = vunpcklps_avx(ZEXT816(0),ZEXT816(0));
    local_98 = &PTR_s_Solid_18086b750;
    local_68 = 0;
    uStack_60 = 0;
    local_28 = (ulonglong)uStack_67 << 8;
    local_18 = auVar1._0_8_;
    uStack_20 = 0;
    puVar4 = &DAT_18082a260;
    FUN_18048d220("Color Style",in_R9 + 0xf0,&local_98,1,&DAT_18082a260,&local_48);
    uVar5 = CONCAT71((int7)((ulonglong)puVar4 >> 8),1);
    FUN_1805367d0("Line Color",in_R9 + 0xec,&DAT_18082a268,1,uVar5);
    uVar6 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
    FUN_1805367d0("Gradient Color",in_R9 + 0xf4,&DAT_18082a260,*(int *)(in_R9 + 0xf0) == 1,uVar6);
    FUN_180488f10();
    FUN_180488c60();
    uVar8 = 0;
    cVar2 = FUN_1804898a0("Animate Gradient",in_R9 + 0xf8,&DAT_180829a4c,*(int *)(in_R9 + 0xf0) == 1
                          ,uVar6 & 0xffffffffffffff00,0);
    if (cVar2 != '\0') {
      *(undefined1 *)(in_R9 + 0x108) = *(undefined1 *)(in_R9 + 0xf8);
    }
    if ((*(int *)(in_R9 + 0xf0) == 1) && (*(char *)(in_R9 + 0xf8) != '\0')) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
    pcVar7 = "%.2fx";
    FUN_18048a250("Gradient Speed",in_R9 + 0x160,0x3d4ccccd,0x40000000,"%.2fx",
                  CONCAT44(uVar8,0x3d4ccccd),uVar3,&DAT_18082a274);
    cVar2 = FUN_1804898a0("Fade Along Lines",in_R9 + 0x168,&DAT_18082a260,1,
                          (ulonglong)pcVar7 & 0xffffffffffffff00,0);
    if (cVar2 != '\0') {
      *(undefined1 *)(in_R9 + 0x178) = *(undefined1 *)(in_R9 + 0x168);
    }
    FUN_180488f10();
    FUN_1804aeac0();
  }
  return;
}



