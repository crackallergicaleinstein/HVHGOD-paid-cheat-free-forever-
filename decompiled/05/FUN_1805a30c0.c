// FUN_1805a30c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805a30c0 */

ulonglong FUN_1805a30c0(longlong param_1,undefined8 *param_2,int param_3)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  
  pcVar1 = (char *)*param_2;
  lVar7 = (longlong)param_3;
  if (*pcVar1 == '\x1e') {
    uVar4 = FUN_1805a1430(pcVar1,*(undefined8 *)(param_1 + 0x10),param_3,0);
    return uVar4;
  }
  if (*pcVar1 == -1) {
    uVar5 = CONCAT31(CONCAT21(CONCAT11(pcVar1[1],pcVar1[2]),pcVar1[3]),pcVar1[4]);
    if (param_3 != 0) {
      uVar2 = -uVar5;
      if ((int)-uVar5 < 0) {
        uVar2 = uVar5;
      }
      if (*(int *)(&DAT_180670c98 + lVar7 * 4) < (int)uVar2) {
        uVar4 = 0x80000001;
        if (0 < (int)uVar5) {
          uVar4 = 0x7fffffff;
        }
        return uVar4;
      }
      uVar5 = uVar5 * (&DAT_180670c70)[lVar7];
    }
    return (ulonglong)uVar5;
  }
  iVar3 = FUN_1805a12f0(pcVar1,*(undefined8 *)(param_1 + 0x10));
  if ((int)lVar7 != 0) {
    iVar6 = -iVar3;
    if (-iVar3 < 0) {
      iVar6 = iVar3;
    }
    if (*(int *)(&DAT_180670c98 + lVar7 * 4) < iVar6 * 0x10000) {
      uVar4 = 0x80000001;
      if (0 < iVar3) {
        uVar4 = 0x7fffffff;
      }
      return uVar4;
    }
    iVar3 = iVar3 * (&DAT_180670c70)[lVar7];
  }
  if (0x7fff < iVar3) {
    return 0x7fffffff;
  }
  if (iVar3 < -0x7fff) {
    return 0x80000001;
  }
  return (ulonglong)(uint)(iVar3 << 0x10);
}



