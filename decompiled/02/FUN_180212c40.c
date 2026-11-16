// FUN_180212c40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180212c40 */

void FUN_180212c40(short *param_1,short *param_2,short *param_3)

{
  short sVar1;
  int iVar2;
  undefined8 uVar3;
  char cVar4;
  short sVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  
  sVar1 = *param_1;
  sVar5 = *param_2;
  bVar8 = SBORROW2(sVar5,sVar1);
  bVar7 = (short)(sVar5 - sVar1) < 0;
  if (sVar5 == sVar1) {
    iVar2 = *(int *)(param_1 + 2);
    iVar6 = *(int *)(param_2 + 2);
    bVar8 = SBORROW4(iVar6,iVar2);
    bVar7 = iVar6 - iVar2 < 0;
    if (iVar6 != iVar2) goto LAB_180212c6f;
    cVar4 = '\0';
  }
  else {
LAB_180212c6f:
    cVar4 = -1;
    if (bVar8 == bVar7) {
      cVar4 = '\x01';
    }
  }
  if (cVar4 < '\0') {
    uVar3 = *(undefined8 *)param_2;
    *(undefined8 *)param_2 = *(undefined8 *)param_1;
    *(undefined8 *)param_1 = uVar3;
  }
  sVar1 = *param_2;
  sVar5 = *param_3;
  bVar8 = SBORROW2(sVar5,sVar1);
  bVar7 = (short)(sVar5 - sVar1) < 0;
  if (sVar5 == sVar1) {
    iVar2 = *(int *)(param_2 + 2);
    iVar6 = *(int *)(param_3 + 2);
    bVar8 = SBORROW4(iVar6,iVar2);
    bVar7 = iVar6 - iVar2 < 0;
    if (iVar6 != iVar2) goto LAB_180212c9b;
    cVar4 = '\0';
  }
  else {
LAB_180212c9b:
    cVar4 = -1;
    if (bVar8 == bVar7) {
      cVar4 = '\x01';
    }
  }
  if (-1 < cVar4) {
    return;
  }
  uVar3 = *(undefined8 *)param_3;
  *(undefined8 *)param_3 = *(undefined8 *)param_2;
  *(undefined8 *)param_2 = uVar3;
  sVar1 = *param_1;
  sVar5 = (short)uVar3;
  bVar8 = SBORROW2(sVar5,sVar1);
  bVar7 = (short)(sVar5 - sVar1) < 0;
  if (sVar5 == sVar1) {
    iVar2 = *(int *)(param_1 + 2);
    iVar6 = (int)((ulonglong)uVar3 >> 0x20);
    bVar8 = SBORROW4(iVar6,iVar2);
    bVar7 = iVar6 - iVar2 < 0;
    if (iVar6 == iVar2) {
      cVar4 = '\0';
      goto LAB_180212ccc;
    }
  }
  cVar4 = -1;
  if (bVar8 == bVar7) {
    cVar4 = '\x01';
  }
LAB_180212ccc:
  if (cVar4 < '\0') {
    *(undefined8 *)param_2 = *(undefined8 *)param_1;
    *(undefined8 *)param_1 = uVar3;
  }
  return;
}



