// FUN_1804230f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804230f0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804230f0(float *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  char *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [64];
  float fVar15;
  float fVar16;
  undefined1 auStack_128 [32];
  float local_108 [4];
  undefined1 local_f8 [64];
  ulonglong local_b8;
  
  local_b8 = DAT_1808d5f00 ^ (ulonglong)auStack_128;
  cVar1 = *param_2;
  iVar2 = 0;
  if (cVar1 == '\0') {
LAB_180423179:
    cVar1 = *param_2;
    if (cVar1 != '\0') {
      pcVar4 = param_2;
      do {
        if (cVar1 == ')') {
          if (*pcVar4 != '\0') {
            if (pcVar4 <= param_2) goto LAB_180423239;
            lVar3 = 0;
            goto LAB_1804231e5;
          }
          break;
        }
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      fVar12 = 0.0;
      fVar11 = 0.0;
      goto LAB_18042327e;
    }
  }
  else {
    do {
      if (cVar1 == '(') goto LAB_180423179;
      cVar1 = param_2[1];
      param_2 = param_2 + 1;
    } while (cVar1 != '\0');
  }
  fVar12 = 0.0;
  fVar11 = 0.0;
  goto LAB_18042327e;
LAB_1804231e5:
  do {
    cVar1 = *param_2;
    if ((((cVar1 == '-') || (cVar1 == '+')) || (cVar1 == '.')) || ((byte)(cVar1 - 0x30U) < 10)) {
      if (2 < lVar3) break;
      param_2 = (char *)FUN_180422970(param_2,local_f8);
      dVar8 = (double)FUN_1804227e0(local_f8);
      iVar2 = iVar2 + 1;
      local_108[lVar3] = (float)dVar8;
      lVar3 = lVar3 + 1;
    }
    else {
      param_2 = param_2 + 1;
    }
  } while (param_2 < pcVar4);
LAB_180423239:
  fVar12 = 0.0;
  fVar11 = 0.0;
  if (iVar2 == 1) {
    local_108[2] = 0.0;
    local_108[1] = 0.0;
  }
  else if (1 < iVar2) {
    fVar11 = 0.0 - local_108[2];
    fVar12 = 0.0 - local_108[1];
  }
LAB_18042327e:
  fVar15 = 0.0;
  fVar13 = (local_108[0] / 180.0) * 3.1415927;
  auVar14 = ZEXT464((uint)fVar13);
  fVar5 = (float)FUN_180637540(fVar13);
  fVar6 = (float)FUN_180638e00(auVar14._0_8_);
  fVar9 = -fVar6;
  fVar13 = fVar5 * fVar15 + fVar9;
  fVar7 = fVar5 * fVar15 + fVar6;
  fVar16 = fVar9 * fVar15 + fVar5;
  fVar10 = fVar6 * fVar15 + fVar5;
  fVar6 = fVar5 * fVar11 + fVar6 * fVar12 + fVar15;
  fVar11 = fVar9 * fVar11 + fVar5 * fVar12 + fVar15;
  fVar12 = fVar6;
  if (1 < iVar2) {
    fVar12 = fVar11 * fVar15 + fVar6 + local_108[2];
    fVar11 = fVar6 * fVar15 + fVar11 + local_108[1];
    fVar6 = fVar10 * fVar15;
    fVar10 = fVar13 * fVar15 + fVar10;
    fVar5 = fVar16 * fVar15;
    fVar13 = fVar6 + fVar13;
    fVar16 = fVar7 * fVar15 + fVar16;
    fVar7 = fVar5 + fVar7;
  }
  *param_1 = fVar16;
  param_1[1] = fVar7;
  param_1[2] = fVar13;
  param_1[3] = fVar10;
  param_1[4] = fVar11;
  param_1[5] = fVar12;
}



