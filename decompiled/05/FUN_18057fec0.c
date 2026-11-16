// FUN_18057fec0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18057fec0 */

void FUN_18057fec0(longlong param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  ushort *puVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  pbVar5 = *(byte **)((longlong)param_2 * 0x898 + 0x50 + param_1);
  if (pbVar5 == (byte *)0x0) {
    pbVar6 = (byte *)0x0;
  }
  else {
    pbVar6 = pbVar5 + (ulonglong)*(uint *)((longlong)param_2 * 0x898 + 0x48 + param_1) * 0x48;
  }
  iVar3 = FUN_180584320(param_1,param_2);
  if (iVar3 == 0) {
    for (; pbVar5 < pbVar6; pbVar5 = pbVar5 + 0x48) {
      puVar4 = *(ushort **)(pbVar5 + 0x38);
      uVar1 = *puVar4;
      *pbVar5 = *pbVar5 & 0xfe;
      if (puVar4 != *(ushort **)(pbVar5 + 0x40)) {
        do {
          uVar2 = uVar1 & 3;
          puVar4 = *(ushort **)(puVar4 + 0x10);
          uVar1 = *puVar4;
          if ((uVar2 == 0) && ((uVar1 & 3) == 0)) goto LAB_18057ff51;
        } while (puVar4 != *(ushort **)(pbVar5 + 0x40));
        *pbVar5 = *pbVar5 | 1;
      }
LAB_18057ff51:
    }
    FUN_18057ff90(param_1,param_2);
    FUN_18057f890(param_1,param_2);
  }
  return;
}



