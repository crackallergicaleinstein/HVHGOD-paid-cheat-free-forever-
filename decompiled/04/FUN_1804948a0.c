// FUN_1804948a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804948a0 */

undefined8 * FUN_1804948a0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  
  lVar7 = param_2 - (longlong)DAT_180c62d30;
  lVar11 = ((longlong)DAT_180c62d38 - (longlong)DAT_180c62d30) / 0x68;
  if (lVar11 == 0x276276276276276) {
                    /* WARNING: Subroutine does not return */
    FUN_1801136f0();
  }
  uVar1 = lVar11 + 1;
  uVar2 = ((longlong)DAT_180c62d40 - (longlong)DAT_180c62d30) / 0x68;
  if (0x276276276276276 - (uVar2 >> 1) < uVar2) {
    uVar8 = 0x276276276276276;
  }
  else {
    uVar2 = (uVar2 >> 1) + uVar2;
    uVar8 = uVar1;
    if (uVar1 <= uVar2) {
      uVar8 = uVar2;
    }
    if (0x276276276276276 < uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
  }
  puVar6 = (undefined8 *)FUN_18015bca0(uVar8 * 0x68);
  puVar10 = puVar6 + (lVar7 / 0x68) * 0xd;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  *puVar10 = *param_3;
  puVar10[1] = uVar3;
  puVar10[2] = uVar4;
  puVar10[3] = uVar5;
  uVar3 = param_3[5];
  uVar4 = param_3[6];
  uVar5 = param_3[7];
  puVar10[4] = param_3[4];
  puVar10[5] = uVar3;
  puVar10[6] = uVar4;
  puVar10[7] = uVar5;
  uVar3 = param_3[9];
  uVar4 = param_3[10];
  uVar5 = param_3[0xb];
  puVar10[8] = param_3[8];
  puVar10[9] = uVar3;
  puVar10[10] = uVar4;
  puVar10[0xb] = uVar5;
  puVar10[0xc] = param_3[0xc];
  if ((undefined8 *)param_2 == DAT_180c62d38) {
    lVar11 = (longlong)DAT_180c62d38 - (longlong)DAT_180c62d30;
    puVar9 = puVar6;
    param_2 = (longlong)DAT_180c62d30;
  }
  else {
    FUN_18063aed0(puVar6,DAT_180c62d30,param_2 - (longlong)DAT_180c62d30);
    lVar11 = (longlong)DAT_180c62d38 - param_2;
    puVar9 = puVar10 + 0xd;
  }
  FUN_18063aed0(puVar9,param_2,lVar11);
  if (DAT_180c62d30 != (undefined8 *)0x0) {
    lVar11 = (longlong)DAT_180c62d30;
    if ((0xfff < (ulonglong)((((longlong)DAT_180c62d40 - (longlong)DAT_180c62d30) / 0x68) * 0x68))
       && (lVar11 = *(longlong *)((longlong)DAT_180c62d30 + -8),
          0x1f < ((longlong)DAT_180c62d30 - lVar11) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(lVar11);
  }
  DAT_180c62d30 = puVar6;
  DAT_180c62d38 = puVar6 + uVar1 * 0xd;
  DAT_180c62d40 = puVar6 + uVar8 * 0xd;
  return puVar10;
}



