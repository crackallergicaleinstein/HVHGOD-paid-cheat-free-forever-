// FUN_1801b1480 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801b1480 */

void FUN_1801b1480(void)

{
  undefined1 (*pauVar1) [16];
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 (*pauVar5) [16];
  undefined1 (*pauVar6) [16];
  ulonglong uVar7;
  undefined1 (*pauVar8) [16];
  ulonglong uVar9;
  longlong lVar10;
  
  pauVar8 = DAT_180bbe8f8;
  uVar9 = (longlong)DAT_180bbe8f8 - (longlong)DAT_180bbe8f0 >> 5;
  if (0x80 < uVar9) {
    pauVar1 = DAT_180bbe8f0 + 0x100;
    for (pauVar5 = pauVar1; pauVar5 != pauVar8; pauVar5 = pauVar5 + 2) {
      FUN_18015c010(pauVar5);
    }
    DAT_180bbe8f8 = pauVar1;
    return;
  }
  if (uVar9 < 0x80) {
    uVar7 = DAT_180bbe900 - (longlong)DAT_180bbe8f0 >> 5;
    if (uVar7 < 0x80) {
      if (0x7ffffffffffffff - (uVar7 >> 1) < uVar7) {
        uVar7 = 0x7ffffffffffffff;
      }
      else {
        uVar7 = uVar7 + (uVar7 >> 1);
        if (uVar7 < 0x80) {
          uVar7 = 0x80;
        }
        else if (0x7ffffffffffffff < uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_18015bc80();
        }
      }
      pauVar5 = (undefined1 (*) [16])FUN_18015bca0(uVar7 << 5);
      pauVar8 = pauVar5 + uVar9 * 2;
      pauVar1 = DAT_180bbe8f8;
      for (lVar10 = 0x80 - uVar9; DAT_180bbe8f8 = pauVar1, lVar10 != 0; lVar10 = lVar10 + -1) {
        *pauVar8 = (undefined1  [16])0x0;
        *(undefined8 *)pauVar8[1] = 0;
        *(undefined8 *)(pauVar8[1] + 8) = 0xf;
        (*pauVar8)[0] = 0;
        pauVar8 = pauVar8 + 2;
        pauVar1 = DAT_180bbe8f8;
      }
      pauVar8 = pauVar5;
      for (pauVar6 = DAT_180bbe8f0; pauVar6 != pauVar1; pauVar6 = pauVar6 + 2) {
        *pauVar8 = (undefined1  [16])0x0;
        *(undefined8 *)pauVar8[1] = 0;
        *(undefined8 *)(pauVar8[1] + 8) = 0;
        uVar2 = *(undefined8 *)(*pauVar6 + 8);
        uVar3 = *(undefined8 *)pauVar6[1];
        uVar4 = *(undefined8 *)(pauVar6[1] + 8);
        *(undefined8 *)*pauVar8 = *(undefined8 *)*pauVar6;
        *(undefined8 *)(*pauVar8 + 8) = uVar2;
        *(undefined8 *)pauVar8[1] = uVar3;
        *(undefined8 *)(pauVar8[1] + 8) = uVar4;
        (*pauVar6)[0] = 0;
        *(undefined8 *)pauVar6[1] = 0;
        *(undefined8 *)(pauVar6[1] + 8) = 0xf;
        pauVar8 = pauVar8 + 2;
      }
      FUN_180157360(&DAT_180bbe8f0,pauVar5,0x80,uVar7);
      return;
    }
    for (lVar10 = 0x80 - uVar9; lVar10 != 0; lVar10 = lVar10 + -1) {
      *DAT_180bbe8f8 = (undefined1  [16])0x0;
      *(undefined8 *)DAT_180bbe8f8[1] = 0;
      *(undefined8 *)(DAT_180bbe8f8[1] + 8) = 0xf;
      (*DAT_180bbe8f8)[0] = 0;
      DAT_180bbe8f8 = DAT_180bbe8f8 + 2;
    }
  }
  return;
}



