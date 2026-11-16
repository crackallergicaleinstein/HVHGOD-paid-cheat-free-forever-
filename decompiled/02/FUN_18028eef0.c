// FUN_18028eef0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18028eef0 */

int FUN_18028eef0(undefined8 *param_1,longlong param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong *plVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong *puVar10;
  undefined8 uVar11;
  
  iVar9 = 1;
  if ((*(char *)*param_1 == '\0') || (uVar2 = *(ulonglong *)(param_2 + 0x18), uVar2 == 0)) {
LAB_18028ef77:
    bVar4 = false;
  }
  else {
    puVar10 = (ulonglong *)param_1[1];
    puVar1 = puVar10 + 0x80;
    uVar7 = 0x80;
    do {
      uVar8 = uVar7 >> 1;
      if (puVar10[uVar8] < uVar2) {
        puVar10 = puVar10 + uVar8 + 1;
        uVar8 = uVar7 + (-1 - uVar8);
      }
      uVar7 = uVar8;
    } while (0 < (longlong)uVar8);
    if ((puVar10 == puVar1) || (bVar4 = true, uVar2 < *puVar10)) goto LAB_18028ef77;
  }
  uVar11 = 0;
  if (*(longlong *)(param_2 + 0x20) != 0) {
    lVar6 = thunk_FUN_1805f8160(param_1[2],param_1[2] + 0x60);
    if (lVar6 != param_1[2] + 0x60) {
      iVar9 = 2;
      goto LAB_18028efdb;
    }
    uVar11 = *(undefined8 *)(param_2 + 0x20);
  }
  plVar3 = (longlong *)param_1[3];
  if (((*(byte *)(param_2 + 0x62) & 8) == 0) &&
     (lVar6 = thunk_FUN_1805f8160(*plVar3,*plVar3 + (longlong)*(int *)plVar3[1] * 8,uVar11),
     lVar6 == *plVar3 + (longlong)*(int *)plVar3[1] * 8)) {
    iVar9 = 0;
  }
LAB_18028efdb:
  uVar2 = *(ulonglong *)(param_2 + 0x20);
  if (uVar2 != 0) {
    uVar7 = 0;
    do {
      if (*(ulonglong *)
           (&DAT_180c66220 +
           (ulonglong)((int)((uVar2 >> 0xf ^ uVar2) >> 4) + (int)uVar7 & 0xfff) * 8) == uVar2) {
        return iVar9;
      }
    } while ((*(ulonglong *)
               (&DAT_180c66220 +
               (ulonglong)((int)((uVar2 >> 0xf ^ uVar2) >> 4) + (int)uVar7 & 0xfff) * 8) != 0) &&
            (uVar7 = uVar7 + 1, uVar7 < 0x1000));
  }
  iVar5 = 6;
  if (bVar4) {
    iVar5 = 3;
  }
  return iVar5 + iVar9;
}



