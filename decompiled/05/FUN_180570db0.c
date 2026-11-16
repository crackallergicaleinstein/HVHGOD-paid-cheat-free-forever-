// FUN_180570db0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180570db0 */

undefined8 FUN_180570db0(undefined8 param_1,int *param_2)

{
  char *pcVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  pcVar1 = "ct_logo";
  if (*param_2 != 0) {
    pcVar1 = "t_logo";
  }
  local_28 = (undefined1  [16])0x0;
  local_18 = (undefined1  [16])0x0;
  lVar3 = -1;
  do {
    lVar3 = lVar3 + 1;
  } while (pcVar1[lVar3] != '\0');
  uVar4 = FUN_18015ba30(local_28,pcVar1);
  puVar2 = (undefined8 *)FUN_1803db750(uVar4,local_28,0x3fc00000);
  FUN_18015c010(local_28);
  if (puVar2 == (undefined8 *)0x0) {
    return 0;
  }
  return *puVar2;
}



