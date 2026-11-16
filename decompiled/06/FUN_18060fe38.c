// FUN_18060fe38 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18060fe38 */

void FUN_18060fe38(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  uint uVar1;
  int iVar2;
  
  FUN_180611584(*param_2);
  if ((*(longlong *)*param_3 != 0) &&
     (uVar1 = *(uint *)(*(longlong *)*param_3 + 0x14), (uVar1 >> 0xd & 1) != 0)) {
    if (((((byte)uVar1 & 3) == 2) && ((uVar1 & 0xc0) != 0)) || ((uVar1 >> 0xb & 1) != 0)) {
      if ((*(char *)param_3[2] != '\0') || ((*(uint *)(*(longlong *)*param_3 + 0x14) >> 1 & 1) != 0)
         ) {
        iVar2 = FUN_1806100e4(*(undefined8 *)*param_3);
        if (iVar2 == -1) {
          *(undefined4 *)param_3[3] = 0xffffffff;
        }
        else {
          *(int *)param_3[1] = *(int *)param_3[1] + 1;
        }
      }
    }
    else {
      *(int *)param_3[1] = *(int *)param_3[1] + 1;
    }
  }
  FUN_180611590(*param_4);
  return;
}



