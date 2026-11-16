// FUN_1802d9270 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802d9270 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802d9270(void)

{
  char *pcVar1;
  bool bVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  char *pcVar9;
  float fVar10;
  undefined8 extraout_XMM0_Qa;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStackY_6f8 [32];
  undefined1 local_688 [16];
  longlong local_678;
  char local_668 [1536];
  ulonglong local_68;
  
  local_68 = DAT_1808d5f00 ^ (ulonglong)auStackY_6f8;
  fVar11 = *(float *)(*DAT_180bb8958 + 0x30);
  local_688 = (undefined1  [16])0x0;
  local_678 = 0;
  iVar4 = FUN_1805f68d0(&DAT_180cc9b08);
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_180cc9b54 == 0x7fffffff) {
    DAT_180cc9b54 = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  if (DAT_180cc9a08 != DAT_180cc9a10) {
    lVar8 = DAT_180cc9a08 + 0x13d0;
    fVar12 = 1.0;
    fVar13 = 0.35;
    lVar5 = DAT_180cc9a10;
    lVar7 = DAT_180cc9a08;
    do {
      if (*(char *)(lVar7 + 0x13a7) == '\0') {
        if (*(char *)(lVar7 + 0x13a9) == '\0') {
          fVar10 = 0.0;
        }
        else {
          fVar10 = fVar11 - *(float *)(lVar7 + 0x6c);
        }
        if ((((*(char *)(lVar7 + 0x13a1) != '\0') && (*(char *)(lVar7 + 0x13a9) != '\0')) &&
            (fVar13 < fVar10)) || (fVar12 < fVar11 - *(float *)(lVar7 + 0x68))) {
          if (local_688._8_8_ == local_678) {
            FUN_1802ea6b0(local_688,local_688._8_8_,lVar7);
          }
          else {
            FUN_18063aed0(local_688._8_8_,lVar7,0x13d0);
            local_688._8_8_ = local_688._8_8_ + 0x13d0;
          }
          lVar5 = DAT_180cc9a10 - lVar8;
          goto LAB_1802d9405;
        }
        lVar7 = lVar7 + 0x13d0;
        lVar8 = lVar8 + 0x13d0;
      }
      else if ((*(char *)(lVar7 + 0x13a1) != '\0') || (fVar12 < fVar11 - *(float *)(lVar7 + 0x68)))
      {
        lVar5 = lVar5 - lVar8;
LAB_1802d9405:
        FUN_18063aed0(lVar7,lVar8,lVar5);
        lVar5 = DAT_180cc9a10 + -0x13d0;
        DAT_180cc9a10 = lVar5;
      }
      else {
        lVar7 = lVar7 + 0x13d0;
        lVar8 = lVar8 + 0x13d0;
      }
    } while (lVar7 != lVar5);
  }
  FUN_1805f68fc(&DAT_180cc9b08);
  uVar3 = local_688._8_8_;
  if (local_688._0_8_ != local_688._8_8_) {
    pcVar9 = (char *)(local_688._0_8_ + 0x13a2);
    do {
      if ((pcVar9[2] == '\0') && (*(longlong *)(pcVar9 + -0x13a2) != 0)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if ((((pcVar9[-2] == '\0') || (pcVar9[-1] == '\0')) || (pcVar9[7] == '\0')) ||
         (((!bVar2 || (pcVar9[5] != '\0')) || ((*pcVar9 != '\0' || (pcVar9[1] != '\0')))))) {
        FUN_18063ab10(local_668,0,0x600);
        FUN_18015ad60(local_668,0x600,0xffffffffffffffff,
                      "command=%lld submitted=%d weapon_fire=%d impact=%d targeted=%d local_dead=%d target_dead=%d action=no_miss_log"
                     );
        FUN_1800f6900(0);
      }
      else {
        uVar6 = FUN_1802d5420(pcVar9[2],pcVar9 + -0x13a2);
        FUN_1802d8aa0(extraout_XMM0_Qa,pcVar9 + -0x13a2,uVar6);
      }
      pcVar1 = pcVar9 + 0x2e;
      pcVar9 = pcVar9 + 0x13d0;
    } while (pcVar1 != (char *)uVar3);
  }
  if ((char *)local_688._0_8_ != (char *)0x0) {
    pcVar9 = (char *)local_688._0_8_;
    if ((0xfff < (ulonglong)(((local_678 - local_688._0_8_) / 0x13d0) * 0x13d0)) &&
       (pcVar9 = *(char **)(local_688._0_8_ + -8),
       (char *)0x1f < (char *)(local_688._0_8_ + (-8 - (longlong)pcVar9)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(pcVar9);
  }
}



