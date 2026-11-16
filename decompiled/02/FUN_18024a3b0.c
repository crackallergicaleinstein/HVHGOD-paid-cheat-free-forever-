// FUN_18024a3b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18024a3b0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18024a3b0(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  char cVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  ULONGLONG UVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  int *piVar15;
  longlong lVar16;
  float fVar17;
  undefined1 auVar18 [64];
  undefined *local_a8;
  int local_a0;
  int local_9c;
  ulonglong local_98;
  longlong local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  iVar9 = DAT_180c64558;
  if (((param_2 != 0) && (DAT_180b8e622 == '\0')) && (DAT_180b8f808 == '\0')) {
    uVar1 = *(ulonglong *)(param_2 + 0x60);
    fVar17 = 0.0;
    local_98 = uVar1;
    if (((DAT_180cc9372 != '\0') && (DAT_180cc9348 == 9)) && (DAT_180cc9330 != 0)) {
      if ((DAT_180c64558 == 0) && (UVar11 = GetTickCount64(), DAT_180c64550 <= UVar11)) {
        local_a8 = &DAT_1808ee4e0;
        iVar9 = FUN_1805f68d0(&DAT_1808ee4e0);
        if (iVar9 != 0) goto LAB_18024ab03;
        if (DAT_1808ee52c == 0x7fffffff) {
          DAT_1808ee52c = 0x7ffffffe;
          goto LAB_18024aaf8;
        }
        if ((DAT_180c64558 == 0) && (DAT_180c64550 <= UVar11)) {
          DAT_180c64558 = FUN_1804174b0("C_BaseCSGrenade",0x57c1b8da);
          if (DAT_180c64558 == 0) {
            DAT_180c64550 = UVar11 + 1000;
          }
          else {
            DAT_180c64550 = 0xffffffffffffffff;
          }
        }
        iVar9 = DAT_180c64558;
        FUN_1805f68fc(&DAT_1808ee4e0);
      }
      if (fVar17 < *(float *)(iVar9 + DAT_180cc9330)) goto LAB_18024aac5;
    }
    if ((uVar1 & 0x801) == 0) {
LAB_18024a504:
      uVar12 = 0;
      goto LAB_18024aac7;
    }
    AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
    local_90 = _DAT_180bb8890;
    uStack_88 = uRam0000000180bb8898;
    uStack_80 = uRam0000000180bb88a0;
    uStack_78 = uRam0000000180bb88a8;
    ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
    lVar14 = local_90;
    sVar8 = DAT_180cc934c;
    if ((((DAT_180cc9372 != '\0') && (DAT_180cc9330 != 0)) && (DAT_180cc9338 != 0)) &&
       (local_90 != 0)) {
      lVar13 = 0;
      if (*(longlong *)(param_2 + 0x40) != 0) {
        lVar13 = *(longlong *)(param_2 + 0x40) + 0x10;
      }
      if ((lVar13 != 0) && (local_9c = DAT_180cc9348, (DAT_180cc9348 - 7U & 0xfffffffd) != 0)) {
        if (((uVar1 & 1) == 0) ||
           (((DAT_180cc934c != 0x40 && (*(int *)(param_2 + 0x4c) < 0)) &&
            (cVar7 = FUN_180278f80(DAT_180cc9348,param_2,local_90,1), cVar7 == '\0')))) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        iVar9 = DAT_180c64538;
        bVar2 = false;
        if ((local_9c == 0) || (sVar8 == 0x40)) {
          piVar15 = (int *)&DAT_00000044;
          if (*(longlong *)(param_2 + 0x40) != 0) {
            piVar15 = (int *)(*(longlong *)(param_2 + 0x40) + 0x54);
          }
          local_a0 = *piVar15;
          if ((DAT_180c64538 == 0) && (UVar11 = GetTickCount64(), DAT_180c64540 <= UVar11)) {
            local_a8 = &DAT_1808ee530;
            iVar9 = FUN_1805f68d0(&DAT_1808ee530);
            if (iVar9 != 0) goto LAB_18024ab03;
            if (DAT_1808ee57c == 0x7fffffff) {
              DAT_1808ee57c = 0x7ffffffe;
              goto LAB_18024aaf8;
            }
            if ((DAT_180c64538 == 0) && (DAT_180c64540 <= UVar11)) {
              DAT_180c64538 = FUN_1804174b0("CBasePlayerController",0x9a8c76d);
              if (DAT_180c64538 == 0) {
                DAT_180c64540 = UVar11 + 1000;
              }
              else {
                DAT_180c64540 = 0xffffffffffffffff;
              }
            }
            iVar9 = DAT_180c64538;
            FUN_1805f68fc(&DAT_1808ee530);
          }
          lVar13 = FUN_18017ea70();
          *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + 1;
          lVar13 = iVar9 + lVar14;
          if (lVar13 == 0) {
            bVar2 = false;
          }
          else {
            local_a8 = (undefined *)((ulonglong)local_a8 & 0xffffffff00000000);
            cVar7 = FUN_1804514f0(&local_a8,lVar13,4);
            if (cVar7 == '\0') {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
          }
          iVar9 = (uint)local_a8;
          lVar13 = FUN_18017ea70();
          if (*(int *)(lVar13 + 4) != 0) {
            *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + -1;
          }
          iVar10 = DAT_180c64530;
          if ((DAT_180c64530 == 0) && (UVar11 = GetTickCount64(), DAT_180c64528 <= UVar11)) {
            local_a8 = &DAT_1808ee490;
            iVar10 = FUN_1805f68d0(&DAT_1808ee490);
            if (iVar10 != 0) goto LAB_18024ab03;
            if (DAT_1808ee4dc == 0x7fffffff) {
              DAT_1808ee4dc = 0x7ffffffe;
              goto LAB_18024aaf8;
            }
            if ((DAT_180c64530 == 0) && (DAT_180c64528 <= UVar11)) {
              DAT_180c64530 = FUN_1804174b0("CCSPlayer_WeaponServices",0x3dfdcdea);
              if (DAT_180c64530 == 0) {
                DAT_180c64528 = UVar11 + 1000;
              }
              else {
                DAT_180c64528 = 0xffffffffffffffff;
              }
            }
            iVar10 = DAT_180c64530;
            FUN_1805f68fc(&DAT_1808ee490);
          }
          lVar16 = iVar10 + DAT_180cc9338;
          lVar13 = FUN_18017ea70();
          *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + 1;
          if (lVar16 == 0) {
            bVar3 = false;
          }
          else {
            local_a8 = (undefined *)CONCAT44(local_a8._4_4_,fVar17);
            cVar7 = FUN_1804514f0(&local_a8,lVar16,4);
            if (cVar7 == '\0') {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
          }
          auVar18 = ZEXT464((uint)local_a8);
          lVar13 = FUN_18017ea70();
          if (*(int *)(lVar13 + 4) != 0) {
            *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + -1;
          }
          iVar10 = DAT_180c64534;
          if ((DAT_180c64534 == 0) && (UVar11 = GetTickCount64(), DAT_180c64510 <= UVar11)) {
            local_a8 = &DAT_1808ee440;
            iVar10 = FUN_1805f68d0(&DAT_1808ee440);
            if (iVar10 != 0) goto LAB_18024ab03;
            if (DAT_1808ee48c == 0x7fffffff) {
              DAT_1808ee48c = 0x7ffffffe;
              goto LAB_18024aaf8;
            }
            if ((DAT_180c64534 == 0) && (DAT_180c64510 <= UVar11)) {
              DAT_180c64534 = FUN_1804174b0("C_BasePlayerWeapon",0xde66c257);
              DAT_180c64510 = 0xffffffffffffffff;
              if (DAT_180c64534 == 0) {
                DAT_180c64510 = UVar11 + 1000;
              }
            }
            iVar10 = DAT_180c64534;
            FUN_1805f68fc(&DAT_1808ee440);
          }
          lVar16 = iVar10 + DAT_180cc9330;
          lVar13 = FUN_18017ea70();
          *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + 1;
          bVar5 = false;
          if (lVar16 != 0) {
            local_a8 = (undefined *)((ulonglong)local_a8 & 0xffffffff00000000);
            cVar7 = FUN_1804514f0(&local_a8,lVar16,4);
            if (cVar7 == '\0') {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
          }
          iVar10 = (uint)local_a8;
          lVar13 = FUN_18017ea70();
          if (*(int *)(lVar13 + 4) != 0) {
            *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + -1;
          }
          if (((!bVar2) || (!bVar3)) || (sVar8 = thunk_FUN_180624430(auVar18._0_8_), 0 < sVar8))
          goto LAB_18024aac5;
          fVar17 = (float)(iVar9 + 1) * 0.015625;
          if ((fVar17 < auVar18._0_4_) ||
             (cVar7 = FUN_180278f80(fVar17,param_2,lVar14,0), cVar7 == '\0')) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          iVar6 = local_a0;
          iVar9 = DAT_180c64520;
          if (((-1 < *(int *)(param_2 + 0x50)) || (!bVar5)) || ((bVar3 && (iVar10 <= local_a0)))) {
            bVar2 = true;
          }
          else {
            bVar2 = false;
          }
          if (local_9c == 0) {
            if ((DAT_180c64520 == 0) && (UVar11 = GetTickCount64(), DAT_180c64518 <= UVar11)) {
              local_a8 = &DAT_1808ee3f0;
              iVar9 = FUN_1805f68d0(&DAT_1808ee3f0);
              if (iVar9 != 0) {
LAB_18024ab03:
                    /* WARNING: Subroutine does not return */
                FUN_1805f6d44(5);
              }
              if (DAT_1808ee43c == 0x7fffffff) {
                DAT_1808ee43c = 0x7ffffffe;
LAB_18024aaf8:
                    /* WARNING: Subroutine does not return */
                FUN_1805f6d44(6);
              }
              if ((DAT_180c64520 == 0) && (DAT_180c64518 <= UVar11)) {
                DAT_180c64520 = FUN_1804174b0("C_BasePlayerWeapon",0x11ba24e3);
                DAT_180c64518 = 0xffffffffffffffff;
                if (DAT_180c64520 == 0) {
                  DAT_180c64518 = UVar11 + 1000;
                }
              }
              iVar9 = DAT_180c64520;
              FUN_1805f68fc(&DAT_1808ee3f0);
            }
            lVar13 = iVar9 + DAT_180cc9330;
            lVar14 = FUN_18017ea70();
            *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + 1;
            if (lVar13 == 0) {
              bVar4 = false;
            }
            else {
              local_a8 = (undefined *)((ulonglong)local_a8 & 0xffffffff00000000);
              cVar7 = FUN_1804514f0(&local_a8,lVar13,4);
              if (cVar7 == '\0') {
                bVar4 = false;
              }
              else {
                bVar4 = true;
              }
            }
            iVar9 = (uint)local_a8;
            lVar14 = FUN_18017ea70();
            if (*(int *)(lVar14 + 4) != 0) {
              *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + -1;
            }
            if (((-1 < *(int *)(param_2 + 0x4c)) || (!bVar4)) || ((bVar3 && (iVar9 <= iVar6)))) {
              bVar4 = true;
            }
            else {
              bVar4 = false;
            }
          }
        }
        if ((((local_98 & 1) == 0) || (!bVar4)) && (((local_98 >> 0xb & 1) == 0 || (!bVar2))))
        goto LAB_18024a504;
      }
    }
  }
LAB_18024aac5:
  uVar12 = 1;
LAB_18024aac7:
  return uVar12;
}



