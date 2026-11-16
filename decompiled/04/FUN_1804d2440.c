// FUN_1804d2440 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804d2440 */

int FUN_1804d2440(longlong param_1,uint param_2,char *param_3)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = 0;
  uVar3 = (uint)CONCAT11(*(undefined1 *)((ulonglong)param_2 + 4 + param_1),
                         *(undefined1 *)((ulonglong)param_2 + 5 + param_1));
  if (uVar3 != 0) {
    do {
      uVar1 = (ulonglong)(iVar2 * 0x10 + param_2 + 0xc);
      if (((((uint)*(byte *)(uVar1 + param_1) == (int)*param_3) &&
           ((uint)*(byte *)(uVar1 + 1 + param_1) == (int)param_3[1])) &&
          ((uint)*(byte *)(uVar1 + 2 + param_1) == (int)param_3[2])) &&
         ((uint)*(byte *)(uVar1 + 3 + param_1) == (int)param_3[3])) {
        return (uint)*(byte *)(uVar1 + 0xb + param_1) +
               (uint)*(byte *)(uVar1 + 9 + param_1) * 0x10000 +
               (uint)*(byte *)(uVar1 + 10 + param_1) * 0x100 +
               (uint)*(byte *)(uVar1 + 8 + param_1) * 0x1000000;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)uVar3);
  }
  return 0;
}



