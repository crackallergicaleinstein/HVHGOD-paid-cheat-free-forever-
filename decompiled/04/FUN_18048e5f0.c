// FUN_18048e5f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18048e5f0 */

undefined1
FUN_18048e5f0(undefined8 param_1,undefined8 param_2,float *param_3,undefined8 param_4,float param_5,
             char param_6)

{
  undefined1 uVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  undefined4 uVar6;
  undefined2 *puVar7;
  longlong *plVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [64];
  undefined1 auVar14 [64];
  undefined4 local_res18;
  float local_res1c;
  undefined1 local_78 [4];
  float local_74;
  float local_70;
  
  plVar8 = *(longlong **)(DAT_180bb8ae8 + 0x14d0);
  iVar5 = FUN_1804b0a90(param_2,0,
                        *(undefined4 *)(plVar8[0x22] + -4 + (longlong)(int)plVar8[0x21] * 4));
  if (*(int *)(*plVar8 + 0x1534) == iVar5) {
    FUN_1804cf810(iVar5,0xb,param_2);
  }
  fVar11 = DAT_180b0a41c * 10.0;
  local_res18 = fVar11 + *param_3;
  local_res1c = fVar11 + param_3[1];
  local_70 = param_3[1] - fVar11;
  local_74 = *param_3 - fVar11;
  puVar7 = (undefined2 *)FUN_1804aad60(local_78,iVar5,&local_74,&local_res18,1);
  auVar14 = ZEXT464(0x3f800000);
  auVar4._12_4_ = 0;
  auVar4._0_12_ = ZEXT812(0);
  auVar13 = ZEXT1264(ZEXT812(0)) << 0x20;
  uVar1 = *(undefined1 *)(puVar7 + 1);
  auVar3 = vpcmpeqd_avx(ZEXT116((byte)*puVar7),SUB6416(ZEXT464(0),0));
  auVar3 = vblendvps_avx(auVar14._0_16_,auVar4 << 0x20,auVar3);
  local_res18 = (float)CONCAT22(local_res18._2_2_,*puVar7);
  uVar10 = FUN_1804aaa10(iVar5 + 1,auVar3._0_8_,0x41900000);
  auVar3 = vpcmpeqd_avx(ZEXT116(local_res18._1_1_),SUB6416(ZEXT464(0),0));
  auVar3 = vblendvps_avx(auVar14._0_16_,auVar13._0_16_,auVar3);
  fVar9 = (float)FUN_1804aaa10(iVar5 + 2,auVar3._0_8_,0x41d00000);
  fVar12 = auVar13._0_4_;
  if (fVar12 < (float)uVar10) {
    fVar2 = ((float)(DAT_180b0a434 >> 0x18) / 255.0) * (float)uVar10;
    if (fVar12 <= fVar2) {
      auVar3 = vminss_avx(auVar14._0_16_,ZEXT416((uint)fVar2));
      fVar12 = auVar3._0_4_;
    }
    local_res18 = fVar11 + *param_3;
    local_74 = *param_3 - fVar11;
    local_res1c = fVar11 + param_3[1];
    local_70 = param_3[1] - fVar11;
    FUN_1804df870(param_1,&local_74,&local_res18,
                  (int)(longlong)(fVar12 * 255.0 + 0.5) << 0x18 | DAT_180b0a434 & 0xffffff,
                  DAT_180b0a41c * 5.0,0);
  }
  uVar6 = DAT_1808da474;
  if (param_6 != '\0') {
    uVar6 = DAT_180b0a40c;
  }
  param_5 = (auVar14._0_4_ - fVar9 * 0.1) * param_5;
  uVar6 = FUN_180462ad0(uVar6,DAT_180b0a424,uVar10);
  FUN_180463dc0(param_1,param_3,uVar6,param_4,param_5);
  return uVar1;
}



