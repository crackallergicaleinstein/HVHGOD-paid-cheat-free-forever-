// FUN_1804bc6c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804bc6c0 */

undefined8 * FUN_1804bc6c0(undefined8 *param_1,longlong param_2,float *param_3,uint param_4)

{
  float fVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  float *pfVar6;
  uint uVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_res10;
  float fStackX_14;
  float local_a8;
  float local_a4;
  
  lVar5 = DAT_180bb8ae8;
  fVar13 = (*(float *)(param_2 + 0x78) + *(float *)(param_2 + 0x70)) - *(float *)(param_2 + 0xc0);
  fVar15 = (*(float *)(param_2 + 0x7c) + *(float *)(param_2 + 0x74)) - *(float *)(param_2 + 0xc4);
  fVar16 = *(float *)(param_2 + 0x5c) + *(float *)(param_2 + 0x5c);
  fVar14 = *(float *)(param_2 + 0x58) + *(float *)(param_2 + 0x58);
  if ((param_4 & 1) == 0) {
    fVar8 = *(float *)(param_2 + 0x30);
  }
  else {
    fVar8 = fVar14 + *param_3 + fVar13;
  }
  if ((param_4 & 2) == 0) {
    fVar1 = *(float *)(param_2 + 0x34);
  }
  else {
    fVar1 = fVar16 + param_3[1] + fVar15;
  }
  uVar7 = *(uint *)(param_2 + 0x14);
  if (((uVar7 & 0x1000000) == 0) || ((uVar7 & 0x4000000) != 0)) {
    auVar11 = ZEXT416((uint)(*(float *)(**(longlong **)(DAT_180bb8ae8 + 0x2030) + 0x28) -
                            (*(float *)(DAT_180bb8ae8 + 0xda4) + *(float *)(DAT_180bb8ae8 + 0xda4)))
                     );
    auVar12 = ZEXT416((uint)(*(float *)(**(longlong **)(DAT_180bb8ae8 + 0x2030) + 0x2c) -
                            (*(float *)(DAT_180bb8ae8 + 0xda8) + *(float *)(DAT_180bb8ae8 + 0xda8)))
                     );
  }
  else {
    auVar11 = SUB6416(ZEXT464(0x7f7fffff),0);
    auVar12 = auVar11;
  }
  if ((uVar7 >> 0x19 & 1) == 0) {
    if (((uVar7 & 0x1000000) == 0) || ((uVar7 & 0x4000000) != 0)) {
      if ((uVar7 & 0x40) == 0) {
        auVar9 = ZEXT416(*(uint *)(DAT_180bb8ae8 + 0xca4));
        auVar10 = ZEXT416(*(uint *)(DAT_180bb8ae8 + 0xca0));
      }
      else {
        auVar9 = SUB6416(ZEXT464(0x40800000),0);
        auVar10 = auVar9;
      }
    }
    else {
      auVar9 = SUB6416(ZEXT464(0x40800000),0);
      if ((*(uint *)(param_2 + 0x18) & 4) == 0) {
        auVar10 = auVar9;
      }
      else {
        auVar10 = ZEXT416(*(uint *)(DAT_180bb8ae8 + 0xca0));
      }
      if ((*(uint *)(param_2 + 0x18) & 8) != 0) {
        auVar9 = ZEXT416(*(uint *)(DAT_180bb8ae8 + 0xca4));
      }
    }
    auVar2 = vmaxss_avx(ZEXT816(0),ZEXT416((uint)(*(float *)(DAT_180bb8ae8 + 0xc94) - 1.0)));
    auVar9 = vmaxss_avx(auVar9,ZEXT416((uint)(auVar2._0_4_ +
                                             *(float *)(param_2 + 0x6c) + *(float *)(param_2 + 0x68)
                                             )));
    auVar9 = vminss_avx(auVar9,auVar12);
    fStackX_14 = auVar9._0_4_;
    auVar10 = vminss_avx(auVar10,auVar11);
    local_res10 = auVar10._0_4_;
    if (fStackX_14 <= fVar1) {
      auVar12 = vminss_avx(auVar12,ZEXT416((uint)fVar1));
      fStackX_14 = auVar12._0_4_;
    }
    if (local_res10 <= fVar8) {
      auVar12 = vminss_avx(auVar11,ZEXT416((uint)fVar8));
      local_res10 = auVar12._0_4_;
    }
    FUN_1804bc370(&local_a8,param_2,&local_res10);
    pfVar6 = param_3;
    if ((param_4 & 1) == 0) {
      pfVar6 = (float *)(param_2 + 0x40);
    }
    if ((param_4 & 2) == 0) {
      fVar8 = *(float *)(param_2 + 0x44);
    }
    else {
      fVar8 = param_3[1];
    }
    if (((local_a8 < *pfVar6 + fVar14 + fVar13) &&
        (uVar7 = *(uint *)(param_2 + 0x14), (uVar7 & 0x808) == 0x800)) ||
       (uVar7 = *(uint *)(param_2 + 0x14), (uVar7 >> 0xf & 1) != 0)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (((local_a4 < fVar16 + fVar8 + fVar15) && ((uVar7 & 8) == 0)) || ((uVar7 >> 0xe & 1) != 0)) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if (bVar3) {
      fStackX_14 = fStackX_14 + *(float *)(lVar5 + 0xcfc);
    }
    if (bVar4) {
      local_res10 = local_res10 + *(float *)(lVar5 + 0xcfc);
    }
    *param_1 = CONCAT44(fStackX_14,local_res10);
  }
  else {
    auVar11 = vminss_avx(ZEXT416((uint)fVar8),auVar11);
    auVar12 = vminss_avx(ZEXT416((uint)fVar1),auVar12);
    *(int *)param_1 = auVar11._0_4_;
    *(int *)((longlong)param_1 + 4) = auVar12._0_4_;
  }
  return param_1;
}



