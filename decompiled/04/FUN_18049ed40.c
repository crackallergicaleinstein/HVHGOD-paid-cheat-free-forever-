// FUN_18049ed40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18049ed40 */

void FUN_18049ed40(longlong *param_1)

{
  longlong lVar1;
  undefined1 uVar2;
  ulonglong in_stack_ffffffffffffffc8;
  char *pcVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  
  lVar1 = *param_1;
  FUN_180488c60();
  uVar5 = 0;
  FUN_1804898a0("Remove Overlay",lVar1 + 0xce9,0,1,in_stack_ffffffffffffffc8 & 0xffffffffffffff00,0)
  ;
  FUN_180489c50("Custom Lines",lVar1 + 0xcf0,lVar1 + 0xcec,0,*(undefined1 *)(lVar1 + 0xce9));
  if ((*(char *)(lVar1 + 0xce9) == '\0') || (*(char *)(lVar1 + 0xcec) == '\0')) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  pcVar3 = "%.0f%%";
  FUN_18048a250("Line Length",lVar1 + 0xd00,0x40a00000,0x42c80000,"%.0f%%",
                CONCAT44(uVar5,0x3f800000),uVar2,0);
  FUN_180488f10();
  lVar1 = *param_1;
  FUN_180488c60();
  uVar4 = (ulonglong)pcVar3 & 0xffffffffffffff00;
  FUN_1804898a0("Disable Zoom Blur",lVar1 + 0xd04,0,1,uVar4,0);
  FUN_1804898a0("Instant Unscope",lVar1 + 0xd05,0,1,uVar4 & 0xffffffffffffff00,0);
  FUN_180488f10();
  return;
}



