// FUN_1801ce0e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801ce0e0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801ce0e0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 auStack_88 [32];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_88;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  FUN_18015ba30(local_68,*param_1,param_1[1]);
  local_48 = (undefined1  [16])0x0;
  local_38 = (undefined1  [16])0x0;
  FUN_18015ba30(local_48,*param_2,param_2[1]);
  pbVar2 = local_68;
  if (0xf < (ulonglong)local_58._8_8_) {
    pbVar2 = (byte *)local_68._0_8_;
  }
  pbVar3 = pbVar2 + local_58._0_8_;
  if (pbVar2 != pbVar3) {
    do {
      iVar1 = tolower((uint)*pbVar2);
      *pbVar2 = (byte)iVar1;
      pbVar2 = pbVar2 + 1;
    } while (pbVar2 != pbVar3);
  }
  pbVar2 = local_48;
  if (0xf < (ulonglong)local_38._8_8_) {
    pbVar2 = (byte *)local_48._0_8_;
  }
  pbVar4 = pbVar2 + local_38._0_8_;
  uVar5 = local_58._0_8_;
  pbVar3 = (byte *)local_68._0_8_;
  uVar6 = local_58._8_8_;
  if (pbVar2 != pbVar4) {
    do {
      iVar1 = tolower((uint)*pbVar2);
      *pbVar2 = (byte)iVar1;
      pbVar2 = pbVar2 + 1;
    } while (pbVar2 != pbVar4);
    uVar5 = local_58._0_8_;
    pbVar3 = (byte *)local_68._0_8_;
    uVar6 = local_58._8_8_;
  }
  pbVar2 = local_48;
  if (0xf < (ulonglong)local_38._8_8_) {
    pbVar2 = (byte *)local_48._0_8_;
  }
  pbVar4 = local_68;
  if (0xf < uVar6) {
    pbVar4 = pbVar3;
  }
  if (((ulonglong)local_38._0_8_ <= uVar5) && (local_38._0_8_ != 0)) {
    thunk_FUN_1805f9970(pbVar4,pbVar4 + uVar5,pbVar2);
  }
  FUN_18015c010(local_48);
  FUN_18015c010(local_68);
}



