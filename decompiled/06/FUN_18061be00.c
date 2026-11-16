// FUN_18061be00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18061be00 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18061be00(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  ulonglong local_38 [7];
  
  bVar2 = *param_2;
  local_38[0] = 0;
  local_38[1] = 0;
  local_38[2] = 0;
  local_38[3] = 0;
  while (bVar2 != 0) {
    pbVar1 = (byte *)((longlong)local_38 + ((longlong)(int)(uint)bVar2 >> 3));
    *pbVar1 = *pbVar1 | '\x01' << (bVar2 & 7);
    pbVar1 = param_2 + 1;
    param_2 = param_2 + 1;
    bVar2 = *pbVar1;
  }
  local_38[0] = local_38[0] | 1;
  bVar2 = *(byte *)((longlong)local_38 + (ulonglong)(*param_1 >> 3)) >> (*param_1 & 7);
  while ((bVar2 & 1) == 0) {
    pbVar1 = param_1 + 1;
    param_1 = param_1 + 1;
    bVar2 = *(byte *)((longlong)local_38 + (ulonglong)(*pbVar1 >> 3)) >> (*pbVar1 & 7);
  }
}



