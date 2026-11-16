// FUN_18035bca0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18035bca0 */

undefined8 FUN_18035bca0(undefined8 *param_1,longlong param_2)

{
  float fVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  float fVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  char cVar26;
  char cVar27;
  char cVar28;
  DWORD DVar29;
  longlong lVar30;
  undefined8 *puVar31;
  ulonglong uVar32;
  undefined8 uVar33;
  char *pcVar34;
  longlong lVar35;
  undefined4 uVar36;
  undefined1 auVar37 [16];
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  float fVar38;
  undefined4 uVar39;
  undefined1 auVar40 [64];
  undefined1 auVar41 [16];
  undefined1 auVar42 [64];
  
  uVar33 = 2;
  if ((DAT_180bbeab9 == '\0') && (cVar26 = FUN_180303ad0(2), cVar26 != '\0')) {
    DAT_180bbeab9 = '\x01';
    DAT_180bda15c = 2;
    DAT_180bda160 = GetCurrentThreadId();
    cVar26 = '\x01';
  }
  else {
    cVar26 = '\0';
  }
  if ((cVar26 == '\0') ||
     (cVar28 = cVar26, cVar27 = FUN_18035b730(*param_1,param_2), cVar27 == '\0'))
  goto LAB_18035bfb3;
  cVar27 = FUN_18035b4c0(param_1[1]);
  if (cVar27 == '\0') {
    uVar33 = 0;
    goto LAB_18035bfb3;
  }
  auVar40 = ZEXT864(0);
  if (*(char *)(param_1[2] + 1) == '\0') {
LAB_18035bd7f:
    auVar42 = ZEXT864(0);
  }
  else {
    fVar38 = *(float *)(param_1[3] + 100);
    fVar1 = *(float *)(param_1[3] + 0x68);
    fVar1 = fVar1 * fVar1;
    fVar38 = fVar38 * fVar38;
    fVar5 = fVar1 + fVar38;
    if (fVar5 == 0.0) goto LAB_18035bd7f;
    if (fVar5 < 0.0) {
      auVar42._0_8_ = FUN_18061e150(fVar5,fVar38,fVar1,fVar5,cVar28);
      auVar42._8_56_ = extraout_var;
      auVar42 = ZEXT1664(auVar42._0_16_);
    }
    else {
      auVar42 = ZEXT464((uint)SQRT(fVar5));
    }
  }
  *(int *)param_1[4] = *(int *)param_1[4] + 1;
  cVar28 = FUN_18035b730(*param_1,param_2);
  if (cVar28 != '\0') {
    cVar28 = FUN_18035b4c0(param_1[1]);
    auVar41 = auVar42._0_16_;
    auVar37 = auVar40._0_16_;
    if (cVar28 == '\0') {
      uVar33 = 0;
    }
    else {
      pcVar34 = (char *)param_1[2];
      if (pcVar34[1] != '\0') {
        fVar38 = *(float *)(param_1[3] + 100);
        fVar1 = *(float *)(param_1[3] + 0x68);
        fVar38 = fVar38 * fVar38 + fVar1 * fVar1;
        if (fVar38 != auVar40._0_4_) {
          if (fVar38 < 0.0) {
            auVar40._0_8_ = FUN_18061e150(fVar38);
            auVar41 = auVar42._0_16_;
            auVar40._8_56_ = extraout_var_00;
            auVar37 = auVar40._0_16_;
          }
          else {
            auVar37 = ZEXT416((uint)SQRT(fVar38));
          }
        }
        auVar37 = vminss_avx(auVar37,auVar41);
        auVar40 = ZEXT1664(auVar37);
      }
      uVar39 = auVar40._0_4_;
      if (*pcVar34 == '\0') {
        uVar36 = 0xff800000;
      }
      else {
        uVar36 = FUN_1803546b0(*(undefined4 *)(param_1[3] + 0x60),*(undefined4 *)(param_1[3] + 0x6c)
                               ,*(undefined4 *)(param_1[5] + 4));
        uVar39 = auVar40._0_4_;
      }
      *(undefined1 *)param_1[6] = *(undefined1 *)param_1[7];
      uVar32 = 0;
      if (*(longlong *)(param_2 + 0x180) != 0) {
        pcVar34 = (char *)(param_2 + 9);
        do {
          if ((pcVar34[-1] == '\x01') && (*pcVar34 != '\0')) {
            fVar38 = *(float *)(pcVar34 + -5) * 64.0;
            lVar30 = 0;
            if ((9.223372e+18 <= fVar38) && (fVar38 = fVar38 - 9.223372e+18, fVar38 < 9.223372e+18))
            {
              lVar30 = -0x8000000000000000;
            }
            lVar35 = (longlong)fVar38;
            puVar4 = (undefined8 *)param_1[3];
            uVar7 = puVar4[1];
            uVar8 = puVar4[2];
            uVar9 = puVar4[3];
            uVar10 = puVar4[4];
            uVar11 = puVar4[5];
            uVar12 = puVar4[6];
            uVar13 = puVar4[7];
            uVar14 = puVar4[8];
            uVar15 = puVar4[9];
            uVar16 = puVar4[10];
            uVar17 = puVar4[0xb];
            uVar18 = puVar4[0xc];
            uVar19 = puVar4[0xd];
            uVar20 = puVar4[0xe];
            uVar21 = puVar4[0xf];
            uVar22 = puVar4[0x10];
            uVar23 = puVar4[0x11];
            uVar24 = puVar4[0x12];
            uVar25 = puVar4[0x13];
            auVar37 = *(undefined1 (*) [16])(puVar4 + 0x14);
            uVar33 = puVar4[0x16];
            puVar31 = (undefined8 *)(lVar35 * 0xb8 + param_1[8]);
            *puVar31 = *puVar4;
            puVar31[1] = uVar7;
            puVar31[2] = uVar8;
            puVar31[3] = uVar9;
            puVar31[4] = uVar10;
            puVar31[5] = uVar11;
            puVar31[6] = uVar12;
            puVar31[7] = uVar13;
            puVar31[8] = uVar14;
            puVar31[9] = uVar15;
            puVar31[10] = uVar16;
            puVar31[0xb] = uVar17;
            puVar31[0xc] = uVar18;
            puVar31[0xd] = uVar19;
            puVar31[0xe] = uVar20;
            puVar31[0xf] = uVar21;
            puVar31[0x10] = uVar22;
            puVar31[0x11] = uVar23;
            puVar31[0x12] = uVar24;
            puVar31[0x13] = uVar25;
            *(undefined1 (*) [16])(puVar31 + 0x14) = auVar37;
            puVar31[0x16] = uVar33;
            uVar2 = *(undefined1 *)param_1[0xb];
            uVar3 = *(undefined1 *)param_1[0xc];
            lVar6 = (lVar35 + lVar30) * 3;
            lVar30 = param_1[9];
            *(undefined1 *)(lVar6 + lVar30) = *(undefined1 *)param_1[10];
            *(undefined1 *)(lVar6 + 1 + lVar30) = uVar2;
            *(undefined1 *)(lVar6 + 2 + lVar30) = uVar3;
            lVar30 = param_1[0xd];
            *(undefined4 *)(lVar30 + lVar35 * 8) = uVar39;
            *(undefined4 *)(lVar30 + 4 + lVar35 * 8) = uVar36;
          }
          uVar32 = uVar32 + 1;
          pcVar34 = pcVar34 + 0xc;
        } while (uVar32 < *(ulonglong *)(param_2 + 0x180));
      }
      uVar33 = 1;
    }
  }
LAB_18035bfb3:
  if (((cVar26 != '\0') && (DAT_180bbeab9 != '\0')) &&
     (DVar29 = GetCurrentThreadId(), DAT_180bda160 == DVar29)) {
    DAT_1808e3a58 = DAT_1808e3a58 + DAT_180bda15c;
    DAT_180bda15c = 0;
    DAT_180bbeab9 = '\0';
    DAT_180bda160 = 0;
  }
  return uVar33;
}



