// FUN_18053f180 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18053f180 */

void FUN_18053f180(longlong *param_1)

{
  char *pcVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  char cVar4;
  char cVar5;
  undefined4 uVar6;
  undefined *puVar7;
  char *pcVar8;
  undefined4 uVar9;
  undefined **local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [16];
  undefined1 local_88;
  uint7 uStack_87;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  local_b0 = 3;
  auStack_98 = ZEXT816(0);
  local_a8 = 0;
  uStack_a0 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_48 = (ulonglong)uStack_87 << 8;
  local_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  auVar3 = vunpcklps_avx(ZEXT816(0),ZEXT816(0));
  local_38 = auVar3._0_8_;
  local_b8 = &PTR_DAT_18086c548;
  puVar7 = &DAT_18082a244;
  FUN_18048d220("Shape",*param_1 + 0xd0,&local_b8,1,&DAT_18082a244,&local_68);
  lVar2 = *param_1;
  uVar9 = 0;
  cVar4 = FUN_1804898a0("Replace Game Crosshair",lVar2 + 0x68,&DAT_180829a4c,1,
                        (ulonglong)puVar7 & 0xffffffffffffff00,0);
  if (cVar4 != '\0') {
    *(undefined1 *)(lVar2 + 0x78) = *(undefined1 *)(lVar2 + 0x68);
  }
  uVar6 = 0x3dcccccd;
  FUN_18048a250(&DAT_18086a030,*param_1 + 0x148,0x3f000000,0x41200000,"%.1f px",
                CONCAT44(uVar9,0x3dcccccd),1,&DAT_18082a254);
  FUN_18048a250(&DAT_18086a02c,*param_1 + 0xd4,0,0x41a00000,"%.1f px",uVar6,
                *(int *)(*param_1 + 0xd0) != 0,&DAT_18082a248);
  pcVar8 = "%.1f px";
  FUN_18048a250("Line Width",*param_1 + 0xd8,0x3f000000,0x40c00000,"%.1f px",uVar6,
                *(int *)(*param_1 + 0xd0) != 0,&DAT_18082a288);
  pcVar1 = (char *)(*param_1 + 0xe0);
  cVar4 = *pcVar1;
  cVar5 = FUN_1804898a0("Center Dot",pcVar1,&DAT_18085d5ac,*(int *)(*param_1 + 0xd0) != 0,
                        (ulonglong)pcVar8 & 0xffffffffffffff00,0);
  if (cVar5 != '\0') {
    cVar5 = *(char *)(*param_1 + 0xe0);
    if (cVar4 != cVar5) {
      *(char *)(*param_1 + 0xf0) = cVar5;
    }
  }
  return;
}



