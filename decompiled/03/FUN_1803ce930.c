// FUN_1803ce930 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803ce930 */

undefined4 * FUN_1803ce930(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 *puVar12;
  
  lVar11 = *param_1;
  lVar9 = (param_2 - lVar11) / 0x12 + (param_2 - lVar11 >> 0x3f);
  lVar10 = (param_1[1] - lVar11) / 0x48;
  if (lVar10 == 0x38e38e38e38e38e) {
                    /* WARNING: Subroutine does not return */
    FUN_1801136f0();
  }
  uVar1 = lVar10 + 1;
  uVar3 = (param_1[2] - lVar11) / 0x48;
  if (0x38e38e38e38e38e - (uVar3 >> 1) < uVar3) {
    uVar8 = 0x38e38e38e38e38e;
  }
  else {
    uVar3 = (uVar3 >> 1) + uVar3;
    uVar8 = uVar1;
    if (uVar1 <= uVar3) {
      uVar8 = uVar3;
    }
    if (0x38e38e38e38e38e < uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
  }
  puVar7 = (undefined4 *)FUN_18015bca0(uVar8 * 0x48);
  puVar2 = puVar7 + ((lVar9 >> 2) - (lVar9 >> 0x3f)) * 0x12;
  *puVar2 = *param_3;
  *(undefined1 (*) [16])(puVar2 + 2) = (undefined1  [16])0x0;
  *(undefined8 *)(puVar2 + 6) = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  uVar4 = *(undefined8 *)(param_3 + 4);
  uVar5 = *(undefined8 *)(param_3 + 6);
  uVar6 = *(undefined8 *)(param_3 + 8);
  *(undefined8 *)(puVar2 + 2) = *(undefined8 *)(param_3 + 2);
  *(undefined8 *)(puVar2 + 4) = uVar4;
  *(undefined8 *)(puVar2 + 6) = uVar5;
  *(undefined8 *)(puVar2 + 8) = uVar6;
  *(undefined8 *)(param_3 + 8) = 0xf;
  *(undefined1 *)(param_3 + 2) = 0;
  *(undefined8 *)(param_3 + 6) = 0;
  *(undefined1 (*) [16])(puVar2 + 10) = (undefined1  [16])0x0;
  *(undefined8 *)(puVar2 + 0xe) = 0;
  *(undefined8 *)(puVar2 + 0x10) = 0;
  uVar4 = *(undefined8 *)(param_3 + 0xc);
  uVar5 = *(undefined8 *)(param_3 + 0xe);
  uVar6 = *(undefined8 *)(param_3 + 0x10);
  *(undefined8 *)(puVar2 + 10) = *(undefined8 *)(param_3 + 10);
  *(undefined8 *)(puVar2 + 0xc) = uVar4;
  *(undefined8 *)(puVar2 + 0xe) = uVar5;
  *(undefined8 *)(puVar2 + 0x10) = uVar6;
  *(undefined1 *)(param_3 + 10) = 0;
  *(undefined8 *)(param_3 + 0xe) = 0;
  *(undefined8 *)(param_3 + 0x10) = 0xf;
  lVar10 = param_1[1];
  lVar11 = *param_1;
  puVar12 = puVar7;
  if (param_2 != lVar10) {
    FUN_1803cee10(lVar11,param_2,puVar7);
    lVar10 = param_1[1];
    lVar11 = param_2;
    puVar12 = puVar2 + 0x12;
  }
  FUN_1803cee10(lVar11,lVar10,puVar12);
  lVar11 = *param_1;
  if (lVar11 != 0) {
    lVar10 = param_1[1];
    for (; lVar11 != lVar10; lVar11 = lVar11 + 0x48) {
      FUN_18015c010(lVar11 + 0x28);
      FUN_18015c010(lVar11 + 8);
    }
    lVar11 = *param_1;
    lVar10 = lVar11;
    if ((0xfff < (ulonglong)(((param_1[2] - lVar11) / 0x48) * 0x48)) &&
       (lVar10 = *(longlong *)(lVar11 + -8), 0x1f < (lVar11 - lVar10) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(lVar10);
  }
  *param_1 = (longlong)puVar7;
  param_1[1] = (longlong)(puVar7 + uVar1 * 0x12);
  param_1[2] = (longlong)(puVar7 + uVar8 * 0x12);
  return puVar2;
}



