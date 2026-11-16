// FUN_1806311a4 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806311a4 */

undefined4 FUN_1806311a4(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_1 != 0) {
    iVar4 = 0;
    iVar5 = 0xe3;
    do {
      iVar2 = (iVar5 + iVar4) / 2;
      iVar3 = FUN_1806331a0(param_1,(&PTR_DAT_1806b8750)[(longlong)iVar2 * 2],0x55);
      if (iVar3 == 0) {
        iVar5 = *(int *)(&DAT_1806b8758 + (longlong)iVar2 * 0x10);
        if (iVar5 < 0) {
          return 0;
        }
        if ((ulonglong)(longlong)iVar5 < 0xe4) {
          return *(undefined4 *)(&DAT_1806b6d00 + (longlong)iVar5 * 0x10);
        }
        return 0;
      }
      iVar1 = iVar2 + -1;
      if (-1 < iVar3) {
        iVar4 = iVar2 + 1;
        iVar1 = iVar5;
      }
      iVar5 = iVar1;
    } while (iVar4 <= iVar5);
  }
  return 0;
}



