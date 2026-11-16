// FUN_18056f5a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18056f5a0 */

undefined4 * FUN_18056f5a0(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  
  lVar9 = *param_1;
  lVar8 = (param_1[1] - lVar9) / 0x68;
  if (lVar8 == 0x276276276276276) {
                    /* WARNING: Subroutine does not return */
    FUN_1801136f0();
  }
  uVar1 = lVar8 + 1;
  uVar2 = (param_1[2] - lVar9) / 0x68;
  if (0x276276276276276 - (uVar2 >> 1) < uVar2) {
    uVar7 = 0x276276276276276;
  }
  else {
    uVar2 = (uVar2 >> 1) + uVar2;
    uVar7 = uVar1;
    if (uVar1 <= uVar2) {
      uVar7 = uVar2;
    }
    if (0x276276276276276 < uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
  }
  puVar6 = (undefined4 *)FUN_18015bca0(uVar7 * 0x68);
  puVar11 = puVar6 + ((param_2 - lVar9) / 0x68) * 0x1a;
  *puVar11 = *param_3;
  puVar11[1] = param_3[1];
  *(undefined1 (*) [16])(puVar11 + 2) = (undefined1  [16])0x0;
  *(undefined8 *)(puVar11 + 6) = 0;
  *(undefined8 *)(puVar11 + 8) = 0;
  uVar3 = *(undefined8 *)(param_3 + 4);
  uVar4 = *(undefined8 *)(param_3 + 6);
  uVar5 = *(undefined8 *)(param_3 + 8);
  *(undefined8 *)(puVar11 + 2) = *(undefined8 *)(param_3 + 2);
  *(undefined8 *)(puVar11 + 4) = uVar3;
  *(undefined8 *)(puVar11 + 6) = uVar4;
  *(undefined8 *)(puVar11 + 8) = uVar5;
  *(undefined8 *)(param_3 + 8) = 0xf;
  *(undefined1 *)(param_3 + 2) = 0;
  *(undefined8 *)(param_3 + 6) = 0;
  *(undefined1 (*) [16])(puVar11 + 10) = (undefined1  [16])0x0;
  *(undefined8 *)(puVar11 + 0xe) = 0;
  *(undefined8 *)(puVar11 + 0x10) = 0;
  uVar3 = *(undefined8 *)(param_3 + 0xc);
  uVar4 = *(undefined8 *)(param_3 + 0xe);
  uVar5 = *(undefined8 *)(param_3 + 0x10);
  *(undefined8 *)(puVar11 + 10) = *(undefined8 *)(param_3 + 10);
  *(undefined8 *)(puVar11 + 0xc) = uVar3;
  *(undefined8 *)(puVar11 + 0xe) = uVar4;
  *(undefined8 *)(puVar11 + 0x10) = uVar5;
  *(undefined8 *)(param_3 + 0x10) = 0xf;
  *(undefined1 *)(param_3 + 10) = 0;
  *(undefined8 *)(param_3 + 0xe) = 0;
  *(undefined1 (*) [16])(puVar11 + 0x12) = (undefined1  [16])0x0;
  *(undefined8 *)(puVar11 + 0x16) = 0;
  *(undefined8 *)(puVar11 + 0x18) = 0;
  uVar3 = *(undefined8 *)(param_3 + 0x14);
  uVar4 = *(undefined8 *)(param_3 + 0x16);
  uVar5 = *(undefined8 *)(param_3 + 0x18);
  *(undefined8 *)(puVar11 + 0x12) = *(undefined8 *)(param_3 + 0x12);
  *(undefined8 *)(puVar11 + 0x14) = uVar3;
  *(undefined8 *)(puVar11 + 0x16) = uVar4;
  *(undefined8 *)(puVar11 + 0x18) = uVar5;
  *(undefined1 *)(param_3 + 0x12) = 0;
  *(undefined8 *)(param_3 + 0x16) = 0;
  *(undefined8 *)(param_3 + 0x18) = 0xf;
  lVar8 = param_1[1];
  lVar9 = *param_1;
  puVar10 = puVar6;
  if (param_2 != lVar8) {
    FUN_18056fed0(lVar9,param_2,puVar6);
    lVar8 = param_1[1];
    lVar9 = param_2;
    puVar10 = puVar11 + 0x1a;
  }
  FUN_18056fed0(lVar9,lVar8,puVar10);
  lVar9 = *param_1;
  if (lVar9 != 0) {
    lVar8 = param_1[1];
    for (; lVar9 != lVar8; lVar9 = lVar9 + 0x68) {
      FUN_18015c010(lVar9 + 0x48);
      FUN_18015c010(lVar9 + 0x28);
      FUN_18015c010(lVar9 + 8);
    }
    lVar9 = *param_1;
    lVar8 = lVar9;
    if ((0xfff < (ulonglong)(((param_1[2] - lVar9) / 0x68) * 0x68)) &&
       (lVar8 = *(longlong *)(lVar9 + -8), 0x1f < (lVar9 - lVar8) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(lVar8);
  }
  *param_1 = (longlong)puVar6;
  param_1[1] = (longlong)(puVar6 + uVar1 * 0x1a);
  param_1[2] = (longlong)(puVar6 + uVar7 * 0x1a);
  return puVar11;
}



