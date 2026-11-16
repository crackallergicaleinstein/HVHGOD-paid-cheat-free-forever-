// FUN_18051ab60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18051ab60 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18051ab60(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined1 auVar8 [64];
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined *local_78;
  int local_68 [6];
  int local_50;
  int iStack_4c;
  int local_48 [2];
  int local_40 [2];
  int local_38 [2];
  int local_30 [2];
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_a8;
  lVar2 = *param_1;
  cVar3 = FUN_18048b0e0("Reaction Time",&DAT_18085d5a8,1);
  auVar8 = ZEXT464(0x43af0000);
  if (cVar3 != '\0') {
    FUN_180516c40("##legit_reaction_timing",auVar8._0_8_);
  }
  cVar3 = FUN_180488630("##legit_reaction_timing","Reaction Time",auVar8._0_8_);
  if (cVar3 != '\0') {
    FUN_180488c60();
    FUN_180234370(lVar2,&local_50);
    local_78 = &DAT_18085d5a8;
    local_88 = 1000;
    cVar3 = FUN_18048bfc0("Delay",&local_50,&iStack_4c);
    if (cVar3 != '\0') {
      local_40[0] = local_50;
      local_48[0] = iStack_4c;
      piVar5 = local_48;
      if (local_50 <= iStack_4c) {
        piVar5 = local_40;
      }
      local_68[2] = 1000;
      local_68[1] = 0;
      local_68[0] = 1000;
      piVar6 = local_68 + 1;
      if (-1 < *piVar5) {
        piVar6 = piVar5;
      }
      piVar4 = local_68 + 2;
      if (*piVar5 < 0x3e9) {
        piVar4 = piVar6;
      }
      iVar1 = *piVar4;
      piVar5 = local_48;
      if (iStack_4c <= local_50) {
        piVar5 = local_40;
      }
      *(int *)(lVar2 + 0x27c) = iVar1;
      piVar6 = piVar5;
      if (*piVar5 < iVar1) {
        piVar6 = (int *)(lVar2 + 0x27c);
      }
      piVar4 = local_68;
      if (*piVar5 < 0x3e9) {
        piVar4 = piVar6;
      }
      *(int *)(lVar2 + 0x294) = *piVar4;
      *(undefined4 *)(lVar2 + 0x288) = 0;
      FUN_18050cd00();
    }
    FUN_180488f10();
    FUN_1804aeac0();
  }
  lVar2 = *param_1;
  cVar3 = FUN_18048b0e0("Shot Interval",&DAT_18082a278,1);
  uVar7 = auVar8._0_8_;
  if (cVar3 != '\0') {
    FUN_180516c40("##legit_interval_timing",uVar7);
    uVar7 = auVar8._0_8_;
  }
  cVar3 = FUN_180488630("##legit_interval_timing","Shot Interval",uVar7);
  if (cVar3 != '\0') {
    FUN_180488c60();
    FUN_180234430(lVar2,&local_50);
    local_78 = &DAT_18082a278;
    local_88 = 0x5dc;
    cVar3 = FUN_18048bfc0("Interval",&local_50,&iStack_4c);
    if (cVar3 != '\0') {
      local_30[0] = local_50;
      local_38[0] = iStack_4c;
      piVar5 = local_38;
      if (local_50 <= iStack_4c) {
        piVar5 = local_30;
      }
      local_68[4] = 0x5dc;
      local_68[3] = 0;
      local_68[0] = 0x5dc;
      piVar6 = local_68 + 3;
      if (-1 < *piVar5) {
        piVar6 = piVar5;
      }
      piVar4 = local_68 + 4;
      if (*piVar5 < 0x5dd) {
        piVar4 = piVar6;
      }
      iVar1 = *piVar4;
      piVar5 = local_38;
      if (iStack_4c <= local_50) {
        piVar5 = local_30;
      }
      *(int *)(lVar2 + 0x28c) = iVar1;
      piVar6 = piVar5;
      if (*piVar5 < iVar1) {
        piVar6 = (int *)(lVar2 + 0x28c);
      }
      piVar4 = local_68;
      if (*piVar5 < 0x5dd) {
        piVar4 = piVar6;
      }
      *(int *)(lVar2 + 0x298) = *piVar4;
      *(undefined4 *)(lVar2 + 0x290) = 0;
      FUN_18050cd00();
    }
    FUN_180488f10();
    FUN_1804aeac0();
  }
}



