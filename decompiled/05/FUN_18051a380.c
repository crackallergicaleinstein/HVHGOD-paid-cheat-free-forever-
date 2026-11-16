// FUN_18051a380 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18051a380 */

void FUN_18051a380(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  char *local_18;
  undefined8 local_10;
  
  lVar1 = *param_1;
  FUN_180488c60();
  local_10 = 0x11;
  local_18 = "FOV Randomization";
  uVar3 = FUN_180515fb0(&local_18);
  cVar2 = FUN_18048a250("FOV Randomization",lVar1 + 0x70,0,0x41700000,"%.1f deg",0x3f800000,1,uVar3)
  ;
  if (cVar2 != '\0') {
    FUN_18050cd00();
  }
  FUN_180516ec0("Show FOV Circle",lVar1 + 0xb00);
  FUN_180516db0("Circle Color",lVar1 + 0xb68,&DAT_18082a268,*(undefined1 *)(lVar1 + 0xb00));
  FUN_180488f10();
  return;
}



