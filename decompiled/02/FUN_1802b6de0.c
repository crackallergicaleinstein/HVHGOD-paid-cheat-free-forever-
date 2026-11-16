// FUN_1802b6de0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802b6de0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802b6de0(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  double dVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  int *piVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined **ppuVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 uVar14;
  int iVar15;
  undefined4 uVar16;
  undefined1 auStack_6e8 [32];
  undefined **local_6c8;
  char *local_6c0;
  double local_6b8;
  double local_6b0;
  double local_6a8;
  double local_6a0;
  longlong local_698;
  longlong local_690;
  longlong local_688;
  ulonglong local_678;
  undefined1 local_670 [16];
  undefined8 local_660;
  longlong lStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  char local_638 [1536];
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_6e8;
  lVar5 = FUN_18017ea70();
  uVar1 = *(ulonglong *)(lVar5 + 8);
  local_678 = uVar1;
  piVar6 = (int *)FUN_18017ea70();
  *piVar6 = *piVar6 + 1;
  *(char **)(piVar6 + 2) = "camera: override view";
  local_670 = ZEXT816(0x1807d1690);
  FUN_18017bf40(local_670 + 8);
  cVar3 = DAT_180c6e700;
  if (param_2 == 0) {
    LOCK();
    DAT_180c6e700 = '\x01';
    UNLOCK();
    if (cVar3 == '\0') {
      FUN_18063ab10(local_638,0,0x600);
      FUN_18015ad60(local_638,0x600,0xffffffffffffffff,"reason=null");
      local_6c8 = &PTR_180700558;
      if (local_638[0] != '\0') {
        local_6c8 = (undefined **)&DAT_1806bcfc0;
      }
      local_6c0 = local_638;
      FUN_1800f6900(2);
    }
  }
  else {
    AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
    local_660 = _DAT_180bb8890;
    lStack_658 = lRam0000000180bb8898;
    uStack_650 = uRam0000000180bb88a0;
    uStack_648 = uRam0000000180bb88a8;
    iVar15 = _DAT_180bb88b0;
    uVar16 = uRam0000000180bb88b8;
    ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
    lVar5 = lStack_658;
    if (((((char)uVar16 != '\0') && (DAT_180bb88c9 == '\0')) && (1 < iVar15)) && (lStack_658 != 0))
    {
      uVar14 = FUN_1802b75e0();
      FUN_1802b8330(uVar14,param_2,lVar5);
    }
    FUN_1802b8720();
  }
  FUN_18017bf40(&local_678);
  uVar4 = local_678;
  uVar9 = local_678 - local_670._8_8_;
  plVar7 = (longlong *)FUN_1802b8b70();
  ppuVar10 = (undefined **)(*plVar7 + 1);
  *plVar7 = (longlong)ppuVar10;
  lVar5 = plVar7[1];
  plVar7[1] = lVar5 + uVar9;
  lVar11 = plVar7[3] + (ulonglong)(999999 < uVar9);
  plVar7[3] = lVar11;
  lVar12 = plVar7[4] + (ulonglong)(4999999 < uVar9);
  plVar7[4] = lVar12;
  lVar13 = plVar7[5] + (ulonglong)(15999999 < uVar9);
  plVar7[5] = lVar13;
  uVar8 = plVar7[2];
  if ((ulonglong)plVar7[2] < uVar9) {
    plVar7[2] = uVar9;
    uVar8 = uVar9;
  }
  if ((uVar4 == plVar7[7]) || (plVar7[7] <= (longlong)uVar4)) {
    local_6a8 = (double)(longlong)(uVar4 - plVar7[6]) / 1000000.0;
    dVar2 = (double)(lVar5 + uVar9);
    local_6a0 = 0.0;
    if (0.0 < local_6a8) {
      local_6a0 = (dVar2 / 1000.0) / local_6a8;
    }
    local_6b0 = dVar2 / 1000000.0;
    local_6b8 = (double)uVar8 / 1000.0;
    local_6c0 = (char *)((dVar2 / (double)ppuVar10) / 1000.0);
    local_6c8 = ppuVar10;
    local_698 = lVar11;
    local_690 = lVar12;
    local_688 = lVar13;
    FUN_1801af8a0(dVar2 / (double)ppuVar10,local_6c0,local_670._0_8_);
    plVar7[2] = 0;
    plVar7[1] = 0;
    *plVar7 = 0;
    plVar7[5] = 0;
    plVar7[4] = 0;
    plVar7[3] = 0;
    plVar7[6] = uVar4;
    plVar7[7] = uVar4 + 5000000000;
  }
  piVar6 = (int *)FUN_18017ea70();
  *(ulonglong *)(piVar6 + 2) = uVar1;
  if (*piVar6 != 0) {
    *piVar6 = *piVar6 + -1;
  }
}



