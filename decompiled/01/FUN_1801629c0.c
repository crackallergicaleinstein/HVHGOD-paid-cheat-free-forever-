// FUN_1801629c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801629c0 */

undefined8 * FUN_1801629c0(undefined8 *param_1,short *param_2)

{
  short sVar1;
  short *psVar2;
  short *psVar3;
  short *psVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  short *psVar7;
  undefined1 local_28;
  
  puVar5 = param_1;
  if (7 < (ulonglong)param_1[3]) {
    puVar5 = (undefined8 *)*param_1;
  }
  psVar4 = (short *)((longlong)puVar5 + param_1[2] * 2);
  psVar3 = (short *)FUN_1800a7b00(puVar5,psVar4);
  psVar7 = psVar4;
  if (psVar3 != psVar4) {
    do {
      psVar2 = psVar4;
      if ((*psVar3 != 0x5c) && (*psVar3 != 0x2f)) break;
      psVar3 = psVar3 + 1;
    } while (psVar3 != psVar4);
    do {
      psVar7 = psVar2;
      if (psVar3 == psVar7) break;
      sVar1 = psVar7[-1];
      if ((sVar1 == 0x5c) || (psVar2 = psVar7 + -1, sVar1 == 0x2f)) break;
    } while( true );
  }
  psVar4 = (short *)thunk_FUN_1805f7f70(psVar7,psVar4);
  if ((psVar7 != psVar4) && (psVar3 = psVar4 + -1, psVar7 != psVar3)) {
    if (*psVar3 == 0x2e) {
      if ((psVar7 != psVar4 + -2) || (psVar4[-2] != 0x2e)) {
LAB_180162a73:
        psVar4 = psVar3;
      }
    }
    else {
      for (psVar3 = psVar4 + -2; psVar7 != psVar3; psVar3 = psVar3 + -1) {
        if (*psVar3 == 0x2e) goto LAB_180162a73;
      }
    }
  }
  uVar6 = (longlong)psVar4 - (longlong)puVar5 >> 1;
  if ((ulonglong)param_1[2] < uVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_180141470();
  }
  param_1[2] = uVar6;
  puVar5 = param_1;
  if (7 < (ulonglong)param_1[3]) {
    puVar5 = (undefined8 *)*param_1;
  }
  *(undefined2 *)((longlong)puVar5 + uVar6 * 2) = 0;
  if (*(longlong *)(param_2 + 8) != 0) {
    psVar4 = param_2;
    if (7 < *(ulonglong *)(param_2 + 0xc)) {
      psVar4 = *(short **)param_2;
    }
    if (*psVar4 != 0x2e) {
      uVar6 = param_1[2];
      if (uVar6 < (ulonglong)param_1[3]) {
        param_1[2] = uVar6 + 1;
        puVar5 = param_1;
        if (7 < (ulonglong)param_1[3]) {
          puVar5 = (undefined8 *)*param_1;
        }
        *(undefined4 *)((longlong)puVar5 + uVar6 * 2) = 0x2e;
      }
      else {
        FUN_18010f7f0(param_1,1,local_28,0x2e);
      }
    }
  }
  psVar4 = param_2 + 8;
  if (7 < *(ulonglong *)(param_2 + 0xc)) {
    param_2 = *(short **)param_2;
  }
  FUN_1800f52e0(param_1,param_2,*(undefined8 *)psVar4);
  return param_1;
}



