// FUN_1805bf850 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805bf850 */

void FUN_1805bf850(undefined8 param_1,char param_2,uint param_3,short *param_4,uint *param_5,
                  uint *param_6)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  
  bVar1 = true;
  uVar8 = *param_5;
  uVar10 = *param_6;
  if (1 < param_3) {
    uVar9 = (ulonglong)((param_3 - 2 >> 1) + 1);
    do {
      bVar5 = false;
      if ((bVar1) || (param_2 != '\0')) {
        uVar11 = (uint)param_4[1];
        uVar13 = (int)*param_4 - uVar11;
        bVar1 = false;
        puVar7 = param_6;
        uVar6 = uVar10;
      }
      else {
        uVar11 = (uint)*param_4;
        bVar5 = true;
        uVar13 = (int)param_4[1] - uVar11;
        puVar7 = param_5;
        uVar6 = uVar8;
      }
      puVar7 = puVar7 + 1;
      if (uVar6 != 0) {
        while ((int)*puVar7 <= (int)uVar11) {
          if (uVar11 == *puVar7) {
            if ((int)uVar13 < 0) {
              if ((int)uVar13 < (int)puVar7[1]) {
                puVar7[1] = uVar13;
              }
            }
            else if ((int)puVar7[1] < (int)uVar13) {
              puVar7[1] = uVar13;
            }
            goto LAB_1805bf955;
          }
          puVar7 = puVar7 + 8;
          uVar6 = uVar6 - 1;
          if (uVar6 == 0) goto LAB_1805bf943;
        }
        if (uVar6 != 0) {
          puVar12 = puVar7 + (ulonglong)uVar6 * 8;
          do {
            uVar6 = uVar6 - 1;
            uVar2 = *(undefined8 *)(puVar7 + (ulonglong)uVar6 * 8 + 2);
            uVar3 = *(undefined8 *)(puVar7 + (ulonglong)uVar6 * 8 + 4);
            uVar4 = *(undefined8 *)(puVar7 + (ulonglong)uVar6 * 8 + 4 + 2);
            *(undefined8 *)puVar12 = *(undefined8 *)(puVar7 + (ulonglong)uVar6 * 8);
            *(undefined8 *)(puVar12 + 2) = uVar2;
            *(undefined8 *)(puVar12 + 4) = uVar3;
            *(undefined8 *)(puVar12 + 6) = uVar4;
            puVar12 = puVar12 + -8;
          } while (uVar6 != 0);
        }
      }
LAB_1805bf943:
      *puVar7 = uVar11;
      puVar7[1] = uVar13;
      if (bVar5) {
        uVar8 = uVar8 + 1;
      }
      else {
        uVar10 = uVar10 + 1;
      }
LAB_1805bf955:
      param_4 = param_4 + 2;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  *param_5 = uVar8;
  *param_6 = uVar10;
  return;
}



