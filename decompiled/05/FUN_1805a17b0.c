// FUN_1805a17b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805a17b0 */

undefined8 FUN_1805a17b0(longlong param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  longlong lVar2;
  char *pcVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  undefined8 *puVar12;
  
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x20);
  *(byte **)(param_1 + 8) = param_2;
  *(byte **)(param_1 + 0x10) = param_3;
  *(byte **)(param_1 + 0x18) = param_2;
  if (param_3 <= param_2) {
    return 0;
  }
  while( true ) {
    bVar1 = *param_2;
    uVar6 = (uint)bVar1;
    if (((bVar1 < 0x1b) || (bVar1 == 0x1f)) || (bVar1 == 0xff)) break;
    if (*(uint *)(param_1 + 0x30) <=
        (uint)((longlong)*(undefined8 **)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 3)) {
      return 6;
    }
    **(undefined8 **)(param_1 + 0x28) = param_2;
    *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 8;
    if (bVar1 == 0x1e) {
      do {
        param_2 = param_2 + 1;
        if (param_3 <= param_2) {
          return 0;
        }
      } while (((*param_2 & 0xf0) != 0xf0) && ((*param_2 & 0xf) != 0xf));
    }
    else if (bVar1 == 0x1c) {
      param_2 = param_2 + 2;
    }
    else if (bVar1 == 0x1d) {
      param_2 = param_2 + 4;
    }
    else if (0xf6 < bVar1) {
      param_2 = param_2 + 1;
    }
LAB_1805a19e5:
    param_2 = param_2 + 1;
    if (param_3 <= param_2) {
      return 0;
    }
  }
  uVar7 = (uint)((longlong)*(undefined8 **)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 3);
  if (*(uint *)(param_1 + 0x30) <= uVar7) {
    return 6;
  }
  **(undefined8 **)(param_1 + 0x28) = param_2;
  if (bVar1 == 0xc) {
    param_2 = param_2 + 1;
    if (param_3 <= param_2) {
      return 6;
    }
    uVar6 = *param_2 | 0x100;
  }
  piVar9 = (int *)&DAT_180670cc0;
LAB_1805a18f0:
  if (piVar9[1] != (uVar6 | *(uint *)(param_1 + 0x34))) goto code_r0x0001805a18f5;
  lVar2 = *(longlong *)(param_1 + 0x38);
  iVar11 = *piVar9;
  piVar10 = (int *)((ulonglong)(uint)piVar9[2] + lVar2);
  if (((iVar11 != 6) && (iVar11 != 7)) && (uVar7 == 0)) {
    return 6;
  }
  switch(iVar11) {
  case 1:
  case 4:
  case 5:
    pcVar3 = (char *)**(undefined8 **)(param_1 + 0x20);
    if (*pcVar3 == '\x1e') {
      iVar11 = FUN_1805a1430(pcVar3,*(undefined8 *)(param_1 + 0x10),0,0);
      iVar11 = iVar11 >> 0x10;
    }
    else if (*pcVar3 == -1) {
      iVar11 = (int)(short)(CONCAT21(CONCAT11(pcVar3[1],pcVar3[2]),pcVar3[3]) + 0x80 >> 8);
    }
    else {
      iVar11 = FUN_1805a12f0(pcVar3,*(undefined8 *)(param_1 + 0x10));
    }
    break;
  case 2:
    iVar11 = FUN_1805a1260(param_1,*(undefined8 *)(param_1 + 0x20));
    break;
  case 3:
    iVar11 = FUN_1805a30c0(param_1,*(undefined8 *)(param_1 + 0x20),3);
    break;
  case 6:
    puVar12 = *(undefined8 **)(param_1 + 0x20);
    uVar6 = piVar9[6];
    if (uVar7 <= (uint)piVar9[6]) {
      uVar6 = uVar7;
    }
    iVar11 = 0;
    *(char *)((ulonglong)(uint)piVar9[7] + lVar2) = (char)uVar6;
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      pcVar3 = (char *)*puVar12;
      if (*pcVar3 == '\x1e') {
        iVar4 = FUN_1805a1430(pcVar3,*(undefined8 *)(param_1 + 0x10),0,0);
        iVar4 = iVar4 >> 0x10;
      }
      else if (*pcVar3 == -1) {
        iVar4 = (int)(short)(CONCAT21(CONCAT11(pcVar3[1],pcVar3[2]),pcVar3[3]) + 0x80 >> 8);
      }
      else {
        iVar4 = FUN_1805a12f0(pcVar3,*(undefined8 *)(param_1 + 0x10));
      }
      iVar11 = iVar11 + iVar4;
      puVar12 = puVar12 + 1;
      if ((char)piVar9[3] == '\x01') {
        *(char *)piVar10 = (char)iVar11;
      }
      else if ((char)piVar9[3] == '\x02') {
        *(short *)piVar10 = (short)iVar11;
      }
      else {
        *piVar10 = iVar11;
      }
      piVar10 = (int *)((longlong)piVar10 + (ulonglong)*(byte *)(piVar9 + 3));
    }
    goto LAB_1805a19d8;
  case 7:
    lVar8 = *(longlong *)(param_1 + 0x20);
    uVar6 = piVar9[6];
    if (uVar7 <= (uint)piVar9[6]) {
      uVar6 = uVar7;
    }
    iVar11 = 0;
    *(char *)((ulonglong)(uint)piVar9[7] + lVar2) = (char)uVar6;
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      iVar4 = FUN_1805a1260(param_1,lVar8);
      iVar11 = iVar11 + iVar4;
      lVar8 = lVar8 + 8;
      *piVar10 = iVar11;
      piVar10 = (int *)((longlong)piVar10 + (ulonglong)*(byte *)(piVar9 + 3));
    }
LAB_1805a19d8:
    if (*piVar9 != 9) {
      *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x20);
    }
    goto LAB_1805a19e5;
  default:
    uVar5 = (**(code **)(piVar9 + 4))(param_1);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    goto LAB_1805a19d8;
  }
  if ((char)piVar9[3] == '\x01') {
    *(char *)piVar10 = (char)iVar11;
  }
  else if ((char)piVar9[3] == '\x02') {
    *(short *)piVar10 = (short)iVar11;
  }
  else {
    *piVar10 = iVar11;
  }
  goto LAB_1805a19d8;
code_r0x0001805a18f5:
  piVar9 = piVar9 + 8;
  if (*piVar9 == 0) goto LAB_1805a19d8;
  goto LAB_1805a18f0;
}



