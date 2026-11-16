// FUN_1803dc7c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803dc7c0 */

longlong * FUN_1803dc7c0(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  uVar8 = param_3[1];
  lVar4 = *param_3;
  if (uVar8 < 0x10) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    return param_2;
  }
  if ((*(short *)(lVar4 + 4) != 0xc) || (uVar7 = *(uint *)(lVar4 + 0xc), 0x3f < uVar7 - 1)) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    return param_2;
  }
  uVar5 = 0;
  if (uVar7 != 0) {
    while( true ) {
      uVar10 = (ulonglong)(uVar5 * 0xc + 0x10);
      if (uVar8 < uVar10 + 0xc) break;
      uVar2 = *(uint *)(uVar10 + 8 + lVar4);
      if (*(int *)(uVar10 + lVar4) == 0x41544144) {
        lVar9 = (ulonglong)*(uint *)(uVar10 + 4 + lVar4) + (ulonglong)(uVar5 * 0xc + 0x14);
        if (lVar9 + (ulonglong)uVar2 <= uVar8) {
          lVar9 = lVar9 + lVar4;
          uVar7 = 0;
          if (4 < uVar2) {
            uVar5 = 2;
            do {
              pcVar6 = (char *)((ulonglong)uVar7 + lVar9);
              if ((((*pcVar6 == '<') && (*(char *)((ulonglong)(uVar5 - 1) + lVar9) == 's')) &&
                  (*(char *)((ulonglong)uVar5 + lVar9) == 'v')) &&
                 (*(char *)((ulonglong)(uVar5 + 1) + lVar9) == 'g')) {
                uVar1 = uVar2;
                while (uVar3 = uVar1, uVar5 + 3 < uVar3) {
                  uVar1 = uVar3 - 1;
                  if (((*(char *)((ulonglong)uVar1 + lVar9) == '>') &&
                      (*(char *)((ulonglong)(uVar3 - 2) + lVar9) == 'g')) &&
                     ((*(char *)((ulonglong)(uVar3 - 3) + lVar9) == 'v' &&
                      (*(char *)((ulonglong)(uVar3 - 4) + lVar9) == 's')))) {
                    *param_2 = 0;
                    param_2[1] = 0;
                    param_2[2] = 0;
                    uVar8 = ((ulonglong)uVar3 - (longlong)pcVar6) + lVar9;
                    if (uVar8 == 0) {
                      return param_2;
                    }
                    if (0x7fffffffffffffff < uVar8) {
                    /* WARNING: Subroutine does not return */
                      FUN_1801136f0();
                    }
                    lVar4 = FUN_18015bca0(uVar8);
                    *param_2 = lVar4;
                    param_2[1] = lVar4;
                    param_2[2] = lVar4 + uVar8;
                    FUN_18063aed0(lVar4,pcVar6,uVar8);
                    param_2[1] = uVar8 + lVar4;
                    return param_2;
                  }
                }
              }
              uVar7 = uVar7 + 1;
              uVar1 = uVar5 + 3;
              uVar5 = uVar5 + 1;
            } while (uVar1 < uVar2);
          }
        }
        break;
      }
      uVar5 = uVar5 + 1;
      if (uVar7 <= uVar5) break;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}



