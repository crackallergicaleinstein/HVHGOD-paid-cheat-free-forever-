// FUN_1802a0a40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802a0a40 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802a0a40(longlong *param_1,longlong *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined1 auVar7 [16];
  ulonglong uVar8;
  undefined8 uVar9;
  float *pfVar10;
  float *pfVar11;
  longlong lVar12;
  longlong lVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_138 [32];
  float local_118;
  undefined4 local_108;
  float local_104;
  float local_100 [2];
  longlong local_f8;
  ulonglong local_f0;
  undefined1 local_e8 [16];
  undefined8 local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_1808d5f00 ^ (ulonglong)auStack_138;
  puVar4 = (undefined8 *)*param_2;
  puVar5 = (undefined8 *)param_2[1];
  if ((ulonglong)((longlong)puVar5 - (longlong)puVar4 >> 3) < 2) {
    if (puVar4 != puVar5) {
      param_2[1] = (longlong)puVar4;
    }
  }
  else {
    if (puVar5 == (undefined8 *)param_2[2]) {
      FUN_1802ad990(param_2,puVar4,puVar4);
    }
    else {
      uVar14 = *(undefined4 *)puVar4;
      uVar15 = *(undefined4 *)((longlong)puVar4 + 4);
      if (puVar4 == puVar5) {
        *(undefined4 *)puVar5 = uVar14;
        *(undefined4 *)((longlong)puVar5 + 4) = uVar15;
        param_2[1] = param_2[1] + 8;
      }
      else {
        *puVar5 = puVar5[-1];
        param_2[1] = param_2[1] + 8;
        FUN_18063aed0((longlong)puVar5 - ((longlong)(puVar5 + -1) - (longlong)puVar4),puVar4);
        *(undefined4 *)puVar4 = uVar14;
        *(undefined4 *)((longlong)puVar4 + 4) = uVar15;
      }
    }
    puVar6 = (undefined4 *)param_2[1];
    if (puVar6 == (undefined4 *)param_2[2]) {
      FUN_1802ad990(param_2);
    }
    else {
      *puVar6 = puVar6[-2];
      puVar6[1] = puVar6[-1];
      param_2[1] = param_2[1] + 8;
    }
    local_e8 = (undefined1  [16])0x0;
    lVar13 = 0;
    local_d8 = 0;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = (param_2[1] - *param_2 >> 3) * 0xc + 1;
    uVar8 = SUB168(ZEXT816(2) * auVar7,0);
    if (SUB168(ZEXT816(2) * auVar7,8) != 0) {
      uVar8 = 0xffffffffffffffff;
    }
    if (uVar8 != 0) {
      if (0x3fffffffffffffff < uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_1801136f0();
      }
      uVar9 = FUN_18015bca0(uVar8 * 4);
      FUN_18063aed0(uVar9,local_e8._0_8_,local_e8._8_8_ - local_e8._0_8_);
      FUN_180158f30(local_e8,uVar9,0,uVar8);
    }
    lVar12 = *param_2;
    fVar20 = 0.0;
    fVar21 = 1.0;
    if (3 < (ulonglong)(param_2[1] - lVar12 >> 3)) {
      uVar8 = 3;
      fVar22 = 5.0;
      fVar19 = 3.0;
      fVar18 = 0.0;
      fVar21 = 1.0;
      do {
        fVar20 = fVar18;
        do {
          fVar16 = fVar18 * fVar18;
          fVar17 = fVar16 * fVar18;
          fVar1 = *(float *)(lVar13 + 0x10 + lVar12);
          fVar2 = *(float *)(lVar13 + lVar12);
          fVar3 = *(float *)(lVar13 + 8 + lVar12);
          local_108 = (((((fVar2 + fVar2) - fVar3 * fVar22) + fVar1 * 4.0) -
                       *(float *)(lVar13 + 0x18 + lVar12)) * fVar16 +
                       (fVar1 - fVar2) * fVar18 + fVar3 + fVar3 +
                      (((fVar3 * fVar19 - fVar2) - fVar1 * fVar19) +
                      *(float *)(lVar13 + 0x18 + lVar12)) * fVar17) * 0.5;
          FUN_1802aa650(local_e8,&local_108);
          fVar1 = *(float *)(lVar13 + 0x14 + lVar12);
          fVar2 = *(float *)(lVar13 + 4 + lVar12);
          fVar3 = *(float *)(lVar13 + 0xc + lVar12);
          local_108 = (((((fVar2 + fVar2) - fVar3 * fVar22) + fVar1 * 4.0) -
                       *(float *)(lVar13 + 0x1c + lVar12)) * fVar16 +
                       (fVar1 - fVar2) * fVar18 + fVar3 + fVar3 +
                      (((fVar3 * fVar19 - fVar2) - fVar1 * fVar19) +
                      *(float *)(lVar13 + 0x1c + lVar12)) * fVar17) * 0.5;
          FUN_1802aa650(local_e8,&local_108);
          fVar18 = fVar18 + 0.08;
        } while (fVar18 <= fVar21);
        lVar13 = lVar13 + 8;
        uVar8 = uVar8 + 1;
        lVar12 = *param_2;
        fVar18 = fVar20;
      } while (uVar8 < (ulonglong)(param_2[1] - lVar12 >> 3));
    }
    uVar8 = (longlong)(local_e8._8_8_ - local_e8._0_8_) >> 2;
    if (3 < uVar8) {
      lVar13 = *param_1;
      if (*(char *)(lVar13 + 0x70) != '\0') {
        local_100[0] = fVar21;
        local_104 = fVar20;
        fVar18 = *(float *)(lVar13 + 0xd8);
        pfVar10 = &local_104;
        if (fVar20 <= fVar18) {
          pfVar10 = (float *)(lVar13 + 0xd8);
        }
        pfVar11 = local_100;
        if (fVar18 <= fVar21) {
          pfVar11 = pfVar10;
        }
        local_108 = (float)CONCAT13((char)(int)((float)(*(uint *)(lVar13 + 0xe4) >> 0x18) * *pfVar11
                                               ),(int3)*(uint *)(lVar13 + 0xe4));
        local_f8 = local_e8._0_8_;
        local_118 = *(float *)(lVar13 + 0x6c) + 2.0;
        local_f0 = uVar8;
        FUN_180433590(&DAT_180bbb038,&local_f8,local_108,0);
      }
      local_f0 = (longlong)(local_e8._8_8_ - local_e8._0_8_) >> 2;
      local_118 = *(float *)(*param_1 + 0x6c);
      local_f8 = local_e8._0_8_;
      FUN_180433590(param_1[1],&local_f8,*(undefined4 *)param_1[2],0);
    }
    if (*param_2 != param_2[1]) {
      param_2[1] = *param_2;
    }
    FUN_180159650(local_e8);
  }
}



