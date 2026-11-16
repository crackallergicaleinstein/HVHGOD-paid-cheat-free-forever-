// FUN_18025eb90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18025eb90 */

undefined8 * FUN_18025eb90(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  ULONGLONG UVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  bool bVar14;
  undefined4 uVar15;
  undefined1 auVar16 [64];
  undefined1 auVar17 [64];
  undefined *local_70;
  int local_68;
  int local_64;
  
  lVar12 = DAT_180cc9330;
  if ((((*param_3 != 0) && (param_3[1] != 0)) && (DAT_180cc9372 != '\0')) &&
     ((DAT_180cc9330 != 0 && (DAT_180cc9340 != 0)))) {
    AcquireSRWLockShared((PSRWLOCK)&DAT_180b0e0f8);
    for (plVar9 = DAT_180b0e0e0; plVar9 != DAT_180b0e0e8; plVar9 = plVar9 + 3) {
      if (*plVar9 == lVar12) {
        ReleaseSRWLockShared((PSRWLOCK)&DAT_180b0e0f8);
        iVar7 = DAT_180c647f0;
        uVar13 = 0xffffffffffffffff;
        if ((DAT_180c647f0 == 0) && (UVar10 = GetTickCount64(), DAT_180c647e8 <= UVar10)) {
          local_70 = &DAT_1808ef2c0;
          iVar7 = FUN_1805f68d0(&DAT_1808ef2c0);
          if (iVar7 != 0) goto LAB_18025f243;
          if (DAT_1808ef30c == 0x7fffffff) {
            DAT_1808ef30c = 0x7ffffffe;
            goto LAB_18025f238;
          }
          if ((DAT_180c647f0 == 0) && (DAT_180c647e8 <= UVar10)) {
            DAT_180c647f0 = FUN_1804174b0("CBasePlayerController",0x9a8c76d);
            if (DAT_180c647f0 == 0) {
              DAT_180c647e8 = UVar10 + 1000;
            }
            else {
              DAT_180c647e8 = 0xffffffffffffffff;
            }
          }
          iVar7 = DAT_180c647f0;
          FUN_1805f68fc(&DAT_1808ef2c0);
        }
        lVar12 = *param_3;
        lVar11 = FUN_18017ea70();
        *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + 1;
        if (iVar7 + lVar12 == 0) {
          bVar14 = false;
          local_64 = (uint)local_70;
        }
        else {
          local_68 = 0;
          cVar5 = FUN_1804514f0(&local_68,iVar7 + lVar12,4);
          bVar14 = cVar5 != '\0';
          if (bVar14) {
            local_64 = local_68;
          }
          else {
            local_64 = (uint)local_70;
          }
        }
        lVar12 = FUN_18017ea70();
        if (*(int *)(lVar12 + 4) != 0) {
          *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
        }
        iVar7 = DAT_180c647d8;
        if ((DAT_180c647d8 == 0) && (UVar10 = GetTickCount64(), DAT_180c647e0 <= UVar10)) {
          local_70 = &DAT_1808ef310;
          iVar7 = FUN_1805f68d0(&DAT_1808ef310);
          if (iVar7 != 0) goto LAB_18025f243;
          if (DAT_1808ef35c == 0x7fffffff) {
            DAT_1808ef35c = 0x7ffffffe;
            goto LAB_18025f238;
          }
          if ((DAT_180c647d8 == 0) && (DAT_180c647e0 <= UVar10)) {
            DAT_180c647d8 = FUN_1804174b0("C_BasePlayerWeapon",0x11ba24e3);
            if (DAT_180c647d8 == 0) {
              DAT_180c647e0 = UVar10 + 1000;
            }
            else {
              DAT_180c647e0 = 0xffffffffffffffff;
            }
          }
          iVar7 = DAT_180c647d8;
          FUN_1805f68fc(&DAT_1808ef310);
        }
        lVar11 = iVar7 + DAT_180cc9330;
        lVar12 = FUN_18017ea70();
        *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
        if (lVar11 == 0) {
          bVar1 = false;
          local_68 = (uint)local_70;
        }
        else {
          local_68 = 0;
          cVar5 = FUN_1804514f0(&local_68,lVar11,4);
          if (cVar5 == '\0') {
            bVar1 = false;
            local_68 = (uint)local_70;
          }
          else {
            bVar1 = true;
          }
        }
        lVar12 = FUN_18017ea70();
        if (*(int *)(lVar12 + 4) != 0) {
          *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
        }
        iVar7 = DAT_180c647d0;
        if ((DAT_180c647d0 == 0) && (UVar10 = GetTickCount64(), DAT_180c647c8 <= UVar10)) {
          local_70 = &DAT_1808ef270;
          iVar7 = FUN_1805f68d0(&DAT_1808ef270);
          if (iVar7 != 0) goto LAB_18025f243;
          if (DAT_1808ef2bc == 0x7fffffff) {
            DAT_1808ef2bc = 0x7ffffffe;
            goto LAB_18025f238;
          }
          if ((DAT_180c647d0 == 0) && (DAT_180c647c8 <= UVar10)) {
            DAT_180c647d0 = FUN_1804174b0("C_BasePlayerWeapon",0xde66c257);
            if (DAT_180c647d0 == 0) {
              DAT_180c647c8 = UVar10 + 1000;
            }
            else {
              DAT_180c647c8 = 0xffffffffffffffff;
            }
          }
          iVar7 = DAT_180c647d0;
          FUN_1805f68fc(&DAT_1808ef270);
        }
        lVar11 = iVar7 + DAT_180cc9330;
        lVar12 = FUN_18017ea70();
        *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
        if (lVar11 == 0) {
          bVar2 = false;
        }
        else {
          local_70 = (undefined *)((ulonglong)local_70 & 0xffffffff00000000);
          cVar5 = FUN_1804514f0(&local_70,lVar11,4);
          if (cVar5 == '\0') {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
        }
        iVar7 = (uint)local_70;
        lVar12 = FUN_18017ea70();
        if (*(int *)(lVar12 + 4) != 0) {
          *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
        }
        iVar8 = DAT_180c647d4;
        if ((DAT_180c647d4 == 0) && (UVar10 = GetTickCount64(), DAT_180c647b0 <= UVar10)) {
          local_70 = &DAT_1808ef220;
          iVar8 = FUN_1805f68d0(&DAT_1808ef220);
          if (iVar8 != 0) goto LAB_18025f243;
          if (DAT_1808ef26c == 0x7fffffff) {
            DAT_1808ef26c = 0x7ffffffe;
            goto LAB_18025f238;
          }
          if ((DAT_180c647d4 == 0) && (DAT_180c647b0 <= UVar10)) {
            DAT_180c647d4 = FUN_1804174b0("C_CSWeaponBase",0x7a37978c);
            if (DAT_180c647d4 == 0) {
              DAT_180c647b0 = UVar10 + 1000;
            }
            else {
              DAT_180c647b0 = 0xffffffffffffffff;
            }
          }
          iVar8 = DAT_180c647d4;
          FUN_1805f68fc(&DAT_1808ef220);
        }
        lVar11 = iVar8 + DAT_180cc9330;
        lVar12 = FUN_18017ea70();
        *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
        uVar15 = 0;
        if (lVar11 == 0) {
          bVar3 = false;
        }
        else {
          local_70 = (undefined *)((ulonglong)local_70 & 0xffffffff00000000);
          cVar5 = FUN_1804514f0(&local_70,lVar11,4);
          if (cVar5 == '\0') {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
        }
        auVar17 = ZEXT464((uint)local_70);
        lVar12 = FUN_18017ea70();
        if (*(int *)(lVar12 + 4) != 0) {
          *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
        }
        iVar8 = DAT_180c647c0;
        if ((DAT_180c647c0 == 0) && (UVar10 = GetTickCount64(), DAT_180c647b8 <= UVar10)) {
          local_70 = &DAT_1808ef180;
          iVar8 = FUN_1805f68d0(&DAT_1808ef180);
          if (iVar8 != 0) {
LAB_18025f243:
                    /* WARNING: Subroutine does not return */
            FUN_1805f6d44(5);
          }
          if (DAT_1808ef1cc == 0x7fffffff) {
            DAT_1808ef1cc = 0x7ffffffe;
LAB_18025f238:
                    /* WARNING: Subroutine does not return */
            FUN_1805f6d44(6);
          }
          if ((DAT_180c647c0 == 0) && (DAT_180c647b8 <= UVar10)) {
            DAT_180c647c0 = FUN_1804174b0("CCSWeaponBaseVData",0xc023cfd);
            if (DAT_180c647c0 == 0) {
              uVar13 = UVar10 + 1000;
            }
            DAT_180c647b8 = uVar13;
          }
          iVar8 = DAT_180c647c0;
          FUN_1805f68fc(&DAT_1808ef180);
        }
        lVar11 = iVar8 + DAT_180cc9340;
        lVar12 = FUN_18017ea70();
        *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
        bVar4 = false;
        if (lVar11 != 0) {
          local_70 = (undefined *)CONCAT44(local_70._4_4_,uVar15);
          cVar5 = FUN_1804514f0(&local_70,lVar11,4);
          if (cVar5 == '\0') {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
        }
        auVar16 = ZEXT464((uint)local_70);
        lVar12 = FUN_18017ea70();
        if (*(int *)(lVar12 + 4) != 0) {
          *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
        }
        if (((((bVar14) && (bVar1)) && (bVar2)) && ((bVar3 && (bVar4)))) &&
           ((sVar6 = thunk_FUN_180624430(auVar17._0_8_), sVar6 < 1 &&
            (sVar6 = thunk_FUN_180624430(auVar16._0_8_), sVar6 < 1)))) {
          *(undefined1 *)param_2 = 1;
          *(bool *)((longlong)param_2 + 1) = local_68 <= local_64;
          *(bool *)((longlong)param_2 + 2) = iVar7 <= local_64;
          *(bool *)((longlong)param_2 + 3) = 0.4 < (float)local_64 * 0.015625 - auVar17._0_4_;
          *(int *)((longlong)param_2 + 4) = auVar16._0_4_;
          return param_2;
        }
        goto LAB_18025ec1b;
      }
    }
    ReleaseSRWLockShared((PSRWLOCK)&DAT_180b0e0f8);
  }
LAB_18025ec1b:
  *param_2 = 0;
  return param_2;
}



