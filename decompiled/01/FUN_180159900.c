// FUN_180159900 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180159900 */

void FUN_180159900(longlong param_1,uint param_2,char param_3)

{
  undefined8 uVar1;
  uint uVar2;
  char *pcVar3;
  undefined1 local_48 [16];
  undefined1 local_38 [48];
  
  *(uint *)(param_1 + 0x10) = param_2 & 0x17;
  uVar2 = param_2 & 0x17 & *(uint *)(param_1 + 0x14);
  if (uVar2 == 0) {
    return;
  }
  if (param_3 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_180606630(0,0);
  }
  if ((uVar2 & 4) == 0) {
    pcVar3 = "ios_base::failbit set";
    if ((uVar2 & 2) == 0) {
      pcVar3 = "ios_base::eofbit set";
    }
  }
  else {
    pcVar3 = "ios_base::badbit set";
  }
  uVar1 = FUN_1801597e0(local_48,1);
  FUN_1801596c0(local_38,pcVar3,uVar1);
                    /* WARNING: Subroutine does not return */
  FUN_180606630(local_38,&DAT_1808d0f18);
}



