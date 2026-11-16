// FUN_18058b9d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18058b9d0 */

void FUN_18058b9d0(longlong param_1,ushort *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  int local_res8;
  int local_resc;
  
  bVar7 = *(byte *)(param_1 + 0x1f0);
  if ((*(ushort *)(param_1 + 0x78) <= *param_2) || (*(ushort *)(param_1 + 0xb0) <= param_2[2])) {
    if (*(char *)(param_1 + 0x2c6) != '\0') {
      *(undefined4 *)(param_1 + 0x20) = 0x86;
    }
    return;
  }
  lVar1 = (ulonglong)param_2[2] * 8;
  lVar2 = (ulonglong)*param_2 * 8;
  iVar5 = *(int *)(*(longlong *)(param_1 + 0x80) + 4 + lVar2);
  iVar6 = *(int *)(*(longlong *)(param_1 + 0x80) + lVar2) -
          *(int *)(*(longlong *)(param_1 + 0xb8) + lVar1);
  iVar3 = *(int *)(*(longlong *)(param_1 + 0xb8) + 4 + lVar1);
  iVar4 = iVar5 - iVar3;
  if ((iVar6 == 0) && (iVar4 == 0)) {
    bVar7 = 0;
    iVar5 = 0x4000;
LAB_18058ba7a:
    local_res8 = iVar5;
    local_resc = iVar4;
    FUN_180578b00(&local_res8);
    *(short *)(param_1 + 0x198) = (short)((int)(local_res8 + (local_res8 >> 0x1f & 3U)) >> 2);
    *(short *)(param_1 + 0x19a) = (short)((int)(local_resc + (local_resc >> 0x1f & 3U)) >> 2);
  }
  else {
    if ((bVar7 & 1) != 0) {
      iVar4 = iVar6;
    }
    iVar5 = iVar3 - iVar5;
    if ((bVar7 & 1) == 0) {
      iVar5 = iVar6;
    }
    if ((iVar5 != 0) || (iVar4 != 0)) goto LAB_18058ba7a;
  }
  iVar6 = *(int *)(*(longlong *)(param_1 + 0x88) + lVar2) -
          *(int *)(*(longlong *)(param_1 + 0xc0) + lVar1);
  iVar5 = *(int *)(*(longlong *)(param_1 + 0x88) + 4 + lVar2);
  iVar3 = *(int *)(*(longlong *)(param_1 + 0xc0) + 4 + lVar1);
  iVar4 = iVar5 - iVar3;
  if ((iVar6 == 0) && (iVar4 == 0)) {
    iVar5 = 0x4000;
  }
  else {
    if ((bVar7 & 1) != 0) {
      iVar4 = iVar6;
    }
    iVar5 = iVar3 - iVar5;
    if ((bVar7 & 1) == 0) {
      iVar5 = iVar6;
    }
    if ((iVar5 == 0) && (iVar4 == 0)) goto LAB_18058bb40;
  }
  local_res8 = iVar5;
  local_resc = iVar4;
  FUN_180578b00(&local_res8);
  *(short *)(param_1 + 0x19c) = (short)((int)(local_res8 + (local_res8 >> 0x1f & 3U)) >> 2);
  *(short *)(param_1 + 0x19e) = (short)((int)(local_resc + (local_resc >> 0x1f & 3U)) >> 2);
LAB_18058bb40:
  FUN_180589fa0(param_1);
  return;
}



