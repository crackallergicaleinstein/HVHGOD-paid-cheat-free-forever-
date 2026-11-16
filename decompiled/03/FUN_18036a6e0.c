// FUN_18036a6e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18036a6e0 */

ushort * FUN_18036a6e0(ushort *param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  undefined2 local_res8;
  
  if ((param_2 == 0) || (param_3 == 0)) {
    local_res8 = local_res8 & 0xff;
    *param_1 = local_res8;
    return param_1;
  }
  lVar2 = FUN_18017ea70();
  *(int *)(lVar2 + 4) = *(int *)(lVar2 + 4) + 1;
  if (param_2 + param_3 != 0) {
    local_res8 = local_res8 & 0xff00;
    cVar1 = FUN_1804514f0(&local_res8,param_2 + param_3,1);
    if (cVar1 != '\0') {
      local_res8 = CONCAT11(1,(char)local_res8);
      goto LAB_18036a73a;
    }
  }
  local_res8 = local_res8 & 0xff;
LAB_18036a73a:
  lVar2 = FUN_18017ea70();
  if (*(int *)(lVar2 + 4) != 0) {
    *(int *)(lVar2 + 4) = *(int *)(lVar2 + 4) + -1;
  }
  *param_1 = local_res8;
  return param_1;
}



