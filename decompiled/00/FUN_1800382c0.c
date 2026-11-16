// FUN_1800382c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800382c0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1800382c0(undefined8 *param_1)

{
  uint *puVar1;
  size_t sVar2;
  undefined8 uVar3;
  ULONGLONG UVar4;
  int *piVar5;
  char cVar6;
  int iVar7;
  ULONGLONG UVar8;
  ulonglong uVar9;
  longlong lVar10;
  int *piVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined8 in_stack_ffffffffffffff38;
  uint uVar15;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  int *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_60;
  int iStack_58;
  undefined4 uStack_54;
  int *local_50;
  undefined4 local_44;
  undefined8 *local_40;
  undefined8 local_38;
  
  uVar15 = (uint)((ulonglong)in_stack_ffffffffffffff38 >> 0x20);
  local_38 = 0xfffffffffffffffe;
  if (DAT_180bacb88 != 0) {
LAB_1800382eb:
    if (DAT_1808d4078 < 0x10) {
      sVar2 = param_1[1];
      puVar12 = &DAT_1808d4060;
    }
    else {
      sVar2 = param_1[1];
      puVar12 = DAT_1808d4060;
    }
    if ((sVar2 == DAT_1808d4070) &&
       (((DAT_1808d4070 == 0 || (iVar7 = memcmp((void *)*param_1,puVar12,DAT_1808d4070), iVar7 == 0)
         ) && (UVar4 = DAT_180baccb8, (DAT_180baccb0 & 1) != 0)))) {
      UVar8 = GetTickCount64();
      local_40 = (undefined8 *)
                 (CONCAT71((int7)(UVar8 - UVar4 >> 8),UVar8 - UVar4 < 10000) & 0xffffffff);
      return (ulonglong)local_40;
    }
    return 0;
  }
  local_a8 = *(undefined4 *)param_1;
  uStack_a4 = *(undefined4 *)((longlong)param_1 + 4);
  uStack_a0 = *(undefined4 *)(param_1 + 1);
  uStack_9c = *(undefined4 *)((longlong)param_1 + 0xc);
  cVar6 = FUN_1800488f0(&local_a8);
  if (cVar6 == '\0') {
    return 0;
  }
  uVar13 = param_1[1];
  if (DAT_1808d4078 < uVar13) {
    FUN_180049120(&DAT_1808d4060,uVar13);
  }
  else {
    if (DAT_1808d4078 < 0x10) {
      puVar12 = &DAT_1808d4060;
    }
    else {
      puVar12 = DAT_1808d4060;
    }
    DAT_1808d4070 = uVar13;
    FUN_18063aed0(puVar12,*param_1,uVar13);
    *(undefined1 *)((longlong)puVar12 + uVar13) = 0;
  }
  DAT_180baccb0 = 1;
  DAT_180baccb8 = GetTickCount64();
  local_78 = 0;
  uStack_70 = 0;
  local_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  uVar13 = param_1[1];
  if ((longlong)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_18015bb70();
  }
  uVar3 = *param_1;
  if (uVar13 < 0x10) {
    puVar12 = &local_88;
    uVar14 = 0xf;
  }
  else {
    uVar9 = uVar13 | 0xf;
    uVar14 = 0x16;
    if (0x16 < uVar9) {
      uVar14 = uVar9;
    }
    if (uVar9 < 0xfff) {
      puVar12 = (undefined8 *)FUN_180454770(uVar14 + 1);
    }
    else {
      lVar10 = FUN_180454770(uVar14 + 0x28);
      puVar12 = (undefined8 *)(lVar10 + 0x27U & 0xffffffffffffffe0);
      puVar12[-1] = lVar10;
    }
    local_88 = puVar12;
  }
  local_78 = uVar13;
  uStack_70 = uVar14;
  FUN_18063aed0(puVar12,uVar3,uVar13);
  *(undefined1 *)((longlong)puVar12 + uVar13) = 0;
  local_60 = 0;
  iStack_58 = 0;
  local_44 = 0;
  piVar11 = (int *)FUN_180454770(0x20);
  piVar11[0] = 1;
  piVar11[1] = 2;
  piVar11[2] = 0;
  piVar11[3] = 0;
  piVar11[4] = 0;
  piVar11[5] = 0;
  piVar11[6] = 0;
  LOCK();
  *piVar11 = *piVar11 + 1;
  UNLOCK();
  local_90 = piVar11;
  local_50 = piVar11;
  puVar12 = (undefined8 *)FUN_180454770(0x28);
  *puVar12 = piVar11;
  *(undefined4 *)(puVar12 + 3) = (undefined4)local_78;
  *(undefined4 *)((longlong)puVar12 + 0x1c) = local_78._4_4_;
  *(undefined4 *)(puVar12 + 4) = (undefined4)uStack_70;
  *(undefined4 *)((longlong)puVar12 + 0x24) = uStack_70._4_4_;
  *(undefined4 *)(puVar12 + 1) = (undefined4)local_88;
  *(undefined4 *)((longlong)puVar12 + 0xc) = local_88._4_4_;
  *(undefined4 *)(puVar12 + 2) = (undefined4)uStack_80;
  *(undefined4 *)((longlong)puVar12 + 0x14) = uStack_80._4_4_;
  local_78 = 0;
  uStack_70 = 0xf;
  local_88 = (undefined8 *)((ulonglong)local_88 & 0xffffffffffffff00);
  local_60 = FUN_18060b000(0,0,FUN_180048a40,puVar12,(ulonglong)uVar15 << 0x20,&iStack_58);
  if (local_60 == 0) {
    iStack_58 = 0;
    local_40 = puVar12;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  FUN_18015a450(&DAT_180bacb80);
  piVar5 = local_50;
  iVar7 = iStack_58;
  piVar11 = DAT_180bacb90;
  if (DAT_180bacb88 == 0) {
    _DAT_180bacb80 = (undefined4)local_60;
    uRam0000000180bacb84 = local_60._4_4_;
    local_60 = 0;
    iStack_58 = 0;
    DAT_180bacb88 = iVar7;
    uRam0000000180bacb8c = uStack_54;
    local_50 = (int *)0x0;
    DAT_180bacb90 = piVar5;
    if (piVar11 != (int *)0x0) {
      LOCK();
      puVar1 = (uint *)(piVar11 + 1);
      uVar15 = *puVar1;
      *puVar1 = *puVar1 - 2;
      UNLOCK();
      if ((uVar15 & 0xfffffffe) == 2) {
        LOCK();
        *piVar11 = *piVar11 + -1;
        UNLOCK();
        if (*piVar11 == 0) {
          FUN_1804547d0(piVar11,0x20);
        }
      }
    }
    FUN_18015a450(&local_60);
    if (local_50 != (int *)0x0) {
      LOCK();
      puVar1 = (uint *)(local_50 + 1);
      uVar15 = *puVar1;
      *puVar1 = *puVar1 - 2;
      UNLOCK();
      if ((uVar15 & 0xfffffffe) == 2) {
        LOCK();
        *local_50 = *local_50 + -1;
        UNLOCK();
        if (*local_50 == 0) {
          FUN_1804547d0(local_50,0x20);
        }
      }
    }
    if (iStack_58 == 0) {
      if (0xf < uStack_70) {
        uVar13 = uStack_70 + 1;
        uVar14 = (ulonglong)local_88;
        if (0xfff < uVar13) {
          uVar14 = *(ulonglong *)((longlong)local_88 - 8);
          if (0x1f < ((longlong)local_88 - 8U) - uVar14) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          uVar13 = uStack_70 + 0x28;
        }
        FUN_1804547d0(uVar14,uVar13);
      }
      goto LAB_1800382eb;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_18060ab3c();
}



