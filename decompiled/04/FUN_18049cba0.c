// FUN_18049cba0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18049cba0 */

void FUN_18049cba0(longlong *param_1)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [64];
  undefined4 uVar4;
  undefined1 auVar5 [64];
  undefined *puVar6;
  char *pcVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined **local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [16];
  undefined1 local_a8;
  undefined7 uStack_a7;
  undefined8 uStack_a0;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  lVar1 = *param_1;
  FUN_180488c60();
  FUN_180488a80("Shape & Color",&DAT_18082a298);
  local_a8 = 1;
  local_d8 = &PTR_s_Triangle_180859230;
  auStack_b8 = ZEXT816(0);
  local_c8 = 0;
  uStack_c0 = 0;
  local_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  auVar2 = vunpcklps_avx(ZEXT816(0),ZEXT816(0));
  uStack_a0 = 0;
  local_68 = CONCAT71(uStack_a7,1);
  local_58 = auVar2._0_8_;
  uStack_60 = 0;
  local_d0 = 3;
  puVar6 = &DAT_18082a240;
  FUN_18048d220("Style",lVar1 + 0x3520,&local_d8,1,&DAT_18082a240,&local_88);
  FUN_180489fc0("Arrow Color",lVar1 + 0x3510,1,&DAT_18082a268,puVar6,1);
  auVar5 = ZEXT464(0x3f800000);
  FUN_18048a250("Width",lVar1 + 0x3524,0x40c00000,0x42400000,"%.0f px",0x3f800000,1,&DAT_18082a298);
  FUN_18048a250("Length",lVar1 + 0x3528,0x40c00000,0x42400000,"%.0f px",auVar5._0_4_,1,
                &DAT_18082a254);
  pcVar7 = "%.1f px";
  FUN_18048a250("Stroke Width",lVar1 + 0x3534,0x3f000000,0x40800000,"%.1f px",0x3dcccccd,1,
                &DAT_18082a288);
  uVar9 = 0;
  uVar8 = (ulonglong)pcVar7 & 0xffffffffffffff00;
  FUN_1804898a0("Outline",lVar1 + 0x3538,&DAT_18082a248,1,uVar8,0);
  uVar10 = (undefined4)((ulonglong)uVar9 >> 0x20);
  if (*(char *)(lVar1 + 0x3538) != '\0') {
    uVar9 = CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
    FUN_180489fc0("Outline Color",lVar1 + 0x3548,1,&DAT_18082a268,uVar8,uVar9);
    uVar10 = (undefined4)((ulonglong)uVar9 >> 0x20);
  }
  FUN_180488f10();
  FUN_180488c60();
  FUN_180488a80("Position",&DAT_18082a244);
  uVar4 = 0x40a00000;
  FUN_18048a250("Horizontal Radius",lVar1 + 0x352c,0x41f00000,0x44480000,"%.0f px",
                CONCAT44(uVar10,0x40a00000),1,&DAT_18082a298);
  pcVar7 = "%.0f px";
  FUN_18048a250("Vertical Radius",lVar1 + 0x3530,0x41f00000,0x44480000,"%.0f px",uVar4,1,
                &DAT_18082a298);
  FUN_180488f10();
  FUN_180488c60();
  FUN_180488a80("Glow & Pulse",&DAT_180858a0c);
  uVar10 = 0;
  FUN_1804898a0(&DAT_1806bd384,lVar1 + 0x3539,&DAT_180858a0c,1,
                (ulonglong)pcVar7 & 0xffffffffffffff00,0);
  if (*(char *)(lVar1 + 0x3539) != '\0') {
    auVar3 = ZEXT464(0x3d4ccccd);
    puVar6 = &DAT_1807c6e40;
    FUN_18048a250("Glow Strength",lVar1 + 0x353c,0,auVar5._0_8_,&DAT_1807c6e40,
                  CONCAT44(uVar10,0x3d4ccccd),1,&DAT_180830b60);
    uVar8 = (ulonglong)puVar6 & 0xffffffffffffff00;
    FUN_1804898a0("Separate Glow Color",lVar1 + 0x353b,&DAT_18082a268,1,uVar8,0);
    if (*(char *)(lVar1 + 0x353b) != '\0') {
      FUN_180489fc0("Glow Color",lVar1 + 0x3558,1,&DAT_18082a268,uVar8,1);
    }
    uVar10 = 0;
    FUN_1804898a0("Pulse Glow",lVar1 + 0x353a,&DAT_180858a00,1,uVar8 & 0xffffffffffffff00,0);
    if (*(char *)(lVar1 + 0x353a) != '\0') {
      FUN_18048a250("Pulse Speed",lVar1 + 0x3540,auVar3._0_8_,0x40400000,"%.2f Hz",
                    CONCAT44(uVar10,auVar3._0_4_),1,&DAT_18082a278);
      FUN_18048a250("Minimum Glow",lVar1 + 0x3544,0,auVar5._0_8_,&DAT_1807c6e40,auVar3._0_4_,1,
                    &DAT_18082a260);
    }
  }
  FUN_180488f10();
  return;
}



