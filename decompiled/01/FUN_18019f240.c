// FUN_18019f240 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18019f240 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 * FUN_18019f240(undefined8 *param_1,longlong param_2)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  byte bVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  longlong *plVar10;
  longlong *plVar11;
  ULONGLONG UVar12;
  longlong lVar13;
  ulonglong uVar14;
  bool bVar15;
  longlong lVar16;
  undefined *local_58;
  longlong *local_50;
  undefined1 local_48 [16];
  
  bVar15 = false;
  local_58 = (undefined *)((ulonglong)local_58 & 0xffffffff00000000);
  if (DAT_180b0b4d8 == '\0') {
    *(undefined1 *)(param_1 + 2) = 0;
    return param_1;
  }
  local_48 = (undefined1  [16])0x0;
  plVar10 = (longlong *)FUN_180113860(&DAT_180bbe9d8);
  lVar13 = DAT_180bbe9d0;
  local_48._8_8_ = plVar10;
  local_48._0_8_ = DAT_180bbe9d0;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
  }
  LOCK();
  UNLOCK();
  bVar6 = (byte)DAT_180bbe9d8;
  DAT_180bbe9d8 = (longlong)plVar10;
  if ((bVar6 & 3) == 2) {
    FUN_1805fa36c(&DAT_180bbe9d8);
  }
  if ((lVar13 == 0) || (*(longlong *)(lVar13 + 0x10) == 0)) {
LAB_18019f2ea:
    bVar5 = true;
  }
  else {
    plVar11 = (longlong *)FUN_18019a380(&local_58);
    bVar15 = true;
    if (*plVar11 == 0) goto LAB_18019f2ea;
    bVar5 = false;
  }
  if ((bVar15) && (local_50 != (longlong *)0x0)) {
    LOCK();
    plVar11 = local_50 + 1;
    lVar16 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar16 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)local_50 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_50 + 8))(local_50);
      }
    }
  }
  if (!bVar5) {
    uVar8 = FUN_18019abd0(param_2);
    uVar14 = (((((ulonglong)(uVar8 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
               (ulonglong)(uVar8 >> 8 & 0xff)) * 0x100000001b3 ^ (ulonglong)(uVar8 >> 0x10 & 0xff))
              * 0x100000001b3 ^ (ulonglong)(uVar8 >> 0x18)) * 0x100000001b3 &
             *(ulonglong *)(lVar13 + 0x30);
    lVar16 = *(longlong *)(*(longlong *)(lVar13 + 0x18) + 8 + uVar14 * 0x10);
    lVar3 = *(longlong *)(lVar13 + 8);
    if (lVar16 == lVar3) {
LAB_18019f3d1:
      lVar16 = 0;
    }
    else {
      uVar2 = *(uint *)(lVar16 + 0x10);
      while (uVar8 != uVar2) {
        if (lVar16 == *(longlong *)(*(longlong *)(lVar13 + 0x18) + uVar14 * 0x10))
        goto LAB_18019f3d1;
        lVar16 = *(longlong *)(lVar16 + 8);
        uVar2 = *(uint *)(lVar16 + 0x10);
      }
    }
    if (lVar16 == 0) {
      lVar16 = lVar3;
    }
    if ((lVar16 != lVar3) && (*(longlong *)(lVar16 + 0x18) == param_2)) {
      iVar9 = DAT_180bb84b8;
      if (DAT_180bb84b8 == 0) {
        UVar12 = GetTickCount64();
        if (UVar12 < DAT_180bb84b0) {
          iVar9 = 0;
        }
        else {
          local_58 = &DAT_1808d8410;
          iVar9 = FUN_1805f68d0(&DAT_1808d8410);
          if (iVar9 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1805f6d44(5);
          }
          if (DAT_1808d845c == 0x7fffffff) {
            DAT_1808d845c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
            FUN_1805f6d44(6);
          }
          if ((DAT_180bb84b8 == 0) && (DAT_180bb84b0 <= UVar12)) {
            DAT_180bb84b8 = FUN_1804174b0("C_BaseEntity",0x6d279c31);
            if (DAT_180bb84b8 == 0) {
              DAT_180bb84b0 = UVar12 + 1000;
            }
            else {
              DAT_180bb84b0 = 0xffffffffffffffff;
            }
          }
          iVar9 = DAT_180bb84b8;
          FUN_1805f68fc(&DAT_1808d8410);
        }
      }
      lVar13 = FUN_18017ea70();
      *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + 1;
      if (iVar9 + param_2 == 0) {
        bVar15 = false;
      }
      else {
        local_58 = (undefined *)((ulonglong)local_58 & 0xffffffff00000000);
        cVar7 = FUN_1804514f0(&local_58,iVar9 + param_2,4);
        if (cVar7 == '\0') {
          bVar15 = false;
        }
        else {
          bVar15 = true;
        }
      }
      iVar9 = (int)local_58;
      lVar13 = FUN_18017ea70();
      if (*(int *)(lVar13 + 4) != 0) {
        *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + -1;
      }
      if (!bVar15) {
        iVar9 = 0;
      }
      if (iVar9 == *(int *)(lVar16 + 0x20)) {
        uVar4 = *(undefined8 *)(lVar16 + 0x2c);
        *param_1 = *(undefined8 *)(lVar16 + 0x24);
        param_1[1] = uVar4;
        *(undefined1 *)(param_1 + 2) = 1;
        goto LAB_18019f504;
      }
    }
  }
  *(undefined1 *)(param_1 + 2) = 0;
LAB_18019f504:
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar10 + 1;
    lVar13 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10);
      }
    }
  }
  return param_1;
}



