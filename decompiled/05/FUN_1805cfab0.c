// FUN_1805cfab0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805cfab0 */

void FUN_1805cfab0(int param_1,int param_2,longlong param_3,longlong *param_4)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  ushort uVar6;
  ushort uVar7;
  
  lVar4 = *param_4 - (longlong)(((int)(param_1 + (param_1 >> 0x1f & 3U)) >> 2) * (int)param_4[1]);
  if (param_2 != 0) {
    puVar2 = (ushort *)(param_3 + 2);
    do {
      uVar1 = puVar2[1];
      param_2 = param_2 + -1;
      uVar6 = 0;
      if (*puVar2 != 0) {
        do {
          uVar7 = uVar6 + 1;
          uVar5 = (ulonglong)((uint)uVar6 + (uint)puVar2[-1] >> 2);
          iVar3 = (uint)*(byte *)(uVar5 + lVar4) + ((byte)uVar1 + 8 >> 4);
          *(char *)(uVar5 + lVar4) = (char)iVar3 - (char)((uint)iVar3 >> 8);
          uVar6 = uVar7;
        } while (uVar7 < *puVar2);
      }
      puVar2 = puVar2 + 3;
    } while (param_2 != 0);
  }
  return;
}



