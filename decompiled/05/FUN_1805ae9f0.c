// FUN_1805ae9f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805ae9f0 */

int FUN_1805ae9f0(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  uint uVar2;
  int local_res18 [2];
  
  local_res18[0] = 0;
  uVar2 = param_3 - 7;
  if (uVar2 == 0) {
    local_res18[0] = 0;
  }
  else {
    lVar1 = FUN_18057ac40(*(undefined8 *)(param_1 + 0x80),1,*(int *)(param_1 + 0x68),
                          *(int *)(param_1 + 0x68) + 1 + uVar2,*(undefined8 *)(param_1 + 0x60),
                          local_res18);
    *(longlong *)(param_1 + 0x60) = lVar1;
    if (local_res18[0] == 0) {
      lVar1 = (ulonglong)*(uint *)(param_1 + 0x68) + lVar1;
      FUN_18063aed0(lVar1,param_2 + 7,uVar2);
      *(undefined1 *)((ulonglong)uVar2 + lVar1) = 0;
      *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + param_3 + -6;
      return local_res18[0];
    }
  }
  return local_res18[0];
}



