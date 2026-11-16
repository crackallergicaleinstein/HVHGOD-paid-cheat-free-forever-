// FUN_18028a360 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18028a360 */

undefined1 (*) [16]
FUN_18028a360(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined1 (*param_4) [16]
             )

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  undefined1 (*pauVar5) [16];
  undefined8 *puVar6;
  
  puVar6 = param_2;
  do {
    pauVar5 = (undefined1 (*) [16])(param_4[2] + 8);
    cVar4 = FUN_180114040(puVar6,param_1);
    *param_4 = (undefined1  [16])0x0;
    *(undefined8 *)param_4[1] = 0;
    *(undefined8 *)(param_4[1] + 8) = 0;
    if (cVar4 < '\0') {
      uVar1 = puVar6[1];
      uVar2 = puVar6[2];
      uVar3 = puVar6[3];
      *(undefined8 *)*param_4 = *puVar6;
      *(undefined8 *)(*param_4 + 8) = uVar1;
      *(undefined8 *)param_4[1] = uVar2;
      *(undefined8 *)(param_4[1] + 8) = uVar3;
      *(undefined1 *)puVar6 = 0;
      puVar6[2] = 0;
      puVar6[3] = 0xf;
      *(undefined8 *)param_4[2] = puVar6[4];
      puVar6 = puVar6 + 5;
      if (puVar6 == param_3) {
        for (; param_1 != param_2; param_1 = param_1 + 5) {
          *pauVar5 = (undefined1  [16])0x0;
          *(undefined8 *)pauVar5[1] = 0;
          *(undefined8 *)(pauVar5[1] + 8) = 0;
          uVar1 = param_1[1];
          uVar2 = param_1[2];
          uVar3 = param_1[3];
          *(undefined8 *)*pauVar5 = *param_1;
          *(undefined8 *)(*pauVar5 + 8) = uVar1;
          *(undefined8 *)pauVar5[1] = uVar2;
          *(undefined8 *)(pauVar5[1] + 8) = uVar3;
          *(undefined1 *)param_1 = 0;
          param_1[2] = 0;
          param_1[3] = 0xf;
          *(undefined8 *)pauVar5[2] = param_1[4];
          pauVar5 = (undefined1 (*) [16])(pauVar5[2] + 8);
        }
        return pauVar5;
      }
    }
    else {
      uVar1 = param_1[1];
      uVar2 = param_1[2];
      uVar3 = param_1[3];
      *(undefined8 *)*param_4 = *param_1;
      *(undefined8 *)(*param_4 + 8) = uVar1;
      *(undefined8 *)param_4[1] = uVar2;
      *(undefined8 *)(param_4[1] + 8) = uVar3;
      *(undefined1 *)param_1 = 0;
      param_1[2] = 0;
      param_1[3] = 0xf;
      *(undefined8 *)param_4[2] = param_1[4];
      param_1 = param_1 + 5;
      if (param_1 == param_2) {
        for (; puVar6 != param_3; puVar6 = puVar6 + 5) {
          *pauVar5 = (undefined1  [16])0x0;
          *(undefined8 *)pauVar5[1] = 0;
          *(undefined8 *)(pauVar5[1] + 8) = 0;
          uVar1 = puVar6[1];
          uVar2 = puVar6[2];
          uVar3 = puVar6[3];
          *(undefined8 *)*pauVar5 = *puVar6;
          *(undefined8 *)(*pauVar5 + 8) = uVar1;
          *(undefined8 *)pauVar5[1] = uVar2;
          *(undefined8 *)(pauVar5[1] + 8) = uVar3;
          *(undefined1 *)puVar6 = 0;
          puVar6[2] = 0;
          puVar6[3] = 0xf;
          *(undefined8 *)pauVar5[2] = puVar6[4];
          pauVar5 = (undefined1 (*) [16])(pauVar5[2] + 8);
        }
        return pauVar5;
      }
    }
    param_4 = pauVar5;
  } while( true );
}



