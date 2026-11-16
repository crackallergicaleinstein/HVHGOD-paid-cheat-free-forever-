// FUN_1804237b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804237b0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804237b0(longlong param_1,char *param_2,longlong param_3)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  float fVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  undefined1 extraout_var [56];
  undefined1 auVar11 [16];
  float fVar12;
  undefined1 auVar13 [64];
  undefined1 auVar14 [64];
  undefined1 auVar15 [64];
  uint uVar16;
  undefined1 auStack_f8 [32];
  char local_d8 [64];
  ulonglong local_98;
  
  local_98 = DAT_1808d5f00 ^ (ulonglong)auStack_f8;
  cVar1 = *param_2;
  iVar7 = 0;
  auVar14 = ZEXT864(0);
  if (cVar1 != 'n') {
    if (cVar1 != '\0') {
      lVar6 = 0;
      auVar15 = ZEXT464(0x40000000);
      uVar16 = 0x7fffffff;
      do {
        lVar5 = 0;
        local_d8[0] = '\0';
        do {
          lVar3 = FUN_180606b00(&DAT_18081e618,(int)cVar1);
          if ((lVar3 == 0) && (cVar2 = *param_2, cVar2 != ',')) break;
          cVar1 = param_2[1];
          param_2 = param_2 + 1;
          cVar2 = '\0';
        } while (cVar1 != '\0');
        if (cVar2 != '\0') {
          cVar1 = *param_2;
          do {
            lVar3 = FUN_180606b00(&DAT_18081e618,(int)cVar1);
            if ((lVar3 != 0) || (*param_2 == ',')) break;
            if (lVar5 < 0x3f) {
              local_d8[lVar5] = *param_2;
              lVar5 = lVar5 + 1;
            }
            cVar1 = param_2[1];
            param_2 = param_2 + 1;
          } while (cVar1 != '\0');
        }
        local_d8[lVar5] = '\0';
        if (local_d8[0] == '\0') break;
        if (lVar6 < 8) {
          fVar8 = *(float *)(param_1 + 40000);
          fVar12 = *(float *)(param_1 + 0x9c44);
          uVar4 = FUN_180422ef0(local_d8);
          fVar8 = fVar12 * fVar12 + fVar8 * fVar8;
          if (fVar8 < 0.0) {
            auVar13._0_8_ = FUN_18061e150();
            auVar13._8_56_ = extraout_var;
            auVar10 = auVar13._0_16_;
          }
          else {
            auVar10 = ZEXT416((uint)SQRT(fVar8));
          }
          auVar13 = ZEXT1664(auVar10);
          if (auVar15._0_4_ < 0.0) {
            fVar8 = (float)FUN_18061e150(auVar15._0_8_);
            auVar10 = auVar13._0_16_;
          }
          else {
            fVar8 = SQRT(auVar15._0_4_);
          }
          auVar11._0_4_ = auVar10._0_4_ / fVar8;
          auVar11._4_12_ = auVar10._4_12_;
          uVar9 = FUN_180421b00(param_1,uVar4,auVar14._0_8_,auVar11._0_8_);
          iVar7 = iVar7 + 1;
          *(uint *)(param_3 + lVar6 * 4) = uVar9 & uVar16;
          lVar6 = lVar6 + 1;
        }
        cVar1 = *param_2;
      } while (cVar1 != '\0');
    }
    lVar5 = (longlong)iVar7;
    lVar6 = 0;
    if (3 < lVar5) {
      lVar3 = (lVar5 - 4U >> 2) + 1;
      lVar6 = lVar3 * 4;
      do {
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    for (; lVar6 < lVar5; lVar6 = lVar6 + 1) {
    }
  }
}



