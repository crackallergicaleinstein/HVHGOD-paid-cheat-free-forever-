// FUN_18017c460 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18017c460 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_18017c460(undefined8 *param_1,int *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (param_2 != (int *)0x0) {
    if ((param_2[1] & 1U) != 0) {
      (*(code *)param_1[3])();
      return;
    }
    if (param_2[1] != 0) {
      puVar2 = (undefined8 *)FUN_180113860(param_2 + 2);
      if ((param_2[1] & 1U) != 0) {
        LOCK();
        uVar1 = *(undefined8 *)(param_2 + 2);
        *(undefined8 **)(param_2 + 2) = puVar2;
        UNLOCK();
        if (((byte)uVar1 & 3) == 2) {
          FUN_1805fa36c(param_2 + 2);
        }
        (*(code *)param_1[3])(param_1);
        return;
      }
      if (param_2[1] != 0) {
        *param_1 = param_2;
        param_1[1] = puVar2;
        LOCK();
        *param_2 = *param_2 + 1;
        UNLOCK();
        if (puVar2 != (undefined8 *)0x0) {
          puVar2[2] = param_1;
        }
        puVar2 = param_1;
      }
      LOCK();
      uVar1 = *(undefined8 *)(param_2 + 2);
      *(undefined8 **)(param_2 + 2) = puVar2;
      UNLOCK();
      if (((byte)uVar1 & 3) == 2) {
        FUN_1805fa36c(param_2 + 2);
      }
    }
  }
  return;
}



