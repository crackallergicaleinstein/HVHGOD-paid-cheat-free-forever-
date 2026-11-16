// FUN_1804e7950 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804e7950 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1804e7950(longlong param_1)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 extraout_XMM0_Qa;
  
  if (*(longlong *)(param_1 + 0xa8) == 0) {
    uVar6 = FUN_1804e9130();
    FUN_1804e2ad0(extraout_XMM0_Qa,uVar6);
  }
  if ((*(longlong *)(param_1 + 0x38) == 0) ||
     (*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x30) == 0)) {
    uVar4 = *(int *)(param_1 + 0x10) - 1;
    uVar4 = (int)uVar4 >> 1 | uVar4;
    uVar4 = (int)uVar4 >> 2 | uVar4;
    uVar4 = (int)uVar4 >> 4 | uVar4;
    uVar4 = (int)uVar4 >> 8 | uVar4;
    uVar5 = *(int *)(param_1 + 0xc) - 1;
    uVar5 = (int)uVar5 >> 1 | uVar5;
    uVar5 = (int)uVar5 >> 2 | uVar5;
    uVar5 = (int)uVar5 >> 4 | uVar5;
    uVar5 = (int)uVar5 >> 8 | uVar5;
    FUN_1804e6dd0(param_1,((int)uVar5 >> 0x10 | uVar5) + 1,((int)uVar4 >> 0x10 | uVar4) + 1);
  }
  lVar7 = FUN_1804b8110();
  if (lVar7 == 0) {
    lVar7 = 0;
  }
  else {
    *(undefined8 *)(lVar7 + 0x50) = 0;
    *(undefined8 *)(lVar7 + 0x58) = 0;
    *(undefined8 *)(lVar7 + 0x60) = 0;
    *(undefined8 *)(lVar7 + 0x68) = 0;
    *(undefined8 *)(lVar7 + 0x70) = 0;
    *(undefined8 *)(lVar7 + 0x78) = 0;
    *(undefined8 *)(lVar7 + 0x80) = 0;
    *(undefined8 *)(lVar7 + 0x88) = 0;
    *(undefined8 *)(lVar7 + 0xa8) = 0;
    *(undefined8 *)(lVar7 + 0xb0) = 0;
    *(undefined8 *)(lVar7 + 0xc0) = 0;
    *(undefined8 *)(lVar7 + 200) = 0;
    *(undefined8 *)(lVar7 + 0xd0) = 0;
    *(undefined8 *)(lVar7 + 0xd8) = 0;
    *(undefined8 *)(lVar7 + 0xe0) = 0;
    puVar8 = (undefined8 *)(lVar7 + 0xfc);
    lVar11 = 0x2e;
    do {
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8 = puVar8 + 2;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    puVar8 = (undefined8 *)(lVar7 + 0x3dc);
    lVar11 = 0x40;
    do {
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8 = puVar8 + 2;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    FUN_18063ab10(lVar7,0,0x7e0);
    *(undefined4 *)(lVar7 + 0xa4) = 0xffffffff;
    *(undefined4 *)(lVar7 + 0x90) = 0xffffffff;
    *(undefined8 *)(lVar7 + 0xf4) = 0xffffffffffffffff;
    *(undefined8 *)(lVar7 + 0xec) = 0xffffffffffffffff;
  }
  *(longlong *)(param_1 + 0xa0) = lVar7;
  pcVar2 = *(code **)(*(longlong *)(param_1 + 0xa8) + 8);
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(param_1);
  }
  plVar9 = *(longlong **)(param_1 + 0x98);
  plVar1 = plVar9 + *(int *)(param_1 + 0x90);
  do {
    if (plVar9 == plVar1) {
LAB_1804e7b42:
      FUN_1804e7d00(param_1);
      FUN_1804e6da0(param_1);
      FUN_1804e41b0(param_1);
      puVar10 = *(undefined8 **)(param_1 + 0x98);
      puVar8 = puVar10 + *(int *)(param_1 + 0x90);
      for (; puVar10 != puVar8; puVar10 = puVar10 + 1) {
        puVar3 = (undefined8 *)*puVar10;
        if (puVar3[3] == param_1) {
          *puVar3 = *(undefined8 *)(param_1 + 0x5c);
          puVar3[1] = *(longlong *)(param_1 + 0xa0) + 0xfc;
          puVar3[2] = *(longlong *)(param_1 + 0xa0) + 0x3dc;
        }
      }
      FUN_1804e9a30();
      return;
    }
    if (*(longlong *)(*plVar9 + 0x70) != 0) {
      *(byte *)(param_1 + 0x51) = (byte)(*(uint *)(*(longlong *)(*plVar9 + 0x70) + 0x2c) >> 4) & 1;
      goto LAB_1804e7b42;
    }
    plVar9 = plVar9 + 1;
  } while( true );
}



