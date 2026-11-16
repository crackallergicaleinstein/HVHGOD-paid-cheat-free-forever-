// FUN_180152460 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180152460 */

longlong FUN_180152460(longlong *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  char *pcVar4;
  longlong lVar5;
  undefined8 local_10;
  
  if (param_1[1] == param_1[2]) {
    uVar1 = *param_2;
    FUN_180111d10(&local_10);
    puVar2 = (undefined1 *)*param_1;
    *puVar2 = uVar1;
    uVar3 = *(undefined8 *)(puVar2 + 8);
    *(undefined8 *)(puVar2 + 8) = local_10;
    local_10 = uVar3;
    FUN_1801409d0(&local_10);
    return *param_1;
  }
  pcVar4 = *(char **)(param_1[2] + -8);
  if (*pcVar4 != '\x02') {
    uVar1 = *param_2;
    FUN_180111d10(&local_10);
    puVar2 = (undefined1 *)param_1[4];
    *puVar2 = uVar1;
    uVar3 = *(undefined8 *)(puVar2 + 8);
    *(undefined8 *)(puVar2 + 8) = local_10;
    local_10 = uVar3;
    FUN_1801409d0(&local_10);
    return param_1[4];
  }
  lVar5 = *(longlong *)(pcVar4 + 8);
  puVar2 = *(undefined1 **)(lVar5 + 8);
  if (puVar2 == *(undefined1 **)(lVar5 + 0x10)) {
    FUN_180157af0(lVar5,puVar2,param_2);
  }
  else {
    *puVar2 = *param_2;
    FUN_180111d10(puVar2 + 8);
    *(longlong *)(lVar5 + 8) = *(longlong *)(lVar5 + 8) + 0x10;
  }
  return *(longlong *)(*(longlong *)(*(longlong *)(param_1[2] + -8) + 8) + 8) + -0x10;
}



