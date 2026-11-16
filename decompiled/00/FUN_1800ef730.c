// FUN_1800ef730 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800ef730 */

undefined1 FUN_1800ef730(undefined8 param_1)

{
  undefined8 uVar1;
  char *pcVar2;
  char cVar3;
  undefined8 uVar4;
  undefined1 local_48 [32];
  undefined1 local_28 [32];
  
  uVar1 = FUN_1800ef8b0(local_48,param_1);
  uVar4 = FUN_1800ef7b0(local_28);
  cVar3 = FUN_1800e6ca0(uVar4,uVar1);
  while( true ) {
    if (cVar3 != '\0') {
      return 1;
    }
    pcVar2 = (char *)FUN_1800f3560(uVar4);
    if (*pcVar2 != '\x04') break;
    FUN_1800f33e0(uVar4);
    cVar3 = FUN_1800e6ca0(uVar4,uVar1);
  }
  return 0;
}



