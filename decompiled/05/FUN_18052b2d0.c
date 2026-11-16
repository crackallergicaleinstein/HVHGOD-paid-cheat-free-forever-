// FUN_18052b2d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18052b2d0 */

undefined8 FUN_18052b2d0(char param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  int *piVar2;
  undefined8 uVar3;
  int *piVar4;
  ulonglong uVar5;
  undefined **ppuVar6;
  longlong lVar7;
  int iVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  int local_res10 [6];
  int local_38 [4];
  
  if (-1 < (int)DAT_180c62f50[9]) {
    local_res10[0] = param_2;
    puVar1 = (undefined *)
             FUN_180529500(*(undefined4 *)
                            (*(longlong *)(*DAT_180c62f50 + (longlong)(int)DAT_180c62f50[3] * 8) +
                            0x4968));
    puVar9 = &DAT_1808e6690;
    if (DAT_1808e6670 == '\0') {
      puVar9 = puVar1;
    }
    if (param_1 == '\0') {
      local_38[1] = 4;
      local_38[0] = 0;
      piVar4 = local_38;
      if (-1 < param_2) {
        piVar4 = local_res10;
      }
      piVar2 = local_38 + 1;
      if (param_2 < 5) {
        piVar2 = piVar4;
      }
      iVar8 = *(int *)(puVar9 + (longlong)*piVar2 * 0x1c + 0x48);
    }
    else {
      iVar8 = *(int *)(puVar9 + 0xd4);
    }
    if (iVar8 != 0) {
      if (param_1 == '\0') {
        iVar10 = *(int *)(DAT_180b909b0 + 0x118);
      }
      else {
        iVar10 = *(int *)(DAT_180b909b0 + 0x11c);
      }
      uVar5 = (ulonglong)iVar10;
      if (DAT_180b909b0 == 0) {
        ppuVar6 = &PTR_s_Glock_18_180797be0 + uVar5 * 2;
      }
      else {
        if ((ulonglong)
            (*(longlong *)(DAT_180b909b0 + 0x30) - *(longlong *)(DAT_180b909b0 + 0x28) >> 4) <=
            uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_18047c010();
        }
        ppuVar6 = (undefined **)(uVar5 * 0x10 + *(longlong *)(DAT_180b909b0 + 0x28));
      }
      iVar10 = (int)*(short *)((longlong)ppuVar6 + 10);
      iVar11 = *(short *)((longlong)ppuVar6 + 0xc) + iVar10;
      for (; iVar10 < iVar11; iVar10 = iVar10 + 1) {
        if (((DAT_180b909b0 == 0) || (iVar10 < 0)) ||
           ((int)((*(longlong *)(DAT_180b909b0 + 0x60) - *(longlong *)(DAT_180b909b0 + 0x58)) / 0x68
                 ) <= iVar10)) {
          lVar7 = 0;
        }
        else {
          lVar7 = (longlong)iVar10 * 0x68 + *(longlong *)(DAT_180b909b0 + 0x58);
        }
        if (*(int *)(lVar7 + 4) == iVar8) {
          uVar3 = FUN_18052a120(iVar10,param_3,param_4);
          return uVar3;
        }
      }
    }
  }
  return 0;
}



