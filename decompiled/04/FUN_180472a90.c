// FUN_180472a90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180472a90 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180472a90(longlong *param_1,int *param_2,int *param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  undefined1 auStack_a8 [32];
  int *local_88;
  int local_80;
  int local_78;
  int *local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong lStack_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_1808d5f00 ^ (ulonglong)auStack_a8;
  local_48 = 0;
  iVar2 = (*param_2 + 1) / 2;
  lVar8 = (longlong)iVar2;
  iVar3 = (*param_3 + 1) / 2;
  lVar15 = (longlong)iVar3;
  uVar9 = lVar8 * lVar15 * 4;
  local_58 = 0;
  lStack_50 = 0;
  local_88 = param_2;
  local_78 = iVar3;
  local_70 = param_3;
  local_60 = lVar15;
  if (uVar9 != 0) {
    if (0x7fffffffffffffff < uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_1801136f0();
    }
    lVar10 = lVar8 * lVar15 * 8;
    lVar4 = FUN_18015bca0(lVar10);
    local_58 = lVar4;
    local_48 = lVar10 + lVar4;
    FUN_18063ab10(lVar4,0,lVar10);
    lStack_50 = lVar10 + lVar4;
  }
  if (0 < iVar3) {
    local_80 = 1;
    local_68 = 4;
    lVar10 = 0;
    while( true ) {
      lVar4 = 0;
      if (0 < lVar8) {
        iVar3 = *local_70 + -1;
        if (local_80 < *local_70 + -1) {
          iVar3 = local_80;
        }
        iVar7 = 1;
        lVar17 = (longlong)iVar3;
        lVar15 = 0;
        lVar16 = local_68;
        while( true ) {
          iVar3 = *local_88;
          lVar1 = *param_1;
          lVar11 = iVar3 * lVar17;
          iVar5 = iVar3 + -1;
          if (iVar7 < iVar3 + -1) {
            iVar5 = iVar7;
          }
          lVar14 = (longlong)iVar5;
          lVar12 = iVar3 * lVar10;
          *(short *)(lVar16 + -4 + local_58) =
               (short)((uint)*(ushort *)(lVar1 + (lVar12 + lVar4 * 2) * 8) +
                       (uint)*(ushort *)(lVar1 + (lVar11 + lVar14) * 8) +
                       (uint)*(ushort *)(lVar1 + (lVar11 + lVar15) * 8) +
                       *(ushort *)(lVar1 + (lVar12 + lVar14) * 8) + 2 >> 2);
          lVar1 = *param_1;
          lVar11 = lVar10 * *local_88;
          lVar12 = lVar17 * *local_88;
          *(short *)(lVar16 + -2 + local_58) =
               (short)((uint)*(ushort *)(lVar1 + 2 + (lVar12 + lVar4 * 2) * 8) +
                       (uint)*(ushort *)(lVar1 + 2 + (lVar11 + lVar4 * 2) * 8) +
                       (uint)*(ushort *)(lVar1 + 2 + (lVar12 + lVar14) * 8) +
                       *(ushort *)(lVar1 + 2 + (lVar11 + lVar14) * 8) + 2 >> 2);
          lVar1 = *param_1;
          lVar11 = lVar10 * *local_88;
          lVar12 = lVar17 * *local_88;
          *(short *)(lVar16 + local_58) =
               (short)((uint)*(ushort *)(lVar1 + 4 + (lVar12 + lVar4 * 2) * 8) +
                       (uint)*(ushort *)(lVar1 + 4 + (lVar11 + lVar4 * 2) * 8) +
                       (uint)*(ushort *)(lVar1 + 4 + (lVar12 + lVar14) * 8) +
                       *(ushort *)(lVar1 + 4 + (lVar11 + lVar14) * 8) + 2 >> 2);
          lVar12 = *param_1;
          lVar6 = lVar10 * *local_88;
          lVar13 = lVar17 * *local_88;
          lVar1 = lVar4 * 2;
          iVar7 = iVar7 + 2;
          lVar11 = lVar4 * 2;
          lVar15 = lVar15 + 2;
          lVar4 = lVar4 + 1;
          *(short *)(lVar16 + 2 + local_58) =
               (short)(*(ushort *)(lVar12 + 6 + (lVar13 + lVar11) * 8) + 2 +
                       (uint)*(ushort *)(lVar12 + 6 + (lVar6 + lVar1) * 8) +
                       (uint)*(ushort *)(lVar12 + 6 + (lVar13 + lVar14) * 8) +
                       (uint)*(ushort *)(lVar12 + 6 + (lVar6 + lVar14) * 8) >> 2);
          if (lVar8 <= lVar4) break;
          lVar16 = lVar16 + 8;
        }
        lVar15 = local_60;
      }
      local_80 = local_80 + 2;
      local_68 = local_68 + lVar8 * 8;
      lVar10 = lVar10 + 2;
      lVar15 = lVar15 + -1;
      if (lVar15 == 0) break;
      local_60 = lVar15;
    }
    local_60 = 0;
    iVar3 = local_78;
  }
  if (param_1 != &local_58) {
    lVar15 = *param_1;
    *param_1 = local_58;
    lVar8 = param_1[1];
    param_1[1] = lStack_50;
    lVar10 = param_1[2];
    param_1[2] = local_48;
    local_48 = lVar10;
    local_58 = lVar15;
    lStack_50 = lVar8;
  }
  *local_88 = iVar2;
  *local_70 = iVar3;
  FUN_1801c6980(&local_58);
}



