// FUN_18017d9c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18017d9c0 */

void FUN_18017d9c0(undefined8 *param_1,uint *param_2)

{
  undefined8 *puVar1;
  short sVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  short *psVar5;
  short *psVar6;
  undefined8 *puVar7;
  short *psVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 local_40 [16];
  undefined8 local_30;
  undefined8 local_28;
  
  *(uint *)(param_1 + 2) = *param_2;
  *(uint *)((longlong)param_1 + 0x14) = param_2[9];
  *(undefined4 *)((longlong)param_1 + 0x1c) = 6;
  if ((*param_2 & 0x400) == 0) {
    param_1[1] = CONCAT44(param_2[7],param_2[8]);
    *param_1 = *(undefined8 *)(param_2 + 5);
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0x2e;
  }
  puVar1 = param_1 + 4;
  lVar10 = -1;
  do {
    lVar10 = lVar10 + 1;
  } while (*(short *)((longlong)param_2 + lVar10 * 2 + 0x2c) != 0);
  local_40 = (undefined1  [16])0x0;
  local_30 = 0;
  local_28 = 0;
  FUN_180159e60(local_40);
  uVar3 = param_1[7];
  puVar7 = puVar1;
  if (7 < uVar3) {
    puVar7 = (undefined8 *)*puVar1;
  }
  uVar4 = param_1[6];
  psVar8 = (short *)((longlong)puVar7 + uVar4 * 2);
  psVar6 = (short *)FUN_1800a7b00(puVar7,psVar8);
  if (psVar6 == psVar8) {
LAB_18017dabb:
    uVar9 = (longlong)psVar8 - (longlong)puVar7 >> 1;
    if (uVar4 < uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_180141470();
    }
    param_1[6] = uVar9;
    puVar7 = puVar1;
    if (7 < uVar3) {
      puVar7 = (undefined8 *)*puVar1;
    }
    *(undefined2 *)((longlong)puVar7 + uVar9 * 2) = 0;
    FUN_1800a7c10(puVar1,local_40);
    FUN_18015b930(local_40);
    return;
  }
  do {
    psVar5 = psVar8;
    if ((*psVar6 != 0x5c) && (*psVar6 != 0x2f)) break;
    psVar6 = psVar6 + 1;
  } while (psVar6 != psVar8);
  do {
    psVar8 = psVar5;
    if (psVar6 == psVar8) goto LAB_18017dabb;
    sVar2 = psVar8[-1];
    if ((sVar2 == 0x5c) || (psVar5 = psVar8 + -1, sVar2 == 0x2f)) goto LAB_18017dabb;
  } while( true );
}



