// FUN_18054bad0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18054bad0 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18054bad0(char param_1,uint *param_2)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  float *pfVar9;
  longlong *plVar10;
  undefined1 (*pauVar11) [16];
  undefined1 (*pauVar12) [16];
  undefined8 uVar13;
  int *piVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  float fVar18;
  ulonglong uVar19;
  undefined1 auVar20 [64];
  undefined1 auStack_35e8 [48];
  undefined1 (*local_35b8) [16];
  undefined8 uStack_35b0;
  uint local_35a8;
  float local_35a4;
  float local_35a0 [2];
  uint *local_3598;
  undefined *local_3590;
  undefined1 local_3588 [13584];
  int local_78;
  int local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined4 local_58;
  undefined8 local_54;
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_35e8;
  local_35a8 = 0;
  local_3590 = &DAT_1808e6940;
  local_3598 = param_2;
  iVar6 = FUN_1805f68d0(&DAT_1808e6940);
  lVar8 = DAT_180c62ff0;
  plVar10 = DAT_180c62f50;
  if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_1808e698c == 0x7fffffff) {
    DAT_1808e698c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  if ((DAT_180c62ff0 == 0) || (DAT_180c62f50 == (longlong *)0x0)) goto LAB_18054c3c8;
  DAT_180bb8ae8 = DAT_180c62ff0;
  uVar15 = *param_2;
  DAT_180bbef49 = param_1;
  if ((uVar15 < 0xe) && (uVar15 != *(uint *)((longlong)DAT_180c62f50 + 0x24))) {
    *(uint *)((longlong)DAT_180c62f50 + 0x24) = uVar15;
    *(undefined4 *)(plVar10 + 5) = 0;
  }
  plVar10 = DAT_180c62f50;
  fVar18 = 0.0;
  if (param_1 == '\0') {
    if (DAT_180bda4dc != 0) {
      FUN_18050c9f0(0);
      lVar8 = DAT_180bb8ae8;
    }
LAB_18054bbd6:
    plVar10 = DAT_180c62f50;
    *(undefined1 *)(DAT_180c62f50 + 0xe35) = 0;
    *(undefined4 *)((longlong)plVar10 + 0x71ac) = 0;
    if (param_1 == '\0') {
      DAT_180c62f48 = 0;
      DAT_180c62fe0 = 0;
      DAT_1808e4f84 = -1;
      DAT_180bbecde = param_1;
      DAT_180bbecdf = param_1;
      lVar8 = FUN_180439770();
      *(undefined8 *)(lVar8 + 0x420) = 0;
      if ((DAT_1808e6670 != '\0') && (DAT_180c63119 != '\0')) {
        FUN_1801d80f0();
      }
      LOCK();
      DAT_180cd2898 = 0;
      UNLOCK();
      _DAT_180cd2918 = 0;
      FUN_180509360(&DAT_180cd21d0);
      LOCK();
      DAT_180cd3978 = 0;
      UNLOCK();
      _DAT_180cd39f8 = 0;
      FUN_180509360(&DAT_180cd32b0);
      lVar8 = DAT_180bb8ae8;
    }
  }
  else {
    if (DAT_180bda4dc != 0) goto LAB_18054bbd6;
    *(undefined1 *)(DAT_180c62f50 + 0xe35) = 1;
    if (*(float *)((longlong)plVar10 + 0x71ac) <= 0.0) {
      *(undefined4 *)(plVar10 + 0xe36) = 0x404ccccd;
    }
  }
  if (DAT_180bbe7ec != '\0') {
    FUN_18063aed0(*(longlong *)(*DAT_180c62f50 + (longlong)(int)DAT_180c62f50[3] * 8) + 0x2ec,
                  &DAT_180bbb2e8,0x3504);
    DAT_180bbe7ec = '\0';
  }
  if (lVar8 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = *(longlong *)(lVar8 + 0xd0);
  }
  if (*(longlong *)(lVar8 + 0x28) == 0) {
    FUN_180508030();
  }
  FUN_180505720();
  if ((*(float *)(DAT_180bb8ae8 + 0x30) <= fVar18) || (*(float *)(DAT_180bb8ae8 + 0x34) <= fVar18))
  {
    DAT_180bbef4b = 0;
    goto LAB_18054c3c8;
  }
  iVar16 = (int)*(float *)(DAT_180bb8ae8 + 0x34);
  iVar6 = (int)*(float *)(DAT_180bb8ae8 + 0x30);
  local_35b8 = (undefined1 (*) [16])CONCAT44(local_35b8._4_4_,iVar6);
  if (((DAT_180c62db0 == 0) || (iVar6 < 1)) || (iVar16 < 1)) {
LAB_18054bebe:
    uStack_35b0 = 0;
    local_35b8 = (undefined1 (*) [16])0x0;
  }
  else {
    if ((iVar6 != DAT_180c62eb0) || (iVar16 != DAT_180c62eb4)) {
      FUN_180508d20();
      piVar14 = (int *)&DAT_180c62e30;
      iVar17 = iVar16;
      do {
        iVar7 = (iVar6 + 1) / 2;
        iVar6 = 1;
        if (1 < iVar7) {
          iVar6 = iVar7;
        }
        iVar7 = (iVar17 + 1) / 2;
        iVar17 = 1;
        if (1 < iVar7) {
          iVar17 = iVar7;
        }
        local_64 = 1;
        local_54 = 0;
        local_70 = 1;
        local_6c = 1;
        local_68 = 0x1c;
        local_5c = 0;
        local_58 = 0x28;
        local_78 = iVar6;
        local_74 = iVar17;
        iVar7 = (**(code **)(*DAT_180c62da0 + 0x28))(DAT_180c62da0,&local_78,0,piVar14);
        if (((iVar7 < 0) ||
            (iVar7 = (**(code **)(*DAT_180c62da0 + 0x48))
                               (DAT_180c62da0,*(undefined8 *)piVar14,0,piVar14 + 2), iVar7 < 0)) ||
           (iVar7 = (**(code **)(*DAT_180c62da0 + 0x38))
                              (DAT_180c62da0,*(undefined8 *)piVar14,0,piVar14 + 4), iVar7 < 0)) {
          FUN_180508530(piVar14);
          FUN_180508d20();
          goto LAB_18054bebe;
        }
        piVar14[6] = iVar6;
        piVar14[7] = iVar17;
        piVar14 = piVar14 + 8;
      } while (piVar14 != &DAT_180c62eb0);
      DAT_180c62eb0 = (int)local_35b8;
      DAT_180c62eb4 = iVar16;
    }
    local_35b8 = (undefined1 (*) [16])FUN_1805087c0;
    uStack_35b0 = DAT_180c62e40;
  }
  DAT_180c62c80 = local_35b8;
  DAT_180c62c88 = uStack_35b0;
  FUN_1804b8dc0();
  if (DAT_180bbecdf != '\0') {
    DAT_180bbecdf = '\0';
  }
  if (DAT_180bbecde != '\0') {
    DAT_180bbecde = '\0';
    lVar8 = FUN_180439770();
    *(undefined8 *)(lVar8 + 0x420) = 0;
  }
  local_35a4 = (*(float *)(DAT_180bb8ae8 + 0x34) - 32.0) / 485.0;
  local_35a0[0] = (*(float *)(DAT_180bb8ae8 + 0x30) - 32.0) / 633.0;
  pfVar9 = &local_35a4;
  if (local_35a0[0] <= local_35a4) {
    pfVar9 = local_35a0;
  }
  fVar18 = *pfVar9;
  if (fVar18 < 0.75) {
    pfVar9 = (float *)&DAT_18086c058;
  }
  if (3.0 < fVar18) {
    pfVar9 = (float *)&DAT_18086c040;
  }
  fVar18 = *pfVar9;
  auVar20 = ZEXT464((uint)fVar18);
  uVar19 = (ulonglong)(uint)fVar18;
  if (DAT_1808e4fb4 != '\0') {
    auVar2 = vminss_avx(ZEXT416((uint)fVar18),ZEXT416(DAT_1808e4fa0));
    FUN_18047e280(DAT_180c62f50,auVar2._0_8_);
    plVar10 = DAT_180c62f50;
    uVar13 = uRam00000001808e4fac;
    uVar19 = auVar20._0_8_;
    *(undefined8 *)((longlong)DAT_180c62f50 + 0x717c) = _DAT_1808e4fa4;
    *(undefined8 *)((longlong)plVar10 + 0x7184) = uVar13;
    DAT_1808e4fb4 = '\0';
  }
  if ((float)uVar19 < DAT_180b0a41c) {
    FUN_18047e280(DAT_180c62f50,uVar19);
  }
  FUN_18047c030(DAT_1808e4fb5);
  if (DAT_180bda4dc != 0) {
    FUN_18054ad00();
    cVar4 = FUN_1804c3390(0x20e,1,0);
    if (cVar4 == '\0') {
      cVar4 = FUN_1804c3390(0x20d,1,0);
      if (cVar4 != '\0') {
        DAT_180bda4dc = 0;
      }
    }
    else {
      FUN_18050c9f0(0);
    }
  }
  if ((param_1 == '\0') && (DAT_180bda4dc == 0)) {
    uVar13 = 0;
  }
  else {
    uVar13 = 1;
  }
  FUN_18054b230(uVar13);
  if (((DAT_180ccaa20 == '\0') || (DAT_1808e4fc0 < 0)) ||
     ((plVar10 = (longlong *)FUN_180439710(), lVar8 = DAT_180bb8ae8, *plVar10 == plVar10[1] &&
      (DAT_180c63119 == '\0')))) {
    FUN_18047e400(DAT_180c62f50);
  }
  else {
    uVar15 = *(uint *)(DAT_180bb8ae8 + 0x1e80) | 0x40;
    *(uint *)(DAT_180bb8ae8 + 0x1e80) = uVar15;
    piVar14 = (int *)(lVar8 + 0x1fd8);
    iVar6 = *(int *)(lVar8 + 0x1fdc);
    if (*piVar14 == iVar6) {
      iVar16 = *piVar14 + 1;
      if (iVar6 == 0) {
        iVar6 = 8;
      }
      else {
        iVar6 = iVar6 / 2 + iVar6;
      }
      if (iVar16 < iVar6) {
        iVar16 = iVar6;
      }
      FUN_1804d14d0(piVar14,iVar16);
    }
    *(uint *)(*(longlong *)(lVar8 + 0x1fe0) + (longlong)*piVar14 * 4) = uVar15;
    *piVar14 = *piVar14 + 1;
    FUN_18047e400(DAT_180c62f50);
    lVar8 = DAT_180bb8ae8;
    iVar6 = *(int *)(DAT_180bb8ae8 + 0x1fd8);
    if (iVar6 < 2) {
      FUN_1804c5a40("Calling PopItemFlag() too many times!");
    }
    else {
      *(int *)(DAT_180bb8ae8 + 0x1fd8) = iVar6 + -1;
      *(undefined4 *)(lVar8 + 0x1e80) =
           *(undefined4 *)(*(longlong *)(lVar8 + 0x1fe0) + -8 + (longlong)iVar6 * 4);
    }
  }
  if (DAT_1808e6670 == '\0') {
LAB_18054c192:
    if (param_1 != '\0') goto LAB_18054c1de;
    pauVar11 = (undefined1 (*) [16])FUN_180113860(&DAT_180b909c8);
    pauVar12 = DAT_180b909c0;
    if (pauVar11 != (undefined1 (*) [16])0x0) {
      LOCK();
      *(int *)(*pauVar11 + 8) = *(int *)(*pauVar11 + 8) + 1;
      UNLOCK();
    }
    LOCK();
    UNLOCK();
    bVar5 = (byte)DAT_180b909c8;
    DAT_180b909c8 = pauVar11;
    if ((bVar5 & 3) == 2) {
      FUN_1805fa36c(&DAT_180b909c8);
    }
    uVar15 = 1;
    if (pauVar12 == (undefined1 (*) [16])0x0) goto LAB_18054c1e7;
    bVar3 = false;
  }
  else {
    if ((((param_1 == '\0') || (DAT_180bda4dc != 0)) ||
        (*(int *)((longlong)DAT_180c62f50 + 0x24) != 4)) ||
       (((int)DAT_180c62f50[9] != DAT_1808e6678 ||
        (*(int *)(*(longlong *)(*DAT_180c62f50 + (longlong)(int)DAT_180c62f50[3] * 8) + 0x4968) !=
         DAT_1808e6674)))) {
      if (DAT_180c63119 != '\0') {
        FUN_1801d80f0();
      }
      goto LAB_18054c192;
    }
LAB_18054c1de:
    pauVar11 = local_35b8;
    uVar15 = local_35a8;
LAB_18054c1e7:
    bVar3 = true;
  }
  if (((uVar15 & 1) != 0) && (pauVar11 != (undefined1 (*) [16])0x0)) {
    LOCK();
    piVar14 = (int *)(*pauVar11 + 8);
    iVar6 = *piVar14;
    *piVar14 = *piVar14 + -1;
    UNLOCK();
    if (iVar6 == 1) {
      (*(code *)**(undefined8 **)*pauVar11)(pauVar11);
      LOCK();
      piVar14 = (int *)(*pauVar11 + 0xc);
      iVar6 = *piVar14;
      *piVar14 = *piVar14 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*(longlong *)*pauVar11 + 8))(pauVar11);
      }
    }
  }
  if (bVar3) {
    FUN_18063aed0(local_3588,
                  *(longlong *)(*DAT_180c62f50 + (longlong)(int)DAT_180c62f50[3] * 8) + 0x2ec,0x3504
                 );
    if (DAT_180c7df28 == (undefined8 *)0x0) {
      local_35b8 = (undefined1 (*) [16])0x180827288;
      uStack_35b0 = 0x15;
      DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_35b8);
    }
    pauVar12 = (undefined1 (*) [16])
               (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x3518);
    local_35b8 = pauVar12;
    if (pauVar12 == (undefined1 (*) [16])0x0) {
      pauVar12 = (undefined1 (*) [16])0x0;
    }
    else {
      *pauVar12 = (undefined1  [16])0x0;
      *(undefined4 *)(*pauVar12 + 8) = 1;
      *(undefined4 *)(*pauVar12 + 0xc) = 1;
      *(undefined ***)*pauVar12 =
           std::_Ref_count_obj2<rendering::forge::player_presentation_const_>::vftable;
      FUN_18063aed0(pauVar12 + 1,local_3588,0x3504);
    }
    plVar10 = (longlong *)FUN_180113860(&DAT_180b909c8);
    pauVar11 = DAT_180b909c0;
    LOCK();
    UNLOCK();
    bVar5 = (byte)DAT_180b909c8;
    DAT_180b909c0 = pauVar12 + 1;
    DAT_180b909c8 = pauVar12;
    if ((bVar5 & 3) == 2) {
      FUN_1805fa36c(&DAT_180b909c8,pauVar11);
    }
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar10 + 1;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar14 = (int *)((longlong)plVar10 + 0xc);
        iVar6 = *piVar14;
        *piVar14 = *piVar14 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10);
        }
      }
    }
  }
  if ((((DAT_180c62f48 == 0) && (DAT_180c62fe0 == 0)) && (DAT_1808e4f84 < 0)) &&
     (*(char *)(DAT_180bb8ae8 + 0xe2) == '\0')) {
    lVar8 = FUN_180439770();
    *(undefined8 *)(lVar8 + 0x420) = 0;
  }
  *local_3598 = *(uint *)((longlong)DAT_180c62f50 + 0x24);
  FUN_1804bb0e0();
  DAT_180bbef4b = 1;
LAB_18054c3c8:
  FUN_1805f68fc(&DAT_1808e6940);
}



