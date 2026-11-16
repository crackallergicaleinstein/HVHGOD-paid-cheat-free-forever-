// FUN_180505720 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180505720 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180505720(void)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  char cVar3;
  SHORT SVar4;
  undefined1 (*pauVar5) [16];
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [64];
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  ulonglong local_38;
  
  lVar2 = DAT_180bb8ae8;
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_78;
  if (DAT_180bb8ae8 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = *(longlong *)(DAT_180bb8ae8 + 200);
  }
  lVar7 = DAT_180bb8ae8 + 0x28;
  pauVar5 = (undefined1 (*) [16])FUN_180504c90(local_58,lVar7);
  local_48 = *pauVar5;
  auVar11 = ZEXT1664(local_48);
  cVar3 = FUN_180387290(local_48);
  if (cVar3 == '\0') {
    auVar1 = vunpcklps_avx(ZEXT816(0),ZEXT816(0));
    uVar9 = auVar1._0_8_;
  }
  else {
    auVar10 = auVar11._0_16_;
    auVar1 = vshufps_avx(auVar10,auVar10,0xaa);
    auVar10 = vshufps_avx(auVar10,auVar10,0xff);
    auVar1 = vunpcklps_avx(auVar1,auVar10);
    uVar9 = auVar1._0_8_;
  }
  local_48._0_4_ = SUB84(uVar9,0);
  local_48._4_4_ = SUB84((ulonglong)uVar9 >> 0x20,0);
  *(undefined4 *)(lVar2 + 0x38) = 0x3f800000;
  *(undefined4 *)(lVar2 + 0x30) = local_48._0_4_;
  *(undefined4 *)(lVar2 + 0x34) = local_48._4_4_;
  *(undefined4 *)(lVar2 + 0x3c) = 0x3f800000;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_48._8_8_;
  local_48 = auVar1 << 0x40;
  QueryPerformanceCounter((LARGE_INTEGER *)local_48);
  *(float *)(lVar2 + 0x40) =
       (float)((double)(local_48._0_8_ - *(longlong *)(lVar8 + 0x18)) /
              (double)*(longlong *)(lVar8 + 0x20));
  ((_struct_19 *)(lVar8 + 0x18))->LowPart = local_48._0_4_;
  ((_struct_19 *)(lVar8 + 0x18))->HighPart = local_48._4_4_;
  FUN_180504de0(lVar7);
  if ((*(char *)(DAT_180bb8ae8 + 0x234) != '\0') && (*(char *)(DAT_180bb8ae8 + 0x169c) == '\0')) {
    SVar4 = GetKeyState(0xa0);
    if ((-1 < SVar4) && (*(char *)(lVar2 + 0xbdd) != '\0')) {
      FUN_1804b0130(lVar7,0x210,0,0);
    }
  }
  if ((*(char *)(DAT_180bb8ae8 + 0x274) != '\0') && (*(char *)(DAT_180bb8ae8 + 0x16cc) == '\0')) {
    SVar4 = GetKeyState(0xa1);
    if ((-1 < SVar4) && (*(char *)(lVar2 + 0xbdd) != '\0')) {
      FUN_1804b0130(lVar7,0x214,0,0);
    }
  }
  if ((*(char *)(DAT_180bb8ae8 + 0x254) != '\0') && (*(char *)(DAT_180bb8ae8 + 0x16b4) == '\0')) {
    SVar4 = GetKeyState(0x5b);
    if ((-1 < SVar4) && (*(char *)(lVar2 + 0xbdd) != '\0')) {
      FUN_1804b0130(lVar7,0x212,0,0);
    }
  }
  if ((*(char *)(DAT_180bb8ae8 + 0x294) != '\0') && (*(char *)(DAT_180bb8ae8 + 0x16e4) == '\0')) {
    SVar4 = GetKeyState(0x5c);
    if ((-1 < SVar4) && (*(char *)(lVar2 + 0xbdd) != '\0')) {
      FUN_1804b0130(lVar7,0x216,0,0);
    }
  }
  if (*(char *)(lVar2 + 0x8d) == '\0') {
    iVar6 = *(int *)(DAT_180bb8ae8 + 0x24d8);
  }
  else {
    iVar6 = -1;
  }
  if (*(int *)(lVar8 + 0x28) != iVar6) {
    *(int *)(lVar8 + 0x28) = iVar6;
    FUN_180504ae0(lVar7);
  }
  FUN_180505020(lVar7);
}



