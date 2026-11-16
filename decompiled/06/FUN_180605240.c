// FUN_180605240 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180605240 */

void FUN_180605240(undefined8 param_1,char *param_2,char *param_3)

{
  size_t sVar1;
  size_t sVar2;
  size_t sVar3;
  longlong lVar4;
  
  sVar1 = strlen(param_2);
  sVar2 = strlen(param_3);
  lVar4 = 0;
  while( true ) {
    lVar4 = FUN_1800f5500(param_1,param_2,lVar4);
    if (lVar4 == -1) break;
    sVar3 = strlen(param_3);
    FUN_1801b3ca0(param_1,lVar4,sVar1,param_3,sVar3);
    lVar4 = sVar2 + lVar4;
  }
  return;
}



