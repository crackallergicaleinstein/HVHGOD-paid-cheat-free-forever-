// FUN_1801416e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801416e0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1801416e0(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  char *pcVar5;
  undefined1 local_48 [16];
  undefined1 local_38 [48];
  
  lVar4 = (longlong)*(int *)(*param_1 + 4);
  if (((*(int *)(lVar4 + 0x10 + (longlong)param_1) == 0) &&
      ((*(byte *)(lVar4 + 0x18 + (longlong)param_1) & 2) != 0)) &&
     (iVar1 = (**(code **)(**(longlong **)(lVar4 + 0x48 + (longlong)param_1) + 0x68))(), iVar1 == -1
     )) {
    lVar4 = (longlong)*(int *)(*param_1 + 4);
    uVar2 = *(uint *)(lVar4 + 0x10 + (longlong)param_1) & 0x13 | 4;
    *(uint *)(lVar4 + 0x10 + (longlong)param_1) = uVar2;
    uVar2 = uVar2 & *(uint *)(lVar4 + 0x14 + (longlong)param_1);
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
      uVar3 = FUN_1801597e0(local_48,1);
      FUN_1801596c0(local_38,pcVar5,uVar3);
                    /* WARNING: Subroutine does not return */
      FUN_180606630(local_38,&DAT_1808d0f18);
    }
  }
  return;
}



