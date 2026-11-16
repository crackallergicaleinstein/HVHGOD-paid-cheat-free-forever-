// FUN_1805fc3cc - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805fc3cc */

uint FUN_1805fc3cc(uint param_1,UINT *param_2)

{
  UINT UVar1;
  int iVar2;
  longlong lVar3;
  ushort *puVar4;
  byte bVar5;
  ushort uVar6;
  undefined8 uVar7;
  byte local_res10;
  byte local_res11;
  undefined1 local_res12;
  byte local_res18;
  undefined1 local_res19;
  
  if (param_2 == (UINT *)0x0) {
    lVar3 = FUN_18061b090();
    lVar3 = *(longlong *)(lVar3 + 0x10);
    UVar1 = ___lc_codepage_func();
  }
  else {
    lVar3 = *(longlong *)(param_2 + 6);
    UVar1 = *param_2;
  }
  if (lVar3 == 0) {
    if (param_1 - 0x41 < 0x1a) {
      return param_1 + 0x20;
    }
    return param_1;
  }
  bVar5 = (byte)(param_1 >> 8);
  if (param_1 < 0x100) {
    if (param_2 == (UINT *)0x0) {
      iVar2 = isupper(param_1);
      if (iVar2 == 0) {
        return param_1;
      }
LAB_1805fc479:
      puVar4 = __pctype_func();
      uVar6 = puVar4[(int)param_1 >> 8 & 0xff] & 0x8000;
      goto LAB_1805fc457;
    }
    if ((*(byte *)(*(longlong *)(param_2 + 2) + (longlong)(int)param_1 * 2) & 1) == 0) {
      return param_1;
    }
  }
  else if (param_2 == (UINT *)0x0) goto LAB_1805fc479;
  uVar6 = *(ushort *)(*(longlong *)(param_2 + 2) + (ulonglong)bVar5 * 2) >> 0xf;
LAB_1805fc457:
  if (uVar6 == 0) {
    uVar7 = 1;
    local_res11 = 0;
    local_res10 = (byte)param_1;
  }
  else {
    uVar7 = 2;
    local_res12 = 0;
    local_res10 = bVar5;
    local_res11 = (byte)param_1;
  }
  iVar2 = FUN_180605478(lVar3,0x100,&local_res10,uVar7,&local_res18,3,UVar1,1);
  if (iVar2 == 0) {
    return param_1;
  }
  if (iVar2 == 1) {
    return (uint)local_res18;
  }
  return (uint)CONCAT11(local_res18,local_res19);
}



