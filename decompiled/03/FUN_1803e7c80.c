// FUN_1803e7c80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803e7c80 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1803e7c80(longlong param_1,uint param_2,float param_3,uint param_4,longlong *param_5,
                  longlong *param_6,byte *param_7)

{
  longlong *plVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  byte *pbVar7;
  longlong *plVar8;
  char cVar9;
  undefined1 uVar10;
  int iVar11;
  uint *puVar12;
  uint *puVar13;
  float *pfVar14;
  byte **ppbVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  ulonglong uVar19;
  uint *puVar20;
  float *pfVar21;
  byte **ppbVar22;
  byte bVar23;
  longlong lVar24;
  byte bVar25;
  float fVar26;
  longlong lVar27;
  float fVar28;
  float fVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  uint uVar32;
  float *pfVar33;
  longlong lVar34;
  longlong *plVar35;
  longlong *plVar36;
  uint uVar37;
  byte *pbVar38;
  longlong lVar39;
  byte *pbVar40;
  uint uVar41;
  ulonglong uVar42;
  bool bVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined1 auVar47 [16];
  float fVar48;
  float fVar49;
  undefined1 auVar50 [64];
  undefined1 auStack_268 [32];
  uint local_248;
  float local_244;
  float local_240;
  float local_23c;
  float local_238 [2];
  byte *local_230;
  float local_228 [2];
  longlong *local_220;
  float local_218;
  float local_214;
  float local_210;
  float local_20c;
  uint local_208;
  longlong local_200;
  longlong local_1f8;
  float local_1f0 [2];
  byte *local_1e8;
  undefined8 local_1e0;
  int local_1d8;
  undefined1 local_1d4 [4];
  undefined8 local_1d0;
  int local_1c8;
  undefined1 local_1c4 [4];
  longlong *local_1c0;
  byte *local_1b8;
  uint local_1b0 [3];
  uint local_1a4 [3];
  ulonglong local_198;
  float local_190;
  float local_18c;
  ulonglong local_188;
  float local_180 [2];
  float local_178 [6];
  float local_160 [6];
  float local_148 [8];
  undefined1 local_128 [32];
  float local_108 [2];
  float *local_100;
  byte *local_f8;
  float *local_f0;
  float **local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_1808d5f00 ^ (ulonglong)auStack_268;
  uVar31 = (ulonglong)param_2;
  local_1c0 = param_5;
  local_220 = param_6;
  local_1b8 = param_7;
  if (param_1 == 0) {
  }
  if (param_2 < 0x10) {
  }
  if ((uint)param_3 < 0x10) {
  }
  if (0x1000 < param_2) {
  }
  if (0x1000 < (uint)param_3) {
  }
  if (param_4 < param_2 * 4) {
  }
  uVar42 = (uint)param_3 * uVar31;
  local_248 = param_2;
  local_23c = param_3;
  local_208 = param_4;
  local_200 = param_1;
  local_198 = uVar31;
  local_188 = uVar42;
  FUN_1801acf20(param_5,uVar42 * 4);
  lVar34 = *param_6;
  if ((ulonglong)(param_6[2] - lVar34) < uVar42) {
    FUN_1803f9450(param_6,uVar42);
    lVar34 = *param_6;
    FUN_18063ab10(lVar34,0,uVar42);
  }
  else {
    uVar30 = param_6[1] - lVar34;
    if (uVar30 < uVar42) {
      FUN_18063ab10(lVar34,0,uVar30);
      lVar34 = param_6[1];
      FUN_18063ab10(lVar34,0,uVar42 - uVar30);
      lVar34 = (uVar42 - uVar30) + lVar34;
      uVar31 = (ulonglong)local_248;
      param_3 = local_23c;
      goto LAB_1803e7dc5;
    }
    FUN_18063ab10(lVar34,0,uVar42);
    param_3 = local_23c;
  }
  lVar34 = lVar34 + uVar42;
LAB_1803e7dc5:
  param_6[1] = lVar34;
  if (param_6[3] != param_6[4]) {
    param_6[4] = param_6[3];
  }
  FUN_1803d2900();
  uVar37 = local_248;
  bVar43 = *local_1b8 < 0x80;
  local_1e8 = local_1b8 + 3;
  if (((*local_1b8 == 0x80) && (bVar43 = local_1b8[1] < 0x80, local_1b8[1] == 0x80)) &&
     (bVar43 = local_1b8[2] < 0x80, local_1b8[2] == 0x80)) {
    uVar32 = 0;
  }
  else {
    uVar32 = -(uint)bVar43 | 1;
  }
  local_210 = 0.0;
  if (uVar32 == 0) {
    local_108[0] = 0.0;
    local_20c = 0.0;
    fVar28 = 0.0;
    local_100 = (float *)0x0;
    local_1f8 = 0;
    do {
      uVar37 = 0;
      local_1d0 = (ulonglong)local_208 * (longlong)local_100;
      local_238[0] = 3.57331e-43;
      local_230 = (byte *)((ulonglong)local_230 & 0xffffffff00000000);
      do {
        lVar39 = (ulonglong)(uVar37 * 4) + local_1d0;
        lVar27 = (ulonglong)uVar37 + local_1f8;
        lVar34 = *local_1c0;
        iVar16 = *(byte *)(lVar39 + local_200) - 0x80;
        iVar11 = -iVar16;
        if (iVar11 < 0) {
          iVar11 = iVar16;
        }
        iVar17 = *(byte *)(lVar39 + 1 + local_200) - 0x80;
        iVar16 = -iVar17;
        if (iVar16 < 0) {
          iVar16 = iVar17;
        }
        iVar17 = *(byte *)(lVar39 + 2 + local_200) - 0x80;
        local_1e0 = CONCAT44(iVar16,iVar11);
        local_1d8 = -iVar17;
        if (local_1d8 < 0) {
          local_1d8 = iVar17;
        }
        iVar11 = thunk_FUN_1805f8630(&local_1e0,local_1d4);
        local_1f0[0] = (float)(((iVar11 + -2) * 0xff) / 6);
        ppbVar22 = &local_230;
        if (-1 < (int)local_1f0[0]) {
          ppbVar22 = (byte **)local_1f0;
        }
        ppbVar15 = (byte **)local_238;
        if ((int)local_1f0[0] < 0x100) {
          ppbVar15 = ppbVar22;
        }
        iVar11 = *(int *)ppbVar15;
        *(char *)(lVar34 + 3 + lVar27 * 4) = (char)iVar11;
        local_108[0] = (float)((int)local_108[0] + (uint)(0x7f < iVar11));
        if (0x7f < iVar11) {
          if (uVar37 < (uint)uVar31) {
            uVar31 = (ulonglong)uVar37;
          }
          if ((uint)local_20c < (uint)param_3) {
            param_3 = local_20c;
          }
          if ((uint)fVar28 < uVar37 + 1) {
            fVar28 = (float)(uVar37 + 1);
          }
          if ((uint)local_210 < (int)local_20c + 1U) {
            local_210 = (float)((int)local_20c + 1U);
          }
        }
        if (iVar11 == 0xff) {
          *(undefined1 *)(lVar34 + lVar27 * 4) = *(undefined1 *)(lVar39 + local_200);
          *(undefined1 *)(lVar34 + 1 + lVar27 * 4) = *(undefined1 *)(lVar39 + 1 + local_200);
          uVar10 = *(undefined1 *)(lVar39 + 2 + local_200);
        }
        else {
          if (iVar11 == 0) {
            uVar10 = 0;
          }
          else {
            local_244 = 0.0;
            local_228[0] = 3.57331e-43;
            local_240 = (float)((int)((*(byte *)(lVar39 + local_200) - 0x80) * 0xff + iVar11 * 0x80)
                               / iVar11);
            pfVar33 = &local_244;
            if (-1 < (int)local_240) {
              pfVar33 = &local_240;
            }
            pfVar21 = local_228;
            if ((int)local_240 < 0x100) {
              pfVar21 = pfVar33;
            }
            uVar10 = *(undefined1 *)pfVar21;
          }
          *(undefined1 *)(lVar34 + lVar27 * 4) = uVar10;
          if (iVar11 == 0) {
            uVar10 = 0;
          }
          else {
            local_244 = 0.0;
            local_228[0] = 3.57331e-43;
            local_240 = (float)((int)((*(byte *)(lVar39 + 1 + local_200) - 0x80) * 0xff +
                                     iVar11 * 0x80) / iVar11);
            pfVar33 = &local_244;
            if (-1 < (int)local_240) {
              pfVar33 = &local_240;
            }
            pfVar21 = local_228;
            if ((int)local_240 < 0x100) {
              pfVar21 = pfVar33;
            }
            uVar10 = *(undefined1 *)pfVar21;
          }
          *(undefined1 *)(lVar34 + 1 + lVar27 * 4) = uVar10;
          if (iVar11 == 0) {
            uVar10 = 0;
          }
          else {
            local_228[0] = 3.57331e-43;
            local_244 = 0.0;
            local_240 = (float)((int)((*(byte *)(lVar39 + 2 + local_200) - 0x80) * 0xff +
                                     iVar11 * 0x80) / iVar11);
            pfVar33 = &local_244;
            if (-1 < (int)local_240) {
              pfVar33 = &local_240;
            }
            pfVar21 = local_228;
            if ((int)local_240 < 0x100) {
              pfVar21 = pfVar33;
            }
            uVar10 = *(undefined1 *)pfVar21;
          }
        }
        uVar37 = uVar37 + 1;
        *(undefined1 *)(lVar34 + 2 + lVar27 * 4) = uVar10;
      } while (uVar37 < local_248);
      local_20c = (float)((int)local_20c + 1);
      local_100 = (float *)((longlong)local_100 + 1);
      local_1f8 = local_1f8 + (ulonglong)local_248;
      local_244 = (float)uVar31;
      local_214 = fVar28;
      local_218 = local_210;
      local_240 = local_108[0];
    } while ((uint)local_20c < (uint)local_23c);
    uVar32 = ((int)local_23c - 1U) * local_248;
    lVar34 = 0;
    plVar1 = local_220 + 3;
    iVar11 = -uVar32;
    plVar35 = local_220;
    uVar37 = local_248;
    local_238[0] = param_3;
    do {
      plVar36 = local_1c0;
      uVar31 = (ulonglong)uVar32;
      if (*(char *)(*plVar35 + lVar34) == '\0') {
        if (*(char *)(*local_1c0 + 3 + lVar34 * 4) == '\0') {
          *(undefined1 *)(*plVar35 + lVar34) = 1;
          local_230._0_4_ = iVar11 + uVar32;
          FUN_1802aa650(plVar1,&local_230);
          plVar35 = local_220;
          uVar37 = local_248;
        }
      }
      local_230 = (byte *)CONCAT44(local_230._4_4_,uVar32);
      if (*(char *)(*plVar35 + uVar31) == '\0') {
        if (*(char *)(*plVar36 + 3 + uVar31 * 4) == '\0') {
          *(undefined1 *)(*plVar35 + uVar31) = 1;
          FUN_1802aa650(plVar1,&local_230);
          plVar35 = local_220;
          uVar37 = local_248;
        }
      }
      uVar32 = uVar32 + 1;
      lVar34 = lVar34 + 1;
    } while (iVar11 + uVar32 < uVar37);
    fVar28 = 0.0;
    plVar1 = plVar35 + 3;
    do {
      uVar32 = (int)fVar28 * uVar37;
      if (*(char *)((ulonglong)uVar32 + *plVar35) == '\0') {
        if (*(char *)(*plVar36 + 3 + (ulonglong)uVar32 * 4) == '\0') {
          *(undefined1 *)((ulonglong)uVar32 + *plVar35) = 1;
          local_230._0_4_ = uVar32;
          FUN_1802aa650(plVar1,&local_230);
          plVar35 = local_220;
          uVar37 = local_248;
        }
      }
      fVar28 = (float)((int)fVar28 + 1);
      uVar32 = (int)fVar28 * uVar37 - 1;
      uVar31 = (ulonglong)uVar32;
      local_230 = (byte *)CONCAT44(local_230._4_4_,uVar32);
      if (*(char *)(uVar31 + *plVar35) == '\0') {
        if (*(char *)(*plVar36 + 3 + uVar31 * 4) == '\0') {
          *(undefined1 *)(uVar31 + *plVar35) = 1;
          FUN_1802aa650(plVar1,&local_230);
          plVar35 = local_220;
          uVar37 = local_248;
        }
      }
      plVar8 = local_1c0;
      fVar26 = local_23c;
    } while ((uint)fVar28 < (uint)local_23c);
    lVar34 = plVar35[3];
    uVar31 = 0;
    if (plVar35[4] - lVar34 >> 2 != 0) {
      plVar1 = plVar35 + 3;
      plVar36 = plVar35;
      do {
        uVar32 = *(uint *)(lVar34 + uVar31 * 4);
        uVar41 = uVar32 / uVar37;
        uVar18 = uVar32 % uVar37;
        if (uVar18 == 0) {
LAB_1803e8d98:
          local_230._0_4_ = uVar32 + 1;
          uVar42 = (ulonglong)(uint)local_230;
          if (*(char *)(*plVar36 + uVar42) == '\0') {
            if (*(char *)(*plVar8 + 3 + uVar42 * 4) == '\0') {
              *(undefined1 *)(uVar42 + *plVar36) = 1;
              FUN_1802aa650(plVar1);
              plVar36 = local_220;
              uVar37 = local_248;
            }
          }
        }
        else {
          local_230._0_4_ = uVar32 - 1;
          uVar42 = (ulonglong)(uint)local_230;
          if ((*(char *)(uVar42 + *plVar36) == '\0') &&
             (*(char *)(*plVar8 + 3 + uVar42 * 4) == '\0')) {
            *(undefined1 *)(uVar42 + *plVar36) = 1;
            FUN_1802aa650(plVar1);
            uVar37 = local_248;
          }
          plVar36 = local_220;
          if (uVar18 + 1 < uVar37) goto LAB_1803e8d98;
        }
        if (uVar41 == 0) {
LAB_1803e8e18:
          uVar42 = (ulonglong)(uVar32 + uVar37);
          local_230 = (byte *)CONCAT44(local_230._4_4_,uVar32 + uVar37);
          if ((*(char *)(*plVar36 + uVar42) == '\0') &&
             (*(char *)(*plVar8 + 3 + uVar42 * 4) == '\0')) {
            *(undefined1 *)(uVar42 + *plVar36) = 1;
            FUN_1802aa650(plVar1);
          }
        }
        else {
          uVar18 = uVar32 - uVar37;
          local_230 = (byte *)CONCAT44(local_230._4_4_,uVar18);
          if (*(char *)(*plVar36 + (ulonglong)uVar18) == '\0') {
            if (*(char *)(*plVar8 + 3 + (ulonglong)uVar18 * 4) == '\0') {
              *(undefined1 *)((ulonglong)uVar18 + *plVar36) = 1;
              FUN_1802aa650(plVar1);
              plVar36 = local_220;
              uVar37 = local_248;
            }
          }
          if (uVar41 + 1 < (uint)fVar26) goto LAB_1803e8e18;
        }
        lVar34 = *plVar1;
        uVar31 = uVar31 + 1;
        plVar36 = local_220;
        uVar37 = local_248;
      } while (uVar31 < (ulonglong)(plVar35[4] - lVar34 >> 2));
    }
    local_100 = (float *)(ulonglong)(uint)local_23c;
    lVar34 = 0;
    lVar27 = 0;
    do {
      uVar37 = 0;
      lVar39 = lVar27;
      do {
        if ((*(char *)(lVar39 + *local_220) == '\0') &&
           (*(char *)(*local_1c0 + 3 + lVar39 * 4) == '\0')) {
          uVar32 = uVar37 * 4;
          lVar24 = (ulonglong)local_208 * lVar34 + local_200;
          *(undefined1 *)(*local_1c0 + lVar39 * 4) = *(undefined1 *)((ulonglong)uVar32 + lVar24);
          *(undefined1 *)(*local_1c0 + 1 + lVar39 * 4) =
               *(undefined1 *)((ulonglong)uVar32 + 1 + lVar24);
          *(undefined1 *)(*local_1c0 + 2 + lVar39 * 4) =
               *(undefined1 *)((ulonglong)uVar32 + 2 + lVar24);
          *(undefined1 *)(*local_1c0 + 3 + lVar39 * 4) = 0xff;
        }
        uVar37 = uVar37 + 1;
        lVar39 = lVar39 + 1;
      } while (uVar37 < local_248);
      lVar34 = lVar34 + 1;
      lVar27 = lVar27 + (ulonglong)local_248;
      local_100 = (float *)((longlong)local_100 - 1);
    } while (local_100 != (float *)0x0);
    uVar31 = 8;
    if (8 < local_188 / 10000) {
      uVar31 = local_188 / 10000;
    }
    if ((uint)local_240 < uVar31) {
    }
    if (local_220[3] == local_220[4]) {
    }
    uVar31 = (ulonglong)local_248;
    local_210 = local_214;
    local_214 = local_244;
  }
  else {
    uVar42 = (ulonglong)local_248;
    local_240 = 0.0;
    fVar28 = 0.0;
    local_218 = 0.0;
    local_244 = 0.0;
    local_1f8 = 0;
    local_1e0 = 0;
    local_238[0] = param_3;
    local_214 = (float)uVar31;
    do {
      lVar34 = local_200;
      uVar32 = 0;
      lVar39 = (ulonglong)local_208 * local_1f8;
      lVar27 = local_1e0;
      do {
        lVar24 = (ulonglong)(uVar32 * 4) + lVar39;
        iVar16 = (uint)*(byte *)(lVar24 + lVar34) - (uint)*local_1b8;
        iVar11 = -iVar16;
        if (iVar11 < 0) {
          iVar11 = iVar16;
        }
        iVar17 = (uint)*(byte *)(lVar24 + 1 + lVar34) - (uint)local_1b8[1];
        iVar16 = -iVar17;
        if (iVar16 < 0) {
          iVar16 = iVar17;
        }
        local_1d0 = CONCAT44(iVar16,iVar11);
        iVar11 = (uint)*(byte *)(lVar24 + 2 + lVar34) - (uint)local_1b8[2];
        local_1c8 = -iVar11;
        if (local_1c8 < 0) {
          local_1c8 = iVar11;
        }
        iVar11 = thunk_FUN_1805f8630(&local_1d0,local_1c4);
        pbVar38 = local_1e8;
        uVar10 = 7;
        if (iVar11 < 4) {
          uVar10 = 0;
        }
        *(undefined1 *)(lVar27 + *local_220) = uVar10;
        if (uVar32 != 0) {
          lVar24 = *local_220;
          uVar18 = *(byte *)(lVar27 + -1 + lVar24) + 1;
          bVar23 = *(byte *)(lVar27 + lVar24);
          if (uVar18 < *(byte *)(lVar27 + lVar24)) {
            bVar23 = (byte)uVar18;
          }
          *(byte *)(lVar27 + lVar24) = bVar23;
        }
        if (fVar28 != 0.0) {
          lVar24 = *local_220;
          uVar18 = *(byte *)((lVar27 - uVar42) + lVar24) + 1;
          bVar23 = *(byte *)(lVar27 + lVar24);
          if (uVar18 < *(byte *)(lVar27 + lVar24)) {
            bVar23 = (byte)uVar18;
          }
          *(byte *)(lVar27 + lVar24) = bVar23;
        }
        uVar32 = uVar32 + 1;
        lVar27 = lVar27 + 1;
      } while (uVar32 < uVar37);
      fVar28 = (float)((int)fVar28 + 1);
      local_1f8 = local_1f8 + 1;
      local_1e0 = local_1e0 + uVar42;
    } while ((uint)fVar28 < (uint)local_23c);
    uVar31 = (ulonglong)local_248;
    uVar42 = local_188;
    uVar30 = local_198;
    fVar28 = local_23c;
    do {
      uVar42 = uVar42 - uVar30;
      fVar26 = (float)((int)fVar28 - 1);
      uVar19 = uVar31;
      if ((uint)fVar28 < (uint)local_23c) {
        do {
          uVar37 = (uint)uVar19 - 1;
          lVar34 = uVar37 + uVar42;
          if ((uint)uVar19 < local_248) {
            lVar27 = *local_220;
            uVar32 = *(byte *)(lVar27 + 1 + lVar34) + 1;
            bVar23 = *(byte *)(lVar27 + lVar34);
            if (uVar32 < *(byte *)(lVar27 + lVar34)) {
              bVar23 = (byte)uVar32;
            }
            *(byte *)(lVar27 + lVar34) = bVar23;
          }
          lVar27 = *local_220;
          uVar32 = *(byte *)(lVar27 + uVar30 + lVar34) + 1;
          bVar23 = *(byte *)(lVar27 + lVar34);
          if (uVar32 < *(byte *)(lVar27 + lVar34)) {
            bVar23 = (byte)uVar32;
          }
          *(byte *)(lVar27 + lVar34) = bVar23;
          uVar19 = (ulonglong)uVar37;
        } while (uVar37 != 0);
      }
      else {
        do {
          uVar37 = (uint)uVar19 - 1;
          lVar34 = uVar37 + uVar42;
          if ((uint)uVar19 < local_248) {
            lVar27 = *local_220;
            uVar32 = *(byte *)(lVar27 + 1 + lVar34) + 1;
            bVar23 = *(byte *)(lVar27 + lVar34);
            if (uVar32 < *(byte *)(lVar27 + lVar34)) {
              bVar23 = (byte)uVar32;
            }
            *(byte *)(lVar27 + lVar34) = bVar23;
          }
          uVar19 = (ulonglong)uVar37;
        } while (uVar37 != 0);
        uVar30 = uVar31;
      }
      fVar28 = fVar26;
    } while (fVar26 != 0.0);
    fVar28 = 255.0;
    if ((DAT_180c7c8f0 & 1) == 0) {
      DAT_180c7c8f0 = DAT_180c7c8f0 | 1;
      FUN_18063ab10(&DAT_180c7c4f0,0,0x400);
      fVar49 = 0.04045;
      fVar26 = 12.92;
      fVar29 = 0.055;
      fVar44 = 1.055;
      auVar50 = ZEXT464(0x4019999a);
      pfVar33 = (float *)&DAT_180c7c4f0;
      uVar37 = 0;
      do {
        fVar48 = (float)uVar37 / fVar28;
        if (fVar49 < fVar48) {
          auVar47._0_4_ = (fVar48 + fVar29) / fVar44;
          auVar47._4_12_ = SUB6012((undefined1  [60])0x0,0);
          fVar48 = (float)FUN_180637bd0(auVar47._0_8_,auVar50._0_8_);
        }
        else {
          fVar48 = fVar48 / fVar26;
        }
        *pfVar33 = fVar48 * fVar28;
        pfVar33 = pfVar33 + 1;
        uVar37 = uVar37 + 1;
      } while (uVar37 < 0x100);
    }
    pbVar40 = local_1b8;
    local_148[0] = -NAN;
    local_148[1] = 0.0;
    local_148[2] = 1.4013e-45;
    local_148[3] = 0.0;
    local_148[4] = 0.0;
    local_148[5] = -NAN;
    local_148[6] = 0.0;
    local_148[7] = 1.4013e-45;
    local_178[0] = (float)*local_1b8;
    local_178[1] = (float)local_1b8[1];
    local_178[2] = (float)local_1b8[2];
    local_178[3] = (float)(&DAT_180c7c4f0)[*local_1b8];
    local_178[4] = (float)(&DAT_180c7c4f0)[local_1b8[1]];
    local_178[5] = (float)(&DAT_180c7c4f0)[local_1b8[2]];
    local_128 = _DAT_18086de40;
    iVar11 = FUN_1805f9d20(local_1b8,pbVar38,0);
    fVar28 = 1.0;
    fVar49 = 0.005;
    local_108[0] = (float)(iVar11 - (int)pbVar40);
    local_100 = local_108;
    local_f8 = pbVar40;
    local_f0 = local_108;
    local_228[0] = 0.0;
    local_e8 = &local_100;
    local_1e0 = 0;
    local_1f8 = 0;
    fVar26 = 0.0;
    lVar34 = local_200;
    do {
      local_1d0 = (ulonglong)local_208 * local_1e0;
      local_20c = 0.0;
      fVar29 = local_228[0];
      do {
        fVar44 = local_20c;
        lVar27 = (ulonglong)(uint)local_20c + local_1f8;
        local_230 = (byte *)((ulonglong)(uint)((int)local_20c * 4) + local_1d0 + lVar34);
        puVar2 = (undefined4 *)(*local_1c0 + lVar27 * 4);
        if (*(char *)(lVar27 + *local_220) == '\0') {
          local_218 = (float)((int)local_218 + 1);
          *puVar2 = 0;
        }
        else {
          fVar48 = fVar28;
          local_1e8 = (byte *)puVar2;
          FUN_18063aed0(puVar2,local_230,3);
          *(undefined1 *)((longlong)puVar2 + 3) = 0xff;
          lVar39 = *local_220;
          bVar23 = *(byte *)(lVar39 + lVar27);
          if (bVar23 < 7) {
LAB_1803e848e:
            fVar29 = 1e+30;
            pfVar33 = local_148;
            local_160[0] = (float)*local_230;
            local_160[1] = (float)local_230[1];
            local_160[2] = (float)local_230[2];
            local_160[3] = (float)(&DAT_180c7c4f0)[*local_230];
            local_160[4] = (float)(&DAT_180c7c4f0)[local_230[1]];
            local_160[5] = (float)(&DAT_180c7c4f0)[local_230[2]];
            pbVar38 = (byte *)0x0;
            fVar28 = fVar48;
LAB_1803e8510:
            fVar5 = *pfVar33;
            iVar11 = 1;
            fVar45 = pfVar33[1];
LAB_1803e8520:
            uVar37 = iVar11 * (int)fVar45 + (int)local_228[0];
            iVar16 = iVar11 * (int)fVar5 + (int)fVar44;
            if (((-1 < iVar16) && (-1 < (int)uVar37)) &&
               ((iVar16 < (int)uVar31 && ((int)uVar37 < (int)local_23c)))) {
              if (*(byte *)((longlong)iVar16 + (longlong)(int)uVar37 * uVar31 + *local_220) < 7)
              goto LAB_1803e859f;
              pbVar40 = (byte *)((ulonglong)(uint)(iVar16 * 4) +
                                local_200 + (ulonglong)uVar37 * (ulonglong)local_208);
              cVar9 = FUN_1803e9030(&local_f8,pbVar40);
              if (cVar9 != '\0') {
                uVar31 = (ulonglong)local_248;
                goto LAB_1803e859f;
              }
              uVar37 = 0;
              lVar34 = 0;
              do {
                if (uVar37 == 0) {
                  fVar44 = (float)*pbVar40;
                }
                else {
                  fVar44 = (float)(&DAT_180c7c4f0)[*pbVar40];
                }
                fVar44 = fVar44 - *(float *)((longlong)local_178 + lVar34);
                fVar5 = *(float *)((longlong)local_160 + lVar34) -
                        *(float *)((longlong)local_178 + lVar34);
                if (uVar37 == 0) {
                  fVar45 = (float)pbVar40[1];
                }
                else {
                  fVar45 = (float)(&DAT_180c7c4f0)[pbVar40[1]];
                }
                fVar3 = *(float *)((longlong)local_178 + lVar34 + 4);
                fVar45 = fVar45 - fVar3;
                fVar3 = *(float *)((longlong)local_160 + lVar34 + 4) - fVar3;
                if (uVar37 == 0) {
                  fVar46 = (float)pbVar40[2];
                }
                else {
                  fVar46 = (float)(&DAT_180c7c4f0)[pbVar40[2]];
                }
                fVar4 = *(float *)((longlong)local_178 + lVar34 + 8);
                fVar46 = fVar46 - fVar4;
                fVar4 = *(float *)((longlong)local_160 + lVar34 + 8) - fVar4;
                fVar6 = fVar44 * fVar44 + fVar26 + fVar45 * fVar45 + fVar46 * fVar46;
                if (16.0 <= fVar6) {
                  local_18c = (fVar5 * fVar44 + fVar26 + fVar3 * fVar45 + fVar4 * fVar46) / fVar6;
                  pfVar21 = &local_190;
                  if (fVar26 <= local_18c) {
                    pfVar21 = &local_18c;
                  }
                  local_180[0] = fVar28;
                  pfVar14 = local_180;
                  if (local_18c <= fVar28) {
                    pfVar14 = pfVar21;
                  }
                  local_190 = fVar26;
                  fVar6 = *pfVar14;
                  if (fVar49 <= fVar6) {
                    fVar5 = fVar5 - fVar6 * fVar44;
                    fVar3 = fVar3 - fVar6 * fVar45;
                    fVar4 = fVar4 - fVar6 * fVar46;
                    fVar44 = (float)(iVar11 * iVar11) * 0.001 + fVar5 * fVar5 + fVar3 * fVar3 +
                             fVar4 * fVar4;
                    if (fVar44 < fVar29) {
                      pbVar38 = pbVar40;
                      fVar29 = fVar44;
                      fVar48 = fVar6;
                    }
                  }
                }
                uVar37 = uVar37 + 1;
                lVar34 = lVar34 + 0xc;
              } while (uVar37 < 2);
              fVar44 = local_20c;
            }
            goto LAB_1803e873c;
          }
          cVar9 = FUN_1803e9030(&local_f8,local_230);
          if (cVar9 != '\0') {
            pfVar33 = local_148;
            local_1a4[2] = (int)uVar31 + -1;
            local_1a4[0] = 0;
            local_1b0[0] = 0;
            do {
              local_1b0[2] = (int)local_23c - 1U;
              local_1a4[1] = (int)fVar44 + (int)*pfVar33 * 6;
              local_1b0[1] = (int)fVar29 + (int)pfVar33[1] * 6;
              puVar20 = local_1b0;
              if (-1 < (int)local_1b0[1]) {
                puVar20 = local_1b0 + 1;
              }
              puVar12 = local_1b0 + 2;
              if ((int)local_1b0[1] <= (int)((int)local_23c - 1U)) {
                puVar12 = puVar20;
              }
              puVar20 = local_1a4;
              if (-1 < (int)local_1a4[1]) {
                puVar20 = local_1a4 + 1;
              }
              puVar13 = local_1a4 + 2;
              if ((int)local_1a4[1] <= (int)local_1a4[2]) {
                puVar13 = puVar20;
              }
              if (*(byte *)((ulonglong)*puVar13 + lVar39 + *puVar12 * uVar30) < 3)
              goto LAB_1803e848e;
              pfVar33 = pfVar33 + 2;
            } while (pfVar33 != local_108);
          }
          fVar28 = fVar48;
          if (bVar23 < 7) goto LAB_1803e848e;
LAB_1803e889b:
          local_20c = fVar44;
LAB_1803e889f:
          if (0x7f < *(byte *)((longlong)local_1e8 + 3)) {
            local_240 = (float)((int)local_240 + 1);
            if ((uint)local_20c < (uint)local_214) {
              local_214 = local_20c;
            }
            if ((uint)fVar29 < (uint)local_238[0]) {
              local_238[0] = fVar29;
            }
            if ((uint)local_210 < (int)local_20c + 1U) {
              local_210 = (float)((int)local_20c + 1U);
            }
            if ((uint)local_244 < (int)fVar29 + 1U) {
              local_244 = (float)((int)fVar29 + 1U);
            }
          }
        }
        local_20c = (float)((int)local_20c + 1);
      } while ((uint)local_20c < (uint)(float)uVar31);
      local_1e0 = local_1e0 + 1;
      local_228[0] = (float)((int)fVar29 + 1);
      local_1f8 = local_1f8 + uVar30;
    } while ((uint)local_228[0] < (uint)local_23c);
    if (local_218 == 0.0) {
    }
    uVar42 = 8;
    if (8 < local_188 / 10000) {
      uVar42 = local_188 / 10000;
    }
    if ((uint)local_240 < uVar42) {
    }
    local_218 = local_244;
  }
  *(float *)(local_220 + 6) = (float)(uint)local_214 / (float)uVar31;
  *(float *)((longlong)local_220 + 0x34) = (float)(uint)local_238[0] / (float)(uint)local_23c;
  *(float *)(local_220 + 7) = (float)(uint)local_210 / (float)uVar31;
  *(float *)((longlong)local_220 + 0x3c) = (float)(uint)local_218 / (float)(uint)local_23c;
                    /* WARNING: Read-only address (ram,0x00018086de40) is written */
LAB_1803e859f:
  iVar11 = iVar11 + 1;
  if (0xc < iVar11) goto LAB_1803e873c;
  goto LAB_1803e8520;
LAB_1803e873c:
  pbVar7 = local_1e8;
  pbVar40 = local_230;
  uVar31 = (ulonglong)local_248;
  pfVar33 = pfVar33 + 2;
  if (pfVar33 == local_108) {
    if (pbVar38 == (byte *)0x0) {
      uVar31 = (ulonglong)(((int)*local_100 + 2U) % 3);
      uVar37 = ((int)*local_100 + 1U) % 3;
      bVar23 = *(byte *)(uVar31 + (longlong)local_1e8);
      bVar25 = *(byte *)((ulonglong)uVar37 + (longlong)local_1e8);
      if (bVar25 < bVar23) {
        bVar25 = bVar23;
      }
      cVar9 = FUN_1803e9030(&local_f8,local_230);
      if (cVar9 != '\0') {
        bVar23 = local_1b8[uVar37];
        if (local_1b8[uVar37] < local_1b8[uVar31]) {
          bVar23 = local_1b8[uVar31];
        }
        local_1f0[0] = fVar28 - (float)(int)((uint)pbVar40[(uint)local_108[0]] - (uint)bVar25) /
                                (float)(int)((uint)local_1b8[(uint)local_108[0]] - (uint)bVar23);
        local_230 = (byte *)CONCAT44(local_230._4_4_,fVar28);
        local_20c = fVar26;
        ppbVar22 = (byte **)&local_20c;
        if (fVar26 <= local_1f0[0]) {
          ppbVar22 = (byte **)local_1f0;
        }
        ppbVar15 = &local_230;
        if (local_1f0[0] <= fVar28) {
          ppbVar15 = ppbVar22;
        }
        uVar10 = FUN_18060eb80(*(float *)ppbVar15 * 255.0);
        *(undefined1 *)((longlong)pbVar7 + 3) = uVar10;
      }
      bVar23 = *(byte *)((ulonglong)(uint)local_108[0] + (longlong)pbVar7);
      if (bVar25 < bVar23) {
        bVar23 = bVar25;
      }
      *(byte *)((ulonglong)(uint)local_108[0] + (longlong)pbVar7) = bVar23;
      uVar31 = (ulonglong)local_248;
      lVar34 = local_200;
      uVar30 = local_198;
      fVar29 = local_228[0];
      goto LAB_1803e889b;
    }
    FUN_18063aed0(local_1e8,pbVar38,3);
    uVar10 = FUN_18060eb80(fVar48 * 255.0);
    *(undefined1 *)((longlong)pbVar7 + 3) = uVar10;
    local_1e8 = pbVar7;
    lVar34 = local_200;
    uVar30 = local_198;
    local_20c = fVar44;
    fVar29 = local_228[0];
    goto LAB_1803e889f;
  }
  goto LAB_1803e8510;
}



