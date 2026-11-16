// FUN_1802cc660 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802cc660 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802cc660(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 local_104;
  undefined1 local_100 [200];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_20;
  
  local_20 = DAT_1808d5f00 ^ (ulonglong)auStack_128;
  local_108 = 0;
  local_104 = 0xc00000c8;
  FUN_18063ab10(local_100,0,200);
  local_38 = 0;
  local_30 = 0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  cVar3 = FUN_1804513c0(uVar1,1,2);
  if (cVar3 != '\0') {
    lVar4 = FUN_18017ea70();
    *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
    cVar3 = FUN_1801ad780(uVar1,&local_108,param_2);
    lVar4 = FUN_18017ea70();
    if (*(int *)(lVar4 + 4) != 0) {
      *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + -1;
    }
    uVar1 = DAT_180c631f8;
    if (cVar3 != '\0') {
      local_30 = 0x66637076;
      uVar2 = *(undefined8 *)(param_1 + 0x10);
      cVar3 = FUN_1804513c0(uVar2,1,2);
      if (cVar3 != '\0') {
        lVar4 = FUN_18017ea70();
        *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
        cVar3 = FUN_1802e72b0(uVar2,uVar1,&local_108);
        lVar4 = FUN_18017ea70();
        if (*(int *)(lVar4 + 4) != 0) {
          *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + -1;
        }
        if (cVar3 != '\0') {
        }
      }
    }
  }
  FUN_1802cc7a0(param_3);
}



