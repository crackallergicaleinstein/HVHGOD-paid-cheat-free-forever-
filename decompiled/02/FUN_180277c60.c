// FUN_180277c60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180277c60 */

undefined8 FUN_180277c60(void)

{
  undefined8 uVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  ULONGLONG UVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auVar10 [64];
  undefined8 local_68;
  char *local_58;
  longlong local_50;
  char *local_48;
  undefined8 local_40;
  
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar6 = DAT_1808f0330;
  lVar7 = DAT_1808da460;
  if ((DAT_1808f0330 == DAT_1808da460) && (lVar8 = DAT_180c64c88, DAT_180c64c88 != 0))
  goto LAB_180277de1;
  UVar5 = GetTickCount64();
  if ((lVar6 == lVar7) && (UVar5 < DAT_180c64c90)) {
    lVar8 = 0;
    goto LAB_180277de1;
  }
  local_68 = &DAT_1808f0290;
  iVar4 = FUN_1805f68d0(&DAT_1808f0290);
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_1808f02dc == 0x7fffffff) {
    DAT_1808f02dc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  uVar9 = 1000;
  if (DAT_1808f0330 == lVar7) {
    if ((DAT_180c64c88 == 0) && (DAT_180c64c90 <= UVar5)) goto LAB_180277d47;
  }
  else {
    DAT_1808f0280 = 1000;
LAB_180277d47:
    lVar6 = -1;
    do {
      local_50 = lVar6 + 1;
      lVar8 = lVar6 + 1;
      lVar6 = local_50;
    } while ("client.dll:486391????????488B818803000085D278104883FA02730AF30F10849050070000C3F30F108050070000C3"
             [lVar8] != '\0');
    local_58 = 
    "client.dll:486391????????488B818803000085D278104883FA02730AF30F10849050070000C3F30F108050070000C3"
    ;
    local_48 = "patterns::get_spread";
    local_40 = 0x14;
    DAT_180c64c88 = FUN_1800e5d20(&local_48,&local_58);
    DAT_1808f0330 = lVar7;
    DAT_180c64c90 = 0xffffffffffffffff;
    if (DAT_180c64c88 == 0) {
      DAT_180c64c90 = DAT_1808f0280 + UVar5;
      uVar9 = 60000;
      if (DAT_1808f0280 < 60000) {
        uVar9 = DAT_1808f0280 * 2;
      }
    }
    DAT_1808f0280 = uVar9;
  }
  lVar8 = DAT_180c64c88;
  FUN_1805f68fc(&DAT_1808f0290);
LAB_180277de1:
  uVar1 = DAT_180cc9330;
  cVar2 = FUN_1804513c0(lVar8,1,2);
  if (cVar2 != '\0') {
    lVar7 = FUN_18017ea70();
    *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
    FUN_180241550(&local_68,lVar8,uVar1);
    lVar7 = FUN_18017ea70();
    if (*(int *)(lVar7 + 4) != 0) {
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
    }
    if (local_68._4_1_ != '\0') {
      auVar10 = ZEXT464((uint)local_68);
      sVar3 = thunk_FUN_180624430((ulonglong)local_68 & 0xffffffff);
      if ((sVar3 < 1) && (0.0 <= auVar10._0_4_)) {
        return auVar10._0_8_;
      }
    }
  }
  return SUB648(ZEXT464(0x7fc00000),0);
}



