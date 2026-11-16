// FUN_180537b90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180537b90 */

void FUN_180537b90(longlong *param_1)

{
  uint uVar1;
  uint *puVar2;
  undefined1 auVar3 [16];
  char cVar4;
  longlong *plVar5;
  longlong *plVar6;
  uint *puVar7;
  longlong *local_98;
  longlong *local_90;
  longlong local_88;
  longlong lStack_80;
  undefined1 auStack_78 [16];
  undefined1 local_68;
  uint7 uStack_67;
  undefined8 uStack_60;
  longlong local_48;
  longlong lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  longlong local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  FUN_18048bb10("Search Entries",&DAT_180c7e010,0x80,"Find a feature...");
  local_88 = *(longlong *)param_1[1];
  auStack_78 = ZEXT816(0);
  local_68 = 0;
  uStack_60 = 0;
  local_28 = (ulonglong)uStack_67 << 8;
  lStack_80 = ((longlong *)param_1[1])[1] - local_88 >> 3;
  local_98 = *(longlong **)*param_1;
  local_90 = (longlong *)(((longlong *)*param_1)[1] - (longlong)local_98 >> 3);
  uStack_38 = 0;
  uStack_30 = 0;
  auVar3 = vunpcklps_avx(ZEXT816(0),ZEXT816(0));
  uStack_20 = 0;
  local_18 = auVar3._0_8_;
  local_48 = local_88;
  lStack_40 = lStack_80;
  FUN_18048d220("Feature Group",&DAT_180c7e120,&local_98,1,
                *(undefined8 *)(local_88 + (longlong)DAT_180c7e120 * 8),&local_48);
  cVar4 = FUN_18048b0e0("Show All Entries",&DAT_180829db8,1);
  if (cVar4 != '\0') {
    puVar2 = (uint *)((undefined8 *)param_1[2])[1];
    for (puVar7 = *(uint **)param_1[2]; puVar7 != puVar2; puVar7 = puVar7 + 0x12) {
      uVar1 = *puVar7;
      local_90 = *(longlong **)(param_1[3] + 8);
      plVar6 = (longlong *)local_90[1];
      cVar4 = *(char *)((longlong)plVar6 + 0x19);
      local_98 = local_90;
      plVar5 = plVar6;
      while (cVar4 == '\0') {
        if (*(uint *)((longlong)plVar5 + 0x1c) < uVar1) {
          plVar5 = plVar5 + 2;
        }
        else {
          if ((*(char *)((longlong)local_90 + 0x19) != '\0') &&
             (uVar1 < *(uint *)((longlong)plVar5 + 0x1c))) {
            local_90 = plVar5;
          }
          local_98 = plVar5;
        }
        plVar5 = (longlong *)*plVar5;
        cVar4 = *(char *)((longlong)plVar5 + 0x19);
      }
      if (*(char *)((longlong)local_90 + 0x19) == '\0') {
        plVar6 = (longlong *)*local_90;
      }
      cVar4 = *(char *)((longlong)plVar6 + 0x19);
      while (cVar4 == '\0') {
        if (uVar1 < *(uint *)((longlong)plVar6 + 0x1c)) {
          plVar5 = (longlong *)*plVar6;
          local_90 = plVar6;
        }
        else {
          plVar5 = (longlong *)plVar6[2];
        }
        plVar6 = plVar5;
        cVar4 = *(char *)((longlong)plVar5 + 0x19);
      }
      FUN_18056d990(param_1[3] + 8,&local_98);
    }
  }
  return;
}



