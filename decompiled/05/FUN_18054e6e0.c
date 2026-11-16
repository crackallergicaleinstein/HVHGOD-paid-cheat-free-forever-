// FUN_18054e6e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18054e6e0 */

void FUN_18054e6e0(undefined8 *param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  char *local_18;
  undefined8 local_10;
  
  lVar1 = *(longlong *)*param_1;
  FUN_180488c60();
  local_10 = 0xd;
  local_18 = "Field of View";
  uVar3 = FUN_180515fb0(&local_18);
  cVar2 = FUN_18048a250("Field of View",lVar1 + 0x288,0,0x43340000,"%.0f deg",0x3f800000,1,uVar3);
  if (cVar2 != '\0') {
    FUN_18050cd00();
  }
  FUN_180516ec0("Drop After Firing",lVar1 + 0x220);
  FUN_180488f10();
  uVar3 = param_1[1];
  FUN_180488c60();
  FUN_180516d20(uVar3);
  FUN_180488f10();
  return;
}



