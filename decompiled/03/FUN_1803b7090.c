// FUN_1803b7090 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803b7090 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1803b7090(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 uVar3;
  int iVar4;
  DWORD DVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 local_res10 [8];
  char *local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = "GPU_PROBE_CPU_STATUS";
  FUN_18017bf40(&local_10);
  iVar4 = FUN_1805f68d0(&DAT_180902da0);
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_180902dec == 0x7fffffff) {
    DAT_180902dec = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  if (DAT_180902df8 != 0) {
    DVar5 = GetCurrentThreadId();
    lVar2 = DAT_180902df8;
    if (DAT_180902e00 == DVar5) {
      plVar6 = (longlong *)FUN_18017bf40(local_res10);
      lVar1 = *plVar6;
      if ((uint)DAT_180903018 < 6) {
        lVar7 = (ulonglong)(uint)DAT_180903018 * 0x58;
        if ((*(char *)(lVar7 + 0x180902e5c) == '\0') || (*(char *)(lVar7 + 0x180902e5d) == '\0')) {
          uVar3 = 0;
        }
        else {
          uVar3 = 1;
        }
        *(undefined1 *)(lVar7 + 0x180902e5c) = uVar3;
        *(longlong *)(lVar7 + 0x180902e50) = lVar1 / 1000;
        (**(code **)(*(longlong *)lVar2 + 0xe0))(lVar2,*(undefined8 *)(lVar7 + 0x180902e20));
        (**(code **)(*(longlong *)lVar2 + 0xe0))(lVar2,*(undefined8 *)(&DAT_180902e08 + lVar7));
        *(undefined4 *)(lVar7 + 0x180902e58) = 2;
        DAT_180903018._0_4_ = 6;
      }
    }
  }
  FUN_1805f68fc(&DAT_180902da0);
  FUN_1803847d0(&local_18);
  return;
}



