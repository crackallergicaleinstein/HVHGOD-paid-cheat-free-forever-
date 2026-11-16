// FUN_180306ad0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180306ad0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180306ad0(undefined8 param_1,longlong param_2)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  int iVar3;
  ULONGLONG UVar4;
  ulonglong uVar5;
  uint *puVar6;
  uint *puVar7;
  bool bVar8;
  ulonglong uVar9;
  char cVar10;
  char cVar11;
  undefined4 uVar12;
  uint uVar13;
  float fVar14;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  longlong lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  if (DAT_180cc8a30 != '\0') {
    AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
    local_68 = _DAT_180bb8890;
    lStack_60 = lRam0000000180bb8898;
    uStack_58 = uRam0000000180bb88a0;
    uStack_50 = uRam0000000180bb88a8;
    ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
    lVar2 = lStack_60;
    if (lStack_60 != 0) {
      iVar3 = DAT_180c6f338;
      if (DAT_180c6f338 == 0) {
        UVar4 = GetTickCount64();
        if (UVar4 < DAT_180c6f330) {
          iVar3 = 0;
        }
        else {
          local_78 = &DAT_1808ff740;
          iVar3 = FUN_1805f68d0(&DAT_1808ff740);
          if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1805f6d44(5);
          }
          if (DAT_1808ff78c == 0x7fffffff) {
            DAT_1808ff78c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
            FUN_1805f6d44(6);
          }
          if ((DAT_180c6f338 == 0) && (DAT_180c6f330 <= UVar4)) {
            DAT_180c6f338 = FUN_1804174b0("C_BaseEntity",0x5600aa92);
            if (DAT_180c6f338 == 0) {
              DAT_180c6f330 = UVar4 + 1000;
            }
            else {
              DAT_180c6f330 = 0xffffffffffffffff;
            }
          }
          iVar3 = DAT_180c6f338;
          FUN_1805f68fc(&DAT_1808ff740);
        }
      }
      if (*(char *)(iVar3 + lVar2) == '\t') {
        *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) | 1;
        puVar6 = (uint *)0x0;
        if (*(longlong *)(param_2 + 0x40) != 0) {
          puVar6 = (uint *)(*(longlong *)(param_2 + 0x40) + 0x10);
        }
        if ((puVar6 != (uint *)0x0) &&
           ((fVar14 = (float)puVar6[0x12], fVar14 != 0.0 || ((float)puVar6[0x13] != 0.0)))) {
          bVar8 = (bool)((byte)(DAT_180b0dfd8 >> 3) & 1);
          uVar9 = 0x200;
          if (bVar8 == (bool)((byte)DAT_180b0dfd8 >> 4 & 1)) {
            if (ABS(fVar14) <= 0.01) {
              fVar14 = (float)DAT_180b0dfc8;
              bVar8 = 0.0 < fVar14;
            }
            else {
              bVar8 = fVar14 < 0.0;
            }
            bVar8 = !bVar8 && fVar14 != 0.0;
          }
          uVar5 = (ulonglong)bVar8;
          local_70 = DAT_180b0dfd0;
          auVar1 = vpcmpeqd_avx(ZEXT116(bVar8),SUB6416(ZEXT464(0),0));
          auVar1 = vblendvps_avx(SUB6416(ZEXT464(0xc2b20000),0),SUB6416(ZEXT464(0x42b20000),0),
                                 auVar1);
          uVar12 = auVar1._0_4_;
          local_78._4_4_ = (float)((ulonglong)DAT_180b0dfc8 >> 0x20);
          if (((DAT_180b0dfd8 & 0x200) == 0) || ((DAT_180b0dfd8 & 0x400) != 0)) {
            cVar11 = '\0';
            if (((DAT_180b0dfd8 & 0x400) == 0) || ((DAT_180b0dfd8 & 0x200) != 0)) {
              cVar10 = '\0';
              auVar1 = vpcmpeqd_avx(ZEXT116(bVar8),SUB6416(ZEXT464(0),0));
              auVar1 = vblendvps_avx(SUB6416(ZEXT464(0xc2b40000),0),SUB6416(ZEXT464(0x42b40000),0),
                                     auVar1);
              local_78 = (undefined *)CONCAT44(auVar1._0_4_ + local_78._4_4_,uVar12);
              FUN_180451150(&local_78);
              auVar1 = vpcmpeqd_avx(ZEXT416((uint)uVar5 & 0xff),SUB6416(ZEXT464(0),0));
              auVar1 = vblendvps_avx(SUB6416(ZEXT464(0x3f800000),0),SUB6416(ZEXT464(0xbf800000),0),
                                     auVar1);
              uVar13 = auVar1._0_4_;
              puVar6[0x12] = uVar13;
            }
            else {
              cVar10 = '\x01';
              local_78 = (undefined *)CONCAT44(local_78._4_4_ + 90.0,uVar12);
              FUN_180451150(&local_78);
              auVar1 = vpcmpeqd_avx(ZEXT416((uint)uVar5 & 0xff),SUB6416(ZEXT464(0),0));
              uVar13 = 0xbf800000;
              auVar1 = vblendvps_avx(SUB6416(ZEXT464(0x3f800000),0),SUB6416(ZEXT464(0xbf800000),0),
                                     auVar1);
              puVar6[0x12] = auVar1._0_4_;
            }
          }
          else {
            cVar11 = '\x01';
            cVar10 = '\0';
            local_78 = (undefined *)CONCAT44(local_78._4_4_ + -90.0,uVar12);
            FUN_180451150(&local_78);
            auVar1 = vpcmpeqd_avx(ZEXT416((uint)uVar5 & 0xff),SUB6416(ZEXT464(0),0));
            uVar13 = 0x3f800000;
            auVar1 = vblendvps_avx(SUB6416(ZEXT464(0x3f800000),0),SUB6416(ZEXT464(0xbf800000),0),
                                   auVar1);
            puVar6[0x12] = auVar1._0_4_;
          }
          *puVar6 = *puVar6 | 0xc0;
          puVar6[0x13] = uVar13;
          uVar5 = uVar5 & 0xff ^ 1;
          if (cVar11 == '\0') {
            if (cVar10 == '\0') {
              uVar9 = (uVar5 + 1) * 0x200;
            }
            else {
              uVar9 = 0x400;
            }
          }
          *(ulonglong *)(param_2 + 0x60) =
               uVar9 | uVar5 * 8 + 8 | *(ulonglong *)(param_2 + 0x60) & 0xfffffffffffff9e7;
          *puVar6 = *puVar6 | 4;
          puVar7 = (uint *)0x0;
          if (*(longlong *)(puVar6 + 0xc) != 0) {
            puVar7 = (uint *)(*(longlong *)(puVar6 + 0xc) + 0x10);
          }
          if (puVar7 != (uint *)0x0) {
            puVar7[2] = (uint)local_78;
            puVar7[3] = (uint)local_78._4_4_;
            *puVar7 = *puVar7 | 7;
            puVar7[4] = 0;
          }
        }
      }
    }
  }
  return;
}



