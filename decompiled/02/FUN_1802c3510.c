// FUN_1802c3510 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802c3510 */

undefined8 *
FUN_1802c3510(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4,
             longlong param_5,undefined1 (*param_6) [16],longlong param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 (*pauVar7) [16];
  
  if (param_4 != 0) {
    if (param_5 == 0) {
      return param_1;
    }
    if ((param_5 < param_4) || (param_7 < param_4)) {
      if (param_7 < param_5) {
        if (param_1 != param_2) {
          if (param_2 == param_3) {
            return param_1;
          }
          FUN_1802c3730(param_1);
          FUN_1802c3730(param_2,param_3);
          FUN_1802c3730(param_1,param_3);
          param_3 = param_1 + (((longlong)param_3 - (longlong)param_2) / 0x28) * 5;
        }
      }
      else {
        pauVar7 = param_6;
        if (param_2 != param_3) {
          lVar5 = (longlong)param_6 - (longlong)param_2;
          puVar6 = param_2 + 2;
          do {
            *pauVar7 = (undefined1  [16])0x0;
            *(undefined8 *)(lVar5 + (longlong)puVar6) = 0;
            *(undefined8 *)(lVar5 + 8 + (longlong)puVar6) = 0;
            uVar2 = puVar6[-1];
            uVar3 = *puVar6;
            uVar4 = puVar6[1];
            *(undefined8 *)*pauVar7 = puVar6[-2];
            *(undefined8 *)(*pauVar7 + 8) = uVar2;
            *(undefined8 *)pauVar7[1] = uVar3;
            *(undefined8 *)(pauVar7[1] + 8) = uVar4;
            *(undefined1 *)(puVar6 + -2) = 0;
            *puVar6 = 0;
            puVar6[1] = 0xf;
            *(undefined4 *)(lVar5 + 0x10 + (longlong)puVar6) = *(undefined4 *)(puVar6 + 2);
            pauVar7 = (undefined1 (*) [16])(pauVar7[2] + 8);
            puVar1 = puVar6 + 3;
            puVar6 = puVar6 + 5;
          } while (puVar1 != param_3);
        }
        FUN_1802c2290(param_1,param_2,param_3);
        param_3 = (undefined8 *)FUN_1802c2cf0(param_6,pauVar7,param_1);
        if (param_6 != pauVar7) {
          do {
            FUN_18015c010(param_6);
            param_6 = (undefined1 (*) [16])(param_6[2] + 8);
          } while (param_6 != pauVar7);
          return param_3;
        }
      }
    }
    else {
      pauVar7 = param_6;
      if (param_1 != param_2) {
        lVar5 = (longlong)param_6 - (longlong)param_1;
        puVar6 = param_1 + 2;
        do {
          *pauVar7 = (undefined1  [16])0x0;
          *(undefined8 *)((longlong)puVar6 + lVar5) = 0;
          *(undefined8 *)((longlong)puVar6 + lVar5 + 8) = 0;
          uVar2 = puVar6[-1];
          uVar3 = *puVar6;
          uVar4 = puVar6[1];
          *(undefined8 *)*pauVar7 = puVar6[-2];
          *(undefined8 *)(*pauVar7 + 8) = uVar2;
          *(undefined8 *)pauVar7[1] = uVar3;
          *(undefined8 *)(pauVar7[1] + 8) = uVar4;
          *(undefined1 *)(puVar6 + -2) = 0;
          *puVar6 = 0;
          puVar6[1] = 0xf;
          *(undefined4 *)((longlong)puVar6 + lVar5 + 0x10) = *(undefined4 *)(puVar6 + 2);
          pauVar7 = (undefined1 (*) [16])(pauVar7[2] + 8);
          puVar1 = puVar6 + 3;
          puVar6 = puVar6 + 5;
        } while (puVar1 != param_2);
      }
      param_3 = (undefined8 *)FUN_1802c2cf0(param_2,param_3,param_1);
      FUN_1802c2cf0(param_6,pauVar7,param_3);
      if (param_6 != pauVar7) {
        do {
          FUN_18015c010(param_6);
          param_6 = (undefined1 (*) [16])(param_6[2] + 8);
        } while (param_6 != pauVar7);
        return param_3;
      }
    }
  }
  return param_3;
}



