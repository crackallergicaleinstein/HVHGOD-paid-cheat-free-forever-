// FUN_1804a2ff0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804a2ff0 */

void FUN_1804a2ff0(longlong param_1,float *param_2,float *param_3,float param_4,float param_5)

{
  float fVar1;
  int iVar2;
  float fVar3;
  byte bVar4;
  byte bVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined1 auVar9 [64];
  undefined1 auVar10 [16];
  undefined1 auVar11 [64];
  undefined1 auVar12 [64];
  undefined1 auVar13 [16];
  undefined1 auVar14 [64];
  undefined4 uVar15;
  undefined8 unaff_XMM10_Qa;
  undefined8 unaff_XMM10_Qb;
  float local_res8;
  float local_resc;
  float local_res10;
  float local_res14;
  
  FUN_1804df870(param_1,param_2,param_3,0xffd3cece,param_5,0);
  local_res8 = *param_3 - param_5 * 0.3;
  local_resc = param_3[1];
  local_res14 = param_2[1];
  local_res10 = param_5 * 0.3 + *param_2;
  FUN_1804d9420(param_1,&local_res10,&local_res8,1);
  auVar12 = ZEXT464((uint)param_2[1]);
  bVar5 = 0;
  if (param_2[1] < param_3[1]) {
    uVar15 = 0;
    do {
      auVar9 = ZEXT464((uint)*param_2);
      fVar1 = *param_3;
      fVar3 = param_4 + auVar12._0_4_;
      auVar14 = ZEXT464((uint)fVar3);
      auVar13 = ZEXT416((uint)fVar3);
      bVar4 = bVar5;
      if (*param_2 < fVar1) {
        do {
          fVar3 = auVar9._0_4_ + param_4;
          auVar11 = ZEXT464((uint)fVar3);
          auVar10 = ZEXT416((uint)fVar3);
          if ((bool)(bVar4 & 1)) {
            auVar13 = vminss_avx(auVar14._0_16_,ZEXT416((uint)param_3[1]));
            auVar10 = vminss_avx(ZEXT416((uint)fVar3),ZEXT416((uint)fVar1));
            local_res8 = auVar10._0_4_;
            local_resc = auVar13._0_4_;
            local_res14 = auVar12._0_4_;
            local_res10 = auVar9._0_4_;
            FUN_1804df870(param_1,&local_res10,&local_res8,0xffb8b1b0,uVar15,0,unaff_XMM10_Qa,
                          unaff_XMM10_Qb);
            auVar10 = auVar11._0_16_;
          }
          auVar13 = auVar14._0_16_;
          fVar1 = *param_3;
          auVar9 = ZEXT1664(auVar10);
          bVar4 = bVar4 + 1;
        } while (auVar10._0_4_ < fVar1);
      }
      auVar12 = ZEXT1664(auVar13);
      bVar5 = bVar5 ^ 1;
    } while (auVar13._0_4_ < param_3[1]);
  }
  iVar2 = *(int *)(param_1 + 0xa0);
  iVar7 = iVar2 + -1;
  *(int *)(param_1 + 0xa0) = iVar7;
  if (iVar7 == 0) {
    puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x3c);
  }
  else {
    puVar8 = (undefined8 *)((longlong)(iVar2 + -2) * 0x10 + *(longlong *)(param_1 + 0xa8));
  }
  uVar6 = puVar8[1];
  *(undefined8 *)(param_1 + 0x60) = *puVar8;
  *(undefined8 *)(param_1 + 0x68) = uVar6;
  FUN_1804d9200(param_1);
  return;
}



