// FUN_1802b52f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802b52f0 */

void FUN_1802b52f0(float *param_1,float *param_2,longlong param_3,undefined1 param_4,
                  undefined1 param_5)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  float *pfVar6;
  float *pfVar7;
  longlong lVar8;
  float *pfVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 local_48 [16];
  
  uVar5 = (longlong)param_2 - (longlong)param_1;
  do {
    if ((longlong)(uVar5 & 0xfffffffffffffff8) < 0x101) {
      pfVar9 = param_1;
      if (param_1 != param_2) {
        while (pfVar9 = pfVar9 + 2, pfVar9 != param_2) {
          fVar2 = *pfVar9;
          fVar3 = pfVar9[1];
          pfVar6 = pfVar9;
          pfVar7 = pfVar9;
          do {
            pfVar1 = pfVar6 + -2;
            if ((*pfVar1 <= fVar2) && ((fVar2 != *pfVar1 || (pfVar6[-1] <= fVar3)))) break;
            *(undefined8 *)pfVar7 = *(undefined8 *)pfVar1;
            pfVar7 = pfVar7 + -2;
            pfVar6 = pfVar1;
          } while (pfVar7 != param_1);
          *pfVar7 = fVar2;
          pfVar7[1] = fVar3;
        }
      }
      return;
    }
    if (param_3 < 1) {
      uVar5 = (longlong)param_2 - (longlong)param_1 >> 3;
      lVar10 = (longlong)param_2 - (longlong)param_1 >> 4;
      if (0 < lVar10) {
        lVar12 = (longlong)(uVar5 - 1) >> 1;
        do {
          fVar2 = param_1[lVar10 * 2 + -2];
          fVar3 = param_1[lVar10 * 2 + -1];
          lVar10 = lVar10 + -1;
          lVar11 = lVar10;
          while (lVar11 < lVar12) {
            lVar8 = lVar11 * 2 + 2;
            pfVar9 = param_1 + lVar8 * 2;
            if ((param_1[lVar8 * 2] < param_1[lVar8 * 2 + -2]) ||
               ((param_1[lVar8 * 2] == param_1[lVar8 * 2 + -2] && (pfVar9[1] < pfVar9[-1])))) {
              lVar8 = lVar11 * 2 + 1;
              pfVar9 = pfVar9 + -2;
            }
            *(undefined8 *)(param_1 + lVar11 * 2) = *(undefined8 *)pfVar9;
            lVar11 = lVar8;
          }
          if ((lVar11 == lVar12) && ((uVar5 & 1) == 0)) {
            *(undefined8 *)(param_1 + lVar11 * 2) = *(undefined8 *)(param_1 + uVar5 * 2 + -2);
            lVar11 = uVar5 - 1;
          }
          while (lVar10 < lVar11) {
            lVar8 = lVar11 + -1 >> 1;
            if ((fVar2 <= param_1[lVar8 * 2]) &&
               ((param_1[lVar8 * 2] != fVar2 || (fVar3 <= param_1[lVar8 * 2 + 1])))) break;
            *(undefined8 *)(param_1 + lVar11 * 2) = *(undefined8 *)(param_1 + lVar8 * 2);
            lVar11 = lVar8;
          }
          param_1[lVar11 * 2] = fVar2;
          param_1[lVar11 * 2 + 1] = fVar3;
        } while (0 < lVar10);
      }
      if ((longlong)uVar5 < 2) {
        return;
      }
      do {
        pfVar9 = param_2 + -2;
        fVar2 = *pfVar9;
        fVar3 = param_2[-1];
        lVar10 = 0;
        uVar5 = (longlong)pfVar9 - (longlong)param_1 >> 3;
        *(undefined8 *)pfVar9 = *(undefined8 *)param_1;
        lVar11 = (longlong)(uVar5 - 1) >> 1;
        lVar12 = lVar10;
        if (0 < lVar11) {
          do {
            lVar10 = lVar12 * 2 + 2;
            pfVar6 = param_1 + lVar10 * 2;
            if ((param_1[lVar10 * 2] < param_1[lVar10 * 2 + -2]) ||
               ((param_1[lVar10 * 2] == param_1[lVar10 * 2 + -2] && (pfVar6[1] < pfVar6[-1])))) {
              lVar10 = lVar12 * 2 + 1;
              pfVar6 = pfVar6 + -2;
            }
            *(undefined8 *)(param_1 + lVar12 * 2) = *(undefined8 *)pfVar6;
            lVar12 = lVar10;
          } while (lVar10 < lVar11);
        }
        if ((lVar10 == lVar11) && ((uVar5 & 1) == 0)) {
          *(undefined8 *)(param_1 + lVar10 * 2) = *(undefined8 *)(param_1 + uVar5 * 2 + -2);
          lVar10 = uVar5 - 1;
        }
        while (0 < lVar10) {
          lVar12 = lVar10 + -1 >> 1;
          if ((fVar2 <= param_1[lVar12 * 2]) &&
             ((param_1[lVar12 * 2] != fVar2 || (fVar3 <= param_1[lVar12 * 2 + 1])))) break;
          *(undefined8 *)(param_1 + lVar10 * 2) = *(undefined8 *)(param_1 + lVar12 * 2);
          lVar10 = lVar12;
        }
        param_1[lVar10 * 2] = fVar2;
        param_1[lVar10 * 2 + 1] = fVar3;
        param_2 = pfVar9;
        if ((longlong)((longlong)pfVar9 - (longlong)param_1 & 0xfffffffffffffff8U) < 0x10) {
          return;
        }
      } while( true );
    }
    local_48 = (undefined1  [16])0x0;
    FUN_1802b6160(local_48,param_1,param_2,param_4,param_5);
    pfVar9 = (float *)local_48._0_8_;
    uVar4 = local_48._8_8_;
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    if ((longlong)(local_48._0_8_ - (longlong)param_1 & 0xfffffffffffffff8U) <
        (longlong)((longlong)param_2 - local_48._8_8_ & 0xfffffffffffffff8U)) {
      FUN_1802b52f0(param_1,local_48._0_8_,param_3,param_4,param_5);
      param_1 = (float *)uVar4;
      pfVar9 = param_2;
    }
    else {
      FUN_1802b52f0(local_48._8_8_,param_2,param_3,param_4,param_5);
    }
    uVar5 = (longlong)pfVar9 - (longlong)param_1;
    param_2 = pfVar9;
  } while( true );
}



