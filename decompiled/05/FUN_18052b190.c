// FUN_18052b190 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18052b190 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18052b190(int param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined2 local_13;
  undefined1 local_11;
  
  if ((DAT_180b909b0 != 0) && (-1 < param_2)) {
    if ((param_2 < (int)((*(longlong *)(DAT_180b909b0 + 0x60) - *(longlong *)(DAT_180b909b0 + 0x58))
                        / 0x68)) &&
       ((lVar2 = (longlong)param_2 * 0x68 + *(longlong *)(DAT_180b909b0 + 0x58), lVar2 != 0 &&
        (DAT_1808e6670 != '\0')))) {
      if (param_1 == 1) {
        lVar1 = (longlong)DAT_1808e6680;
        if ((&DAT_1808e66d8)[lVar1 * 7] != *(int *)(lVar2 + 4)) {
          *(undefined8 *)(&DAT_1808e66d8 + lVar1 * 7) = 0;
          *(undefined8 *)(&DAT_1808e66e0 + lVar1 * 7) = 0x3f800000;
          *(undefined8 *)(&DAT_1808e66e8 + lVar1 * 7) = 0;
          (&DAT_1808e66f0)[lVar1 * 7] = 0xffffffff;
          (&DAT_1808e66d8)[lVar1 * 7] = *(undefined4 *)(lVar2 + 4);
          (&DAT_1808e6888)[DAT_1808e6680] = 1;
          FUN_18052ab70();
          return;
        }
      }
      else if (DAT_1808e6764 != *(int *)(lVar2 + 4)) {
        DAT_1808e6778 = 0;
        _DAT_1808e6779 = local_13;
        DAT_1808e677b = local_11;
        DAT_1808e676c = 0;
        DAT_1808e6770 = 0;
        DAT_1808e6774 = 0;
        _DAT_1808e6764 = (ulonglong)*(uint *)(lVar2 + 4);
      }
      FUN_18052ab70();
      return;
    }
  }
  return;
}



