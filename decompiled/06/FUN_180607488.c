// FUN_180607488 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180607488 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

char FUN_180607488(longlong param_1,longlong *param_2,longlong param_3,byte *param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  iVar1 = *(int *)(param_3 + 8);
  if (iVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_180606310();
    lVar2 = iVar1 + lVar2;
  }
  if (lVar2 == 0) {
    return '\0';
  }
  iVar1 = *(int *)(param_3 + 8);
  if (iVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_180606310();
    lVar2 = iVar1 + lVar2;
  }
  if (*(char *)(lVar2 + 0x10) == '\0') {
    return '\0';
  }
  if ((*(int *)(param_3 + 0xc) == 0) && (-1 < *(int *)(param_3 + 4))) {
    return '\0';
  }
  if (-1 < *(int *)(param_3 + 4)) {
    param_2 = (longlong *)((ulonglong)*(uint *)(param_3 + 0xc) + *param_2);
  }
  if ((((*(byte *)(param_3 + 4) & 0x80) == 0) || ((*param_4 & 0x10) == 0)) || (DAT_180bb1b30 == 0))
  {
    if ((*(byte *)(param_3 + 4) & 8) == 0) {
      if ((*param_4 & 1) == 0) {
        iVar1 = *(int *)(param_4 + 0x18);
        if (iVar1 == 0) {
          lVar2 = 0;
        }
        else {
          lVar2 = FUN_180606324();
          lVar2 = iVar1 + lVar2;
        }
        if (lVar2 == 0) {
          if ((*(longlong *)(param_1 + 0x28) == 0) || (param_2 == (longlong *)0x0)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          iVar1 = *(int *)(param_4 + 0x14);
          uVar3 = __AdjustPointer(*(undefined8 *)(param_1 + 0x28),param_4 + 8);
          FUN_18063aed0(param_2,uVar3,(longlong)iVar1);
          return '\0';
        }
        if ((*(longlong *)(param_1 + 0x28) != 0) && (param_2 != (longlong *)0x0)) {
          iVar1 = *(int *)(param_4 + 0x18);
          if (iVar1 == 0) {
            lVar2 = 0;
          }
          else {
            lVar2 = FUN_180606324();
            lVar2 = iVar1 + lVar2;
          }
          if (lVar2 != 0) {
            return ((*param_4 & 4) != 0) + '\x01';
          }
        }
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if ((*(longlong *)(param_1 + 0x28) == 0) || (param_2 == (longlong *)0x0)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      FUN_18063aed0(param_2,*(longlong *)(param_1 + 0x28),(longlong)*(int *)(param_4 + 0x14));
      if (*(int *)(param_4 + 0x14) != 8) {
        return '\0';
      }
      if (*param_2 == 0) {
        return '\0';
      }
      lVar2 = *param_2;
    }
    else {
      lVar2 = *(longlong *)(param_1 + 0x28);
      if ((lVar2 == 0) || (param_2 == (longlong *)0x0)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *param_2 = lVar2;
    }
  }
  else {
    lVar2 = (*(code *)DAT_180bb1b30)();
    if ((lVar2 == 0) || (param_2 == (longlong *)0x0)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *param_2 = lVar2;
  }
  lVar2 = __AdjustPointer(lVar2,param_4 + 8);
  *param_2 = lVar2;
  return '\0';
}



