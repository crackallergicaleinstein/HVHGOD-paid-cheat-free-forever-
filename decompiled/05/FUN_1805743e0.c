// FUN_1805743e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805743e0 */

uint FUN_1805743e0(uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int local_res18;
  int local_res1c;
  
  if (param_1 == 0) {
    uVar4 = -param_2;
    if ((int)-param_2 < 0) {
      uVar4 = param_2;
    }
    return uVar4;
  }
  uVar4 = -param_1;
  if ((int)-param_1 < 0) {
    uVar4 = param_1;
  }
  if (param_2 == 0) {
    return uVar4;
  }
  uVar1 = -param_2;
  if ((int)-param_2 < 0) {
    uVar1 = param_2;
  }
  iVar6 = 0x1f;
  if ((uVar1 | uVar4) != 0) {
    for (; (uVar1 | uVar4) >> iVar6 == 0; iVar6 = iVar6 + -1) {
    }
  }
  if (iVar6 < 0x1e) {
    iVar6 = 0x1d - iVar6;
    local_res18 = param_1 << ((byte)iVar6 & 0x1f);
    local_res1c = param_2 << ((byte)iVar6 & 0x1f);
  }
  else {
    bVar3 = (byte)(iVar6 + -0x1d);
    local_res18 = (int)param_1 >> (bVar3 & 0x1f);
    local_res1c = (int)param_2 >> (bVar3 & 0x1f);
    iVar6 = -(iVar6 + -0x1d);
  }
  FUN_18057bc80(&local_res18);
  iVar2 = -local_res18;
  if (-local_res18 < 0) {
    iVar2 = local_res18;
  }
  iVar5 = (int)((ulonglong)((longlong)iVar2 * 0xdbd95b16 + 0x40000000) >> 0x20);
  iVar2 = -iVar5;
  if (-2 < (int)(local_res18 >> 0x1f & 0xfffffffeU)) {
    iVar2 = iVar5;
  }
  bVar3 = (byte)iVar6;
  if (iVar6 < 1) {
    return iVar2 << (-bVar3 & 0x1f);
  }
  return (1 << (bVar3 - 1 & 0x1f)) + iVar2 >> (bVar3 & 0x1f);
}



