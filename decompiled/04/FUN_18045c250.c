// FUN_18045c250 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18045c250 */

undefined1 (*) [16] FUN_18045c250(undefined1 (*param_1) [16],undefined8 *param_2,ulonglong param_3)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint *puVar7;
  uint uVar8;
  char *pcVar9;
  undefined1 auVar10 [16];
  
  uVar8 = 0;
  *param_1 = (undefined1  [16])0x0;
  *(undefined8 *)param_1[1] = 0;
  *(undefined8 *)(param_1[1] + 8) = 0xf;
  (*param_1)[0] = 0;
  *(undefined8 *)param_1[2] = 0;
  *(undefined8 *)(param_1[2] + 8) = 0;
  *(undefined4 *)param_1[3] = 0x3f800000;
  *(undefined4 *)(param_1[3] + 4) = 0x3f800000;
  *(undefined8 *)(param_1[3] + 8) = 0;
  *(undefined8 *)param_1[4] = 0;
  *(undefined8 *)(param_1[4] + 8) = 0;
  *(undefined8 *)param_1[5] = 0;
  *(undefined4 *)(param_1[5] + 8) = 0x3f800000;
  *(undefined2 *)(param_1[5] + 0xc) = 1;
  param_1[5][0xe] = 0;
  *(undefined8 *)param_1[6] = 0;
  pcVar3 = (char *)*param_2;
  pcVar9 = pcVar3;
  if (pcVar3 != (char *)0xffffffffffffffff) {
    while (*pcVar9 != '\0') {
      pcVar1 = pcVar9 + 1;
      if (((*pcVar9 == '#') && (*pcVar1 == '#')) ||
         (pcVar9 = pcVar1, pcVar1 == (char *)0xffffffffffffffff)) break;
    }
  }
  FUN_180113930(0,pcVar3,(longlong)pcVar9 - (longlong)pcVar3);
  *(ulonglong *)param_1[2] = param_3;
  iVar2 = *(int *)(param_2 + 2);
  *(int *)(param_1[2] + 8) = iVar2;
  *(undefined4 *)(param_1[2] + 0xc) = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined4 *)param_1[3] = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)(param_1[3] + 4) = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined8 *)(param_1[3] + 8) = param_2[4];
  uVar4 = param_2[6];
  *(undefined8 *)param_1[4] = param_2[5];
  *(undefined8 *)(param_1[4] + 8) = uVar4;
  lVar5 = DAT_180c62c70;
  if ((longlong)param_3 < 0) {
    lVar5 = DAT_180c62c68;
  }
  if ((lVar5 != 0) &&
     (puVar7 = (uint *)((param_3 & 0x7fffffffffffffff) + lVar5), puVar7 != (uint *)0x0)) {
    if (iVar2 == 0) {
      auVar10 = vpcmpeqd_avx(ZEXT116((byte)*puVar7),SUB6416(ZEXT464(0),0));
      auVar10 = vblendvps_avx(SUB6416(ZEXT464(0x3f800000),0),ZEXT816(0),auVar10);
      goto LAB_18045c3d1;
    }
    if (iVar2 == 1) {
      auVar10 = ZEXT416(*puVar7);
      goto LAB_18045c3d1;
    }
    if (iVar2 == 2) {
      auVar10._0_4_ = (float)(int)*puVar7;
      auVar10._4_12_ = SUB1612(ZEXT816(0),4);
      goto LAB_18045c3d1;
    }
    if (iVar2 == 3) {
      uVar6 = 0;
      if (*(ulonglong *)(param_1[4] + 8) != 0) {
        do {
          if (0x17 < uVar6) break;
          if (*(char *)((longlong)puVar7 + uVar6) != '\0') {
            uVar8 = uVar8 | 1 << ((uint)uVar6 & 0x1f);
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < *(ulonglong *)(param_1[4] + 8));
      }
      auVar10._0_4_ = (float)uVar8;
      auVar10._4_12_ = SUB1612(ZEXT816(0),4);
      goto LAB_18045c3d1;
    }
  }
  auVar10 = ZEXT416(0);
LAB_18045c3d1:
  *(int *)(param_1[5] + 8) = auVar10._0_4_;
  if (*(int *)(param_1[2] + 8) == 0) {
    auVar10 = vcmpss_avx(SUB6416(ZEXT464(0x3f000000),0),auVar10,1);
    auVar10 = vblendvps_avx(SUB6416(ZEXT464(0x3f800000),0),ZEXT816(0),auVar10);
    *(int *)(param_1[5] + 8) = auVar10._0_4_;
  }
  return param_1;
}



