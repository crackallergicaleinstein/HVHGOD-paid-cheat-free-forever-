// FUN_1803db5c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803db5c0 */

undefined2 FUN_1803db5c0(undefined2 *param_1,char param_2)

{
  char cVar1;
  longlong lVar2;
  undefined2 local_res8 [4];
  
  if (param_1 == (undefined2 *)0x0) {
    return 0;
  }
  if (param_2 == '\0') {
    return *param_1;
  }
  local_res8[0] = 0;
  lVar2 = FUN_18017ea70();
  *(int *)(lVar2 + 4) = *(int *)(lVar2 + 4) + 1;
  cVar1 = FUN_1804514c0(local_res8,param_1,2);
  lVar2 = FUN_18017ea70();
  if (*(int *)(lVar2 + 4) != 0) {
    *(int *)(lVar2 + 4) = *(int *)(lVar2 + 4) + -1;
  }
  if (cVar1 == '\0') {
    local_res8[0] = 0;
  }
  return local_res8[0];
}



