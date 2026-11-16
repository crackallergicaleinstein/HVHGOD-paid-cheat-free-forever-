// FUN_18062c984 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18062c984 */

undefined4
FUN_18062c984(ulonglong *param_1,undefined2 *param_2,ulonglong param_3,undefined8 param_4,
             ulonglong param_5,longlong param_6)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar3 = 0;
  uVar4 = 0;
  if (param_2 == (undefined2 *)0x0) {
    if (param_3 == 0) {
LAB_18062c9f2:
      if (param_1 != (ulonglong *)0x0) {
        *param_1 = 0;
      }
      uVar2 = param_5;
      if (param_3 < param_5) {
        uVar2 = param_3;
      }
      if (uVar2 < 0x80000000) {
        lVar1 = FUN_18062caa4(param_2,param_4,uVar2,param_6);
        if (lVar1 == -1) {
          if (param_2 != (undefined2 *)0x0) {
            *param_2 = 0;
          }
          if (*(char *)(param_6 + 0x30) != '\0') {
            uVar3 = *(undefined4 *)(param_6 + 0x2c);
          }
          return uVar3;
        }
        uVar2 = lVar1 + 1;
        if (param_2 == (undefined2 *)0x0) goto LAB_18062ca7f;
        if (param_3 < uVar2) {
          if (param_5 != 0xffffffffffffffff) {
            *param_2 = 0;
            uVar3 = 0x22;
            goto LAB_18062ca60;
          }
          uVar4 = 0x50;
          uVar2 = param_3;
        }
        param_2[uVar2 - 1] = 0;
LAB_18062ca7f:
        if (param_1 != (ulonglong *)0x0) {
          *param_1 = uVar2;
        }
        return uVar4;
      }
      uVar3 = 0x16;
LAB_18062ca60:
      *(undefined4 *)(param_6 + 0x2c) = uVar3;
      *(undefined1 *)(param_6 + 0x30) = 1;
      goto LAB_18062c9d4;
    }
  }
  else if (param_3 != 0) {
    *param_2 = 0;
    goto LAB_18062c9f2;
  }
  uVar3 = 0x16;
  *(undefined1 *)(param_6 + 0x30) = 1;
  *(undefined4 *)(param_6 + 0x2c) = 0x16;
LAB_18062c9d4:
  FUN_18060aa1c(0,0,0,0,0,param_6);
  return uVar3;
}



