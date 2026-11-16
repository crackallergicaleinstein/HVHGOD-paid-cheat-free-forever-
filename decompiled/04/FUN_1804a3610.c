// FUN_1804a3610 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804a3610 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804a3610(uint param_1,float *param_2,float param_3,undefined8 *param_4,undefined8 *param_5
                  ,char param_6,undefined1 *param_7)

{
  undefined8 uVar1;
  undefined2 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  char cVar7;
  char cVar8;
  undefined4 uVar9;
  undefined2 *puVar10;
  char *pcVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  float fVar16;
  undefined1 auVar17 [64];
  float fVar18;
  float fVar19;
  undefined1 auStack_f8 [32];
  float local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  float local_b8;
  float local_b4;
  undefined1 local_b0 [4];
  float local_ac;
  float local_a8;
  undefined8 local_a0;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  undefined1 local_88 [16];
  ulonglong local_78;
  
  local_78 = DAT_1808d5f00 ^ (ulonglong)auStack_f8;
  local_98 = param_3 + *param_2;
  local_94 = param_3 + param_2[1];
  local_d8 = (float)CONCAT31(local_d8._1_3_,1);
  puVar10 = (undefined2 *)FUN_1804aad60(local_b0,param_1,param_2,&local_98);
  uVar2 = *puVar10;
  if (*(char *)(puVar10 + 1) != '\0') {
    uVar1 = param_4[1];
    *param_5 = *param_4;
    param_5[1] = uVar1;
    if (param_6 == '\0') {
      *(undefined4 *)((longlong)param_5 + 0xc) = *(undefined4 *)((longlong)param_5 + 0xc);
    }
    *param_7 = 1;
  }
  lVar3 = DAT_180bb8ae8;
  auVar17 = ZEXT464(0x3f800000);
  fVar18 = DAT_180b0a41c * 4.0;
  *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
  lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x14d0) + 0x2c8);
  if (*(float *)((longlong)param_4 + 0xc) < 1.0) {
    local_d8 = fVar18;
    FUN_1804a2ff0(lVar3,param_2,&local_98,fVar18);
  }
  uVar9 = FUN_1804b1120(param_4);
  local_d0 = (char *)((ulonglong)local_d0._4_4_ << 0x20);
  local_d8 = fVar18;
  FUN_1804df870(lVar3,param_2,&local_98,uVar9);
  fVar19 = 0.5;
  auVar5 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c + 0.25)),1);
  auVar5 = vmaxss_avx(auVar17._0_16_,auVar5);
  auVar17 = ZEXT1664(auVar5);
  fVar16 = auVar5._0_4_ * 0.5;
  local_ac = local_98 - fVar16;
  local_a8 = local_94 - fVar16;
  local_b8 = fVar16 + *param_2;
  local_b4 = fVar16 + param_2[1];
  cVar8 = (char)uVar2;
  local_d8 = 0.0;
  auVar5 = vmaxss_avx(ZEXT416((uint)(fVar18 - fVar16)),ZEXT816(0));
  uVar9 = DAT_180b0a428;
  if (cVar8 != '\0') {
    uVar9 = DAT_180b0a458;
  }
  FUN_1804dc420(lVar3,&local_b8,&local_ac,auVar5._0_8_);
  local_c8 = CONCAT44(local_c8._4_4_,0x7f7fffff);
  local_d0 = (char *)CONCAT44(local_d0._4_4_,0x200);
  local_d8 = auVar17._0_4_;
  FUN_1804d9a00(lVar3,*(undefined8 *)(lVar3 + 0x58),*(undefined4 *)(lVar3 + 0x50),uVar9);
  *(undefined4 *)(lVar3 + 0x50) = 0;
  uVar12 = (((ulonglong)param_1 ^ 0x6a99b4b1f77dd0fc) >> 0x1e ^
           (ulonglong)param_1 ^ 0x6a99b4b1f77dd0fc) * -0x40a7b892e31b1a47;
  uVar12 = (uVar12 >> 0x1b ^ uVar12) * -0x6b2fb644ecceee15;
  uVar12 = uVar12 >> 0x1f ^ uVar12;
  uVar15 = (uint)(uVar12 >> 0x20) ^ (uint)uVar12;
  if (cVar8 != '\0') {
    cVar7 = FUN_1804c3510(1,0,0);
    if (cVar7 != '\0') {
      FUN_1804c7740(uVar15,0);
    }
  }
  local_d8 = (float)CONCAT31(local_d8._1_3_,1);
  local_88 = (undefined1  [16])0x0;
  FUN_1804a32d0(local_88 + 1,0xf,param_4,0);
  local_88[0] = 0x23;
  if (cVar8 != '\0') {
    if ((*(int *)(DAT_180bb8ae8 + 0x1ff8) <= *(int *)(DAT_180bb8ae8 + 0x2008)) ||
       (*(uint *)((longlong)*(int *)(DAT_180bb8ae8 + 0x2008) * 0x38 +
                 *(longlong *)(DAT_180bb8ae8 + 0x2000)) != uVar15)) {
      FUN_1804c7660(&DAT_1806bbe98,local_88);
    }
  }
  cVar8 = FUN_1804a8ab0(uVar15,param_2,&local_98);
  if (cVar8 != '\0') {
    uVar1 = *(undefined8 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x118);
    lVar3 = *(longlong *)(DAT_180bb8ae8 + 0x14d0);
    if ((*(longlong *)(lVar3 + 0x1c8) != 0) ||
       (lVar13 = 0x280, *(longlong *)(DAT_180bb8ae8 + 0x2338) != 0)) {
      lVar13 = 0x250;
    }
    local_b8 = *(float *)(lVar13 + lVar3) - *(float *)(lVar3 + 0x118);
    local_a0._0_4_ = (float)uVar1;
    local_90 = local_b8 + (float)local_a0;
    auVar5 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 23.0 + fVar19)),1);
    local_a0._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
    local_b4 = auVar5._0_4_;
    local_8c = local_b4 + local_a0._4_4_;
    local_a0 = uVar1;
    FUN_1804c6420(&local_b8,0xbf800000);
    plVar4 = *(longlong **)(DAT_180bb8ae8 + 0x14d0);
    pcVar11 = "##remove_color";
    uVar14 = ~*(uint *)(plVar4[0x22] + -4 + (longlong)(int)plVar4[0x21] * 4);
    cVar8 = '#';
    uVar15 = uVar14;
    do {
      pcVar11 = pcVar11 + 1;
      if (((cVar8 == '#') && (*pcVar11 == '#')) && (pcVar11[1] == '#')) {
        pcVar11 = pcVar11 + 2;
        uVar15 = uVar14;
      }
      else {
        uVar15 = crc32(uVar15,cVar8);
      }
      cVar8 = *pcVar11;
    } while (cVar8 != '\0');
    uVar15 = ~uVar15;
    if (*(uint *)(*plVar4 + 0x1534) == uVar15) {
      FUN_1804cf810(uVar15,0xb,"##remove_color");
    }
    local_d8 = (float)CONCAT31(local_d8._1_3_,1);
    puVar10 = (undefined2 *)FUN_1804aad60(local_b0,uVar15,&local_a0,&local_90);
    lVar3 = DAT_180bb8ae8;
    uVar2 = *puVar10;
    cVar8 = *(char *)(puVar10 + 1);
    *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
    uVar1 = *(undefined8 *)(*(longlong *)(lVar3 + 0x14d0) + 0x2c8);
    if ((char)uVar2 != '\0') {
      local_d8 = DAT_180b0a41c * 5.0;
      local_d0 = (char *)((ulonglong)local_d0 & 0xffffffff00000000);
      FUN_1804df870(uVar1,&local_a0,&local_90,DAT_180b0a4fc);
    }
    uVar6 = DAT_180c62ca8;
    fVar18 = (local_8c + local_a0._4_4_) * fVar19;
    local_b8 = DAT_180b0a41c * 11.0 + (float)local_a0;
    local_d8 = 10.0;
    local_b4 = fVar18;
    FUN_180463dc0(uVar1,&local_b8,DAT_180b0a438,&DAT_180829a48);
    uVar9 = DAT_180b0a458;
    fVar16 = (float)FUN_180463350(uVar6,0x4159999a);
    local_b4 = fVar18 - fVar16 * fVar19;
    local_b8 = DAT_180b0a41c * 23.0 + (float)local_a0;
    local_c8 = 0;
    local_d0 = "Delete color";
    local_d8 = (float)uVar9;
    FUN_180463450(uVar1,uVar6,0x4159999a,&local_b8);
    if (cVar8 != '\0') {
      FUN_1804c7bf0();
    }
    FUN_1804aeac0();
  }
}



