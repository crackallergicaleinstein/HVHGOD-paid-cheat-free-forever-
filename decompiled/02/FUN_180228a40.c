// FUN_180228a40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180228a40 */

ulonglong FUN_180228a40(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                       double *param_5)

{
  bool bVar1;
  ulonglong uVar2;
  char cVar3;
  char cVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  ULONGLONG UVar9;
  longlong lVar10;
  longlong lVar11;
  uint *puVar12;
  bool bVar13;
  undefined8 extraout_XMM0_Qa;
  uint uVar14;
  double dVar15;
  uint uVar16;
  float fVar17;
  char local_78 [8];
  undefined *local_70;
  undefined *local_68;
  char local_60;
  
  uVar2 = DAT_180c63120;
  uVar8 = 0;
  if (((DAT_180c63119 == '\0') || (uVar8 = 0, DAT_1808e6c00 == '\0')) ||
     (uVar8 = GetTickCount64(), uVar2 <= uVar8)) {
    return uVar8 & 0xffffffffffffff00;
  }
  local_68 = &DAT_1808db030;
  iVar6 = FUN_1805f68d0(&DAT_1808db030);
  uVar8 = DAT_180bbed68;
  if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_1808db07c == 0x7fffffff) {
    DAT_1808db07c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  if (((((DAT_180bbed40 != 0) && (param_1 == DAT_180bbed48)) &&
       ((param_4 == DAT_180bbed50 &&
        ((UVar9 = GetTickCount64(), UVar9 < uVar8 && (DAT_180c630f0 == DAT_180bbed60)))))) &&
      (lVar10 = FUN_1803d4150(extraout_XMM0_Qa,DAT_180bbed58), lVar10 == param_1)) &&
     (iVar6 = FUN_180224a80(param_1), lVar10 = DAT_180bbed40, iVar6 != 0)) {
    lVar11 = FUN_18017ea70();
    *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + 1;
    bVar13 = false;
    if (lVar10 + 0x8f8 != 0) {
      local_70 = (undefined *)((ulonglong)local_70 & 0xffffffff00000000);
      cVar3 = FUN_1804514f0(&local_70,lVar10 + 0x8f8,4);
      if (cVar3 == '\0') {
        bVar13 = false;
      }
      else {
        bVar13 = true;
      }
    }
    iVar6 = (int)local_70;
    lVar10 = FUN_18017ea70();
    if (*(int *)(lVar10 + 4) != 0) {
      *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
    }
    iVar7 = -1;
    if (bVar13) {
      iVar7 = iVar6;
    }
    if ((iVar7 == DAT_180bbed58) &&
       (cVar3 = FUN_180224970(DAT_180bbed40,DAT_180bbed5c), lVar10 = DAT_180bbed40, cVar3 != '\0'))
    {
      lVar11 = FUN_18017ea70();
      *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + 1;
      if (lVar10 + 0x811 == 0) {
        bVar13 = false;
      }
      else {
        local_78[0] = '\0';
        cVar3 = FUN_1804514f0(local_78,lVar10 + 0x811,1);
        if (cVar3 == '\0') {
          bVar13 = false;
        }
        else {
          bVar13 = true;
        }
      }
      cVar3 = local_78[0];
      lVar10 = FUN_18017ea70();
      if (*(int *)(lVar10 + 4) != 0) {
        *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
      }
      if ((bVar13) && (cVar3 == '\0')) {
        lVar10 = FUN_18017ea70();
        *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
        cVar3 = '\0';
        if (param_2 != 0) {
          local_70 = (undefined *)0x0;
          cVar3 = FUN_1804514f0(&local_70,param_2,8);
          if (cVar3 == '\0') {
            cVar3 = '\0';
          }
          else {
            local_68 = local_70;
            cVar3 = '\x01';
          }
        }
        local_60 = cVar3;
        lVar10 = FUN_18017ea70();
        if (*(int *)(lVar10 + 4) != 0) {
          *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
        }
        lVar10 = FUN_18017ea70();
        *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
        if (param_3 == 0) {
          bVar13 = false;
        }
        else {
          local_70 = (undefined *)0x0;
          cVar4 = FUN_1804514f0(&local_70,param_3,8);
          bVar13 = cVar4 != '\0';
        }
        lVar10 = FUN_18017ea70();
        if (*(int *)(lVar10 + 4) != 0) {
          *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
        }
        if ((cVar3 != '\0') && (bVar13)) {
          puVar12 = &DAT_180bbed70;
          uVar16 = 0x7fffffff;
          fVar17 = 20.0;
          do {
            uVar14 = *puVar12;
            sVar5 = thunk_FUN_180624430(uVar14);
            uVar8 = DAT_180c630d0;
            if ((0 < sVar5) || (fVar17 < (float)(uVar14 & uVar16))) goto LAB_180228f00;
            puVar12 = puVar12 + 1;
          } while (puVar12 != (uint *)&DAT_180bbed78);
          if ((DAT_180c630f8 == DAT_180bbed60) &&
             ((((DAT_180c63100 & 1) != 0 || (DAT_180c630d8 != '\0')) ||
              (UVar9 = GetTickCount64(), UVar9 < uVar8)))) {
            bVar13 = true;
          }
          else {
            bVar13 = false;
          }
          if ((DAT_180bbed78 == '\0') || ((DAT_180bbed60 != 0 && (DAT_180c630e0 == DAT_180bbed60))))
          {
            bVar1 = true;
            if (!bVar13) {
              cVar3 = FUN_18022f070(param_2,&DAT_180bbed70);
              if (cVar3 != '\0') {
                cVar3 = FUN_18022f070(param_3,&DAT_180bbed70);
                if (cVar3 != '\0') goto LAB_180228d89;
                cVar3 = FUN_1804513c0(param_2,8,1);
                if (cVar3 != '\0') {
                  lVar10 = FUN_18017ea70();
                  *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
                  FUN_180230010(param_2,&local_68);
                  lVar10 = FUN_18017ea70();
                  if (*(int *)(lVar10 + 4) != 0) {
                    *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
                  }
                }
              }
              goto LAB_180228f00;
            }
          }
          else {
            bVar1 = false;
          }
LAB_180228d89:
          if (*(char *)(param_5 + 1) != '\0') {
            dVar15 = *param_5;
            sVar5 = thunk_FUN_1806243d0(dVar15);
            lVar10 = DAT_180bbed40;
            if (((sVar5 < 1) && (0.0 <= dVar15)) && (dVar15 < 1000000000.0)) {
              fVar17 = -1e+09;
              local_70 = (undefined *)CONCAT44(local_70._4_4_,0xce6e6b28);
              cVar3 = FUN_1804513c0(DAT_180bbed40 + 0x834,4,1);
              if (cVar3 != '\0') {
                lVar11 = FUN_18017ea70();
                *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + 1;
                FUN_1801ad800(lVar10 + 0x834,&local_70);
                lVar10 = FUN_18017ea70();
                if (*(int *)(lVar10 + 4) != 0) {
                  *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
                }
              }
              lVar10 = DAT_180bbed40;
              if ((bVar1) || (bVar13)) {
                fVar17 = (float)(dVar15 + 0.25);
              }
              local_70 = (undefined *)CONCAT44(local_70._4_4_,fVar17);
              cVar3 = FUN_1804513c0(DAT_180bbed40 + 0x82c,4,1);
              if (cVar3 != '\0') {
                lVar11 = FUN_18017ea70();
                *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + 1;
                FUN_1801ad800(lVar10 + 0x82c,&local_70);
                lVar10 = FUN_18017ea70();
                if (*(int *)(lVar10 + 4) != 0) {
                  *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
                }
              }
            }
          }
          uVar8 = 1;
          goto LAB_180228f02;
        }
      }
    }
  }
LAB_180228f00:
  uVar8 = 0;
LAB_180228f02:
  FUN_1805f68fc(&DAT_1808db030);
  return uVar8;
}



