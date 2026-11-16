// FUN_1804a2e20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804a2e20 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804a2e20(void)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  ulonglong *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  ulonglong local_60 [11];
  
  local_60[0] = DAT_1808d5f00 ^ (ulonglong)auStack_a8;
  local_80 = &DAT_180bbb220;
  DAT_180bbb224 = 0;
  DAT_180bbb220 = 0;
  DAT_180bbb228 = 0;
  local_88 = 1;
  local_78._0_4_ = 0xffffffff;
  local_78._4_4_ = 0xffff6d00;
  local_70 = 0xfff0a6a0;
  local_6c = 0xff6648f5;
  local_68 = 0xff78d63e;
  local_64 = 0xff3ab6f2;
  puVar6 = &local_78;
  fVar7 = 0.003921569;
  do {
    uVar1 = (uint)*puVar6;
    fVar8 = (float)(uVar1 & 0xff) * fVar7;
    fVar9 = (float)(uVar1 >> 8 & 0xff) * fVar7;
    fVar10 = (float)(uVar1 >> 0x10 & 0xff) * fVar7;
    fVar11 = (float)(uVar1 >> 0x18) * fVar7;
    if (DAT_180bbb220 == DAT_180bbb224) {
      if (DAT_180bbb224 == 0) {
        iVar3 = 8;
      }
      else {
        iVar3 = DAT_180bbb224 / 2 + DAT_180bbb224;
      }
      iVar4 = DAT_180bbb220 + 1;
      if (DAT_180bbb220 + 1 < iVar3) {
        iVar4 = iVar3;
      }
      FUN_1804aec70(&DAT_180bbb220,iVar4);
    }
    lVar2 = DAT_180bbb228;
    lVar5 = (longlong)DAT_180bbb220;
    *(float *)(DAT_180bbb228 + lVar5 * 0x10) = fVar8;
    *(float *)(lVar2 + 4 + lVar5 * 0x10) = fVar9;
    *(float *)(lVar2 + 8 + lVar5 * 0x10) = fVar10;
    *(float *)(lVar2 + 0xc + lVar5 * 0x10) = fVar11;
    DAT_180bbb220 = DAT_180bbb220 + 1;
    puVar6 = (ulonglong *)((longlong)puVar6 + 4);
  } while (puVar6 != local_60);
}



