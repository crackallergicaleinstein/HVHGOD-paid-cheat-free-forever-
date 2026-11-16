// FUN_18033fb20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18033fb20 */

undefined8
FUN_18033fb20(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             uint param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  short sVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [64];
  float fVar17;
  undefined8 local_2f8;
  float local_2f0;
  undefined8 local_2e8;
  undefined4 local_2e0;
  undefined4 local_2dc;
  undefined4 local_2d8;
  undefined4 local_2d4;
  undefined4 local_2d0;
  undefined4 local_2cc;
  undefined4 local_2c8;
  undefined8 local_2c4;
  undefined4 local_2bc;
  undefined4 local_2b8;
  undefined4 local_2b4;
  undefined4 local_2b0;
  undefined4 local_2ac;
  undefined4 local_2a8;
  undefined4 local_2a4;
  undefined4 local_2a0;
  undefined4 local_29c;
  undefined4 local_298;
  undefined4 local_294;
  undefined4 local_290;
  undefined4 local_28c;
  undefined8 local_288 [18];
  undefined4 local_1f8;
  undefined4 local_1f4;
  float local_1f0;
  float local_1dc;
  undefined1 local_178 [352];
  
  local_2f8 = *param_1;
  local_2f0 = *(float *)(param_1 + 1) + -2.0;
  puVar9 = (undefined8 *)FUN_18033d980(local_178,param_1,&local_2f8,param_2,param_3);
  lVar12 = 2;
  puVar10 = local_288;
  do {
    puVar11 = puVar10 + 0x10;
    uVar5 = puVar9[1];
    uVar6 = puVar9[2];
    uVar7 = puVar9[3];
    uVar3 = puVar9[0xe];
    uVar4 = puVar9[0xf];
    puVar1 = puVar9 + 0x10;
    *puVar10 = *puVar9;
    puVar10[1] = uVar5;
    puVar10[2] = uVar6;
    puVar10[3] = uVar7;
    uVar5 = puVar9[5];
    uVar6 = puVar9[6];
    uVar7 = puVar9[7];
    puVar10[4] = puVar9[4];
    puVar10[5] = uVar5;
    puVar10[6] = uVar6;
    puVar10[7] = uVar7;
    uVar5 = puVar9[9];
    uVar6 = puVar9[10];
    uVar7 = puVar9[0xb];
    puVar10[8] = puVar9[8];
    puVar10[9] = uVar5;
    puVar10[10] = uVar6;
    puVar10[0xb] = uVar7;
    uVar5 = puVar9[0xd];
    puVar10[0xc] = puVar9[0xc];
    puVar10[0xd] = uVar5;
    puVar10[0xe] = uVar3;
    puVar10[0xf] = uVar4;
    lVar12 = lVar12 + -1;
    puVar9 = puVar1;
    puVar10 = puVar11;
  } while (lVar12 != 0);
  *puVar11 = *puVar1;
  fVar13 = local_1dc;
  sVar8 = thunk_FUN_180624430();
  if (sVar8 < 1) {
    auVar16 = ZEXT464(param_5);
    fVar15 = 1.0;
    fVar14 = 0.0;
    if (0.0 <= fVar13) {
      if ((((fVar13 < 1.0) && (sVar8 = thunk_FUN_180624430(local_1f8), sVar8 < 1)) &&
          (sVar8 = thunk_FUN_180624430(local_1f4), sVar8 < 1)) &&
         ((fVar17 = local_1f0, sVar8 = thunk_FUN_180624430(local_1f0), sVar8 < 1 &&
          (auVar16._0_4_ <= fVar17)))) {
        return 1;
      }
      if ((fVar14 <= fVar13) && (fVar13 < fVar15)) {
        local_2e8 = *param_2;
        local_2e0 = *(undefined4 *)(param_2 + 1);
        local_2dc = FUN_1806156a0(0,*(undefined4 *)((longlong)param_2 + 0xc));
        local_2d8 = FUN_1806156a0(0,*(undefined4 *)(param_2 + 2));
        local_2d4 = *(undefined4 *)((longlong)param_2 + 0x14);
        local_2d0 = FUN_180615630(0,*(undefined4 *)param_2);
        local_2cc = FUN_180615630(0,*(undefined4 *)((longlong)param_2 + 4));
        local_2c4 = *(undefined8 *)((longlong)param_2 + 0xc);
        local_2bc = *(undefined4 *)((longlong)param_2 + 0x14);
        local_2c8 = *(undefined4 *)(param_2 + 1);
        local_2b8 = *(undefined4 *)param_2;
        local_2b4 = FUN_180615630(0,*(undefined4 *)((longlong)param_2 + 4));
        local_2b0 = *(undefined4 *)(param_2 + 1);
        local_2ac = FUN_1806156a0(0,*(undefined4 *)((longlong)param_2 + 0xc));
        local_2a4 = *(undefined4 *)((longlong)param_2 + 0x14);
        local_2a8 = *(undefined4 *)(param_2 + 2);
        local_2a0 = FUN_180615630(0,*(undefined4 *)param_2);
        local_298 = *(undefined4 *)(param_2 + 1);
        local_29c = *(undefined4 *)((longlong)param_2 + 4);
        local_294 = *(undefined4 *)((longlong)param_2 + 0xc);
        local_290 = FUN_1806156a0(0,*(undefined4 *)(param_2 + 2));
        local_28c = *(undefined4 *)((longlong)param_2 + 0x14);
        puVar9 = &local_2e8;
        do {
          puVar10 = (undefined8 *)FUN_18033d980(local_178,param_1,&local_2f8,puVar9,param_3);
          lVar12 = 2;
          puVar11 = local_288;
          do {
            puVar1 = puVar11 + 0x10;
            uVar5 = puVar10[1];
            uVar6 = puVar10[2];
            uVar7 = puVar10[3];
            uVar3 = puVar10[0xe];
            uVar4 = puVar10[0xf];
            puVar2 = puVar10 + 0x10;
            *puVar11 = *puVar10;
            puVar11[1] = uVar5;
            puVar11[2] = uVar6;
            puVar11[3] = uVar7;
            uVar5 = puVar10[5];
            uVar6 = puVar10[6];
            uVar7 = puVar10[7];
            puVar11[4] = puVar10[4];
            puVar11[5] = uVar5;
            puVar11[6] = uVar6;
            puVar11[7] = uVar7;
            uVar5 = puVar10[9];
            uVar6 = puVar10[10];
            uVar7 = puVar10[0xb];
            puVar11[8] = puVar10[8];
            puVar11[9] = uVar5;
            puVar11[10] = uVar6;
            puVar11[0xb] = uVar7;
            uVar5 = puVar10[0xd];
            puVar11[0xc] = puVar10[0xc];
            puVar11[0xd] = uVar5;
            puVar11[0xe] = uVar3;
            puVar11[0xf] = uVar4;
            lVar12 = lVar12 + -1;
            puVar10 = puVar2;
            puVar11 = puVar1;
          } while (lVar12 != 0);
          *puVar1 = *puVar2;
          auVar16 = ZEXT1664(auVar16._0_16_);
          fVar13 = local_1dc;
          sVar8 = thunk_FUN_180624430();
          if (((((sVar8 < 1) && (fVar14 <= fVar13)) && (fVar13 < fVar15)) &&
              ((sVar8 = thunk_FUN_180624430(local_1f8), sVar8 < 1 &&
               (sVar8 = thunk_FUN_180624430(local_1f4), sVar8 < 1)))) &&
             ((fVar13 = local_1f0, sVar8 = thunk_FUN_180624430(local_1f0), sVar8 < 1 &&
              (auVar16._0_4_ <= fVar13)))) {
            return 1;
          }
          puVar9 = puVar9 + 3;
        } while (puVar9 != local_288);
      }
    }
  }
  return 0;
}



