// FUN_1801ef550 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801ef550 */

undefined8 FUN_1801ef550(longlong param_1)

{
  undefined8 *puVar1;
  byte *pbVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  undefined1 local_18 [16];
  
  iVar4 = FUN_1805f68d0();
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_1808daeec == 0x7fffffff) {
    DAT_1808daeec = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  puVar1 = (undefined8 *)(param_1 + 0x80);
  puVar7 = puVar1;
  if (7 < *(ulonglong *)(param_1 + 0x98)) {
    puVar7 = (undefined8 *)*puVar1;
  }
  uVar6 = 0;
  uVar10 = 0xcbf29ce484222325;
  uVar3 = *(longlong *)(param_1 + 0x90) * 2;
  if (uVar3 != 0) {
    do {
      pbVar2 = (byte *)((longlong)puVar7 + uVar6);
      uVar6 = uVar6 + 1;
      uVar10 = (uVar10 ^ *pbVar2) * 0x100000001b3;
    } while (uVar6 < uVar3);
  }
  lVar5 = FUN_1801f3be0(uVar6,local_18,puVar1,uVar10);
  lVar8 = DAT_180bbeac8;
  if (*(longlong *)(lVar5 + 8) != 0) {
    lVar8 = *(longlong *)(lVar5 + 8);
  }
  if ((lVar8 == DAT_180bbeac8) || (*(char *)(lVar8 + 0x30) == '\0')) {
    uVar9 = 0;
  }
  else {
    uVar9 = 1;
  }
  FUN_1805f68fc(&DAT_1808daea0);
  return uVar9;
}



