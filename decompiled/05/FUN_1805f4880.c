// FUN_1805f4880 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805f4880 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805f4880(longlong param_1,longlong param_2,ulonglong param_3)

{
  uint *puVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint *puVar5;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  undefined4 local_b8;
  uint local_b4 [3];
  undefined1 local_a8 [112];
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_e8;
  puVar1 = (uint *)(param_3 + param_2);
  uVar3 = FUN_1805f2c60(param_1 + 0x140c);
  if (uVar3 < 0xffffffffffffff89) {
    param_2 = uVar3 + param_2;
    local_b8 = 0x1c;
    local_c8 = (longlong)puVar1 - param_2;
    uVar3 = FUN_1805ea3a0(local_a8,&local_b8,local_b4,param_2);
    if (((uVar3 < 0xffffffffffffff89) && (local_b4[0] < 9)) &&
       (uVar4 = FUN_1805edfd0(param_1 + 0x804,local_a8,local_b8), uVar4 < 0xffffffffffffff89)) {
      param_2 = param_2 + uVar3;
      local_b8 = 0x34;
      local_c8 = (longlong)puVar1 - param_2;
      uVar3 = FUN_1805ea3a0(local_a8,&local_b8,local_b4,param_2);
      if (((uVar3 < 0xffffffffffffff89) && (local_b4[0] < 10)) &&
         (uVar4 = FUN_1805edfd0(param_1 + 0xc08,local_a8,local_b8), uVar4 < 0xffffffffffffff89)) {
        param_2 = param_2 + uVar3;
        local_b8 = 0x23;
        local_c8 = (longlong)puVar1 - param_2;
        uVar3 = FUN_1805ea3a0(local_a8,&local_b8,local_b4,param_2);
        if (((uVar3 < 0xffffffffffffff89) && (local_b4[0] < 10)) &&
           ((uVar4 = FUN_1805edfd0(param_1,local_a8,local_b8), uVar4 < 0xffffffffffffff89 &&
            (puVar5 = (uint *)(param_2 + uVar3), puVar5 + 3 <= puVar1)))) {
          uVar2 = *puVar5;
          *(uint *)(param_1 + 0x5438) = uVar2;
          if ((uVar2 != 0) && (uVar2 < param_3)) {
            uVar2 = puVar5[1];
            *(uint *)(param_1 + 0x543c) = uVar2;
            if ((uVar2 != 0) && (uVar2 < param_3)) {
              uVar2 = puVar5[2];
              *(uint *)(param_1 + 0x5440) = uVar2;
              if ((uVar2 != 0) && (uVar2 < param_3)) {
                *(undefined4 *)(param_1 + 0x546c) = 1;
                *(undefined4 *)(param_1 + 0x5468) = 1;
              }
            }
          }
        }
      }
    }
  }
}



