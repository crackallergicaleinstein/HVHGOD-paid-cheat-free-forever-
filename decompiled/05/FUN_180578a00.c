// FUN_180578a00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180578a00 */

uint FUN_180578a00(undefined8 *param_1)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int local_res8;
  int local_resc;
  
  if (param_1 == (undefined8 *)0x0) {
    return 0;
  }
  uVar8 = (uint)*param_1;
  uVar5 = (uint)((ulonglong)*param_1 >> 0x20);
  if (uVar8 == 0) {
    uVar8 = -uVar5;
    if ((int)-uVar5 < 0) {
      uVar8 = uVar5;
    }
    return uVar8;
  }
  uVar4 = -uVar8;
  if ((int)-uVar8 < 0) {
    uVar4 = uVar8;
  }
  if (uVar5 == 0) {
    return uVar4;
  }
  uVar1 = -uVar5;
  if ((int)-uVar5 < 0) {
    uVar1 = uVar5;
  }
  iVar7 = 0x1f;
  if ((uVar1 | uVar4) != 0) {
    for (; (uVar1 | uVar4) >> iVar7 == 0; iVar7 = iVar7 + -1) {
    }
  }
  if (iVar7 < 0x1e) {
    iVar7 = 0x1d - iVar7;
    local_res8 = uVar8 << ((byte)iVar7 & 0x1f);
    local_resc = uVar5 << ((byte)iVar7 & 0x1f);
  }
  else {
    bVar3 = (byte)(iVar7 + -0x1d);
    local_res8 = (int)uVar8 >> (bVar3 & 0x1f);
    local_resc = (int)uVar5 >> (bVar3 & 0x1f);
    iVar7 = -(iVar7 + -0x1d);
  }
  FUN_18057bc80(&local_res8);
  iVar2 = -local_res8;
  if (-local_res8 < 0) {
    iVar2 = local_res8;
  }
  iVar6 = (int)((ulonglong)((longlong)iVar2 * 0xdbd95b16 + 0x40000000) >> 0x20);
  iVar2 = -iVar6;
  if (-2 < (int)(local_res8 >> 0x1f & 0xfffffffeU)) {
    iVar2 = iVar6;
  }
  bVar3 = (byte)iVar7;
  if (iVar7 < 1) {
    return iVar2 << (-bVar3 & 0x1f);
  }
  return (1 << (bVar3 - 1 & 0x1f)) + iVar2 >> (bVar3 & 0x1f);
}



