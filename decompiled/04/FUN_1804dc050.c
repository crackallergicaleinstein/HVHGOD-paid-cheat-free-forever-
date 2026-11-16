// FUN_1804dc050 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804dc050 */

void FUN_1804dc050(longlong param_1,float *param_2,undefined8 param_3,undefined8 param_4,
                  float param_5,int param_6)

{
  bool bVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 in_R8;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  undefined8 in_XMM3_Qa;
  float fVar11;
  undefined1 auVar12 [64];
  float local_res8;
  float local_resc;
  
  if ((float)param_3 < *(float *)(param_1 + 0xe0) * 0.25) {
    FUN_1804d0c90(param_1 + 0x50);
  }
  else if (param_6 < 1) {
    if (*(float *)(*(longlong *)(param_1 + 0x38) + 0x1f8) < (float)param_3) {
      iVar4 = FUN_1804d9380();
      auVar3 = vroundss_avx(ZEXT816(0),
                            ZEXT416((uint)(((float)iVar4 * ABS(param_5 - (float)in_XMM3_Qa)) /
                                          6.2831855)),2);
      iVar4 = 1;
      if (0 < (int)auVar3._0_4_) {
        iVar4 = (int)auVar3._0_4_;
      }
      FUN_1804dbed0(param_1,param_2,param_3,in_XMM3_Qa,param_5,iVar4);
    }
    else {
      auVar12 = ZEXT464((uint)param_5);
      fVar9 = (float)in_XMM3_Qa;
      iVar4 = FUN_1804d9380();
      iVar4 = (int)(0x30 / (longlong)iVar4);
      if (iVar4 < 1) {
        iVar4 = 1;
        iVar5 = 0xc;
      }
      else {
        if (0xc < iVar4) {
          iVar4 = 0xc;
        }
        iVar5 = (int)(0xc / (longlong)iVar4);
        if (iVar5 * iVar4 != 0xc) {
          iVar4 = (int)(0xc / (longlong)iVar5);
        }
      }
      fVar11 = ((float)(iVar5 * 4) * (float)in_XMM3_Qa) / 6.2831855;
      fVar10 = ((float)(iVar5 * 4) * auVar12._0_4_) / 6.2831855;
      if (fVar9 <= param_5) {
        auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)fVar11),2);
        iVar5 = (int)auVar3._0_4_ * iVar4;
        if ((0.0 <= fVar10) || ((float)(int)fVar10 == fVar10)) {
          iVar6 = (int)fVar10;
        }
        else {
          iVar6 = (int)fVar10 + -1;
        }
        iVar7 = (int)(float)iVar6 * iVar4;
        iVar6 = iVar7 - iVar5;
      }
      else {
        iVar5 = (int)fVar11;
        if ((fVar11 < 0.0) && ((float)iVar5 != fVar11)) {
          iVar5 = iVar5 + -1;
        }
        iVar5 = (int)(float)iVar5 * iVar4;
        auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)fVar10),2);
        iVar7 = (int)auVar3._0_4_ * iVar4;
        iVar6 = iVar5 - iVar7;
      }
      iVar8 = 0;
      if (-1 < iVar6) {
        iVar8 = iVar6;
      }
      bVar1 = 1e-05 <= ABS(((float)iVar5 * 3.1415927 + (float)iVar5 * 3.1415927) / 48.0 -
                           (float)in_XMM3_Qa);
      bVar2 = 1e-05 <= ABS(auVar12._0_4_ -
                           ((float)iVar7 * 3.1415927 + (float)iVar7 * 3.1415927) / 48.0);
      FUN_1804d0a80(param_1 + 0x50,(uint)bVar2 + bVar1 + 1 + *(int *)(param_1 + 0x50) + iVar8);
      if (bVar1) {
        fVar9 = (float)FUN_180637540(in_XMM3_Qa);
        local_res8 = fVar9 * (float)param_3 + *param_2;
        fVar9 = (float)FUN_180638e00(in_XMM3_Qa);
        local_resc = fVar9 * (float)param_3 + param_2[1];
        FUN_1804d0c90(param_1 + 0x50,&local_res8);
      }
      if (0 < iVar8) {
        FUN_1804dbc10(param_1,param_2,param_3,iVar5,iVar7,iVar4);
      }
      fVar9 = (float)param_3;
      if (bVar2) {
        fVar10 = (float)FUN_180637540(auVar12._0_8_);
        local_res8 = fVar10 * fVar9 + *param_2;
        fVar10 = (float)FUN_180638e00(auVar12._0_8_);
        local_resc = fVar10 * fVar9 + param_2[1];
        FUN_1804d0c90(param_1 + 0x50,&local_res8);
      }
    }
  }
  else {
    FUN_1804dbed0(param_5,param_2,in_R8,param_4,param_5,param_6);
  }
  return;
}



