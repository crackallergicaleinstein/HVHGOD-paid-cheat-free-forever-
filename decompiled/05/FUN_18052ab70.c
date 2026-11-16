// FUN_18052ab70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18052ab70 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18052ab70(void)

{
  int *piVar1;
  ULONGLONG UVar2;
  int iVar3;
  longlong lVar4;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  if (DAT_1808e6670 == '\0') {
    return;
  }
  iVar3 = 0;
  DAT_1808e6688 = DAT_180c62eb8 + 1;
  DAT_1808e6672 = 0;
  if (DAT_1808e667c == 1) {
    lVar4 = (longlong)DAT_1808e6680;
    DAT_1808e6671 = (&DAT_1808e6888)[lVar4];
    DAT_1808e6684 = (&DAT_1808e66f0)[lVar4 * 7];
    if (DAT_1808e6684 < 0) {
      DAT_1808e6684 = 0;
    }
    if ((int)(&DAT_1808e66f0)[lVar4 * 7] < 0) {
      piVar1 = &DAT_1808e66d8;
      do {
        if ((iVar3 == DAT_1808e6680) || (*piVar1 == 0)) {
          DAT_1808e6684 = iVar3;
          break;
        }
        iVar3 = iVar3 + 1;
        piVar1 = piVar1 + 7;
      } while (iVar3 < 5);
    }
  }
  else {
    DAT_1808e6671 = (char)_DAT_1808e6778 == '\0';
    DAT_1808e6684 = 0;
    if ((char)_DAT_1808e6778 == '\0') {
      uStack_20 = 0;
      local_28 = 0;
      local_18 = local_18 & 0xffffff0000000000;
    }
    else {
      local_18 = CONCAT44(_DAT_1808e6778,DAT_1808e6774);
      local_28 = _DAT_1808e6764;
      uStack_20 = _DAT_1808e676c;
    }
    _DAT_1808e6870 = local_28;
    uRam00000001808e6878 = uStack_20;
    DAT_1808e6880 = local_18;
  }
  DAT_180c62eb8 = DAT_1808e6688;
  FUN_1801d8230(DAT_1808e6688);
  LOCK();
  DAT_180c63119 = 1;
  UNLOCK();
  UVar2 = GetTickCount64();
  DAT_180c63120 = UVar2 + 0xfa;
  FUN_18021ab80();
  return;
}



