// FUN_1804aad60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804aad60 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804aad60(undefined2 *param_1,int param_2,undefined8 *param_3,undefined8 *param_4,
                  char param_5)

{
  longlong lVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  int *piVar5;
  longlong lVar6;
  byte bVar7;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  int local_38;
  int iStack_34;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_1808d5f00 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  lVar6 = DAT_180bb8ae8;
  if ((param_5 == '\0') || ((*(byte *)(DAT_180bb8ae8 + 0x1e80) & 0x40) != 0)) {
    bVar7 = 0;
  }
  else {
    bVar7 = 1;
  }
  local_30 = *param_3;
  local_28 = *param_4;
  *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
  lVar1 = *(longlong *)(lVar6 + 0x14d0);
  if ((DAT_180cd6fa8 & 1) == 0) {
    DAT_180cd6fa8 = DAT_180cd6fa8 | 1;
    atexit(FUN_180663ad0);
    lVar6 = DAT_180bb8ae8;
  }
  iVar4 = *(int *)(lVar6 + 4);
  if ((iVar4 != DAT_180b0a5c0) && (DAT_180b0a5c0 = iVar4, DAT_180c7dfd0 != DAT_180c7dfd8)) {
    DAT_180c7dfd8 = DAT_180c7dfd0;
  }
  if (lVar1 == 0) {
    local_38 = 0;
  }
  else {
    local_38 = *(int *)(lVar1 + 0x10);
  }
  piVar5 = DAT_180c7dfd0;
  iStack_34 = param_2;
  if (DAT_180c7dfd0 != DAT_180c7dfd8) {
    do {
      if ((*piVar5 == local_38) && (piVar5[1] == param_2)) break;
      piVar5 = piVar5 + 2;
    } while (piVar5 != DAT_180c7dfd8);
    if (piVar5 != DAT_180c7dfd8) {
      iVar4 = DAT_180c7dfe8 + 1;
      if (0x27 < DAT_180c7dfe8) {
        DAT_180c7dfe8 = iVar4;
      }
      DAT_180c7dfe8 = iVar4;
      if (lVar1 == 0) {
        FUN_1804aaaf0(&DAT_1808595bc,param_2);
      }
      FUN_1804aaaf0(*(undefined8 *)(lVar1 + 8),param_2);
    }
  }
  if (DAT_180c7dfd8 == DAT_180c7dfe0) {
    FUN_1804aed50(local_38,DAT_180c7dfd8,&local_38);
  }
  else {
    *(ulonglong *)DAT_180c7dfd8 = CONCAT44(param_2,local_38);
    DAT_180c7dfd8 = DAT_180c7dfd8 + 2;
  }
  cVar2 = FUN_1804c6190(&local_30,param_2,0,(bVar7 ^ 1) << 6);
  if ((cVar2 != '\0') && (bVar7 != 0)) {
    local_48 = 0;
    uVar3 = FUN_1804f4d40(&local_30,param_2,param_1,(longlong)param_1 + 1);
    *(undefined1 *)(param_1 + 1) = uVar3;
  }
}



