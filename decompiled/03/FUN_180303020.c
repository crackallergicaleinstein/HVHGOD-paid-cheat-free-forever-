// FUN_180303020 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180303020 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180303020(void)

{
  bool bVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  float fVar6;
  undefined1 local_res8 [8];
  undefined7 uStack_27;
  uint7 uStack_1f;
  
  uVar4 = 0;
  DAT_1808e3a60 = 0;
  DAT_1808e3a68 = 0;
  DAT_1808e3a70 = 0;
  _DAT_1808e3a78 = 0;
  _DAT_1808e3aa0 = CONCAT71(uStack_27,0xb);
  _DAT_1808e3aa8 = (ulonglong)uStack_1f << 8;
  _DAT_1808e3a80 = 0;
  _DAT_1808e3a88 = 0;
  _DAT_1808e3a90 = 0;
  _DAT_1808e3a98 = 0x1c3003;
  DAT_1808e3a54 = 0x180;
  DAT_1808e3a58 = 0x60;
  DAT_180bbeab8 = 0;
  fVar6 = 0.0;
  plVar2 = (longlong *)FUN_18017bf40(local_res8);
  DAT_180bda138 = *plVar2;
  if ((((DAT_180cc8360 == '\0') || (DAT_180b8e110 == '\0')) || ((_DAT_180b8e114 & 1) != 0)) ||
     (fVar6 <= DAT_180b8e120)) {
    DAT_180bbe88e = 0;
  }
  else {
    DAT_180bbe88e = 1;
  }
  if (((DAT_180b0dfd8 & 4) == 0) || ((_DAT_180b8e114 & 2) != 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (((DAT_180bbe88e == 0) || ((DAT_180b0dfd8 & 2) == 0)) || ((!bVar1 || (DAT_180cad358 != '\0'))))
  {
    DAT_180bbea84 = '\0';
  }
  else {
    DAT_180bbea84 = '\x01';
  }
  DAT_180bbea87 = 0;
  DAT_180bbea86 = 0;
  DAT_180bbf068 = GetCurrentThreadId();
  DAT_180bbf06c = -(uint)(DAT_180bbea84 != '\0') & 2;
  DAT_180bbf128 = DAT_180bbf06c;
  if (((DAT_180bbe88e == 0) || (DAT_180cc8360 == '\0')) ||
     ((((DAT_180cc83ca == '\0' && ((DAT_180cc8360 == '\0' || (DAT_180cc83cb == '\0')))) || (!bVar1))
      || (DAT_180bda154 = 1, DAT_180cad358 != '\0')))) {
    DAT_180bda154 = 0;
  }
  DAT_180bda158 = DAT_180bda154 * 2;
  DAT_180bda150 = 0;
  DAT_180bbf12c = 0;
  if ((((DAT_180cc8360 == '\0') || (DAT_180cc83c9 == '\0')) || (DAT_180b8e110 == '\0')) ||
     ((((_DAT_180b8e114 & 1) != 0 || (fVar6 <= DAT_180b8e120)) || (!bVar1)))) {
    DAT_180bbea85 = 0;
  }
  else {
    DAT_180bbea85 = 1;
  }
  DAT_180bbe88e = DAT_180bbe88e | DAT_180bbea85;
  DAT_180bbe88f = 0;
  DAT_180bda148 = DAT_180bda138 + 4000000;
  if (DAT_180bbe88e == 0) {
    DAT_180bda140 = DAT_180bda138 + 4000000;
    return;
  }
  if ((DAT_180bbea84 != '\0') || (DAT_180bbea85 != 0)) {
    lVar3 = 8000;
    if (DAT_180bbea85 != 0) {
      lVar3 = 88000;
    }
    uVar4 = (lVar3 + (ulonglong)(-(uint)(DAT_180bbea84 != '\0') & 0x3e800)) / 0x60;
  }
  uVar5 = 1000;
  if (1000 < uVar4) {
    uVar5 = uVar4;
  }
  DAT_180bda140 = (4000 - uVar5) * 1000 + DAT_180bda138;
  return;
}



