// FUN_1803c0b50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803c0b50 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803c0b50(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  ulonglong uVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  ULONGLONG UVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  int local_78;
  int local_74;
  undefined1 local_68 [16];
  undefined1 *local_58;
  char local_48 [8];
  undefined1 local_40 [16];
  ulonglong local_30;
  
  local_30 = DAT_1808d5f00 ^ (ulonglong)auStack_a8;
  local_40 = (undefined1  [16])0x0;
  plVar2 = (longlong *)(param_1 + 0x1028);
  local_40._8_8_ = FUN_180113860(plVar2);
  local_40._0_8_ = *(undefined8 *)(param_1 + 0x1020);
  if (local_40._8_8_ != 0) {
    LOCK();
    *(int *)(local_40._8_8_ + 8) = *(int *)(local_40._8_8_ + 8) + 1;
    UNLOCK();
  }
  LOCK();
  lVar12 = *plVar2;
  *plVar2 = local_40._8_8_;
  UNLOCK();
  if (((byte)lVar12 & 3) == 2) {
    FUN_1805fa36c(plVar2);
  }
  if (((*(char *)(param_1 + 0xdc1) == '\0') || (local_40._0_8_ == 0)) ||
     (uVar3 = *(ulonglong *)(param_1 + 0x1048), UVar10 = GetTickCount64(), uVar3 <= UVar10)) {
    local_48[0] = '\0';
  }
  else {
    local_48[0] = '\x01';
  }
  local_68._8_8_ = param_1;
  local_68._0_8_ = local_48;
  local_58 = local_40;
  FUN_1803c8800(param_1,local_68,local_48[0]);
  uVar6 = local_40._8_8_;
  if ((longlong *)local_40._8_8_ != (longlong *)0x0) {
    LOCK();
    plVar11 = (longlong *)(local_40._8_8_ + 8);
    lVar12 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (*(code *)**(undefined8 **)local_40._8_8_)(local_40._8_8_);
      LOCK();
      piVar1 = (int *)(uVar6 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*(longlong *)uVar6 + 8))(uVar6);
      }
    }
  }
  FUN_1803ee530(param_1 + 0x980);
  UVar10 = GetTickCount64();
  local_68 = (undefined1  [16])0x0;
  plVar11 = (longlong *)FUN_180113860(plVar2);
  lVar12 = *(longlong *)(param_1 + 0x1020);
  local_68._8_8_ = plVar11;
  local_68._0_8_ = lVar12;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
  }
  LOCK();
  lVar13 = *plVar2;
  *plVar2 = (longlong)plVar11;
  UNLOCK();
  if (((byte)lVar13 & 3) == 2) {
    FUN_1805fa36c(plVar2);
  }
  iVar8 = DAT_180c71d98;
  local_74 = *(int *)(param_1 + 0x1050);
  if (((*(char *)(param_1 + 0xdc1) == '\0') && (UVar10 < *(ulonglong *)(param_1 + 0x1048))) &&
     ((lVar12 != 0 && (*(char *)(lVar12 + 0x12e) != '\0')))) {
    cVar7 = '\x01';
  }
  else {
    cVar7 = '\0';
  }
  local_48[0] = cVar7;
  if ((DAT_180c71d98 == 0) && (UVar10 = GetTickCount64(), DAT_180c71d80 <= UVar10)) {
    local_40._0_8_ = &DAT_1809b9f30;
    iVar8 = FUN_1805f68d0(&DAT_1809b9f30);
    if (iVar8 != 0) goto LAB_1803c10c6;
    if (DAT_1809b9f7c == 0x7fffffff) {
      DAT_1809b9f7c = 0x7ffffffe;
      goto LAB_1803c10bb;
    }
    if ((DAT_180c71d98 == 0) && (DAT_180c71d80 <= UVar10)) {
      DAT_180c71d98 = FUN_1804174b0("C_BaseModelEntity",0xa7e70c3c);
      if (DAT_180c71d98 == 0) {
        DAT_180c71d80 = UVar10 + 1000;
      }
      else {
        DAT_180c71d80 = 0xffffffffffffffff;
      }
    }
    iVar8 = DAT_180c71d98;
    FUN_1805f68fc(&DAT_1809b9f30);
  }
  iVar9 = DAT_180c71d70;
  if (DAT_180c71d70 == 0) {
    UVar10 = GetTickCount64();
    if (DAT_180c71d78 <= UVar10) {
      local_40._0_8_ = &DAT_1809b9f80;
      iVar9 = FUN_1805f68d0(&DAT_1809b9f80);
      if (iVar9 != 0) {
LAB_1803c10c6:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1809b9fcc == 0x7fffffff) {
        DAT_1809b9fcc = 0x7ffffffe;
LAB_1803c10bb:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if ((DAT_180c71d70 == 0) && (DAT_180c71d78 <= UVar10)) {
        DAT_180c71d70 = FUN_1804174b0("CGlowProperty",0x600e8dd);
        if (DAT_180c71d70 == 0) {
          DAT_180c71d78 = UVar10 + 1000;
        }
        else {
          DAT_180c71d78 = 0xffffffffffffffff;
        }
      }
      iVar9 = DAT_180c71d70;
      FUN_1805f68fc(&DAT_1809b9f80);
    }
    lVar12 = local_68._0_8_;
  }
  if ((iVar8 == 0) || (iVar9 == 0)) goto LAB_1803c1047;
  if (*(int *)(param_1 + 0x1054) == 0) {
LAB_1803c0f4b:
    if (local_48[0] == '\0') goto LAB_1803c1047;
    lVar12 = local_68._0_8_;
  }
  else if (((cVar7 == '\0') || (local_74 != *(int *)(param_1 + 0x1054))) ||
          (*(int *)(lVar12 + 0x148) != *(int *)(param_1 + 0x1058))) {
    lVar12 = FUN_1803d4150();
    local_88 = 0;
    cVar7 = FUN_1803c36b0(param_1,lVar12,*(undefined4 *)(param_1 + 0x1058),0);
    if (cVar7 != '\0') {
      lVar13 = lVar12 + iVar9 + (longlong)iVar8;
      local_40._0_8_ = lVar13;
      lVar12 = FUN_18017ea70();
      *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
      bVar4 = false;
      if (lVar13 != 0) {
        local_78 = 0;
        cVar7 = FUN_1804514f0(&local_78,lVar13,4);
        if (cVar7 == '\0') {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
      }
      iVar5 = local_78;
      lVar12 = FUN_18017ea70();
      if (*(int *)(lVar12 + 4) != 0) {
        *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
      }
      if ((bVar4) && (iVar5 == 3)) {
        uVar6 = local_40._0_8_;
        if (local_40._0_8_ != 0) {
          lVar12 = FUN_18017ea70();
          *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
          FUN_1801ad800(uVar6,param_1 + 0x105c);
          lVar12 = FUN_18017ea70();
          if (*(int *)(lVar12 + 4) != 0) {
            *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
          }
        }
      }
    }
    *(undefined4 *)(param_1 + 0x1054) = 0;
    goto LAB_1803c0f4b;
  }
  if (local_74 != 0) {
    lVar13 = FUN_1803d4150();
    local_88 = 0;
    cVar7 = FUN_1803c36b0(param_1,lVar13,*(undefined4 *)(lVar12 + 0x148),0);
    if (cVar7 != '\0') {
      lVar14 = lVar13 + iVar9 + (longlong)iVar8;
      lVar13 = FUN_18017ea70();
      *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + 1;
      if (lVar14 == 0) {
        bVar4 = false;
      }
      else {
        local_78 = 0;
        cVar7 = FUN_1804514f0(&local_78,lVar14,4);
        if (cVar7 == '\0') {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
      }
      iVar8 = local_78;
      lVar13 = FUN_18017ea70();
      if (*(int *)(lVar13 + 4) != 0) {
        *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + -1;
      }
      if (bVar4) {
        if (*(int *)(param_1 + 0x1054) == 0) {
          *(int *)(param_1 + 0x1054) = local_74;
          *(undefined4 *)(param_1 + 0x1058) = *(undefined4 *)(lVar12 + 0x148);
          *(int *)(param_1 + 0x105c) = iVar8;
        }
        if ((iVar8 != 3) && (local_78 = 3, lVar14 != 0)) {
          lVar12 = FUN_18017ea70();
          *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
          FUN_1801ad800(lVar14,&local_78);
          lVar12 = FUN_18017ea70();
          if (*(int *)(lVar12 + 4) != 0) {
            *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
          }
        }
      }
    }
  }
LAB_1803c1047:
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar11 + 1;
    lVar12 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11);
      }
    }
  }
}



