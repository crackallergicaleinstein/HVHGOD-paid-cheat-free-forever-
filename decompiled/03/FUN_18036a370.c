// FUN_18036a370 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18036a370 */

undefined8 FUN_18036a370(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  float fVar3;
  char cVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float local_a8;
  float local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined4 local_10;
  
  if (*(char *)*param_1 != '\0') {
    puVar2 = (undefined8 *)param_1[3];
    local_88 = *puVar2;
    uStack_80 = puVar2[1];
    uStack_78 = puVar2[2];
    uStack_70 = puVar2[3];
    local_68 = puVar2[4];
    uStack_60 = puVar2[5];
    local_58 = puVar2[6];
    local_50 = *(undefined4 *)(puVar2 + 7);
    local_48 = *param_2;
    uStack_40 = param_2[1];
    uStack_38 = param_2[2];
    uStack_30 = param_2[3];
    local_10 = *(undefined4 *)(param_2 + 7);
    local_28 = param_2[4];
    uStack_20 = param_2[5];
    local_18 = param_2[6];
    uVar1 = *(undefined4 *)param_1[1];
    cVar4 = FUN_180365b80(uVar1,&local_48,*(undefined4 *)param_1[2],&local_88,0);
    if (cVar4 != '\0') {
      puVar2 = (undefined8 *)param_1[4];
      local_48 = *puVar2;
      uStack_40 = puVar2[1];
      uStack_38 = puVar2[2];
      uStack_30 = puVar2[3];
      local_28 = puVar2[4];
      uStack_20 = puVar2[5];
      local_18 = puVar2[6];
      local_10 = *(undefined4 *)(puVar2 + 7);
      local_88 = *(undefined8 *)((longlong)param_2 + 0x3c);
      uStack_80 = *(undefined8 *)((longlong)param_2 + 0x44);
      uStack_78 = *(undefined8 *)((longlong)param_2 + 0x4c);
      uStack_70 = *(undefined8 *)((longlong)param_2 + 0x54);
      local_58 = *(undefined8 *)((longlong)param_2 + 0x6c);
      local_68 = *(undefined8 *)((longlong)param_2 + 0x5c);
      uStack_60 = *(undefined8 *)((longlong)param_2 + 100);
      local_50 = *(undefined4 *)((longlong)param_2 + 0x74);
      cVar4 = FUN_180365de0(uVar1,&local_88,&local_48);
      if (cVar4 != '\0') {
        return 1;
      }
    }
    return 0;
  }
  if (*(int *)param_1[1] == 2) {
LAB_18036a529:
    uVar5 = 1;
  }
  else {
    auVar6._8_8_ = 0;
    auVar6._0_8_ = *(ulonglong *)((longlong)param_2 + 4);
    auVar6 = vshufps_avx(auVar6,auVar6,0x55);
    auVar8._8_8_ = 0;
    auVar8._0_8_ = *(ulonglong *)param_1[5];
    local_a8 = (float)*(ulonglong *)((longlong)param_2 + 4);
    local_98 = (float)*(ulonglong *)param_1[5];
    fVar3 = local_98;
    auVar7 = vshufps_avx(auVar8,auVar8,0x55);
    if (auVar7._0_4_ * auVar7._0_4_ + local_98 * local_98 <=
        auVar6._0_4_ * auVar6._0_4_ + local_a8 * local_a8) {
      auVar7._8_8_ = 0;
      auVar7._0_8_ = param_2[8];
      auVar6 = vshufps_avx(auVar7,auVar7,0x55);
      local_98 = (float)param_2[8];
      auVar7 = vshufps_avx(auVar8,auVar8,0x55);
      if (auVar7._0_4_ * auVar7._0_4_ + fVar3 * fVar3 <=
          auVar6._0_4_ * auVar6._0_4_ + local_98 * local_98) goto LAB_18036a529;
    }
    uVar5 = 0;
  }
  return uVar5;
}



