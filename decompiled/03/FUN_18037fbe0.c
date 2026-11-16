// FUN_18037fbe0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18037fbe0 */

longlong FUN_18037fbe0(void)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ULONGLONG UVar4;
  longlong lVar5;
  ulonglong uVar6;
  char *local_38;
  longlong local_30;
  char *local_28;
  undefined8 local_20;
  
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar5 = DAT_1809025e0;
  lVar2 = DAT_1808da460;
  if ((DAT_1809025e0 == DAT_1808da460) && (DAT_180c70d10 != 0)) {
    return DAT_180c70d10;
  }
  UVar4 = GetTickCount64();
  if ((lVar5 == lVar2) && (UVar4 < DAT_180c70ce8)) {
    return 0;
  }
  iVar3 = FUN_1805f68d0(&DAT_180902590);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_1809025dc == 0x7fffffff) {
    DAT_1809025dc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  uVar6 = 1000;
  if (DAT_1809025e0 == lVar2) {
    if ((DAT_180c70d10 != 0) || (UVar4 < DAT_180c70ce8)) goto LAB_18037fd50;
  }
  else {
    DAT_180902580 = 1000;
  }
  lVar5 = -1;
  do {
    local_30 = lVar5 + 1;
    lVar1 = lVar5 + 1;
    lVar5 = local_30;
  } while ("scenesystem.dll:488BC4488958204C89401848895010488948085556574154415541564157488DA8????????4881EC????????440F2940"
           [lVar1] != '\0');
  local_38 = 
  "scenesystem.dll:488BC4488958204C89401848895010488948085556574154415541564157488DA8????????4881EC????????440F2940"
  ;
  local_28 = "patterns::generate_primitives";
  local_20 = 0x1d;
  DAT_180c70d10 = FUN_1800e5d20(&local_28,&local_38);
  DAT_1809025e0 = lVar2;
  DAT_180c70ce8 = 0xffffffffffffffff;
  if (DAT_180c70d10 == 0) {
    DAT_180c70ce8 = DAT_180902580 + UVar4;
    uVar6 = 60000;
    if (DAT_180902580 < 60000) {
      uVar6 = DAT_180902580 * 2;
    }
  }
  DAT_180902580 = uVar6;
LAB_18037fd50:
  lVar2 = DAT_180c70d10;
  FUN_1805f68fc(&DAT_180902590);
  return lVar2;
}



