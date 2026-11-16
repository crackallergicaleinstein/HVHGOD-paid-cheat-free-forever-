// FUN_18036d650 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18036d650 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_18036d650(void)

{
  int *piVar1;
  longlong lVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  ULONGLONG UVar6;
  longlong lVar7;
  undefined8 **ppuVar8;
  ulonglong uVar9;
  undefined8 *_Buf2;
  longlong *plVar10;
  undefined8 **ppuVar11;
  longlong *plVar12;
  size_t sVar13;
  longlong *local_58;
  size_t sStack_50;
  longlong *local_48;
  longlong *plStack_40;
  longlong *local_38;
  size_t sStack_30;
  
  local_48 = (longlong *)0x0;
  plVar12 = local_48;
  local_48 = (longlong *)0x0;
  local_58 = (longlong *)0x0;
  sStack_50 = 0;
  if (DAT_180cc8de0 == '\0') {
LAB_18036d758:
    plStack_40 = (longlong *)0x0;
    local_48 = plVar12;
  }
  else if (DAT_180cc8e48 == -1) {
    plStack_40 = (longlong *)FUN_180113860(&DAT_180cc8e68);
    local_48 = DAT_180cc8e60;
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
      UNLOCK();
    }
    LOCK();
    UNLOCK();
    bVar3 = (byte)DAT_180cc8e68;
    DAT_180cc8e68 = (longlong)plStack_40;
    if ((bVar3 & 3) == 2) {
      FUN_1805fa36c(&DAT_180cc8e68);
    }
    if (local_48 != (longlong *)0x0) {
      local_58 = local_48;
      if (0xf < (ulonglong)local_48[3]) {
        local_58 = (longlong *)*local_48;
      }
      sStack_50 = local_48[2];
    }
  }
  else {
    if ((-1 < DAT_180cc8e48) &&
       ((ulonglong)(longlong)DAT_180cc8e48 < (ulonglong)(DAT_180b901b0 - DAT_180b901a8 >> 6))) {
      plVar10 = (longlong *)(DAT_180b901a8 + 0x20 + (longlong)DAT_180cc8e48 * 0x40);
      local_58 = plVar10;
      if (0xf < (ulonglong)plVar10[3]) {
        local_58 = (longlong *)*plVar10;
      }
      sStack_50 = plVar10[2];
      goto LAB_18036d758;
    }
    iVar5 = (int)(DAT_180b901b0 - DAT_180b901a8 >> 6);
    if ((DAT_180cc8e48 < iVar5) ||
       (uVar9 = (ulonglong)(DAT_180cc8e48 - iVar5),
       (ulonglong)(DAT_180b90210 - DAT_180b90208 >> 6) <= uVar9)) {
      local_38 = (longlong *)0x0;
      sStack_30 = 0;
    }
    else {
      lVar2 = uVar9 * 0x40 + DAT_180b90208;
      local_38 = (longlong *)(lVar2 + 0x20);
      if (0xf < *(ulonglong *)(lVar2 + 0x38)) {
        local_38 = *(longlong **)(lVar2 + 0x20);
      }
      sStack_30 = *(size_t *)(lVar2 + 0x30);
    }
    plStack_40 = (longlong *)0x0;
    sStack_50 = sStack_30;
    local_58 = local_38;
  }
  ppuVar11 = &DAT_180b90220;
  ppuVar8 = &DAT_180b90220;
  if (0xf < DAT_180b90238) {
    ppuVar8 = (undefined8 **)DAT_180b90220;
  }
  plVar12 = local_58;
  sVar13 = sStack_50;
  if (sStack_50 == DAT_180b90230) {
    if (sStack_50 == 0) goto LAB_18036d87d;
    iVar5 = memcmp(local_58,ppuVar8,sStack_50);
    if (iVar5 != 0) goto LAB_18036d79e;
  }
  else {
LAB_18036d79e:
    LOCK();
    DAT_180b90200 = 0;
    UNLOCK();
    DAT_180b90230 = 0;
    ppuVar8 = &DAT_180b90220;
    if (0xf < DAT_180b90238) {
      ppuVar8 = (undefined8 **)DAT_180b90220;
    }
    *(undefined1 *)ppuVar8 = 0;
    DAT_180b90240 = 0;
    FUN_180113930(&DAT_180b90220,local_58,sStack_50);
  }
  if ((sStack_50 == 0) || (DAT_180b90200 != 0)) goto LAB_18036d87d;
  UVar6 = GetTickCount64();
  lVar2 = DAT_180b90210;
  if (UVar6 < DAT_180b90240) goto LAB_18036d87d;
  DAT_180b90240 = UVar6 + 2000;
  if (sStack_50 < 9) {
LAB_18036d952:
    lVar7 = DAT_180b90208;
    if (local_48 != (longlong *)0x0) {
      for (; lVar7 != lVar2; lVar7 = lVar7 + 0x40) {
        _Buf2 = (undefined8 *)(lVar7 + 0x20);
        if (0xf < *(ulonglong *)(lVar7 + 0x38)) {
          _Buf2 = (undefined8 *)*_Buf2;
        }
        if ((sStack_50 == *(size_t *)(lVar7 + 0x30)) &&
           ((sStack_50 == 0 || (iVar5 = memcmp(local_58,_Buf2,sStack_50), iVar5 == 0))))
        goto LAB_18036d85d;
      }
      goto LAB_18036d87d;
    }
  }
  else {
    lVar7 = *local_58 + -0x7365786f62796b73;
    if (lVar7 == 0) {
      lVar7 = (ulonglong)*(byte *)(local_58 + 1) - 0x2f;
    }
    if (lVar7 != 0) goto LAB_18036d952;
    local_38 = plVar12;
    sStack_30 = sVar13;
    cVar4 = FUN_18036c2e0(&local_38);
    if ((cVar4 == '\0') || (cVar4 = FUN_18036d340(), cVar4 == '\0')) goto LAB_18036d87d;
  }
LAB_18036d85d:
  if (0xf < DAT_180b90238) {
    ppuVar11 = (undefined8 **)DAT_180b90220;
  }
  FUN_18036e050(&DAT_180b901a0,ppuVar11);
LAB_18036d87d:
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar12 = plStack_40 + 1;
    lVar2 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar1 = (int *)((longlong)plStack_40 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40);
      }
    }
  }
  return;
}



