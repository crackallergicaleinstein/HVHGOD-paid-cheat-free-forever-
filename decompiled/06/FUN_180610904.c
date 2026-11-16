// FUN_180610904 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180610904 */

undefined8 FUN_180610904(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_1[1];
  uVar2 = *(undefined8 *)*param_1;
  uVar3 = FUN_1806242c4(uVar2);
  uVar4 = FUN_180610a20(*(undefined8 *)param_1[2],*(undefined8 *)param_1[3],
                        *(undefined8 *)param_1[4],*(undefined8 *)*param_1,param_1[1]);
  FUN_18062438c(uVar3,uVar2,uVar1);
  return uVar4;
}



