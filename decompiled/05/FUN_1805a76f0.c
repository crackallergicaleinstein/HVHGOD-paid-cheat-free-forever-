// FUN_1805a76f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805a76f0 */

undefined8
FUN_1805a76f0(ulonglong *param_1,byte *param_2,uint param_3,uint *param_4,uint *param_5,
             uint *param_6,uint *param_7,uint *param_8,uint *param_9)

{
  byte bVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  
  pbVar2 = (byte *)*param_1;
  pbVar9 = pbVar2 + 1;
  if (param_2 < pbVar9) {
    return 8;
  }
  bVar1 = *pbVar2;
  uVar5 = 0;
  uVar4 = 0;
  uVar7 = 0;
  uVar6 = 0;
  bVar3 = bVar1 & 3;
  if ((bVar1 & 3) == 0) {
    pbVar8 = pbVar2 + 2;
    if (param_2 < pbVar8) {
      return 8;
    }
    uVar5 = (int)(char)*pbVar9 >> 4;
    uVar4 = (int)(char)(*pbVar9 << 4) >> 4;
  }
  else if (bVar3 == 1) {
    if (param_2 < pbVar2 + 3) {
      return 8;
    }
    uVar5 = (uint)(char)*pbVar9;
    uVar4 = (uint)(char)pbVar2[2];
    pbVar8 = pbVar2 + 3;
  }
  else if (bVar3 == 2) {
    pbVar8 = pbVar2 + 5;
    if (param_2 < pbVar8) {
      return 8;
    }
    uVar5 = (int)(short)((ushort)*pbVar9 << 8) | (uint)pbVar2[2];
    uVar4 = (int)(short)((ushort)pbVar2[3] << 8) | (uint)pbVar2[4];
  }
  else {
    pbVar8 = pbVar9;
    if (bVar3 == 3) {
      pbVar8 = pbVar2 + 7;
      if (param_2 < pbVar8) {
        return 8;
      }
      uVar5 = (int)((uint)CONCAT21(CONCAT11(*pbVar9,pbVar2[2]),pbVar2[3]) << 8) >> 8;
      uVar4 = (int)((uint)CONCAT21(CONCAT11(pbVar2[4],pbVar2[5]),pbVar2[6]) << 8) >> 8;
    }
  }
  bVar3 = bVar1 >> 2 & 3;
  pbVar9 = pbVar8;
  if ((bVar1 >> 2 & 3) != 0) {
    if (bVar3 == 1) {
      pbVar9 = pbVar8 + 1;
      if (param_2 < pbVar9) {
        return 8;
      }
      uVar7 = (uint)(*pbVar8 >> 4);
      uVar6 = *pbVar8 & 0xf;
    }
    else if (bVar3 == 2) {
      if (param_2 < pbVar8 + 2) {
        return 8;
      }
      uVar7 = (uint)*pbVar8;
      uVar6 = (uint)pbVar8[1];
      pbVar9 = pbVar8 + 2;
    }
    else if (bVar3 == 3) {
      pbVar9 = pbVar8 + 4;
      if (param_2 < pbVar9) {
        return 8;
      }
      uVar7 = (uint)CONCAT11(*pbVar8,pbVar8[1]);
      uVar6 = (uint)CONCAT11(pbVar8[2],pbVar8[3]);
    }
  }
  bVar3 = bVar1 >> 4 & 3;
  if ((bVar1 >> 4 & 3) != 0) {
    if (bVar3 == 1) {
      if (param_2 < pbVar9 + 1) {
        return 8;
      }
      param_3 = (int)(char)*pbVar9 << 8;
      pbVar9 = pbVar9 + 1;
    }
    else if (bVar3 == 2) {
      if (param_2 < pbVar9 + 2) {
        return 8;
      }
      param_3 = (int)(short)((ushort)*pbVar9 << 8) | (uint)pbVar9[1];
      pbVar9 = pbVar9 + 2;
    }
    else {
      param_3 = 0;
      if (bVar3 == 3) {
        if (param_2 < pbVar9 + 3) {
          return 8;
        }
        param_3 = (int)((uint)CONCAT21(CONCAT11(*pbVar9,pbVar9[1]),pbVar9[2]) << 8) >> 8;
        pbVar9 = pbVar9 + 3;
      }
    }
  }
  *param_4 = uVar5;
  *param_5 = uVar4;
  *param_6 = uVar7;
  *param_7 = uVar6;
  *param_8 = param_3;
  *param_9 = (uint)(bVar1 >> 6);
  *param_1 = (ulonglong)pbVar9;
  return 0;
}



