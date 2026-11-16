// FUN_1802c2b50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802c2b50 */

undefined1 (*) [16]
FUN_1802c2b50(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined1 (*param_4) [16]
             )

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  undefined8 *puVar6;
  
  puVar6 = param_2;
  do {
    while( true ) {
      iVar1 = *(int *)(puVar6 + 4);
      if ((iVar1 == 2) || (iVar1 - 3U < 4)) {
        bVar5 = 0;
      }
      else {
        bVar5 = (iVar1 != 1) + 1;
      }
      iVar1 = *(int *)(param_1 + 4);
      if (((iVar1 == 2) || (iVar1 - 3U < 4)) || ((byte)((iVar1 != 1) + 1U) <= bVar5)) break;
      *param_4 = (undefined1  [16])0x0;
      *(undefined8 *)param_4[1] = 0;
      *(undefined8 *)(param_4[1] + 8) = 0;
      uVar2 = puVar6[1];
      uVar3 = puVar6[2];
      uVar4 = puVar6[3];
      *(undefined8 *)*param_4 = *puVar6;
      *(undefined8 *)(*param_4 + 8) = uVar2;
      *(undefined8 *)param_4[1] = uVar3;
      *(undefined8 *)(param_4[1] + 8) = uVar4;
      *(undefined1 *)puVar6 = 0;
      puVar6[2] = 0;
      puVar6[3] = 0xf;
      *(undefined4 *)param_4[2] = *(undefined4 *)(puVar6 + 4);
      param_4 = (undefined1 (*) [16])(param_4[2] + 8);
      puVar6 = puVar6 + 5;
      if (puVar6 == param_3) {
        if (param_1 == param_2) {
          return param_4;
        }
        do {
          *param_4 = (undefined1  [16])0x0;
          *(undefined8 *)param_4[1] = 0;
          *(undefined8 *)(param_4[1] + 8) = 0;
          uVar2 = param_1[1];
          uVar3 = param_1[2];
          uVar4 = param_1[3];
          *(undefined8 *)*param_4 = *param_1;
          *(undefined8 *)(*param_4 + 8) = uVar2;
          *(undefined8 *)param_4[1] = uVar3;
          *(undefined8 *)(param_4[1] + 8) = uVar4;
          *(undefined1 *)param_1 = 0;
          param_1[2] = 0;
          param_1[3] = 0xf;
          *(undefined4 *)param_4[2] = *(undefined4 *)(param_1 + 4);
          param_4 = (undefined1 (*) [16])(param_4[2] + 8);
          param_1 = param_1 + 5;
        } while (param_1 != param_2);
        return param_4;
      }
    }
    *param_4 = (undefined1  [16])0x0;
    *(undefined8 *)param_4[1] = 0;
    *(undefined8 *)(param_4[1] + 8) = 0;
    uVar2 = param_1[1];
    uVar3 = param_1[2];
    uVar4 = param_1[3];
    *(undefined8 *)*param_4 = *param_1;
    *(undefined8 *)(*param_4 + 8) = uVar2;
    *(undefined8 *)param_4[1] = uVar3;
    *(undefined8 *)(param_4[1] + 8) = uVar4;
    *(undefined1 *)param_1 = 0;
    param_1[2] = 0;
    param_1[3] = 0xf;
    *(undefined4 *)param_4[2] = *(undefined4 *)(param_1 + 4);
    param_4 = (undefined1 (*) [16])(param_4[2] + 8);
    param_1 = param_1 + 5;
  } while (param_1 != param_2);
  for (; puVar6 != param_3; puVar6 = puVar6 + 5) {
    *param_4 = (undefined1  [16])0x0;
    *(undefined8 *)param_4[1] = 0;
    *(undefined8 *)(param_4[1] + 8) = 0;
    uVar2 = puVar6[1];
    uVar3 = puVar6[2];
    uVar4 = puVar6[3];
    *(undefined8 *)*param_4 = *puVar6;
    *(undefined8 *)(*param_4 + 8) = uVar2;
    *(undefined8 *)param_4[1] = uVar3;
    *(undefined8 *)(param_4[1] + 8) = uVar4;
    *(undefined1 *)puVar6 = 0;
    puVar6[2] = 0;
    puVar6[3] = 0xf;
    *(undefined4 *)param_4[2] = *(undefined4 *)(puVar6 + 4);
    param_4 = (undefined1 (*) [16])(param_4[2] + 8);
  }
  return param_4;
}



