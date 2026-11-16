// FUN_18026cb10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18026cb10 */

longlong FUN_18026cb10(void)

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
  lVar5 = DAT_1808f1ba0;
  lVar2 = DAT_1808da460;
  if ((DAT_1808f1ba0 == DAT_1808da460) && (DAT_180c650f8 != 0)) {
    return DAT_180c650f8;
  }
  UVar4 = GetTickCount64();
  if ((lVar5 == lVar2) && (UVar4 < DAT_180c650e8)) {
    return 0;
  }
  iVar3 = FUN_1805f68d0(&DAT_1808f1b40);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_1808f1b8c == 0x7fffffff) {
    DAT_1808f1b8c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  uVar6 = 1000;
  if (DAT_1808f1ba0 == lVar2) {
    if ((DAT_180c650f8 != 0) || (UVar4 < DAT_180c650e8)) goto LAB_18026cc80;
  }
  else {
    DAT_1808f1b90 = 1000;
  }
  lVar5 = -1;
  do {
    local_30 = lVar5 + 1;
    lVar1 = lVar5 + 1;
    lVar5 = local_30;
  } while ("client.dll:48895C24084889742410574883EC2033F6488DB9381C000089B1201C0000488BD939B1301C0000"
           [lVar1] != '\0');
  local_38 = 
  "client.dll:48895C24084889742410574883EC2033F6488DB9381C000089B1201C0000488BD939B1301C0000";
  local_28 = "patterns::trace_data_destroy";
  local_20 = 0x1c;
  DAT_180c650f8 = FUN_1800e5d20(&local_28,&local_38);
  DAT_1808f1ba0 = lVar2;
  DAT_180c650e8 = 0xffffffffffffffff;
  if (DAT_180c650f8 == 0) {
    DAT_180c650e8 = DAT_1808f1b90 + UVar4;
    uVar6 = 60000;
    if (DAT_1808f1b90 < 60000) {
      uVar6 = DAT_1808f1b90 * 2;
    }
  }
  DAT_1808f1b90 = uVar6;
LAB_18026cc80:
  lVar2 = DAT_180c650f8;
  FUN_1805f68fc(&DAT_1808f1b40);
  return lVar2;
}



