// FUN_1801518c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801518c0 */

void FUN_1801518c0(longlong *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  lVar2 = *param_1;
  if ((ulonglong)(param_1[2] - lVar2 >> 4) < param_2) {
    if (0xfffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_1801136f0();
    }
    lVar3 = param_1[1];
    puVar6 = (undefined8 *)FUN_18015bca0(param_2 << 4);
    puVar4 = (undefined8 *)param_1[1];
    puVar1 = puVar6;
    for (puVar7 = (undefined8 *)*param_1; puVar7 != puVar4; puVar7 = puVar7 + 2) {
      uVar5 = puVar7[1];
      *puVar1 = *puVar7;
      puVar1[1] = uVar5;
      *(undefined1 *)puVar7 = 0;
      puVar7[1] = 0;
      puVar1 = puVar1 + 2;
    }
    FUN_180156b10(param_1,puVar6,lVar3 - lVar2 >> 4,param_2);
  }
  return;
}



