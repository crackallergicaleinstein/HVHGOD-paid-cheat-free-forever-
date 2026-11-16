// FUN_180365640 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180365640 */

void FUN_180365640(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4,
                  longlong param_5,undefined8 *param_6,longlong param_7,undefined1 param_8)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  
  if ((param_4 <= param_5) && (param_4 <= param_7)) {
    lVar9 = (longlong)param_2 - (longlong)param_1;
    FUN_18063aed0(param_6,param_1,lVar9);
    uVar11 = param_2[1];
    uVar3 = param_2[2];
    uVar4 = param_2[3];
    *param_1 = *param_2;
    param_1[1] = uVar11;
    param_1[2] = uVar3;
    param_1[3] = uVar4;
    param_1[4] = param_2[4];
    puVar8 = (undefined8 *)((longlong)param_6 + lVar9 + -0x28);
    param_2 = param_2 + 5;
    puVar7 = param_1 + 5;
    puVar10 = param_6;
    do {
      puVar2 = puVar7 + 5;
      if (*(float *)((longlong)puVar10 + 0x14) <= *(float *)((longlong)param_2 + 0x14)) {
        uVar11 = puVar10[1];
        uVar3 = puVar10[2];
        uVar4 = puVar10[3];
        *puVar7 = *puVar10;
        puVar7[1] = uVar11;
        puVar7[2] = uVar3;
        puVar7[3] = uVar4;
        puVar1 = puVar10 + 4;
        puVar10 = puVar10 + 5;
        puVar7[4] = *puVar1;
        if (puVar10 == puVar8) {
          uVar3 = *puVar8;
          uVar4 = *(undefined8 *)((longlong)param_6 + lVar9 + -0x20);
          uVar5 = *(undefined8 *)((longlong)param_6 + lVar9 + -0x18);
          uVar6 = *(undefined8 *)((longlong)param_6 + lVar9 + -0x10);
          uVar11 = *(undefined8 *)((longlong)param_6 + lVar9 + -8);
          lVar9 = (longlong)param_3 - (longlong)param_2;
          FUN_18063aed0(puVar2,param_2,lVar9);
          puVar2 = (undefined8 *)((longlong)puVar2 + lVar9);
          *puVar2 = uVar3;
          puVar2[1] = uVar4;
          puVar2[2] = uVar5;
          puVar2[3] = uVar6;
          *(undefined8 *)((longlong)puVar7 + lVar9 + 0x48) = uVar11;
          return;
        }
      }
      else {
        uVar11 = param_2[1];
        uVar3 = param_2[2];
        uVar4 = param_2[3];
        *puVar7 = *param_2;
        puVar7[1] = uVar11;
        puVar7[2] = uVar3;
        puVar7[3] = uVar4;
        puVar1 = param_2 + 4;
        param_2 = param_2 + 5;
        puVar7[4] = *puVar1;
        if (param_2 == param_3) {
          FUN_18063aed0(puVar2,puVar10,(longlong)param_6 + (lVar9 - (longlong)puVar10));
          return;
        }
      }
      puVar7 = puVar2;
    } while( true );
  }
  if (param_7 < param_5) {
    FUN_1803658d0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return;
  }
  FUN_18063aed0(param_6,param_2,(longlong)param_3 - (longlong)param_2);
  uVar11 = param_2[-4];
  uVar3 = param_2[-3];
  uVar4 = param_2[-2];
  param_3[-5] = param_2[-5];
  param_3[-4] = uVar11;
  param_3[-3] = uVar3;
  param_3[-2] = uVar4;
  param_3[-1] = param_2[-1];
  puVar7 = (undefined8 *)((longlong)param_6 + ((longlong)param_3 - (longlong)param_2) + -0x28);
  param_2 = param_2 + -10;
  puVar8 = param_3 + -5;
  while( true ) {
    while (puVar10 = puVar8, puVar8 = puVar10 + -5,
          *(float *)((longlong)param_2 + 0x14) <= *(float *)((longlong)puVar7 + 0x14)) {
      uVar11 = puVar7[1];
      uVar3 = puVar7[2];
      uVar4 = puVar7[3];
      *puVar8 = *puVar7;
      puVar10[-4] = uVar11;
      puVar10[-3] = uVar3;
      puVar10[-2] = uVar4;
      puVar2 = puVar7 + 4;
      puVar7 = puVar7 + -5;
      puVar10[-1] = *puVar2;
      if (param_6 == puVar7) {
        uVar11 = param_2[1];
        uVar3 = param_2[2];
        uVar4 = param_2[3];
        puVar10[-10] = *param_2;
        puVar10[-9] = uVar11;
        puVar10[-8] = uVar3;
        puVar10[-7] = uVar4;
        puVar10[-6] = param_2[4];
        FUN_18063aed0((longlong)puVar10 + (-0x50 - ((longlong)param_2 - (longlong)param_1)),param_1)
        ;
        uVar11 = param_6[1];
        uVar3 = param_6[2];
        uVar4 = param_6[3];
        *param_1 = *param_6;
        param_1[1] = uVar11;
        param_1[2] = uVar3;
        param_1[3] = uVar4;
        param_1[4] = param_6[4];
        return;
      }
    }
    uVar11 = param_2[1];
    uVar3 = param_2[2];
    uVar4 = param_2[3];
    *puVar8 = *param_2;
    puVar10[-4] = uVar11;
    puVar10[-3] = uVar3;
    puVar10[-2] = uVar4;
    puVar10[-1] = param_2[4];
    if (param_1 == param_2) break;
    param_2 = param_2 + -5;
  }
  uVar11 = puVar7[1];
  uVar3 = puVar7[2];
  uVar4 = puVar7[3];
  puVar10[-10] = *puVar7;
  puVar10[-9] = uVar11;
  puVar10[-8] = uVar3;
  puVar10[-7] = uVar4;
  puVar10[-6] = puVar7[4];
  FUN_18063aed0((longlong)puVar10 + (-0x50 - ((longlong)puVar7 - (longlong)param_6)),param_6,
                (longlong)puVar7 - (longlong)param_6);
  return;
}



