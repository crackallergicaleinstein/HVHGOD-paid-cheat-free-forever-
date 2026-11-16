// FUN_1805dcde0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805dcde0 */

ulonglong * FUN_1805dcde0(ulonglong *param_1,int *param_2,ulonglong param_3)

{
  int iVar1;
  
  if (3 < param_3) {
    iVar1 = *param_2;
    if (iVar1 == -0x2d04adb) {
      FUN_1805edc10(param_2,param_3,param_1 + 1,param_1 + 2);
      goto LAB_1805dce5f;
    }
    if (iVar1 == -0x2d04ada) {
      FUN_1805f1160(param_2,param_3,param_1 + 1,param_1 + 2);
      goto LAB_1805dce5f;
    }
    if (iVar1 == -0x2d04ad9) {
      FUN_1805f4540(param_2,param_3,param_1 + 1,param_1 + 2);
      goto LAB_1805dce5f;
    }
  }
  param_1[1] = 0xfffffffffffffff6;
  param_1[2] = 0xfffffffffffffffe;
LAB_1805dce5f:
  if ((param_1[1] < 0xffffffffffffff89) && (param_3 < param_1[1])) {
    param_1[1] = 0xffffffffffffffb8;
    param_1[2] = 0xfffffffffffffffe;
  }
  if (param_1[2] != 0xfffffffffffffffe) {
    *param_1 = param_1[2] >> 0x11;
  }
  return param_1;
}



