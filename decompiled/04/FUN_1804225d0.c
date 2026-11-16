// FUN_1804225d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804225d0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804225d0(longlong param_1,char param_2)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  undefined1 auStack_58 [32];
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_58;
  lVar10 = (longlong)*(int *)(param_1 + 0x9c00) * 0x138 + param_1;
  if (3 < *(int *)(param_1 + 0x9c10)) {
    if (param_2 != '\0') {
      FUN_180421970(param_1,**(undefined4 **)(param_1 + 0x9c08),
                    (*(undefined4 **)(param_1 + 0x9c08))[1]);
    }
    if ((*(int *)(param_1 + 0x9c10) % 3 == 1) &&
       (plVar6 = (longlong *)_malloc_base(0x28), plVar6 != (longlong *)0x0)) {
      *plVar6 = 0;
      plVar6[1] = 0;
      plVar6[2] = 0;
      plVar6[3] = 0;
      plVar6[4] = 0;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = (longlong)(*(int *)(param_1 + 0x9c10) * 2);
      uVar7 = SUB168(ZEXT816(4) * auVar4,0);
      if (SUB168(ZEXT816(4) * auVar4,8) != 0) {
        uVar7 = 0xffffffffffffffff;
      }
      lVar8 = _malloc_base(uVar7);
      *plVar6 = lVar8;
      if (lVar8 == 0) {
        thunk_FUN_180621380(plVar6);
      }
      else {
        *(char *)((longlong)plVar6 + 0xc) = param_2;
        iVar11 = 0;
        iVar9 = 0;
        *(undefined4 *)(plVar6 + 1) = *(undefined4 *)(param_1 + 0x9c10);
        if (0 < *(int *)(param_1 + 0x9c10)) {
          lVar8 = 0;
          do {
            iVar9 = iVar9 + 1;
            fVar1 = *(float *)(lVar8 + 4 + *(longlong *)(param_1 + 0x9c08));
            fVar2 = *(float *)(lVar8 + *(longlong *)(param_1 + 0x9c08));
            lVar3 = *plVar6;
            *(float *)(lVar8 + lVar3) =
                 fVar2 * *(float *)(lVar10 + 0x40) + fVar1 * *(float *)(lVar10 + 0x48) +
                 *(float *)(lVar10 + 0x50);
            *(float *)(lVar8 + 4 + lVar3) =
                 fVar2 * *(float *)(lVar10 + 0x44) + fVar1 * *(float *)(lVar10 + 0x4c) +
                 *(float *)(lVar10 + 0x54);
            lVar8 = lVar8 + 8;
          } while (iVar9 < *(int *)(param_1 + 0x9c10));
        }
        if (0 < (int)plVar6[1] + -1) {
          do {
            FUN_180421340(&local_38,*plVar6 + (longlong)(iVar11 * 2) * 4);
            if (iVar11 == 0) {
              auVar5._4_4_ = uStack_34;
              auVar5._0_4_ = local_38;
              auVar5._8_4_ = uStack_30;
              auVar5._12_4_ = uStack_2c;
              *(undefined1 (*) [16])(plVar6 + 2) = auVar5;
            }
            else {
              auVar4 = vminss_avx(ZEXT416(*(uint *)(plVar6 + 2)),ZEXT416(local_38));
              auVar5 = vminss_avx(ZEXT416(*(uint *)((longlong)plVar6 + 0x14)),ZEXT416(uStack_34));
              *(int *)(plVar6 + 2) = auVar4._0_4_;
              auVar4 = vmaxss_avx(ZEXT416(*(uint *)(plVar6 + 3)),ZEXT416(uStack_30));
              *(int *)((longlong)plVar6 + 0x14) = auVar5._0_4_;
              auVar5 = vmaxss_avx(ZEXT416(*(uint *)((longlong)plVar6 + 0x1c)),ZEXT416(uStack_2c));
              *(int *)((longlong)plVar6 + 0x1c) = auVar5._0_4_;
              *(int *)(plVar6 + 3) = auVar4._0_4_;
            }
            iVar11 = iVar11 + 3;
          } while (iVar11 < (int)plVar6[1] + -1);
        }
        plVar6[4] = *(longlong *)(param_1 + 0x9c18);
        *(longlong **)(param_1 + 0x9c18) = plVar6;
      }
    }
  }
}



