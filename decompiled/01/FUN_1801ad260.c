// FUN_1801ad260 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801ad260 */

void FUN_1801ad260(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined1 local_48 [16];
  undefined1 local_38 [48];
  
  lVar2 = FUN_180113da0();
  if (lVar2 == 0) {
    lVar2 = (longlong)*(int *)(*param_1 + 4);
    uVar1 = 4;
    if (*(longlong *)(lVar2 + 0x48 + (longlong)param_1) != 0) {
      uVar1 = 0;
    }
    uVar1 = uVar1 | *(uint *)(lVar2 + 0x10 + (longlong)param_1) & 0x15 | 2;
    *(uint *)(lVar2 + 0x10 + (longlong)param_1) = uVar1;
    uVar1 = uVar1 & *(uint *)(lVar2 + 0x14 + (longlong)param_1);
    if (uVar1 != 0) {
      if ((uVar1 & 4) == 0) {
        pcVar4 = "ios_base::failbit set";
        if ((uVar1 & 2) == 0) {
          pcVar4 = "ios_base::eofbit set";
        }
      }
      else {
        pcVar4 = "ios_base::badbit set";
      }
      uVar3 = FUN_1801597e0(local_48,1);
      FUN_1801596c0(local_38,pcVar4,uVar3);
                    /* WARNING: Subroutine does not return */
      FUN_180606630(local_38,&DAT_1808d0f18);
    }
  }
  return;
}



