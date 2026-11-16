// FUN_180541c90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180541c90 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180541c90(void)

{
  longlong lVar1;
  char *pcVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  ulonglong uVar6;
  char *pcVar7;
  undefined1 auStack_a8 [32];
  char *local_88;
  undefined8 uStack_80;
  int *local_78;
  undefined1 *local_70;
  int *local_68;
  int *local_60;
  undefined1 *local_58;
  undefined8 *local_50;
  byte *local_48;
  char *local_40;
  byte local_38;
  char local_37 [3];
  int local_34;
  int local_30;
  int local_2c;
  undefined1 local_28 [16];
  undefined8 local_18;
  ulonglong local_10;
  
  pcVar2 = DAT_180b901b0;
  local_10 = DAT_1808d5f00 ^ (ulonglong)auStack_a8;
  if (DAT_180b901a8 == DAT_180b901b0) {
    FUN_1805302b0("Skybox catalog is unavailable. The current selection is preserved.");
  }
  local_34 = (int)((longlong)DAT_180b901b0 - (longlong)DAT_180b901a8 >> 6);
  local_28 = (undefined1  [16])0x0;
  local_18 = 0;
  pcVar7 = DAT_180b901a8;
  do {
    local_88 = pcVar7;
    if (0xf < *(ulonglong *)(pcVar7 + 0x18)) {
      local_88 = *(char **)pcVar7;
    }
    FUN_1801543a0(local_28,&local_88);
    pcVar7 = pcVar7 + 0x40;
  } while (pcVar7 != pcVar2);
  local_88 = "Custom";
  FUN_1801543a0(local_28,&local_88);
  local_2c = DAT_180cc8e48;
  if ((DAT_180cc8e48 == -1) || (local_34 <= DAT_180cc8e48)) {
    local_30 = local_34;
  }
  else {
    local_30 = DAT_180cc8e48;
    if (DAT_180cc8e48 < 0) {
      local_30 = 0;
    }
  }
  local_38 = 0;
  local_37[0] = '\0';
  local_78 = &local_30;
  local_70 = local_28;
  local_68 = &local_2c;
  local_60 = &local_34;
  local_58 = &DAT_180cc8de0;
  local_50 = &DAT_180b901a0;
  local_48 = &local_38;
  local_40 = local_37;
  FUN_180488c60();
  FUN_180541f00(&local_78);
  FUN_180488f10();
  if (local_30 == local_34) {
    if (local_37[0] != '\0') {
      if (local_34 <= DAT_180cc8e48) {
        iVar5 = (int)((longlong)DAT_180b901b0 - (longlong)DAT_180b901a8 >> 6);
        if ((DAT_180cc8e48 < iVar5) ||
           (uVar6 = (ulonglong)(DAT_180cc8e48 - iVar5),
           (ulonglong)(DAT_180b90210 - DAT_180b90208 >> 6) <= uVar6)) {
          local_88 = (char *)0x0;
          uStack_80 = 0;
        }
        else {
          lVar1 = uVar6 * 0x40 + DAT_180b90208;
          local_88 = (char *)(lVar1 + 0x20);
          if (0xf < *(ulonglong *)(lVar1 + 0x38)) {
            local_88 = *(char **)(lVar1 + 0x20);
          }
          uStack_80 = *(undefined8 *)(lVar1 + 0x30);
        }
        FUN_1800d3530(&DAT_180cc8e50,&local_88);
        DAT_180cc8e48 = -1;
        local_38 = 1;
      }
      FUN_1805303d0("##custom_skybox",0x43af0000);
    }
    cVar4 = FUN_180488630("##custom_skybox","Custom Skybox",0x43af0000);
    bVar3 = local_38;
    if (cVar4 != '\0') {
      local_38 = FUN_1805415c0();
      local_38 = local_38 | bVar3;
      FUN_1804aeac0();
    }
  }
  if (local_38 != 0) {
    FUN_18050cd00();
  }
  FUN_1800f0160(local_28);
}



