// FUN_180218a40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180218a40 */

void FUN_180218a40(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  longlong lVar2;
  int iVar3;
  ULONGLONG UVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 *local_58;
  longlong local_50;
  char *local_48;
  undefined8 local_40;
  undefined *local_38;
  
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar5 = DAT_1808e9e38;
  lVar2 = DAT_1808da460;
  if ((DAT_1808e9e38 == DAT_1808da460) && (lVar6 = DAT_180c63948, DAT_180c63948 != 0))
  goto LAB_180218bb4;
  UVar4 = GetTickCount64();
  if ((lVar5 == lVar2) && (UVar4 < DAT_180c63940)) {
    lVar6 = 0;
    goto LAB_180218bb4;
  }
  local_38 = &DAT_1808e9de0;
  iVar3 = FUN_1805f68d0(&DAT_1808e9de0);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_1808e9e2c == 0x7fffffff) {
    DAT_1808e9e2c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  uVar7 = 1000;
  if (DAT_1808e9e38 == lVar2) {
    if ((DAT_180c63948 == 0) && (DAT_180c63940 <= UVar4)) goto LAB_180218b22;
  }
  else {
    DAT_1808e9e30 = 1000;
LAB_180218b22:
    lVar5 = -1;
    do {
      local_50 = lVar5 + 1;
      pcVar1 = "lient.dll:48895C24??48897424??574883EC20488DB9????????488BF1" + lVar5;
      lVar5 = local_50;
    } while (*pcVar1 != '\0');
    local_58 = &DAT_1808247e0;
    local_48 = "patterns::econ_item_view_invalidate_description";
    local_40 = 0x2f;
    DAT_180c63948 = FUN_1800e5d20(&local_48,&local_58);
    DAT_1808e9e38 = lVar2;
    DAT_180c63940 = 0xffffffffffffffff;
    if (DAT_180c63948 == 0) {
      DAT_180c63940 = DAT_1808e9e30 + UVar4;
      uVar7 = 60000;
      if (DAT_1808e9e30 < 60000) {
        uVar7 = DAT_1808e9e30 * 2;
      }
    }
    DAT_1808e9e30 = uVar7;
  }
  lVar6 = DAT_180c63948;
  FUN_1805f68fc(&DAT_1808e9de0);
LAB_180218bb4:
  if ((param_2 != 0) && (lVar6 != 0)) {
    FUN_1801a5f80(lVar6,param_2);
  }
  return;
}



