// FUN_18043b8e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18043b8e0 */

undefined8 FUN_18043b8e0(float *param_1,float *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  undefined1 auVar5 [16];
  char cVar6;
  longlong lVar7;
  undefined8 uVar8;
  float *pfVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  if ((((*param_1 < *param_2) || (*param_2 + param_2[2] < *param_1)) || (param_1[1] < param_2[1]))
     || (param_2[1] + param_2[3] < param_1[1])) {
LAB_18043ba5b:
    uVar8 = 0;
  }
  else {
    lVar7 = FUN_180439770();
    cVar6 = FUN_18043b5c0(lVar7);
    if (cVar6 == '\0') {
      lVar2 = *(longlong *)(lVar7 + 0x480);
      lVar3 = *(longlong *)(lVar7 + 0x478);
      if (lVar3 != lVar2) {
        uVar13 = 0;
        if (*(longlong *)(lVar7 + 0x440) != 0) {
          uVar14 = 0;
          lVar10 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar2 - lVar3),8) + (lVar2 - lVar3)
          ;
          lVar11 = lVar10 >> 6;
          lVar10 = lVar10 >> 0x3f;
          uVar12 = uVar13;
          if (lVar11 != lVar10) {
            do {
              uVar1 = uVar14 + 1;
              uVar13 = uVar1;
              if (*(longlong *)(uVar14 * 0x78 + 0x60 + lVar3) != *(longlong *)(lVar7 + 0x440)) {
                uVar13 = uVar12;
              }
              uVar12 = uVar13;
              uVar14 = uVar1;
            } while (uVar1 < (ulonglong)(lVar11 - lVar10));
          }
        }
        lVar7 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar2 - lVar3),8) + (lVar2 - lVar3);
        uVar12 = (lVar7 >> 6) - (lVar7 >> 0x3f);
        if (uVar13 < uVar12) {
          pfVar9 = (float *)(uVar13 * 0x78 + 0x20 + lVar3);
          do {
            if (*(char *)((longlong)pfVar9 + 0x2e) != '\0') {
              fVar4 = pfVar9[0x14] + pfVar9[1];
              if (((*param_1 < *pfVar9) || (*pfVar9 + pfVar9[2] < *param_1)) ||
                 ((param_1[1] < fVar4 ||
                  (auVar5 = vmaxss_avx(ZEXT416((uint)(pfVar9[3] - pfVar9[0x14])),ZEXT816(0)),
                  auVar5._0_4_ + fVar4 < param_1[1])))) goto LAB_18043ba5b;
            }
            uVar13 = uVar13 + 1;
            pfVar9 = pfVar9 + 0x1e;
          } while (uVar13 < uVar12);
        }
      }
    }
    uVar8 = 1;
  }
  return uVar8;
}



