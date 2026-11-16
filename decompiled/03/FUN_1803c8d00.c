// FUN_1803c8d00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803c8d00 */

void FUN_1803c8d00(longlong *param_1,undefined1 param_2,byte param_3,char param_4,undefined8 param_5
                  )

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 local_28;
  undefined1 uStack_27;
  undefined6 uStack_26;
  undefined8 uStack_20;
  undefined4 local_18;
  
  puVar1 = (undefined8 *)*param_1;
  uStack_20 = puVar1[1];
  local_18 = *(undefined4 *)(puVar1 + 2);
  uStack_26 = (undefined6)((ulonglong)*puVar1 >> 0x10);
  _local_28 = CONCAT11(param_2,(char)*puVar1);
  if ((*(char *)param_1[4] == '\0') && (param_4 == '\0')) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  cVar2 = FUN_1803c5bb0(param_1[2],&local_28,*(undefined1 *)param_1[3],uVar3,param_3 | 0x100,param_5
                       );
  if ((cVar2 == '\0') && (*(char *)param_1[1] == '\0')) {
    *(char *)param_1[1] = '\0';
    return;
  }
  *(undefined1 *)param_1[1] = 1;
  return;
}



