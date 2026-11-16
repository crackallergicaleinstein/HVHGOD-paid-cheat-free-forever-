// FUN_1804f5e70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804f5e70 */

ulonglong FUN_1804f5e70(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  char *pcVar2;
  
  pcVar2 = "#SCROLLY";
  if (param_2 == 0) {
    pcVar2 = "#SCROLLX";
  }
  uVar1 = FUN_1804b0a90(pcVar2,0,*(undefined4 *)
                                  (param_1[0x22] + -4 + (longlong)(int)param_1[0x21] * 4));
  if (*(int *)(*param_1 + 0x1534) == (int)uVar1) {
    FUN_1804cf810(uVar1 & 0xffffffff,0xb,pcVar2);
    uVar1 = uVar1 & 0xffffffff;
  }
  return uVar1;
}



