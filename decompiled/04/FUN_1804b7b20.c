// FUN_1804b7b20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804b7b20 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804b7b20(uint param_1)

{
  float *pfVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  uint uVar6;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  longlong lVar10;
  float fVar11;
  undefined1 auStack_38 [32];
  float local_18;
  float local_14;
  ulonglong local_10;
  
  lVar4 = DAT_180bb8ae8;
  local_10 = DAT_1808d5f00 ^ (ulonglong)auStack_38;
  lVar3 = *(longlong *)(DAT_180bb8ae8 + 0x14d0);
  if ((param_1 & 0xfffc005f) != 0) {
    FUN_1804c5a40("Invalid flags for IsItemHovered()!");
  }
  lVar10 = DAT_180bb8ae8;
  if (((*(char *)(lVar4 + 0x2039) == '\0') || (*(char *)(lVar4 + 0x2038) == '\0')) ||
     ((param_1 >> 0xb & 1) != 0)) {
    if ((*(uint *)(lVar4 + 0x1ec8) & 1) == 0) {
    }
    if ((param_1 >> 0xc & 1) != 0) {
      uVar6 = *(uint *)(lVar4 + 0x11a4) & 0xfffe3fff;
      if ((param_1 & 0x1c000) == 0) {
        uVar6 = *(uint *)(lVar4 + 0x11a4);
      }
      param_1 = param_1 | uVar6;
    }
    if (((*(longlong *)(lVar4 + 0x14d8) != lVar3) && (-1 < (char)*(uint *)(lVar4 + 0x1ec8))) &&
       ((param_1 >> 9 & 1) == 0)) {
    }
    iVar9 = *(int *)(lVar4 + 0x1ec0);
    if (((-1 < (char)param_1) && (iVar2 = *(int *)(lVar4 + 0x1550), iVar2 != 0)) &&
       ((iVar2 != iVar9 &&
        ((*(char *)(lVar4 + 0x155f) == '\0' && (*(char *)(lVar4 + 0x1564) == '\0')))))) {
      if (iVar2 != *(int *)(lVar3 + 0x8c)) {
      }
      if ((iVar9 != 0) && (*(int *)(lVar4 + 0x1568) != iVar9)) {
      }
    }
    cVar5 = FUN_1804b7ab0(lVar3,param_1);
    if ((cVar5 == '\0') && ((*(uint *)(lVar4 + 0x1ec4) & 0x2000) == 0)) {
    }
    if (((*(uint *)(lVar4 + 0x1ec4) & 0x40) != 0) && ((param_1 >> 10 & 1) == 0)) {
    }
    if ((iVar9 == *(int *)(lVar3 + 0x8c)) && (*(char *)(lVar3 + 0xce) != '\0')) {
    }
    if (((((*(uint *)(lVar4 + 0x1ec4) >> 0xe & 1) != 0) && (iVar9 != 0)) &&
        ((param_1 >> 8 & 1) == 0)) && (*(int *)(lVar4 + 0x153c) != iVar9)) {
    }
  }
  else {
    if (*(int *)(DAT_180bb8ae8 + 0x203c) != *(int *)(DAT_180bb8ae8 + 0x1ec0)) {
    }
    if (*(int *)(DAT_180bb8ae8 + 0x203c) == 0) {
    }
    if (((*(byte *)(lVar4 + 0x1ec4) & 0x40) != 0) && ((param_1 >> 10 & 1) == 0)) {
    }
    if ((param_1 >> 0xc & 1) != 0) {
      uVar6 = *(uint *)(lVar4 + 0x11a8) & 0xfffe3fff;
      if ((param_1 & 0x1c000) == 0) {
        uVar6 = *(uint *)(lVar4 + 0x11a8);
      }
      param_1 = param_1 | uVar6;
    }
  }
  if ((param_1 >> 0x10 & 1) == 0) {
    if ((param_1 >> 0xf & 1) == 0) {
      fVar11 = 0.0;
    }
    else {
      fVar11 = *(float *)(lVar10 + 0x119c);
    }
  }
  else {
    fVar11 = *(float *)(lVar10 + 0x11a0);
  }
  if ((0.0 < fVar11) || ((param_1 >> 0xd & 1) != 0)) {
    uVar6 = *(uint *)(lVar4 + 0x1ec0);
    if (uVar6 == 0) {
      local_18 = *(float *)(lVar4 + 0x1ecc) - *(float *)(lVar3 + 0x128);
      uVar6 = ~*(uint *)(*(longlong *)(lVar3 + 0x110) + -4 + (longlong)*(int *)(lVar3 + 0x108) * 4);
      local_14 = *(float *)(lVar4 + 0x1ed0) - *(float *)(lVar3 + 300);
      pfVar7 = &local_18;
      do {
        uVar6 = crc32(uVar6,*pfVar7);
        pfVar8 = pfVar7 + 1;
        pfVar1 = pfVar7 + 2;
        pfVar7 = pfVar8;
      } while (pfVar1 <= &local_10);
      if (pfVar8 < &local_10) {
        do {
          uVar6 = crc32(uVar6,*(undefined1 *)pfVar8);
          pfVar8 = (float *)((longlong)pfVar8 + 1);
        } while (pfVar8 < &local_10);
      }
      uVar6 = ~uVar6;
    }
    if (((param_1 >> 0x11 & 1) != 0) && (*(uint *)(lVar4 + 0x24c4) != uVar6)) {
      *(undefined4 *)(lVar4 + 0x24c8) = 0;
    }
    *(uint *)(lVar4 + 0x24c0) = uVar6;
  }
}



