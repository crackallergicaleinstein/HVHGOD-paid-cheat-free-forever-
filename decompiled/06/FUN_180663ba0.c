// FUN_180663ba0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180663ba0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180663ba0(void)

{
  longlong lVar1;
  char *pcStack_18;
  undefined8 uStack_10;
  
  lVar1 = DAT_180c62f50;
  if (DAT_180c62f50 == 0) {
    return;
  }
  if (DAT_180c62f50 != 0) {
    FUN_18015c010(DAT_180c62f50 + 0x6c40);
    FUN_18015c010(lVar1 + 0x1f0);
    FUN_18015c010(lVar1 + 0x1d0);
    FUN_18015c010(lVar1 + 0x1a8);
    FUN_18015c010(lVar1 + 0x88);
    FUN_180159650(lVar1 + 0x58);
    FUN_180492ae0(lVar1);
    if (DAT_180c7df30 == (undefined8 *)0x0) {
      pcStack_18 = "tier0.dll:g_pMemAlloc";
      uStack_10 = 0x15;
      DAT_180c7df30 = (undefined8 *)FUN_180451750(&pcStack_18);
    }
    (**(code **)(*(longlong *)*DAT_180c7df30 + 0x18))((longlong *)*DAT_180c7df30,lVar1);
  }
  return;
}



