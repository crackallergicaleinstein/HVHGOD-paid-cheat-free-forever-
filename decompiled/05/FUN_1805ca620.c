// FUN_1805ca620 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805ca620 */

void FUN_1805ca620(longlong param_1,uint param_2,uint param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  longlong lVar8;
  uint uVar9;
  
  iVar1 = (int)(param_2 + ((int)param_2 >> 0x1f & 0xfU)) >> 4;
  pbVar7 = (byte *)((iVar1 << 4) + param_1);
  iVar1 = -iVar1;
  uVar3 = param_3;
  uVar4 = param_3;
  uVar5 = param_3;
  if (iVar1 != 0) {
    lVar8 = -(longlong)iVar1;
    pbVar6 = pbVar7 + (longlong)iVar1 * 0x10 + 8;
    do {
      uVar3 = ((uint)(*(int *)(pbVar6 + -8) * 0x239b961b) >> 0x11 |
              *(int *)(pbVar6 + -8) * -0x34f28000) * -0x54f16877 ^ uVar3;
      uVar3 = ((uVar3 >> 0xd | uVar3 << 0x13) + uVar4) * 5 + 0x561ccd1b;
      uVar4 = ((uint)(*(int *)(pbVar6 + -4) * -0x54f16877) >> 0x10 |
              *(int *)(pbVar6 + -4) * -0x68770000) * 0x38b34ae5 ^ uVar4;
      uVar4 = ((uVar4 >> 0xf | uVar4 << 0x11) + param_3) * 5 + 0xbcaa747;
      param_3 = ((uint)(*(int *)pbVar6 * 0x38b34ae5) >> 0xf | *(int *)pbVar6 * -0x6a360000) *
                -0x5e1c746d ^ param_3;
      param_3 = ((param_3 >> 0x11 | param_3 << 0xf) + 0xeaf5d271 + uVar5) * 5;
      uVar5 = ((uint)(*(int *)(pbVar6 + 4) * -0x5e1c746d) >> 0xe | *(int *)(pbVar6 + 4) * 0x2e4c0000
              ) * 0x239b961b ^ uVar5;
      uVar5 = ((uVar5 >> 0x13 | uVar5 << 0xd) + uVar3) * 5 + 0x32ac3b17;
      lVar8 = lVar8 + -1;
      pbVar6 = pbVar6 + 0x10;
    } while (lVar8 != 0);
  }
  uVar2 = 0;
  switch(param_2 & 0xf) {
  case 0xf:
    uVar2 = (uint)pbVar7[0xe] << 0x10;
  case 0xe:
    uVar2 = uVar2 ^ (uint)pbVar7[0xd] << 8;
  case 0xd:
    uVar5 = uVar5 ^ ((pbVar7[0xc] ^ uVar2) * -0x5e1c746d >> 0xe | (pbVar7[0xc] ^ uVar2) * 0x2e4c0000
                    ) * 0x239b961b;
  case 0xc:
    uVar2 = (uint)pbVar7[0xb] << 0x18;
  case 0xb:
    uVar2 = uVar2 ^ (uint)pbVar7[10] << 0x10;
  case 10:
    uVar2 = uVar2 ^ (uint)pbVar7[9] << 8;
  case 9:
    param_3 = param_3 ^ ((pbVar7[8] ^ uVar2) * 0x38b34ae5 >> 0xf | (pbVar7[8] ^ uVar2) * -0x6a360000
                        ) * -0x5e1c746d;
  case 8:
    uVar2 = (uint)pbVar7[7] << 0x18;
  case 7:
    uVar2 = uVar2 ^ (uint)pbVar7[6] << 0x10;
  case 6:
    uVar2 = uVar2 ^ (uint)pbVar7[5] << 8;
  case 5:
    uVar4 = uVar4 ^ ((pbVar7[4] ^ uVar2) * -0x54f16877 >> 0x10 | (pbVar7[4] ^ uVar2) * -0x68770000)
                    * 0x38b34ae5;
  case 4:
    uVar2 = (uint)pbVar7[3] << 0x18;
  case 3:
    uVar2 = uVar2 ^ (uint)pbVar7[2] << 0x10;
  case 2:
    uVar2 = uVar2 ^ (uint)pbVar7[1] << 8;
  case 1:
    uVar3 = uVar3 ^ ((*pbVar7 ^ uVar2) * 0x239b961b >> 0x11 | (*pbVar7 ^ uVar2) * -0x34f28000) *
                    -0x54f16877;
  default:
    uVar2 = (uVar5 ^ param_2) + (uVar3 ^ param_2) + (param_3 ^ param_2) + (uVar4 ^ param_2);
    uVar3 = (uVar2 >> 0x10 ^ uVar2) * -0x7a143595;
    uVar9 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    uVar3 = uVar2 + (uVar4 ^ param_2);
    uVar3 = (uVar3 >> 0x10 ^ uVar3) * -0x7a143595;
    uVar4 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    uVar4 = uVar4 >> 0x10 ^ uVar4;
    uVar3 = uVar2 + (param_3 ^ param_2);
    uVar3 = (uVar3 >> 0x10 ^ uVar3) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    uVar3 = uVar3 >> 0x10 ^ uVar3;
    uVar2 = uVar2 + (uVar5 ^ param_2);
    uVar5 = (uVar2 >> 0x10 ^ uVar2) * -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    uVar5 = uVar5 >> 0x10 ^ uVar5;
    iVar1 = (uVar9 >> 0x10 ^ uVar9) + uVar5 + uVar3 + uVar4;
    *param_4 = iVar1;
    param_4[1] = iVar1 + uVar4;
    param_4[2] = iVar1 + uVar3;
    param_4[3] = iVar1 + uVar5;
    return;
  }
}



