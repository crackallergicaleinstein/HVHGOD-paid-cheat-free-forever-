// FUN_18015c3e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18015c3e0 */

void FUN_18015c3e0(longlong *param_1)

{
  uint *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  char *pcVar4;
  uint uVar5;
  undefined1 local_48 [16];
  undefined1 local_38 [48];
  
  param_1 = (longlong *)*param_1;
  if (param_1 != (longlong *)0x0) {
    lVar3 = (longlong)*(int *)(*param_1 + 4);
    puVar1 = (uint *)(lVar3 + 0x10 + (longlong)param_1);
    *puVar1 = *puVar1 & 1;
    uVar5 = 4;
    if (*(longlong *)(lVar3 + 0x48 + (longlong)param_1) != 0) {
      uVar5 = 0;
    }
    puVar1 = (uint *)(lVar3 + 0x10 + (longlong)param_1);
    *puVar1 = *puVar1 | uVar5;
    uVar5 = *(uint *)(lVar3 + 0x10 + (longlong)param_1) &
            *(uint *)(lVar3 + 0x14 + (longlong)param_1);
    if (uVar5 != 0) {
      uVar2 = FUN_1801597e0(local_48,1);
      pcVar4 = "ios_base::badbit set";
      if ((uVar5 & 4) == 0) {
        pcVar4 = "ios_base::eofbit set";
      }
      FUN_1801596c0(local_38,pcVar4,uVar2);
                    /* WARNING: Subroutine does not return */
      FUN_180606630(local_38,&DAT_1808d0f18);
    }
  }
  return;
}



