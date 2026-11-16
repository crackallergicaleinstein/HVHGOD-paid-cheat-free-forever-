// FUN_1805fc304 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805fc304 */

UINT * FUN_1805fc304(UINT *param_1)

{
  ushort *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  UINT UVar5;
  undefined8 *puVar6;
  ushort *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  
  UVar5 = ___lc_codepage_func();
  *param_1 = UVar5;
  puVar6 = (undefined8 *)_calloc_base(0x100,2);
  *(undefined8 **)(param_1 + 2) = puVar6;
  if (puVar6 == (undefined8 *)0x0) {
    puVar7 = __pctype_func();
    *(ushort **)(param_1 + 2) = puVar7;
    param_1[4] = 0;
  }
  else {
    puVar7 = __pctype_func();
    lVar9 = 4;
    do {
      uVar8 = *(undefined8 *)(puVar7 + 4);
      *puVar6 = *(undefined8 *)puVar7;
      puVar6[1] = uVar8;
      uVar8 = *(undefined8 *)(puVar7 + 0xc);
      puVar6[2] = *(undefined8 *)(puVar7 + 8);
      puVar6[3] = uVar8;
      uVar8 = *(undefined8 *)(puVar7 + 0x14);
      puVar6[4] = *(undefined8 *)(puVar7 + 0x10);
      puVar6[5] = uVar8;
      uVar8 = *(undefined8 *)(puVar7 + 0x1c);
      puVar6[6] = *(undefined8 *)(puVar7 + 0x18);
      puVar6[7] = uVar8;
      uVar8 = *(undefined8 *)(puVar7 + 0x24);
      puVar6[8] = *(undefined8 *)(puVar7 + 0x20);
      puVar6[9] = uVar8;
      uVar8 = *(undefined8 *)(puVar7 + 0x2c);
      puVar6[10] = *(undefined8 *)(puVar7 + 0x28);
      puVar6[0xb] = uVar8;
      uVar2 = *(undefined4 *)(puVar7 + 0x32);
      uVar3 = *(undefined4 *)(puVar7 + 0x34);
      uVar4 = *(undefined4 *)(puVar7 + 0x36);
      *(undefined4 *)(puVar6 + 0xc) = *(undefined4 *)(puVar7 + 0x30);
      *(undefined4 *)((longlong)puVar6 + 100) = uVar2;
      *(undefined4 *)(puVar6 + 0xd) = uVar3;
      *(undefined4 *)((longlong)puVar6 + 0x6c) = uVar4;
      puVar1 = puVar7 + 0x38;
      uVar8 = *(undefined8 *)(puVar7 + 0x3c);
      puVar7 = puVar7 + 0x40;
      puVar6[0xe] = *(undefined8 *)puVar1;
      puVar6[0xf] = uVar8;
      lVar9 = lVar9 + -1;
      puVar6 = puVar6 + 0x10;
    } while (lVar9 != 0);
    param_1[4] = 1;
  }
  lVar9 = FUN_18061b090();
  lVar9 = *(longlong *)(lVar9 + 8);
  *(longlong *)(param_1 + 6) = lVar9;
  if (lVar9 != 0) {
    uVar8 = FUN_18061bba0();
    *(undefined8 *)(param_1 + 6) = uVar8;
  }
  return param_1;
}



