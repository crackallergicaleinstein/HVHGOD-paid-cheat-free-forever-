// FUN_18046fc60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18046fc60 */

longlong FUN_18046fc60(longlong param_1,int param_2,undefined8 param_3,int param_4,int param_5)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (param_2 == 4) {
    return param_1;
  }
  lVar4 = _malloc_base(param_4 * param_5 * 8);
  if (lVar4 == 0) {
    thunk_FUN_180621380(param_1);
    return 0;
  }
  iVar6 = 0;
  if (0 < param_5) {
    iVar7 = param_4 + -1;
    do {
      puVar1 = (undefined2 *)(param_1 + (ulonglong)(uint)(iVar6 * param_2 * param_4) * 2);
      puVar2 = (undefined2 *)(lVar4 + (ulonglong)(uint)(iVar6 * param_4 * 4) * 2);
      switch(param_2 * 8) {
      case 8:
        for (iVar5 = iVar7; -1 < iVar5; iVar5 = iVar5 + -1) {
          uVar3 = *puVar1;
          puVar2[2] = uVar3;
          puVar1 = puVar1 + 1;
          puVar2[1] = uVar3;
          *puVar2 = uVar3;
          puVar2[3] = 0xffff;
          puVar2 = puVar2 + 4;
        }
        break;
      case 0x10:
        for (iVar5 = iVar7; -1 < iVar5; iVar5 = iVar5 + -1) {
          uVar3 = *puVar1;
          puVar2[2] = uVar3;
          puVar2[1] = uVar3;
          *puVar2 = uVar3;
          puVar2[3] = puVar1[1];
          puVar1 = puVar1 + 2;
          puVar2 = puVar2 + 4;
        }
        break;
      case 0x18:
        for (iVar5 = iVar7; -1 < iVar5; iVar5 = iVar5 + -1) {
          *puVar2 = *puVar1;
          puVar2[1] = puVar1[1];
          puVar2[2] = puVar1[2];
          puVar2[3] = 0xffff;
          puVar1 = puVar1 + 3;
          puVar2 = puVar2 + 4;
        }
        break;
      default:
        thunk_FUN_180621380(param_1);
        thunk_FUN_180621380(lVar4);
        return 0;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < param_5);
  }
  thunk_FUN_180621380(param_1);
  return lVar4;
}



