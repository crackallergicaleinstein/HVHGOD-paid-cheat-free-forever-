// FUN_1804cdd10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804cdd10 */

void FUN_1804cdd10(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  short sVar7;
  int iVar8;
  int *piVar9;
  longlong local_res8;
  
  lVar3 = DAT_180bb8ae8;
  if (*(char *)(DAT_180bb8ae8 + 0x277a) == '\0') {
    if (*(longlong *)(DAT_180bb8ae8 + 0x48) != 0) {
      local_res8 = 0;
      lVar5 = FUN_1804b0cc0(*(longlong *)(DAT_180bb8ae8 + 0x48),param_2,&local_res8);
      if (lVar5 != 0) {
        if (local_res8 != 0) {
          FUN_1804cdf20(lVar5);
        }
        lVar4 = DAT_180bb8ae8;
        if (DAT_180bb8ae8 != 0) {
          piVar1 = (int *)(DAT_180bb8ae8 + 4);
          piVar9 = (int *)(DAT_180bb8ae8 + 0x2998 + (longlong)*(short *)(DAT_180bb8ae8 + 0x2994) * 8
                          );
          if (*piVar9 != *piVar1) {
            iVar8 = *(short *)(DAT_180bb8ae8 + 0x2994) + 1;
            sVar7 = (short)iVar8 + (short)(iVar8 / 6) * -6;
            *(short *)(DAT_180bb8ae8 + 0x2994) = sVar7;
            piVar9 = (int *)(lVar4 + ((longlong)sVar7 + 0x533) * 8);
            *piVar9 = *piVar1;
            piVar9[1] = 0;
          }
          *(short *)((longlong)piVar9 + 6) = *(short *)((longlong)piVar9 + 6) + 1;
          piVar1 = (int *)(lVar4 + 0x2990);
          *piVar1 = *piVar1 + 1;
        }
        thunk_FUN_180621380(lVar5);
      }
    }
    *(undefined1 *)(lVar3 + 0x277a) = 1;
  }
  if (0.0 < *(float *)(lVar3 + 0x277c)) {
    fVar2 = *(float *)(lVar3 + 0x277c) - *(float *)(lVar3 + 0x40);
    *(float *)(lVar3 + 0x277c) = fVar2;
    if (fVar2 <= 0.0) {
      lVar5 = *(longlong *)(lVar3 + 0x48);
      if (lVar5 == 0) {
        *(undefined1 *)(lVar3 + 0xe4) = 1;
      }
      else {
        local_res8 = 0;
        *(undefined4 *)(DAT_180bb8ae8 + 0x277c) = 0;
        uVar6 = FUN_1804ce360(&local_res8);
        lVar5 = FUN_1804b0b10(lVar5,&DAT_18085b164);
        if (lVar5 != 0) {
          FUN_180610c34(uVar6,1,local_res8,lVar5);
          FUN_1806116f4(lVar5);
        }
      }
      *(undefined4 *)(lVar3 + 0x277c) = 0;
    }
  }
  return;
}



