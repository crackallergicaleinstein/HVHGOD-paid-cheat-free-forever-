// FUN_1805c7250 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805c7250 */

int FUN_1805c7250(longlong param_1,char *param_2,undefined4 *param_3)

{
  byte bVar1;
  int iVar2;
  size_t sVar3;
  longlong lVar4;
  uint uVar5;
  byte bVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  uint uVar9;
  ulonglong _MaxCount;
  uint uVar10;
  
  lVar4 = *(longlong *)(param_1 + 0x80);
  *param_3 = 0;
  if ((*(char *)(param_1 + 0x4c0) == '\0') &&
     (iVar2 = FUN_1805cd800(param_1,*(undefined8 *)(param_1 + 0xa0)), iVar2 != 0)) {
    return iVar2;
  }
  puVar7 = (undefined1 *)(*(longlong *)(param_1 + 0x4a0) + 8);
  iVar2 = *(int *)(param_1 + 0x4bc);
  puVar8 = puVar7 + (uint)(iVar2 * 4);
  if (lVar4 == 0) {
    return 6;
  }
  if (param_2 == (char *)0x0) {
    return 6;
  }
  sVar3 = strlen(param_2);
  if (sVar3 == 0) {
    return 6;
  }
  if (iVar2 == 0) {
    return 6;
  }
  while (uVar9 = (uint)CONCAT11(puVar7[2],puVar7[3]),
        CONCAT11(*puVar7,puVar7[1]) != *(short *)(lVar4 + 0x1a)) {
    puVar7 = puVar7 + 4;
    puVar8 = puVar8 + uVar9 * 10;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
      return 6;
    }
  }
  if (uVar9 == 0) {
    return 6;
  }
  puVar8 = puVar8 + 1;
  do {
    bVar1 = puVar8[4];
    if ((bVar1 & 0x10) != 0) {
      uVar5 = CONCAT31(CONCAT21(CONCAT11(puVar8[-1],*puVar8),puVar8[1]),puVar8[2]);
      uVar10 = CONCAT31(CONCAT21(CONCAT11(puVar8[5],puVar8[6]),puVar8[7]),puVar8[8]);
      if (((uVar5 < *(uint *)(param_1 + 0x4b8)) &&
          (_MaxCount = (ulonglong)(*(uint *)(param_1 + 0x4b8) - uVar5), sVar3 < _MaxCount)) &&
         (iVar2 = strncmp(param_2,(char *)((ulonglong)uVar5 + *(longlong *)(param_1 + 0x4b0)),
                          _MaxCount), iVar2 == 0)) {
        bVar6 = bVar1 & 0xf;
        if (((bVar1 & 0xf) == 0) || (bVar6 == 1)) {
          if (uVar10 < *(uint *)(param_1 + 0x4b8)) {
            lVar4 = FUN_18063b630(*(longlong *)(param_1 + 0x4b0) + (ulonglong)uVar10,0,
                                  *(uint *)(param_1 + 0x4b8));
            if (lVar4 != 0) {
              *param_3 = 1;
              *(ulonglong *)(param_3 + 2) = *(longlong *)(param_1 + 0x4b0) + (ulonglong)uVar10;
              return 0;
            }
          }
        }
        else {
          if (bVar6 == 2) {
            *param_3 = 2;
            param_3[2] = uVar10;
            return 0;
          }
          if (bVar6 == 3) {
            *param_3 = 3;
            param_3[2] = uVar10;
            return 0;
          }
        }
      }
    }
    puVar8 = puVar8 + 10;
    uVar9 = uVar9 - 1;
    if (uVar9 == 0) {
      return 6;
    }
  } while( true );
}



