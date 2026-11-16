// FUN_18060aa1c - decompiled reference (Ghidra). Not original source, does not compile.

/* 18060aa1c */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_18060aa1c(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5
                  ,undefined8 param_6)

{
  longlong lVar1;
  ulonglong *puVar2;
  byte bVar3;
  code *pcVar4;
  
  lVar1 = FUN_18060a750(param_6);
  if ((lVar1 == 0) || (pcVar4 = *(code **)(lVar1 + 0x3b8), pcVar4 == (code *)0x0)) {
    puVar2 = (ulonglong *)FUN_18060a7bc(&DAT_180bb1c38,param_6);
    bVar3 = (byte)DAT_1808d5f00 & 0x3f;
    pcVar4 = (code *)((*puVar2 ^ DAT_1808d5f00) >> bVar3 | (*puVar2 ^ DAT_1808d5f00) << 0x40 - bVar3
                     );
    if (pcVar4 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson(param_1,param_2,param_3,param_4,param_5);
    }
  }
  (*pcVar4)(param_1,param_2,param_3,param_4,param_5);
  return;
}



