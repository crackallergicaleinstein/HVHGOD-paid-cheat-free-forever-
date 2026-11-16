// FUN_180353b20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180353b20 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180353b20(undefined8 *param_1,int *param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  byte bVar12;
  short sVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  ulonglong *puVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [64];
  float fVar22;
  float fVar23;
  undefined1 auStack_248 [32];
  undefined8 local_228;
  undefined4 local_220;
  ulonglong local_218;
  int *local_210;
  undefined8 local_208;
  undefined4 uStack_200;
  undefined8 auStack_1fc [46];
  ulonglong local_88;
  ulonglong local_78;
  
  local_78 = DAT_1808d5f00 ^ (ulonglong)auStack_248;
  local_210 = param_2;
  FUN_18063ab10(&local_208,0,0x180);
  FUN_18035d180(&local_208);
  uVar16 = param_1[1];
  local_88 = 0;
  uVar18 = 0;
  if (uVar16 < 0x21) {
    piVar1 = param_2 + 5;
    uVar14 = 0;
    if (uVar16 != 0) {
      puVar19 = (ulonglong *)*param_1;
      fVar22 = 1.0;
      fVar23 = 0.0;
      do {
        uVar6 = *puVar19;
        local_218._0_4_ = (uint)uVar6;
        auVar21 = ZEXT464((uint)local_218);
        local_218 = uVar6;
        sVar13 = thunk_FUN_180624430(uVar6 & 0xffffffff);
        if (0 < sVar13) {
        }
        if (auVar21._0_4_ < fVar23) {
        }
        if (fVar22 < auVar21._0_4_) {
        }
        bVar12 = (byte)(uVar6 >> 0x20);
        if (((char)*piVar1 == '\0') || (bVar12 == 0)) {
          local_228 = CONCAT44(local_228._4_4_,(int)uVar14);
          auVar20._8_8_ = 0;
          auVar20._0_8_ = local_228;
          auVar20 = vinsertps_avx(auVar20,auVar21._0_16_,0x10);
          local_228 = auVar20._0_8_;
          *(ulonglong *)((longlong)auStack_1fc + uVar18 * 0xc + -0xc) = local_228;
          local_220._0_2_ = (ushort)bVar12;
          *(undefined4 *)((longlong)auStack_1fc + uVar18 * 0xc + -4) = local_220;
          uVar18 = local_88 + 1;
          local_88 = uVar18;
        }
        uVar14 = uVar14 + 1;
        puVar19 = puVar19 + 1;
      } while (uVar14 < uVar16);
      param_2 = local_210;
    }
    if ((char)*piVar1 != '\0') {
      iVar4 = *param_2;
      if (iVar4 == 3) {
        lVar15 = 4;
      }
      else if (iVar4 == 0) {
        lVar15 = (ulonglong)((char)param_2[4] != '\0') + 5;
      }
      else {
        lVar15 = (ulonglong)(iVar4 == 2) + 2;
      }
      if (0x20 < lVar15 + uVar18) {
      }
      FUN_180353760(param_2,&local_208);
      uVar18 = local_88;
    }
    uVar16 = 1;
    if (1 < uVar18) {
      puVar17 = auStack_1fc;
      do {
        uVar5 = *(undefined4 *)(puVar17 + 1);
        uVar3 = *puVar17;
        uVar18 = uVar16;
        if (uVar16 != 0) {
          local_228._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
          puVar7 = puVar17;
          do {
            if (*(float *)(puVar7 + -1) <= local_228._4_4_) break;
            *puVar7 = *(undefined8 *)((longlong)puVar7 + -0xc);
            *(undefined4 *)(puVar7 + 1) = *(undefined4 *)((longlong)puVar7 + -4);
            uVar18 = uVar18 - 1;
            puVar7 = (undefined8 *)((longlong)puVar7 + -0xc);
          } while (uVar18 != 0);
        }
        uVar16 = uVar16 + 1;
        *(undefined8 *)((longlong)auStack_1fc + uVar18 * 0xc + -0xc) = uVar3;
        puVar17 = (undefined8 *)((longlong)puVar17 + 0xc);
        *(undefined4 *)((longlong)auStack_1fc + uVar18 * 0xc + -4) = uVar5;
      } while (uVar16 < local_88);
    }
    lVar15 = 3;
    puVar17 = &local_208;
    do {
      puVar7 = param_3 + 0x10;
      uVar9 = puVar17[1];
      uVar10 = puVar17[2];
      uVar11 = puVar17[3];
      uVar3 = puVar17[0xe];
      uVar8 = puVar17[0xf];
      puVar2 = puVar17 + 0x10;
      *param_3 = *puVar17;
      param_3[1] = uVar9;
      param_3[2] = uVar10;
      param_3[3] = uVar11;
      uVar9 = puVar17[5];
      uVar10 = puVar17[6];
      uVar11 = puVar17[7];
      param_3[4] = puVar17[4];
      param_3[5] = uVar9;
      param_3[6] = uVar10;
      param_3[7] = uVar11;
      uVar9 = puVar17[9];
      uVar10 = puVar17[10];
      uVar11 = puVar17[0xb];
      param_3[8] = puVar17[8];
      param_3[9] = uVar9;
      param_3[10] = uVar10;
      param_3[0xb] = uVar11;
      uVar9 = puVar17[0xd];
      param_3[0xc] = puVar17[0xc];
      param_3[0xd] = uVar9;
      param_3[0xe] = uVar3;
      param_3[0xf] = uVar8;
      lVar15 = lVar15 + -1;
      puVar17 = puVar2;
      param_3 = puVar7;
    } while (lVar15 != 0);
    *puVar7 = *puVar2;
  }
}



