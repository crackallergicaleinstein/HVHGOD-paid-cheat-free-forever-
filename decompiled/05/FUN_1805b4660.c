// FUN_1805b4660 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805b4660 */

ulonglong FUN_1805b4660(undefined8 *param_1,char *param_2)

{
  ulonglong uVar1;
  char *pcVar2;
  char *local_res8;
  
  pcVar2 = (char *)*param_1;
  local_res8 = pcVar2;
  uVar1 = FUN_1805b42c0(&local_res8,param_2,10);
  if (local_res8 == pcVar2) {
    return 0;
  }
  if ((local_res8 < param_2) && (*local_res8 == '#')) {
    pcVar2 = local_res8 + 1;
    local_res8 = pcVar2;
    uVar1 = FUN_1805b42c0(&local_res8,param_2,uVar1 & 0xffffffff);
    if (local_res8 == pcVar2) {
      return 0;
    }
  }
  *param_1 = local_res8;
  return uVar1;
}



