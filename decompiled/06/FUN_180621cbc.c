// FUN_180621cbc - decompiled reference (Ghidra). Not original source, does not compile.

/* 180621cbc */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180621cbc(undefined8 param_1,undefined4 param_2)

{
  code *pcVar1;
  
  if (DAT_180d060f8 == (code *)0xffffffffffffffff) {
LAB_180621d13:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  pcVar1 = DAT_180d060f8;
  if (DAT_180d060f8 == (code *)0x0) {
    pcVar1 = (code *)FUN_180621488(0x1f,"SystemFunction036",&DAT_1806b1210,"SystemFunction036");
    if (pcVar1 == (code *)0x0) goto LAB_180621d13;
  }
  (*pcVar1)(param_1,param_2);
  return;
}



