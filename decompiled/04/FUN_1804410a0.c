// FUN_1804410a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804410a0 */

undefined8 FUN_1804410a0(longlong param_1,int *param_2,char *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte bVar8;
  undefined8 uVar9;
  
  if (*param_2 == 5) {
    return 0x80200001;
  }
  *(ulonglong *)(param_2 + 8) = *(ulonglong *)(param_2 + 8) | 0x10;
  pbVar1 = (byte *)((longlong)param_2 + 0xf3);
  pbVar2 = (byte *)(param_2 + 0x3d);
  pbVar3 = (byte *)((longlong)param_2 + 0xf6);
  pbVar4 = (byte *)(param_2 + 0x3c);
  pbVar5 = (byte *)((longlong)param_2 + 0xf2);
  pbVar6 = (byte *)((longlong)param_2 + 0xf1);
  pbVar7 = (byte *)((longlong)param_2 + 0xf5);
  if (*param_3 == -0x3c) {
    *(undefined1 *)((longlong)param_2 + 0xf9) = 3;
    *pbVar4 = (byte)param_3[1] >> 7;
    *pbVar6 = (byte)param_3[1] >> 6 & 1;
    *pbVar5 = (byte)param_3[1] >> 5 & 1;
    *pbVar1 = param_3[1] & 0x1f;
    *pbVar2 = (byte)param_3[2] >> 7;
    *pbVar7 = (byte)param_3[2] >> 3 & 0xf;
    *pbVar3 = (byte)param_3[2] >> 2 & 1;
    bVar8 = param_3[2];
  }
  else {
    *(undefined1 *)((longlong)param_2 + 0xf9) = 2;
    *pbVar4 = (byte)param_3[1] >> 7;
    *pbVar6 = 1;
    *pbVar5 = 1;
    *pbVar1 = 1;
    *pbVar2 = 0;
    *pbVar7 = (byte)param_3[1] >> 3 & 0xf;
    *pbVar3 = (byte)param_3[1] >> 2 & 1;
    bVar8 = param_3[1];
  }
  *(byte *)((longlong)param_2 + 0xf7) = bVar8 & 3;
  if (*pbVar1 < 4) {
    *(byte *)(param_1 + 10) = *pbVar2;
    *(byte *)(param_1 + 0xb) = ~*pbVar4 & 1;
    *(byte *)(param_1 + 0xc) = ~*pbVar6 & 1;
    *(byte *)(param_1 + 0xd) = ~*pbVar5 & 1;
    *(byte *)(param_1 + 0xe) = *pbVar3;
    *(byte *)(param_1 + 0xf) = *pbVar3;
    *(byte *)(param_1 + 0x12) = ~*pbVar7 & 0xf;
    uVar9 = 0x100000;
  }
  else {
    uVar9 = 0x80200007;
  }
  return uVar9;
}



