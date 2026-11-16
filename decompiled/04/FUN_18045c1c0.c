// FUN_18045c1c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18045c1c0 */

void FUN_18045c1c0(longlong param_1,float param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  float *pfVar4;
  
  lVar2 = DAT_180c62c70;
  if ((longlong)*(ulonglong *)(param_1 + 0x20) < 0) {
    lVar2 = DAT_180c62c68;
  }
  if ((lVar2 != 0) &&
     (pfVar4 = (float *)((*(ulonglong *)(param_1 + 0x20) & 0x7fffffffffffffff) + lVar2),
     pfVar4 != (float *)0x0)) {
    iVar1 = *(int *)(param_1 + 0x28);
    if (iVar1 == 0) {
      *(bool *)pfVar4 = 0.5 < param_2;
    }
    else {
      if (iVar1 == 1) {
        *pfVar4 = param_2;
        return;
      }
      if (iVar1 == 2) {
        *pfVar4 = (float)(int)param_2;
        return;
      }
      if (iVar1 == 3) {
        uVar3 = 0;
        if (*(longlong *)(param_1 + 0x48) != 0) {
          while (uVar3 < 0x18) {
            *(byte *)((longlong)pfVar4 + uVar3) =
                 (byte)((uint)(longlong)param_2 >> ((uint)uVar3 & 0x1f)) & 1;
            uVar3 = uVar3 + 1;
            if (*(ulonglong *)(param_1 + 0x48) <= uVar3) {
              return;
            }
          }
        }
      }
    }
  }
  return;
}



