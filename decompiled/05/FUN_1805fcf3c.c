// FUN_1805fcf3c - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805fcf3c */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1805fcf3c(longlong *param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined **ppuVar5;
  ulonglong uVar6;
  undefined *local_20;
  undefined **ppuStack_18;
  
  if (param_3 == (undefined8 *)0x0) {
    LOCK();
    DAT_1808d6148 = DAT_1808d6148 + 1;
    UNLOCK();
    local_20 = &DAT_1808d6150;
    ppuStack_18 = &PTR_vftable_1808d6140;
    FUN_1805fca98(0,&local_20,0,param_4,1);
    ppuVar5 = ppuStack_18;
    if (ppuStack_18 != (undefined **)0x0) {
      LOCK();
      ppuVar1 = ppuStack_18 + 1;
      iVar3 = *(int *)ppuVar1;
      *(int *)ppuVar1 = *(int *)ppuVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)*ppuStack_18)(ppuStack_18);
        LOCK();
        piVar2 = (int *)((longlong)ppuVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*ppuVar5 + 8))(ppuVar5);
        }
      }
    }
  }
  else {
    *(undefined4 *)(param_3 + 1) = 1;
    *(undefined4 *)((longlong)param_3 + 0xc) = 1;
    *param_3 = _anon_6E02EFE5::_ExceptionPtr_normal::vftable;
    param_3[0x15] = 0;
    *(undefined4 *)(param_3 + 2) = *param_2;
    *(uint *)((longlong)param_3 + 0x14) = param_2[1] | 1;
    param_3[3] = 0;
    param_3[4] = 0;
    uVar4 = param_2[6];
    *(uint *)(param_3 + 5) = uVar4;
    uVar6 = (ulonglong)uVar4;
    if (0xf < uVar4) {
      uVar6 = 0xf;
    }
    FUN_18063aed0(param_3 + 6,param_2 + 8,uVar6 * 8,param_4,0);
    FUN_18063ab10(param_3 + uVar6 + 6,0,(ulonglong)(0xf - (int)uVar6) << 3);
    *param_1 = (longlong)(param_3 + 2);
    param_1[1] = (longlong)param_3;
  }
  return;
}



