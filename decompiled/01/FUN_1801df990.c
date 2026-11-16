// FUN_1801df990 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801df990 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801df990(longlong *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  uint *puVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  uint local_30;
  uint5 local_2c;
  undefined3 uStack_27;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_1808d5f00 ^ (ulonglong)auStack_78;
  local_48 = *param_1;
  iVar1 = *param_2;
  local_40 = param_1[1] + local_48;
  _local_2c = 0;
  local_24 = 0;
  local_38 = 0;
  local_30 = 0;
  if (local_48 != local_40) {
    puVar3 = (undefined8 *)FUN_1801e61d0(local_58,local_48,local_40,&local_30);
    local_38 = *puVar3;
  }
  local_2c = (uint5)(uint)local_2c;
  iVar7 = 0;
  if (local_48 != local_40) {
    do {
      if ((iVar7 == iVar1) && (-1 < iVar1)) break;
      if (local_30 < 0x25fd) {
        uVar2 = 1;
        puVar5 = &DAT_1807cafa0;
        do {
          if (local_30 < *puVar5) goto LAB_1801dfab7;
          uVar2 = uVar2 ^ 3;
          puVar5 = puVar5 + 1;
        } while (puVar5 != (uint *)&DAT_1807cb2c8);
        uVar2 = 1;
      }
      else {
        puVar4 = &DAT_1807cafa0;
        uVar6 = 0xca;
        do {
          uVar9 = uVar6 >> 1;
          if ((uint)puVar4[uVar9] <= local_30) {
            puVar4 = puVar4 + uVar9 + 1;
            uVar9 = uVar6 + (-1 - uVar9);
          }
          uVar6 = uVar9;
        } while (0 < (longlong)uVar9);
        uVar2 = ((uint)((longlong)(puVar4 + -0x601f2be8) >> 2) & 1) + 1;
      }
LAB_1801dfab7:
      if ((int)(0x7fffffff - uVar2) < iVar7) {
        if (iVar1 < 0) {
          *param_2 = 0x7fffffff;
        }
        break;
      }
      iVar8 = iVar7 + uVar2;
      if ((iVar1 < iVar8) && (-1 < iVar1)) break;
      FUN_1801e0e30(&local_48);
      iVar7 = iVar8;
    } while (local_48 != local_40);
  }
  *param_2 = iVar7;
}



