// FUN_1801fcc70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801fcc70 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801fcc70(undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
                  undefined2 *param_5,int *param_6)

{
  undefined2 uVar1;
  char cVar2;
  int iVar3;
  ULONGLONG UVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 auVar9 [64];
  undefined1 auStack_6b8 [32];
  undefined **local_698;
  char *local_690;
  undefined *local_688;
  undefined8 local_680;
  char *local_678;
  longlong local_670;
  char *local_668;
  undefined8 local_660;
  char local_658 [1544];
  ulonglong local_50;
  
  local_50 = DAT_1808d5f00 ^ (ulonglong)auStack_6b8;
  local_680 = param_2;
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar5 = DAT_1808e7f20;
  lVar6 = DAT_1808da460;
  if ((DAT_1808e7f20 != DAT_1808da460) || (lVar8 = DAT_180c63460, DAT_180c63460 == 0)) {
    UVar4 = GetTickCount64();
    if ((lVar5 == lVar6) && (UVar4 < DAT_180c63458)) {
    }
    local_688 = &DAT_1808e7ed0;
    iVar3 = FUN_1805f68d0(&DAT_1808e7ed0);
    if (iVar3 != 0) goto LAB_1801fd252;
    if (DAT_1808e7f1c == 0x7fffffff) {
      DAT_1808e7f1c = 0x7ffffffe;
      goto LAB_1801fd247;
    }
    uVar7 = 1000;
    if (DAT_1808e7f20 == lVar6) {
      if ((DAT_180c63460 == 0) && (DAT_180c63458 <= UVar4)) goto LAB_1801fcd8e;
    }
    else {
      DAT_1808e7ec0 = 1000;
LAB_1801fcd8e:
      lVar5 = -1;
      do {
        local_670 = lVar5 + 1;
        lVar8 = lVar5 + 1;
        lVar5 = local_670;
      } while ("client.dll:40534883EC20488BD94881C108020000"[lVar8] != '\0');
      local_678 = "client.dll:40534883EC20488BD94881C108020000";
      local_668 = "patterns::econ_item_view_set_attribute";
      local_660 = 0x26;
      DAT_180c63460 = FUN_1800e5d20(&local_668,&local_678);
      DAT_1808e7f20 = lVar6;
      DAT_180c63458 = 0xffffffffffffffff;
      if (DAT_180c63460 == 0) {
        DAT_180c63458 = DAT_1808e7ec0 + UVar4;
        uVar7 = 60000;
        if (DAT_1808e7ec0 < 60000) {
          uVar7 = DAT_1808e7ec0 * 2;
        }
      }
      DAT_1808e7ec0 = uVar7;
    }
    lVar8 = DAT_180c63460;
    FUN_1805f68fc(&DAT_1808e7ed0);
    if (lVar8 == 0) {
    }
  }
  iVar3 = DAT_180c63450;
  uVar1 = *param_5;
  if ((DAT_180c63450 == 0) && (UVar4 = GetTickCount64(), DAT_180c63448 <= UVar4)) {
    local_688 = &DAT_1808e7e70;
    iVar3 = FUN_1805f68d0(&DAT_1808e7e70);
    if (iVar3 != 0) goto LAB_1801fd252;
    if (DAT_1808e7ebc == 0x7fffffff) {
      DAT_1808e7ebc = 0x7ffffffe;
      goto LAB_1801fd247;
    }
    if ((DAT_180c63450 == 0) && (DAT_180c63448 <= UVar4)) {
      DAT_180c63450 = FUN_1804174b0("C_EconItemView",0xa2ccb41a);
      if (DAT_180c63450 == 0) {
        DAT_180c63448 = UVar4 + 1000;
      }
      else {
        DAT_180c63448 = 0xffffffffffffffff;
      }
    }
    iVar3 = DAT_180c63450;
    FUN_1805f68fc(&DAT_1808e7e70);
  }
  *(undefined2 *)(iVar3 + param_3) = uVar1;
  iVar3 = DAT_180c6343c;
  if ((DAT_180c6343c == 0) && (UVar4 = GetTickCount64(), DAT_180c63440 <= UVar4)) {
    local_688 = &DAT_1808e7e20;
    iVar3 = FUN_1805f68d0(&DAT_1808e7e20);
    if (iVar3 != 0) goto LAB_1801fd252;
    if (DAT_1808e7e6c == 0x7fffffff) {
      DAT_1808e7e6c = 0x7ffffffe;
      goto LAB_1801fd247;
    }
    if ((DAT_180c6343c == 0) && (DAT_180c63440 <= UVar4)) {
      DAT_180c6343c = FUN_1804174b0("C_EconItemView",0x33e8ae5a);
      if (DAT_180c6343c == 0) {
        DAT_180c63440 = UVar4 + 1000;
      }
      else {
        DAT_180c63440 = 0xffffffffffffffff;
      }
    }
    iVar3 = DAT_180c6343c;
    FUN_1805f68fc(&DAT_1808e7e20);
  }
  *(undefined1 *)(iVar3 + param_3) = 1;
  iVar3 = DAT_180c63438;
  if ((DAT_180c63438 == 0) && (UVar4 = GetTickCount64(), DAT_180c63430 <= UVar4)) {
    local_688 = &DAT_1808e7dd0;
    iVar3 = FUN_1805f68d0(&DAT_1808e7dd0);
    if (iVar3 != 0) {
LAB_1801fd252:
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1808e7e1c == 0x7fffffff) {
      DAT_1808e7e1c = 0x7ffffffe;
LAB_1801fd247:
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180c63438 == 0) && (DAT_180c63430 <= UVar4)) {
      DAT_180c63438 = FUN_1804174b0("C_EconItemView",0x710abdd);
      if (DAT_180c63438 == 0) {
        DAT_180c63430 = UVar4 + 1000;
      }
      else {
        DAT_180c63430 = 0xffffffffffffffff;
      }
    }
    iVar3 = DAT_180c63438;
    FUN_1805f68fc(&DAT_1808e7dd0);
  }
  *(undefined1 *)(iVar3 + param_3) = 1;
  auVar9 = ZEXT1664(CONCAT124(SUB1612(ZEXT816(0),4),(float)*param_6));
  cVar2 = FUN_1804513c0(lVar8,1,2);
  if (cVar2 != '\0') {
    lVar6 = FUN_18017ea70();
    *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
    cVar2 = FUN_1801aebf0(lVar8,param_3,"set item texture prefab",auVar9._0_8_);
    lVar6 = FUN_18017ea70();
    if (*(int *)(lVar6 + 4) != 0) {
      *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
    }
    if (cVar2 != '\0') {
      auVar9 = ZEXT1664(CONCAT124(SUB1612(ZEXT816(0),4),(float)param_6[2]));
      cVar2 = FUN_1804513c0(lVar8,1,2);
      if (cVar2 != '\0') {
        lVar6 = FUN_18017ea70();
        *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
        cVar2 = FUN_1801aebf0(lVar8,param_3,"set item texture seed",auVar9._0_8_);
        lVar6 = FUN_18017ea70();
        if (*(int *)(lVar6 + 4) != 0) {
          *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
        }
        if (cVar2 != '\0') {
          auVar9 = ZEXT464((uint)param_6[1]);
          cVar2 = FUN_1804513c0(lVar8,1,2);
          if (cVar2 != '\0') {
            lVar6 = FUN_18017ea70();
            *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
            cVar2 = FUN_1801aebf0(lVar8,param_3,"set item texture wear",auVar9._0_8_);
            lVar6 = FUN_18017ea70();
            iVar3 = *(int *)(lVar6 + 4);
            if (iVar3 != 0) {
              iVar3 = iVar3 + -1;
              *(int *)(lVar6 + 4) = iVar3;
            }
            if (cVar2 != '\0') {
              cVar2 = FUN_180222280(iVar3,param_3,*param_5,param_4);
              if (cVar2 == '\0') {
              }
              DAT_180c70f00 = 1;
              FUN_1801fd970();
            }
          }
        }
      }
    }
  }
  cVar2 = DAT_180c63428;
  LOCK();
  DAT_180c63428 = 1;
  UNLOCK();
  if (cVar2 == '\0') {
    FUN_18063ab10(local_658,0,0x600);
    FUN_18015ad60(local_658,0x600,0xffffffffffffffff,"action=apply_disabled");
    local_698 = &PTR_180700558;
    if (local_658[0] != '\0') {
      local_698 = (undefined **)&DAT_1806bcfc0;
    }
    local_690 = local_658;
    FUN_1800f6900(2);
  }
}



