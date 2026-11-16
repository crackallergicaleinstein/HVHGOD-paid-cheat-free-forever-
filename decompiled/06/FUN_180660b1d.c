// FUN_180660b1d - decompiled reference (Ghidra). Not original source, does not compile.

/* 180660b1d */

void FUN_180660b1d(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  
  FUN_1806062bc(*(undefined8 *)(param_2 + 0x40));
  if ((((*(int *)(param_2 + 0x20) == 0) &&
       (piVar1 = *(int **)(param_2 + 0xd8), *piVar1 == -0x1f928c9d)) && (piVar1[6] == 4)) &&
     (((piVar1[8] == 0x19930520 || (piVar1[8] == 0x19930521)) || (piVar1[8] == 0x19930522)))) {
    iVar3 = _IsExceptionObjectToBeDestroyed(*(undefined8 *)(piVar1 + 10));
    if (iVar3 != 0) {
      FUN_1806064c0(piVar1,1);
    }
  }
  lVar2 = FUN_180606ee8();
  *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(param_2 + 0x30);
  lVar2 = FUN_180606ee8();
  *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(param_2 + 0x48);
  lVar2 = FUN_180606ee8();
  *(undefined4 *)(lVar2 + 0x78) = *(undefined4 *)(param_2 + 0xc0);
  return;
}



