// FUN_1805c2710 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805c2710 */

undefined8 FUN_1805c2710(longlong param_1,int param_2,undefined8 param_3,int *param_4)

{
  undefined8 uVar1;
  int *piVar2;
  int *piVar3;
  
  piVar2 = *(int **)(param_1 + 0xf8);
  piVar3 = piVar2 + (ulonglong)*(ushort *)(param_1 + 0xf4) * 4;
  while( true ) {
    if (piVar3 <= piVar2) {
      return 0x8e;
    }
    if ((*piVar2 == param_2) && (piVar2[3] != 0)) break;
    piVar2 = piVar2 + 4;
  }
  if (param_4 != (int *)0x0) {
    *param_4 = piVar2[3];
  }
  uVar1 = FUN_1805788b0(param_3,piVar2[2]);
  return uVar1;
}



