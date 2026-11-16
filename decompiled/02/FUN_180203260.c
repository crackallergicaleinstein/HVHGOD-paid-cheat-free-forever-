// FUN_180203260 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180203260 */

void FUN_180203260(undefined8 param_1,longlong param_2,longlong param_3)

{
  char *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  ULONGLONG UVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined *puVar10;
  ulonglong uVar11;
  undefined *local_58 [2];
  undefined1 *local_48;
  longlong local_40;
  char *local_38;
  undefined8 local_30;
  
  if (param_2 == 0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    iVar4 = DAT_180c63660;
    if (DAT_180c63660 == 0) {
      UVar5 = GetTickCount64();
      if (UVar5 < DAT_180c63650) {
        iVar4 = 0;
      }
      else {
        local_58[0] = &DAT_1808e8ba0;
        iVar4 = FUN_1805f68d0(&DAT_1808e8ba0);
        if (iVar4 != 0) goto LAB_180203547;
        if (DAT_1808e8bec == 0x7fffffff) {
          DAT_1808e8bec = 0x7ffffffe;
          goto LAB_18020353c;
        }
        if ((DAT_180c63660 == 0) && (DAT_180c63650 <= UVar5)) {
          DAT_180c63660 = FUN_1804174b0("C_BaseEntity",0x9d930423);
          if (DAT_180c63660 == 0) {
            DAT_180c63650 = UVar5 + 1000;
          }
          else {
            DAT_180c63650 = 0xffffffffffffffff;
          }
        }
        iVar4 = DAT_180c63660;
        FUN_1805f68fc(&DAT_1808e8ba0);
      }
    }
    lVar6 = FUN_18017ea70();
    *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
    bVar2 = false;
    if (iVar4 + param_2 != 0) {
      local_58[0] = (undefined *)0x0;
      cVar3 = FUN_1804514f0(local_58,iVar4 + param_2,8);
      if (cVar3 == '\0') {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
    }
    puVar10 = local_58[0];
    lVar6 = FUN_18017ea70();
    if (*(int *)(lVar6 + 4) != 0) {
      *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
    }
    if (!bVar2) {
      puVar10 = (undefined *)0x0;
    }
  }
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar7 = DAT_1808e8b90;
  lVar6 = DAT_1808da460;
  if ((DAT_1808e8b90 == DAT_1808da460) && (lVar9 = DAT_180c63648, DAT_180c63648 != 0))
  goto LAB_1802034f1;
  UVar5 = GetTickCount64();
  if ((lVar7 == lVar6) && (UVar5 < DAT_180c63640)) {
    lVar9 = 0;
    goto LAB_1802034f1;
  }
  local_58[0] = &DAT_1808e8b40;
  iVar4 = FUN_1805f68d0(&DAT_1808e8b40);
  if (iVar4 != 0) {
LAB_180203547:
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_1808e8b8c == 0x7fffffff) {
    DAT_1808e8b8c = 0x7ffffffe;
LAB_18020353c:
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  uVar11 = 1000;
  if (DAT_1808e8b90 == lVar6) {
    if ((DAT_180c63648 == 0) && (DAT_180c63640 <= UVar5)) goto LAB_180203460;
  }
  else {
    DAT_1808e8b30 = 1000;
LAB_180203460:
    lVar7 = -1;
    do {
      local_40 = lVar7 + 1;
      pcVar1 = "lient.dll:48895C24??48897424??574883EC??488D99????????488B71" + lVar7;
      lVar7 = local_40;
    } while (*pcVar1 != '\0');
    local_48 = &DAT_1808248d8;
    local_38 = "patterns::weapon_set_mesh_group_mask";
    local_30 = 0x24;
    DAT_180c63648 = FUN_1800e5d20(&local_38,&local_48);
    DAT_1808e8b90 = lVar6;
    DAT_180c63640 = 0xffffffffffffffff;
    if (DAT_180c63648 == 0) {
      DAT_180c63640 = DAT_1808e8b30 + UVar5;
      uVar11 = 60000;
      if (DAT_1808e8b30 < 60000) {
        uVar11 = DAT_1808e8b30 * 2;
      }
    }
    DAT_1808e8b30 = uVar11;
  }
  lVar9 = DAT_180c63648;
  FUN_1805f68fc(&DAT_1808e8b40);
LAB_1802034f1:
  if ((param_3 == 0) || (uVar8 = 2, *(char *)(param_3 + 0x90) == '\0')) {
    uVar8 = 1;
  }
  FUN_180183be0(puVar10,uVar8,lVar9);
  return;
}



