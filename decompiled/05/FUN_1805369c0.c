// FUN_1805369c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805369c0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805369c0(undefined1 (*param_1) [16],undefined8 *****param_2)

{
  longlong lVar1;
  undefined8 ****ppppuVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined8 ****ppppuVar5;
  undefined8 *****pppppuVar6;
  float *pfVar7;
  undefined8 ****ppppuVar8;
  ulonglong uVar9;
  undefined1 auVar10 [64];
  undefined1 auVar11 [64];
  float fVar12;
  float fVar13;
  undefined1 auVar14 [64];
  undefined1 auStack_148 [32];
  undefined8 ****local_128;
  undefined8 *****local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_f8;
  undefined1 local_e8;
  undefined1 (*local_e0 [2]) [16];
  undefined8 *****local_d0 [3];
  ulonglong local_b8;
  undefined8 *****local_b0;
  ulonglong local_a8;
  
  local_a8 = DAT_1808d5f00 ^ (ulonglong)auStack_148;
  lVar1 = *(longlong *)(DAT_180bb8ae8 + 0x14d0);
  if ((*(longlong *)(lVar1 + 0x1c8) != 0) ||
     (pfVar7 = (float *)(lVar1 + 0x280), *(longlong *)(DAT_180bb8ae8 + 0x2338) != 0)) {
    pfVar7 = (float *)(lVar1 + 0x250);
  }
  auVar4._12_4_ = 0;
  auVar4._0_12_ = ZEXT812(0);
  auVar10 = ZEXT1264(ZEXT812(0)) << 0x20;
  auVar4 = vmaxss_avx(ZEXT416((uint)((*pfVar7 - *(float *)(lVar1 + 0x118)) - DAT_180b0a41c * 94.0)),
                      auVar4 << 0x20);
  auVar11 = ZEXT1664(auVar4);
  local_120 = param_2;
  if ((undefined8 ****)0xf < param_2[3]) {
    local_120 = (undefined8 *****)*param_2;
  }
  fVar12 = 13.2;
  fVar13 = 0.5;
  auVar4 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 13.2 + 0.5)),1);
  auVar14 = ZEXT464(0x3f800000);
  auVar4 = vmaxss_avx(auVar14._0_16_,auVar4);
  local_f8 = 0;
  local_108 = 0;
  local_110 = 0;
  local_118 = 0;
  local_128 = (undefined8 ****)((ulonglong)local_128 & 0xffffffff00000000);
  local_e0[0] = param_1;
  local_b0 = param_2;
  FUN_1804ea040(local_e0,DAT_180c62ca8,auVar4._0_8_,0x7f7fffff);
  if (auVar11._0_4_ < local_e0[0]._0_4_) {
    ppppuVar8 = param_2[2];
    while (ppppuVar8 != (undefined8 ****)0x0) {
      ppppuVar8 = (undefined8 ****)((longlong)ppppuVar8 - 1);
      if (ppppuVar8 != (undefined8 ****)0x0) {
        do {
          pppppuVar6 = param_2;
          if ((undefined8 ****)0xf < param_2[3]) {
            pppppuVar6 = (undefined8 *****)*param_2;
          }
        } while (((*(byte *)((longlong)pppppuVar6 + (longlong)ppppuVar8) & 0xc0) == 0x80) &&
                (ppppuVar8 = (undefined8 ****)((longlong)ppppuVar8 - 1),
                ppppuVar8 != (undefined8 ****)0x0));
      }
      ppppuVar2 = param_2[2];
      if (ppppuVar2 < ppppuVar8) {
        uVar9 = (longlong)ppppuVar8 - (longlong)ppppuVar2;
        if ((ulonglong)((longlong)param_2[3] - (longlong)ppppuVar2) < uVar9) {
          local_128 = (undefined8 ****)((ulonglong)local_128 & 0xffffffffffffff00);
          FUN_18013fa60(param_2,uVar9,local_e8,uVar9);
        }
        else {
          param_2[2] = ppppuVar8;
          pppppuVar6 = param_2;
          if ((undefined8 ****)0xf < param_2[3]) {
            pppppuVar6 = (undefined8 *****)*param_2;
          }
          FUN_18063ab10((longlong)pppppuVar6 + (longlong)ppppuVar2,0,uVar9);
          *(undefined1 *)((longlong)pppppuVar6 + (longlong)ppppuVar2 + uVar9) = 0;
        }
      }
      else {
        param_2[2] = ppppuVar8;
        pppppuVar6 = param_2;
        if ((undefined8 ****)0xf < param_2[3]) {
          pppppuVar6 = (undefined8 *****)*param_2;
        }
        *(undefined1 *)((longlong)pppppuVar6 + (longlong)ppppuVar8) = 0;
      }
      if (0x7fffffffffffffffU - (longlong)param_2[2] < 3) {
                    /* WARNING: Subroutine does not return */
        FUN_18015bb70();
      }
      local_118 = 3;
      local_120 = (undefined8 *****)&DAT_180830c34;
      local_128 = param_2[2];
      FUN_18015a9c0(local_d0);
      local_120 = local_d0;
      if (0xf < local_b8) {
        local_120 = local_d0[0];
      }
      auVar4 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(fVar12 * DAT_180b0a41c + fVar13)),1);
      auVar4 = vmaxss_avx(auVar14._0_16_,auVar4);
      local_f8 = 0;
      local_108 = 0;
      local_110 = 0;
      local_118 = 0;
      local_128 = (undefined8 ****)CONCAT44(local_128._4_4_,auVar10._0_4_);
      FUN_1804ea040(local_e0,DAT_180c62ca8,auVar4._0_8_);
      bVar3 = local_e0[0]._0_4_ <= auVar11._0_4_;
      FUN_18015c010(local_d0);
      if (bVar3) break;
      ppppuVar8 = param_2[2];
    }
    if (0x7fffffffffffffffU - (longlong)param_2[2] < 3) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bb70();
    }
    local_118 = 3;
    local_120 = (undefined8 *****)&DAT_180830c34;
    local_128 = param_2[2];
    FUN_18015a9c0(param_1);
  }
  else {
    *param_1 = (undefined1  [16])0x0;
    *(undefined8 *)param_1[1] = 0;
    *(undefined8 *)(param_1[1] + 8) = 0;
    ppppuVar8 = param_2[1];
    ppppuVar2 = param_2[2];
    ppppuVar5 = param_2[3];
    *(undefined8 *****)*param_1 = *param_2;
    *(undefined8 *****)(*param_1 + 8) = ppppuVar8;
    *(undefined8 *****)param_1[1] = ppppuVar2;
    *(undefined8 *****)(param_1[1] + 8) = ppppuVar5;
    *(undefined1 *)param_2 = 0;
    param_2[2] = (undefined8 ****)0x0;
    param_2[3] = (undefined8 ****)0xf;
  }
  FUN_18015c010(param_2);
}



