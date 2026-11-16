// FUN_1802d1b70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802d1b70 */

undefined8 * FUN_1802d1b70(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18 = *param_3;
  uStack_10 = param_3[1];
  FUN_1802c7330(param_2,&local_18);
  if ((*(int *)*param_1 == 0) || (*(int *)*param_1 == 1)) {
    puVar3 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      puVar3 = (undefined8 *)*param_2;
    }
    uVar1 = param_2[2];
    if (0xc < uVar1) {
      lVar2 = *(longlong *)((uVar1 - 0xd) + (longlong)puVar3) + -0x2068746c61656820;
      if ((lVar2 == 0) &&
         (lVar2 = (ulonglong)*(uint *)((uVar1 - 5) + (longlong)puVar3) - 0x7466656c, lVar2 == 0)) {
        lVar2 = (ulonglong)*(byte *)((uVar1 - 1) + (longlong)puVar3) - 0x29;
      }
      if (lVar2 == 0) {
        FUN_1801b3ca0(param_2,uVar1 - 0xd,0xc,&DAT_1807d150c,3);
      }
    }
  }
  return param_2;
}



