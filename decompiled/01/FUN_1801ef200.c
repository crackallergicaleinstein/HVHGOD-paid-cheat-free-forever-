// FUN_1801ef200 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801ef200 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1801ef200(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  size_t _Size;
  byte bVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *_Buf1;
  undefined1 *puVar8;
  undefined8 ****ppppuVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 auStack_e8 [32];
  int local_c8;
  undefined8 ****local_c0;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined8 ****local_68 [2];
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_e8;
  local_88._0_8_ = param_1;
  uVar13 = 0;
  FUN_1800ce230(&DAT_180cc8140,local_68,param_2);
  if (local_58 == 0) {
    *(undefined1 *)(param_1 + 0xd8) = 0;
    goto LAB_1801ef51d;
  }
  local_88 = (undefined1  [16])0x0;
  plVar5 = (longlong *)FUN_180113860(&DAT_180bb9388);
  lVar11 = DAT_180bb9380;
  local_88._8_8_ = plVar5;
  local_88._0_8_ = DAT_180bb9380;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  LOCK();
  UNLOCK();
  bVar3 = (byte)DAT_180bb9388;
  DAT_180bb9388 = (longlong)plVar5;
  if ((bVar3 & 3) == 2) {
    FUN_1805fa36c(&DAT_180bb9388);
  }
  ppppuVar9 = local_68;
  if (0xf < local_50) {
    ppppuVar9 = local_68[0];
  }
  if (*(char *)(lVar11 + 0xc0) == '\0') {
LAB_1801ef4d5:
    *(undefined1 *)(param_1 + 0xd8) = 0;
  }
  else {
    local_b8 = (undefined1  [16])0x0;
    local_a8 = (undefined1  [16])0x0;
    FUN_18015ba30(local_b8,ppppuVar9,local_58);
    puVar8 = local_b8;
    if (0xf < (ulonglong)local_a8._8_8_) {
      puVar8 = (undefined1 *)local_b8._0_8_;
    }
    uVar10 = 0xcbf29ce484222325;
    uVar14 = 0xcbf29ce484222325;
    uVar7 = 0;
    if (local_a8._0_8_ != 0) {
      do {
        uVar14 = (uVar14 ^ (byte)puVar8[uVar7]) * 0x100000001b3;
        uVar7 = uVar7 + 1;
      } while (uVar7 < (ulonglong)local_a8._0_8_);
    }
    lVar6 = FUN_180177b00(lVar11 + 0x50,local_78,local_b8,uVar14);
    lVar6 = *(longlong *)(lVar6 + 8);
    if (lVar6 == 0) {
      lVar6 = *(longlong *)(lVar11 + 0x58);
    }
    FUN_18015c010(local_b8);
    if (lVar6 == *(longlong *)(lVar11 + 0x58)) {
LAB_1801ef42d:
      AcquireSRWLockExclusive((PSRWLOCK)&DAT_180cc8158);
      if (param_2 - 2U < 2) {
        lVar11 = (longlong)param_2 * 0x20;
        puVar12 = (undefined8 *)(&DAT_180cc8120 + lVar11);
        ppppuVar9 = local_68;
        if (0xf < local_50) {
          ppppuVar9 = local_68[0];
        }
        _Size = *(size_t *)(&DAT_180cc8130 + lVar11);
        uVar13 = *(ulonglong *)(&DAT_180cc8138 + lVar11);
        _Buf1 = puVar12;
        if (0xf < uVar13) {
          _Buf1 = (undefined8 *)*puVar12;
        }
        if ((_Size == local_58) &&
           ((_Size == 0 || (iVar4 = memcmp(_Buf1,ppppuVar9,_Size), iVar4 == 0)))) {
          *(undefined8 *)(&DAT_180cc8130 + lVar11) = 0;
          if (0xf < uVar13) {
            puVar12 = (undefined8 *)*puVar12;
          }
          *(undefined1 *)puVar12 = 0;
          ReleaseSRWLockExclusive((PSRWLOCK)&DAT_180cc8158);
          local_c0 = local_68;
          if (0xf < local_50) {
            local_c0 = local_68[0];
          }
          local_c8 = param_2;
          FUN_1801f27d0();
          goto LAB_1801ef4d5;
        }
      }
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_180cc8158);
      goto LAB_1801ef4d5;
    }
    if (((ulonglong)((*(longlong *)(lVar11 + 0x40) - *(longlong *)(lVar11 + 0x38)) / 0xd8) <=
         *(ulonglong *)(lVar6 + 0x30)) ||
       (*(char *)(*(ulonglong *)(lVar6 + 0x30) * 0xd8 + 0xc0 + *(longlong *)(lVar11 + 0x38)) == '\0'
       )) goto LAB_1801ef42d;
    ppppuVar9 = local_68;
    if (0xf < local_50) {
      ppppuVar9 = local_68[0];
    }
    if (local_58 != 0) {
      do {
        uVar10 = (uVar10 ^ *(byte *)((longlong)ppppuVar9 + uVar13)) * 0x100000001b3;
        uVar13 = uVar13 + 1;
      } while (uVar13 < local_58);
    }
    lVar6 = FUN_180177b00(lVar11 + 0x50,local_78,local_68,uVar10);
    lVar6 = *(longlong *)(lVar6 + 8);
    if ((lVar6 == 0) || (lVar6 == *(longlong *)(lVar11 + 0x58))) goto LAB_1801ef4d5;
    FUN_180195650(param_1,*(longlong *)(lVar6 + 0x30) * 0xd8 + *(longlong *)(lVar11 + 0x38));
    *(undefined1 *)(param_1 + 0xd8) = 1;
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar11 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
LAB_1801ef51d:
  FUN_18015c010(local_68);
}



