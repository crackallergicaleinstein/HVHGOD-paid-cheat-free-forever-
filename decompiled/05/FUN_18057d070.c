// FUN_18057d070 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18057d070 */

int FUN_18057d070(undefined8 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  
  lVar3 = FUN_18057d340();
  if (lVar3 == 0) {
    return 7;
  }
  iVar2 = FUN_180575750(lVar3,param_1);
  if (iVar2 == 0) {
    puVar4 = &DAT_18066c5b8;
    ppuVar5 = &PTR_DAT_18066a6c0;
    uVar1 = *param_1;
    do {
      FUN_180572e10(uVar1,puVar4);
      puVar4 = ppuVar5[1];
      ppuVar5 = ppuVar5 + 1;
    } while (puVar4 != (undefined *)0x0);
  }
  else {
    FUN_18057d330(lVar3);
  }
  FUN_18057d110(*param_1);
  return iVar2;
}



