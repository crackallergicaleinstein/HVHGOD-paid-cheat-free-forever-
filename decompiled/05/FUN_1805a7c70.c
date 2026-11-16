// FUN_1805a7c70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805a7c70 */

void FUN_1805a7c70(byte *param_1,byte *param_2,uint param_3,uint *param_4,uint param_5,uint *param_6
                  ,uint *param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  byte *pbVar8;
  
  uVar5 = *param_4;
  uVar1 = uVar5 & 1;
  uVar7 = (uint)((byte)uVar5 & 1);
  uVar3 = uVar7 + 5;
  if ((uVar5 & 2) == 0) {
    uVar3 = uVar7 + 4;
  }
  uVar7 = uVar3 + 1;
  if ((uVar5 & 4) == 0) {
    uVar7 = uVar3;
  }
  if ((uVar5 & 0x40) == 0) {
    uVar3 = 0xffffffff;
    *param_4 = uVar5 | 0x80;
    pbVar8 = param_1;
    if (param_2 < param_1 + uVar7 * param_3) {
LAB_1805a7d09:
      *param_4 = uVar5 & 0xffffff7f;
    }
    else {
      for (; pbVar8 < param_1 + uVar7 * param_3; pbVar8 = pbVar8 + uVar7) {
        uVar2 = (uint)*pbVar8;
        if ((uVar5 & 1) != 0) {
          uVar2 = (uint)CONCAT11(*pbVar8,pbVar8[1]);
        }
        if ((int)uVar2 <= (int)uVar3) goto LAB_1805a7d09;
        uVar3 = uVar2;
      }
    }
    *param_4 = *param_4 | 0x40;
    uVar5 = *param_4;
  }
  if ((char)uVar5 < '\0') {
    uVar5 = 0;
    uVar3 = param_3 >> 1;
    if (param_3 != 0) {
      lVar6 = 2;
      do {
        pbVar8 = param_1 + uVar7 * uVar3;
        if (uVar1 == 0) {
          uVar2 = (uint)*pbVar8;
          lVar4 = 1;
        }
        else {
          uVar2 = (uint)CONCAT11(*pbVar8,pbVar8[1]);
          lVar4 = 2;
        }
        pbVar8 = pbVar8 + lVar4;
        if (param_5 < uVar2) {
          param_3 = uVar3;
        }
        else {
          if (param_5 <= uVar2) {
            if ((*param_4 & 2) == 0) {
              uVar5 = (uint)*pbVar8;
              lVar6 = 1;
            }
            else {
              uVar5 = (uint)CONCAT11(*pbVar8,pbVar8[1]);
            }
            pbVar8 = pbVar8 + lVar6;
            *param_7 = uVar5;
            uVar5 = (uint)CONCAT11(*pbVar8,pbVar8[1]);
            if ((*param_4 & 4) != 0) {
              uVar5 = (uint)CONCAT21(CONCAT11(*pbVar8,pbVar8[1]),pbVar8[2]);
            }
            *param_6 = uVar5;
            return;
          }
          uVar5 = uVar3 + 1;
        }
        uVar3 = uVar3 + (param_5 - uVar2);
        if ((param_3 <= uVar3) || (uVar3 < uVar5)) {
          uVar3 = (param_3 - uVar5 >> 1) + uVar5;
        }
      } while (uVar5 < param_3);
    }
  }
  *param_7 = 0;
  *param_6 = 0;
  return;
}



