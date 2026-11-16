// FUN_1804b10b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804b10b0 */

ulonglong FUN_1804b10b0(ulonglong param_1,undefined8 param_2,ulonglong param_3)

{
  byte *pbVar1;
  int iVar2;
  ulonglong uVar3;
  int local_res8 [2];
  
  uVar3 = param_3;
  if (param_1 == param_3) {
    return param_1;
  }
  do {
    if (uVar3 <= param_1) {
      uVar3 = param_1;
      break;
    }
    pbVar1 = (byte *)(uVar3 - 1);
    uVar3 = uVar3 - 1;
  } while ((*pbVar1 & 0xc0) == 0x80);
  iVar2 = FUN_1804b0e50(local_res8,uVar3,param_2);
  if ((local_res8[0] != 0xfffd) && (iVar2 <= (int)param_3 - (int)uVar3)) {
    uVar3 = param_3;
  }
  return uVar3;
}



