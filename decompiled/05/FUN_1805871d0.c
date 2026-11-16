// FUN_1805871d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805871d0 */

byte * FUN_1805871d0(byte *param_1,longlong param_2,undefined4 *param_3,undefined4 *param_4)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  
  uVar6 = 0;
  uVar5 = 0;
  bVar2 = *param_1;
  while (bVar2 == 0x20) {
    pbVar1 = param_1 + 1;
    param_1 = param_1 + 1;
    bVar2 = *pbVar1;
  }
  uVar8 = (uint)bVar2;
  param_1 = param_1 + 1;
  if (0x7f < bVar2) {
    if (bVar2 < 0xe0) {
      uVar8 = 0x1f;
      iVar7 = 1;
    }
    else if (bVar2 < 0xf0) {
      uVar8 = 0xf;
      iVar7 = 2;
    }
    else {
      uVar8 = 7;
      iVar7 = 3;
    }
    uVar8 = bVar2 & uVar8;
    do {
      bVar2 = *param_1;
      param_1 = param_1 + 1;
      uVar8 = (int)(char)bVar2 & 0x3fU | uVar8 << 6;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  bVar2 = *param_1;
  if (bVar2 != 0x20) {
    do {
      if (bVar2 == 0) break;
      param_1 = param_1 + 1;
      uVar5 = (uint)bVar2;
      if (0x7f < bVar2) {
        if (bVar2 < 0xe0) {
          uVar3 = 0x1f;
          iVar7 = 1;
        }
        else if (uVar5 < 0xf0) {
          uVar3 = 0xf;
          iVar7 = 2;
        }
        else {
          uVar3 = 7;
          iVar7 = 3;
        }
        uVar5 = uVar5 & uVar3;
        do {
          bVar2 = *param_1;
          param_1 = param_1 + 1;
          uVar5 = (int)(char)bVar2 & 0x3fU | uVar5 << 6;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      bVar2 = *param_1;
    } while (bVar2 != 0x20);
    if (uVar5 != 0) {
      uVar4 = 0;
      goto LAB_1805872fa;
    }
  }
  uVar6 = 1;
  uVar4 = FUN_1805738d0(**(undefined8 **)(param_2 + 0x30),uVar8);
LAB_1805872fa:
  *param_3 = uVar4;
  *param_4 = uVar6;
  return param_1;
}



