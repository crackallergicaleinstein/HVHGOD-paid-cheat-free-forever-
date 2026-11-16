// FUN_1800e5780 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800e5780 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800e5780(void)

{
  longlong lVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  DWORD DVar5;
  ULONGLONG UVar6;
  longlong lVar7;
  undefined1 auStack_848 [32];
  undefined *local_828;
  undefined1 local_818 [2048];
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_848;
  if (((DAT_180bb8ad0 & 1) == 0) && (UVar6 = GetTickCount64(), 999 < UVar6 - _DAT_180bbe870)) {
    _DAT_180bbe870 = UVar6;
    cVar2 = FUN_180167480(&DAT_180bb8af0,0);
    if ((DAT_180cce330 & 1) == 0) {
      DAT_180cce330 = DAT_180cce330 | 1;
      atexit(FUN_180662340);
    }
    local_828 = &DAT_1808da3c0;
    iVar4 = FUN_1805f68d0(&DAT_1808da3c0);
    lVar1 = DAT_1808da448;
    if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1808da40c == 0x7fffffff) {
      DAT_1808da40c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    lVar7 = FUN_18003b030();
    if ((lVar7 != lVar1) && (cVar3 = FUN_1801c9570(&DAT_1808da3c0,0), cVar3 == '\0')) {
      DAT_1808da459 = 0;
    }
    FUN_1805f68fc(&DAT_1808da3c0);
    if (cVar2 != '\0') {
      DVar5 = GetCurrentProcessId();
      cVar2 = FUN_180166f60(&DAT_180bb8af0,DVar5);
      if (cVar2 != '\0') {
        if ((DAT_180cce330 & 1) == 0) {
          DAT_180cce330 = DAT_180cce330 | 1;
          atexit(FUN_180662340);
        }
        cVar2 = FUN_1801cb530(&DAT_1808da3c0);
        if (cVar2 != '\0') {
          DAT_180bb9048 = 1;
          DAT_180bb9049 = 0;
          FUN_1800e4880(0);
        }
      }
    }
    DAT_180bb9048 = 0;
    if (DAT_180bb9049 == '\0') {
      FUN_1800abea0();
      FUN_1800e1d10();
      DAT_180bb9049 = '\x01';
      FUN_18041f290();
      FUN_18063ab10(local_818,0,0x800);
      FUN_18015ad60(local_818,0x800,0xffffffffffffffff,
                    "HVHGODS loader lease expired; all configurable features were disabled");
      FUN_1800a9e50(4,local_818);
    }
  }
}



