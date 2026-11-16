// FUN_180525a50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180525a50 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180525a50(undefined1 (*param_1) [16],byte *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte bVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined1 local_48;
  byte *local_40;
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_78;
  if (*(ulonglong *)(param_2 + 0x18) < 0x10) {
    pbVar9 = param_2;
  }
  else {
    pbVar9 = *(byte **)param_2;
  }
  pbVar10 = pbVar9 + *(longlong *)(param_2 + 0x10);
  local_40 = param_2;
  for (; pbVar9 != pbVar10; pbVar9 = pbVar9 + 1) {
    if (*pbVar9 == 0x5c) {
      bVar7 = 0x2f;
    }
    else {
      iVar8 = tolower((uint)*pbVar9);
      bVar7 = (byte)iVar8;
    }
    *pbVar9 = bVar7;
  }
  uVar2 = *(ulonglong *)(param_2 + 0x18);
  pbVar9 = param_2;
  if (0xf < uVar2) {
    pbVar9 = *(byte **)param_2;
  }
  uVar3 = *(ulonglong *)(param_2 + 0x10);
  if (6 < uVar3) {
    iVar8 = *(int *)(pbVar9 + (uVar3 - 7)) + -0x646d762e;
    if ((iVar8 == 0) && (iVar8 = *(ushort *)(pbVar9 + (uVar3 - 3)) - 0x5f6c, iVar8 == 0)) {
      iVar8 = pbVar9[uVar3 - 1] - 99;
    }
    if (iVar8 == 0) {
      uVar1 = uVar3 - 2;
      if (uVar3 < uVar1) {
        if (uVar2 - uVar3 < 0xfffffffffffffffe) {
          local_58 = 0;
          FUN_18013fa60(param_2,0xfffffffffffffffe,local_48);
        }
        else {
          *(ulonglong *)(param_2 + 0x10) = uVar1;
          pbVar9 = param_2;
          if (0xf < uVar2) {
            pbVar9 = *(byte **)param_2;
          }
          FUN_18063ab10(pbVar9 + uVar3,0,0xfffffffffffffffe);
          (pbVar9 + uVar3)[-2] = 0;
        }
      }
      else {
        *(ulonglong *)(param_2 + 0x10) = uVar1;
        pbVar9 = param_2;
        if (0xf < uVar2) {
          pbVar9 = *(byte **)param_2;
        }
        pbVar9[uVar1] = 0;
      }
    }
  }
  *param_1 = (undefined1  [16])0x0;
  *(undefined8 *)param_1[1] = 0;
  *(undefined8 *)(param_1[1] + 8) = 0;
  uVar4 = *(undefined8 *)(param_2 + 8);
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  uVar6 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)*param_1 = *(undefined8 *)param_2;
  *(undefined8 *)(*param_1 + 8) = uVar4;
  *(undefined8 *)param_1[1] = uVar5;
  *(undefined8 *)(param_1[1] + 8) = uVar6;
  *param_2 = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0xf;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  FUN_18015c010(param_2);
}



