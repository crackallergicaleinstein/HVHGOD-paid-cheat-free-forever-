// FUN_1805174d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805174d0 */

void FUN_1805174d0(undefined8 *param_1)

{
  longlong *plVar1;
  undefined1 uVar2;
  char *pcVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  char cVar6;
  undefined8 uVar7;
  undefined1 auVar8 [64];
  undefined8 *puVar9;
  undefined4 uVar10;
  char *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [16];
  undefined1 local_78;
  undefined7 uStack_77;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  plVar1 = param_1 + 2;
  local_a8 = (char *)param_1[1];
  puVar9 = &local_58;
  auVar5._12_4_ = 0;
  auVar5._0_12_ = ZEXT812(0);
  auStack_88 = ZEXT816(0);
  local_98 = 0;
  uStack_90 = 0;
  local_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  auVar5 = vunpcklps_avx(auVar5 << 0x20,auVar5 << 0x20);
  local_78 = 1;
  uStack_70 = 0;
  local_38 = CONCAT71(uStack_77,1);
  local_28 = auVar5._0_8_;
  uStack_30 = 0;
  local_a0 = 2;
  auVar8 = ZEXT1264(ZEXT812(0)) << 0x20;
  cVar6 = FUN_18048d220(&DAT_180858658,*param_1,&local_a8,1,&DAT_180829a4c,puVar9);
  uVar10 = (undefined4)((ulonglong)puVar9 >> 0x20);
  if (cVar6 != '\0') {
    *(undefined1 *)(*plVar1 + 0x70) = *(undefined1 *)*param_1;
    FUN_18050cd00();
  }
  if (*(int *)*param_1 == 0) {
    pcVar3 = (char *)param_1[3];
    lVar4 = *plVar1;
    auStack_88 = ZEXT816(0);
    local_98 = 0;
    uStack_90 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_a8 = "Target Selection";
    local_a0 = 0x10;
    uVar7 = FUN_180515fb0(&local_a8);
    local_38 = CONCAT71(uStack_77,local_78);
    local_58 = local_98;
    uStack_50 = uStack_90;
    uStack_48 = auStack_88._0_8_;
    uStack_40 = auStack_88._8_8_;
    puVar9 = &local_58;
    auVar5 = vunpcklps_avx(auVar8._0_16_,auVar8._0_16_);
    local_28 = auVar5._0_8_;
    uStack_30 = uStack_70;
    local_a0 = 2;
    local_a8 = pcVar3;
    cVar6 = FUN_18048d220("Target Selection",lVar4 + 0x74,&local_a8,1,uVar7,puVar9);
    uVar10 = (undefined4)((ulonglong)puVar9 >> 0x20);
    if (cVar6 != '\0') {
      FUN_18050cd00();
    }
  }
  FUN_180516ec0("Avoid Backstab",*plVar1 + 0x370);
  FUN_180516ec0("Auto Adjust",*plVar1 + 0x158);
  lVar4 = *plVar1;
  local_a0 = 0x10;
  local_a8 = "Alignment Offset";
  uVar2 = *(undefined1 *)(lVar4 + 0x158);
  uVar7 = FUN_180515fb0(&local_a8);
  cVar6 = FUN_18048a250("Alignment Offset",lVar4 + 0x1c0,0xc3340000,0x43340000,"%.0f deg",
                        CONCAT44(uVar10,0x3f800000),uVar2,uVar7);
  if (cVar6 != '\0') {
    FUN_18050cd00();
  }
  return;
}



