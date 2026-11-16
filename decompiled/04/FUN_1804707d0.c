// FUN_1804707d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804707d0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804707d0(ulonglong *param_1)

{
  uint uVar1;
  byte *pbVar2;
  ushort uVar3;
  uint uVar4;
  ulonglong *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  undefined1 auStack_a38 [32];
  ushort local_a18 [1016];
  undefined1 local_228 [16];
  undefined2 local_218;
  undefined1 local_216;
  byte abStack_209 [465];
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_a38;
  puVar5 = param_1;
  if ((int)param_1[2] < 5) {
    FUN_180470340();
  }
  uVar10 = puVar5[3];
  *(int *)(param_1 + 2) = (int)param_1[2] + -5;
  *(uint *)(param_1 + 3) = (uint)uVar10 >> 5;
  uVar1 = ((uint)uVar10 & 0x1f) + 0x101;
  if ((int)param_1[2] < 5) {
    FUN_180470340(param_1);
  }
  *(int *)(param_1 + 2) = (int)param_1[2] + -5;
  iVar11 = ((uint)param_1[3] & 0x1f) + 1;
  *(uint *)(param_1 + 3) = (uint)param_1[3] >> 5;
  if ((int)param_1[2] < 4) {
    FUN_180470340(param_1);
  }
  uVar10 = param_1[3];
  iVar7 = uVar1 + iVar11;
  iVar6 = (int)param_1[2] + -4;
  *(uint *)(param_1 + 3) = (uint)uVar10 >> 4;
  *(int *)(param_1 + 2) = iVar6;
  uVar4 = ((uint)uVar10 & 0xf) + 4;
  local_218 = 0;
  local_228 = (undefined1  [16])0x0;
  local_216 = 0;
  if (uVar4 != 0) {
    lVar9 = 0;
    do {
      if (iVar6 < 3) {
        FUN_180470340(param_1);
      }
      uVar10 = param_1[3];
      *(int *)(param_1 + 2) = (int)param_1[2] + -3;
      iVar6 = (int)param_1[2];
      *(uint *)(param_1 + 3) = (uint)uVar10 >> 3;
      pbVar2 = &DAT_18082ac48 + lVar9;
      lVar9 = lVar9 + 1;
      local_228[*pbVar2] = (byte)uVar10 & 7;
    } while (lVar9 < (longlong)(ulonglong)uVar4);
  }
  iVar6 = FUN_180470100(local_a18,local_228,0x13);
  if (iVar6 != 0) {
    iVar6 = 0;
    do {
      if ((int)param_1[2] < 0x10) {
        if (*param_1 < param_1[1]) {
          FUN_180470340(param_1);
        }
        else {
          if (*(int *)((longlong)param_1 + 0x14) != 0) {
          }
          *(undefined4 *)((longlong)param_1 + 0x14) = 1;
          *(int *)(param_1 + 2) = (int)param_1[2] + 0x10;
        }
      }
      uVar3 = local_a18[(uint)param_1[3] & 0x1ff];
      if (uVar3 == 0) {
        uVar4 = FUN_1804703a0(param_1,local_a18);
      }
      else {
        *(uint *)(param_1 + 2) = (int)param_1[2] - (uint)(uVar3 >> 9);
        *(uint *)(param_1 + 3) = (uint)param_1[3] >> (uVar3 >> 9 & 0x1f);
        uVar4 = uVar3 & 0x1ff;
      }
      if (0x12 < uVar4) {
      }
      if ((int)uVar4 < 0x10) {
        iVar8 = 1;
        abStack_209[(longlong)iVar6 + 1] = (byte)uVar4;
      }
      else {
        uVar10 = 0;
        if (uVar4 == 0x10) {
          if ((int)param_1[2] < 2) {
            FUN_180470340(param_1);
          }
          *(int *)(param_1 + 2) = (int)param_1[2] + -2;
          iVar8 = ((uint)param_1[3] & 3) + 3;
          *(uint *)(param_1 + 3) = (uint)param_1[3] >> 2;
          if (iVar6 == 0) {
          }
          uVar10 = (ulonglong)abStack_209[iVar6];
        }
        else {
          if (uVar4 == 0x11) {
            if ((int)param_1[2] < 3) {
              FUN_180470340(param_1);
            }
            *(int *)(param_1 + 2) = (int)param_1[2] + -3;
            uVar4 = (uint)param_1[3] >> 3;
            iVar8 = ((uint)param_1[3] & 7) + 3;
          }
          else {
            if (uVar4 != 0x12) {
            }
            if ((int)param_1[2] < 7) {
              FUN_180470340(param_1);
            }
            *(int *)(param_1 + 2) = (int)param_1[2] + -7;
            uVar4 = (uint)param_1[3] >> 7;
            iVar8 = ((uint)param_1[3] & 0x7f) + 0xb;
          }
          *(uint *)(param_1 + 3) = uVar4;
        }
        if (iVar7 - iVar6 < iVar8) {
        }
        FUN_18063ab10(abStack_209 + (longlong)iVar6 + 1,uVar10 & 0xff,iVar8);
      }
      iVar6 = iVar6 + iVar8;
    } while (iVar6 < iVar7);
    if ((iVar6 == iVar7) &&
       (iVar6 = FUN_180470100((longlong)param_1 + 0x3c,abStack_209 + 1,uVar1), iVar6 != 0)) {
      FUN_180470100(param_1 + 0x104,abStack_209 + (ulonglong)uVar1 + 1,iVar11);
    }
  }
}



