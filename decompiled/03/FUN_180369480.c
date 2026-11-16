// FUN_180369480 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180369480 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180369480(undefined8 *param_1,float param_2,char param_3,char param_4)

{
  undefined8 uVar1;
  byte bVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint *puVar10;
  uint *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 auVar17 [64];
  undefined1 auStack_15b8 [32];
  ulonglong local_1598;
  undefined1 local_1590;
  undefined1 local_1588;
  undefined4 local_1580;
  undefined4 uStack_157c;
  undefined4 uStack_1578;
  undefined4 uStack_1574;
  undefined4 uStack_1570;
  undefined4 uStack_156c;
  undefined4 uStack_1568;
  undefined4 uStack_1564;
  undefined4 uStack_1560;
  undefined4 uStack_155c;
  char *local_1558;
  undefined8 local_1550;
  undefined8 local_1548;
  ulonglong local_1540;
  undefined8 local_548 [160];
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_15b8;
  FUN_180358460(*param_1);
  if (param_3 != '\0') {
    if (*(char *)param_1[1] == '\0') {
    }
    *(undefined4 *)(*(longlong *)param_1[2] + 8) = 0;
    iVar14 = 0;
    if (0 < *(int *)param_1[3]) {
      lVar15 = 0;
      do {
        if ((iVar14 <= *(int *)param_1[4]) || (*(int *)param_1[5] + *(int *)param_1[4] <= iVar14)) {
          puVar10 = (uint *)FUN_1803dfb00();
          if (puVar10 == (uint *)0x0) goto LAB_18036982b;
          lVar16 = param_1[6];
          puVar12 = (undefined8 *)(lVar16 + lVar15);
          uVar1 = puVar12[1];
          uVar7 = puVar12[2];
          uVar8 = puVar12[3];
          *(undefined8 *)puVar10 = *puVar12;
          *(undefined8 *)(puVar10 + 2) = uVar1;
          *(undefined8 *)(puVar10 + 4) = uVar7;
          *(undefined8 *)(puVar10 + 6) = uVar8;
          puVar11 = (uint *)(lVar16 + 0x20 + lVar15);
          uVar6 = puVar11[1];
          puVar10[8] = *puVar11;
          puVar10[9] = uVar6;
          if ((param_4 != '\0') && (iVar14 == *(int *)param_1[4])) {
            puVar10[6] = 0;
            puVar10[7] = 0;
            *puVar10 = *puVar10 | 0x18;
          }
        }
        iVar14 = iVar14 + 1;
        lVar15 = lVar15 + 0x28;
      } while (iVar14 < *(int *)param_1[3]);
    }
  }
  if (*(char *)param_1[7] == '\0') {
LAB_180369656:
    if (0.0 <= param_2) {
      auVar17 = ZEXT864(0);
      puVar10 = (uint *)FUN_1803dfb00();
      if ((puVar10 == (uint *)0x0) || (puVar11 = (uint *)FUN_1803dfb00(), puVar11 == (uint *)0x0))
      goto LAB_18036982b;
      puVar10[0] = 0;
      puVar10[1] = 0;
      puVar10[2] = 0;
      puVar10[3] = 0;
      puVar10[4] = 0;
      puVar10[5] = 0;
      puVar10[6] = 0;
      puVar10[7] = 0;
      puVar10[8] = 0;
      puVar10[9] = 0;
      uStack_157c = 0;
      uStack_1578 = 0;
      uStack_1574 = 0;
      uStack_1570 = 0;
      uStack_156c = 0;
      uStack_1568 = 0;
      uStack_1564 = 0;
      uStack_1560 = 0;
      uStack_155c = 0;
      local_1580 = 0;
      puVar11[0] = 0;
      puVar11[1] = 0;
      puVar11[2] = 0;
      puVar11[3] = 0;
      puVar11[4] = 0;
      puVar11[5] = 0;
      puVar11[6] = 0;
      puVar11[7] = 0;
      puVar11[8] = 0;
      puVar11[9] = 0;
      puVar10[2] = 4;
      puVar10[3] = 0;
      *puVar10 = *puVar10 | 3;
      *(undefined1 *)(puVar10 + 4) = 1;
      bVar2 = *(byte *)(param_1[10] + 9);
      *puVar10 = *puVar10 | 4;
      auVar5 = vpcmpeqd_avx(ZEXT116(bVar2),SUB6416(ZEXT464(0),0));
      auVar5 = vblendvps_avx(SUB6416(ZEXT464(0x3f7c0000),0),auVar17._0_16_,auVar5);
      puVar10[5] = auVar5._0_4_;
      puVar11[2] = 4;
      puVar11[3] = 0;
      *(undefined1 *)(puVar11 + 4) = 0;
      *puVar11 = *puVar11 | 7;
      puVar11[5] = (uint)param_2;
    }
    FUN_18063ab10(local_548,0,0x500);
    puVar12 = local_548;
    lVar15 = 0x20;
    do {
      *(undefined8 *)((longlong)puVar12 + 4) = 0;
      *(undefined8 *)((longlong)puVar12 + 0xc) = 0;
      *(undefined8 *)((longlong)puVar12 + 0x14) = 0;
      *(undefined8 *)((longlong)puVar12 + 0x1c) = 0;
      *(undefined4 *)((longlong)puVar12 + 0x24) = 0;
      *(undefined4 *)puVar12 = 0;
      puVar12 = puVar12 + 5;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    lVar15 = (longlong)*(int *)(*(longlong *)param_1[2] + 8);
    if (0 < lVar15) {
      plVar3 = (longlong *)param_1[9];
      lVar16 = 0;
      puVar12 = local_548;
      do {
        lVar4 = *(longlong *)(*(longlong *)(*plVar3 + 0x18) + 8 + lVar16 * 8);
        puVar13 = (undefined8 *)0x0;
        if (lVar4 != 0) {
          puVar13 = (undefined8 *)(lVar4 + 0x10);
        }
        uVar7 = puVar13[1];
        uVar8 = puVar13[2];
        uVar9 = puVar13[3];
        uVar1 = puVar13[4];
        *puVar12 = *puVar13;
        puVar12[1] = uVar7;
        puVar12[2] = uVar8;
        puVar12[3] = uVar9;
        puVar12[4] = uVar1;
        lVar16 = lVar16 + 1;
        puVar12 = puVar12 + 5;
      } while (lVar16 < lVar15);
    }
    lVar16 = (lVar15 * 0x28) / 0x28;
    if (lVar16 < 0x21) {
      FUN_180364f50(local_548,local_548 + lVar15 * 5);
    }
    else {
      FUN_180334a50(&local_1548,lVar16 - lVar16 / 2);
      local_1590 = local_1588;
      local_1598 = local_1540;
      FUN_180365060(local_548,local_548 + lVar15 * 5,lVar16,local_1548);
      if (0x66 < local_1540) {
        if (DAT_180c7df30 == (undefined8 *)0x0) {
          local_1558 = "tier0.dll:g_pMemAlloc";
          local_1550 = 0x15;
          DAT_180c7df30 = (undefined8 *)FUN_180451750(&local_1558);
        }
        (**(code **)(*(longlong *)*DAT_180c7df30 + 0x18))((longlong *)*DAT_180c7df30,local_1548);
      }
    }
    if (0 < lVar15) {
      lVar16 = 0;
      puVar12 = local_548;
      do {
        uVar7 = puVar12[1];
        uVar8 = puVar12[2];
        uVar9 = puVar12[3];
        uVar1 = puVar12[4];
        lVar4 = *(longlong *)(*(longlong *)(*(longlong *)param_1[9] + 0x18) + 8 + lVar16 * 8);
        puVar13 = (undefined8 *)0x0;
        if (lVar4 != 0) {
          puVar13 = (undefined8 *)(lVar4 + 0x10);
        }
        *puVar13 = *puVar12;
        puVar13[1] = uVar7;
        puVar13[2] = uVar8;
        puVar13[3] = uVar9;
        puVar13[4] = uVar1;
        lVar16 = lVar16 + 1;
        puVar12 = puVar12 + 5;
      } while (lVar16 < lVar15);
    }
  }
  else {
    *(ulonglong *)(*(longlong *)param_1[8] + 0x60) =
         *(ulonglong *)(*(longlong *)param_1[8] + 0x60) & 0xfffffffffffffffd;
    *(ulonglong *)(*(longlong *)param_1[8] + 0x68) =
         *(ulonglong *)(*(longlong *)param_1[8] + 0x68) & 0xfffffffffffffffd;
    *(ulonglong *)(*(longlong *)param_1[8] + 0x70) =
         *(ulonglong *)(*(longlong *)param_1[8] + 0x70) & 0xfffffffffffffffd;
    iVar14 = 0;
    if (0 < *(int *)(*(longlong *)param_1[2] + 8)) {
      lVar15 = 0;
      do {
        lVar16 = *(longlong *)(*(longlong *)(*(longlong *)param_1[9] + 0x18) + 8 + lVar15);
        puVar10 = (uint *)0x0;
        if (lVar16 != 0) {
          puVar10 = (uint *)(lVar16 + 0x10);
        }
        *puVar10 = *puVar10 | 1;
        *(ulonglong *)(puVar10 + 2) = *(ulonglong *)(puVar10 + 2) & 0xfffffffffffffffd;
        iVar14 = iVar14 + 1;
        lVar15 = lVar15 + 8;
      } while (iVar14 < *(int *)(*(longlong *)param_1[2] + 8));
    }
    puVar10 = (uint *)FUN_1803dfb00();
    if (puVar10 != (uint *)0x0) {
      uStack_157c = 0;
      uStack_1578 = 0;
      uStack_1574 = 0;
      uStack_1570 = 0;
      uStack_156c = 0;
      uStack_1568 = 0;
      uStack_1564 = 0;
      uStack_1560 = 0;
      uStack_155c = 0;
      local_1580 = 0;
      puVar10[0] = 0;
      puVar10[1] = 0;
      puVar10[2] = 0;
      puVar10[3] = 0;
      puVar10[4] = 0;
      puVar10[5] = 0;
      puVar10[6] = 0;
      puVar10[7] = 0;
      puVar10[8] = 0;
      puVar10[9] = 0;
      puVar10[2] = 2;
      puVar10[3] = 0;
      *(undefined1 *)(puVar10 + 4) = 0;
      *puVar10 = *puVar10 | 7;
      puVar10[5] = 0;
      goto LAB_180369656;
    }
LAB_18036982b:
    FUN_180358460(*param_1);
  }
}



