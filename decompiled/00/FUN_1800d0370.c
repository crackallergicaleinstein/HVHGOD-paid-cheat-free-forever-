// FUN_1800d0370 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800d0370 */

undefined4 * FUN_1800d0370(undefined4 *param_1,byte param_2)

{
  ulonglong uVar1;
  byte bVar2;
  longlong lVar3;
  undefined4 local_68;
  char *local_58 [4];
  char *local_38;
  longlong local_30;
  
  local_58[3] = "hat - spikes";
  local_58[0] = "hat - crown";
  lVar3 = -1;
  bVar2 = 0;
  if (param_2 < 4) {
    bVar2 = param_2;
  }
  local_58[1] = "hat - ufo";
  uVar1 = (ulonglong)bVar2;
  local_58[2] = "hat - bucket";
  local_58[1] = (char *)0xffffffffffffffff;
  local_58[0] = local_58[uVar1];
  do {
    local_58[1] = (char *)((longlong)local_58[1] + 1);
  } while (local_58[0][(longlong)local_58[1]] != '\0');
  local_30 = 5;
  local_68 = CONCAT13(0xff,*(undefined3 *)(&DAT_1806ff1f0 + uVar1 * 3));
  *param_1 = local_68;
  local_38 = "color";
  FUN_1800aa4b0(param_1,local_58,local_58 + 4);
  local_58[0] = "hat - crown";
  local_58[3] = "hat - spikes";
  local_58[1] = "hat - ufo";
  local_30 = -1;
  local_58[2] = "hat - bucket";
  local_38 = local_58[uVar1];
  do {
    local_30 = local_30 + 1;
  } while (local_38[local_30] != '\0');
  local_68 = CONCAT13(0xff,*(undefined3 *)(&DAT_1806ff1f0 + uVar1 * 3));
  param_1[1] = local_68;
  local_58[0] = "mesh color";
  local_58[1] = (char *)0xa;
  FUN_1800aa4b0(param_1 + 1,local_58 + 4,local_58);
  local_58[0] = "hat - crown";
  local_58[3] = "hat - spikes";
  local_58[1] = "hat - ufo";
  local_58[2] = "hat - bucket";
  local_38 = local_58[uVar1];
  do {
    lVar3 = lVar3 + 1;
  } while (local_38[lVar3] != '\0');
  param_1[2] = 0xff0f0907;
  local_58[0] = "fill color";
  local_58[1] = (char *)0xa;
  local_30 = lVar3;
  FUN_1800aa4b0(param_1 + 2,local_58 + 4,local_58);
  return param_1;
}



