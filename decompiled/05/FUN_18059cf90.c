// FUN_18059cf90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18059cf90 */

void FUN_18059cf90(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  code *pcVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  
  puVar1 = *(undefined8 **)param_1[7];
  uVar2 = *(undefined8 *)(*param_1 + 0x98);
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(*param_1 + 0x3e0);
    puVar4 = (undefined8 *)puVar3[0x21a];
    lVar6 = FUN_180573a00(*puVar3,"pshinter");
    if ((((lVar6 != 0) && (puVar4 != (undefined8 *)0x0)) &&
        (pcVar5 = (code *)*puVar4, pcVar5 != (code *)0x0)) && (lVar6 = (*pcVar5)(lVar6), lVar6 != 0)
       ) {
      (**(code **)(lVar6 + 0x10))(*puVar1);
      uVar7 = *(uint *)(puVar3 + 0x115);
      uVar8 = (ulonglong)uVar7;
      while (uVar7 != 0) {
        uVar7 = (int)uVar8 - 1;
        uVar8 = (ulonglong)uVar7;
        (**(code **)(lVar6 + 0x10))(puVar1[uVar8 + 1]);
      }
    }
    FUN_18057abd0(uVar2,puVar1);
  }
  return;
}



