// FUN_18026a7e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18026a7e0 */

undefined8 *
FUN_18026a7e0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             longlong param_5)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  float fVar8;
  float fVar9;
  
  puVar7 = param_2;
  do {
    lVar2 = **(longlong **)(param_5 + 8);
    puVar6 = param_4 + 4;
    fVar8 = (float)FUN_18025e110((longlong)*(int *)puVar7[1],
                                 (longlong)*(int *)puVar7[1] * 0x98 + lVar2);
    fVar9 = (float)FUN_18025e110((longlong)*(int *)param_1[1],
                                 (longlong)*(int *)param_1[1] * 0x98 + lVar2);
    if (fVar9 <= fVar8) {
      *param_4 = *param_1;
      uVar3 = param_1[1];
      uVar4 = param_1[2];
      uVar5 = param_1[3];
      param_1[3] = 0;
      param_1[2] = 0;
      param_1[1] = 0;
      param_4[1] = uVar3;
      param_4[2] = uVar4;
      param_4[3] = uVar5;
      param_1 = param_1 + 4;
      if (param_1 == param_2) {
        if (puVar7 == param_3) {
          return puVar6;
        }
        puVar7 = puVar7 + 2;
        do {
          *puVar6 = puVar7[-2];
          uVar3 = puVar7[-1];
          uVar4 = *puVar7;
          uVar5 = puVar7[1];
          puVar7[1] = 0;
          *puVar7 = 0;
          puVar7[-1] = 0;
          puVar6[1] = uVar3;
          puVar6[2] = uVar4;
          puVar6[3] = uVar5;
          puVar6 = puVar6 + 4;
          puVar1 = puVar7 + 2;
          puVar7 = puVar7 + 4;
        } while (puVar1 != param_3);
        return puVar6;
      }
    }
    else {
      *param_4 = *puVar7;
      uVar3 = puVar7[1];
      uVar4 = puVar7[2];
      uVar5 = puVar7[3];
      puVar7[3] = 0;
      puVar7[2] = 0;
      puVar7[1] = 0;
      param_4[1] = uVar3;
      param_4[2] = uVar4;
      param_4[3] = uVar5;
      puVar7 = puVar7 + 4;
      if (puVar7 == param_3) {
        if (param_1 != param_2) {
          puVar7 = param_1 + 2;
          do {
            *puVar6 = puVar7[-2];
            uVar3 = puVar7[-1];
            uVar4 = *puVar7;
            uVar5 = puVar7[1];
            puVar7[1] = 0;
            *puVar7 = 0;
            puVar7[-1] = 0;
            puVar6[1] = uVar3;
            puVar6[2] = uVar4;
            puVar6[3] = uVar5;
            puVar6 = puVar6 + 4;
            puVar1 = puVar7 + 2;
            puVar7 = puVar7 + 4;
          } while (puVar1 != param_2);
        }
        return puVar6;
      }
    }
    param_4 = puVar6;
  } while( true );
}



