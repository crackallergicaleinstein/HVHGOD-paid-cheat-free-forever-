// FUN_1800aeaa0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800aeaa0 */

ulonglong FUN_1800aeaa0(longlong *param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  
  uVar4 = param_1[1] - param_1[2];
  if (0x1d < uVar4) {
    puVar5 = (undefined8 *)(param_1[2] + *param_1);
    uVar3 = puVar5[1];
    *(undefined8 *)(param_2 + 0x50b8) = *puVar5;
    *(undefined8 *)(param_2 + 0x50c0) = uVar3;
    *(undefined8 *)(param_2 + 0x50c8) = puVar5[2];
    *(undefined4 *)(param_2 + 0x50d0) = *(undefined4 *)(puVar5 + 3);
    *(undefined2 *)(param_2 + 0x50d4) = *(undefined2 *)((longlong)puVar5 + 0x1c);
    lVar6 = param_1[2] + 0x1e;
    uVar4 = param_1[1] - lVar6;
    param_1[2] = lVar6;
    if (0xa9 < uVar4) {
      puVar5 = (undefined8 *)(lVar6 + *param_1);
      uVar3 = puVar5[1];
      *(undefined8 *)(param_2 + 0x50d6) = *puVar5;
      *(undefined8 *)(param_2 + 0x50de) = uVar3;
      uVar3 = puVar5[3];
      *(undefined8 *)(param_2 + 0x50e6) = puVar5[2];
      *(undefined8 *)(param_2 + 0x50ee) = uVar3;
      uVar3 = puVar5[5];
      *(undefined8 *)(param_2 + 0x50f6) = puVar5[4];
      *(undefined8 *)(param_2 + 0x50fe) = uVar3;
      uVar3 = puVar5[7];
      *(undefined8 *)(param_2 + 0x5106) = puVar5[6];
      *(undefined8 *)(param_2 + 0x510e) = uVar3;
      uVar3 = puVar5[9];
      *(undefined8 *)(param_2 + 0x5116) = puVar5[8];
      *(undefined8 *)(param_2 + 0x511e) = uVar3;
      uVar3 = puVar5[0xb];
      *(undefined8 *)(param_2 + 0x5126) = puVar5[10];
      *(undefined8 *)(param_2 + 0x512e) = uVar3;
      uVar3 = puVar5[0xd];
      *(undefined8 *)(param_2 + 0x5136) = puVar5[0xc];
      *(undefined8 *)(param_2 + 0x513e) = uVar3;
      uVar3 = puVar5[0xf];
      *(undefined8 *)(param_2 + 0x5146) = puVar5[0xe];
      *(undefined8 *)(param_2 + 0x514e) = uVar3;
      uVar3 = puVar5[0x11];
      *(undefined8 *)(param_2 + 0x5156) = puVar5[0x10];
      *(undefined8 *)(param_2 + 0x515e) = uVar3;
      uVar3 = puVar5[0x13];
      *(undefined8 *)(param_2 + 0x5166) = puVar5[0x12];
      *(undefined8 *)(param_2 + 0x516e) = uVar3;
      *(undefined8 *)(param_2 + 0x5176) = puVar5[0x14];
      *(undefined2 *)(param_2 + 0x517e) = *(undefined2 *)(puVar5 + 0x15);
      lVar6 = param_1[2];
      lVar7 = lVar6 + 0xaa;
      uVar4 = param_1[1] - lVar7;
      param_1[2] = lVar7;
      if (0x13 < uVar4) {
        lVar2 = *param_1;
        puVar5 = (undefined8 *)(lVar7 + lVar2);
        uVar3 = puVar5[1];
        *(undefined8 *)(param_2 + 0x5180) = *puVar5;
        *(undefined8 *)(param_2 + 0x5188) = uVar3;
        *(undefined4 *)(param_2 + 0x5190) = *(undefined4 *)(lVar6 + 0xba + lVar2);
        lVar6 = param_1[2];
        lVar7 = lVar6 + 0x14;
        uVar4 = param_1[1] - lVar7;
        param_1[2] = lVar7;
        if (0x13 < uVar4) {
          lVar2 = *param_1;
          puVar5 = (undefined8 *)(lVar7 + lVar2);
          uVar3 = puVar5[1];
          *(undefined8 *)(param_2 + 0x5194) = *puVar5;
          *(undefined8 *)(param_2 + 0x519c) = uVar3;
          *(undefined4 *)(param_2 + 0x51a4) = *(undefined4 *)(lVar6 + 0x24 + lVar2);
          lVar6 = param_1[2];
          lVar7 = lVar6 + 0x14;
          uVar4 = param_1[1] - lVar7;
          param_1[2] = lVar7;
          if (0x13 < uVar4) {
            lVar2 = *param_1;
            puVar5 = (undefined8 *)(lVar7 + lVar2);
            uVar3 = puVar5[1];
            *(undefined8 *)(param_2 + 0x51a8) = *puVar5;
            *(undefined8 *)(param_2 + 0x51b0) = uVar3;
            uVar1 = *(undefined4 *)(lVar6 + 0x24 + lVar2);
            *(undefined4 *)(param_2 + 0x51b8) = uVar1;
            param_1[2] = param_1[2] + 0x14;
            return CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
          }
        }
      }
    }
  }
  return uVar4 & 0xffffffffffffff00;
}



