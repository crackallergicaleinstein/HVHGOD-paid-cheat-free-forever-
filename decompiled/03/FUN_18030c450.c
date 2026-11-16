// FUN_18030c450 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18030c450 */

undefined4 * FUN_18030c450(undefined4 *param_1,longlong param_2,float *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 *puVar5;
  
  lVar3 = *(longlong *)(param_2 + 0x48);
  puVar5 = (undefined4 *)(lVar3 + 0x18);
  if (*param_3 <= 0.0) {
    puVar5 = (undefined4 *)(lVar3 + 0x24);
  }
  uVar1 = *puVar5;
  lVar4 = 0x28;
  if (0.0 < param_3[1]) {
    lVar4 = 0x1c;
  }
  uVar2 = *(undefined4 *)(lVar3 + lVar4);
  lVar4 = 0x2c;
  if (0.0 < param_3[2]) {
    lVar4 = 0x20;
  }
  param_1[2] = *(undefined4 *)(lVar3 + lVar4);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return param_1;
}



