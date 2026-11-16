// FUN_1805cdca0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805cdca0 */

undefined1 * FUN_1805cdca0(longlong param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined1 *puVar8;
  int local_res8 [2];
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  uVar6 = 0;
  uVar7 = (uint)(*(ushort *)(param_1 + 8) >> 1);
  puVar4 = (undefined1 *)FUN_18057ac40(param_2,1,0,uVar7 + 1,0,local_res8);
  if (local_res8[0] != 0) {
    return (undefined1 *)0x0;
  }
  if (uVar7 != 0) {
    puVar5 = (undefined1 *)(lVar2 + -1);
    puVar8 = puVar4;
    do {
      puVar1 = puVar5 + 1;
      puVar5 = puVar5 + 2;
      uVar3 = (uint)CONCAT11(*puVar1,*puVar5);
      if (uVar3 == 0) break;
      if (0x5f < uVar3 - 0x20) {
        uVar3 = 0x3f;
      }
      uVar6 = uVar6 + 1;
      *puVar8 = (char)uVar3;
      puVar8 = puVar8 + 1;
    } while (uVar6 < uVar7);
  }
  puVar4[uVar6] = 0;
  return puVar4;
}



