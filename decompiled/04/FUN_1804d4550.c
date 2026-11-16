// FUN_1804d4550 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804d4550 */

/* WARNING: Removing unreachable block (ram,0x0001804d4798) */

undefined8 FUN_1804d4550(longlong param_1,undefined4 param_2,longlong param_3)

{
  byte bVar1;
  float fVar2;
  undefined1 uVar3;
  char cVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  short sVar8;
  undefined1 (*pauVar9) [16];
  longlong lVar10;
  undefined8 *puVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  float *pfVar15;
  undefined8 uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  ulonglong uVar20;
  undefined4 uVar21;
  undefined4 uVar23;
  undefined8 uVar22;
  undefined4 uVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  float fVar28;
  float fVar29;
  undefined1 auVar30 [64];
  ulonglong uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [64];
  float fVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [64];
  float fVar40;
  undefined1 auVar41 [64];
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float local_2b8;
  float local_2b4;
  int local_2b0;
  ulonglong local_2a8;
  undefined1 local_298 [16];
  int local_288;
  float local_284;
  int local_280;
  float local_27c;
  int local_278;
  int local_274;
  ulonglong local_268;
  undefined8 uStack_260;
  float local_258 [5];
  float local_244;
  float local_240;
  float local_23c;
  float local_238;
  float local_234;
  float local_230;
  float local_22c;
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  undefined8 auStack_178 [40];
  
  local_280 = 0;
  local_274 = 0;
  iVar25 = 1;
  local_198._0_8_ = *(undefined8 *)(param_1 + 0x70);
  local_198._8_8_ = *(undefined8 *)(param_1 + 0x78);
  local_268 = *(ulonglong *)(param_1 + 0x50);
  uStack_260 = *(undefined8 *)(param_1 + 0x58);
  local_288 = 1;
  local_278 = 0;
  uVar17 = 0;
  pauVar9 = (undefined1 (*) [16])FUN_1804d22e0(local_298,&local_268,param_2);
  local_298 = *pauVar9;
  auVar41 = ZEXT464((uint)local_258[0]);
  local_2b0 = local_298._12_4_;
  iVar26 = local_298._8_4_;
  auVar30 = ZEXT464((uint)local_230);
  local_2b8 = local_230;
  local_2b4 = local_234;
  local_27c = local_238;
  local_284 = local_23c;
  auVar36 = ZEXT864(0);
  uVar20 = local_298._0_8_;
  fVar29 = local_234;
  iVar12 = 0;
  fVar33 = local_23c;
  fVar37 = local_238;
  fVar42 = local_258[3];
  fVar43 = local_258[1];
  fVar44 = local_258[2];
  fVar45 = local_240;
  fVar46 = local_244;
  fVar47 = local_258[4];
  local_2a8 = local_298._0_8_;
  iVar19 = local_2b0;
LAB_1804d468a:
  iVar18 = 0;
  lVar14 = (longlong)iVar12;
  if ((int)local_298._12_4_ <= iVar26) {
    return 0;
  }
  iVar27 = iVar26 + 1;
  local_298._8_4_ = iVar27;
  bVar1 = *(byte *)((longlong)iVar26 + uVar20);
  uVar23 = (undefined4)(uVar20 >> 0x20);
  switch(bVar1) {
  case 1:
  case 3:
  case 0x12:
  case 0x17:
    local_280 = local_280 + (int)uVar17 / 2;
    iVar26 = iVar27;
    goto LAB_1804d4789;
  default:
    if (bVar1 == 0xff) {
      if (iVar27 < iVar19) {
        lVar14 = (longlong)iVar27;
        iVar27 = iVar26 + 2;
        local_298._8_4_ = iVar27;
        uVar3 = *(undefined1 *)(lVar14 + uVar20);
      }
      else {
        uVar3 = 0;
      }
      if (iVar27 < iVar19) {
        lVar14 = (longlong)iVar27;
        iVar27 = iVar27 + 1;
        local_298._8_4_ = iVar27;
        uVar5 = *(undefined1 *)(lVar14 + uVar20);
      }
      else {
        uVar5 = 0;
      }
      if (iVar27 < iVar19) {
        lVar14 = (longlong)iVar27;
        iVar27 = iVar27 + 1;
        local_298._8_4_ = iVar27;
        uVar6 = *(undefined1 *)(lVar14 + uVar20);
      }
      else {
        uVar6 = 0;
      }
      if (iVar27 < iVar19) {
        lVar14 = (longlong)iVar27;
        iVar27 = iVar27 + 1;
        local_298._8_4_ = iVar27;
        uVar7 = *(undefined1 *)(lVar14 + uVar20);
      }
      else {
        uVar7 = 0;
      }
      fVar29 = (float)CONCAT31(CONCAT21(CONCAT11(uVar3,uVar5),uVar6),uVar7) * 1.5258789e-05;
      iVar26 = iVar27;
    }
    else {
      if (((bVar1 & 0xe0) == 0) && (bVar1 != 0x1c)) {
        return 0;
      }
      if (iVar19 < iVar26) {
LAB_1804d539e:
        local_298._8_4_ = iVar19;
      }
      else {
        local_298._8_4_ = iVar26;
        if (iVar26 < 0) goto LAB_1804d539e;
      }
      sVar8 = FUN_1804d1f40(local_298);
      fVar29 = (float)(int)sVar8;
      local_2a8 = local_298._0_8_;
      local_2b0 = local_298._12_4_;
      uVar20 = local_298._0_8_;
      iVar26 = local_298._8_4_;
      iVar19 = local_298._12_4_;
    }
    if (0x2f < (int)uVar17) {
      return 0;
    }
    lVar14 = (longlong)(int)uVar17;
    uVar17 = uVar17 + 1;
    local_258[lVar14] = fVar29;
    auVar30 = ZEXT464((uint)local_230);
    auVar41 = ZEXT464((uint)local_258[0]);
    local_2b8 = local_230;
    local_2b4 = local_234;
    local_27c = local_238;
    local_284 = local_23c;
    fVar29 = local_234;
    iVar12 = local_278;
    fVar33 = local_23c;
    fVar37 = local_238;
    fVar42 = local_258[3];
    fVar43 = local_258[1];
    fVar44 = local_258[2];
    fVar45 = local_240;
    fVar46 = local_244;
    fVar47 = local_258[4];
    goto LAB_1804d468a;
  case 4:
    if ((int)uVar17 < 1) {
      return 0;
    }
    uVar31 = (ulonglong)(uint)local_258[(longlong)(int)uVar17 + -1];
    uVar20 = auVar36._0_8_;
    goto LAB_1804d4768;
  case 5:
    if ((int)uVar17 < 2) {
      return 0;
    }
    iVar26 = 1;
    pfVar15 = local_258;
    do {
      fVar29 = *(float *)(param_3 + 0x10) + *pfVar15;
      fVar40 = pfVar15[1] + *(float *)(param_3 + 0x14);
      *(float *)(param_3 + 0x10) = fVar29;
      *(float *)(param_3 + 0x14) = fVar40;
      FUN_1804d4130(param_3,2,(int)fVar29,(int)fVar40,0,0,0,0);
      iVar26 = iVar26 + 2;
      pfVar15 = pfVar15 + 2;
      iVar25 = local_288;
    } while (iVar26 < (int)uVar17);
    break;
  case 6:
    if ((int)uVar17 < 1) {
      return 0;
    }
    do {
      pfVar15 = (float *)(param_3 + 0x10);
      fVar29 = local_258[iVar18];
      fVar40 = *pfVar15;
      fVar34 = auVar36._0_4_ + *(float *)(param_3 + 0x14);
      *(float *)(param_3 + 0x14) = fVar34;
      *pfVar15 = fVar29 + fVar40;
      FUN_1804d4130(param_3,CONCAT71((int7)((ulonglong)pfVar15 >> 8),2),(int)(fVar29 + fVar40),
                    (int)fVar34,0,0,0,0);
      iVar18 = iVar18 + 1;
LAB_1804d48c8:
      if ((int)uVar17 <= iVar18) break;
      fVar29 = auVar36._0_4_ + *(float *)(param_3 + 0x10);
      *(float *)(param_3 + 0x10) = fVar29;
      fVar40 = local_258[iVar18] + *(float *)(param_3 + 0x14);
      *(float *)(param_3 + 0x14) = fVar40;
      FUN_1804d4130(param_3,2,(int)fVar29,(int)fVar40,0,0,0,0);
      iVar18 = iVar18 + 1;
    } while (iVar18 < (int)uVar17);
    break;
  case 7:
    if (0 < (int)uVar17) goto LAB_1804d48c8;
    return 0;
  case 8:
    if ((int)uVar17 < 6) {
      return 0;
    }
    iVar26 = 5;
    pfVar15 = local_258 + 2;
    do {
      fVar29 = pfVar15[-1] + *(float *)(param_3 + 0x14);
      fVar40 = pfVar15[-2] + *(float *)(param_3 + 0x10);
      fVar34 = fVar29 + pfVar15[1];
      fVar32 = fVar40 + *pfVar15;
      fVar28 = fVar32 + pfVar15[2];
      fVar2 = fVar34 + pfVar15[3];
      iVar12 = (int)fVar29;
      lVar14 = CONCAT71((int7)(CONCAT44((int)((ulonglong)lVar14 >> 0x20),iVar12) >> 8),4);
      *(float *)(param_3 + 0x10) = fVar28;
      *(float *)(param_3 + 0x14) = fVar2;
      FUN_1804d4130(param_3,lVar14,(int)fVar28,(int)fVar2,(int)fVar40,iVar12,(int)fVar32,(int)fVar34
                   );
      iVar26 = iVar26 + 6;
      pfVar15 = pfVar15 + 6;
    } while (iVar26 < (int)uVar17);
    break;
  case 10:
    if (local_274 == 0) {
      if (*(int *)(param_1 + 0x9c) != 0) {
        puVar11 = (undefined8 *)FUN_1804d4360(local_188,param_1,param_2);
        local_198._0_8_ = *puVar11;
        local_198._8_8_ = puVar11[1];
      }
      local_274 = 1;
    }
    goto LAB_1804d4eb9;
  case 0xb:
    goto switchD_1804d46ef_caseD_b;
  case 0xc:
    if (iVar27 < (int)local_298._12_4_) {
      lVar14 = (longlong)iVar27;
      iVar27 = iVar26 + 2;
      local_298._8_4_ = iVar27;
      cVar4 = *(char *)(lVar14 + uVar20);
    }
    else {
      cVar4 = '\0';
    }
    fVar40 = auVar41._0_4_;
    iVar12 = iVar12 >> 0x1f;
    fVar34 = auVar36._0_4_;
    if (cVar4 == '\"') {
      if ((int)uVar17 < 7) {
        return 0;
      }
      fVar29 = fVar34 + *(float *)(param_3 + 0x14);
      fVar40 = fVar40 + *(float *)(param_3 + 0x10);
      fVar37 = fVar44 + fVar29;
      fVar32 = fVar40 + fVar43;
      iVar26 = (int)fVar29;
      fVar29 = fVar42 + fVar32;
      fVar34 = fVar37 + fVar34;
      uVar16 = CONCAT71((int7)(CONCAT44(iVar12,iVar26) >> 8),4);
      uVar22 = CONCAT44(uVar23,(int)fVar34);
      uVar20 = (ulonglong)(uint)(int)fVar29;
      *(float *)(param_3 + 0x10) = fVar29;
      *(float *)(param_3 + 0x14) = fVar34;
      FUN_1804d4130(param_3,uVar16,uVar20,uVar22,(int)fVar40,iVar26,(int)fVar32,(int)fVar37);
      uVar21 = (undefined4)(uVar20 >> 0x20);
      uVar24 = (undefined4)((ulonglong)uVar22 >> 0x20);
      uVar23 = (undefined4)((ulonglong)uVar16 >> 0x20);
      fVar40 = fVar47 + *(float *)(param_3 + 0x10);
      fVar29 = auVar36._0_4_ + *(float *)(param_3 + 0x14);
      fVar32 = fVar46 + fVar40;
      fVar34 = fVar29 - fVar44;
      fVar37 = fVar45 + fVar32;
      fVar28 = fVar34 + auVar36._0_4_;
    }
    else if (cVar4 == '#') {
      if ((int)uVar17 < 0xd) {
        return 0;
      }
      fVar29 = fVar43 + *(float *)(param_3 + 0x14);
      fVar40 = fVar40 + *(float *)(param_3 + 0x10);
      fVar34 = fVar42 + fVar29;
      fVar32 = fVar40 + fVar44;
      iVar26 = (int)fVar29;
      fVar29 = fVar47 + fVar32;
      fVar28 = fVar46 + fVar34;
      uVar16 = CONCAT71((int7)(CONCAT44(iVar12,iVar26) >> 8),4);
      uVar22 = CONCAT44(uVar23,(int)fVar28);
      uVar20 = (ulonglong)(uint)(int)fVar29;
      *(float *)(param_3 + 0x10) = fVar29;
      *(float *)(param_3 + 0x14) = fVar28;
      FUN_1804d4130(param_3,uVar16,uVar20,uVar22,(int)fVar40,iVar26,(int)fVar32,(int)fVar34);
      uVar21 = (undefined4)(uVar20 >> 0x20);
      uVar24 = (undefined4)((ulonglong)uVar22 >> 0x20);
      uVar23 = (undefined4)((ulonglong)uVar16 >> 0x20);
      fVar40 = fVar45 + *(float *)(param_3 + 0x10);
      fVar29 = fVar33 + *(float *)(param_3 + 0x14);
      fVar34 = fVar29 + local_2b4;
      fVar28 = fVar34 + local_22c;
      fVar32 = fVar37 + fVar40;
      fVar37 = fVar32 + local_2b8;
    }
    else if (cVar4 == '$') {
      if ((int)uVar17 < 9) {
        return 0;
      }
      fVar29 = fVar43 + *(float *)(param_3 + 0x14);
      fVar40 = fVar40 + *(float *)(param_3 + 0x10);
      fVar32 = fVar42 + fVar29;
      fVar28 = fVar40 + fVar44;
      iVar26 = (int)fVar29;
      fVar29 = fVar47 + fVar28;
      fVar34 = fVar32 + fVar34;
      uVar16 = CONCAT71((int7)(CONCAT44(iVar12,iVar26) >> 8),4);
      uVar22 = CONCAT44(uVar23,(int)fVar34);
      uVar20 = (ulonglong)(uint)(int)fVar29;
      *(float *)(param_3 + 0x10) = fVar29;
      *(float *)(param_3 + 0x14) = fVar34;
      FUN_1804d4130(param_3,uVar16,uVar20,uVar22,(int)fVar40,iVar26,(int)fVar28,(int)fVar32);
      uVar21 = (undefined4)(uVar20 >> 0x20);
      uVar24 = (undefined4)((ulonglong)uVar22 >> 0x20);
      uVar23 = (undefined4)((ulonglong)uVar16 >> 0x20);
      fVar40 = fVar46 + *(float *)(param_3 + 0x10);
      fVar29 = auVar36._0_4_ + *(float *)(param_3 + 0x14);
      fVar32 = fVar45 + fVar40;
      fVar34 = fVar33 + fVar29;
      fVar37 = fVar37 + fVar32;
      fVar28 = fVar34 - (fVar42 + fVar43 + fVar33);
    }
    else {
      if (cVar4 != '%') {
        return 0;
      }
      if ((int)uVar17 < 0xb) {
        return 0;
      }
      fVar37 = fVar44 + fVar40 + fVar47 + fVar45 + local_27c;
      fVar29 = fVar42 + fVar43 + fVar46 + local_284 + fVar29;
      if (ABS(fVar37) <= ABS(fVar29)) {
        auVar38 = ZEXT416((uint)-fVar37);
        auVar35 = auVar30._0_16_;
      }
      else {
        auVar35 = ZEXT416((uint)-fVar29);
        auVar38 = auVar30._0_16_;
      }
      auVar39 = ZEXT1664(auVar38);
      auVar30 = ZEXT1664(auVar35);
      fVar29 = fVar43 + *(float *)(param_3 + 0x14);
      fVar40 = fVar40 + *(float *)(param_3 + 0x10);
      fVar37 = fVar42 + fVar29;
      fVar33 = fVar40 + fVar44;
      iVar26 = (int)fVar29;
      fVar29 = fVar47 + fVar33;
      fVar34 = fVar46 + fVar37;
      uVar16 = CONCAT71((int7)(CONCAT44(iVar12,iVar26) >> 8),4);
      uVar22 = CONCAT44(uVar23,(int)fVar34);
      uVar20 = (ulonglong)(uint)(int)fVar29;
      *(float *)(param_3 + 0x10) = fVar29;
      *(float *)(param_3 + 0x14) = fVar34;
      FUN_1804d4130(param_3,uVar16,uVar20,uVar22,(int)fVar40,iVar26,(int)fVar33,(int)fVar37);
      uVar21 = (undefined4)(uVar20 >> 0x20);
      uVar24 = (undefined4)((ulonglong)uVar22 >> 0x20);
      uVar23 = (undefined4)((ulonglong)uVar16 >> 0x20);
      fVar29 = local_284 + *(float *)(param_3 + 0x14);
      fVar40 = fVar45 + *(float *)(param_3 + 0x10);
      fVar34 = fVar29 + local_2b4;
      fVar32 = fVar40 + local_27c;
      fVar28 = fVar34 + auVar30._0_4_;
      fVar37 = fVar32 + auVar39._0_4_;
      fVar33 = local_284;
    }
    *(float *)(param_3 + 0x10) = fVar37;
    *(float *)(param_3 + 0x14) = fVar28;
    FUN_1804d4130(param_3,CONCAT71((int7)(CONCAT44(uVar23,(int)fVar29) >> 8),4),
                  CONCAT44(uVar21,(int)fVar37),CONCAT44(uVar24,(int)fVar28),(int)fVar40,(int)fVar29,
                  (int)fVar32,(int)fVar34);
    fVar37 = local_27c;
    break;
  case 0xe:
    if ((*(float *)(param_3 + 8) != *(float *)(param_3 + 0x10)) ||
       (*(float *)(param_3 + 0xc) != *(float *)(param_3 + 0x14))) {
      FUN_1804d4130(param_3,CONCAT71((int7)(int3)((uint)iVar12 >> 8),2),(int)*(float *)(param_3 + 8)
                    ,CONCAT44(uVar23,(int)*(float *)(param_3 + 0xc)),0,0,0,0);
    }
    return 1;
  case 0x13:
  case 0x14:
    if (iVar25 != 0) {
      local_280 = local_280 + (int)uVar17 / 2;
    }
    iVar26 = local_280 + 7;
    local_288 = 0;
    if (iVar26 < 0) {
      iVar26 = local_280 + 0xe;
    }
    local_298._8_4_ = (iVar26 >> 3) + iVar27;
    iVar25 = 0;
    if ((iVar19 < (int)local_298._8_4_) || ((int)local_298._8_4_ < 0)) {
      local_298._8_4_ = iVar19;
      iVar26 = iVar19;
    }
    else {
      iVar26 = local_298._8_4_;
    }
    goto LAB_1804d4789;
  case 0x15:
    if ((int)uVar17 < 2) {
      return 0;
    }
    uVar31 = (ulonglong)(uint)local_258[(longlong)(int)uVar17 + -1];
    uVar20 = (ulonglong)(uint)local_258[(longlong)(int)uVar17 + -2];
    goto LAB_1804d4768;
  case 0x16:
    if ((int)uVar17 < 1) {
      return 0;
    }
    uVar20 = (ulonglong)(uint)local_258[(longlong)(int)uVar17 + -1];
    uVar31 = auVar36._0_8_;
LAB_1804d4768:
    local_288 = 0;
    FUN_1804d4290(param_3,uVar20,uVar31);
    iVar25 = 0;
    break;
  case 0x18:
    if ((int)uVar17 < 8) {
      return 0;
    }
    if (5 < (int)(uVar17 - 2)) {
      iVar26 = 5;
      pfVar15 = local_258 + 2;
      do {
        iVar25 = iVar18;
        fVar29 = pfVar15[-1] + *(float *)(param_3 + 0x14);
        fVar40 = pfVar15[-2] + *(float *)(param_3 + 0x10);
        fVar34 = fVar29 + pfVar15[1];
        fVar32 = fVar40 + *pfVar15;
        fVar28 = fVar32 + pfVar15[2];
        fVar2 = fVar34 + pfVar15[3];
        iVar12 = (int)fVar29;
        lVar14 = CONCAT71((int7)(CONCAT44((int)((ulonglong)lVar14 >> 0x20),iVar12) >> 8),4);
        *(float *)(param_3 + 0x10) = fVar28;
        *(float *)(param_3 + 0x14) = fVar2;
        FUN_1804d4130(param_3,lVar14,(int)fVar28,(int)fVar2,(int)fVar40,iVar12,(int)fVar32,
                      (int)fVar34);
        iVar18 = iVar25 + 6;
        pfVar15 = pfVar15 + 6;
        iVar26 = iVar26 + 6;
      } while (iVar26 < (int)(uVar17 - 2));
      if ((int)uVar17 <= iVar25 + 7) {
        return 0;
      }
    }
    fVar29 = local_258[iVar18] + *(float *)(param_3 + 0x10);
    fVar40 = local_258[(longlong)iVar18 + 1] + *(float *)(param_3 + 0x14);
    *(float *)(param_3 + 0x10) = fVar29;
    *(float *)(param_3 + 0x14) = fVar40;
    FUN_1804d4130(param_3,2,(int)fVar29,(int)fVar40,0,0,0,0);
    iVar25 = local_288;
    break;
  case 0x19:
    if ((int)uVar17 < 8) {
      return 0;
    }
    if (1 < (int)(uVar17 - 6)) {
      iVar26 = 1;
      pfVar15 = local_258;
      do {
        iVar12 = iVar18;
        fVar29 = *(float *)(param_3 + 0x10) + *pfVar15;
        fVar40 = pfVar15[1] + *(float *)(param_3 + 0x14);
        lVar14 = CONCAT71((int7)((ulonglong)lVar14 >> 8),2);
        *(float *)(param_3 + 0x10) = fVar29;
        *(float *)(param_3 + 0x14) = fVar40;
        FUN_1804d4130(param_3,lVar14,(int)fVar29,(int)fVar40,0,0,0,0);
        iVar18 = iVar12 + 2;
        pfVar15 = pfVar15 + 2;
        iVar26 = iVar26 + 2;
      } while (iVar26 < (int)(uVar17 - 6));
      if ((int)uVar17 <= iVar12 + 7) {
        return 0;
      }
    }
    lVar10 = (longlong)iVar18;
    fVar29 = local_258[lVar10] + *(float *)(param_3 + 0x10);
    fVar40 = local_258[lVar10 + 1] + *(float *)(param_3 + 0x14);
    fVar34 = fVar29 + local_258[lVar10 + 2];
    fVar32 = fVar34 + local_258[lVar10 + 4];
    fVar28 = fVar40 + local_258[lVar10 + 3];
    fVar2 = fVar28 + local_258[lVar10 + 5];
    iVar26 = (int)fVar40;
    *(float *)(param_3 + 0x10) = fVar32;
    *(float *)(param_3 + 0x14) = fVar2;
    FUN_1804d4130(param_3,CONCAT71((int7)(CONCAT44((int)((ulonglong)lVar14 >> 0x20),iVar26) >> 8),4)
                  ,(int)fVar32,(int)fVar2,(int)fVar29,iVar26,(int)fVar34,(int)fVar28);
    iVar25 = local_288;
    break;
  case 0x1a:
  case 0x1b:
    if ((int)uVar17 < 4) {
      return 0;
    }
    uVar13 = uVar17 & 1;
    auVar35 = vpcmpeqd_avx(ZEXT416(uVar13),ZEXT416(0));
    iVar26 = uVar13 + 3;
    auVar35 = vblendvps_avx(auVar41._0_16_,auVar36._0_16_,auVar35);
    if (iVar26 < (int)uVar17) {
      pfVar15 = local_258 + (ulonglong)uVar13 + 2;
      do {
        if (bVar1 == 0x1b) {
          fVar40 = pfVar15[-2] + *(float *)(param_3 + 0x10);
          fVar34 = *(float *)(param_3 + 0x14) + auVar35._0_4_;
          fVar32 = fVar40 + pfVar15[-1];
          fVar28 = fVar34 + *pfVar15;
          fVar29 = fVar32 + pfVar15[1];
          fVar33 = fVar28 + auVar36._0_4_;
        }
        else {
          fVar34 = pfVar15[-2] + *(float *)(param_3 + 0x14);
          fVar40 = *(float *)(param_3 + 0x10) + auVar35._0_4_;
          fVar32 = fVar40 + pfVar15[-1];
          fVar28 = fVar34 + *pfVar15;
          fVar29 = fVar32 + auVar36._0_4_;
          fVar33 = fVar28 + pfVar15[1];
        }
        *(float *)(param_3 + 0x10) = fVar29;
        *(float *)(param_3 + 0x14) = fVar33;
        FUN_1804d4130(param_3,CONCAT71((int7)(CONCAT44((int)((ulonglong)param_3 >> 0x20),(int)fVar34
                                                      ) >> 8),4),(int)fVar29,(int)fVar33,(int)fVar40
                      ,(int)fVar34,(int)fVar32,(int)fVar28);
        iVar26 = iVar26 + 4;
        pfVar15 = pfVar15 + 4;
        auVar35 = auVar36._0_16_;
        fVar33 = local_284;
      } while (iVar26 < (int)uVar17);
      break;
    }
    fVar33 = local_284;
    goto LAB_1804d4783;
  case 0x1d:
LAB_1804d4eb9:
    if ((int)uVar17 < 1) {
      return 0;
    }
    uVar17 = uVar17 - 1;
    if (9 < iVar12) {
      return 0;
    }
    local_278 = iVar12 + 1;
    auStack_178[(longlong)iVar12 * 2] = local_298._0_8_;
    auStack_178[(longlong)iVar12 * 2 + 1] = local_298._8_8_;
    pauVar9 = &local_198;
    if (bVar1 != 10) {
      pauVar9 = (undefined1 (*) [16])(param_1 + 0x60);
    }
    iVar26 = *(int *)(*pauVar9 + 0xc);
    local_298._0_8_ = SUB168(*pauVar9,0);
    local_298._8_4_ = iVar26;
    if (-1 < *(longlong *)(*pauVar9 + 8)) {
      local_298._8_4_ = 0;
    }
    local_298._12_4_ = SUB164(*pauVar9,0xc);
    if ((int)local_298._8_4_ < iVar26) {
      lVar14 = (longlong)(int)local_298._8_4_;
      local_298._8_4_ = local_298._8_4_ + 1;
      uVar3 = *(undefined1 *)(lVar14 + local_298._0_8_);
    }
    else {
      uVar3 = 0;
    }
    if ((int)local_298._8_4_ < iVar26) {
      lVar14 = (longlong)(int)local_298._8_4_;
      local_298._8_4_ = local_298._8_4_ + 1;
      uVar5 = *(undefined1 *)(lVar14 + local_298._0_8_);
    }
    else {
      uVar5 = 0;
    }
    uVar13 = (uint)CONCAT11(uVar3,uVar5);
    if (uVar13 < 0x846c) {
      iVar26 = 0x6b;
      if (0x4d7 < uVar13) {
        iVar26 = 0x46b;
      }
    }
    else {
      iVar26 = 0x8000;
    }
    if (((int)local_258[(int)uVar17] + iVar26 < 0) ||
       ((int)uVar13 <= (int)local_258[(int)uVar17] + iVar26)) {
      local_268 = 0;
      uStack_260 = 0;
    }
    else {
      FUN_1804d22e0(&local_268,local_298);
    }
    if (uStack_260._4_4_ == 0) {
      return 0;
    }
    iVar26 = 0;
    auVar30 = ZEXT464((uint)local_2b8);
    local_298._8_4_ = 0;
    local_298._0_8_ = local_268;
    local_298._12_4_ = uStack_260._4_4_;
    local_2b0 = uStack_260._4_4_;
    local_2a8 = local_268;
    uVar20 = local_268;
    fVar29 = local_2b4;
    iVar12 = local_278;
    iVar19 = uStack_260._4_4_;
    goto LAB_1804d468a;
  case 0x1e:
    if ((int)uVar17 < 4) {
      return 0;
    }
    do {
      pfVar15 = (float *)(param_3 + 0x10);
      fVar29 = auVar36._0_4_;
      if (uVar17 - iVar18 == 5) {
        fVar29 = local_258[(longlong)iVar18 + 4];
      }
      fVar40 = auVar36._0_4_ + *pfVar15;
      fVar34 = local_258[iVar18] + *(float *)(param_3 + 0x14);
      fVar32 = fVar40 + local_258[(longlong)iVar18 + 1];
      fVar28 = fVar32 + local_258[(longlong)iVar18 + 3];
      fVar2 = fVar34 + local_258[(longlong)iVar18 + 2];
      iVar26 = (int)fVar34;
      fVar29 = fVar2 + fVar29;
      lVar14 = CONCAT71((int7)(CONCAT44((int)((ulonglong)pfVar15 >> 0x20),iVar26) >> 8),4);
      *pfVar15 = fVar28;
      *(float *)(param_3 + 0x14) = fVar29;
      FUN_1804d4130(param_3,lVar14,(int)fVar28,(int)fVar29,(int)fVar40,iVar26,(int)fVar32,(int)fVar2
                   );
      iVar18 = iVar18 + 4;
LAB_1804d4a28:
      if ((int)uVar17 <= iVar18 + 3) break;
      fVar29 = auVar36._0_4_;
      if (uVar17 - iVar18 == 5) {
        fVar29 = local_258[(longlong)iVar18 + 4];
      }
      fVar34 = auVar36._0_4_ + *(float *)(param_3 + 0x14);
      iVar26 = (int)fVar34;
      fVar40 = local_258[iVar18] + *(float *)(param_3 + 0x10);
      fVar34 = fVar34 + local_258[(longlong)iVar18 + 2];
      fVar32 = fVar34 + local_258[(longlong)iVar18 + 3];
      fVar28 = fVar40 + local_258[(longlong)iVar18 + 1];
      fVar29 = fVar28 + fVar29;
      *(float *)(param_3 + 0x10) = fVar29;
      *(float *)(param_3 + 0x14) = fVar32;
      FUN_1804d4130(param_3,CONCAT71((int7)(CONCAT44((int)((ulonglong)lVar14 >> 0x20),iVar26) >> 8),
                                     4),(int)fVar29,(int)fVar32,(int)fVar40,iVar26,(int)fVar28,
                    (int)fVar34);
      iVar26 = iVar18 + 7;
      iVar18 = iVar18 + 4;
    } while (iVar26 < (int)uVar17);
    break;
  case 0x1f:
    if (3 < (int)uVar17) goto LAB_1804d4a28;
    return 0;
  }
  uVar20 = local_2a8;
  fVar29 = local_2b4;
  iVar19 = local_2b0;
LAB_1804d4783:
  auVar30 = ZEXT464((uint)local_2b8);
  iVar26 = iVar27;
LAB_1804d4789:
  uVar17 = 0;
  iVar12 = local_278;
  goto LAB_1804d468a;
switchD_1804d46ef_caseD_b:
  if (iVar12 < 1) {
    return 0;
  }
  iVar12 = iVar12 + -1;
  local_298 = *(undefined1 (*) [16])(local_188 + lVar14 * 0x10);
  local_2b0 = local_298._12_4_;
  uVar20 = local_298._0_8_;
  iVar26 = local_298._8_4_;
  auVar30 = ZEXT464((uint)local_2b8);
  local_2a8 = uVar20;
  local_278 = iVar12;
  iVar19 = local_2b0;
  goto LAB_1804d468a;
}



