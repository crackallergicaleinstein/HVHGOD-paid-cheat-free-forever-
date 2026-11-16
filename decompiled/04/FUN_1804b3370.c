// FUN_1804b3370 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804b3370 */

void FUN_1804b3370(undefined8 param_1,char *param_2,char *param_3,undefined4 param_4)

{
  float fVar1;
  undefined1 auVar2 [16];
  int iVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  char *pcVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  char *pcVar14;
  longlong lVar15;
  undefined8 in_stack_ffffffffffffff68;
  undefined4 uVar16;
  undefined1 local_68 [16];
  undefined8 local_58;
  
  lVar4 = DAT_180bb8ae8;
  uVar16 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  lVar15 = -1;
  if (param_3 == (char *)0x0) {
    lVar7 = -1;
    do {
      lVar11 = lVar7 + 1;
      lVar7 = lVar7 + 1;
    } while (param_2[lVar11] != '\0');
    param_3 = param_2 + lVar7;
  }
  if (param_2 != param_3) {
    auVar2 = *(undefined1 (*) [16])(DAT_180bb8ae8 + 0xdc8);
    lVar7 = *(longlong *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x2c8);
    auVar5 = vshufps_avx(auVar2,auVar2,0xff);
    local_68._0_12_ = auVar2._0_12_;
    local_68._12_4_ = auVar5._0_4_ * *(float *)(DAT_180bb8ae8 + 0xc84);
    local_58 = param_1;
    uVar6 = FUN_1804b1120(local_68);
    lVar11 = *(longlong *)(lVar4 + 0x11d0);
    fVar1 = *(float *)(lVar4 + 0x11e0);
    lVar13 = lVar4;
    if (((uVar6 & 0xff000000) != 0) && (*param_2 != '\0')) {
      if (lVar11 == 0) {
        lVar11 = *(longlong *)(*(longlong *)(lVar7 + 0x38) + 0x20);
      }
      if (fVar1 == 0.0) {
        fVar1 = *(float *)(*(longlong *)(lVar7 + 0x38) + 0x28);
      }
      local_68 = *(undefined1 (*) [16])(lVar7 + 0x60);
      FUN_1804ea5f0(lVar11,lVar7,fVar1,&local_58,CONCAT44(uVar16,uVar6),local_68,param_2,param_3,
                    param_4,0);
      lVar13 = DAT_180bb8ae8;
    }
    if (*(char *)(lVar4 + 0x2840) != '\0') {
      lVar4 = *(longlong *)(lVar13 + 0x2868);
      lVar7 = *(longlong *)(lVar13 + 0x14d0);
      lVar11 = *(longlong *)(lVar13 + 0x2870);
      *(undefined8 *)(lVar13 + 0x2870) = 0;
      *(undefined8 *)(lVar13 + 0x2868) = 0;
      if ((param_3 == (char *)0x0) && (param_3 = param_2, param_2 != (char *)0xffffffffffffffff)) {
        while (*param_3 != '\0') {
          pcVar14 = param_3 + 1;
          if (((*param_3 == '#') && (*pcVar14 == '#')) ||
             (param_3 = pcVar14, pcVar14 == (char *)0xffffffffffffffff)) break;
        }
      }
      auVar2 = vmaxss_avx(ZEXT416(*(uint *)(lVar13 + 0xcc8)),ZEXT416(*(uint *)(lVar13 + 0xcd8)));
      fVar1 = *(float *)(lVar13 + 0x2878);
      *(float *)(lVar13 + 0x2878) = local_58._4_4_;
      if (auVar2._0_4_ + fVar1 + 1.0 < local_58._4_4_) {
        FUN_1804cda40(&DAT_18085b098);
        *(undefined1 *)(lVar13 + 0x2841) = 1;
      }
      if (lVar4 != 0) {
        lVar8 = -1;
        do {
          pcVar14 = (char *)(lVar4 + 1 + lVar8);
          lVar8 = lVar8 + 1;
        } while (*pcVar14 != '\0');
        FUN_1804cda80(&local_58,lVar4,lVar8 + lVar4);
      }
      iVar3 = *(int *)(lVar7 + 0x1a0);
      iVar10 = *(int *)(lVar13 + 0x287c);
      if (iVar3 < *(int *)(lVar13 + 0x287c)) {
        *(int *)(lVar13 + 0x287c) = iVar3;
        iVar10 = iVar3;
      }
      iVar3 = *(int *)(lVar7 + 0x1a0);
      while( true ) {
        pcVar9 = (char *)FUN_18063b630(param_2,10,(longlong)param_3 - (longlong)param_2);
        pcVar14 = param_3;
        if (pcVar9 != (char *)0x0) {
          pcVar14 = pcVar9;
        }
        if ((param_2 == pcVar14) && (pcVar14 == param_3)) break;
        iVar12 = (iVar3 - iVar10) * 4;
        if (*(char *)(lVar13 + 0x2841) == '\0') {
          iVar12 = 1;
        }
        FUN_1804cda40("%*s%.*s",iVar12,&PTR_180700558,(int)pcVar14 - (int)param_2,param_2);
        *(undefined1 *)(lVar13 + 0x2841) = 0;
        if (*pcVar14 == '\n') {
          FUN_1804cda40(&DAT_18085b098);
          *(undefined1 *)(lVar13 + 0x2841) = 1;
        }
        if (pcVar14 == param_3) break;
        param_2 = pcVar14 + 1;
      }
      if (lVar11 != 0) {
        do {
          pcVar14 = (char *)(lVar11 + 1 + lVar15);
          lVar15 = lVar15 + 1;
        } while (*pcVar14 != '\0');
        FUN_1804cda80(&local_58,lVar11,lVar15 + lVar11);
      }
    }
  }
  return;
}



