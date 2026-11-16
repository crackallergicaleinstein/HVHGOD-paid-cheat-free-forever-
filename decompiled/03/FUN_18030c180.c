// FUN_18030c180 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18030c180 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18030c180(undefined1 *param_1,undefined8 param_2,float *param_3,float *param_4,
                  float param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 (*pauVar3) [16];
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  short sVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined1 (*pauVar13) [16];
  longlong lVar14;
  undefined1 auStack_298 [32];
  char *local_278;
  float local_268;
  float local_264;
  float local_260;
  undefined8 local_258 [18];
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  float local_1ac;
  char local_19d;
  undefined1 local_148 [264];
  char local_40 [8];
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_298;
  *param_1 = 0;
  local_40[0] = '\0';
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0x3f800000;
  *(undefined1 (*) [16])(param_1 + 0x10) = (undefined1  [16])0x0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined1 (*) [16])(param_1 + 0x48) = (undefined1  [16])0x0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 100) = 0;
  *(undefined8 *)(param_1 + 0x6c) = 0;
  *(undefined8 *)(param_1 + 0x74) = 0;
  *(undefined8 *)(param_1 + 0x7c) = 0;
  *(undefined8 *)(param_1 + 0x84) = 0;
  *(undefined8 *)(param_1 + 0x8c) = 0;
  *(undefined8 *)(param_1 + 0x94) = 0;
  *(undefined8 *)(param_1 + 0x9c) = 0;
  *(undefined8 *)(param_1 + 0xa4) = 0;
  *(undefined8 *)(param_1 + 0xac) = 0;
  *(undefined8 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xcc) = 0;
  *(undefined8 *)(param_1 + 0xd4) = 0;
  *(undefined8 *)(param_1 + 0xdc) = 0;
  *(undefined8 *)(param_1 + 0xe4) = 0;
  *(undefined8 *)(param_1 + 0xec) = 0;
  *(undefined8 *)(param_1 + 0xf4) = 0;
  *(undefined8 *)(param_1 + 0xfc) = 0;
  *(undefined8 *)(param_1 + 0x104) = 0;
  *(undefined8 *)(param_1 + 0x10c) = 0;
  local_278 = local_40;
  local_268 = *param_3 - param_5 * *param_4;
  local_264 = param_3[1] - param_5 * param_4[1];
  local_260 = param_3[2] - param_5 * param_4[2];
  puVar10 = (undefined8 *)FUN_18030bef0(local_148,param_2,param_3,&local_268);
  lVar14 = 2;
  lVar12 = 2;
  puVar11 = local_258;
  do {
    puVar1 = puVar11 + 0x10;
    uVar6 = puVar10[1];
    uVar7 = puVar10[2];
    uVar8 = puVar10[3];
    uVar4 = puVar10[0xe];
    uVar5 = puVar10[0xf];
    puVar2 = puVar10 + 0x10;
    *puVar11 = *puVar10;
    puVar11[1] = uVar6;
    puVar11[2] = uVar7;
    puVar11[3] = uVar8;
    uVar6 = puVar10[5];
    uVar7 = puVar10[6];
    uVar8 = puVar10[7];
    puVar11[4] = puVar10[4];
    puVar11[5] = uVar6;
    puVar11[6] = uVar7;
    puVar11[7] = uVar8;
    uVar6 = puVar10[9];
    uVar7 = puVar10[10];
    uVar8 = puVar10[0xb];
    puVar11[8] = puVar10[8];
    puVar11[9] = uVar6;
    puVar11[10] = uVar7;
    puVar11[0xb] = uVar8;
    uVar6 = puVar10[0xd];
    puVar11[0xc] = puVar10[0xc];
    puVar11[0xd] = uVar6;
    puVar11[0xe] = uVar4;
    puVar11[0xf] = uVar5;
    lVar12 = lVar12 + -1;
    puVar10 = puVar2;
    puVar11 = puVar1;
  } while (lVar12 != 0);
  *puVar1 = *puVar2;
  if ((local_40[0] != '\0') && (local_19d == '\0')) {
    sVar9 = thunk_FUN_180624430();
    if ((sVar9 < 1) && ((0.0 <= local_1ac && (local_1ac < 1.0)))) {
      sVar9 = thunk_FUN_180624430(local_1c8);
      if (sVar9 < 1) {
        sVar9 = thunk_FUN_180624430(local_1c4);
        if (sVar9 < 1) {
          sVar9 = thunk_FUN_180624430(local_1c0);
          if (sVar9 < 1) {
            *(float *)(param_1 + 4) = local_1ac * param_5;
            *(float *)(param_1 + 8) = local_1ac;
            *param_1 = 1;
            puVar10 = local_258;
            pauVar13 = (undefined1 (*) [16])(param_1 + 0x10);
            do {
              pauVar3 = pauVar13 + 8;
              uVar6 = puVar10[1];
              uVar7 = puVar10[2];
              uVar8 = puVar10[3];
              uVar4 = puVar10[0xe];
              uVar5 = puVar10[0xf];
              puVar11 = puVar10 + 0x10;
              *(undefined8 *)*pauVar13 = *puVar10;
              *(undefined8 *)(*pauVar13 + 8) = uVar6;
              *(undefined8 *)pauVar13[1] = uVar7;
              *(undefined8 *)(pauVar13[1] + 8) = uVar8;
              uVar6 = puVar10[5];
              uVar7 = puVar10[6];
              uVar8 = puVar10[7];
              *(undefined8 *)pauVar13[2] = puVar10[4];
              *(undefined8 *)(pauVar13[2] + 8) = uVar6;
              *(undefined8 *)pauVar13[3] = uVar7;
              *(undefined8 *)(pauVar13[3] + 8) = uVar8;
              uVar6 = puVar10[9];
              uVar7 = puVar10[10];
              uVar8 = puVar10[0xb];
              *(undefined8 *)pauVar13[4] = puVar10[8];
              *(undefined8 *)(pauVar13[4] + 8) = uVar6;
              *(undefined8 *)pauVar13[5] = uVar7;
              *(undefined8 *)(pauVar13[5] + 8) = uVar8;
              uVar6 = puVar10[0xd];
              *(undefined8 *)pauVar13[6] = puVar10[0xc];
              *(undefined8 *)(pauVar13[6] + 8) = uVar6;
              *(undefined8 *)pauVar13[7] = uVar4;
              *(undefined8 *)(pauVar13[7] + 8) = uVar5;
              lVar14 = lVar14 + -1;
              puVar10 = puVar11;
              pauVar13 = pauVar3;
            } while (lVar14 != 0);
            *(undefined8 *)*pauVar3 = *puVar11;
          }
        }
      }
    }
  }
}



