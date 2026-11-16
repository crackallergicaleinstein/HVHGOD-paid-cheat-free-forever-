// FUN_1804ac430 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804ac430 */

bool FUN_1804ac430(undefined8 param_1,float *param_2,float *param_3,undefined1 (*param_4) [16],
                  longlong param_5,undefined8 param_6,undefined1 param_7)

{
  undefined2 uVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  undefined2 *puVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  byte bVar11;
  bool bVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined1 auVar15 [64];
  undefined1 auVar16 [64];
  undefined8 in_stack_ffffffffffffff28;
  undefined4 uVar17;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined8 uStack_70;
  
  lVar4 = DAT_180bb8ae8;
  *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
  plVar2 = *(longlong **)(lVar4 + 0x14d0);
  uVar6 = FUN_1804b0a90(param_1,0,
                        *(undefined4 *)(plVar2[0x22] + -4 + (longlong)(int)plVar2[0x21] * 4));
  if (*(uint *)(*plVar2 + 0x1534) == uVar6) {
    FUN_1804cf810(uVar6,0xb,param_1);
  }
  uVar14 = CONCAT71((int7)((ulonglong)in_stack_ffffffffffffff28 >> 8),1);
  puVar8 = (undefined2 *)FUN_1804aad60(&param_7,(ulonglong)uVar6,param_2,param_3,uVar14);
  uVar17 = (undefined4)((ulonglong)uVar14 >> 0x20);
  uVar1 = *puVar8;
  if ((*(int *)(DAT_180bb8ae8 + 0x2008) < *(int *)(DAT_180bb8ae8 + 0x1ff8)) &&
     (*(uint *)((longlong)*(int *)(DAT_180bb8ae8 + 0x2008) * 0x38 +
               *(longlong *)(DAT_180bb8ae8 + 0x2000)) == uVar6)) {
    bVar11 = 1;
  }
  else {
    bVar11 = 0;
  }
  if ((*(char *)(puVar8 + 1) != '\0') && (bVar11 == 0)) {
    FUN_1804c7740(uVar6,0);
  }
  auVar15 = ZEXT464(0x3f800000);
  auVar16 = ZEXT864(0);
  if (((char)uVar1 == '\0') && (bVar11 == 0)) {
    uVar14 = 0;
  }
  else {
    uVar14 = auVar15._0_8_;
  }
  uVar9 = (ulonglong)(uVar6 >> 0x1e ^ uVar6) * -0x40a7b892e31b1a47;
  uVar9 = (uVar9 >> 0x1b ^ uVar9) * -0x6b2fb644ecceee15;
  uVar9 = uVar9 >> 0x1f ^ uVar9;
  uVar14 = FUN_1804aaa10((uint)(uVar9 >> 0x20) ^ (uint)uVar9,uVar14,0x41900000);
  uVar9 = (ulonglong)uVar6 ^ 0x78dde6e5fd29f054;
  uVar9 = (uVar9 >> 0x1e ^ uVar9) * -0x40a7b892e31b1a47;
  uVar9 = (uVar9 >> 0x1b ^ uVar9) * -0x6b2fb644ecceee15;
  uVar9 = uVar9 >> 0x1f ^ uVar9;
  auVar3 = vpcmpeqd_avx(ZEXT116(bVar11),SUB6416(ZEXT464(0),0));
  auVar3 = vblendvps_avx(auVar15._0_16_,auVar16._0_16_,auVar3);
  uVar13 = FUN_1804aaa10((uint)(uVar9 >> 0x20) ^ (uint)uVar9,auVar3._0_8_,0x41800000);
  local_98 = *param_4;
  puVar10 = (undefined8 *)FUN_1804a2590(&local_78,local_98,param_5,param_6);
  if (0xf < (ulonglong)puVar10[3]) {
    puVar10 = (undefined8 *)*puVar10;
  }
  FUN_1804aa220(plVar2[0x59],param_2,param_3,uVar14,CONCAT44(uVar17,uVar13),puVar10);
  FUN_18015c010(&local_78);
  bVar12 = false;
  auVar3 = vmaxss_avx(ZEXT416((uint)(*param_3 - *param_2)),ZEXT416((uint)(DAT_180b0a41c * 150.0)));
  cVar5 = FUN_1804a8ab0(uVar6,param_2,param_3,auVar3._0_8_);
  if (cVar5 != '\0') {
    local_98 = (undefined1  [16])0x0;
    local_88 = (undefined1  [16])0x0;
    local_78 = *(undefined8 *)*param_4;
    uStack_70 = *(undefined8 *)(*param_4 + 8);
    iVar7 = FUN_1804a9370(&local_78,0xffffffff,param_5,local_88,local_98);
    bVar12 = -1 < iVar7;
    if (bVar12) {
      *(bool *)(iVar7 + param_5) = *(char *)(iVar7 + param_5) == '\0';
    }
    FUN_1804aeac0();
  }
  return bVar12;
}



