// FUN_180183fc0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180183fc0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180183fc0(short param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 ****ppppuVar3;
  ulonglong uVar4;
  undefined1 auStack_58 [40];
  undefined8 ****local_30 [2];
  uint local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = DAT_1808d5f00 ^ (ulonglong)auStack_58;
  FUN_18015bea0(local_30,(int)param_1);
  ppppuVar3 = local_30;
  if (0xf < local_18) {
    ppppuVar3 = local_30[0];
  }
  iVar2 = 0;
  if (3 < (int)local_20) {
    uVar1 = local_20 >> 2;
    uVar4 = (ulonglong)uVar1;
    iVar2 = uVar1 * 4;
    local_20 = local_20 + uVar1 * -4;
    do {
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  if (local_20 != 1) {
    if (local_20 != 2) {
      if (local_20 != 3) goto LAB_180184112;
      tolower((uint)*(byte *)((longlong)iVar2 + 2 + (longlong)ppppuVar3));
    }
    tolower((uint)*(byte *)((longlong)iVar2 + 1 + (longlong)ppppuVar3));
  }
  tolower((uint)*(byte *)((longlong)iVar2 + (longlong)ppppuVar3));
LAB_180184112:
  FUN_18015c010(local_30);
}



