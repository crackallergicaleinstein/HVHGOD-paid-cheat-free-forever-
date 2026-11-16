// FUN_1803d7740 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803d7740 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1803d7740(void)

{
  undefined1 auVar1 [16];
  bool bVar2;
  ulonglong uVar3;
  char cVar4;
  short sVar5;
  int iVar6;
  ULONGLONG UVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [64];
  undefined1 auVar13 [64];
  undefined1 auVar14 [64];
  undefined1 auVar15 [64];
  undefined8 local_108;
  ulonglong uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [16];
  undefined1 local_c8 [16];
  undefined1 auStack_b8 [16];
  undefined8 local_a8;
  undefined4 uStack_a0;
  uint uStack_9c;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  local_108 = _DAT_180bb8890;
  uStack_100 = uRam0000000180bb8898;
  uStack_f8 = uRam0000000180bb88a0;
  uStack_f0 = uRam0000000180bb88a8;
  cVar4 = cRam0000000180bb88b8;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  uVar3 = uStack_100;
  iVar6 = DAT_180c71f38;
  if ((cVar4 == '\0') || (uStack_100 == 0)) {
LAB_1803d7aee:
    FUN_1803d9340();
    return;
  }
  if ((DAT_180c71f38 == 0) && (UVar7 = GetTickCount64(), DAT_180c71f30 <= UVar7)) {
    local_108 = &DAT_1809ba6a0;
    iVar6 = FUN_1805f68d0(&DAT_1809ba6a0);
    if (iVar6 != 0) goto LAB_1803d7b2b;
    if (DAT_1809ba6ec == 0x7fffffff) {
      DAT_1809ba6ec = 0x7ffffffe;
      goto LAB_1803d7b40;
    }
    if ((DAT_180c71f38 == 0) && (DAT_180c71f30 <= UVar7)) {
      DAT_180c71f38 = FUN_1804174b0("C_BaseEntity",0x9d930423);
      if (DAT_180c71f38 == 0) {
        DAT_180c71f30 = UVar7 + 1000;
      }
      else {
        DAT_180c71f30 = 0xffffffffffffffff;
      }
    }
    iVar6 = DAT_180c71f38;
    FUN_1805f68fc(&DAT_1809ba6a0);
  }
  iVar9 = DAT_180c71f3c;
  lVar10 = *(longlong *)((longlong)iVar6 + uVar3);
  if (lVar10 == 0) goto LAB_1803d7aee;
  if ((DAT_180c71f3c == 0) && (UVar7 = GetTickCount64(), DAT_180c71f40 <= UVar7)) {
    local_108 = &DAT_1809ba6f0;
    iVar6 = FUN_1805f68d0(&DAT_1809ba6f0);
    if (iVar6 != 0) goto LAB_1803d7b2b;
    if (DAT_1809ba73c == 0x7fffffff) {
      DAT_1809ba73c = 0x7ffffffe;
      goto LAB_1803d7b40;
    }
    if ((DAT_180c71f3c == 0) && (DAT_180c71f40 <= UVar7)) {
      DAT_180c71f3c = FUN_1804174b0("CGameSceneNode",0xe8b4eae5);
      if (DAT_180c71f3c == 0) {
        DAT_180c71f40 = UVar7 + 1000;
      }
      else {
        DAT_180c71f40 = 0xffffffffffffffff;
      }
    }
    iVar9 = DAT_180c71f3c;
    FUN_1805f68fc(&DAT_1809ba6f0);
  }
  lVar8 = FUN_18017ea70();
  *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
  auVar12 = ZEXT864(0);
  lVar10 = iVar9 + lVar10;
  bVar2 = false;
  if (lVar10 != 0) {
    local_108 = (undefined *)0x0;
    uStack_100 = uStack_100 & 0xffffffff00000000;
    cVar4 = FUN_1804514f0(&local_108,lVar10,0xc);
    if (cVar4 == '\0') {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
  }
  auVar15 = ZEXT464((uint)local_108);
  auVar13 = ZEXT464(local_108._4_4_);
  auVar14 = ZEXT464((uint)uStack_100);
  lVar10 = FUN_18017ea70();
  if (*(int *)(lVar10 + 4) != 0) {
    *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
  }
  iVar6 = FUN_1805f68d0(&DAT_180b8e2e0);
  auVar11 = auVar12._0_16_;
  if (iVar6 == 0) {
    if (DAT_180b8e32c != 0x7fffffff) {
      if (bVar2) {
        auVar11 = vunpcklps_avx(auVar15._0_16_,auVar13._0_16_);
        DAT_180b8e2d0 = auVar11._0_8_;
        DAT_180b8e2d8 = auVar14._0_4_;
        sVar5 = thunk_FUN_180624430(auVar15._0_8_);
        auVar11 = auVar12._0_16_;
        if (sVar5 < 1) {
          sVar5 = thunk_FUN_180624430(auVar13._0_8_);
          auVar11 = auVar12._0_16_;
          if (sVar5 < 1) {
            sVar5 = thunk_FUN_180624430(auVar14._0_8_);
            auVar11 = auVar12._0_16_;
            if (sVar5 < 1) {
              DAT_180b8e2dc = 1;
              FUN_1805f68fc(&DAT_180b8e2e0);
              return;
            }
          }
        }
      }
      else {
        auVar1 = vunpcklps_avx(auVar11,auVar11);
        DAT_180b8e2d0 = auVar1._0_8_;
        DAT_180b8e2d8 = auVar12._0_4_;
      }
      DAT_180b8e2dc = 0;
      local_e8 = 0;
      uStack_e0 = 0;
      auStack_d8 = ZEXT816(0);
      local_c8 = ZEXT816(0);
      local_a8 = 0;
      uStack_a0 = 0xffffffff;
      uStack_9c = uStack_9c & 0xffffff00;
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_68 = 0;
      uStack_60 = 0;
      _DAT_180b8e330 = 0;
      uRam0000000180b8e338 = 0;
      uRam0000000180b8e340 = 0;
      uRam0000000180b8e348 = 0;
      _DAT_180b8e350 = 0;
      uRam0000000180b8e358 = 0;
      uRam0000000180b8e360 = 0;
      uRam0000000180b8e368 = 0;
      uRam0000000180b8e378 = CONCAT44(uStack_9c,0xffffffff);
      _DAT_180b8e370 = 0;
      uRam0000000180b8e380 = 0;
      uRam0000000180b8e388 = 0;
      _DAT_180b8e390 = 0;
      uRam0000000180b8e398 = 0;
      uRam0000000180b8e3a0 = 0;
      uRam0000000180b8e3a8 = 0;
      _DAT_180b8e3b0 = (undefined1  [16])0x0;
      auVar11 = vunpcklps_avx(auVar11,auVar11);
      DAT_180b8e3c0 = auVar11._0_8_;
      auStack_b8 = auStack_d8;
      FUN_1805f68fc(&DAT_180b8e2e0);
      return;
    }
    DAT_180b8e32c = 0x7ffffffe;
LAB_1803d7b40:
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
LAB_1803d7b2b:
                    /* WARNING: Subroutine does not return */
  FUN_1805f6d44(5);
}



