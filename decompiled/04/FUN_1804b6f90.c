// FUN_1804b6f90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804b6f90 */

longlong * FUN_1804b6f90(longlong *param_1,longlong param_2,char *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  char *pcVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0;
  plVar1 = param_1 + 0x21;
  *plVar1 = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined8 *)((longlong)param_1 + 0x15c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x164) = 0;
  *(undefined4 *)((longlong)param_1 + 0x16c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x17c) = 0;
  *(undefined1 (*) [16])((longlong)param_1 + 0x184) = (undefined1  [16])0x0;
  *(undefined8 *)((longlong)param_1 + 0x194) = 0;
  *(undefined4 *)((longlong)param_1 + 0x19c) = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  plVar2 = param_1 + 0x5a;
  FUN_1804d8bc0(plVar2,0);
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  FUN_18063ab10(param_1,0,0x450);
  *param_1 = param_2;
  lVar5 = -1;
  do {
    lVar11 = lVar5;
    lVar5 = lVar11 + 1;
  } while (param_3[lVar11 + 1] != '\0');
  uVar4 = FUN_1804b8110(lVar11 + 2);
  lVar5 = FUN_18063aed0(uVar4,param_3,lVar11 + 2);
  param_1[1] = lVar5;
  lVar5 = -1;
  do {
    lVar5 = lVar5 + 1;
  } while (param_3[lVar5] != '\0');
  *(int *)(param_1 + 0x11) = (int)lVar5 + 1;
  uVar10 = 0xffffffff;
  cVar7 = *param_3;
  while (cVar7 != '\0') {
    pcVar6 = param_3 + 1;
    if (((cVar7 == '#') && (*pcVar6 == '#')) && (param_3[2] == '#')) {
      uVar10 = 0xffffffff;
      pcVar6 = param_3 + 3;
    }
    else {
      uVar10 = crc32(uVar10,cVar7);
    }
    param_3 = pcVar6;
    cVar7 = *pcVar6;
  }
  *(uint *)(param_1 + 2) = ~uVar10;
  iVar3 = *(int *)((longlong)param_1 + 0x10c);
  if ((int)*plVar1 == iVar3) {
    iVar8 = (int)*plVar1 + 1;
    if (iVar3 == 0) {
      iVar3 = 8;
    }
    else {
      iVar3 = iVar3 / 2 + iVar3;
    }
    if (iVar8 < iVar3) {
      iVar8 = iVar3;
    }
    FUN_1804d14d0(plVar1,iVar8);
  }
  *(int *)(param_1[0x22] + (longlong)(int)*plVar1 * 4) = (int)param_1[2];
  lVar5 = *plVar1;
  *(int *)plVar1 = (int)lVar5 + 1;
  uVar9 = ~*(uint *)(param_1[0x22] + (longlong)(int)lVar5 * 4);
  pcVar6 = "MOVE";
  cVar7 = '#';
  uVar10 = uVar9;
  do {
    if (((cVar7 == '#') && (*pcVar6 == '#')) && (pcVar6[1] == '#')) {
      pcVar6 = pcVar6 + 2;
      uVar10 = uVar9;
    }
    else {
      uVar10 = crc32(uVar10,cVar7);
    }
    cVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar7 != '\0');
  uVar10 = ~uVar10;
  if (*(uint *)(*param_1 + 0x1534) == uVar10) {
    FUN_1804cf810(uVar10,0xb,&DAT_180859978);
  }
  *(uint *)((longlong)param_1 + 0x8c) = uVar10;
  *(undefined4 *)(param_1 + 0x15) = 0x7f7fffff;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x16) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x1d) = 0xffff;
  *(undefined2 *)((longlong)param_1 + 0xf2) = 0;
  *(undefined1 *)((longlong)param_1 + 0xf1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x20) = 0x7f7fffff;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x1f) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x52) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x294) = 0xbf800000;
  *(undefined8 *)((longlong)param_1 + 700) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x57) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x2c4) = 0xffffffff;
  param_1[0x59] = (longlong)plVar2;
  param_1[0x78] = param_1[1];
  FUN_1804d8d60(plVar2,*param_1 + 0x11f8);
  *(undefined4 *)(param_1 + 0x87) = 0x7f7fffff;
  *(undefined4 *)((longlong)param_1 + 0x43c) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x86) = 0x7f7fffff;
  *(undefined4 *)((longlong)param_1 + 0x434) = 0x7f7fffff;
  return param_1;
}



