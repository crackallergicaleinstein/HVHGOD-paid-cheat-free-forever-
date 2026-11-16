// FUN_1800a8760 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800a8760 */

void FUN_1800a8760(undefined8 param_1,undefined8 param_2,int *param_3,ulonglong *param_4,
                  ulonglong *param_5,ulonglong *param_6)

{
  undefined1 auVar1 [16];
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong local_68;
  int iStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  int iStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  int iStack_40;
  undefined4 uStack_3c;
  
  iVar7 = -0x3d - (int)param_6[1];
  iVar2 = iVar7 * 0x13441;
  iVar2 = ((int)(iVar2 + (iVar2 >> 0x1f & 0x3ffffU)) >> 0x12) + (0 < iVar7) + 0x133;
  auVar1 = *(undefined1 (*) [16])
            (&DAT_1806fff90 + (longlong)((int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3) * 0x10);
  uVar3 = *param_5 & 0xffffffff;
  uVar8 = *param_5 >> 0x20;
  uVar5 = auVar1._0_8_;
  uVar11 = uVar5 & 0xffffffff;
  uVar12 = uVar5 >> 0x20;
  uVar4 = uVar11 * uVar8;
  uVar6 = uVar12 * uVar3;
  uVar10 = *param_6 & 0xffffffff;
  local_58 = (((uVar5 & 0xffffffff) * uVar3 >> 0x20) + (uVar4 & 0xffffffff) + 0x80000000 +
              (uVar6 & 0xffffffff) >> 0x20) + uVar12 * uVar8 + (uVar4 >> 0x20) + (uVar6 >> 0x20);
  uVar8 = *param_6 >> 0x20;
  uVar3 = *param_4;
  uVar9 = (uVar3 & 0xffffffff) * uVar12;
  uVar6 = uVar10 * uVar12;
  uVar4 = uVar8 * uVar11;
  uVar5 = (uVar3 >> 0x20) * uVar11;
  iVar2 = auVar1._8_4_;
  _iStack_50 = CONCAT44(uStack_4c,(int)param_5[1] + 0x40 + iVar2);
  local_48 = (((uVar3 & 0xffffffff) * uVar11 >> 0x20) + (uVar5 & 0xffffffff) + 0x80000000 +
              (uVar9 & 0xffffffff) >> 0x20) + 1 + (uVar3 >> 0x20) * uVar12 + (uVar5 >> 0x20) +
             (uVar9 >> 0x20);
  _iStack_40 = CONCAT44(uStack_3c,(int)param_4[1] + 0x40 + iVar2);
  local_68 = ((uVar6 >> 0x20) - 1) +
             ((uVar10 * uVar11 >> 0x20) + (uVar4 & 0xffffffff) + 0x80000000 + (uVar6 & 0xffffffff)
             >> 0x20) + uVar8 * uVar12 + (uVar4 >> 0x20);
  _iStack_60 = CONCAT44(uStack_5c,(int)param_6[1] + 0x40 + iVar2);
  *param_3 = -auVar1._12_4_;
  FUN_1800a84d0(param_1,param_2,param_3,&local_48,&local_58,&local_68);
  return;
}



