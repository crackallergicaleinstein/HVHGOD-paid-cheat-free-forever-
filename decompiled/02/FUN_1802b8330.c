// FUN_1802b8330 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802b8330 */

void FUN_1802b8330(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined *puVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  ULONGLONG UVar6;
  longlong lVar7;
  float *pfVar8;
  float *pfVar9;
  undefined1 auVar10 [16];
  undefined1 extraout_var [56];
  float fVar11;
  undefined1 auVar12 [64];
  float fVar13;
  undefined1 auVar14 [64];
  float fVar15;
  undefined1 auVar16 [64];
  byte local_88 [8];
  undefined8 local_80;
  float local_78;
  float local_74 [19];
  
  if ((DAT_180b0cba0 == '\0') && (DAT_180b0cc10 == '\0')) {
    return;
  }
  iVar4 = DAT_180c6e694;
  if (DAT_180c6e694 == 0) {
    UVar6 = GetTickCount64();
    if (UVar6 < DAT_180c6e698) {
      iVar4 = 0;
    }
    else {
      local_80 = &DAT_1808f4dc0;
      iVar4 = FUN_1805f68d0(&DAT_1808f4dc0);
      if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808f4e0c == 0x7fffffff) {
        DAT_1808f4e0c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if ((DAT_180c6e694 == 0) && (DAT_180c6e698 <= UVar6)) {
        DAT_180c6e694 = FUN_1804174b0("C_CSPlayerPawn",0xf3e9a9ed);
        if (DAT_180c6e694 == 0) {
          DAT_180c6e698 = UVar6 + 1000;
        }
        else {
          DAT_180c6e698 = 0xffffffffffffffff;
        }
      }
      iVar4 = DAT_180c6e694;
      FUN_1805f68fc(&DAT_1808f4dc0);
    }
  }
  if (param_2 == 0) {
    return;
  }
  if (param_3 == 0) {
    return;
  }
  if (iVar4 == 0) {
    return;
  }
  if (iVar4 + param_3 == 0) {
    return;
  }
  local_88[0] = 0;
  lVar7 = FUN_18017ea70();
  *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
  cVar2 = FUN_1804514c0(local_88,iVar4 + param_3,1);
  if (cVar2 == '\0') goto LAB_1802b86b0;
  lVar7 = FUN_18017ea70();
  if (*(int *)(lVar7 + 4) != 0) {
    *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
  }
  param_2 = param_2 + 0x498;
  if (param_2 == 0) {
    return;
  }
  fVar15 = 0.0;
  local_78 = 0.0;
  lVar7 = FUN_18017ea70();
  *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
  cVar2 = FUN_1804514c0(&local_78,param_2,4);
  if (cVar2 == '\0') goto LAB_1802b86b0;
  lVar7 = FUN_18017ea70();
  if (*(int *)(lVar7 + 4) != 0) {
    *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
  }
  auVar14 = ZEXT464((uint)local_78);
  if (((local_88[0] == 0) || (DAT_180b0cc10 == '\0')) || (DAT_180b0cc7c != 1)) {
    auVar10 = vpcmpeqd_avx(ZEXT116(local_88[0]),SUB6416(ZEXT464(0),0));
    auVar10 = vblendvps_avx(ZEXT416(DAT_180b0cc78),ZEXT416(DAT_180b0cc08),auVar10);
    auVar12 = ZEXT1664(auVar10);
    cVar2 = DAT_180b0cba0;
    if (local_88[0] != 0) {
      cVar2 = DAT_180b0cc10;
    }
    if (cVar2 != '\0') {
      sVar3 = thunk_FUN_180624430(auVar10._0_8_);
      fVar13 = auVar14._0_4_;
      if (((sVar3 < 1) && (fVar11 = auVar12._0_4_, fVar15 < fVar11)) && (fVar11 < 180.0)) {
        local_80._0_5_ = CONCAT14(1,fVar11);
        goto LAB_1802b8683;
      }
    }
LAB_1802b867f:
    fVar13 = auVar14._0_4_;
    local_80._0_5_ = (uint5)(uint)(float)local_80;
  }
  else {
    auVar16 = ZEXT464(DAT_180b0cc84);
    auVar12 = ZEXT464(DAT_180b0cc80);
    uVar5 = FUN_1802b6a30(param_3);
    if (((1 < uVar5 - 1) || (sVar3 = thunk_FUN_180624430(auVar14._0_8_), 0 < sVar3)) ||
       ((auVar14._0_4_ <= fVar15 || (180.0 <= auVar14._0_4_)))) goto LAB_1802b867f;
    auVar10 = vpcmpeqd_avx(ZEXT416(uVar5),SUB6416(ZEXT464(1),0));
    auVar10 = vblendvps_avx(auVar16._0_16_,auVar12._0_16_,auVar10);
    auVar12 = ZEXT1664(auVar10);
    sVar3 = thunk_FUN_180624430(auVar10._0_8_);
    fVar13 = auVar14._0_4_;
    if (((0 < sVar3) || (fVar15 = auVar12._0_4_, fVar15 < 25.0)) || (300.0 < fVar15))
    goto LAB_1802b867f;
    fVar11 = 100.0;
    if (fVar15 == 100.0) {
      local_80._0_5_ = CONCAT14(1,fVar13);
    }
    else {
      auVar16._0_8_ = FUN_180639470(fVar13 * 0.008726646);
      auVar16._8_56_ = extraout_var;
      auVar10._0_4_ = (float)auVar16._0_8_ / (auVar12._0_4_ / fVar11);
      auVar10._4_12_ = auVar16._4_12_;
      local_74[0] = (float)FUN_1806370a0(auVar10._0_8_);
      puVar1 = local_80;
      fVar13 = auVar14._0_4_;
      local_74[0] = local_74[0] / 0.008726646;
      local_80 = (undefined *)CONCAT44(local_80._4_4_,0x43160000);
      local_78 = 1.0;
      pfVar9 = &local_78;
      if (1.0 <= local_74[0]) {
        pfVar9 = local_74;
      }
      pfVar8 = (float *)&local_80;
      if (local_74[0] <= 150.0) {
        pfVar8 = pfVar9;
      }
      local_80._5_3_ = SUB83(puVar1,5);
      local_80._0_5_ = CONCAT14(1,*pfVar8);
    }
  }
LAB_1802b8683:
  if ((char)((ulonglong)local_80 >> 0x20) == '\0') {
    return;
  }
  if (fVar13 == (float)local_80) {
    return;
  }
  lVar7 = FUN_18017ea70();
  *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
  FUN_1801ad800(param_2,&local_80);
LAB_1802b86b0:
  lVar7 = FUN_18017ea70();
  if (*(int *)(lVar7 + 4) != 0) {
    *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
  }
  return;
}



