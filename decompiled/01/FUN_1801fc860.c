// FUN_1801fc860 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801fc860 */

undefined8 FUN_1801fc860(undefined8 param_1,undefined8 param_2)

{
  undefined2 uVar1;
  char cVar2;
  int iVar3;
  ULONGLONG UVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auVar12 [64];
  char *local_68;
  longlong local_60;
  char *local_58;
  longlong local_50;
  undefined *local_48;
  
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar5 = DAT_1808e7ff0;
  lVar6 = DAT_1808da460;
  lVar10 = 0;
  uVar8 = 1000;
  if ((DAT_1808e7ff0 != DAT_1808da460) || (lVar11 = DAT_180c63480, DAT_180c63480 == 0)) {
    UVar4 = GetTickCount64();
    if ((lVar5 == lVar6) && (UVar4 < DAT_180c63478)) {
      lVar11 = 0;
    }
    else {
      local_48 = &DAT_1808e7fa0;
      iVar3 = FUN_1805f68d0(&DAT_1808e7fa0);
      if (iVar3 != 0) goto LAB_1801fcc5e;
      if (DAT_1808e7fec == 0x7fffffff) {
        DAT_1808e7fec = 0x7ffffffe;
        goto LAB_1801fcc53;
      }
      if (DAT_1808e7ff0 == lVar6) {
        if ((DAT_180c63480 == 0) && (DAT_180c63478 <= UVar4)) goto LAB_1801fc968;
      }
      else {
        DAT_1808e7f90 = 1000;
LAB_1801fc968:
        lVar5 = -1;
        do {
          local_60 = lVar5 + 1;
          lVar11 = lVar5 + 1;
          lVar5 = local_60;
        } while ("client.dll:40534883EC20488BD94881C108020000"[lVar11] != '\0');
        local_68 = "client.dll:40534883EC20488BD94881C108020000";
        local_58 = "patterns::econ_item_view_set_attribute";
        local_50 = 0x26;
        DAT_180c63480 = FUN_1800e5d20(&local_58,&local_68);
        DAT_1808e7ff0 = lVar6;
        DAT_180c63478 = 0xffffffffffffffff;
        if (DAT_180c63480 == 0) {
          DAT_180c63478 = DAT_1808e7f90 + UVar4;
          if (DAT_1808e7f90 < 60000) {
            DAT_1808e7f90 = DAT_1808e7f90 * 2;
          }
          else {
            DAT_1808e7f90 = 60000;
          }
        }
        else {
          DAT_1808e7f90 = 1000;
        }
      }
      lVar11 = DAT_180c63480;
      FUN_1805f68fc(&DAT_1808e7fa0);
    }
  }
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar5 = DAT_1808e7f88;
  lVar6 = DAT_1808da460;
  if ((DAT_1808e7f88 == DAT_1808da460) && (lVar9 = DAT_180c63470, DAT_180c63470 != 0))
  goto LAB_1801fcb59;
  UVar4 = GetTickCount64();
  if ((lVar5 == lVar6) && (UVar4 < DAT_180c63468)) {
    lVar9 = 0;
    goto LAB_1801fcb59;
  }
  local_48 = &DAT_1808e7f30;
  iVar3 = FUN_1805f68d0(&DAT_1808e7f30);
  if (iVar3 != 0) {
LAB_1801fcc5e:
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_1808e7f7c == 0x7fffffff) {
    DAT_1808e7f7c = 0x7ffffffe;
LAB_1801fcc53:
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  if (DAT_1808e7f88 == lVar6) {
    if ((DAT_180c63470 == 0) && (DAT_180c63468 <= UVar4)) goto LAB_1801fcac4;
  }
  else {
    DAT_1808e7f80 = 1000;
LAB_1801fcac4:
    lVar5 = -1;
    do {
      local_50 = lVar5 + 1;
      lVar9 = lVar5 + 1;
      lVar5 = local_50;
    } while ("client.dll:40534883EC20486381????????440FB7CA"[lVar9] != '\0');
    local_58 = "client.dll:40534883EC20486381????????440FB7CA";
    local_68 = "patterns::econ_item_view_remove_attribute";
    local_60 = 0x29;
    DAT_180c63470 = FUN_1800e5d20(&local_68,&local_58);
    DAT_1808e7f88 = lVar6;
    DAT_180c63468 = 0xffffffffffffffff;
    if (DAT_180c63470 == 0) {
      DAT_180c63468 = DAT_1808e7f80 + UVar4;
      uVar8 = DAT_1808e7f80 * 2;
      if (59999 < DAT_1808e7f80) {
        uVar8 = 60000;
      }
    }
    DAT_1808e7f80 = uVar8;
  }
  lVar9 = DAT_180c63470;
  FUN_1805f68fc(&DAT_1808e7f30);
LAB_1801fcb59:
  if ((lVar11 == 0) || (lVar9 == 0)) {
LAB_1801fcc45:
    uVar7 = 0;
  }
  else {
    uVar8 = 0;
    do {
      if ((&DAT_180c70ee4)[lVar10] == '\0') {
        uVar1 = *(undefined2 *)((longlong)&DAT_180701c10 + uVar8);
        cVar2 = FUN_1804513c0(lVar9,1,2);
        if (cVar2 == '\0') goto LAB_1801fcc45;
        lVar6 = FUN_18017ea70();
        *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
        cVar2 = FUN_1801aec20(lVar9,param_2,uVar1);
      }
      else {
        auVar12 = ZEXT464(*(uint *)((longlong)&DAT_180c70ee0 + lVar10));
        uVar7 = *(undefined8 *)((longlong)&PTR_s_set_item_texture_prefab_180701c18 + lVar10);
        cVar2 = FUN_1804513c0(lVar11,1,2);
        if (cVar2 == '\0') goto LAB_1801fcc45;
        lVar6 = FUN_18017ea70();
        *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
        cVar2 = FUN_1801aebf0(lVar11,param_2,uVar7,auVar12._0_8_);
      }
      lVar6 = FUN_18017ea70();
      if (*(int *)(lVar6 + 4) != 0) {
        *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
      }
      if (cVar2 == '\0') goto LAB_1801fcc45;
      uVar8 = uVar8 + 2;
      lVar10 = lVar10 + 8;
    } while (uVar8 < 6);
    uVar7 = 1;
  }
  return uVar7;
}



