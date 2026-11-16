// FUN_1800a7c10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800a7c10 */

short * FUN_1800a7c10(short *param_1,short *param_2)

{
  short *psVar1;
  short *psVar2;
  char cVar3;
  int iVar4;
  short *psVar5;
  short *psVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  short *psVar9;
  ulonglong uVar10;
  short *psVar11;
  undefined1 local_58;
  
  cVar3 = FUN_1800a7de0(param_2);
  if (cVar3 != '\0') {
LAB_1800a7cc5:
    if (param_1 == param_2) {
      return param_1;
    }
    psVar9 = param_2 + 8;
    if (7 < *(ulonglong *)(param_2 + 0xc)) {
      param_2 = *(short **)param_2;
    }
    FUN_1800f5190(param_1,param_2,*(undefined8 *)psVar9);
    return param_1;
  }
  psVar9 = param_1;
  if (7 < *(ulonglong *)(param_1 + 0xc)) {
    psVar9 = *(short **)param_1;
  }
  psVar1 = psVar9 + *(longlong *)(param_1 + 8);
  psVar11 = param_2;
  if (7 < *(ulonglong *)(param_2 + 0xc)) {
    psVar11 = *(short **)param_2;
  }
  psVar2 = psVar11 + *(longlong *)(param_2 + 8);
  psVar5 = (short *)FUN_1800a7b00(psVar9,psVar1);
  psVar6 = (short *)FUN_1800a7b00(psVar11,psVar2);
  if (psVar11 != psVar6) {
    uVar7 = (longlong)psVar6 - (longlong)psVar11 >> 1;
    uVar8 = (longlong)psVar5 - (longlong)psVar9 >> 1;
    uVar10 = uVar8;
    if (uVar7 < uVar8) {
      uVar10 = uVar7;
    }
    iVar4 = FUN_1801594c0(psVar9,psVar11,uVar10);
    if (((iVar4 != 0) || (uVar8 < uVar7)) || (uVar7 < uVar8)) goto LAB_1800a7cc5;
  }
  if ((psVar6 == psVar2) || ((*psVar6 != 0x5c && (*psVar6 != 0x2f)))) {
    if (psVar5 == psVar1) {
      if ((longlong)((longlong)psVar5 - (longlong)psVar9 & 0xfffffffffffffffeU) < 6)
      goto LAB_1800a7d93;
    }
    else if ((psVar1[-1] == 0x5c) || (psVar1[-1] == 0x2f)) goto LAB_1800a7d93;
    uVar10 = *(ulonglong *)(param_1 + 8);
    if (uVar10 < *(ulonglong *)(param_1 + 0xc)) {
      *(ulonglong *)(param_1 + 8) = uVar10 + 1;
      psVar9 = param_1;
      if (7 < *(ulonglong *)(param_1 + 0xc)) {
        psVar9 = *(short **)param_1;
      }
      (psVar9 + uVar10)[0] = 0x5c;
      (psVar9 + uVar10)[1] = 0;
    }
    else {
      FUN_18010f7f0(param_1,1,local_58,0x5c);
    }
  }
  else {
    uVar10 = (longlong)psVar5 - (longlong)psVar9 >> 1;
    if (*(ulonglong *)(param_1 + 8) < uVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_180141470();
    }
    *(ulonglong *)(param_1 + 8) = uVar10;
    psVar9 = param_1;
    if (7 < *(ulonglong *)(param_1 + 0xc)) {
      psVar9 = *(short **)param_1;
    }
    psVar9[uVar10] = 0;
  }
LAB_1800a7d93:
  FUN_1800f52e0(param_1,psVar6,(longlong)psVar2 - (longlong)psVar6 >> 1);
  return param_1;
}



