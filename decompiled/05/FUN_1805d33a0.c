// FUN_1805d33a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805d33a0 */

int FUN_1805d33a0(undefined8 *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int local_res8 [2];
  
  puVar1 = (undefined8 *)0x0;
  if (param_1 == (undefined8 *)0x0) {
    return 6;
  }
  local_res8[0] = 0;
  if (*param_2 == 0) {
    iVar2 = 6;
  }
  else {
    puVar1 = (undefined8 *)FUN_18057abe0(*param_2,0x18,local_res8);
    if (local_res8[0] != 0) {
      return local_res8[0];
    }
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    iVar2 = 0;
  }
  if (iVar2 == 0) {
    *puVar1 = *param_1;
    puVar1[2] = param_2[1];
    param_2[1] = (longlong)puVar1;
  }
  return iVar2;
}



