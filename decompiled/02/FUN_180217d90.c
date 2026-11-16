// FUN_180217d90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180217d90 */

undefined8 FUN_180217d90(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  char *pcVar1;
  bool bVar2;
  undefined *puVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  ULONGLONG UVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  undefined *local_68 [2];
  undefined1 *local_58;
  longlong local_50;
  char *local_48;
  undefined8 local_40;
  
  lVar6 = FUN_1802180d0();
  iVar5 = DAT_180c639d8;
  if (lVar6 == 0) {
    return 0;
  }
  if ((DAT_180c639d8 == 0) && (UVar7 = GetTickCount64(), DAT_180c639c8 <= UVar7)) {
    local_68[0] = &DAT_1808ea130;
    iVar5 = FUN_1805f68d0(&DAT_1808ea130);
    if (iVar5 != 0) goto LAB_1802180ac;
    if (DAT_1808ea17c == 0x7fffffff) {
      DAT_1808ea17c = 0x7ffffffe;
      goto LAB_1802180c1;
    }
    if ((DAT_180c639d8 == 0) && (DAT_180c639c8 <= UVar7)) {
      DAT_180c639d8 = FUN_1804174b0("C_BaseEntity",0x9d930423);
      if (DAT_180c639d8 == 0) {
        DAT_180c639c8 = UVar7 + 1000;
      }
      else {
        DAT_180c639c8 = 0xffffffffffffffff;
      }
    }
    iVar5 = DAT_180c639d8;
    FUN_1805f68fc(&DAT_1808ea130);
  }
  lVar8 = FUN_18017ea70();
  *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
  bVar2 = false;
  if (iVar5 + lVar6 != 0) {
    local_68[0] = (undefined *)0x0;
    cVar4 = FUN_1804514f0(local_68,iVar5 + lVar6,8);
    if (cVar4 == '\0') {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
  }
  puVar3 = local_68[0];
  lVar6 = FUN_18017ea70();
  if (*(int *)(lVar6 + 4) != 0) {
    *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
  }
  if (!bVar2) {
    return 0;
  }
  if (puVar3 == (undefined *)0x0) {
    return 0;
  }
  if ((param_3 == 0) || (uVar11 = 2, *(char *)(param_3 + 0x90) == '\0')) {
    uVar11 = 1;
  }
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar8 = DAT_1808ea120;
  lVar6 = DAT_1808da460;
  if ((DAT_1808ea120 == DAT_1808da460) && (lVar9 = DAT_180c639c0, DAT_180c639c0 != 0))
  goto LAB_180218046;
  UVar7 = GetTickCount64();
  if ((lVar8 == lVar6) && (UVar7 < DAT_180c639b8)) {
    return 0;
  }
  local_68[0] = &DAT_1808ea0d0;
  iVar5 = FUN_1805f68d0(&DAT_1808ea0d0);
  if (iVar5 != 0) {
LAB_1802180ac:
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_1808ea11c == 0x7fffffff) {
    DAT_1808ea11c = 0x7ffffffe;
LAB_1802180c1:
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  uVar10 = 1000;
  if (DAT_1808ea120 == lVar6) {
    if ((DAT_180c639c0 == 0) && (DAT_180c639b8 <= UVar7)) goto LAB_180217fb0;
  }
  else {
    DAT_1808ea0c0 = 1000;
LAB_180217fb0:
    lVar8 = -1;
    do {
      local_50 = lVar8 + 1;
      pcVar1 = "lient.dll:48895C24??48897424??574883EC??488D99????????488B71" + lVar8;
      lVar8 = local_50;
    } while (*pcVar1 != '\0');
    local_58 = &DAT_1808248d8;
    local_48 = "patterns::weapon_set_mesh_group_mask";
    local_40 = 0x24;
    DAT_180c639c0 = FUN_1800e5d20(&local_48,&local_58);
    DAT_1808ea120 = lVar6;
    DAT_180c639b8 = 0xffffffffffffffff;
    if (DAT_180c639c0 == 0) {
      DAT_180c639b8 = DAT_1808ea0c0 + UVar7;
      uVar10 = 60000;
      if (DAT_1808ea0c0 < 60000) {
        uVar10 = DAT_1808ea0c0 * 2;
      }
    }
    DAT_1808ea0c0 = uVar10;
  }
  lVar9 = DAT_180c639c0;
  FUN_1805f68fc(&DAT_1808ea0d0);
  if (lVar9 == 0) {
    return 0;
  }
LAB_180218046:
  cVar4 = FUN_1804513c0(lVar9,1,2);
  if (cVar4 != '\0') {
    lVar6 = FUN_18017ea70();
    *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
    cVar4 = FUN_1801ad780(lVar9,puVar3,uVar11);
    lVar6 = FUN_18017ea70();
    if (*(int *)(lVar6 + 4) != 0) {
      *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
    }
    if (cVar4 != '\0') {
      return 1;
    }
  }
  return 0;
}



