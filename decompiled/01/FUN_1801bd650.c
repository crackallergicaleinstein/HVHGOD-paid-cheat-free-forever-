// FUN_1801bd650 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801bd650 */

undefined8 * FUN_1801bd650(undefined8 *param_1,byte *param_2,byte *param_3,ulonglong *param_4)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  byte *pbVar4;
  ulonglong uVar5;
  
  uVar5 = 0;
  bVar2 = false;
  pbVar4 = param_2;
  bVar3 = false;
  if (param_2 != param_3) {
    do {
      bVar2 = bVar3;
      bVar1 = (&DAT_1807c5b10)[*pbVar4];
      if (9 < bVar1) break;
      if ((uVar5 < 0x1999999999999999) || ((uVar5 == 0x1999999999999999 && ((ulonglong)bVar1 < 6))))
      {
        uVar5 = (ulonglong)bVar1 + uVar5 * 10;
      }
      else {
        bVar2 = true;
      }
      pbVar4 = pbVar4 + 1;
      bVar3 = bVar2;
    } while (pbVar4 != param_3);
  }
  if (pbVar4 == param_2) {
    *(undefined4 *)(param_1 + 1) = 0x16;
    *param_1 = param_2;
    return param_1;
  }
  if (!bVar2) {
    *param_4 = uVar5;
    *(undefined4 *)(param_1 + 1) = 0;
    *param_1 = pbVar4;
    return param_1;
  }
  *(undefined4 *)(param_1 + 1) = 0x22;
  *param_1 = pbVar4;
  return param_1;
}



