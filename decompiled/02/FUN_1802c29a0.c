// FUN_1802c29a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802c29a0 */

void FUN_1802c29a0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,longlong param_4,
                  longlong param_5)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  byte bVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  
  puVar10 = param_1;
  if (param_4 < param_5) {
    do {
      param_5 = param_5 - param_4;
      puVar11 = param_1 + param_4 * 5;
      lVar6 = param_4;
      if (param_5 < param_4) {
        lVar6 = param_5;
      }
      param_5 = param_5 - lVar6;
      puVar10 = puVar11 + lVar6 * 5;
      puVar9 = puVar11;
      do {
        while( true ) {
          puVar8 = param_3;
          iVar2 = *(int *)(puVar9 + 4);
          if ((iVar2 == 2) || (iVar2 - 3U < 4)) {
            bVar7 = 0;
          }
          else {
            bVar7 = (iVar2 != 1) + 1;
          }
          iVar2 = *(int *)(param_1 + 4);
          if (((iVar2 == 2) || (iVar2 - 3U < 4)) || ((byte)((iVar2 != 1) + 1U) <= bVar7)) break;
          if (puVar8 != puVar9) {
            FUN_18015c010();
            uVar3 = puVar9[1];
            uVar4 = puVar9[2];
            uVar5 = puVar9[3];
            *puVar8 = *puVar9;
            puVar8[1] = uVar3;
            puVar8[2] = uVar4;
            puVar8[3] = uVar5;
            puVar9[2] = 0;
            puVar9[3] = 0xf;
            *(undefined1 *)puVar9 = 0;
          }
          puVar1 = puVar9 + 4;
          puVar9 = puVar9 + 5;
          *(undefined4 *)(puVar8 + 4) = *(undefined4 *)puVar1;
          param_3 = puVar8 + 5;
          if (puVar9 == puVar10) goto LAB_1802c2ad4;
        }
        if (puVar8 != param_1) {
          FUN_18015c010();
          uVar3 = param_1[1];
          uVar4 = param_1[2];
          uVar5 = param_1[3];
          *puVar8 = *param_1;
          puVar8[1] = uVar3;
          puVar8[2] = uVar4;
          puVar8[3] = uVar5;
          param_1[2] = 0;
          param_1[3] = 0xf;
          *(undefined1 *)param_1 = 0;
        }
        puVar1 = param_1 + 4;
        param_1 = param_1 + 5;
        *(undefined4 *)(puVar8 + 4) = *(undefined4 *)puVar1;
        param_3 = puVar8 + 5;
      } while (param_1 != puVar11);
      param_1 = puVar9;
      puVar11 = puVar10;
LAB_1802c2ad4:
      param_3 = (undefined8 *)FUN_1802c2cf0(param_1,puVar11,puVar8 + 5);
      param_1 = puVar10;
    } while (param_4 < param_5);
  }
  FUN_1802c2cf0(puVar10,param_2,param_3);
  return;
}



