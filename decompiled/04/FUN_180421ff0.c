// FUN_180421ff0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180421ff0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180421ff0(uint *param_1,longlong param_2,float *param_3)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  bool bVar4;
  float *pfVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_d8 [32];
  uint local_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  ulonglong local_88;
  
  local_88 = DAT_1808d5f00 ^ (ulonglong)auStack_d8;
  puVar7 = *(undefined8 **)(param_2 + 0x140);
  bVar4 = true;
  if (puVar7 != (undefined8 *)0x0) {
    fVar9 = param_3[4];
    fVar10 = param_3[2];
    fVar11 = *param_3;
    fVar12 = param_3[5];
    fVar13 = param_3[3];
    fVar14 = param_3[1];
    do {
      pfVar5 = (float *)*puVar7;
      iVar6 = 0;
      local_a8 = fVar11 * *pfVar5 + fVar10 * pfVar5[1] + fVar9;
      local_a4 = fVar14 * *pfVar5 + fVar13 * pfVar5[1] + fVar12;
      if (0 < *(int *)(puVar7 + 1) + -1) {
        lVar8 = 0;
        do {
          local_a0 = fVar11 * *(float *)(lVar8 + 8 + (longlong)pfVar5) +
                     fVar10 * *(float *)(lVar8 + 0xc + (longlong)pfVar5) + fVar9;
          local_9c = fVar14 * *(float *)(lVar8 + 8 + (longlong)pfVar5) +
                     fVar13 * *(float *)(lVar8 + 0xc + (longlong)pfVar5) + fVar12;
          lVar1 = lVar8 + 0x18;
          local_98 = fVar11 * *(float *)((longlong)pfVar5 + lVar8 + 0x10) +
                     fVar10 * *(float *)((longlong)pfVar5 + lVar8 + 0x14) + fVar9;
          local_94 = fVar14 * *(float *)((longlong)pfVar5 + lVar8 + 0x10) +
                     fVar13 * *(float *)((longlong)pfVar5 + lVar8 + 0x14) + fVar12;
          local_90 = fVar11 * *(float *)((longlong)pfVar5 + lVar1) +
                     fVar10 * *(float *)((longlong)pfVar5 + lVar8 + 0x1c) + fVar9;
          local_8c = fVar14 * *(float *)((longlong)pfVar5 + lVar1) +
                     fVar13 * *(float *)((longlong)pfVar5 + lVar8 + 0x1c) + fVar12;
          FUN_180421340(&local_b8,&local_a8);
          if (bVar4) {
            *(ulonglong *)param_1 = CONCAT44(uStack_b4,local_b8);
            *(ulonglong *)(param_1 + 2) = CONCAT44(uStack_ac,uStack_b0);
            bVar4 = false;
          }
          else {
            auVar2 = vminss_avx(ZEXT416(*param_1),ZEXT416(local_b8));
            auVar3 = vminss_avx(ZEXT416(param_1[1]),ZEXT416(uStack_b4));
            *param_1 = auVar2._0_4_;
            auVar2 = vmaxss_avx(ZEXT416(param_1[2]),ZEXT416(uStack_b0));
            param_1[1] = auVar3._0_4_;
            auVar3 = vmaxss_avx(ZEXT416(param_1[3]),ZEXT416(uStack_ac));
            param_1[3] = auVar3._0_4_;
            param_1[2] = auVar2._0_4_;
          }
          pfVar5 = (float *)*puVar7;
          iVar6 = iVar6 + 3;
          local_a8 = local_90;
          local_a4 = local_8c;
          lVar8 = lVar1;
        } while (iVar6 < *(int *)(puVar7 + 1) + -1);
      }
      puVar7 = (undefined8 *)puVar7[4];
    } while (puVar7 != (undefined8 *)0x0);
  }
}



