// FUN_18018f710 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18018f710 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18018f710(longlong param_1,int param_2,undefined8 *param_3)

{
  size_t sVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_1808d5f00 ^ (ulonglong)auStack_58;
  local_38 = param_3;
  iVar2 = FUN_1805f68d0();
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (*(int *)(param_1 + 0x4c) == 0x7fffffff) {
    *(undefined4 *)(param_1 + 0x4c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  puVar5 = (undefined8 *)((longlong)param_2 * 0x128 + 0x238 + param_1);
  if (*(char *)(puVar5 + 0x24) == *(char *)(param_3 + 0x24)) {
    if ((*(char *)(puVar5 + 0x24) == '\0') || (*(char *)(param_3 + 0x24) == '\0')) {
LAB_18018f845:
      FUN_180195300(puVar5,param_3);
      goto LAB_18018f865;
    }
    puVar3 = param_3;
    if (0xf < (ulonglong)param_3[3]) {
      puVar3 = (undefined8 *)*param_3;
    }
    sVar1 = puVar5[2];
    puVar4 = puVar5;
    if (0xf < (ulonglong)puVar5[3]) {
      puVar4 = (undefined8 *)*puVar5;
    }
    if (sVar1 == param_3[2]) {
      if (sVar1 != 0) {
        iVar2 = memcmp(puVar4,puVar3,sVar1);
        if (iVar2 != 0) goto LAB_18018f852;
      }
      puVar3 = puVar5 + 0x1b;
      puVar4 = param_3 + 0x1b;
      if (0xf < (ulonglong)param_3[0x1e]) {
        puVar4 = (undefined8 *)*puVar4;
      }
      sVar1 = puVar5[0x1d];
      if (0xf < (ulonglong)puVar5[0x1e]) {
        puVar3 = (undefined8 *)*puVar3;
      }
      if (sVar1 == param_3[0x1d]) {
        if (sVar1 != 0) {
          iVar2 = memcmp(puVar3,puVar4,sVar1);
          if (iVar2 != 0) goto LAB_18018f852;
        }
        puVar3 = param_3 + 0x1f;
        puVar4 = puVar5 + 0x1f;
        if (0xf < (ulonglong)param_3[0x22]) {
          puVar3 = (undefined8 *)*puVar3;
        }
        sVar1 = puVar5[0x21];
        if (0xf < (ulonglong)puVar5[0x22]) {
          puVar4 = (undefined8 *)*puVar4;
        }
        if (sVar1 == param_3[0x21]) {
          if (sVar1 != 0) {
            iVar2 = memcmp(puVar4,puVar3,sVar1);
            if (iVar2 != 0) goto LAB_18018f852;
          }
          if (puVar5[0x23] == param_3[0x23]) goto LAB_18018f845;
        }
      }
    }
  }
LAB_18018f852:
  FUN_180195300(puVar5,param_3);
  LOCK();
  *(longlong *)(param_1 + 0x488) = *(longlong *)(param_1 + 0x488) + 1;
  UNLOCK();
LAB_18018f865:
  FUN_1805f68fc(param_1);
  if (*(char *)(param_3 + 0x24) != '\0') {
    FUN_180195860(param_3);
  }
}



