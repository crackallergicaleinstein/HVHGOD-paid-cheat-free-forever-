// FUN_1802edba0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802edba0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802edba0(undefined8 *param_1,undefined8 param_2,byte *param_3,uint *param_4,
                  undefined8 param_5,byte param_6,byte *param_7)

{
  byte bVar1;
  longlong lVar2;
  bool bVar3;
  uint uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  longlong lVar11;
  byte *pbVar12;
  char cVar13;
  bool bVar14;
  undefined1 auStack_378 [40];
  uint *local_350;
  byte local_348 [4];
  undefined4 local_344;
  int local_340;
  byte local_33c [768];
  byte local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_378;
  local_348[0] = param_6;
  pbVar12 = local_33c;
  for (pbVar8 = param_7; (pbVar8 != param_3 && (*pbVar8 == 0x30)); pbVar8 = pbVar8 + 1) {
  }
  cVar13 = '\x01';
  pbVar9 = pbVar8;
  while ((pbVar9 != param_3 && (bVar1 = (&DAT_1807c5b10)[*pbVar9], bVar1 < 10))) {
    if (pbVar12 == local_3c) {
      if ((cVar13 == '\0') || (bVar1 != 0)) {
        cVar13 = '\0';
      }
      else {
        cVar13 = '\x01';
      }
    }
    else {
      *pbVar12 = bVar1;
      pbVar12 = pbVar12 + 1;
    }
    pbVar9 = pbVar9 + 1;
  }
  lVar11 = (longlong)pbVar9 - (longlong)pbVar8;
  pbVar8 = pbVar9;
  if ((pbVar9 != param_3) && (*pbVar9 == 0x2e)) {
    pbVar8 = pbVar9 + 1;
  }
  pbVar10 = pbVar8;
  if (lVar11 == 0) {
    for (; (pbVar10 != param_3 && (*pbVar10 == 0x30)); pbVar10 = pbVar10 + 1) {
    }
    lVar11 = (longlong)pbVar8 - (longlong)pbVar10;
  }
  while ((pbVar10 != param_3 && (bVar1 = (&DAT_1807c5b10)[*pbVar10], bVar1 < 10))) {
    if (pbVar12 == local_3c) {
      if ((cVar13 == '\0') || (bVar1 != 0)) {
        cVar13 = '\0';
      }
      else {
        cVar13 = '\x01';
      }
    }
    else {
      *pbVar12 = bVar1;
      pbVar12 = pbVar12 + 1;
    }
    pbVar10 = pbVar10 + 1;
  }
  if ((param_7 == pbVar9) && (pbVar8 == pbVar10)) {
    *param_1 = param_2;
    *(undefined4 *)(param_1 + 1) = 0x16;
  }
  else {
    bVar14 = false;
    bVar3 = false;
    lVar7 = 0;
    if ((pbVar10 != param_3) &&
       (((*pbVar10 | 0x20) == 0x65 && (pbVar8 = pbVar10 + 1, pbVar8 != param_3)))) {
      bVar1 = *pbVar8;
      bVar3 = false;
      if ((bVar1 == 0x2b) || (bVar1 == 0x2d)) {
        bVar14 = bVar1 == 0x2d;
        pbVar8 = pbVar10 + 2;
        goto joined_r0x0001802edd50;
      }
      do {
        bVar1 = (&DAT_1807c5b10)[*pbVar8];
        if (9 < bVar1) break;
        if ((lVar7 < 0xccccccccccccccc) || ((lVar7 == 0xccccccccccccccc && (bVar1 < 8)))) {
          lVar7 = (ulonglong)bVar1 + lVar7 * 10;
        }
        else {
          bVar3 = true;
        }
        pbVar8 = pbVar8 + 1;
        pbVar10 = pbVar8;
joined_r0x0001802edd50:
      } while (pbVar8 != param_3);
      if (bVar14) {
        lVar7 = -lVar7;
      }
    }
    if (pbVar12 != local_33c) {
      do {
        pbVar8 = pbVar12 + -1;
        if (pbVar12[-1] != 0) {
          if (pbVar12 != local_33c) {
            if (bVar3) {
              uVar4 = (uint)param_6 << 0x1f;
              *param_1 = pbVar10;
              *(undefined4 *)(param_1 + 1) = 0x22;
              if (0 < lVar7) {
                uVar4 = uVar4 | 0x7f800000;
              }
              goto LAB_1802eddeb;
            }
            if (lVar7 < 1) {
              if ((lVar7 < 0) && (0 < lVar11)) {
                bVar14 = SBORROW8(lVar11,-lVar7);
                lVar2 = lVar11 + lVar7;
                goto LAB_1802ede6f;
              }
LAB_1802ede82:
              if (lVar11 < 0x1451) {
                if ((-0x1451 < lVar7) && (-0x1451 < lVar11)) {
                  lVar7 = lVar7 + lVar11;
                  if (0x1450 < lVar7) goto LAB_1802edea9;
                  if (-0x1451 < lVar7) {
                    local_344 = (undefined4)lVar7;
                    local_340 = (int)pbVar12 - (int)local_33c;
                    local_350 = param_4;
                    uVar5 = FUN_1802ed470(local_348,param_4,cVar13);
                    *(undefined4 *)(param_1 + 1) = uVar5;
                    *param_1 = pbVar10;
                  }
                }
                *(undefined4 *)(param_1 + 1) = 0x22;
                goto LAB_1802edde1;
              }
            }
            else {
              if (lVar11 < 0) {
                bVar14 = SBORROW8(-lVar7,lVar11);
                lVar2 = -lVar7 - lVar11;
LAB_1802ede6f:
                lVar6 = -lVar7;
                if (bVar14 != lVar2 < 0) {
                  lVar6 = lVar11;
                }
                lVar7 = lVar7 + lVar6;
                lVar11 = lVar11 - lVar6;
              }
              if (lVar7 < 0x1451) goto LAB_1802ede82;
            }
LAB_1802edea9:
            uVar4 = (uint)param_6 << 0x1f | 0x7f800000;
            *(undefined4 *)(param_1 + 1) = 0x22;
            goto LAB_1802edde8;
          }
          break;
        }
        pbVar12 = pbVar8;
      } while (pbVar8 != local_33c);
    }
    *(undefined4 *)(param_1 + 1) = 0;
LAB_1802edde1:
    uVar4 = (uint)param_6 << 0x1f;
LAB_1802edde8:
    *param_1 = pbVar10;
LAB_1802eddeb:
    *param_4 = uVar4;
  }
}



