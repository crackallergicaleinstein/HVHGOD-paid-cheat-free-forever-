// FUN_1800f58c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800f58c0 */

longlong FUN_1800f58c0(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_2 == 0) && (param_3 == 0)) {
    uVar2 = 4;
  }
  else {
    uVar2 = 0;
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    iVar1 = FUN_180610350(*(longlong *)(param_1 + 0x80),param_2,uVar2,param_3);
    if (iVar1 == 0) {
      FUN_180113ca0(param_1,*(undefined8 *)(param_1 + 0x80),1);
      return param_1;
    }
  }
  return 0;
}



