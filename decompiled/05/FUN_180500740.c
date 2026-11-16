// FUN_180500740 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180500740 */

void FUN_180500740(undefined8 param_1,int *param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  
  lVar2 = DAT_180bb8ae8;
  piVar4 = *(int **)(param_2 + 2);
  piVar1 = piVar4 + (longlong)*param_2 * 6;
  for (; piVar4 != piVar1; piVar4 = piVar4 + 6) {
    iVar3 = *piVar4;
    if ((iVar3 == 1) && ((*(byte *)(lVar2 + 0x28cc) & 0x40) != 0)) {
      pcVar5 = "Clear";
      if ((char)piVar4[1] != '\0') {
        pcVar5 = "SelectAll";
      }
      FUN_1804cf3e0("[selection] %s: Request: SetAll %d (= %s)\n","EndMultiSelect",(char)piVar4[1],
                    pcVar5);
      iVar3 = *piVar4;
    }
    if ((iVar3 == 2) && ((*(byte *)(lVar2 + 0x28cc) & 0x40) != 0)) {
      FUN_1804cf3e0("[selection] %s: Request: SetRange %I64d..%I64d (0x%I64X..0x%I64X) = %d (dir %d)\n"
                    ,"EndMultiSelect",*(undefined8 *)(piVar4 + 2),*(undefined8 *)(piVar4 + 4),
                    *(undefined8 *)(piVar4 + 2),*(undefined8 *)(piVar4 + 4),(char)piVar4[1],
                    (int)*(char *)((longlong)piVar4 + 5));
    }
  }
  return;
}



