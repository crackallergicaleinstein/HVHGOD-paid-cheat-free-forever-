// FUN_1804b3be0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804b3be0 */

void FUN_1804b3be0(longlong param_1,float *param_2,float *param_3,undefined8 param_4,char *param_5,
                  char *param_6,longlong *param_7)

{
  char *pcVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  longlong lVar6;
  undefined4 uVar7;
  int *piVar8;
  char *pcVar9;
  float fVar10;
  undefined1 in_ZMM3 [64];
  float fVar11;
  undefined1 auVar12 [64];
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [64];
  longlong local_res10;
  float local_res18 [4];
  ulonglong in_stack_ffffffffffffff28;
  ulonglong uVar16;
  undefined4 uVar18;
  longlong *plVar17;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  undefined1 local_88 [12];
  float fStack_7c;
  
  lVar6 = DAT_180bb8ae8;
  uVar7 = (undefined4)(in_stack_ffffffffffffff28 >> 0x20);
  auVar15 = ZEXT1664(in_ZMM3._0_16_);
  pcVar9 = param_6;
  if ((param_6 == (char *)0x0) && (pcVar9 = param_5, param_5 != (char *)0xffffffffffffffff)) {
    while (*pcVar9 != '\0') {
      pcVar1 = pcVar9 + 1;
      if (((*pcVar9 == '#') && (*pcVar1 == '#')) ||
         (pcVar9 = pcVar1, pcVar1 == (char *)0xffffffffffffffff)) break;
    }
  }
  fVar11 = 0.0;
  if (param_7 == (longlong *)0x0) {
    if (param_5 == pcVar9) {
      param_6 = (char *)((ulonglong)*(uint *)(DAT_180bb8ae8 + 0x11e0) << 0x20);
    }
    else {
      uVar16 = in_stack_ffffffffffffff28 & 0xffffffff00000000;
      FUN_1804ea040(&param_7,*(undefined8 *)(DAT_180bb8ae8 + 0x11d0),
                    *(uint *)(DAT_180bb8ae8 + 0x11e0),0x7f7fffff,uVar16,param_5,pcVar9,pcVar9,0);
      uVar7 = (undefined4)(uVar16 >> 0x20);
      param_6 = (char *)CONCAT44(param_7._4_4_,
                                 (float)(int)((uint)((float)(int)param_7._0_4_ < param_7._0_4_) +
                                             (int)param_7._0_4_));
    }
  }
  else {
    param_6 = (char *)*param_7;
  }
  local_res10 = (longlong)param_6;
  if (SUB84(param_6,0) <= *param_3 - *param_2) {
    param_6 = (char *)CONCAT44(fVar11,fVar11);
    FUN_1804b3670(param_1,param_2,param_3,param_5,pcVar9,&local_res10,&param_6,0);
    goto LAB_1804b3f11;
  }
  lVar3 = *(longlong *)(param_1 + 0x38);
  lVar4 = *(longlong *)(lVar3 + 0x20);
  auVar12 = ZEXT464(*(uint *)(lVar3 + 0x28));
  param_7 = (longlong *)0x0;
  fVar13 = *(float *)(lVar3 + 0x2c);
  piVar8 = (int *)FUN_1804e97d0(lVar4,*(uint *)(lVar3 + 0x28),0xbf800000);
  auVar14 = auVar15._0_16_;
  uVar2 = *(ushort *)(lVar4 + 0x30);
  if ((int)(uint)uVar2 < *piVar8) {
    fVar10 = *(float *)(*(longlong *)(piVar8 + 2) + (ulonglong)uVar2 * 4);
    if (fVar10 < fVar11) goto LAB_1804b3d73;
  }
  else {
LAB_1804b3d73:
    fVar10 = (float)FUN_1804e8740(piVar8,(ulonglong)uVar2);
    auVar14 = auVar15._0_16_;
  }
  auVar14 = vmaxss_avx(ZEXT416((uint)*param_3),auVar14);
  auVar14 = vmaxss_avx(ZEXT416((uint)((auVar14._0_4_ - fVar10 * fVar13) - *param_2)),
                       ZEXT416(0x3f800000));
  FUN_1804ea040(local_res18,lVar4,auVar12._0_8_,auVar14._0_8_,CONCAT44(uVar7,fVar11),param_5,pcVar9,
                pcVar9,&param_7);
  param_6 = (char *)CONCAT44(fVar11,fVar11);
  plVar17 = param_7;
  FUN_1804b3670(param_1,param_2,param_3,param_5,param_7,&local_res10,&param_6,0);
  uVar18 = (undefined4)((ulonglong)plVar17 >> 0x20);
  local_90 = *param_3;
  local_98 = *param_2;
  local_8c = param_3[1];
  local_94 = param_2[1];
  auVar14 = *(undefined1 (*) [16])(DAT_180bb8ae8 + 0xdc8);
  auVar5 = vshufps_avx(auVar14,auVar14,0xff);
  local_88 = auVar14._0_12_;
  fStack_7c = auVar5._0_4_ * *(float *)(DAT_180bb8ae8 + 0xc84);
  param_6 = (char *)CONCAT44((float)(int)local_94,(float)(int)(local_98 + local_res18[0]));
  uVar7 = FUN_1804b1120(local_88);
  FUN_1804ea300(lVar4,param_1,auVar12._0_8_,&param_6,CONCAT44(uVar18,uVar7),
                *(undefined2 *)(lVar4 + 0x30),&local_98);
LAB_1804b3f11:
  if (*(char *)(lVar6 + 0x2840) != '\0') {
    FUN_1804cda80(param_2,param_5,pcVar9);
  }
  return;
}



