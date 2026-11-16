// FUN_1802290d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802290d0 */

ulonglong FUN_1802290d0(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  ulonglong uVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  ulonglong uVar6;
  ULONGLONG UVar7;
  longlong lVar8;
  longlong lVar9;
  char local_res18 [8];
  undefined *local_res20;
  float local_28;
  float local_24;
  undefined1 local_20;
  
  uVar2 = DAT_180c63120;
  uVar6 = 0;
  if ((DAT_180c63119 == '\0') || (uVar6 = 0, DAT_1808e6c00 == '\0')) {
LAB_180229565:
    return uVar6 & 0xffffffffffffff00;
  }
  uVar6 = GetTickCount64();
  if ((uVar2 <= uVar6) ||
     ((uVar6 = (ulonglong)DAT_180c63100, (DAT_180c63100 & 1) == 0 ||
      (uVar6 = 0, DAT_180c63118 == '\0')))) goto LAB_180229565;
  local_res20 = &DAT_1808db080;
  iVar5 = FUN_1805f68d0(&DAT_1808db080);
  uVar6 = DAT_180bbedf8;
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_1808db0cc == 0x7fffffff) {
    DAT_1808db0cc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  if ((DAT_180bbede0 != 0) && (param_1 == DAT_180bbede0 + 0x814)) {
    UVar7 = GetTickCount64();
    if (((UVar7 < uVar6) &&
        (((DAT_180c630f0 == DAT_180bbedf0 && (DAT_180c630f8 == DAT_180bbedf0)) &&
         (DAT_180bbedf0 != 0)))) && (DAT_180c630e8 == DAT_180bbedf0)) {
      cVar3 = FUN_180224970(DAT_180bbede0,DAT_180bbede8);
      lVar9 = DAT_180bbede0;
      if (cVar3 != '\0') {
        lVar8 = FUN_18017ea70();
        *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
        if (lVar9 + 0x811 == 0) {
          bVar1 = false;
        }
        else {
          local_res18[0] = '\0';
          cVar3 = FUN_1804514f0(local_res18,lVar9 + 0x811,1);
          if (cVar3 == '\0') {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
        }
        cVar3 = local_res18[0];
        lVar9 = FUN_18017ea70();
        if (*(int *)(lVar9 + 4) != 0) {
          *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
        }
        lVar9 = DAT_180bbede0;
        if ((bVar1) && (cVar3 == '\0')) {
          lVar8 = FUN_18017ea70();
          *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
          if (lVar9 + 0x812 == 0) {
            bVar1 = false;
          }
          else {
            local_res18[0] = '\0';
            cVar3 = FUN_1804514f0(local_res18,lVar9 + 0x812,1);
            if (cVar3 == '\0') {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
          }
          cVar3 = local_res18[0];
          lVar9 = FUN_18017ea70();
          if (*(int *)(lVar9 + 4) != 0) {
            *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
          }
          lVar9 = DAT_180bbede0;
          if ((bVar1) && (cVar3 == '\x01')) {
            lVar8 = FUN_18017ea70();
            *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
            if (lVar9 + 0x844 == 0) {
              bVar1 = false;
            }
            else {
              local_res18[0] = '\0';
              cVar3 = FUN_1804514f0(local_res18,lVar9 + 0x844,1);
              if (cVar3 == '\0') {
                bVar1 = false;
              }
              else {
                bVar1 = true;
              }
            }
            cVar3 = local_res18[0];
            lVar9 = FUN_18017ea70();
            if (*(int *)(lVar9 + 4) != 0) {
              *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
            }
            lVar9 = DAT_180bbede0;
            if ((bVar1) && (cVar3 == '\x01')) {
              lVar8 = FUN_18017ea70();
              *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
              if (lVar9 + 0x830 == 0) {
                bVar1 = false;
              }
              else {
                local_res18[0] = '\0';
                cVar3 = FUN_1804514f0(local_res18,lVar9 + 0x830,1);
                if (cVar3 == '\0') {
                  bVar1 = false;
                }
                else {
                  bVar1 = true;
                }
              }
              cVar3 = local_res18[0];
              lVar9 = FUN_18017ea70();
              if (*(int *)(lVar9 + 4) != 0) {
                *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
              }
              uVar6 = DAT_180c63120;
              if ((((bVar1) && (cVar3 == '\x01')) && (DAT_180c63119 != '\0')) &&
                 (DAT_1808e6c00 != '\0')) {
                UVar7 = GetTickCount64();
                if (((UVar7 < uVar6) && (DAT_180c63118 != '\0')) &&
                   (((int)DAT_180bbee00 < DAT_180bbee08 && (DAT_180bbee00._4_4_ < DAT_180bbee0c))))
                {
                  iVar5 = FUN_1805f68d0(&DAT_1808e6bb0);
                  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_1805f6d44(5);
                  }
                  if (DAT_1808e6bfc == 0x7fffffff) {
                    DAT_1808e6bfc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
                    FUN_1805f6d44(6);
                  }
                  local_28 = ((float)(DAT_180c64048 - (int)DAT_180bbee00) +
                             (float)(DAT_180c64048 - (int)DAT_180bbee00)) /
                             (float)(DAT_180bbee08 - (int)DAT_180bbee00) - 1.0;
                  local_24 = ((((float)(DAT_180c6404c - DAT_180bbee00._4_4_) +
                               (float)(DAT_180c6404c - DAT_180bbee00._4_4_)) /
                               (float)(DAT_180bbee0c - DAT_180bbee00._4_4_) - 1.0) *
                             (float)(DAT_180bbee0c - DAT_180bbee00._4_4_)) /
                             (float)(DAT_180bbee08 - (int)DAT_180bbee00);
                  local_20 = 1;
                  FUN_1805f68fc(&DAT_1808e6bb0);
                  cVar3 = FUN_1804513c0(param_2,8,1);
                  if (cVar3 != '\0') {
                    lVar9 = FUN_18017ea70();
                    *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
                    cVar3 = FUN_180230010(param_2,&local_28);
                    lVar9 = FUN_18017ea70();
                    if (*(int *)(lVar9 + 4) != 0) {
                      *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
                    }
                    lVar9 = DAT_180bbede0;
                    if (cVar3 != '\0') {
                      local_res18[0] = '\x01';
                      cVar3 = FUN_1804513c0(DAT_180bbede0 + 0x831,1,1);
                      if (cVar3 != '\0') {
                        lVar8 = FUN_18017ea70();
                        *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
                        bVar4 = FUN_1801ad7b0(lVar9 + 0x831,local_res18);
                        lVar9 = FUN_18017ea70();
                        if (*(int *)(lVar9 + 4) != 0) {
                          *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
                        }
                        goto LAB_18022954d;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  bVar4 = 0;
LAB_18022954d:
  FUN_1805f68fc(&DAT_1808db080);
  return (ulonglong)bVar4;
}



