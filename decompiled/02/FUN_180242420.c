// FUN_180242420 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180242420 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180242420(float *param_1,longlong param_2)

{
  uint uVar1;
  uint *puVar2;
  longlong lVar3;
  int iVar4;
  ULONGLONG UVar5;
  float *pfVar6;
  ulonglong uVar7;
  float fVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined1 auVar11 [16];
  undefined1 extraout_var [56];
  float fVar12;
  float fVar13;
  undefined1 auVar14 [64];
  float fVar15;
  float fVar16;
  undefined1 auVar17 [64];
  float fVar18;
  float fVar19;
  undefined1 auStack_288 [32];
  undefined1 *local_268;
  ulonglong local_258;
  uint *local_250;
  undefined8 local_248;
  longlong lStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 local_228;
  float local_220;
  undefined *local_218;
  float local_210;
  undefined1 local_208 [32];
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1b8 [156];
  uint local_11c;
  uint local_118;
  float local_114;
  float local_10c;
  ulonglong local_a8;
  
  local_a8 = DAT_1808d5f00 ^ (ulonglong)auStack_288;
  *(undefined1 *)((longlong)param_1 + 0xf) = 0;
  if (DAT_180cad2e8 == '\0') {
LAB_180242a42:
    FUN_1802439f0(param_1);
    param_1[0] = 0.0;
    param_1[1] = 0.0;
    param_1[2] = 0.0;
    *(undefined2 *)(param_1 + 3) = 0;
    *(undefined1 *)((longlong)param_1 + 0xe) = 0;
    param_1[0xc] = 0.0;
    param_1[0xd] = 0.0;
    param_1[8] = 0.0;
    param_1[9] = 0.0;
  }
  AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  local_248 = _DAT_180bb8890;
  lStack_240 = lRam0000000180bb8898;
  uStack_238 = uRam0000000180bb88a0;
  uStack_230 = uRam0000000180bb88a8;
  local_1e8 = _DAT_180bb88b0;
  uStack_1e0 = uRam0000000180bb88b8;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  if (5 < DAT_180cc9348 - 1U) goto LAB_180242a42;
  *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) | 1;
  local_250 = (uint *)0x0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    local_250 = (uint *)(*(longlong *)(param_2 + 0x40) + 0x10);
  }
  local_258 = (ulonglong)(*(uint *)(param_2 + 0x60) & 0x618);
  uVar7 = 0xffffffffffffffff;
  iVar4 = DAT_180c6449c;
  if (DAT_180c6449c == 0) {
    UVar5 = GetTickCount64();
    if (UVar5 < DAT_180c64488) {
      iVar4 = 0;
    }
    else {
      local_218 = &DAT_1808ee120;
      iVar4 = FUN_1805f68d0(&DAT_1808ee120);
      if (iVar4 != 0) goto LAB_180242aaf;
      if (DAT_1808ee16c == 0x7fffffff) {
        DAT_1808ee16c = 0x7ffffffe;
        goto LAB_180242acd;
      }
      if ((DAT_180c6449c == 0) && (DAT_180c64488 <= UVar5)) {
        DAT_180c6449c = FUN_1804174b0("C_BaseEntity",0x9d930423);
        if (DAT_180c6449c == 0) {
          DAT_180c64488 = UVar5 + 1000;
        }
        else {
          DAT_180c64488 = 0xffffffffffffffff;
        }
      }
      iVar4 = DAT_180c6449c;
      FUN_1805f68fc(&DAT_1808ee120);
    }
  }
  lVar3 = lStack_240;
  local_218 = *(undefined **)(iVar4 + lStack_240);
  iVar4 = DAT_180c64498;
  if (DAT_180c64498 == 0) {
    UVar5 = GetTickCount64();
    if (UVar5 < DAT_180c64490) {
      iVar4 = 0;
    }
    else {
      local_228 = &DAT_1808ee080;
      iVar4 = FUN_1805f68d0(&DAT_1808ee080);
      if (iVar4 != 0) goto LAB_180242aaf;
      if (DAT_1808ee0cc == 0x7fffffff) {
        DAT_1808ee0cc = 0x7ffffffe;
        goto LAB_180242acd;
      }
      if ((DAT_180c64498 == 0) && (DAT_180c64490 <= UVar5)) {
        DAT_180c64498 = FUN_1804174b0("CGameSceneNode",0xe8b4eae5);
        if (DAT_180c64498 == 0) {
          DAT_180c64490 = UVar5 + 1000;
        }
        else {
          DAT_180c64490 = 0xffffffffffffffff;
        }
      }
      iVar4 = DAT_180c64498;
      FUN_1805f68fc(&DAT_1808ee080);
    }
  }
  puVar10 = *(undefined **)(local_218 + iVar4);
  fVar12 = *(float *)(local_218 + (longlong)iVar4 + 8);
  local_228 = puVar10;
  if (param_1[1] * param_1[1] + *param_1 * *param_1 + param_1[2] * param_1[2] < 0.001) {
    local_210 = fVar12 + 64.0;
    local_220 = fVar12 - 8192.0;
    local_218 = puVar10;
    uVar9 = FUN_180419410();
    local_268 = local_208;
    FUN_180417b00(uVar9,local_1b8,&local_218,&local_228);
    if ((0.0 < local_10c) && (local_10c < 0.997)) {
      fVar12 = local_114 + 1.0;
      auVar11 = vunpcklps_avx(ZEXT416(local_11c),ZEXT416(local_118));
      puVar10 = auVar11._0_8_;
    }
    *(undefined **)param_1 = puVar10;
    param_1[2] = fVar12;
    *(undefined2 *)(param_1 + 3) = 0;
    *(undefined1 *)((longlong)param_1 + 0xe) = 1;
    FUN_180242af0(param_1);
    *(ulonglong *)(param_1 + 0xc) = local_258;
  }
  FUN_1802434d0(param_1);
  fVar12 = ((float)local_228 - *param_1) * ((float)local_228 - *param_1) +
           (local_228._4_4_ - param_1[1]) * (local_228._4_4_ - param_1[1]);
  fVar15 = 0.0;
  fVar8 = local_228._4_4_;
  fVar19 = (float)local_228;
  if (fVar12 == 0.0) {
    auVar14 = ZEXT864(0);
  }
  else if (fVar12 < 0.0) {
    auVar14._0_8_ = FUN_18061e150(fVar12);
    auVar14._8_56_ = extraout_var;
    auVar14 = ZEXT1664(auVar14._0_16_);
  }
  else {
    auVar14 = ZEXT464((uint)SQRT(fVar12));
  }
  if (*(char *)(param_1 + 3) != '\0') {
    if ((~*(ulonglong *)(param_1 + 0xc) & local_258) == 0) {
      if ((DAT_180b8e114 & 1) != 0) {
        iVar4 = DAT_180c64478;
        if (DAT_180c64478 == 0) {
          UVar5 = GetTickCount64();
          if (UVar5 < DAT_180c64480) {
            iVar4 = 0;
          }
          else {
            local_228 = &DAT_1808ee0d0;
            iVar4 = FUN_1805f68d0(&DAT_1808ee0d0);
            if (iVar4 != 0) {
LAB_180242aaf:
                    /* WARNING: Subroutine does not return */
              FUN_1805f6d44(5);
            }
            if (DAT_1808ee11c == 0x7fffffff) {
              DAT_1808ee11c = 0x7ffffffe;
LAB_180242acd:
                    /* WARNING: Subroutine does not return */
              FUN_1805f6d44(6);
            }
            if ((DAT_180c64478 == 0) && (DAT_180c64480 <= UVar5)) {
              DAT_180c64478 = FUN_1804174b0("C_BaseEntity",0x16c096cc);
              if (DAT_180c64478 == 0) {
                uVar7 = UVar5 + 1000;
              }
              DAT_180c64480 = uVar7;
            }
            iVar4 = DAT_180c64478;
            FUN_1805f68fc(&DAT_1808ee0d0);
          }
        }
        fVar13 = auVar14._0_4_;
        local_228 = *(undefined **)(iVar4 + lVar3);
        auVar11._8_8_ = 0;
        auVar11._0_8_ = local_228;
        auVar11 = vshufps_avx(auVar11,auVar11,0x55);
        auVar17 = ZEXT1664(auVar11);
        fVar16 = auVar11._0_4_;
        fVar12 = fVar16 * fVar16 + (float)local_228 * (float)local_228;
        fVar18 = (float)local_228;
        if (fVar12 == fVar15) {
          fVar12 = 0.0;
        }
        else if (fVar12 < 0.0) {
          fVar12 = (float)FUN_18061e150(fVar12);
          fVar16 = auVar17._0_4_;
          fVar13 = auVar14._0_4_;
        }
        else {
          fVar12 = SQRT(fVar12);
        }
        puVar2 = local_250;
        if ((5.0 <= fVar13) || (15.0 <= fVar12)) {
          if ((fVar12 * 0.1 <= fVar13) || (fVar12 <= 15.0)) {
            fVar18 = *param_1 - fVar19;
            fVar16 = param_1[1] - fVar8;
          }
          else {
            fVar16 = fVar16 * -1.0;
            fVar18 = fVar18 * -1.0;
          }
          *(undefined1 *)((longlong)param_1 + 0xf) = 1;
          pfVar6 = (float *)&DAT_0000000c;
          if (*(longlong *)(local_250 + 0xc) != 0) {
            pfVar6 = (float *)(*(longlong *)(local_250 + 0xc) + 0x1c);
          }
          fVar12 = (float)FUN_180636c80(fVar16,fVar18);
          uVar1 = *puVar2;
          fVar12 = (*pfVar6 - fVar12 * 57.295776) * 0.017453292;
          auVar14 = ZEXT464((uint)fVar12);
          fVar12 = (float)FUN_180637540(fVar12);
          puVar2[0x12] = (uint)fVar12;
          *puVar2 = uVar1 | 0xc0;
          fVar8 = (float)FUN_180638e00(auVar14._0_8_);
          fVar8 = -fVar8;
          puVar2[0x13] = (uint)fVar8;
          uVar7 = *(ulonglong *)(param_2 + 0x60) & 0xfffffffffffff9e7;
          if (fVar12 <= fVar15) {
            if (fVar12 < fVar15) {
              uVar7 = uVar7 | 0x10;
            }
          }
          else {
            uVar7 = uVar7 | 8;
          }
          if (fVar8 <= fVar15) {
            if (fVar8 < fVar15) {
              uVar7 = uVar7 | 0x400;
            }
          }
          else {
            uVar7 = uVar7 | 0x200;
          }
          *(ulonglong *)(param_2 + 0x60) = uVar7;
        }
        else {
          *(undefined2 *)(param_1 + 3) = 0;
        }
      }
    }
    else {
      *(undefined1 *)(param_1 + 3) = 0;
    }
  }
  if (((*(byte *)(param_2 + 0x60) & 1) != 0) && (DAT_180b8e65c < 1)) {
    *(undefined2 *)(param_1 + 3) = 0x101;
  }
  *(ulonglong *)(param_1 + 0xc) = local_258;
}



