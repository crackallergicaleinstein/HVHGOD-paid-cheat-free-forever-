// FUN_180361be0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180361be0 */

undefined8 *
FUN_180361be0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4,
             longlong param_5,undefined8 param_6,longlong param_7)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  
  if (param_4 == 0) {
    return param_3;
  }
  if (param_5 == 0) {
    return param_1;
  }
  if ((param_4 <= param_5) && (param_4 <= param_7)) {
    FUN_18063aed0(param_6,param_1,(longlong)param_2 - (longlong)param_1);
    FUN_18063aed0(param_1,param_2,(longlong)param_3 - (longlong)param_2);
    puVar4 = (undefined8 *)(((longlong)param_3 - (longlong)param_2) + (longlong)param_1);
    FUN_18063aed0(puVar4,param_6,(longlong)param_2 - (longlong)param_1);
    return puVar4;
  }
  if (param_5 <= param_7) {
    lVar5 = (longlong)param_3 - (longlong)param_2;
    FUN_18063aed0(param_6,param_2,lVar5);
    FUN_18063aed0((longlong)param_3 - ((longlong)param_2 - (longlong)param_1),param_1,
                  (longlong)param_2 - (longlong)param_1);
    FUN_18063aed0(param_1,param_6,lVar5);
    return (undefined8 *)(lVar5 + (longlong)param_1);
  }
  if (param_1 != param_2) {
    if (param_2 == param_3) {
      param_3 = param_1;
    }
    else {
      puVar4 = param_2;
      puVar6 = param_1;
      do {
        puVar3 = (undefined8 *)((longlong)puVar4 + -0xc);
        if (puVar6 == puVar3) break;
        uVar1 = *puVar6;
        uVar2 = *(undefined4 *)(puVar6 + 1);
        *puVar6 = *puVar3;
        *(undefined4 *)(puVar6 + 1) = *(undefined4 *)((longlong)puVar4 + -4);
        puVar6 = (undefined8 *)((longlong)puVar6 + 0xc);
        *puVar3 = uVar1;
        *(undefined4 *)((longlong)puVar4 + -4) = uVar2;
        puVar4 = puVar3;
      } while (puVar6 != puVar3);
      puVar4 = param_3;
      puVar6 = param_2;
      do {
        puVar3 = (undefined8 *)((longlong)puVar4 + -0xc);
        if (puVar6 == puVar3) break;
        uVar1 = *puVar6;
        uVar2 = *(undefined4 *)(puVar6 + 1);
        *puVar6 = *puVar3;
        *(undefined4 *)(puVar6 + 1) = *(undefined4 *)((longlong)puVar4 + -4);
        puVar6 = (undefined8 *)((longlong)puVar6 + 0xc);
        *puVar3 = uVar1;
        *(undefined4 *)((longlong)puVar4 + -4) = uVar2;
        puVar4 = puVar3;
      } while (puVar6 != puVar3);
      puVar4 = param_3;
      puVar6 = param_1;
      if (param_1 != param_3) {
        do {
          puVar3 = (undefined8 *)((longlong)puVar4 + -0xc);
          if (puVar6 == puVar3) break;
          uVar1 = *puVar6;
          uVar2 = *(undefined4 *)(puVar6 + 1);
          *puVar6 = *puVar3;
          *(undefined4 *)(puVar6 + 1) = *(undefined4 *)((longlong)puVar4 + -4);
          puVar6 = (undefined8 *)((longlong)puVar6 + 0xc);
          *puVar3 = uVar1;
          *(undefined4 *)((longlong)puVar4 + -4) = uVar2;
          puVar4 = puVar3;
        } while (puVar6 != puVar3);
      }
      param_3 = (undefined8 *)
                ((longlong)param_1 + (((longlong)param_3 - (longlong)param_2) / 0xc) * 0xc);
    }
  }
  return param_3;
}



