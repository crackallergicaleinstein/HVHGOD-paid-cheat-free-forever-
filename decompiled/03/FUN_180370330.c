// FUN_180370330 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180370330 */

void FUN_180370330(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,int param_5
                  )

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  
  lVar3 = (longlong)param_5;
  lVar1 = lVar3 + param_2;
  cVar2 = FUN_180114040(lVar1,lVar3 + param_1);
  if (cVar2 < '\0') {
    FUN_180370220(param_2,param_1);
  }
  cVar2 = FUN_180114040(lVar3 + param_3,lVar1);
  if (cVar2 < '\0') {
    FUN_180370220(param_3,param_2);
    cVar2 = FUN_180114040(lVar1,lVar3 + param_1);
    if (cVar2 < '\0') {
      FUN_180370220(param_2,param_1);
    }
  }
  return;
}



