// FUN_1805bf090 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805bf090 */

int FUN_1805bf090(longlong param_1,int param_2,undefined8 param_3)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  int local_res10 [6];
  
  local_res10[0] = 0;
  uVar3 = *(uint *)(param_1 + 4) >> 3;
  uVar2 = param_2 + 7U >> 3;
  if (uVar3 < uVar2) {
    uVar2 = uVar2 + 7 & 0xfffffff8;
    uVar1 = FUN_18057ad10(param_3,1,uVar3,uVar2,*(undefined8 *)(param_1 + 8),local_res10);
    *(undefined8 *)(param_1 + 8) = uVar1;
    if (local_res10[0] == 0) {
      *(uint *)(param_1 + 4) = uVar2 * 8;
      return 0;
    }
  }
  else {
    local_res10[0] = 0;
  }
  return local_res10[0];
}



