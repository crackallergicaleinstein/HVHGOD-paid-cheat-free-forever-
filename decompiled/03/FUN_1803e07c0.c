// FUN_1803e07c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803e07c0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1803e07c0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  ULONGLONG UVar5;
  longlong lVar6;
  code *pcVar7;
  ulonglong uVar8;
  char *local_58;
  longlong local_50;
  char *local_48;
  undefined8 local_40;
  undefined *local_38;
  
  uVar3 = DAT_180c71f90;
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar6 = DAT_1809ba7a0;
  lVar2 = DAT_1808da460;
  if ((DAT_1809ba7a0 == DAT_1808da460) && (pcVar7 = (code *)DAT_180c71f68, DAT_180c71f68 != 0))
  goto LAB_1803e0946;
  UVar5 = GetTickCount64();
  if ((lVar6 == lVar2) && (UVar5 < DAT_180c71f70)) {
    return;
  }
  local_38 = &DAT_1809ba7b0;
  iVar4 = FUN_1805f68d0(&DAT_1809ba7b0);
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_1809ba7fc == 0x7fffffff) {
    DAT_1809ba7fc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  uVar8 = 1000;
  if (DAT_1809ba7a0 == lVar2) {
    if ((DAT_180c71f68 == 0) && (DAT_180c71f70 <= UVar5)) goto LAB_1803e08ac;
  }
  else {
    DAT_1809ba7a8 = 1000;
LAB_1803e08ac:
    lVar6 = -1;
    do {
      local_50 = lVar6 + 1;
      lVar1 = lVar6 + 1;
      lVar6 = local_50;
    } while ("client.dll:85D275??486381"[lVar1] != '\0');
    local_58 = "client.dll:85D275??486381";
    local_48 = "patterns::set_view_angles";
    local_40 = 0x19;
    DAT_180c71f68 = FUN_1800e5d20(&local_48,&local_58);
    DAT_1809ba7a0 = lVar2;
    DAT_180c71f70 = 0xffffffffffffffff;
    if (DAT_180c71f68 == 0) {
      DAT_180c71f70 = DAT_1809ba7a8 + UVar5;
      uVar8 = 60000;
      if (DAT_1809ba7a8 < 60000) {
        uVar8 = DAT_1809ba7a8 * 2;
      }
    }
    DAT_1809ba7a8 = uVar8;
  }
  pcVar7 = (code *)DAT_180c71f68;
  FUN_1805f68fc(&DAT_1809ba7b0);
  if (pcVar7 == (code *)0x0) {
    return;
  }
LAB_1803e0946:
  (*pcVar7)(uVar3,0,param_2);
  return;
}



