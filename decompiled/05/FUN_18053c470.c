// FUN_18053c470 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18053c470 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18053c470(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  char cVar4;
  HINSTANCE pHVar5;
  undefined8 *puVar6;
  bool bVar7;
  LPCWSTR ***lpFile;
  undefined1 auStackY_d8 [32];
  longlong local_a8;
  longlong local_a0;
  LPCWSTR ***local_98;
  longlong lStack_90;
  undefined1 auStack_88 [16];
  undefined1 local_78;
  uint7 uStack_77;
  undefined8 uStack_70;
  LPCWSTR ***local_58;
  longlong lStack_50;
  undefined8 uStack_48;
  ulonglong uStack_40;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStackY_d8;
  local_98 = *(LPCWSTR ****)param_1[3];
  lStack_90 = ((longlong *)param_1[3])[1] - (longlong)local_98 >> 3;
  auStack_88 = ZEXT816(0);
  local_78 = 0;
  uStack_70 = 0;
  local_a8 = *(longlong *)param_1[1];
  uStack_48 = 0;
  uStack_40 = 0;
  local_38 = (ulonglong)uStack_77 << 8;
  uStack_30 = 0;
  auVar3 = vunpcklps_avx(ZEXT816(0),ZEXT816(0));
  local_28 = auVar3._0_8_;
  local_a0 = ((longlong *)param_1[1])[1] - local_a8 >> 3;
  local_58 = local_98;
  lStack_50 = lStack_90;
  cVar4 = FUN_18048d220("Sound File",*param_1,&local_a8,
                        *(longlong *)param_1[2] != ((longlong *)param_1[2])[1]);
  if ((cVar4 != '\0') && (0 < *(int *)*param_1)) {
    puVar6 = (undefined8 *)((longlong)*(int *)*param_1 * 0x20 + *(longlong *)param_1[2] + -0x20);
    if ((undefined8 *)param_1[4] != puVar6) {
      puVar1 = puVar6 + 2;
      if (0xf < (ulonglong)puVar6[3]) {
        puVar6 = (undefined8 *)*puVar6;
      }
      FUN_180113930((undefined8 *)param_1[4],puVar6,*puVar1);
    }
  }
  cVar4 = FUN_18048b0e0("Open Sounds Folder",&DAT_180829a44,1);
  if (cVar4 == '\0') goto LAB_18053c61a;
  FUN_1802c6ac0(&local_58);
  FUN_1800f5370(&local_98,&local_58);
  cVar4 = FUN_180165ac0(&local_98);
  if (cVar4 == '\0') {
LAB_18053c604:
    bVar7 = true;
  }
  else {
    cVar4 = FUN_1800a9120(&local_58);
    if (cVar4 == '\0') goto LAB_18053c604;
    lpFile = (LPCWSTR ***)&local_58;
    if (7 < uStack_40) {
      lpFile = local_58;
    }
    pHVar5 = ShellExecuteW((HWND)0x0,L"open",(LPCWSTR)lpFile,(LPCWSTR)0x0,(LPCWSTR)0x0,1);
    bVar7 = (longlong)pHVar5 < 0x21;
  }
  FUN_18015b930(&local_58);
  *(bool *)(param_1[2] + 0x38) = bVar7;
LAB_18053c61a:
  cVar4 = FUN_18048b0e0("Preview Custom Sound",&DAT_18085d590,0 < *(int *)*param_1);
  if (cVar4 != '\0') {
    plVar2 = (longlong *)param_1[4];
    local_a8 = (longlong)plVar2;
    if (0xf < (ulonglong)plVar2[3]) {
      local_a8 = *plVar2;
    }
    local_a0 = plVar2[2];
    FUN_1802e0770(local_a0,&local_a8,*(undefined4 *)param_1[5]);
  }
}



