// FUN_1803d6a10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803d6a10 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_1803d6a10(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  char *_Size;
  int iVar2;
  longlong lVar3;
  char *pcVar4;
  char **ppcVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  char *local_58 [10];
  
  local_58[8] = (char *)(DAT_1808d5f00 ^ (ulonglong)auStack_88);
  pcVar4 = (char *)param_1[1];
  lVar1 = *param_1;
  local_68 = 3;
  lVar3 = FUN_1801c56a0(lVar1,pcVar4,param_3,&DAT_180811d34);
  if (lVar3 != -1) {
    pcVar4 = pcVar4 + -(lVar3 + 1);
    *param_1 = lVar3 + 1 + lVar1;
    param_1[1] = (longlong)pcVar4;
  }
  local_58[1] = (char *)0x5;
  local_58[0] = "_help";
  ppcVar5 = local_58;
  local_58[3] = (char *)0x7;
  local_58[2] = "_helper";
  local_58[5] = (char *)0x5;
  local_58[4] = "_mesh";
  local_58[6] = "_m";
  local_58[7] = (char *)0x2;
  while ((_Size = ppcVar5[1], pcVar4 < _Size ||
         (iVar2 = memcmp(pcVar4 + (*param_1 - (longlong)_Size),*ppcVar5,(size_t)_Size), iVar2 != 0))
        ) {
    ppcVar5 = ppcVar5 + 2;
    if (ppcVar5 == local_58 + 8) {
    }
  }
  param_1[1] = param_1[1] - (longlong)ppcVar5[1];
}



