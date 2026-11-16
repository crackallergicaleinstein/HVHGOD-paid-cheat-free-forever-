// FUN_1804e8bf0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804e8bf0 */

undefined8
FUN_1804e8bf0(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,float param_5,
             uint *param_6,undefined8 param_7)

{
  undefined1 uVar1;
  undefined1 uVar2;
  ushort uVar3;
  longlong lVar4;
  float fVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [64];
  undefined1 auVar19 [64];
  float fVar20;
  float fVar21;
  float local_res10 [2];
  int local_res18 [2];
  ulonglong in_stack_fffffffffffffee8;
  ulonglong uVar22;
  undefined4 uVar24;
  undefined8 uVar23;
  ulonglong in_stack_fffffffffffffef0;
  ulonglong uVar25;
  undefined4 uVar27;
  undefined8 uVar26;
  float *pfVar28;
  undefined4 uVar29;
  int *piVar30;
  undefined4 uVar31;
  float *pfVar32;
  undefined4 uVar33;
  ulonglong *puVar34;
  undefined4 uVar35;
  ulonglong local_c8;
  float local_c0;
  int local_bc;
  uint local_b8;
  longlong local_b0;
  
  fVar13 = param_5;
  lVar4 = *(longlong *)(param_2 + 0x90);
  iVar7 = (int)*(char *)(param_2 + 0x37);
  if ((*(char *)(param_2 + 0x37) == '\0') &&
     ((36.0 < *(float *)(param_3 + 0x14) * *(float *)(param_3 + 0x18) * *(float *)(param_2 + 0x70)
      || (iVar7 = 2, *(char *)(param_2 + 0x36) != '\0')))) {
    iVar7 = 1;
  }
  iVar9 = 1;
  if (*(char *)(param_2 + 0x38) != '\0') {
    iVar9 = (int)*(char *)(param_2 + 0x38);
  }
  fVar17 = *(float *)(param_3 + 0x14) * *(float *)(lVar4 + 0xa0);
  fVar15 = *(float *)(param_3 + 0x18) * *(float *)(param_2 + 0x70);
  fVar16 = 0.0;
  fVar20 = (float)iVar7;
  fVar21 = (float)iVar9;
  fVar14 = fVar20 * fVar15 * fVar17;
  auVar18 = ZEXT464((uint)fVar14);
  fVar5 = fVar21 * fVar15 * fVar17;
  auVar19 = ZEXT464((uint)fVar5);
  uVar25 = in_stack_fffffffffffffef0 & 0xffffffff00000000;
  uVar22 = in_stack_fffffffffffffee8 & 0xffffffff00000000;
  FUN_1804d56b0(lVar4,param_5,fVar14,fVar5,uVar22,uVar25,local_res10,local_res18,&local_c0,&local_c8
               );
  puVar6 = param_6;
  uVar24 = (undefined4)(uVar22 >> 0x20);
  uVar27 = (undefined4)(uVar25 >> 0x20);
  lVar10 = *(longlong *)(lVar4 + 8);
  lVar11 = (longlong)*(int *)(lVar4 + 0x28);
  uVar8 = (uint)CONCAT11(*(undefined1 *)((longlong)*(int *)(lVar4 + 0x24) + 0x22 + lVar10),
                         *(undefined1 *)((longlong)*(int *)(lVar4 + 0x24) + 0x23 + lVar10));
  if ((int)fVar13 < (int)uVar8) {
    lVar10 = (int)fVar13 * 4 + lVar10;
    uVar1 = *(undefined1 *)(lVar10 + 1 + lVar11);
    uVar2 = *(undefined1 *)(lVar10 + lVar11);
  }
  else {
    lVar10 = (ulonglong)(uVar8 * 4) + lVar10;
    uVar1 = *(undefined1 *)(lVar10 + -3 + lVar11);
    uVar2 = *(undefined1 *)(lVar10 + -4 + lVar11);
  }
  fVar17 = (float)(int)CONCAT11(uVar2,uVar1) * fVar17;
  if ((float *)CONCAT44(param_7._4_4_,(int)param_7) == (float *)0x0) {
    param_6[1] = (uint)fVar17;
    if ((local_res10[0] != local_c0) && (local_res18[0] != (int)local_c8)) {
      param_7._0_4_ = ((int)local_c0 - (int)local_res10[0]) + -1 + iVar7;
      iVar12 = ((int)local_c8 - local_res18[0]) + -1 + iVar9;
      local_bc = iVar12;
      local_b8 = FUN_1804e7f30(param_1,(int)param_7,iVar12,0);
      if (local_b8 == 0xffffffff) {
        return 0;
      }
      local_b0 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x68) +
                 ((longlong)
                  (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x78) +
                           (ulonglong)(local_b8 & 0x7ffff) * 4) << 0xc) >> 0xc) * 8;
      puVar34 = &local_c8;
      pfVar32 = &local_c0;
      piVar30 = local_res18;
      pfVar28 = local_res10;
      uVar26 = CONCAT44(uVar27,fVar16);
      uVar23 = CONCAT44(uVar24,fVar16);
      FUN_1804d56b0(lVar4,fVar13,auVar18._0_8_,auVar19._0_8_,uVar23,uVar26,pfVar28,piVar30,pfVar32,
                    puVar34);
      uVar24 = (undefined4)((ulonglong)uVar23 >> 0x20);
      uVar27 = (undefined4)((ulonglong)uVar26 >> 0x20);
      uVar29 = (undefined4)((ulonglong)pfVar28 >> 0x20);
      uVar31 = (undefined4)((ulonglong)piVar30 >> 0x20);
      uVar33 = (undefined4)((ulonglong)pfVar32 >> 0x20);
      uVar35 = (undefined4)((ulonglong)puVar34 >> 0x20);
      iVar12 = iVar12 * (int)param_7;
      lVar10 = *(longlong *)(param_1 + 0xa0);
      FUN_1804d0b60(lVar10 + 0x80,iVar12);
      local_c8 = *(ulonglong *)(lVar10 + 0x88);
      FUN_18063ab10(local_c8,0,(longlong)iVar12);
      uVar22 = local_c8;
      iVar12 = (int)param_7;
      uVar23 = CONCAT44(uVar29,auVar19._0_4_);
      FUN_1804d7e00(lVar4,local_c8,(int)param_7,local_bc,CONCAT44(uVar24,(int)param_7),
                    CONCAT44(uVar27,auVar18._0_4_),uVar23,CONCAT44(uVar31,fVar16),
                    CONCAT44(uVar33,fVar16),CONCAT44(uVar35,iVar7),iVar9,&param_5,&local_c0,param_5)
      ;
      fVar13 = *(float *)(**(longlong **)(*(longlong *)(param_3 + 0x58) + 0x28) + 0x3c);
      if (fVar13 == fVar16) {
        fVar13 = 1.0;
      }
      else {
        fVar13 = *(float *)(param_3 + 0x14) / fVar13;
      }
      fVar14 = fVar13 * *(float *)(param_2 + 0x50) + 0.5;
      iVar7 = (int)fVar14;
      if ((fVar14 < fVar16) && ((float)iVar7 != fVar14)) {
        iVar7 = iVar7 + -1;
      }
      fVar13 = fVar13 * *(float *)(param_2 + 0x54) + 0.5;
      iVar9 = (int)fVar13;
      if ((fVar13 < fVar16) && ((float)iVar9 != fVar13)) {
        iVar9 = iVar9 + -1;
      }
      fVar13 = (float)(int)(*(float *)(param_3 + 0x44) + 0.5) + local_c0 + (float)iVar9;
      fVar14 = 1.0 / (fVar20 * fVar15);
      fVar15 = 1.0 / (fVar21 * fVar15);
      puVar6[2] = (uint)((float)(int)local_res10[0] * fVar14 + (float)iVar7 + param_5);
      puVar6[3] = (uint)((float)local_res18[0] * fVar15 + fVar13);
      puVar6[4] = (uint)((float)(int)((uint)*(ushort *)(local_b0 + 4) + (int)local_res10[0]) *
                         fVar14 + (float)iVar7 + param_5);
      uVar3 = *(ushort *)(local_b0 + 6);
      *puVar6 = *puVar6 | 2;
      puVar6[5] = (uint)((float)(int)((uint)uVar3 + local_res18[0]) * fVar15 + fVar13);
      puVar6[10] = local_b8;
      FUN_1804e9400(param_1,param_3,param_2,puVar6,local_b0,uVar22,uVar23,iVar12);
    }
  }
  else {
    *(float *)CONCAT44(param_7._4_4_,(int)param_7) = fVar17;
  }
  return 1;
}



