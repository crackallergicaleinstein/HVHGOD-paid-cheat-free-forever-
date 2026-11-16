// FUN_180363d10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180363d10 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180363d10(undefined8 *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  int *piVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint *puVar8;
  uint *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  int iVar13;
  undefined8 extraout_XMM0_Qa;
  undefined1 auStack_1588 [32];
  ulonglong local_1568;
  undefined1 local_1560;
  undefined1 local_1558;
  undefined4 local_1550;
  undefined4 uStack_154c;
  undefined4 uStack_1548;
  undefined4 uStack_1544;
  undefined4 uStack_1540;
  undefined4 uStack_153c;
  undefined4 uStack_1538;
  undefined4 uStack_1534;
  undefined4 uStack_1530;
  undefined4 uStack_152c;
  char *local_1528;
  undefined8 local_1520;
  undefined1 local_1518 [8];
  ulonglong local_1510;
  undefined8 local_518 [10];
  undefined1 local_4c8 [1200];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x180363d32;
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_1588;
  puVar8 = (uint *)FUN_1803dfb00(param_1,*(undefined8 *)*param_1);
  if ((puVar8 != (uint *)0x0) &&
     (puVar9 = (uint *)FUN_1803dfb00(extraout_XMM0_Qa,*(undefined8 *)*param_1),
     puVar9 != (uint *)0x0)) {
    puVar8[0] = 0;
    puVar8[1] = 0;
    puVar8[2] = 0;
    puVar8[3] = 0;
    puVar8[4] = 0;
    puVar8[5] = 0;
    puVar8[6] = 0;
    puVar8[7] = 0;
    puVar8[8] = 0;
    puVar8[9] = 0;
    uStack_154c = 0;
    uStack_1548 = 0;
    uStack_1544 = 0;
    uStack_1540 = 0;
    uStack_153c = 0;
    uStack_1538 = 0;
    uStack_1534 = 0;
    uStack_1530 = 0;
    uStack_152c = 0;
    local_1550 = 0;
    puVar9[0] = 0;
    puVar9[1] = 0;
    puVar9[2] = 0;
    puVar9[3] = 0;
    puVar9[4] = 0;
    puVar9[5] = 0;
    puVar9[6] = 0;
    puVar9[7] = 0;
    puVar9[8] = 0;
    puVar9[9] = 0;
    puVar8[2] = 4;
    puVar8[3] = 0;
    *puVar8 = *puVar8 | 3;
    *(undefined1 *)(puVar8 + 4) = 1;
    uVar1 = *(uint *)param_1[1];
    *puVar8 = *puVar8 | 4;
    puVar8[5] = uVar1;
    puVar9[2] = 4;
    puVar9[3] = 0;
    *puVar9 = *puVar9 | 3;
    *(undefined1 *)(puVar9 + 4) = 0;
    uVar1 = *(uint *)(param_1[1] + 4);
    *puVar9 = *puVar9 | 4;
    puVar9[5] = uVar1;
    puVar10 = (undefined8 *)param_1[2];
    lVar12 = 10;
    puVar11 = local_518;
    do {
      uVar2 = puVar10[1];
      *puVar11 = *puVar10;
      puVar11[1] = uVar2;
      uVar2 = puVar10[3];
      puVar11[2] = puVar10[2];
      puVar11[3] = uVar2;
      uVar2 = puVar10[5];
      puVar11[4] = puVar10[4];
      puVar11[5] = uVar2;
      uVar2 = puVar10[7];
      puVar11[6] = puVar10[6];
      puVar11[7] = uVar2;
      uVar2 = puVar10[9];
      puVar11[8] = puVar10[8];
      puVar11[9] = uVar2;
      uVar2 = puVar10[0xb];
      puVar11[10] = puVar10[10];
      puVar11[0xb] = uVar2;
      uVar2 = puVar10[0xd];
      puVar11[0xc] = puVar10[0xc];
      puVar11[0xd] = uVar2;
      uVar2 = puVar10[0xf];
      puVar11[0xe] = puVar10[0xe];
      puVar11[0xf] = uVar2;
      puVar10 = puVar10 + 0x10;
      lVar12 = lVar12 + -1;
      puVar11 = puVar11 + 0x10;
    } while (lVar12 != 0);
    uVar5 = *(undefined8 *)(puVar8 + 2);
    uVar6 = *(undefined8 *)(puVar8 + 4);
    uVar7 = *(undefined8 *)(puVar8 + 6);
    uVar2 = *(undefined8 *)(puVar8 + 8);
    piVar3 = (int *)param_1[3];
    lVar12 = (longlong)*piVar3;
    local_518[lVar12 * 5] = *(undefined8 *)puVar8;
    local_518[lVar12 * 5 + 1] = uVar5;
    local_518[lVar12 * 5 + 2] = uVar6;
    local_518[lVar12 * 5 + 3] = uVar7;
    local_518[lVar12 * 5 + 4] = uVar2;
    uVar5 = *(undefined8 *)(puVar9 + 2);
    uVar6 = *(undefined8 *)(puVar9 + 4);
    uVar7 = *(undefined8 *)(puVar9 + 6);
    uVar2 = *(undefined8 *)(puVar9 + 8);
    lVar12 = (longlong)*piVar3;
    local_518[lVar12 * 5 + 5] = *(undefined8 *)puVar9;
    local_518[lVar12 * 5 + 6] = uVar5;
    local_518[lVar12 * 5 + 7] = uVar6;
    local_518[lVar12 * 5 + 8] = uVar7;
    local_518[lVar12 * 5 + 9] = uVar2;
    iVar13 = *piVar3;
    lVar12 = ((longlong)(local_4c8 + (longlong)iVar13 * 0x28) - (longlong)local_518) / 0x28;
    if (lVar12 < 0x21) {
      FUN_180364f50(local_518);
    }
    else {
      FUN_180334a50(local_1518,lVar12 - lVar12 / 2);
      local_1560 = local_1558;
      local_1568 = local_1510;
      FUN_180365060(local_518,local_4c8 + (longlong)iVar13 * 0x28,lVar12);
      if (0x66 < local_1510) {
        if (DAT_180c7df30 == 0) {
          local_1528 = "tier0.dll:g_pMemAlloc";
          local_1520 = 0x15;
          DAT_180c7df30 = FUN_180451750(&local_1528);
        }
        (**(code **)(**(longlong **)DAT_180c7df30 + 0x18))();
      }
    }
    iVar13 = 0;
    if (0 < *(int *)param_1[3] + 2) {
      lVar12 = 0;
      puVar10 = local_518;
      do {
        uVar5 = puVar10[1];
        uVar6 = puVar10[2];
        uVar7 = puVar10[3];
        uVar2 = puVar10[4];
        lVar4 = *(longlong *)(*(longlong *)(*(longlong *)param_1[4] + 0x18) + 8 + lVar12);
        puVar11 = (undefined8 *)0x0;
        if (lVar4 != 0) {
          puVar11 = (undefined8 *)(lVar4 + 0x10);
        }
        *puVar11 = *puVar10;
        puVar11[1] = uVar5;
        puVar11[2] = uVar6;
        puVar11[3] = uVar7;
        puVar11[4] = uVar2;
        iVar13 = iVar13 + 1;
        puVar10 = puVar10 + 5;
        lVar12 = lVar12 + 8;
      } while (iVar13 < *(int *)param_1[3] + 2);
    }
  }
}



