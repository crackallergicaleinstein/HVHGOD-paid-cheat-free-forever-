// FUN_180151d10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180151d10 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180151d10(longlong param_1,undefined8 param_2,char param_3)

{
  undefined1 uVar1;
  uint uVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined1 (*pauVar5) [16];
  char *local_48;
  undefined8 local_40;
  undefined1 local_38 [48];
  
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0x201;
  *(undefined8 *)(param_1 + 0x20) = 6;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_48 = "tier0.dll:g_pMemAlloc";
    local_40 = 0x15;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_48);
  }
  pauVar5 = (undefined1 (*) [16])
            (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x10);
  if (pauVar5 == (undefined1 (*) [16])0x0) {
    pauVar5 = (undefined1 (*) [16])0x0;
  }
  else {
    *pauVar5 = (undefined1  [16])0x0;
    uVar3 = FUN_1805fbf84(1);
    *(undefined8 *)(*pauVar5 + 8) = uVar3;
  }
  *(undefined1 (**) [16])(param_1 + 0x40) = pauVar5;
  *(undefined8 *)(param_1 + 0x48) = param_2;
  *(undefined8 *)(param_1 + 0x50) = 0;
  uVar1 = FUN_180156de0(param_1,0x20);
  *(undefined1 *)(param_1 + 0x58) = uVar1;
  if (*(longlong *)(param_1 + 0x48) == 0) {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0x13;
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
    uVar2 = *(uint *)(param_1 + 0x10) & *(uint *)(param_1 + 0x14);
    if (uVar2 != 0) {
      if ((uVar2 & 4) == 0) {
        pcVar4 = "ios_base::failbit set";
        if ((uVar2 & 2) == 0) {
          pcVar4 = "ios_base::eofbit set";
        }
      }
      else {
        pcVar4 = "ios_base::badbit set";
      }
      uVar3 = FUN_1801597e0(&local_48,1);
      FUN_1801596c0(local_38,pcVar4,uVar3);
                    /* WARNING: Subroutine does not return */
      FUN_180606630(local_38,&DAT_1808d0f18);
    }
  }
  if (param_3 != '\0') {
    FUN_1805fbc00(param_1);
  }
  return;
}



