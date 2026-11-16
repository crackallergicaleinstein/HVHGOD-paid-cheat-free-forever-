// FUN_180488630 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180488630 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180488630(undefined8 param_1,char *param_2)

{
  undefined4 *puVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  longlong *plVar14;
  float fVar15;
  undefined1 in_ZMM2 [64];
  undefined8 unaff_XMM6_Qa;
  undefined8 unaff_XMM6_Qb;
  undefined1 auVar16 [64];
  undefined1 auVar17 [64];
  float fVar18;
  float fVar19;
  undefined1 auStack_d8 [32];
  float local_b8;
  char *local_b0;
  char *local_a8;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  undefined4 local_88 [6];
  ulonglong local_70;
  undefined8 local_38;
  undefined8 uStack_30;
  
  lVar13 = DAT_180bb8ae8;
  local_70 = DAT_1808d5f00 ^ (ulonglong)auStack_d8;
  auVar17 = ZEXT1664(in_ZMM2._0_16_);
  plVar14 = *(longlong **)(DAT_180bb8ae8 + 0x14d0);
  uVar7 = FUN_1804b0a90(param_1,0,
                        *(undefined4 *)(plVar14[0x22] + -4 + (longlong)(int)plVar14[0x21] * 4));
  if (*(uint *)(*plVar14 + 0x1534) == uVar7) {
    FUN_1804cf810(uVar7,0xb,param_1);
    lVar13 = DAT_180bb8ae8;
  }
  local_38 = unaff_XMM6_Qa;
  uStack_30 = unaff_XMM6_Qb;
  if ((*(int *)(lVar13 + 0x2008) < *(int *)(lVar13 + 0x1ff8)) &&
     (*(uint *)((longlong)*(int *)(lVar13 + 0x2008) * 0x38 + *(longlong *)(lVar13 + 0x2000)) ==
      uVar7)) {
    local_88[0] = 1;
    uVar12 = ~uVar7;
    uVar3 = *(undefined8 *)(*(longlong *)(lVar13 + 0x14d0) + 0x1c0);
    puVar9 = local_88;
    uVar11 = uVar12;
    do {
      uVar11 = crc32(uVar11,*puVar9);
      puVar8 = puVar9 + 1;
      puVar1 = puVar9 + 2;
      puVar9 = puVar8;
    } while (puVar1 <= local_88 + 1);
    if (puVar8 < local_88 + 1) {
      do {
        uVar11 = crc32(uVar11,*(undefined1 *)puVar8);
        puVar8 = (undefined4 *)((longlong)puVar8 + 1);
      } while (puVar8 < local_88 + 1);
    }
    local_94 = (float)FUN_1804b1470(uVar3,~uVar11,*(undefined4 *)(lVar13 + 0x114));
    local_88[2] = 0;
    puVar9 = local_88 + 2;
    uVar11 = uVar12;
    do {
      uVar11 = crc32(uVar11,*puVar9);
      puVar8 = puVar9 + 1;
      puVar1 = puVar9 + 2;
      puVar9 = puVar8;
    } while (puVar1 <= local_88 + 3);
    if (puVar8 < local_88 + 3) {
      do {
        uVar11 = crc32(uVar11,*(undefined1 *)puVar8);
        puVar8 = (undefined4 *)((longlong)puVar8 + 1);
      } while (puVar8 < local_88 + 3);
    }
    local_98 = (float)FUN_1804b1470(uVar3,~uVar11,*(undefined4 *)(lVar13 + 0x110));
    local_8c = DAT_180b0a41c * 4.8;
    local_b8 = DAT_180b0a41c * 8.0;
    local_90 = DAT_180b0a41c * 6.0;
    auVar4._12_4_ = 0;
    auVar4._0_12_ = ZEXT812(0);
    auVar16 = ZEXT1264(ZEXT812(0)) << 0x20;
    auVar4 = vcmpss_avx(auVar4 << 0x20,auVar17._0_16_,1);
    auVar4 = vblendvps_avx(SUB6416(ZEXT464(0x43500000),0),auVar17._0_16_,auVar4);
    cVar6 = FUN_1804a8290(uVar7,&local_98,auVar4._0_4_ * DAT_180b0a41c,&local_90);
    lVar13 = DAT_180bb8ae8;
    if (cVar6 != '\0') {
      local_88[4] = 2;
      *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
      puVar9 = local_88 + 4;
      do {
        uVar12 = crc32(uVar12,*puVar9);
        puVar8 = puVar9 + 1;
        puVar1 = puVar9 + 2;
        puVar9 = puVar8;
      } while (puVar1 <= local_88 + 5);
      if (puVar8 < local_88 + 5) {
        do {
          uVar12 = crc32(uVar12,*(undefined1 *)puVar8);
          puVar8 = (undefined4 *)((longlong)puVar8 + 1);
        } while (puVar8 < local_88 + 5);
      }
      FUN_1804b1700(uVar3,~uVar12,*(undefined4 *)(*(longlong *)(lVar13 + 0x14d0) + 0x34));
      local_98 = auVar16._0_4_;
      auVar17 = ZEXT464(0xbf800000);
      auVar4 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 1.1999998 + 0.5)),1);
      local_94 = auVar4._0_4_;
      FUN_1804c6420(&local_98,auVar17._0_8_);
      if (param_2 != (char *)0x0) {
        lVar13 = *(longlong *)(DAT_180bb8ae8 + 0x14d0);
        fVar18 = *(float *)(lVar13 + 0x118);
        fVar19 = *(float *)(lVar13 + 0x11c);
        auVar4 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 20.4 + 0.5)),1);
        auVar16 = ZEXT1664(auVar4);
        if ((*(longlong *)(lVar13 + 0x1c8) != 0) ||
           (lVar10 = 0x280, *(longlong *)(DAT_180bb8ae8 + 0x2338) != 0)) {
          lVar10 = 0x250;
        }
        local_98 = *(float *)(lVar10 + lVar13) - fVar18;
        local_94 = auVar4._0_4_;
        FUN_1804c6420(&local_98,auVar17._0_8_);
        uVar3 = DAT_180c62cb0;
        uVar5 = DAT_180b0a458;
        local_a8 = param_2;
        if (param_2 != (char *)0xffffffffffffffff) {
          while (*local_a8 != '\0') {
            pcVar2 = local_a8 + 1;
            if (((*local_a8 == '#') && (*pcVar2 == '#')) ||
               (local_a8 = pcVar2, pcVar2 == (char *)0xffffffffffffffff)) break;
          }
        }
        fVar15 = (float)FUN_180463350(DAT_180c62cb0,0x41600000);
        lVar13 = DAT_180bb8ae8;
        local_98 = DAT_180b0a41c * 5.0;
        local_94 = (auVar16._0_4_ - fVar15) * 0.5 + fVar19;
        *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
        local_98 = local_98 + fVar18;
        local_b8 = (float)uVar5;
        local_b0 = param_2;
        FUN_180463450(*(undefined8 *)(*(longlong *)(lVar13 + 0x14d0) + 0x2c8),uVar3,0x41600000,
                      &local_98);
      }
    }
  }
}



