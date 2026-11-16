// FUN_180601f5c - decompiled reference (Ghidra). Not original source, does not compile.

/* 180601f5c */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

longlong * FUN_180601f5c(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *local_res8;
  _Lockit local_res10 [8];
  longlong *local_res18 [2];
  
  std::_Lockit::_Lockit(local_res10,0);
  lVar4 = DAT_180bb1978;
  local_res18[0] = (longlong *)DAT_180bb1978;
  if (DAT_180bb1970 == 0) {
    std::_Lockit::_Lockit((_Lockit *)&local_res8,0);
    if (DAT_180bb1970 == 0) {
      DAT_180bb1890 = DAT_180bb1890 + 1;
      DAT_180bb1970 = (ulonglong)DAT_180bb1890;
    }
    std::_Lockit::~_Lockit((_Lockit *)&local_res8);
  }
  uVar2 = DAT_180bb1970;
  lVar3 = *(longlong *)(param_1 + 8);
  lVar1 = DAT_180bb1970 * 8;
  if (DAT_180bb1970 < *(ulonglong *)(lVar3 + 0x18)) {
    plVar5 = *(longlong **)(lVar1 + *(longlong *)(lVar3 + 0x10));
    if (plVar5 != (longlong *)0x0) goto LAB_180602053;
  }
  else {
    plVar5 = (longlong *)0x0;
  }
  if (*(char *)(lVar3 + 0x24) == '\0') {
LAB_180602008:
    if (plVar5 != (longlong *)0x0) goto LAB_180602053;
  }
  else {
    lVar3 = FUN_1805fbf7c();
    if (uVar2 < *(ulonglong *)(lVar3 + 0x18)) {
      plVar5 = *(longlong **)(lVar1 + *(longlong *)(lVar3 + 0x10));
      goto LAB_180602008;
    }
  }
  if (lVar4 == 0) {
    lVar4 = FUN_180603f3c(local_res18,param_1);
    plVar5 = local_res18[0];
    if (lVar4 == -1) {
                    /* WARNING: Subroutine does not return */
      FUN_180159f60();
    }
    local_res8 = local_res18[0];
    FUN_1805fbf40(local_res18[0]);
    (**(code **)(*plVar5 + 8))(plVar5);
    DAT_180bb1978 = (longlong)plVar5;
  }
  else {
    plVar5 = (longlong *)lVar4;
  }
LAB_180602053:
  std::_Lockit::~_Lockit(local_res10);
  return plVar5;
}



