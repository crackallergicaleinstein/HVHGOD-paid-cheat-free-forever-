// FUN_180635260 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180635260 */

bool FUN_180635260(int *param_1)

{
  int iVar1;
  undefined8 local_res8;
  
  FUN_180632f20(*param_1);
  FUN_180633050(param_1[1]);
  local_res8 = 0;
  iVar1 = FUN_180635240(&local_res8);
  if ((iVar1 == 0) && (*param_1 == (int)local_res8)) {
    return param_1[1] != local_res8._4_4_;
  }
  return true;
}



