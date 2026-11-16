// FUN_1803fa240 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803fa240 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1803fa240(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_4048 [32];
  longlong local_4028;
  undefined1 local_4018 [16384];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x1803fa250;
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_4048;
  if (*(int *)(param_1 + 0x4068) == 1) {
    *(undefined4 *)(param_1 + 0x4068) = 5;
    local_4028 = param_1;
    cVar1 = FUN_1803f9f40();
    if (cVar1 == '\0') {
      *(undefined4 *)(param_1 + 0x4068) = 4;
    }
    else {
      cVar1 = (**(code **)(param_1 + 8))
                        (local_4018,*(undefined8 *)(param_1 + 0x48),
                         *(undefined8 *)(param_1 + 0x4060));
      if (cVar1 != '\0') {
        cVar1 = FUN_1803f9f40(param_1);
        if (cVar1 == '\0') {
          *(undefined4 *)(param_1 + 0x4068) = 4;
        }
        else {
          iVar2 = memcmp(local_4018,(void *)(param_1 + 0x60),*(size_t *)(param_1 + 0x4060));
          if (iVar2 == 0) {
            *(undefined4 *)(param_1 + 0x4068) = 2;
          }
          else {
            cVar1 = (**(code **)(param_1 + 0x10))
                              (*(undefined8 *)(param_1 + 0x48),param_1 + 0x60,
                               *(undefined8 *)(param_1 + 0x4060));
            uVar3 = 6;
            if (cVar1 != '\0') {
              uVar3 = 3;
            }
            *(undefined4 *)(param_1 + 0x4068) = uVar3;
          }
        }
      }
    }
  }
}



