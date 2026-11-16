// FUN_1802ad500 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802ad500 */

uint * FUN_1802ad500(uint *param_1,uint *param_2,longlong param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  uint *puVar5;
  ulonglong uVar6;
  uint *puVar7;
  uint *puVar8;
  
  if (param_1 == param_2) {
    return param_2;
  }
  puVar7 = param_1 + 1;
  if (puVar7 != param_2) {
    puVar5 = param_1 + 2;
    do {
      uVar1 = *puVar7;
      uVar6 = (ulonglong)(int)uVar1;
      uVar2 = *param_1;
      if ((uVar1 == 3) || ((uVar1 < 0x1c && ((0x8800010U >> (uVar1 & 0x1f) & 1) != 0)))) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if ((uVar2 < 0x1c) && ((0x8800018U >> (uVar2 & 0x1f) & 1) != 0)) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      if (bVar3 == bVar4) {
        bVar3 = *(float *)(uVar6 * 0x9c + 4 + param_3) <
                *(float *)((longlong)(int)uVar2 * 0x9c + 4 + param_3);
      }
      if (bVar3 == false) {
        puVar8 = puVar7;
        while( true ) {
          uVar2 = puVar8[-1];
          if ((uVar6 < 0x1c) && ((0x8800018UL >> (uVar6 & 0x3f) & 1) != 0)) {
            bVar3 = true;
          }
          else {
            bVar3 = false;
          }
          if ((uVar2 < 0x1c) && ((0x8800018U >> (uVar2 & 0x1f) & 1) != 0)) {
            bVar4 = true;
          }
          else {
            bVar4 = false;
          }
          if (bVar3 == bVar4) {
            bVar3 = *(float *)(uVar6 * 0x9c + 4 + param_3) <
                    *(float *)((longlong)(int)uVar2 * 0x9c + 4 + param_3);
          }
          if (bVar3 == false) break;
          *puVar8 = uVar2;
          puVar8 = puVar8 + -1;
        }
        *puVar8 = uVar1;
      }
      else {
        FUN_18063aed0((longlong)puVar5 - ((longlong)puVar7 - (longlong)param_1),param_1);
        *param_1 = uVar1;
      }
      puVar7 = puVar7 + 1;
      puVar5 = puVar5 + 1;
    } while (puVar7 != param_2);
  }
  return param_2;
}



