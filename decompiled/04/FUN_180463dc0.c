// FUN_180463dc0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180463dc0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180463dc0(longlong param_1,float *param_2,undefined4 param_3,undefined1 *param_4,
                  float param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [64];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_168 [32];
  float local_148;
  undefined8 local_140;
  undefined4 local_138;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float fStack_f4;
  ulonglong local_f0;
  
  local_f0 = DAT_1808d5f00 ^ (ulonglong)auStack_168;
  fVar11 = param_5 / 11.0;
  switch(*param_4) {
  case 1:
    local_f8 = *param_2 - fVar11 * 1.5 * DAT_180b0a41c;
    fStack_f4 = fVar11 * DAT_180b0a41c + param_2[1];
    FUN_180463d00(param_1,&local_f8,fVar11 * 5.0 * DAT_180b0a41c,param_3);
    local_f8 = fVar11 * 3.6 * DAT_180b0a41c + *param_2;
    fStack_f4 = param_2[1] - fVar11 * 3.4 * DAT_180b0a41c;
    FUN_180463d00(param_1,&local_f8,fVar11 * 2.6 * DAT_180b0a41c,param_3);
    break;
  case 2:
    fVar8 = fVar11 * 5.0 * DAT_180b0a41c;
    iVar3 = *(int *)(param_1 + 0x50);
    fVar11 = fVar11 * 1.5;
    fVar15 = 6.2831855;
    fVar13 = 0.125;
    fVar10 = 0.43196902;
    fVar14 = 0.25;
    fVar7 = 6.0;
    iVar4 = 0;
    do {
      fVar12 = (float)iVar4 * fVar15 * fVar13;
      fVar5 = fVar12 + fVar10;
      if (fVar14 * *(float *)(param_1 + 0xe0) <= fVar8) {
        FUN_1804d0a80(param_1 + 0x50,iVar3 + 7);
        iVar3 = 0;
        fVar5 = fVar5 - fVar12;
        do {
          fVar6 = ((float)iVar3 / fVar7) * fVar5 + fVar12;
          auVar9 = ZEXT464((uint)fVar6);
          fVar6 = (float)FUN_180637540(fVar6);
          local_f8 = fVar6 * fVar8 + *param_2;
          fVar6 = (float)FUN_180638e00(auVar9._0_8_);
          iVar1 = *(int *)(param_1 + 0x54);
          fStack_f4 = fVar6 * fVar8 + param_2[1];
          if (*(int *)(param_1 + 0x50) == iVar1) {
            iVar2 = *(int *)(param_1 + 0x50) + 1;
            if (iVar1 == 0) {
              iVar1 = 8;
            }
            else {
              iVar1 = iVar1 / 2 + iVar1;
            }
            if (iVar2 < iVar1) {
              iVar2 = iVar1;
            }
            FUN_1804d0a80(param_1 + 0x50,iVar2);
          }
          iVar3 = iVar3 + 1;
          *(ulonglong *)(*(longlong *)(param_1 + 0x58) + (longlong)*(int *)(param_1 + 0x50) * 8) =
               CONCAT44(fStack_f4,local_f8);
          *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
        } while (iVar3 < 7);
      }
      else {
        FUN_1804d0c90(param_1 + 0x50,param_2);
      }
      local_148 = fVar11 * DAT_180b0a41c;
      local_138 = 0x7f7fffff;
      local_140 = (undefined1 *)((ulonglong)local_140 & 0xffffffff00000000);
      FUN_1804d9a00(param_1,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x50),param_3)
      ;
      iVar4 = iVar4 + 1;
      *(undefined4 *)(param_1 + 0x50) = 0;
      iVar3 = 0;
    } while (iVar4 < 8);
    break;
  case 3:
    fVar8 = fVar11 * 1.5;
    fVar7 = fVar11 * 3.6;
    local_f8 = *param_2 - (fVar11 + fVar11) * DAT_180b0a41c;
    fStack_f4 = param_2[1];
    local_140._0_4_ = fVar8 * DAT_180b0a41c;
    local_148 = 3.36312e-44;
    FUN_1804dff40(param_1,&local_f8,fVar7 * DAT_180b0a41c,param_3);
    fStack_f4 = param_2[1];
    local_f8 = fVar11 * 2.2 * DAT_180b0a41c + *param_2;
    local_140 = (undefined1 *)CONCAT44(local_140._4_4_,fVar8 * DAT_180b0a41c);
    local_148 = 3.36312e-44;
    FUN_1804dff40(param_1,&local_f8,fVar7 * DAT_180b0a41c,param_3);
    break;
  case 4:
    fVar8 = *param_2;
    fVar15 = fVar11 * 5.4;
    fVar13 = fVar11 * 3.0;
    fVar10 = fVar11 * 1.4;
    fVar14 = 3.1415927;
    fVar7 = fVar11 * 2.6 * DAT_180b0a41c + param_2[1];
    iVar3 = 0;
    do {
      fVar5 = ((float)iVar3 * 0.2 + 0.1) * fVar14 + fVar14;
      auVar9 = ZEXT464((uint)fVar5);
      fVar12 = DAT_180b0a41c;
      fVar5 = (float)FUN_180637540(fVar5);
      fVar6 = (float)FUN_180638e00(auVar9._0_8_);
      local_f8 = fVar15 * fVar12 * fVar5 + fVar8;
      fStack_f4 = fVar15 * fVar12 * fVar6 + fVar7;
      local_120 = fVar13 * fVar12 * fVar5 + fVar8;
      local_148 = fVar10 * fVar12;
      local_11c = fVar13 * fVar12 * fVar6 + fVar7;
      FUN_1804dcf10(param_1,&local_120,&local_f8,param_3);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 5);
    fVar8 = fVar11 * 0.6;
    fVar11 = fVar11 * 5.6;
    local_148 = fVar10 * DAT_180b0a41c;
    local_120 = *param_2 - local_148;
    local_11c = fVar8 * DAT_180b0a41c + fVar7;
    local_f8 = *param_2 - fVar11 * DAT_180b0a41c;
    fStack_f4 = local_11c;
    FUN_1804dcf10(param_1,&local_f8,&local_120,param_3);
    local_120 = fVar11 * DAT_180b0a41c + *param_2;
    local_148 = fVar10 * DAT_180b0a41c;
    local_f8 = local_148 + *param_2;
    local_11c = fVar8 * DAT_180b0a41c + fVar7;
    fStack_f4 = local_11c;
    FUN_1804dcf10(param_1,&local_f8,&local_120,param_3);
    break;
  case 5:
    fVar8 = fVar11 * 3.0;
    fVar13 = *param_2 - fVar11 * 4.6 * DAT_180b0a41c;
    fVar10 = *param_2 - fVar11 * 1.6 * DAT_180b0a41c;
    local_120 = fVar11 * DAT_180b0a41c + fVar13;
    local_11c = param_2[1] - fVar8 * DAT_180b0a41c;
    local_f8 = fVar13 - fVar11 * DAT_180b0a41c;
    fStack_f4 = param_2[1] - fVar11 * 5.0 * DAT_180b0a41c;
    local_148 = fVar11 * 0.5 * DAT_180b0a41c;
    local_140 = (undefined1 *)((ulonglong)local_140._4_4_ << 0x20);
    FUN_1804df870(param_1,&local_f8,&local_120,param_3);
    fVar7 = fVar11 * 1.2;
    local_11c = fVar11 * 3.6 * DAT_180b0a41c + param_2[1];
    fStack_f4 = param_2[1] - fVar8 * DAT_180b0a41c;
    local_148 = fVar7 * DAT_180b0a41c;
    local_120 = fVar13;
    local_f8 = fVar13;
    FUN_1804dcf10(param_1,&local_f8,&local_120,param_3);
    fVar8 = fVar11 * 5.2;
    fVar15 = fVar11 * 0.8;
    fVar14 = 3.7;
    fVar5 = 3.8;
    fVar12 = 0.4;
    iVar3 = 0;
    do {
      fVar6 = ((float)iVar3 * fVar14 - fVar5) * fVar11 * DAT_180b0a41c + param_2[1];
      if (iVar3 != 0) {
        local_120 = fVar10 - fVar11 * fVar12 * DAT_180b0a41c;
        local_148 = fVar7 * DAT_180b0a41c;
        local_11c = fVar6;
        local_f8 = fVar13;
        fStack_f4 = fVar6;
        FUN_1804dcf10(param_1,&local_f8,&local_120,param_3);
      }
      local_148 = fVar15 * DAT_180b0a41c;
      local_118 = fVar8 * DAT_180b0a41c + *param_2;
      local_114 = local_148 + fVar6;
      local_128 = fVar11 * 0.6 * DAT_180b0a41c + fVar10;
      local_124 = fVar6 - local_148;
      local_140 = (undefined1 *)((ulonglong)local_140 & 0xffffffff00000000);
      FUN_1804df870(param_1,&local_128,&local_118,param_3);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 3);
    break;
  case 6:
    local_128 = *param_2;
    local_124 = param_2[1] - fVar11 * 1.6 * DAT_180b0a41c;
    local_140 = &DAT_180829dc4;
    local_148 = (float)param_3;
    FUN_180463b40(param_1,DAT_180c62cc0,param_5 * 0.82,&local_128);
    local_100 = *param_2;
    local_108 = fVar11 * 2.2 * DAT_180b0a41c;
    local_110 = local_100 - local_108;
    local_10c = fVar11 * 3.0 * DAT_180b0a41c + param_2[1];
    local_108 = local_100 + local_108;
    local_fc = fVar11 * 5.2 * DAT_180b0a41c + param_2[1];
    local_148 = (float)param_3;
    local_104 = local_10c;
    FUN_1804dfea0(param_1,&local_110,&local_108,&local_100);
    break;
  case 7:
    fVar15 = fVar11 * 1.3;
    fVar13 = fVar11 * 3.6 * DAT_180b0a41c;
    fVar7 = fVar15 * DAT_180b0a41c;
    local_f8 = (*param_2 - fVar13) - fVar7 * 0.5;
    local_128 = fVar13 + local_f8;
    fStack_f4 = (param_2[1] - fVar13) - fVar7 * 0.5;
    local_124 = fVar13 + fStack_f4;
    local_148 = fVar11 * DAT_180b0a41c;
    local_140 = (undefined1 *)((ulonglong)local_140._4_4_ << 0x20);
    FUN_1804df870(param_1,&local_f8,&local_128,param_3);
    fVar8 = fVar13 + fVar13;
    local_128 = fVar8 + local_f8 + fVar7;
    local_124 = fVar13 + fStack_f4;
    local_148 = fVar11 * DAT_180b0a41c;
    local_118 = fVar13 + local_f8 + fVar7;
    local_140 = (undefined1 *)((ulonglong)local_140 & 0xffffffff00000000);
    local_114 = fStack_f4;
    FUN_1804df870(param_1,&local_118,&local_128,param_3);
    local_148 = fVar11 * DAT_180b0a41c;
    local_128 = fVar13 + local_f8;
    local_124 = fVar8 + fStack_f4 + fVar7;
    local_114 = fVar13 + fStack_f4 + fVar7;
    local_140 = (undefined1 *)((ulonglong)local_140 & 0xffffffff00000000);
    local_118 = local_f8;
    FUN_1804df870(param_1,&local_118,&local_128,param_3);
    fVar8 = fVar13 * 0.5;
    fVar11 = fVar13 * 1.5 + local_f8 + fVar7;
    fVar7 = fVar13 * 1.5 + fStack_f4 + fVar7;
    local_128 = fVar8 + fVar11;
    local_148 = fVar15 * DAT_180b0a41c;
    local_118 = fVar11 - fVar8;
    local_124 = fVar7;
    local_114 = fVar7;
    FUN_1804dcf10(param_1,&local_118,&local_128,param_3);
    local_124 = fVar8 + fVar7;
    local_148 = fVar15 * DAT_180b0a41c;
    local_114 = fVar7 - fVar8;
    local_128 = fVar11;
    local_118 = fVar11;
    FUN_1804dcf10(param_1,&local_118,&local_128,param_3);
    break;
  default:
    local_148 = (float)param_3;
    local_140 = param_4;
    FUN_180463b40(param_1,DAT_180c62cc0,param_5,param_2);
  }
}



