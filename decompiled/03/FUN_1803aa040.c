// FUN_1803aa040 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803aa040 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803aa040(ulonglong param_1,int param_2,ulonglong param_3)

{
  undefined8 uVar1;
  double dVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  int *piVar6;
  undefined *puVar7;
  ulonglong uVar8;
  ULONGLONG UVar9;
  longlong *plVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  undefined1 auStack_718 [32];
  undefined **local_6f8;
  char *local_6f0;
  double local_6e8;
  double local_6e0;
  double local_6d8;
  double local_6d0;
  longlong local_6c8;
  longlong local_6c0;
  longlong local_6b8;
  longlong local_6a8;
  undefined1 local_6a0 [16];
  undefined8 local_690;
  ulonglong local_688 [2];
  undefined1 local_678 [16];
  undefined1 local_668 [16];
  char local_658 [1544];
  ulonglong local_50;
  
  local_50 = DAT_1808d5f00 ^ (ulonglong)auStack_718;
  LOCK();
  DAT_180c64050 = DAT_180c64050 + 1;
  UNLOCK();
  local_688[0] = param_3;
  if (((DAT_1808d9bda != '\0') || (DAT_1808d9bd8 != '\x03')) || (DAT_1808d9bd9 != '\0')) {
    if (DAT_180c70270 != 0) {
      (*(code *)DAT_180c70270)();
    }
    goto LAB_1803aa52c;
  }
  lVar5 = FUN_18017ea70();
  uVar1 = *(undefined8 *)(lVar5 + 8);
  local_690 = uVar1;
  piVar6 = (int *)FUN_18017ea70();
  *piVar6 = *piVar6 + 1;
  *(char **)(piVar6 + 2) = "scene: postprocess vector";
  local_6a0 = ZEXT816(0x180808f40);
  FUN_18017bf40(local_6a0 + 8);
  puVar7 = (undefined *)FUN_1803ab5f0();
  puVar14 = &DAT_180c71380;
  if (puVar7 != (undefined *)0x0) {
    puVar14 = puVar7;
  }
  *(longlong *)(puVar14 + 0x410) = *(longlong *)(puVar14 + 0x410) + 1;
  dVar2 = DAT_180b901a0;
  iVar4 = DAT_1808d9be0;
  if (DAT_180cc9148 != '\0') {
    if (param_1 == 0) {
LAB_1803aa1b0:
      bVar3 = false;
    }
    else {
      if ((DAT_180b901a0 != *(double *)(puVar14 + 0x400)) ||
         (DAT_1808d9be0 != *(int *)(puVar14 + 0x408))) {
        local_6a8 = 0;
        FUN_1803aae70(puVar14,&local_6a8);
        *(double *)(puVar14 + 0x400) = dVar2;
        *(int *)(puVar14 + 0x408) = iVar4;
      }
      uVar12 = (uint)((param_1 >> 8 ^ param_1) >> 4) & 0x7f;
      uVar8 = 0;
      do {
        uVar11 = (ulonglong)((int)uVar8 + uVar12 & 0x7f);
        if (*(ulonglong *)(puVar14 + uVar11 * 8) == param_1) goto LAB_1803aa1b0;
        if (*(ulonglong *)(puVar14 + uVar11 * 8) == 0) {
          *(ulonglong *)(puVar14 + uVar11 * 8) = param_1;
          bVar3 = true;
          goto LAB_1803aa1b2;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < 0x80);
      *(ulonglong *)(puVar14 + (ulonglong)uVar12 * 8) = param_1;
      bVar3 = true;
    }
LAB_1803aa1b2:
    if (param_2 == 0x2acab07c) {
      *(longlong *)(puVar14 + 0x420) = *(longlong *)(puVar14 + 0x420) + 1;
    }
    else if (bVar3) {
      local_678 = (undefined1  [16])0x0;
      local_6a8 = 0;
      FUN_180373980(0,&local_6a8,0x2acab07c,local_678);
      if ((local_6a8 != 0) &&
         (*(longlong *)(puVar14 + 0x418) = *(longlong *)(puVar14 + 0x418) + 1, DAT_180c70270 != 0))
      {
        (*(code *)DAT_180c70270)(param_1,0x2acab07c);
      }
    }
  }
  if ((*(uint *)(puVar14 + 0x410) & 0x3ff) == 0) {
    UVar9 = GetTickCount64();
    dVar2 = DAT_180b901a0;
    if (*(ulonglong *)(puVar14 + 0x428) != 0) {
      if (UVar9 < *(ulonglong *)(puVar14 + 0x428)) goto LAB_1803aa312;
      FUN_18063ab10(local_658,0,0x600);
      local_6d8 = dVar2;
      local_6e0 = (double)CONCAT44(local_6e0._4_4_,(uint)(DAT_180cc9148 != '\0'));
      local_6e8 = *(double *)(puVar14 + 0x420);
      local_6f0 = *(char **)(puVar14 + 0x418);
      local_6f8 = *(undefined ***)(puVar14 + 0x410);
      FUN_18015ad60(local_658,0x600,0xffffffffffffffff,
                    "calls=%llu seeds=%llu native_ranges=%llu enabled=%d frame=%llu");
      local_6f8 = &PTR_180700558;
      if (local_658[0] != '\0') {
        local_6f8 = (undefined **)&DAT_1806bcfc0;
      }
      local_6f0 = local_658;
      FUN_1800f6900(0);
      *(undefined8 *)(puVar14 + 0x420) = 0;
      *(undefined8 *)(puVar14 + 0x418) = 0;
      *(undefined8 *)(puVar14 + 0x410) = 0;
    }
    *(ULONGLONG *)(puVar14 + 0x428) = UVar9 + 5000;
  }
LAB_1803aa312:
  local_668 = (undefined1  [16])0x0;
  FUN_180373980(0,local_688,param_2,local_668);
  if (DAT_180c70270 != 0) {
    (*(code *)DAT_180c70270)(param_1,param_2,local_688[0]);
  }
  FUN_18017bf40(local_688);
  uVar8 = local_688[0];
  uVar13 = local_688[0] - local_6a0._8_8_;
  plVar10 = (longlong *)FUN_1803ab410();
  ppuVar15 = (undefined **)(*plVar10 + 1);
  *plVar10 = (longlong)ppuVar15;
  lVar5 = plVar10[1];
  plVar10[1] = lVar5 + uVar13;
  lVar16 = plVar10[3] + (ulonglong)(999999 < uVar13);
  plVar10[3] = lVar16;
  lVar17 = plVar10[4] + (ulonglong)(4999999 < uVar13);
  plVar10[4] = lVar17;
  lVar18 = plVar10[5] + (ulonglong)(15999999 < uVar13);
  plVar10[5] = lVar18;
  uVar11 = plVar10[2];
  if ((ulonglong)plVar10[2] < uVar13) {
    plVar10[2] = uVar13;
    uVar11 = uVar13;
  }
  if ((uVar8 == plVar10[7]) || (plVar10[7] <= (longlong)uVar8)) {
    local_6d8 = (double)(longlong)(uVar8 - plVar10[6]) / 1000000.0;
    dVar2 = (double)(lVar5 + uVar13);
    local_6d0 = 0.0;
    if (0.0 < local_6d8) {
      local_6d0 = (dVar2 / 1000.0) / local_6d8;
    }
    local_6e0 = dVar2 / 1000000.0;
    local_6e8 = (double)uVar11 / 1000.0;
    local_6f0 = (char *)((dVar2 / (double)ppuVar15) / 1000.0);
    local_6f8 = ppuVar15;
    local_6c8 = lVar16;
    local_6c0 = lVar17;
    local_6b8 = lVar18;
    FUN_1801af8a0(dVar2 / (double)ppuVar15,local_6f0,local_6a0._0_8_);
    plVar10[2] = 0;
    plVar10[1] = 0;
    *plVar10 = 0;
    plVar10[5] = 0;
    plVar10[4] = 0;
    plVar10[3] = 0;
    plVar10[6] = uVar8;
    plVar10[7] = uVar8 + 5000000000;
  }
  piVar6 = (int *)FUN_18017ea70();
  *(undefined8 *)(piVar6 + 2) = uVar1;
  if (*piVar6 != 0) {
    *piVar6 = *piVar6 + -1;
  }
LAB_1803aa52c:
  LOCK();
  DAT_180c64050 = DAT_180c64050 + -1;
  UNLOCK();
}



