// FUN_1802b18b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802b18b0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802b18b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  longlong *plVar11;
  ULONGLONG UVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined8 *puVar15;
  byte bVar16;
  int iVar17;
  float fVar18;
  undefined8 uVar19;
  undefined1 auVar20 [64];
  undefined1 auVar21 [64];
  undefined1 auVar22 [64];
  undefined1 auVar23 [64];
  undefined1 auVar24 [64];
  undefined1 auVar25 [64];
  undefined1 auStack_798 [32];
  undefined **local_778;
  undefined8 local_770;
  uint local_768;
  uint local_760;
  byte local_758;
  int local_754;
  longlong local_750;
  uint local_744;
  float local_740;
  float local_73c;
  float local_738;
  float local_734;
  char local_730;
  undefined8 local_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 local_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  float local_6d8;
  float local_6d4;
  uint local_6d0;
  byte local_6cc;
  undefined1 local_6c8 [32];
  char local_6a8 [1536];
  ulonglong local_a8;
  
  local_a8 = DAT_1808d5f00 ^ (ulonglong)auStack_798;
  uVar19 = FUN_18027fc00(&local_6d8);
  local_754 = 0;
  iVar17 = 0;
  plVar11 = (longlong *)FUN_1803d44c0(uVar19,local_6c8,3);
  lVar14 = *plVar11;
  lVar1 = plVar11[1];
  local_758 = local_6cc;
  if (lVar14 != lVar1) {
    auVar23 = ZEXT464(local_6d0);
    auVar24 = ZEXT464((uint)local_6d4);
    auVar25 = ZEXT464((uint)local_6d8);
    auVar20 = ZEXT864(0);
    auVar22 = ZEXT464(0x3cd013a9);
    auVar21 = ZEXT464(0x475ead00);
    bVar16 = local_6cc;
    do {
      if (*(int *)(lVar14 + 8) == 0x41a8368e) {
        if (((DAT_180cc7c48 != 0) && (DAT_180cc7eb8 != '\0')) || (DAT_180cc7a80 != '\0')) {
          iVar17 = iVar17 + 1;
          local_778 = (undefined **)&DAT_180cc7670;
          FUN_1802b2f40(&DAT_180b8f830,param_2,param_3,lVar14);
        }
      }
      else {
        FUN_1802b4970(&DAT_180cc7670,&local_750,lVar14);
        uVar7 = local_744;
        if ((((local_750 != 0) && (local_744 != 0xffffffff)) && (local_730 == '\0')) &&
           (bVar16 != 0)) {
          fVar2 = auVar23._0_4_ - local_738;
          fVar18 = auVar24._0_4_ - local_73c;
          fVar3 = auVar25._0_4_ - local_740;
          fVar2 = fVar3 * fVar3 + fVar18 * fVar18 + fVar2 * fVar2;
          fVar18 = auVar20._0_4_;
          if (fVar2 != fVar18) {
            if (fVar2 < 0.0) {
              fVar18 = (float)FUN_18061e150(fVar2);
            }
            else {
              fVar18 = SQRT(fVar2);
            }
          }
          local_734 = fVar18 * auVar22._0_4_;
          uVar9 = 0;
          if (uVar7 < 5) {
            uVar9 = uVar7;
          }
          bVar16 = local_758;
          if (DAT_180cc7c48 != 0) {
            switch(uVar7) {
            case 0:
              cVar8 = DAT_180cc7cb0;
              break;
            case 1:
              cVar8 = DAT_180cc7d18;
              break;
            case 2:
              cVar8 = DAT_180cc7d80;
              break;
            case 3:
              cVar8 = DAT_180cc7de8;
              break;
            case 4:
              cVar8 = DAT_180cc7e50;
              break;
            case 5:
              cVar8 = DAT_180cc7eb8;
              break;
            default:
              goto switchD_1802b1a89_default;
            }
            if ((cVar8 != '\0') &&
               (local_734 <= *(float *)(&DAT_180cc7f24 + (ulonglong)uVar9 * 0x10))) {
              if (DAT_180b8e2b0 == '\0') {
                local_6d8 = auVar21._0_4_;
                local_6d4 = local_6d8;
              }
              else {
                iVar10 = FUN_1805f68d0(&DAT_180b8e260);
                if (iVar10 != 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_1805f6d44(5);
                }
                if (DAT_180b8e2ac == 0x7fffffff) {
                  DAT_180b8e2ac = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
                  FUN_1805f6d44(6);
                }
                local_718 = _DAT_180b8e220;
                uStack_710 = uRam0000000180b8e228;
                uStack_708 = uRam0000000180b8e230;
                uStack_700 = uRam0000000180b8e238;
                local_6f8 = _DAT_180b8e240;
                uStack_6f0 = uRam0000000180b8e248;
                uStack_6e8 = uRam0000000180b8e250;
                uStack_6e0 = uRam0000000180b8e258;
                auVar20 = ZEXT1664(auVar20._0_16_);
                auVar21 = ZEXT1664(auVar21._0_16_);
                auVar22 = ZEXT1664(auVar22._0_16_);
                auVar23 = ZEXT1664(auVar23._0_16_);
                auVar24 = ZEXT1664(auVar24._0_16_);
                auVar25 = ZEXT1664(auVar25._0_16_);
                uVar19 = FUN_1805f68fc(&DAT_180b8e260);
                FUN_180419d90(uVar19,&local_6d8,&local_740,&local_718);
                bVar16 = local_758;
                if ((local_6d8 != auVar21._0_4_) && (local_6d4 != auVar21._0_4_)) {
                  local_778 = (undefined **)(&DAT_180cc7f20 + (ulonglong)uVar9 * 0x10);
                  FUN_1802b4500(local_6d4,param_3,&local_6d8,&local_750);
                  local_754 = local_754 + 1;
                  bVar16 = local_758;
                }
              }
            }
          }
        }
      }
switchD_1802b1a89_default:
      lVar14 = lVar14 + 0x18;
    } while (lVar14 != lVar1);
  }
  uVar19 = FUN_1801abba0(local_6c8);
  FUN_1802b1e40(uVar19,param_3);
  puVar5 = DAT_180b8f838;
  puVar4 = (undefined8 *)*DAT_180b8f838;
  do {
    if (puVar4 == puVar5) {
      UVar12 = GetTickCount64();
      if (DAT_180c6e5a8 <= UVar12) {
        DAT_180c6e5a8 = UVar12 + 5000;
        FUN_18063ab10(local_6a8,0,0x600);
        local_760 = (uint)DAT_180cc7c48;
        local_768 = (uint)local_758;
        local_770 = (char *)CONCAT44(local_770._4_4_,iVar17);
        local_778 = (undefined **)CONCAT44(local_778._4_4_,local_754);
        FUN_18015ad60(local_6a8,0x600,0xffffffffffffffff,
                      "labels=%u fire_entities=%u camera_valid=%d master=%d");
        local_778 = &PTR_180700558;
        if (local_6a8[0] != '\0') {
          local_778 = (undefined **)&DAT_1806bcfc0;
        }
        local_770 = local_6a8;
        FUN_1800f6900(0);
      }
    }
    lVar14 = puVar4[2];
    AcquireSRWLockShared((PSRWLOCK)&DAT_180b0e0f8);
    for (plVar11 = DAT_180b0e0e0; plVar11 != DAT_180b0e0e8; plVar11 = plVar11 + 3) {
      if (*plVar11 == lVar14) {
        ReleaseSRWLockShared((PSRWLOCK)&DAT_180b0e0f8);
        puVar15 = (undefined8 *)*puVar4;
        goto LAB_1802b1cf9;
      }
    }
    ReleaseSRWLockShared((PSRWLOCK)&DAT_180b0e0f8);
    lVar14 = DAT_180b8f848;
    puVar6 = DAT_180b8f838;
    uVar13 = (((((((((ulonglong)*(byte *)(puVar4 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)puVar4 + 0x11)) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)puVar4 + 0x12)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)puVar4 + 0x13)) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)puVar4 + 0x14)) * 0x100000001b3 ^
               (ulonglong)*(byte *)((longlong)puVar4 + 0x15)) * 0x100000001b3 ^
              (ulonglong)*(byte *)((longlong)puVar4 + 0x16)) * 0x100000001b3 ^
             (ulonglong)*(byte *)((longlong)puVar4 + 0x17)) * 0x100000001b3 & DAT_180b8f860;
    puVar15 = *(undefined8 **)(DAT_180b8f848 + uVar13 * 0x10);
    if (*(undefined8 **)(DAT_180b8f848 + 8 + uVar13 * 0x10) == puVar4) {
      if (puVar15 == puVar4) {
        *(undefined8 **)(DAT_180b8f848 + uVar13 * 0x10) = DAT_180b8f838;
        *(undefined8 **)(lVar14 + 8 + uVar13 * 0x10) = puVar6;
      }
      else {
        *(undefined8 *)(DAT_180b8f848 + 8 + uVar13 * 0x10) = puVar4[1];
      }
    }
    else if (puVar15 == puVar4) {
      *(undefined8 *)(DAT_180b8f848 + uVar13 * 0x10) = *puVar4;
    }
    puVar15 = (undefined8 *)*puVar4;
    DAT_180b8f840 = DAT_180b8f840 + -1;
    *(undefined8 **)puVar4[1] = puVar15;
    puVar15[1] = puVar4[1];
    FUN_1801b36e0(puVar4 + 0x1e4);
    FUN_1804547d0(puVar4,0xf58);
LAB_1802b1cf9:
    puVar4 = puVar15;
  } while( true );
}



