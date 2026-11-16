// FUN_1805c9d20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805c9d20 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805c9d20(uint param_1,byte *param_2)

{
  byte *pbVar1;
  uint uVar2;
  byte *pbVar3;
  char cVar5;
  byte bVar4;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  byte local_18 [8];
  ulonglong local_10;
  
  pbVar6 = local_18;
  local_10 = DAT_1808d5f00 ^ (ulonglong)local_18;
  if (param_1 == 0) {
    *param_2 = 0x30;
  }
  pbVar3 = param_2;
  if ((int)param_1 < 0) {
    pbVar3 = param_2 + 1;
    *param_2 = 0x2d;
    param_1 = -param_1;
  }
  uVar7 = (int)param_1 >> 0x10 & 0xffff;
  if (uVar7 != 0) {
    do {
      uVar2 = (int)uVar7 / 10;
      *pbVar6 = (char)uVar7 + (char)uVar2 * -10 + '0';
      pbVar6 = pbVar6 + 1;
      uVar7 = uVar2;
    } while (0 < (int)uVar2);
    if (local_18 < pbVar6) {
      do {
        pbVar1 = pbVar6 + -1;
        pbVar6 = pbVar6 + -1;
        *pbVar3 = *pbVar1;
        pbVar3 = pbVar3 + 1;
      } while (local_18 < pbVar6);
    }
  }
  if ((param_1 & 0xffff) == 0) {
  }
  *pbVar3 = 0x2e;
  uVar7 = (param_1 & 0xffff) * 10 + 5;
  iVar8 = 0;
  pbVar6 = pbVar3;
  do {
    pbVar6 = pbVar6 + 1;
    uVar2 = uVar7 & 0xffff;
    cVar5 = (char)(uVar7 >> 0x10);
    bVar4 = cVar5 + 0x30;
    *pbVar6 = bVar4;
    uVar7 = 0;
    if (uVar2 == 0) break;
    iVar8 = iVar8 + 1;
    uVar7 = uVar2 * 10;
  } while (iVar8 < 5);
  if (((longlong)pbVar6 - (longlong)pbVar3 == 5) && (uVar7 < 0x542e0)) {
    if (bVar4 == 0x31) goto LAB_1805c9e90;
    if (uVar7 == 0x2a120) {
      bVar9 = (bVar4 & 1) == 0;
    }
    else {
      if (0x2a11f < uVar7) goto LAB_1805c9e85;
      bVar9 = bVar4 == 0x30;
    }
    if (!bVar9) {
      bVar4 = cVar5 + 0x2f;
      *pbVar6 = bVar4;
    }
  }
LAB_1805c9e85:
  if (bVar4 != 0x30) {
  }
LAB_1805c9e90:
  do {
    *pbVar6 = 0;
    pbVar6 = pbVar6 + -1;
  } while (*pbVar6 == 0x30);
}



