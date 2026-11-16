// FUN_1801a7a70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801a7a70 */

void FUN_1801a7a70(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined1 local_48 [16];
  undefined1 local_38 [48];
  
  lVar3 = FUN_180141590(param_1 + 3);
  iVar1 = *(int *)(*param_1 + 4);
  if (lVar3 == 0) {
    uVar2 = 4;
    if (*(longlong *)((longlong)param_1 + (longlong)iVar1 + 0x48) != 0) {
      uVar2 = 0;
    }
    uVar2 = uVar2 | *(uint *)((longlong)param_1 + (longlong)iVar1 + 0x10) & 0x15 | 2;
    *(uint *)((longlong)param_1 + (longlong)iVar1 + 0x10) = uVar2;
    uVar2 = uVar2 & *(uint *)((longlong)param_1 + (longlong)iVar1 + 0x14);
    if (uVar2 != 0) {
      if ((uVar2 & 4) == 0) {
        pcVar5 = "ios_base::failbit set";
        if ((uVar2 & 2) == 0) {
          pcVar5 = "ios_base::eofbit set";
        }
      }
      else {
        pcVar5 = "ios_base::badbit set";
      }
      uVar4 = FUN_1801597e0(local_48,1);
      FUN_1801596c0(local_38,pcVar5,uVar4);
                    /* WARNING: Subroutine does not return */
      FUN_180606630(local_38,&DAT_1808d0f18);
    }
  }
  else {
    uVar2 = 4;
    if (*(longlong *)((longlong)param_1 + (longlong)iVar1 + 0x48) != 0) {
      uVar2 = 0;
    }
    *(uint *)((longlong)param_1 + (longlong)iVar1 + 0x10) = uVar2;
    if ((*(uint *)((longlong)param_1 + (longlong)iVar1 + 0x14) & uVar2) != 0) {
      uVar4 = FUN_1801597e0(local_48,1);
      FUN_1801596c0(local_38,"ios_base::badbit set",uVar4);
                    /* WARNING: Subroutine does not return */
      FUN_180606630(local_38,&DAT_1808d0f18);
    }
  }
  return;
}



