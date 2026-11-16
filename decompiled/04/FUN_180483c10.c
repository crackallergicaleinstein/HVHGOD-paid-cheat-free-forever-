// FUN_180483c10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180483c10 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180483c10(longlong param_1,longlong param_2,float *param_3)

{
  int *piVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  float fVar5;
  undefined1 auVar6 [16];
  longlong lVar7;
  char cVar8;
  int iVar9;
  char *pcVar10;
  undefined2 *puVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined8 uVar15;
  float fVar16;
  undefined1 auVar17 [64];
  float fVar18;
  undefined1 auVar19 [64];
  float fVar20;
  float fVar21;
  undefined1 auVar22 [64];
  undefined1 auStack_e8 [32];
  uint local_c8;
  undefined *local_c0;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  undefined1 local_a0 [4];
  float local_9c;
  ulonglong local_98;
  
  local_98 = DAT_1808d5f00 ^ (ulonglong)auStack_e8;
  if (*(int *)(param_1 + 0x24) != 4) {
    if (DAT_180cd64b8 == 0) {
      auVar19 = ZEXT864(0);
      local_9c = 0.0;
      FUN_180482650(param_1,param_2,param_3,&local_9c);
      auVar22 = ZEXT464(0x3f800000);
      plVar4 = *(longlong **)(DAT_180bb8ae8 + 0x14d0);
      auVar6 = vpcmpeqd_avx(ZEXT416(*(uint *)(param_1 + 0x24)),SUB6416(ZEXT464(0),0));
      auVar6 = vblendvps_avx(auVar19._0_16_,auVar22._0_16_,auVar6);
      auVar17 = ZEXT1664(auVar6);
      uVar15 = auVar6._0_8_;
      pcVar10 = "##weapon_show";
      uVar13 = ~*(uint *)(plVar4[0x22] + -4 + (longlong)(int)plVar4[0x21] * 4);
      cVar8 = '#';
      uVar14 = uVar13;
      do {
        pcVar10 = pcVar10 + 1;
        if (((cVar8 == '#') && (*pcVar10 == '#')) && (pcVar10[1] == '#')) {
          pcVar10 = pcVar10 + 2;
          uVar14 = uVar13;
        }
        else {
          uVar14 = crc32(uVar14,cVar8);
        }
        cVar8 = *pcVar10;
      } while (cVar8 != '\0');
      uVar14 = ~uVar14;
      if (*(uint *)(*plVar4 + 0x1534) == uVar14) {
        FUN_1804cf810(uVar14,0xb,"##weapon_show");
        uVar15 = auVar17._0_8_;
      }
      auVar17 = ZEXT464(0x41600000);
      uVar15 = FUN_1804aaa10(uVar14,uVar15,auVar17._0_8_);
      lVar7 = DAT_180bb8ae8;
      fVar18 = auVar17._0_4_;
      if (0.01 < (float)uVar15) {
        uVar3 = *(undefined4 *)(param_2 + 0x20);
        if (*(int *)(param_1 + 0x24) != 0) {
          piVar1 = (int *)(DAT_180bb8ae8 + 0x1fd8);
          uVar14 = *(uint *)(DAT_180bb8ae8 + 0x1e80) | 0x40;
          *(uint *)(DAT_180bb8ae8 + 0x1e80) = uVar14;
          iVar9 = *(int *)(lVar7 + 0x1fdc);
          if (*piVar1 == iVar9) {
            iVar12 = *piVar1 + 1;
            if (iVar9 == 0) {
              iVar9 = 8;
            }
            else {
              iVar9 = iVar9 / 2 + iVar9;
            }
            if (iVar12 < iVar9) {
              iVar12 = iVar9;
            }
            FUN_1804d14d0(piVar1,iVar12);
            fVar18 = auVar17._0_4_;
          }
          *(uint *)(*(longlong *)(lVar7 + 0x1fe0) + (longlong)*piVar1 * 4) = uVar14;
          *piVar1 = *piVar1 + 1;
        }
        FUN_1804835d0(param_1,param_2,param_3,
                      (fVar18 * DAT_180b0a41c + local_9c) -
                      DAT_180b0a41c * 10.0 * (auVar22._0_4_ - (float)uVar15));
        lVar7 = DAT_180bb8ae8;
        if (*(int *)(param_1 + 0x24) != 0) {
          iVar9 = *(int *)(DAT_180bb8ae8 + 0x1fd8);
          if (iVar9 < 2) {
            FUN_1804c5a40("Calling PopItemFlag() too many times!");
          }
          else {
            *(int *)(DAT_180bb8ae8 + 0x1fd8) = iVar9 + -1;
            *(undefined4 *)(lVar7 + 0x1e80) =
                 *(undefined4 *)(*(longlong *)(lVar7 + 0x1fe0) + -8 + (longlong)iVar9 * 4);
          }
        }
        FUN_18047d320(param_2,uVar3,uVar15,auVar19._0_8_);
      }
      fVar18 = DAT_180b0a41c * 610.0 + *param_3;
      plVar4 = *(longlong **)(DAT_180bb8ae8 + 0x14d0);
      fVar16 = DAT_180b0a41c * 22.0 + param_3[1];
      pcVar10 = "##search";
      uVar13 = ~*(uint *)(plVar4[0x22] + -4 + (longlong)(int)plVar4[0x21] * 4);
      cVar8 = '#';
      uVar14 = uVar13;
      do {
        pcVar10 = pcVar10 + 1;
        if (((cVar8 == '#') && (*pcVar10 == '#')) && (pcVar10[1] == '#')) {
          pcVar10 = pcVar10 + 2;
          uVar14 = uVar13;
        }
        else {
          uVar14 = crc32(uVar14,cVar8);
        }
        cVar8 = *pcVar10;
      } while (cVar8 != '\0');
      uVar14 = ~uVar14;
      local_b8 = fVar18;
      local_b4 = fVar16;
      if (*(uint *)(*plVar4 + 0x1534) == uVar14) {
        FUN_1804cf810(uVar14,0xb,"##search");
      }
      local_a4 = DAT_180b0a41c * 10.0;
      local_b0 = local_a4 + fVar18;
      local_ac = local_a4 + fVar16;
      local_a8 = fVar18 - local_a4;
      local_a4 = fVar16 - local_a4;
      local_c8 = CONCAT31(local_c8._1_3_,1);
      puVar11 = (undefined2 *)FUN_1804aad60(local_a0,uVar14,&local_a8,&local_b0);
      uVar2 = *puVar11;
      if (*(char *)(puVar11 + 1) != '\0') {
        FUN_180494ab0(param_1);
      }
      if (((*(char *)(param_1 + 0x6bf4) == '\0') && (*(char *)(DAT_180bb8ae8 + 0xe2) == '\0')) &&
         (cVar8 = FUN_1804c52a0(0x1227,0,0), cVar8 != '\0')) {
        FUN_180494ab0(param_1);
      }
      auVar6 = vpcmpeqd_avx(ZEXT116((byte)uVar2),SUB6416(ZEXT464(0),0));
      auVar6 = vblendvps_avx(auVar22._0_16_,auVar19._0_16_,auVar6);
      uVar15 = FUN_1804aaa10(uVar14 + 1,auVar6._0_8_,0x41800000);
      fVar16 = *(float *)(param_1 + 0x6bf8) * 3.0;
      fVar18 = auVar19._0_4_;
      fVar21 = fVar18;
      if (fVar18 <= fVar16) {
        auVar6 = vminss_avx(auVar22._0_16_,ZEXT416((uint)fVar16));
        fVar21 = auVar6._0_4_;
      }
      fVar16 = (float)uVar15;
      fVar20 = 255.0;
      fVar21 = auVar22._0_4_ - fVar21;
      if (fVar18 < fVar16) {
        fVar5 = ((float)(DAT_1808da48c >> 0x18) / 255.0) * fVar21 * fVar16;
        if (fVar18 <= fVar5) {
          auVar6 = vminss_avx(auVar22._0_16_,ZEXT416((uint)fVar5));
          fVar18 = auVar6._0_4_;
        }
        local_c8 = 0x18;
        FUN_1804e01c0(param_2,&local_b8,(fVar16 * 0.3 + 0.7) * DAT_180b0a41c * 10.0,
                      (int)(longlong)(fVar18 * 255.0 + 0.5) << 0x18 | DAT_1808da48c & 0xffffff);
      }
      uVar14 = FUN_180462ad0(DAT_180b0a4c4,DAT_180b0a424,uVar15);
      fVar21 = ((float)(uVar14 >> 0x18) / fVar20) * fVar21;
      fVar18 = auVar19._0_4_;
      if (fVar18 <= fVar21) {
        auVar6 = vminss_avx(auVar22._0_16_,ZEXT416((uint)fVar21));
        fVar18 = auVar6._0_4_;
      }
      local_c8 = (int)(longlong)(fVar18 * fVar20 + 0.5) << 0x18 | uVar14 & 0xffffff;
      local_c0 = &DAT_18082ac6c;
      FUN_180463b40(param_2,DAT_180c62cc0,((float)uVar15 * 0.08 + auVar22._0_4_) * 11.0,&local_b8);
      local_c8 = DAT_180b0a540;
      FUN_180463160(param_2,DAT_180b0a41c * 142.5 + *param_3,DAT_180b0a41c * 624.0 + *param_3,
                    DAT_180b0a41c * 43.0 + param_3[1]);
    }
    else {
      (**(code **)(*(longlong *)DAT_180cd64b8 + 0x10))(DAT_180cd64b8,param_1);
    }
  }
}



