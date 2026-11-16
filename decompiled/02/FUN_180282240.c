// FUN_180282240 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180282240 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180282240(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined1 (*param_5) [16],longlong param_6,float param_7,float param_8,
                  uint param_9,undefined8 *param_10,float param_11)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  short sVar5;
  longlong lVar6;
  float fVar7;
  undefined1 in_ZMM2 [64];
  undefined1 auVar8 [64];
  float fVar9;
  undefined1 auVar10 [64];
  ulonglong uVar11;
  undefined1 auVar12 [64];
  undefined8 uVar13;
  undefined1 auVar14 [64];
  undefined8 uVar15;
  undefined1 auVar16 [64];
  undefined1 auStack_188 [32];
  undefined1 *local_168;
  longlong local_160;
  float local_158;
  undefined8 *local_150;
  undefined4 local_148;
  undefined4 local_140;
  undefined4 local_138;
  undefined8 *local_128;
  longlong lStack_120;
  undefined1 local_118 [16];
  int local_108 [2];
  int local_100 [2];
  undefined8 local_f8;
  int *piStack_f0;
  undefined8 **ppuStack_e8;
  undefined8 uStack_e0;
  ulonglong local_d8;
  
  local_d8 = DAT_1808d5f00 ^ (ulonglong)auStack_188;
  auVar8 = ZEXT464(param_9);
  cVar1 = *(char *)(param_4 + 0x160);
  fVar9 = 0.0;
  auVar10 = ZEXT1664(in_ZMM2._0_16_);
  if (cVar1 != '\0') {
    if (param_6 != 0) {
      auVar12 = ZEXT464((uint)param_7);
      uVar11 = (ulonglong)(uint)param_7;
      if ((0.0 < param_7) && (0.0 < param_8)) {
        auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)((float)param_2 - param_7 * 0.5)),1);
        uVar13 = auVar3._0_8_;
        auVar14 = ZEXT1664(auVar3);
        auVar3 = vroundss_avx(ZEXT816(0),in_ZMM2._0_16_,1);
        uVar15 = auVar3._0_8_;
        auVar16 = ZEXT1664(auVar3);
        if (*(char *)(param_4 + 0xf0) != '\0') {
          uVar2 = *(undefined4 *)(param_4 + 0x15c);
          fVar7 = (float)FUN_18027fb30(param_9);
          uVar13 = auVar14._0_8_;
          uVar15 = auVar16._0_8_;
          uVar11 = auVar12._0_8_;
          local_108[0] = (int)auVar12._0_4_;
          local_128 = (undefined8 *)*param_10;
          lStack_120 = param_10[1];
          local_100[0] = (int)param_8;
          if ((((0 < local_108[0]) && (0 < local_100[0])) && (local_108[0] < 0x201)) &&
             ((local_100[0] < 0x201 &&
              (lStack_120 == (longlong)local_108[0] * (longlong)local_100[0] * 4)))) {
            local_f8 = local_108;
            piStack_f0 = local_100;
            ppuStack_e8 = &local_128;
            local_150 = &local_f8;
            local_168 = local_118;
            local_160 = CONCAT44(local_160._4_4_,fVar7 * *(float *)(param_4 + 0x158) * param_11);
            local_118 = (undefined1  [16])0x0;
            local_158 = (float)uVar2;
            FUN_180281a60(param_1,uVar13,uVar15,param_6);
            uVar13 = auVar14._0_8_;
            uVar15 = auVar16._0_8_;
            uVar11 = auVar12._0_8_;
          }
        }
        local_138 = *(undefined4 *)(param_4 + 0x1e0);
        local_140 = 0x3f800000;
        local_148 = 0x3f800000;
        local_150 = (undefined8 *)CONCAT44(local_150._4_4_,fVar9);
        local_160 = param_6;
        local_168 = (undefined1 *)CONCAT44(local_168._4_4_,param_8);
        local_158 = fVar9;
        FUN_180435220(param_1,uVar13,uVar15,uVar11);
        auVar10 = ZEXT464((uint)(auVar10._0_4_ + param_8 + param_11));
      }
    }
    if ((cVar1 == '\x01') && (param_6 != 0)) goto LAB_180282523;
  }
  local_118 = *param_5;
  local_150 = (undefined8 *)CONCAT44(local_150._4_4_,param_11);
  local_158 = auVar8._0_4_;
  local_168 = (undefined1 *)CONCAT44(local_168._4_4_,*(undefined4 *)(param_4 + 0x1dc));
  local_160 = param_4;
  fVar7 = (float)FUN_1802827f0(param_1,param_2,auVar10._0_8_,local_118);
  auVar10 = ZEXT464((uint)(auVar10._0_4_ + fVar7 + param_11 + param_11));
LAB_180282523:
  if (((fVar9 <= auVar8._0_4_) && (sVar5 = thunk_FUN_180624430(auVar8._0_8_), sVar5 < 1)) &&
     (*(char *)(param_4 + 0x170) != '\0')) {
    local_f8 = (int *)0x0;
    piStack_f0 = (int *)0x0;
    ppuStack_e8 = (undefined8 **)0x0;
    uStack_e0 = 0;
    auVar12 = ZEXT1664(auVar8._0_16_);
    auVar10 = ZEXT1664(auVar10._0_16_);
    FUN_18015abc0(&local_f8,0x20,"%.0f m",(double)auVar8._0_4_);
    lVar6 = -1;
    do {
      lStack_120 = lVar6 + 1;
      lVar4 = lVar6 + 9;
      lVar6 = lStack_120;
    } while (*(char *)((longlong)local_100 + lVar4) != '\0');
    local_150 = (undefined8 *)CONCAT44(local_150._4_4_,param_11);
    local_158 = auVar12._0_4_;
    local_128 = &local_f8;
    local_160 = param_4 + 0x78;
    local_168 = (undefined1 *)CONCAT44(local_168._4_4_,*(undefined4 *)(param_4 + 0x1d8));
    FUN_1802827f0(param_1,param_2,auVar10._0_8_,&local_128);
  }
}



