// FUN_1805ca0c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805ca0c0 */

char * FUN_1805ca0c0(undefined8 param_1,longlong param_2,longlong param_3,code *param_4)

{
  code *pcVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  int local_res18 [2];
  code *local_res20;
  
  local_res20 = param_4;
  pcVar3 = (char *)FUN_18057abe0(param_1,(*(ushort *)(param_3 + 8) >> 1) + 1,local_res18);
  if (local_res18[0] != 0) {
    return (char *)0x0;
  }
  local_res18[0] = FUN_1805788b0(param_2,*(undefined4 *)(param_3 + 0xc));
  if (local_res18[0] == 0) {
    local_res18[0] = FUN_180577bf0(param_2,*(undefined2 *)(param_3 + 8));
    pcVar1 = local_res20;
    if (local_res18[0] == 0) {
      pcVar4 = *(char **)(param_2 + 0x38);
      uVar6 = (uint)(*(ushort *)(param_3 + 8) >> 1);
      pcVar5 = pcVar3;
      if (uVar6 != 0) {
        do {
          if ((*pcVar4 == '\0') && (iVar2 = (*pcVar1)((int)pcVar4[1]), iVar2 != 0)) {
            *pcVar5 = pcVar4[1];
            pcVar5 = pcVar5 + 1;
          }
          pcVar4 = pcVar4 + 2;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      *pcVar5 = '\0';
      FUN_180577d30(param_2);
      if (pcVar5 != pcVar3) {
        return pcVar3;
      }
    }
  }
  FUN_18057abd0(param_1,pcVar3);
  *(undefined2 *)(param_3 + 8) = 0;
  *(undefined4 *)(param_3 + 0xc) = 0;
  FUN_18057abd0(param_1,*(undefined8 *)(param_3 + 0x10));
  *(undefined8 *)(param_3 + 0x10) = 0;
  return (char *)0x0;
}



