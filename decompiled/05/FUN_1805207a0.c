// FUN_1805207a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805207a0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805207a0(float *param_1,undefined8 param_2,char *param_3,char param_4,undefined4 param_5)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong *puVar7;
  float *pfVar8;
  float **ppfVar9;
  undefined4 *puVar10;
  float *pfVar11;
  float **ppfVar12;
  float fVar13;
  ulonglong uVar14;
  undefined8 extraout_XMM0_Qa;
  undefined1 auStack_88 [32];
  float *local_68;
  float local_60;
  float local_5c;
  float *local_58;
  undefined1 local_50 [16];
  undefined8 local_40;
  ulonglong local_38 [2];
  
  local_38[0] = DAT_1808d5f00 ^ (ulonglong)auStack_88;
  uVar14 = (ulonglong)(byte)param_3[0x78];
  local_40._0_4_ = 0x3020100;
  local_40._4_4_ = 0xa060504;
  cVar4 = FUN_18028c7b0(uVar14);
  fVar13 = *(float *)(param_3 + 0x74);
  if (fVar13 == 0.0) {
    fVar13 = (float)(uint)(byte)param_3[0x70];
  }
  if (2 < (int)fVar13 - 1U) {
    local_68 = (float *)0x908060504030200;
    if (10 < (byte)uVar14) {
      if ((byte)uVar14 < 0x13) {
        uVar14 = (ulonglong)(byte)auStack_88[(ulonglong)((int)uVar14 - 0xb) + 0x20];
      }
      else {
        uVar14 = 2;
      }
    }
    uVar5 = 0;
    do {
      if ((&DAT_1807d1130)[uVar5] == (char)uVar14) {
        fVar13 = (float)((int)uVar5 + 1);
        goto LAB_18052084b;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 3);
    fVar13 = 0.0;
  }
LAB_18052084b:
  pfVar11 = param_1 + 5;
  if (param_4 == '\0') {
    cVar1 = *(char *)pfVar11;
    if (*param_3 != cVar1) {
      *param_3 = cVar1;
      param_3[0x10] = cVar1;
    }
    local_5c = 9.80909e-45;
    local_60 = 0.0;
    pfVar11 = &local_60;
    if (-1 < (int)param_1[4]) {
      pfVar11 = param_1 + 4;
    }
    pfVar8 = &local_5c;
    if ((int)param_1[4] < 8) {
      pfVar8 = pfVar11;
    }
    if ((*(char *)((longlong)&local_40 + (longlong)(int)*pfVar8) != cVar4) ||
       (param_1[10] != fVar13)) {
      param_3[0x78] = *(char *)((longlong)&local_40 + (longlong)(int)*pfVar8);
      iVar3 = (int)param_1[10];
      local_68 = (float *)CONCAT44(local_68._4_4_,3);
      local_58._0_4_ = 0;
      ppfVar12 = &local_58;
      if (-1 < iVar3) {
        ppfVar12 = (float **)(param_1 + 10);
      }
      ppfVar9 = &local_68;
      if (iVar3 < 4) {
        ppfVar9 = ppfVar12;
      }
      *(int *)(param_3 + 0x74) = *(int *)ppfVar9;
      param_3[0x70] = '\0';
    }
    *(undefined4 *)(param_3 + 0x7c) = param_5;
    puVar10 = (undefined4 *)FUN_1805206f0(&local_68,param_1);
    *(undefined4 *)(param_3 + 0x68) = *puVar10;
    puVar10 = (undefined4 *)FUN_1805206f0(&local_68,param_1 + 6);
    *(undefined4 *)(param_3 + 0x6c) = *puVar10;
  }
  else {
    local_68 = pfVar11;
    plVar6 = (longlong *)FUN_18056cec0(extraout_XMM0_Qa,local_50,&local_68);
    *(char **)(*plVar6 + 0x18) = param_3;
    *(char *)pfVar11 = *param_3;
    puVar7 = &local_40;
    do {
      if ((char)*puVar7 == cVar4) break;
      puVar7 = (ulonglong *)((longlong)puVar7 + 1);
    } while (puVar7 != local_38);
    param_1[10] = fVar13;
    param_1[4] = (float)((int)puVar7 - (int)&local_40);
    uVar2 = *(uint *)(param_3 + 0x68);
    *param_1 = (float)(uVar2 & 0xff) / 255.0;
    param_1[1] = (float)(uVar2 >> 8 & 0xff) / 255.0;
    param_1[2] = (float)(uVar2 >> 0x10 & 0xff) / 255.0;
    param_1[3] = (float)(uVar2 >> 0x18) / 255.0;
    uVar2 = *(uint *)(param_3 + 0x6c);
    param_1[6] = (float)(uVar2 & 0xff) / 255.0;
    param_1[7] = (float)(uVar2 >> 8 & 0xff) / 255.0;
    param_1[8] = (float)(uVar2 >> 0x10 & 0xff) / 255.0;
    param_1[9] = (float)(uVar2 >> 0x18) / 255.0;
  }
}



