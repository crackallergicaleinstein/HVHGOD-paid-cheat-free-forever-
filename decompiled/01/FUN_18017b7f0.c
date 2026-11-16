// FUN_18017b7f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18017b7f0 */

void FUN_18017b7f0(longlong *param_1,ulonglong param_2)

{
  undefined1 (*pauVar1) [16];
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 (*pauVar8) [16];
  undefined8 *puVar9;
  
  lVar2 = *param_1;
  if ((ulonglong)(param_1[2] - lVar2 >> 5) < param_2) {
    if (0x7ffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_1801136f0();
    }
    lVar3 = param_1[1];
    pauVar8 = (undefined1 (*) [16])FUN_18015bca0(param_2 << 5);
    puVar4 = (undefined8 *)param_1[1];
    pauVar1 = pauVar8;
    for (puVar9 = (undefined8 *)*param_1; puVar9 != puVar4; puVar9 = puVar9 + 4) {
      *pauVar1 = (undefined1  [16])0x0;
      *(undefined8 *)pauVar1[1] = 0;
      *(undefined8 *)(pauVar1[1] + 8) = 0;
      uVar5 = puVar9[1];
      uVar6 = puVar9[2];
      uVar7 = puVar9[3];
      *(undefined8 *)*pauVar1 = *puVar9;
      *(undefined8 *)(*pauVar1 + 8) = uVar5;
      *(undefined8 *)pauVar1[1] = uVar6;
      *(undefined8 *)(pauVar1[1] + 8) = uVar7;
      *(undefined1 *)puVar9 = 0;
      puVar9[2] = 0;
      puVar9[3] = 0xf;
      pauVar1 = pauVar1 + 2;
    }
    FUN_180157360(param_1,pauVar8,lVar3 - lVar2 >> 5,param_2);
  }
  return;
}



