// FUN_180360810 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180360810 */

void FUN_180360810(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4,
                  longlong param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  float fVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  if ((param_2 != param_3) && (param_1 != param_2)) {
    fVar1 = *(float *)((longlong)param_2 + 4);
    while (*(float *)((longlong)param_1 + 4) <= fVar1) {
      param_1 = (undefined8 *)((longlong)param_1 + 0xc);
      param_4 = param_4 + -1;
      if (param_1 == param_2) {
        return;
      }
    }
    do {
      puVar4 = param_3;
      lVar3 = param_5;
      if (param_2 == (undefined8 *)((longlong)puVar4 + -0xc)) {
        uVar5 = *param_2;
        uVar2 = *(undefined4 *)(param_2 + 1);
        FUN_18063aed0((longlong)puVar4 - ((longlong)param_2 - (longlong)param_1),param_1,
                      (longlong)param_2 - (longlong)param_1);
        *param_1 = uVar5;
        *(undefined4 *)(param_1 + 1) = uVar2;
        return;
      }
      param_5 = lVar3 + -1;
      param_3 = (undefined8 *)((longlong)puVar4 + -0xc);
    } while (*(float *)(param_2 + -1) <= *(float *)(puVar4 + -1));
    if (param_4 == 1) {
      uVar5 = *param_1;
      uVar2 = *(undefined4 *)(param_1 + 1);
      lVar3 = (longlong)puVar4 - (longlong)param_2;
      FUN_18063aed0(param_1,fVar1,lVar3);
      *(undefined8 *)(lVar3 + (longlong)param_1) = uVar5;
      *(undefined4 *)(lVar3 + 8 + (longlong)param_1) = uVar2;
    }
    else {
      FUN_180361100(param_1,fVar1,puVar4,param_4,lVar3,param_6,param_7,param_8);
    }
  }
  return;
}



