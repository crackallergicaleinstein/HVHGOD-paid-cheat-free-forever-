// FUN_1800aec50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800aec50 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800aec50(longlong *param_1,byte *param_2,uint param_3)

{
  short sVar1;
  byte *pbVar2;
  ulonglong uVar3;
  undefined1 auStack_68 [40];
  byte local_40 [13];
  byte local_33 [3];
  ulonglong local_30;
  
  local_30 = DAT_1808d5f00 ^ (ulonglong)auStack_68;
  if (param_3 == 0xe) {
    uVar3 = 8;
  }
  else if (param_3 == 0xf) {
    uVar3 = 0x2c;
  }
  else {
    uVar3 = 0;
    if (param_3 == 0x10) {
      uVar3 = 0x7c;
    }
  }
  if (uVar3 <= (ulonglong)(param_1[1] - param_1[2])) {
    if (uVar3 != 0) {
      FUN_18063aed0(param_2,*param_1 + param_1[2],uVar3);
    }
    param_1[2] = param_1[2] + uVar3;
    sVar1 = thunk_FUN_180624430(*(undefined4 *)(param_2 + 4));
    if (sVar1 < 1) {
      local_40[2] = param_2[2];
      local_40[9] = param_2[0xd];
      local_40[10] = param_2[0xe];
      local_40[0xb] = param_2[0x28];
      local_40[0xc] = param_2[0x29];
      pbVar2 = local_40;
      local_40[0] = *param_2;
      local_40[1] = param_2[1];
      local_40[3] = param_2[3];
      local_40[4] = param_2[8];
      local_40[5] = param_2[9];
      local_40[6] = param_2[10];
      local_40[7] = param_2[0xb];
      local_40[8] = param_2[0xc];
      do {
        if (1 < *pbVar2) {
        }
        pbVar2 = pbVar2 + 1;
      } while (pbVar2 != local_33);
      if (param_3 < 0x10) {
        *(ulonglong *)(param_2 + 0x2c) = (ulonglong)(-(uint)(*param_2 != 0) & 3);
        *(ulonglong *)(param_2 + 0x34) = (ulonglong)(-(uint)(param_2[1] != 0) & 3);
        *(ulonglong *)(param_2 + 0x3c) = CONCAT44(0x10,(uint)(param_2[3] != 0));
        *(ulonglong *)(param_2 + 0x44) =
             CONCAT44(*(undefined4 *)(param_2 + 0x10),(uint)(param_2[8] != 0));
        *(ulonglong *)(param_2 + 0x4c) = (ulonglong)(-(uint)(param_2[9] != 0) & 3);
        *(ulonglong *)(param_2 + 0x54) =
             CONCAT44(*(undefined4 *)(param_2 + 0x14),(uint)(param_2[10] != 0));
        *(ulonglong *)(param_2 + 0x5c) =
             CONCAT44(*(undefined4 *)(param_2 + 0x18),(uint)(param_2[0xb] != 0));
        *(ulonglong *)(param_2 + 100) = (ulonglong)(-(uint)(param_2[0xc] != 0) & 3);
      }
    }
  }
}



