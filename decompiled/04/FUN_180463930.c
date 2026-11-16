// FUN_180463930 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180463930 */

void FUN_180463930(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6,float param_7,float param_8)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined1 auVar15 [16];
  undefined4 local_res8;
  undefined4 local_resc;
  undefined4 local_58;
  undefined4 local_54;
  
  lVar11 = *(longlong *)(param_1 + 0xa8);
  lVar14 = (longlong)*(int *)(param_1 + 0xa0);
  iVar1 = *(int *)(param_1 + 0x20);
  uVar13 = (ulonglong)iVar1;
  local_58 = *(undefined4 *)(lVar11 + -0x10 + lVar14 * 0x10);
  local_54 = *(undefined4 *)(lVar11 + -0xc + lVar14 * 0x10);
  local_resc = *(undefined4 *)(lVar11 + -4 + lVar14 * 0x10);
  auVar4 = vminss_avx(ZEXT416(*(uint *)(lVar11 + -8 + lVar14 * 0x10)),ZEXT416((uint)param_8));
  local_res8 = auVar4._0_4_;
  FUN_1804d9420(auVar4._0_8_,&local_58,&local_res8,1);
  FUN_180463450(param_1,param_2,param_3,param_4,param_5,param_6,0);
  iVar2 = *(int *)(param_1 + 0xa0);
  iVar9 = iVar2 + -1;
  *(int *)(param_1 + 0xa0) = iVar9;
  if (iVar9 == 0) {
    puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x3c);
  }
  else {
    puVar10 = (undefined8 *)((longlong)(iVar2 + -2) * 0x10 + *(longlong *)(param_1 + 0xa8));
  }
  uVar8 = puVar10[1];
  *(undefined8 *)(param_1 + 0x60) = *puVar10;
  *(undefined8 *)(param_1 + 0x68) = uVar8;
  FUN_1804d9200(param_1);
  auVar15 = SUB6416(ZEXT464(0x3f800000),0);
  auVar4 = vmaxss_avx(ZEXT416((uint)(param_8 - param_7)),auVar15);
  if (iVar1 < *(int *)(param_1 + 0x20)) {
    lVar11 = uVar13 * 0x14;
    do {
      lVar14 = *(longlong *)(param_1 + 0x28);
      fVar6 = (param_8 - *(float *)(lVar11 + lVar14)) * (1.0 / auVar4._0_4_);
      fVar7 = 0.0;
      if (0.0 <= fVar6) {
        auVar5 = vminss_avx(auVar15,ZEXT416((uint)fVar6));
        fVar7 = auVar5._0_4_;
      }
      uVar3 = *(uint *)(lVar11 + 0x10 + lVar14);
      fVar7 = ((float)(uVar3 >> 0x18) / 255.0) * fVar7;
      fVar6 = 0.0;
      if (0.0 <= fVar7) {
        auVar5 = vminss_avx(auVar15,ZEXT416((uint)fVar7));
        fVar6 = auVar5._0_4_;
      }
      uVar12 = (int)uVar13 + 1;
      uVar13 = (ulonglong)uVar12;
      *(uint *)(lVar11 + 0x10 + lVar14) =
           (int)(longlong)(fVar6 * 255.0 + 0.5) << 0x18 | uVar3 & 0xffffff;
      lVar11 = lVar11 + 0x14;
    } while ((int)uVar12 < *(int *)(param_1 + 0x20));
  }
  return;
}



