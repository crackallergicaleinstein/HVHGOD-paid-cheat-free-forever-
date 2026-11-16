// FUN_180614890 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180614890 */

ulonglong FUN_180614890(uint *param_1,uint *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint *puVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  byte local_res8;
  uint local_res18;
  undefined8 local_238;
  ulonglong local_228;
  undefined1 local_214 [468];
  
  if ((*param_1 == 0) || (uVar4 = *param_2, uVar4 == 0)) {
    return 0;
  }
  uVar14 = *param_1 - 1;
  uVar15 = (ulonglong)uVar14;
  uVar13 = uVar4 - 1;
  if (uVar13 == 0) {
    uVar4 = param_2[1];
    if (uVar4 == 1) {
      uVar4 = param_1[1];
      *param_1 = 0;
      memcpy_s(param_1 + 1,0x1cc,local_214,0);
      return (ulonglong)uVar4;
    }
    if (uVar14 == 0) {
      uVar13 = param_1[1];
      *param_1 = 0;
      memcpy_s(param_1 + 1,0x1cc,local_214,0);
      uVar14 = uVar13 % uVar4;
      param_1[1] = uVar14;
      *param_1 = (uint)(uVar14 != 0);
      return (ulonglong)uVar13 / (ulonglong)uVar4;
    }
    uVar9 = 0;
    uVar16 = 0;
    uVar13 = 0;
    while (uVar14 != 0xffffffff) {
      lVar6 = uVar15 + 1;
      uVar14 = (int)uVar15 - 1;
      uVar15 = (ulonglong)uVar14;
      uVar2 = (ulonglong)param_1[lVar6] | uVar16 << 0x20;
      uVar16 = uVar2 % (ulonglong)uVar4;
      uVar13 = (uint)uVar16;
      uVar9 = (uVar9 << 0x20) + (uVar2 / uVar4 & 0xffffffff);
    }
    *param_1 = 0;
    memcpy_s(param_1 + 1,0x1cc,local_214,0);
    param_1[1] = uVar13;
    param_1[2] = 0;
    *param_1 = 1;
    return uVar9;
  }
  if (uVar14 < uVar13) {
    return 0;
  }
  lVar6 = (longlong)(int)uVar14;
  iVar10 = uVar14 - uVar13;
  lVar8 = (longlong)iVar10;
  if (lVar8 <= lVar6) {
    puVar5 = param_1 + lVar6 + 1;
    uVar12 = uVar14;
    do {
      if (*(uint *)((longlong)param_2 + (lVar8 * -4 - (longlong)param_1) + (longlong)puVar5) !=
          *puVar5) {
        if (param_1[(longlong)(int)uVar12 + 1] <= param_2[(longlong)(int)(uVar12 - iVar10) + 1])
        goto LAB_180614a1b;
        break;
      }
      uVar12 = uVar12 - 1;
      lVar6 = lVar6 + -1;
      puVar5 = puVar5 + -1;
    } while (lVar8 <= lVar6);
  }
  iVar10 = iVar10 + 1;
LAB_180614a1b:
  if (iVar10 == 0) {
    return 0;
  }
  uVar13 = param_2[(ulonglong)uVar13 + 1];
  local_res18 = param_2[(ulonglong)(uVar4 - 2) + 1];
  iVar7 = 0x1f;
  if (uVar13 != 0) {
    for (; uVar13 >> iVar7 == 0; iVar7 = iVar7 + -1) {
    }
  }
  if (uVar13 == 0) {
    iVar7 = 0x20;
    local_res8 = 0;
  }
  else {
    iVar7 = 0x1f - iVar7;
    local_res8 = 0x20 - (char)iVar7;
    if (iVar7 == 0) goto LAB_180614ab2;
  }
  uVar12 = local_res18 >> (local_res8 & 0x1f);
  local_res18 = local_res18 << ((byte)iVar7 & 0x1f);
  uVar13 = uVar12 | uVar13 << ((byte)iVar7 & 0x1f);
  if (2 < uVar4) {
    local_res18 = local_res18 | param_2[(ulonglong)(uVar4 - 3) + 1] >> (local_res8 & 0x1f);
  }
LAB_180614ab2:
  iVar10 = iVar10 + -1;
  local_228 = 0;
  uVar9 = 0;
  if (-1 < iVar10) {
    uVar16 = (ulonglong)uVar13;
    uVar13 = iVar10 + uVar4;
    do {
      if ((uint)uVar15 < uVar13) {
        uVar14 = 0;
      }
      else {
        uVar14 = param_1[(ulonglong)uVar13 + 1];
      }
      uVar12 = param_1[(ulonglong)(uVar13 - 2) + 1];
      uVar9 = (ulonglong)uVar12;
      local_238 = CONCAT44(uVar14,param_1[(ulonglong)(uVar13 - 1) + 1]);
      if (iVar7 != 0) {
        local_238 = (ulonglong)(uVar12 >> (local_res8 & 0x3f)) | local_238 << ((byte)iVar7 & 0x3f);
        uVar12 = uVar12 << ((byte)iVar7 & 0x1f);
        uVar9 = (ulonglong)uVar12;
        if (2 < uVar13) {
          uVar9 = (ulonglong)(uVar12 | param_1[(ulonglong)(uVar13 - 3) + 1] >> (local_res8 & 0x1f));
        }
      }
      uVar2 = local_238 / uVar16;
      local_238 = local_238 % uVar16;
      if (0xffffffff < uVar2) {
        lVar6 = uVar2 - 0xffffffff;
        uVar2 = 0xffffffff;
        local_238 = local_238 + lVar6 * uVar16;
      }
      if (local_238 < 0x100000000) {
        uVar3 = local_res18 * uVar2;
        do {
          if (uVar3 <= (local_238 << 0x20 | uVar9)) break;
          uVar2 = uVar2 - 1;
          uVar3 = uVar3 - local_res18;
          local_238 = local_238 + uVar16;
        } while (local_238 < 0x100000000);
      }
      if (uVar2 != 0) {
        uVar15 = 0;
        uVar12 = 0;
        if (uVar4 != 0) {
          puVar5 = param_2;
          do {
            puVar5 = puVar5 + 1;
            uVar15 = uVar15 + *puVar5 * uVar2;
            uVar1 = uVar12 + iVar10;
            uVar9 = uVar15 >> 0x20;
            uVar11 = (uint)uVar15;
            uVar15 = uVar9 + 1;
            if (uVar11 <= param_1[(ulonglong)uVar1 + 1]) {
              uVar15 = uVar9;
            }
            uVar12 = uVar12 + 1;
            param_1[(ulonglong)uVar1 + 1] = param_1[(ulonglong)uVar1 + 1] - uVar11;
          } while (uVar12 < uVar4);
        }
        if (uVar14 < uVar15) {
          uVar14 = 0;
          if (uVar4 != 0) {
            uVar15 = 0;
            puVar5 = param_2;
            do {
              puVar5 = puVar5 + 1;
              uVar12 = uVar14 + iVar10;
              uVar14 = uVar14 + 1;
              uVar15 = uVar15 + param_1[(ulonglong)uVar12 + 1] + (ulonglong)*puVar5;
              param_1[(ulonglong)uVar12 + 1] = (uint)uVar15;
              uVar15 = uVar15 >> 0x20;
            } while (uVar14 < uVar4);
          }
          uVar2 = uVar2 - 1;
        }
        uVar15 = (ulonglong)(uVar13 - 1);
      }
      uVar14 = (uint)uVar15;
      uVar13 = uVar13 - 1;
      uVar9 = (local_228 << 0x20) + (uVar2 & 0xffffffff);
      iVar10 = iVar10 + -1;
      local_228 = uVar9;
    } while (-1 < iVar10);
  }
  uVar14 = uVar14 + 1;
  uVar4 = uVar14;
  if (uVar14 < *param_1) {
    do {
      uVar15 = (ulonglong)uVar4;
      uVar4 = uVar4 + 1;
      param_1[uVar15 + 1] = 0;
    } while (uVar4 < *param_1);
  }
  *param_1 = uVar14;
  while ((uVar14 != 0 && (uVar14 = uVar14 - 1, param_1[(ulonglong)uVar14 + 1] == 0))) {
    *param_1 = uVar14;
  }
  return uVar9;
}



