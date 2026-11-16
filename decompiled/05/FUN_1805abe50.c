// FUN_1805abe50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805abe50 */

int FUN_1805abe50(undefined8 param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  char *pcVar2;
  char *_Str1;
  int iVar3;
  longlong local_18 [2];
  
  iVar3 = FUN_1805ad4a0();
  if (iVar3 != 0) {
    FUN_1805abcc0(param_2);
    lVar1 = param_2 + 0xd8;
    iVar3 = FUN_1805d79b0(lVar1,param_1);
    if (((char)iVar3 == '\a') ||
       ((iVar3 != 0 && ((iVar3 = FUN_1805dae00(lVar1,param_1), (char)iVar3 == '\a' || (iVar3 != 0)))
        ))) {
LAB_1805abecf:
      FUN_1805abcc0(param_2);
      return 2;
    }
    *(undefined8 *)(param_2 + 0x120) = param_1;
    *(longlong *)(param_2 + 0xa0) = lVar1;
    iVar3 = FUN_1805ad4a0(lVar1,param_2,param_3);
    if (iVar3 != 0) goto LAB_1805abecf;
  }
  if (param_3 < 0) {
    return 0;
  }
  if ((0 < param_3) && ((short)param_3 != 0)) {
    FUN_1805abcc0(param_2);
    return 6;
  }
  pcVar2 = *(char **)(param_2 + 0x130);
  if ((((pcVar2 != (char *)0x0) && (_Str1 = *(char **)(param_2 + 0x128), _Str1 != (char *)0x0)) &&
      ((*pcVar2 + 0xb7U & 0xdf) == 0)) &&
     (((pcVar2[1] + 0xadU & 0xdf) == 0 && ((pcVar2[2] + 0xb1U & 0xdf) == 0)))) {
    pcVar2 = pcVar2 + 3;
    iVar3 = strcmp(pcVar2,"10646");
    if (((iVar3 == 0) ||
        ((iVar3 = strcmp(pcVar2,"8859"), iVar3 == 0 && (iVar3 = strcmp(_Str1,"1"), iVar3 == 0)))) ||
       ((iVar3 = strcmp(pcVar2,"646.1991"), iVar3 == 0 && (iVar3 = strcmp(_Str1,"IRV"), iVar3 == 0))
       )) {
      local_18[1] = 0x10003756e6963;
      goto LAB_1805abfbf;
    }
  }
  local_18[1] = 0;
LAB_1805abfbf:
  local_18[0] = param_2;
  iVar3 = FUN_180573150(&DAT_180673830,0,local_18,0);
  if (iVar3 != 0) {
    FUN_1805abcc0(param_2);
  }
  return iVar3;
}



