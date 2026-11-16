// FUN_1801efaa0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801efaa0 */

ulonglong FUN_1801efaa0(undefined8 *param_1)

{
  uint uVar1;
  byte *pbVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong local_38;
  undefined1 local_30 [24];
  
  uVar5 = FUN_1801ef840();
  if ((((char)uVar5 == '\0') || (uVar5 = FUN_1801ef550(param_1), (char)uVar5 == '\0')) ||
     (uVar5 = 0, DAT_180bbe88d != '\0')) goto LAB_1801efc5b;
  puVar8 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar8 = (undefined8 *)*param_1;
  }
  uVar11 = 0xcbf29ce484222325;
  uVar5 = 0;
  if (param_1[2] != 0) {
    do {
      pbVar2 = (byte *)((longlong)puVar8 + uVar5);
      uVar5 = uVar5 + 1;
      uVar11 = (uVar11 ^ *pbVar2) * 0x100000001b3;
    } while (uVar5 < (ulonglong)param_1[2]);
  }
  uVar5 = FUN_1801f5550(uVar5,local_30,param_1,uVar11);
  lVar10 = DAT_180bbeb68;
  if (*(longlong *)(uVar5 + 8) != 0) {
    lVar10 = *(longlong *)(uVar5 + 8);
  }
  if (((lVar10 == DAT_180bbeb68) || (*(char *)(lVar10 + 0x61) == '\0')) ||
     ((uVar5 = param_1[0x19], *(ulonglong *)(lVar10 + 0x40) != uVar5 ||
      (uVar5 = param_1[0x1a], *(ulonglong *)(lVar10 + 0x48) != uVar5)))) goto LAB_1801efc5b;
  lVar7 = *(longlong *)(lVar10 + 0x50);
  lVar6 = FUN_18017ea70();
  *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
  bVar3 = false;
  if (lVar7 != 0) {
    local_38 = 0;
    cVar4 = FUN_1804514f0(&local_38,lVar7,8);
    if (cVar4 == '\0') {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
  }
  uVar11 = local_38;
  uVar5 = FUN_18017ea70();
  if (*(int *)(uVar5 + 4) != 0) {
    *(int *)(uVar5 + 4) = *(int *)(uVar5 + 4) + -1;
  }
  if (bVar3) {
    if (uVar11 == 0) goto LAB_1801efc3a;
    lVar7 = FUN_18017ea70();
    *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
    if (uVar11 + 0x280 == 0) {
      bVar3 = false;
    }
    else {
      local_38 = local_38 & 0xffffffff00000000;
      cVar4 = FUN_1804514f0(&local_38,uVar11 + 0x280,4);
      if (cVar4 == '\0') {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
    }
    iVar9 = (int)local_38;
    uVar5 = FUN_18017ea70();
    if (*(int *)(uVar5 + 4) != 0) {
      *(int *)(uVar5 + 4) = *(int *)(uVar5 + 4) + -1;
    }
    if (!bVar3) {
      iVar9 = 0;
    }
  }
  else {
    uVar11 = 0;
LAB_1801efc3a:
    iVar9 = 0;
  }
  if (uVar11 == *(ulonglong *)(lVar10 + 0x58)) {
    uVar1 = iVar9 - 1;
    uVar5 = (ulonglong)uVar1;
    if (uVar1 < 0x40) {
      return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
    }
  }
LAB_1801efc5b:
  return uVar5 & 0xffffffffffffff00;
}



