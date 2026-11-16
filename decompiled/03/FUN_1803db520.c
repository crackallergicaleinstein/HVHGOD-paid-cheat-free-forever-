// FUN_1803db520 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803db520 */

/* WARNING: Removing unreachable block (ram,0x0001803db5a8) */

undefined8 FUN_1803db520(undefined8 *param_1,char param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 local_res8;
  
  if (param_1 == (undefined8 *)0x0) {
    return 0;
  }
  if (param_2 == '\0') {
    return *param_1;
  }
  local_res8 = 0;
  lVar2 = FUN_18017ea70();
  *(int *)(lVar2 + 4) = *(int *)(lVar2 + 4) + 1;
  cVar1 = FUN_1804514c0(&local_res8,param_1,8);
  if (cVar1 == '\0') {
    lVar2 = FUN_18017ea70();
    if (*(int *)(lVar2 + 4) != 0) {
      *(int *)(lVar2 + 4) = *(int *)(lVar2 + 4) + -1;
    }
    return 0;
  }
  lVar2 = FUN_18017ea70();
  if (*(int *)(lVar2 + 4) != 0) {
    *(int *)(lVar2 + 4) = *(int *)(lVar2 + 4) + -1;
  }
  return local_res8;
}



