// FUN_1801ef840 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801ef840 */

ulonglong FUN_1801ef840(undefined8 *param_1)

{
  byte *pbVar1;
  int iVar2;
  ulonglong in_RAX;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 local_18 [16];
  
  if (*(char *)(param_1 + 0x18) == '\0') {
    return in_RAX & 0xffffffffffffff00;
  }
  iVar2 = FUN_1805f68d0();
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_1808daeec == 0x7fffffff) {
    DAT_1808daeec = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  puVar5 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar5 = (undefined8 *)*param_1;
  }
  uVar4 = 0;
  uVar7 = 0xcbf29ce484222325;
  if (param_1[2] != 0) {
    do {
      pbVar1 = (byte *)((longlong)puVar5 + uVar4);
      uVar4 = uVar4 + 1;
      uVar7 = (uVar7 ^ *pbVar1) * 0x100000001b3;
    } while (uVar4 < (ulonglong)param_1[2]);
  }
  lVar3 = FUN_1801f5470(uVar4,local_18,param_1,uVar7);
  lVar6 = DAT_180bbeba8;
  if (*(longlong *)(lVar3 + 8) != 0) {
    lVar6 = *(longlong *)(lVar3 + 8);
  }
  if (((lVar6 == DAT_180bbeba8) || (*(longlong *)(lVar6 + 0x30) != param_1[0x19])) ||
     (*(longlong *)(lVar6 + 0x38) != param_1[0x1a])) {
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  FUN_1805f68fc(&DAT_1808daea0);
  return uVar4;
}



