// FUN_1804dbba0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804dbba0 */

void FUN_1804dbba0(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)(0x30 / (longlong)param_1);
  if (iVar1 < 1) {
    *param_2 = 1;
    *param_3 = 0xc;
    return;
  }
  if (0xc < iVar1) {
    iVar1 = 0xc;
  }
  *param_2 = iVar1;
  iVar2 = (int)(0xc / (longlong)iVar1);
  *param_3 = iVar2;
  if (iVar2 * iVar1 != 0xc) {
    *param_2 = (int)(0xc / (longlong)iVar2);
  }
  return;
}



