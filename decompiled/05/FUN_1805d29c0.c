// FUN_1805d29c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805d29c0 */

void FUN_1805d29c0(undefined4 *param_1,undefined8 param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  
  iVar4 = (int)(-param_1[1] & param_4) >> ((byte)*param_1 & 0x1f);
  iVar7 = (param_3 + -1 + param_1[1] & -param_1[1]) >> ((byte)*param_1 & 0x1f);
  if ((-1 < iVar4) && (iVar1 = param_1[0x29], iVar7 <= iVar1)) {
    iVar2 = 0;
    if (-1 < iVar7) {
      iVar2 = iVar7;
    }
    if (iVar4 <= iVar1) {
      iVar1 = iVar4;
    }
    iVar4 = (iVar1 >> 3) - (iVar2 >> 3);
    pbVar3 = (byte *)((longlong)(iVar2 >> 3) + *(longlong *)(param_1 + 0x2e));
    bVar5 = (byte)(0xff >> ((byte)iVar2 & 7));
    bVar6 = (byte)(-0x80 >> ((byte)iVar1 & 7));
    if (0 < iVar4) {
      *pbVar3 = bVar5 | *pbVar3;
      while (iVar4 = iVar4 + -1, 0 < iVar4) {
        pbVar3 = pbVar3 + 1;
        *pbVar3 = 0xff;
      }
      pbVar3[1] = pbVar3[1] | bVar6;
      return;
    }
    *pbVar3 = bVar5 & bVar6 | *pbVar3;
  }
  return;
}



